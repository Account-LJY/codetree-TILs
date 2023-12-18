#include <iostream>
#include <vector>
using namespace std;

int n1, n2;
vector<int> A;
vector<int> B;
    
bool aaa(int i) {
    for (int j = 0; j < n2; j++) {
        if(A[i + j] != B[j]) {
            return false;
        }
    }
    return true;
}

bool judge(vector<int> a, vector<int> b) {
    for (int i = 0; i <= n1 - n2; i++) {
        if(aaa(i)) {
            return true;
        } 
    }
    return false;
}

int main() {
    cin >> n1 >> n2;
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