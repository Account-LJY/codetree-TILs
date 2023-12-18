#include <iostream>
#include <string>
using namespace std;

string str;

bool aaa(string str) {
    for (int i = 0; i < str.length() - 1; i++) {
        if(str[i] != str[i + 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> str;
    if(aaa(str)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}