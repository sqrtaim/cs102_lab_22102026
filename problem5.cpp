#include <iostream>
using namespace std;

bool isPrime(int n);

int main() {
    int N;
    cin >> N;
    int count = 0;
    for (int p = 2; p + 2 <= N; p++) {
        if (isPrime(p) && isPrime(p + 2)) {
            cout << "(" << p << "," << p + 2 << ") ";
            count++;
        }
    }
    cout << "count: " << count << endl;
    return 0;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) return false;
    }
    return true;
}