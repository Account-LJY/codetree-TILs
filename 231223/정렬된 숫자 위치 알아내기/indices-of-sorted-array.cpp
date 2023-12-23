#include <iostream>
#include <algorithm>
using namespace std;

class Info {
    public:
        int el, idx, lidx;
        Info(int a, int b, int c) {
            this -> el = a;
            this -> idx = b;
            this -> lidx = c;
        }
        Info() {}
};

bool cmp1(Info a, Info b) {
    return a.el < b.el;
}

bool cmp2(Info a, Info b) {
    return a.idx < b.idx;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Info info[1000];
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        info[i] = Info(a, i + 1, 0);
    }
    sort(info, info + n, cmp1);
    for (int i = 0; i < n; i++) {
        info[i].lidx = i + 1;
    }
    sort(info, info + n, cmp2);
    for (int i = 0; i < n; i++) {
        cout << info[i].lidx << " ";
    }
    return 0;
}