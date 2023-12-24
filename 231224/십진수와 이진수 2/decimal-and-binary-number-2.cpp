#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string n;
    cin >> n;
    int num = 0;
    for (int i = 0; i < n.size(); i++) {
        num = num * 2 + n[i] - '0';
    }   
    num *= 17;
    string a = "";
    while(true) {
        if (num <= 1) {
            a += char(num + '0');
            break;
        }
        char b = char(num % 2 + '0');
        a += b;
        num /= 2;
    }
    for (int i = a.size() - 1; i >= 0; i--) {
        cout << a[i];
    }
    return 0;
}