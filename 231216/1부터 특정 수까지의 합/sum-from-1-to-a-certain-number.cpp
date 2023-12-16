#include <iostream>
using namespace std;

int aaa(int a) {
    int sum = 0;
    int finish = a;
    for (int i = 1; i <= finish; i++) {
        sum += i;
    }
    sum /= 10;
    return sum;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int result = aaa(n);
    cout << result;
    return 0;
}