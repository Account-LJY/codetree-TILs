#include <iostream>
#include <string>
using namespace std;

class Info {
    public:
        string name;
        string code;
        Info(string a = "codetree", string b = "50") {
            this -> name = a;
            this -> code = b;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;
    Info info1 = Info();
    Info info2 = Info(a, b);
    cout << "product " << info1.code << " is " << info1.name << endl;
    cout << "product " << info2.code << " is " << info2.name << endl;
    return 0;
}