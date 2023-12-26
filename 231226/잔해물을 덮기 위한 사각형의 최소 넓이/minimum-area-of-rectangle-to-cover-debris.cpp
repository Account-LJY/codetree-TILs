#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[2001][2001];
int offset = 1000;
vector<pair<int, int>> vec;

bool cmp1(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

bool cmp2(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < 2; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int j = a; j < c; j++) {
            for (int k = b; k < d; k++) {
                if (i == 1) {
                    arr[j][k] = 2;
                } else {
                    arr[j][k] = 1;
                }
            }
        }
    }

    for (int i = 0; i <= 2000; i++) {
        for (int j = 0; j <= 2000; j++) {
            if (arr[i][j] == 1) {
                vec.push_back({i, j}); 
            }
        }
    }
    int n = vec.size();
    sort(vec.begin(), vec.end(), cmp1);
    int garo = vec[n - 1].first - vec[0].first;
    sort(vec.begin(), vec.end(), cmp2);
    int sero = vec[n - 1].second - vec[0].second;
    cout << (garo + 1) * (sero + 1);
    return 0;
}