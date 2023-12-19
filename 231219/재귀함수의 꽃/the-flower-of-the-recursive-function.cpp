#include <iostream>
using namespace std;

int n;

void aaa(int a) {
    if (a == 0) {
        return;
    }
    cout << a << " ";
    aaa(a - 1);
    cout << a << " ";
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    aaa(n);
    return 0;
}