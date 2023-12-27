#include <iostream>
using namespace std;

int arr[1000];
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int cnt = 0, Max = -1;
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            if (cnt > Max) {
                Max = cnt;
            }
            cnt = 1;
            continue;
        }
        cnt++;
    }
    if (cnt > Max) {
        cout << cnt;
    } else {
        cout << Max;
    }
    return 0;
}