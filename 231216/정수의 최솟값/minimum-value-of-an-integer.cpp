#include <iostream>
using namespace std;

int aaa(int a, int b, int c) {
  int min = a;
  if (min > b) {
    min = b;
  }
  if (min > c) {
    min = c;
  }
  return min;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    cout << aaa(a, b, c);
    return 0;
}