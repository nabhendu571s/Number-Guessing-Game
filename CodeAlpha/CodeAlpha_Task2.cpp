#include <iostream>
#include <fstream>
#include <vector>
#include <filesystem>
#include <cstring>

using namespace std;
namespace fs = filesystem;

void printDirectory(const string& path) {
  for (const auto& entry : fs::directory_iterator(path)) {
    if (entry.is_directory()) {
      cout << "[DIR] " << entry.path().filename() << endl;
    } else {
      cout << entry.path().filename() << endl;
    }
  }
}

bool createDirectory(const string& path) {
  try {
    fs::create_directory(path);
    return true;
  } catch (const exception& e) {
    cerr << "Error creating directory: " << e.what() << endl;
    return false;
  }
}

bool copyFile(const string& source, const string& destination) {
  ifstream inFile(source, ios::binary);
  ofstream outFile(destination, ios::binary);

  if (!inFile.is_open() || !outFile.is_open()) {
    cerr << "Error opening files for copy." << endl;
    return false;
  }

  outFile << inFile.rdbuf();
  inFile.close();
  outFile.close();
  return true;
}

bool moveFile(const string& source, const string& destination) {
  if (copyFile(source, destination)) {
    remove(source.c_str());
    return true;
  }
  return false;
}

int main() {
  string currentPath = fs::current_path().string();
  bool running = true;

  while (running) {
    cout << currentPath << " > ";
    string command;
    getline(cin, command);

    if (command == "exit") {
      running = false;
      break;
    } else if (command.substr(0, 3) == "cd ") {
      string newPath = currentPath + "/" + command.substr(3);
      if (fs::exists(newPath)) {
        currentPath = newPath;
      } else {
        cerr << "Directory not found." << endl;
      }
    } else if (command == "ls") {
      printDirectory(currentPath);
    } else if (command.substr(0, 7) == "mkdir ") {
      string dirName = currentPath + "/" + command.substr(7);
      createDirectory(dirName);
    } else if (command.substr(0, 5) == "copy ") {
      // Extract source and destination paths
      int space1 = command.find(' ');
      int space2 = command.find(' ', space1 + 1);
      string source = currentPath + "/" + command.substr(space1 + 1, space2 - space1 - 1);
      string destination = currentPath + "/" + command.substr(space2 + 1);
      copyFile(source, destination);
    } else if (command.substr(0, 5) == "move ") {
      // Extract source and destination paths (similar to copy)
      int space1 = command.find(' ');
      int space2 = command.find(' ', space1 + 1);
      string source = currentPath + "/" + command.substr(space1 + 1, space2 - space1 - 1);
      string destination = currentPath + "/" + command.substr(space2 + 1);
      moveFile(source, destination);
    } else {
      cerr << "Invalid command." << endl;
    }
  }

  return 0;
}
