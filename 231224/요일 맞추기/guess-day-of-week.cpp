#include <iostream>
using namespace std;

int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
int date = 0;

void aaa(int a, int b, int c, int d) {
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
    int day = date % 7;
    cout << days[day];
}

void bbb(int a, int b, int c, int d) {
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
    int day = date % 7;
    cout << days[7 - day];
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    cin >> a >> b >> c >> d; // a/b ~ c/d
    if (num_of_days[a] + b > num_of_days[c] + d) {
        bbb(c, d, a, b);
    } else {
        aaa(a, b, c, d);
    }
    return 0;
}