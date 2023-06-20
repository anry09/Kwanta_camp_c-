#include <iostream>
#include <cstdlib> // Для функції rand()
#include <ctime> // Для ініціалізації генератора випадкових чисел
using namespace std;

const int ROWS = 5; // Кількість рядків у масиві
const int COLS = 5; // Кількість стовпців у масиві

int main() {
    int array[ROWS][COLS];

    // Ініціалізація генератора випадкових чисел
    srand(time(0));

    // Заповнення масиву довільними числами від 10 до 100
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            array[i][j] = rand() % 91 + 10;
        }
    }

    // Виведення масиву
    cout << "Масив:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    // Пошук рядка з максимальною сумою елементів
    int maxSumRow = 0;
    int maxSum = 0;

    for (int i = 0; i < ROWS; i++) {
        int sum = 0;
        for (int j = 0; j < COLS; j++) {
            sum += array[i][j];
        }

        if (sum > maxSum) {
            maxSum = sum;
            maxSumRow = i;
        }
    }

    cout << "Номер рядка з максимальною сумою елементів: " << maxSumRow << endl;

    return 0;
}