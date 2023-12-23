#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

class Info {
    public: 
        string name;
        int height;
        float weight;
        Info(string a, int b, float c) {
            this -> name = a;
            this -> height = b;
            this -> weight = c;
        }
        Info() {}
};

bool cmp1(Info a, Info b) {
    return a.name < b.name;
}

bool cmp2(Info a, Info b) {
    return a.height > b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    Info info[5];
    for (int i = 0; i < 5; i++) {
        string a;
        int b;
        float c;
        cin >> a >> b >> c;
        info[i] = Info(a, b, c);
    }
    sort(info, info + 5, cmp1);

    cout << "name" << endl;
    for (int i = 0; i < 5; i++) {
        cout << info[i].name << " " << info[i].height << " " << fixed << setprecision(1) << info[i].weight << endl;
    }

    sort(info, info + 5, cmp2);
    cout << "\nheight" << endl;
    for (int i = 0; i < 5; i++) {
        cout << info[i].name << " " << info[i].height << " " << fixed << setprecision(1) << info[i].weight << endl;
    }
    return 0; 
}