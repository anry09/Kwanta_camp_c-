#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введіть число: ";
    cin >> N;
    
    bool isPowerOfTwo = true;

    while (N > 2) {
        if (N % 2 != 0) {
            isPowerOfTwo = false;
            break;
        }
        N = N / 2;
    }

    if (isPowerOfTwo)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}