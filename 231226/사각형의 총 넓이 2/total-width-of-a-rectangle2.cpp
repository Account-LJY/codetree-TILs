#include <iostream>
using namespace std;

int arr[201][201];
int offset = 100;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d; // 0 1 4 5
        for (int i = b; i < d; i++) {
            for (int j = a; j < c; j++) {
                if (arr[j + offset][i + offset] != 1) {
                    arr[j + offset][i + offset] = 1;
                }
            }
        }
    }
    int sum = 0;
    for (int i = 0; i <= 200; i++) {
        for (int j = 0; j <= 200; j++) {
            sum += arr[i][j];
        }
    }
    cout << sum;
    return 0;
}