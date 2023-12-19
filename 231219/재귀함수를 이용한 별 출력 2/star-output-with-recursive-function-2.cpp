#include <iostream>
using namespace std;

int n;

void aaa(int a) {
    if (a == 0) {
        return;
    }
    for (int i = 0; i < a; i++) {
        cout << "*" << " ";
    }
    cout << endl;
    aaa(a - 1);
        for (int i = 0; i < a; i++) {
        cout << "*" << " ";
    }
    cout << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    aaa(n);
    return 0;
}