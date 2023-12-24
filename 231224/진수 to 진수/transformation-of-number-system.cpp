#include <iostream>
using namespace std;

int digits[20];

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    string n;
    cin >> a >> b >> n;
    int num = 0;
    
    for (int i = 0; i < n.size(); i++) {
        num = num * a + n[i]- '0';
    }
    int idx = 0;
    
    while (true) {
        if (num < b) {
            digits[idx] = num;
            break;
        }
        digits[idx] = num % b;
        num /= b;
        idx++;
    }

    for (int i = idx; i >= 0; i--) {
        cout << digits[i];
    }
    return 0;
}