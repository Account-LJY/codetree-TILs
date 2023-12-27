#include <iostream>
using namespace std;

int offset = 100;
string arr[201][201];
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a += offset, b += offset, c += offset, d += offset;
        if (i % 2 == 1) {
            for (int i = a; i < c; i++) {
                for (int j = b; j < d; j++) {
                    arr[i][j] = "red";
                }
            }
        } else {
            for (int i = a; i < c; i++) {
                for (int j = b; j < d; j++) {
                    arr[i][j] = "blue";
                }
            }
        }
    }

    int sum = 0;
    for (int i = 0; i <= 200; i++) {
        for (int j = 0; j <= 200; j++) {
            if(arr[i][j] == "blue") {
                sum++;
            }
        }
    }
    cout << sum;
    return 0;
}