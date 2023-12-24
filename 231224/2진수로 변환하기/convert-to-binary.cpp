#include <iostream>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int digits[20];
    int idx = 0;
    while(true) {
        if (n < 2) {
            digits[idx] = 1;
            break;
        }
        digits[idx] = n % 2;
        n /= 2;
        idx++;
    }
    for (int i = idx; i >= 0; i--) {
        cout <<digits[i];
    }
    return 0;
}