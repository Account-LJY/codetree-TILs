#include <iostream>
using namespace std;

int arr[2001][2001];
int offset = 1000;

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < 3; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int j = b; j < d; j++) {
            for (int k = a; k < c; k++) {
                arr[k + offset][j + offset] = i + 1;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i <= 2000; i++) {
        for (int j = 0; j <= 2000; j++) {
            if (arr[i][j] == 1 || arr[i][j] == 2) {
                sum++;
            }
        }
    }
    cout << sum;
    return 0;
}