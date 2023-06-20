#include <iostream>
using namespace std;

int main() {
    int number;
    int count = 0;
    int sum = 0;
    double average;

    cout << "Введіть числа. Для завершення введіть 0:\n";

    do {
        cin >> number;

        if (number != 0) {
            count++;
            sum += number;
        }
    } while (number != 0);

    average = static_cast<double>(sum) / count;

    cout << "Кількість чисел: " << count << endl;
    cout << "Загальна сума: " << sum << endl;
    cout << "Середнє арифметичне: " << average << endl;

    return 0;
}