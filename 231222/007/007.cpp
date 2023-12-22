#include <iostream>
#include <string>
using namespace std;

struct Info {
    string code;
    string place;
    string time;
    Info(string a, string b, string c) {
        this -> code = a;
        this -> place = b;
        this -> time = c;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b, c;
    cin >> a >> b >> c;
    Info info = Info(a, b, c);
    cout << "secret code : " << info.code << endl;
    cout << "meeting point : " << info.place << endl;
    cout << "time : " << info.time << endl;
    return 0;
}