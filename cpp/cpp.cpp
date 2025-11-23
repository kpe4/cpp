#include <iostream>
#include <string>
using namespace std;


int main() {
    string gender;
    string race;
    string name;

    cout << "Enter your gender, m or f: ";
    cin >> gender;

    if (gender != "m" && gender != "f") {
        cout << "Invalid gender" << endl;
        return 0;
    }

    cout << "Eter your race (human, elf, orc): ";
    cin >> race;

    if (race != "human" && race != "elf" && race != "orc") {
        cout << "Invalid race" << endl;
        return 0;
    }

    cout << "Enter character name: ";
    cin >> name;

    if (name.length() < 2) {
        cout << "Name is too short" << endl;
        return 0;
    }

    cout << "\nCharacter created!" << endl;
    cout << "Gender: " << gender << endl;
    cout << "Race: " << race << endl;
    cout << "Name: " << name << endl;

    return 0;
}
