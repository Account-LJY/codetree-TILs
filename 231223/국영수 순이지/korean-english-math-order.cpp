#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Info {
    public:
        int kor, eng, mat;
        string name;
        Info(string a = "", int b = 0, int c = 0, int d = 0) {
            this -> name = a;
            this -> kor = b;
            this -> eng = c;
            this -> mat = d;
        }
};

bool cmp(Info a, Info b) {
    if (a.kor == b.kor) {
        if (a.eng == b.eng) {
            return a.mat > b.mat;
        }
        return a.eng > b.eng;
    }
    return a.kor > b.kor;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Info info[10];
    for (int i = 0; i < n; i++) {
        string a;
        int b, c, d;
        cin >> a >> b >> c >> d;
        info[i] = Info(a, b, c, d);
    }
    sort(info, info + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << info[i].name << " " << info[i].kor << " " << info[i].eng << " " << info[i].mat << endl;
    }
    return 0;
}