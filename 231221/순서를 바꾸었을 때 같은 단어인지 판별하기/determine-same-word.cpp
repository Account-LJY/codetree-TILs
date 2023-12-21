#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string str1;
string str2;
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> str1 >> str2;
    if (str1.length() != str2.length()) {
        cout << "No";
    } else {
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        for (int i = 0; i < str1.length(); i++) {
            if (str1[i] != str2[i]) {
                cout << "No";
                return 0;
            }
        }
        cout << "Yes";
    } 
    return 0;
}