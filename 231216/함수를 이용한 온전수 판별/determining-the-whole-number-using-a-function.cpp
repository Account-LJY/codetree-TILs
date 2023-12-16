#include <iostream>
using namespace std;

bool aaa(int a) {
    if(a % 2 == 0) {
        return false;
    }
    if (a % 10 == 5) {
        return false;
    }
    if (a % 3 == 0 && a % 9 != 0) {
        return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for (int i = n; i <= m; i++) {
        if(aaa(i)) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}