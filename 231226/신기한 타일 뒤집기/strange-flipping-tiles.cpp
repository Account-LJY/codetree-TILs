#include <iostream>
using namespace std;

string arr[200001] = {"gray", };

int start = 100000;
int Min = 200001;
int Max = -1;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string dir;
        int r;
        cin >> r >> dir;
        if (dir == "R") {
            for (int i = start; i < start + r; i++) {
                arr[i] = "black";      
            }
            start += (r - 1);
            if (start > Max) {
                Max = start;
            }
        } else {
            for (int i = start - r + 1; i <= start; i++) {
                arr[i] = "white";
            }
            start -= (r - 1);
        }
        if (start < Min) {
            Min = start;
        }
    }
    int white = 0, black = 0;
    for (int i = Min; i <= Max; i++) {
        if (arr[i] == "white") {
            white++;
        } else {
            black++;
        }
    }
    cout << white << " " << black;
    return 0;
}