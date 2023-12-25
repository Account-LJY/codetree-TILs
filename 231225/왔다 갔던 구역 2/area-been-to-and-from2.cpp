#include <iostream>
#include <vector>
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
            for (int i = start; i < start + r; i++) {
                arr[i]++;
            }
            start += r;
            if (start > Max) {
                Max = start;
            }
        } else {
            for (int i = start - r; i < start; i++) {
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
        if (arr[i] >= 2) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}