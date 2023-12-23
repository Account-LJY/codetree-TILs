#include <iostream>
#include <algorithm>
using namespace std;

class Info {
    public:
        int el, idx;
        Info(int a = 0, int b = 0) {
            this -> el = a;
            this -> idx = b;
        }

};

bool cmp(Info a, Info b) {
    if (a.el != b.el) {
        return a.el < b.el;
    }
    return a.idx < b.idx;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Info info[n];
    int answer[1000];
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        info[i] = Info(a, i);
    }
    sort(info, info + n, cmp);
    for (int i = 0; i < n; i++) {
        answer[info[i].idx] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }
    return 0;
}