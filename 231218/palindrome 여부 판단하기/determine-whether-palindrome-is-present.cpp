#include <iostream>
#include <string>
using namespace std;

bool aaa(string s) {
    int size = s.length();
    for (int i = 0; i < size / 2; i++) {
        if(s[i] != s[size - i - 1]) {
            return false;
        }
    } 
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    if(aaa(str)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}