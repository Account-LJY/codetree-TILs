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
    int max = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = arr[i] + arr[2 * n - i - 1];
        if (sum > max) {
            max = sum;
        }
    }
    cout << max;
    return 0;
}