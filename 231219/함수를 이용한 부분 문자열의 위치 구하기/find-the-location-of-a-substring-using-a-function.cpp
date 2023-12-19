#include <iostream>
#include <string>
using namespace std;
string str;
string target;

bool bbb(int a) {
    for(int i = 0; i < target.length(); i++) {
        if(str[i + a] != target[i]) {
            return false;
        }
    }
    return true;

}

void aaa(string a, string b) {
    int n1 = a.length();
    int n2 = b.length();
    for(int i = 0; i <= n1 - n2; i++) {
        if(bbb(i)) {
            cout << i;
            return;
        }
    }
    cout << -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> str >> target;
    aaa(str, target);
    return 0;
}