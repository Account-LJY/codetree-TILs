#include <iostream>
#include <algorithm>
using namespace std;

class Coord {
    public:
        int x, y, seq;
        Coord(int a, int b, int c) {
            this -> x = a;
            this -> y = b;
            this -> seq = c;
        }
        Coord() {}
};

bool cmp(Coord a, Coord b) {
    if (a.x < 0) return -a.x;
    if (a.y < 0) return -a.y;
    if (b.x < 0) return -b.x;
    if (b.y < 0) return -b.y;
    if (a.x + a.y == b.x + b.y) {
        return a.seq < b.seq;
    }
    return (a.x + a.y < b.x + b.y);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Coord coords[n];
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        coords[i] = Coord(a, b, i + 1);
    }
    sort(coords, coords + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << coords[i].seq << endl;
    }
    return 0;
}