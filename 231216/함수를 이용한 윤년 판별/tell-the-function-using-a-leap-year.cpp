#include <iostream>
using namespace std;

bool aaa(int a) {
    if (a % 4 == 0) {
        if (a % 100 == 0) {
            if (a % 400 == 0) {
                return true;
            }
            return false;
        } 
        return true;
    } else {
        return false;
    } 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int year;
    cin >> year;
    if(aaa(year)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}