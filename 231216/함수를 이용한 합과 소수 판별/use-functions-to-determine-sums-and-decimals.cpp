#include <iostream>
using namespace std;

bool isPrime(int a) {
    if (a == 1) {
        return false;
    }
    for (int i = 2; i <= a / 2; i++) {
        if(a % i == 0) {
            return false;
        }
    }
    return true;
}

bool bbb(int a) {
    int sum = 0;
    int k;
    while(true) {
        k = a % 10;
        a /= 10;
        sum += k;
        if (a == 0) break;
    }
    return sum % 2 == 0;
}
bool aaa(int a) {
    return isPrime(a) && bbb(a);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (aaa(i)) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}