#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введіть число N: ";
    cin >> N;

    int steps = 0;
    int maxElement = N;

    while (N != 1) {
        if (N % 2 == 0) {
            N /= 2;
        } else {
            N = N * 3 + 1;
        }

        steps++;
        if (N > maxElement) {
            maxElement = N;
        }
    }

    cout << "Послідовність Хейеса: " << maxElement << " ";

    while (maxElement != 1) {
        if (maxElement % 2 == 0) {
            maxElement /= 2;
        } else {
            maxElement = maxElement * 3 + 1;
        }

        cout << maxElement << " ";
    }

    cout << endl;
    cout << "Кількість кроків: " << steps << endl;
    cout << "Максимальний елемент: " << maxElement << endl;

    return 0;
}