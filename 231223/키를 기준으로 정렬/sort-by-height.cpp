#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Info {
    public:
        string name;
        int height;
        int weight;
        Info(string a = "", int b = 0, int c = 0) {
            this -> name = a;
            this -> height = b;
            this -> weight = c;
        }
};

bool cmp(Info a, Info b) {
    return a.height < b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Info info[10];
    for (int i = 0; i < n; i++) {
        string a;
        int b, c;
        cin >> a >> b >> c;
        info[i] = Info(a, b, c);
    }
    sort(info, info + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << info[i].name << " " << info[i].height << " " << info[i].weight << endl;
    }
    return 0;
}