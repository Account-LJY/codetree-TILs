#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[8];
    int num = 0, idx = 0;
    while(true) {
        if (n == 0) {
            break;
        }
        arr[idx] = n % 10;
        n /= 10;
        idx++;
    }
    for (int i = idx - 1; i >= 0; i--) {
        num = num * 2 + arr[i];
    }
    cout << num;
    return 0;
}