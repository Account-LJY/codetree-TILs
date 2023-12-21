#include <iostream>
#include <algorithm>

using namespace std;

int n;
int A[100];
int B[100];

bool aaa(int A[], int B[]) {
    for (int i = 0; i < n; i++) {
        if (A[i] != B[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    sort(A, A + n);
    sort(B, B + n);
    if(aaa(A, B)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}