#include <iostream>
using namespace std;

int n;
int ans;
int aaa(int a) {
    if (a == 1) {
        return ans;
    }
    if (a % 2 == 0) {
        a /= 2;
    } else if (a % 2 == 1) {
        a /= 3;
    }
    ans += 1;
    return aaa(a);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    cout << aaa(n);
    return 0;
}