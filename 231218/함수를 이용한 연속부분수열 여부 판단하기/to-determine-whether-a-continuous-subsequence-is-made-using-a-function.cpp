#include <iostream>
#include <vector>
using namespace std;

bool judge(vector<int> a, vector<int> b) {
    int index = -1;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[0]) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        return false;
    }
    int f = 1;
    for (int i = index + 1; i < index + b.size(); i++) {
        if (a[i] != b[f]) {
            return false;
        }
        f++;
    }
    return true;
} 

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> A;
    vector<int> B;
    int x;
    for (int i = 0; i < n1; i++) {
        cin >> x;
        A.push_back(x);
    }
    for (int i = 0; i < n2; i++) {
        cin >> x;
        B.push_back(x);
    }
    if (judge(A, B)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}