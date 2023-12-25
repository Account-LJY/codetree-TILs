#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

vector<pair<pair<int, int>, string>> vec(200001, make_pair(make_pair(0, 0), ""));

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int start = 100000;
    int Max = -1;
    int Min = 200001;
    for (int j = 0; j < n; j++) {
        int r;
        string dir;
        cin >> r >> dir;
        if (dir == "R") {
            for (int i = start; i < start + r; i++) {
                vec[i].first.first++;
                vec[i].second = "black";
            }
            start += (r - 1);
            if (start > Max) {
                Max = start;
            }
        } else {
            for (int i = start - r + 1; i <= start; i++) {
                vec[i].first.second++;
                vec[i].second = "white";
            }
            start -= (r - 1);
            if (Min > start) {
                Min = start;
            }
        }
    }
    int white = 0, black = 0, gray = 0, cnt = 0;
    string color;
    for (int i = Min; i <= Max; i++) {
        color = vec[i].second;
        if (vec[i].first.first >= 2 && vec[i].first.second >= 2) {
            gray++;
        } else {
            if (color == "white") {
                white++;
            } else {
                black++;
            }
        }
    }
    cout << white << " " << black << " " << gray;
    return 0;
}