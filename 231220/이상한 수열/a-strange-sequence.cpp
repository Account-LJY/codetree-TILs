#include <iostream>

using namespace std;
int n;

int aaa(int a) {
    if (a == 1) {
        return 1;
    } else if(a == 2) {
        return 2;
    }
    return aaa(a / 3) + aaa(a - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    cout << aaa(n);
    return 0;
}