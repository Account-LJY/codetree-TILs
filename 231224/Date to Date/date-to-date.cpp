#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    int date = 1;
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> a >> b >> c >> d;
    while(true) {
        if (a == c && b == d) {
            break;
        }
        date++;
        b++;
        if (b > num_of_days[a]) {
            a += 1;
            b = 1;
        }
    }
    cout << date;
    return 0;
}