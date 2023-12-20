#include <iostream>
using namespace std;

int n;

int aaa(int a) {
    if (a == 1 || a == 2) {
        return 1;
    }
    return aaa(a - 1) + aaa(a - 2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    cout << aaa(n);
    return 0;
}