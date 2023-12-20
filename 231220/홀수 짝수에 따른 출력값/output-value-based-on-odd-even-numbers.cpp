#include <iostream>
using namespace std;

int n;

int aaa(int a) {
    if (a == 2) {
        return 2;
    }
    return a + aaa(a - 2);
}

int bbb(int a) {
    if (a == 1) {
        return 1;
    }
    return a + bbb(a - 2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    if (n % 2 == 0) {
        cout << aaa(n);
    } else {
        cout << bbb(n);
    }
    return 0;
}