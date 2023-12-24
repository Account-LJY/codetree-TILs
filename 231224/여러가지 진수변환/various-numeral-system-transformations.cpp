#include <iostream>
using namespace std;

int arr[20];

void aaa(int a, int b) {
    int idx = 0;
    while(true) {
        if(a < b) {
            arr[idx] = a;
            break;
        }
        arr[idx] = a % b;
        a /= b;
        idx++;
    }
    for(int i = idx; i >= 0; i--) {
        cout << arr[i];
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, b;
    cin >> n >> b;
    aaa(n, b);
    return 0;
}