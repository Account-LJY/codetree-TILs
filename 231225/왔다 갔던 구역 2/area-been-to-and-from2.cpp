#include <iostream>
using namespace std;

int arr[2001];

int main() {
    int n;
    cin >> n;
    int start = 1000;
    int Max = -1;
    int Min = 2001;
    for (int j = 0; j < n; j++) {
        int r;
        string dir;
        cin >> r >> dir;
        if (dir == "R") {
            for (int i = start; i <= start + r; i++) {
                arr[i]++;
            }
            start += r;
            if (start > Max) {
                Max = start;
            }
        } else {
            for (int i = start; i >= start - r; i--) {
                arr[i]++;
            }
            start -= r;
            if (Min > start) {
                Min = start;
            }
        }
    }

    int r = 0;
    int ans = 0;
    for (int i = Min; i <= Max; i++) {
        if (i == Max) {
            ans += r;
        }
        if(arr[i] >= 2) {
            r++;
        }
        if (arr[i] < 2 && arr[i - 1] >= 2) {
            ans += (r - 1);
            r = 0;
        }
    }
    cout << ans;
    return 0;
}