#include <iostream>
using namespace std;

int n1, n2, n3;

int bbb(int a) {
    if (a == 0) {
        return 0;
    }
    int c = a % 10;
    a /= 10;
    return bbb(a) + c;
}

int aaa(int a, int b, int c) {
    int d = a * b * c;
    return bbb(d);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n1 >> n2 >> n3;
    cout << aaa(n1, n2, n3);
    return 0;
}