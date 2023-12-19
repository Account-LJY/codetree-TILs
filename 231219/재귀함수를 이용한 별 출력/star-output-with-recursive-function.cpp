#include <iostream>
using namespace std;

int n;

void print(int a) {
    if(a == 0) {
        return;
    }
    print(a - 1);
    for (int i = 0; i < a; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    print(n);
    return 0;
}