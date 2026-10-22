#include <iostream>
using namespace std;

long long sumRange(int a, int b);

int main() {
    int a, b;
    cin >> a >> b;
    cout << sumRange(a, b) << endl;
    return 0;
}

long long sumRange(int a, int b) {
    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }
    long long sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}