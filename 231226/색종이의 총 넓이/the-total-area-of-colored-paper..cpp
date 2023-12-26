#include <iostream>
using namespace std;

int offset = 100;
int arr[201][201];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        for (int i = a; i < a + 8; i++) {
            for (int j = b; j < b + 8; j++) {
                if (arr[i + offset][j + offset] == 0) {
                    arr[i + offset][j + offset] = 1;
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