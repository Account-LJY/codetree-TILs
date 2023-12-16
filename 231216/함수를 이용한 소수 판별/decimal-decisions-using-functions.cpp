#include <iostream>
using namespace std;

bool isPrime(int a) {
    for(int i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int sum = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}