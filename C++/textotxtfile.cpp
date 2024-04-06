#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inputFile("t1.txt");
if (!inputFile.is_open()) {
cerr << "Error opening t1.txt" <<endl;
return 1; 
}
ofstream outputFile("t2.txt");
if (!outputFile.is_open()) {
cerr << "Error opening t2.txt" <<endl;
return 1;
}
char ch;
while (inputFile.get(ch)) {
outputFile.put(ch);
}
inputFile.close();
outputFile.close();
cout << "Contents copied successfully from t1.txt to t2.txt." <<endl;
return 0; 
}