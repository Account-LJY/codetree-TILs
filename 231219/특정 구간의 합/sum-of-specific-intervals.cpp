#include <iostream>
using namespace std;

int n, m, a1, a2;
int a[100];

void aaa(int n1, int n2) {
    int sum = 0;
    for(int i = n1 - 1; i <= n2 - 1; i++) {
        sum += a[i];
    }
    cout << sum << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> a1 >> a2;
        aaa(a1, a2);
    }
    return 0;
}