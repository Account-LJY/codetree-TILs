#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;
string T, x;
vector<string> arr;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k >> T;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < T.length(); j++) {
            if (arr[i][j] != T[j]) {
                arr.erase(arr.begin() + i);
                break;
            }
        }
    }
    cout << arr[k - 1];
    return 0;
}