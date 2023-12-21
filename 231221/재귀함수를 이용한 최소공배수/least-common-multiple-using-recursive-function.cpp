#include <iostream>
using namespace std;

int n;
int arr[10];

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}


int aaa(int arr[], int n, int index) {
    if (index == n - 1) {
        return arr[index];
    }
    arr[index + 1] = arr[index] * arr[index + 1] / gcd(arr[index], arr[index + 1]);
    return aaa(arr, n, index + 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << aaa(arr, n, 0);
    return 0;
}