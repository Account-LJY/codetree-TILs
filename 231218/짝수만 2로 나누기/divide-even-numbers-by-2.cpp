#include <iostream>
using namespace std;

int n;

void aaa(int a[]) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            a[i] /= 2;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int a[50];    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    aaa(a);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}