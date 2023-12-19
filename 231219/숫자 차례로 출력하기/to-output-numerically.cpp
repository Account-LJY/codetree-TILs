#include <iostream>
using namespace std;

int n;

void print1(int a) {
    if (a == 0) {
        return; 
    }
    print1(a - 1);
    cout << a << " ";
}

void print2(int a) {
    if (a == 0) {
        return; 
    }
    cout << a << " ";
    print2(a - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    print1(n);
    cout << endl;
    print2(n);
    return 0;
}