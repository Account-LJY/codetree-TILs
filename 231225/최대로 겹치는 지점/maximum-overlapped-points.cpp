#include <iostream>
#include <algorithm>
using namespace std;

int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int most = 0;
    for (int i = 0; i < n; i++) {
        int s, f;
        cin >> s >> f;
        if (f > most) {
            most = f;
        }
        for (int i = s; i <= f; i++) {
            arr[i]++;
        }
    }
    sort(arr, arr + most);
    cout << arr[most - 1];
    return 0;
}