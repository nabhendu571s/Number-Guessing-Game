#include<bits/stdc++.h>
using namespace std;
int main() {
    string playerName;
    char choice;
    int health = 100;
    int gold = 0;
    cout << "Welcome to the Adventure Game!\n";
    cout << "Enter your name: ";
    getline(cin, playerName);
    cout << "\nHello, " << playerName << "! You embark on a thrilling adventure.\n";
    cout << "Your current health is " << health << " and you have " << gold << " gold coins.\n";
    cout << "\nYou find yourself at a crossroad. Do you go left (L) or right (R)? ";
    cin >> choice;
    if (choice == 'L' || choice == 'l') {
        cout << "\nYou chose to go left. You encounter a merchant selling potions.\n";
        cout << "Do you want to buy a potion for 20 gold coins? (Y/N) ";
        cin >> choice;
        if (choice == 'Y' || choice == 'y') {
            if (gold >= 20) {
                gold -= 20;
                health += 30;
                cout << "\nYou bought a potion and restored 30 health points.\n";
            } else {
                cout << "\nYou don't have enough gold to buy a potion.\n";
            }
        } else {
            cout << "\nYou decided not to buy a potion.\n";
        }
    } else if (choice == 'R' || choice == 'r') {
        cout << "\nYou chose to go right. You stumble upon a hidden treasure chest!\n";
        gold += 50;
        cout << "You found 50 gold coins in the treasure chest.\n";
    } else {
        cout << "\nInvalid choice. The adventure ends here.\n";
        return 0;
    }
    cout << "\nAfter your adventure, your health is " << health << " and you have " << gold << " gold coins.\n";

    if (health <= 0) {
        cout << "\nOh no, you have run out of health. Game Over!\n";
    } else {
        cout << "\nCongratulations, " << playerName << "! You successfully completed the adventure!\n";
    }
    return 0;
}
