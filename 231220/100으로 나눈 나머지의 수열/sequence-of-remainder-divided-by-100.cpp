#include <iostream>
using namespace std;

int aaa(int a) {
    if (a == 1) {
        return 2;
    } else if (a == 2) {
        return 4;
    }
    return aaa(a - 2) * aaa(a - 1) % 100;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << aaa(n);
    return 0;
}