#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// Function to convert input to lowercase
string toLowercase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}
// Function to find keywords in the user's input
bool findKeyword(const string& input, const vector<string>& keywords) {
    for (const string& keyword : keywords) {
        if (toLowercase(input).find(keyword) != string::npos) {
            return true;
        }
    }
    return false;
}
// Function to generate a random response
string getRandomResponse(const vector<string>& responses) {
    int index = rand() % responses.size();
    return responses[index];
}
int main() {
    vector<string> greetings = {"hello", "hi", "hey"};
    vector<string> farewells = {"goodbye", "bye", "see you"};
    vector<string> questions = {
        "how are you",
        "what is your name",
        "tell me a joke",
        "what is the meaning of life"
    };
    vector<string> responses = {
        "I'm doing well, thank you!",
        "My name is Chatbot. What can I do for you?",
        "Why don't skeletons fight each other? They don't have the guts!",
        "The meaning of life is a complex philosophical question!"
    };
 //   srand(index(0)); // Initialize random seed
    string userInput;
    cout << "Hello! I'm a chatbot. How can I help you today?\n";
    while (true) {
        cout << "User: ";
        getline(cin, userInput);
        if (findKeyword(userInput, greetings)) {
            cout << "Chatbot: " << getRandomResponse(responses) << endl;
        } else if (findKeyword(userInput, farewells)) {
            cout << "Chatbot: Goodbye! Have a great day.\n";
            break;
        } else if (findKeyword(userInput, questions)) {
            cout << "Chatbot: " << getRandomResponse(responses) << endl;
        } else {
            cout << "Chatbot: I'm not sure what you're asking. Can you please rephrase?\n";
        }
    }
    return 0;
}
