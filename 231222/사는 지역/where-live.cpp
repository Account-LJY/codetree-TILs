#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Info {
    public:
        string name;
        string addr;
        string city;
        Info(string a = "", string b = "", string c = "") {
            this -> name = a;
            this -> addr = b;
            this -> city = c;
        }
        bool operator<(Info& info) {
            return this -> name < info.name;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string a, b, c;
    cin >> n;
    Info info[10];
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        info[i] = Info(a, b, c);
    }
    sort(info, info + n);
    cout << "name " << info[n - 1].name << endl;
    cout << "addr " << info[n - 1].addr << endl;
    cout << "city " << info[n - 1].city << endl;
    return 0;
}