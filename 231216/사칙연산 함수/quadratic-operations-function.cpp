#include <iostream>
using namespace std;

int aaa(int a, char o, int b) {
    int result;
    if (o == '+') {
        result =  a + b;
    } else if (o == '-') {
        result = a - b;
    } else if (o == '*') {
        result = a * b;
    } else if (o == '/') {
        result = a / b;
    }
    return result;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    char o;
    cin >> a >> o >> c;
    if (o == '+' || o == '-' || o == '*' || o == '/') {
        cout << a << " " << o << " " << c << " = " << aaa(a, o, c);
    } else {
        cout << "False";
    }
    return 0;
}