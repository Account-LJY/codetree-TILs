#include <iostream>
#include <algorithm>
using namespace std;

int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        int s, f;
        cin >> s >> f;
        for (int i = s; i <= f; i++) {
            arr[i]++;
        }
    }
    sort(arr, arr + n);
    cout << arr[n - 1];
    return 0;
}