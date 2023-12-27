#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000];

int aaa(int a) {
    if (a < 0) {
        return -1;
    }
    return 1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0, Max = -1;
    for (int i = 0; i < n; i++) {
        if ( i >= 1 && aaa(arr[i]) == aaa(arr[i - 1])) {
            cnt++;
        } else {
            cnt = 1;
        }
        Max = max(cnt, Max);
    }
    cout << Max;
    return 0;
}