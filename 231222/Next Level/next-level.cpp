#include <iostream>
#include <string>
using namespace std;

class User {
    public:
        string id;
        int level;
        User(string a = "codetree", int b = 10) {
            this -> id = a;
            this -> level = b;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int b;
    cin >> a >> b;
    User info1 = User();
    User info2 = User(a, b);
    cout << "user " << info1.id << " lv " << info1.level << endl;
    cout << "user " << info2.id << " lv " << info2.level << endl;
    return 0;
}