#include <iostream>
#include <vector>
using namespace std;

bool judge(vector<int> a, vector<int> b) {
    int index = -1;
    for (int i = 0; i < b.size(); i++) {
        int target = b[i];
        for (int j = 0; j < a.size(); j++) {
            if (a[j] == target) {
                if (index == j - 1) {
                    return true;
                }
                index = j;
                continue;
            }
        }
    }
    return false;
} 

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> A(n1);
    vector<int> B(n2);
    int x;
    for (int i = 0; i < n1; i++) {
        cin >> x;
        A.push_back(x);
    }
    for (int i = 0; i < n1; i++) {
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