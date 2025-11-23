#include <iostream>
#include <string>
using namespace std;


int main() {
    string gender;
    string race;
    string name;

    cout << "Введите пол, m или f: ";
    cin >> gender;

    if (gender != "m" && gender != "f") {
        cout << "Неверный пол" << endl;
        return 0;
    }

    cout << "Введите расу (human, elf, orc): ";
    cin >> race;

    if (race != "human" && race != "elf" && race != "orc") {
        cout << "Неверная раса" << endl;
        return 0;
    }

    cout << "Введите ник персонажа: ";
    cin >> name;

    if (name.length() < 2) {
        cout << "У тебя слишком маленький(ник)" << endl;
        return 0;
    }

    cout << "\nПерсонаж создан!" << endl;
    cout << "Пол: " << gender << endl;
    cout << "Раса: " << race << endl;
    cout << "Имя: " << name << endl;

    return 0;
}
