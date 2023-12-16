#include <iostream>
#include <cmath>
using namespace std;

int aaa(int a, int b) {
    return pow(a,b);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    cout << aaa(a,b);
    return 0;
}