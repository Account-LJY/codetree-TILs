#include <iostream>
using namespace std;

int n;
int a[50];

void aaa(int a[]) {
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            a[i] = -a[i];
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    aaa(a);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}