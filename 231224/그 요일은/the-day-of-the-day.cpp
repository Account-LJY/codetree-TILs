#include <iostream>
using namespace std;

int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int Sum(int a, int b) {
    int date = 0;;
    for (int i = 1; i < a; i++) {
        date += num_of_days[i];
    }
    date += b;
    return date;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    string e;
    cin >> a >> b >> c >> d >> e;
    int diff = Sum(c, d) - Sum(a, b); // date
    int week = diff / 7;
    int day = diff % 7;
    if (day == 0 && e == "Mon") {
        cout << week;
        return 0;
    }
    for (int i = 1; i <= day; i++) {
        if (e == days[i]) {
            week++;
            break;
        }
    }
    cout << week;
    return 0;
}