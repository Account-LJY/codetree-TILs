#include <iostream>
#include <algorithm> 
using namespace std;

bool judege(int a, int b) {
    if (a > 12 || b > 31) {
        return false;
    }
    int many[7] = {1, 3, 5, 7, 8, 10, 12};
    int small[5] = {2, 4, 6, 9, 11};
    auto it = find(begin(many), end(many), a);
    if (it != end(many)) {
        if (b <= 31) {
            return true;
        }
    } else {
        if (a == 4 || a == 6 || a == 9 || a == 11) {
            if (b <= 30) {
                return true;
            } else {
                return false;
            }
        } else {
            if (b <= 28) {
                return true;
            } else {
                return false;
            }
        }
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    int M, D;
    cin >> M >> D;
    if (judege(M, D)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}