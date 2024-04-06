#include<bits/stdc++.h>
using namespace std;
void displayQuestion(int& score) {
    string question;
    string optionA, optionB, optionC, optionD;
    char correctAnswer;
    cout << "Question: What is the capital of France?" << endl;
    cout << "A. Paris" << endl;
    cout << "B. London" << endl;
    cout << "C. Rome" << endl;
    cout << "D. Berlin" << endl;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> correctAnswer;
    switch (correctAnswer) {
        case 'A':
        case 'a':
            cout << "Correct! Paris is the capital of France.\n";
            score += 10;
            break;
        case 'B':
        case 'b':
        case 'C':
        case 'c':
        case 'D':
        case 'd':
            cout << "Incorrect! The correct answer is A. Paris.\n";
            break;
        default:
            cout << "Invalid input! The correct answer is A. Paris.\n";
            break;
    }
}
int main() {
    int score = 0;
    int totalTime = 30; // Total time for the quiz in seconds
    time_t startTime, currentTime;
    cout << "Welcome to the Quiz Game!\n";
    cout << "You have " << totalTime << " seconds to answer each question.\n";
    char playAgain;
    do {
        score = 0; // Reset the score for a new quiz
        startTime = time(NULL); // Get the current time
        // Display questions until time runs out
        do {
            displayQuestion(score);
            currentTime = time(NULL);
        } while (difftime(currentTime, startTime) < totalTime);
        cout << "\nTime's up! Your final score is: " << score << " points\n";
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');
    cout << "Thanks for playing the Quiz Game!\n";
    return 0;
}
