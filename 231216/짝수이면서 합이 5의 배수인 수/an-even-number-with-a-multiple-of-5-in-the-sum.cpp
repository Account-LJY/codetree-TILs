#include <iostream>
using namespace std;

bool aaa(int a) {
    if (a % 2 != 0) {
        return false;
    }
    int sum = 0;
    int k;
    while(true) {
        k = a % 10;
        a = a / 10;
        sum += k;
        if (a == 0) {
            break;
        }
    }
    return sum != 0 && sum % 5 == 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if(aaa(n)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}