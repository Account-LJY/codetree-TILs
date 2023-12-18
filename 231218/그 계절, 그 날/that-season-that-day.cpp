#include <iostream>
#include <algorithm>
using namespace std;

int many[7] = {1, 3, 5, 7, 8, 10, 12};
int small[5] = {2, 4, 6, 9, 11};

bool aaa(int a) {
    if (a % 4 == 0) {
        if (a % 100 == 0) {
            if (a % 400 == 0) {
                return true;
            }
            return false;
        }
        return true;
    } else {
        return false;
    }
}
  
bool judge(int a, int b, int c) {  // 2077 4 31  spring???
    auto it = find(begin(many), end(many), b);
    if (it != end(many)) {
        if (c <= 31) {
            return true;
        }
    } else {
        if (b == 4 || b == 6 || b == 9 || b == 11) {
            if (c <= 30) {
                return true;
            } else {
                return false;
            }
        } else {
            if (c <= 29 && aaa(a)) {
                return true;
            } else if (c <= 30 && (!aaa(a))) {
                return true;
            } else {
                return true;
            }
        }
    }
}

void season(int a) {
    if (a >= 3 && a <= 5) {
        cout << "Spring";
    } else if(a >= 6 && a <= 8) {
        cout << "Summer";
    } else if(a >= 9 && a <= 11) {
        cout << "Fall";
    } else {
        cout << "Winter";
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int Y, M, D;
    cin >> Y >> M >> D;
    if(judge(Y, M, D)) {
        season(M);
    } else {
        cout << -1;
    }
    return 0;
}