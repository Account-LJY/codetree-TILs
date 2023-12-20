#include <iostream>
using namespace std;

int count;

int aaa(int a) {
    if (a == 1) {
        return count;
    }
    count += 1;
    if (a % 2 == 0) {
        a /= 2;
    } else if (a % 2 == 1) {
        a = a * 3 + 1;
    }
    return  aaa(a);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << aaa(n);
    return 0;
}