#include <iostream>
#include <algorithm>
using namespace std;

int arr[201];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int s, f;
        cin >> s >> f;
        for (int i = s; i < f; i++) {
            arr[100 + i]++;
        }
    }
    sort(arr, arr + 201);
    cout << arr[200];
    return 0;
}