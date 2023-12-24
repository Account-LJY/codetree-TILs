#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    int time = 0;
    cin >> a >> b >> c;
    int d = 11, e = 11, f = 11;
    if (a <= 11 && b <= 10) {
        cout << -1;
        return 0;
    } else if (a <= 11 && b <= 11 && c < 11) {
        cout << -1;
        return 0;
    }
    while(true) {
        if (d == a && e == b && f == c) {
            break;
        }
        time++;
        f++;
        if (f == 60) {
            e += 1;
            f = 0;
        }
        if (e == 24) {
            d += 1;
            e = 0;
        }

    }
    cout << time;
    return 0;
}