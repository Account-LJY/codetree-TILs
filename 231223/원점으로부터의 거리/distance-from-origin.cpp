#include <iostream>
#include <algorithm>
using namespace std;

class Coord {
    public:
        int x, y, seq, ran;
        Coord(int a, int b, int c, int d) {
            this -> x = a;
            this -> y = b;
            this -> seq = c;
            this -> ran = d;
        }
        Coord() {}
};

bool cmp(Coord a, Coord b) {
    if (a.ran == b.ran) {
        return a.seq < b.seq;
    }
    return a.ran < b.ran;
}

int aaa(int a, int b) {
    if (a < 0) {
        a = -a;
    };
    if (b < 0) {
        b = -b;
    }
    return a + b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Coord coords[n];
    for (int i = 0; i < n; i++) {
        int a, b, ran;
        cin >> a >> b;
        ran = aaa(a, b);
        coords[i] = Coord(a, b, i + 1, ran);
    }
    sort(coords, coords + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << coords[i].seq << endl;
    }
    return 0;
}