#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    int c = a % b;
    return gcd(b, c);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    cout << (n * m) / gcd(n, m);
    return 0;
}