#include <iostream>
using namespace std;

int n;
int arr[100];
int m = arr[n];
int aaa(int a) {
    if (a == -1) {
        return m;
    }
    if (arr[a] > m) {
        m = arr[a];
        return aaa(a - 1);
    } else if(arr[a] <= m) {
        return aaa(a - 1);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << aaa(n);
    return 0;
}