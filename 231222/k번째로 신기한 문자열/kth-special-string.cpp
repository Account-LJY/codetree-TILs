#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;
string T, x;
vector<string> arr;
vector<string> res;

bool aaa(string a, string b) {
    for (int i = 0; i < b.length(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k >> T;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        if(aaa(arr[i], T)) {
            res.push_back(arr[i]);
        }
    }
    sort(res.begin(), res.end());
    cout << res[k - 1];
    return 0;
}