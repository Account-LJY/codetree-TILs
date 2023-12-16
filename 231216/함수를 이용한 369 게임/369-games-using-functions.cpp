#include <iostream>
using namespace std;

bool bbb(int a) {
    return a % 3 == 0; 
}
bool aaa(int a) {
    int k;
    bool answer = false;
    bool answer1 = bbb(a);
    while(true) {
        k = a % 10;
        if ( k == 3 || k == 6 || k == 9) {
            return !answer;
        }
        a /= 10;
        if (a == 0) {
            break;
        }
    }
    return answer || answer1;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(aaa(i)) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}