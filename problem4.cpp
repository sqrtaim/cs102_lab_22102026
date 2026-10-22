#include <iostream>
using namespace std;

int smallestrepunitdivbyk(int k);

int main() {
int k;
cin >> k;
cout << smallestrepunitdivbyk(k) << endl;
return 0;
}

int smallestrepunitdivbyk(int k) {
int r = 0;
for (int i = 1; i <= k; i++) {
r = (r * 10 + 1) % k;
if (r == 0) return i;
}
    return -1;
}