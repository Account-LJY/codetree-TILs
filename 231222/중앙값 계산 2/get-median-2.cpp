#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100];

void aaa(int n) {
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << arr[i] << " ";
            continue;
        }
        if (i % 2 == 0) {
            sort(arr, arr + i + 1);
            cout << arr[i / 2] << " ";
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    aaa(n);
    return 0;
}