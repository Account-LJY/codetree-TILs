#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    int time = 0;
    cin >> a >> b >> c >> d;
    while(true) {
        if (a == c && b == d) {
            break;
        }
        time++;
        b++;
        if (b == 60) {
            a += 1;
            b = 0;
        }
    }
    cout << time;
    return 0;
}