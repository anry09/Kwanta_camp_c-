#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return (n != 0) && ((n & (n - 1)) == 0);
}

int main() {
    int N;
    cout << "Введіть число N: ";
    cin >> N;

    if (isPowerOfTwo(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}