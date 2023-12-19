#include <iostream>
using namespace std;

int n;

void hello(int n) {
    if (n == 0) {
        return;
    }
    hello(n - 1);
    cout << "HelloWorld" << endl;
}


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    hello(n);
    return 0;
}