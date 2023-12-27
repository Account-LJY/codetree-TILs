#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0, Max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > k) {
            cnt++;
        }
        else {
            cnt = 0;
        }
        Max = max(Max, cnt);
    }
    cout << Max;
    return 0;
}