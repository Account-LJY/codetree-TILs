#include <iostream>
#include <string>
using namespace std;

class Info {
    public:
        string code;
        string color;
        int second;
        Info(string a, string b, int c) {
            this -> code = a;
            this -> color = b;
            this -> second = c;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    int c;
    cin >> a >> b >> c;
    Info info = Info(a, b, c);
    cout << "code : " << info.code << endl;
    cout << "color : " << info.color << endl;
    cout << "second : " << info.second << endl;
    return 0;
}