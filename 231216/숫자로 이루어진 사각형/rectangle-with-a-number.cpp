#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int k = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (k > 9) {
                k = 1;
            }
            cout << k << " ";
            k += 1;
        }
        cout << endl;
    }
    return 0;
}