#include <iostream>
using namespace std;

int n, b, c;
int sum = 0;
void aaa(int a) {
    if (a == 0) {
        return;
    }
    b = a % 10;
    a /= 10;
    sum += b * b;
    aaa(a);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    aaa(n);
    cout << sum;
    return 0;
}