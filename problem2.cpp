#include <iostream>
using namespace std;

int digitProduct(int n) {
    if (n == 0) return 0;
    int p = 1;
    while (n > 0) {
        p *= n % 10;
        n /= 10;
    }
    return p;
}

int main() {
    int n;
    cin >> n;
    cout << digitProduct(n) << endl;
    return 0;
}