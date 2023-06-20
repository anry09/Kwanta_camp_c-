
#include <iostream>
using namespace std;

int main() {
    char symbol;
    int length;
    int choice;

    cout << "Оберіть напрям лінії:\n";
    cout << "1. Вертикальна\n";
    cout << "2. Горизонтальна\n";
    cout << "Ваш вибір: ";
    cin >> choice;

    cout << "Введіть символ: ";
    cin >> symbol;

    cout << "Введіть довжину лінії: ";
    cin >> length;

    if (choice == 1) {
        // Вертикальна лінія
        for (int i = 0; i < length; i++) {
            cout << symbol << endl;
        }
    } else if (choice == 2) {
        // Горизонтальна лінія
        for (int i = 0; i < length; i++) {
            cout << symbol;
        }
        cout << endl;
    } else {
        cout << "Невірний вибір напряму лінії!\n";
    }

    return 0;
}