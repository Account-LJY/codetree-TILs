#include <iostream>
using namespace std;

int n, m;
int a[100];

void aaa(int a[], int b) {
    int sum = 0;
    while(b != 1) {
        sum += a[b - 1];
        if (b % 2 == 0) {
            b /= 2;
        } else {
            b -= 1;
        }
    }
    sum += a[0];
    cout << sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    aaa(a, m);
    return 0;
}