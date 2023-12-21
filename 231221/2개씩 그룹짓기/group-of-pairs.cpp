#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[1000];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 2 * n);
    int m = 0;
    for (int i = 0; i < n; i++) {
        int sum = arr[i] + arr[2*n - 1 - i];
        if (sum > m) {
            m = sum;
        }
    }
    cout << m;
    return 0;
}