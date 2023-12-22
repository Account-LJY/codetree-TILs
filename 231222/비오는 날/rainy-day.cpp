#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Info {
    public:
        string date;
        string day;
        string weather;
        Info(string a = "", string b = "", string c = "") {
            this -> date = a;
            this -> day = b;
            this -> weather = c;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string a, b, c;
    cin >> n;
    Info info[100];
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        info[i] = Info(a, b, c);
    }
    for (int i = 0; i < n; i++) {
        if (info[i].weather == "Rain") {
            vec.push_back(i);
        }
    }
    if (vec.size() == 0) {
        return 0;
    }
    int idx = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        if (info[idx].date > info[vec[i]].date) {
            idx = i;
        }
    }

    cout << info[idx].date << " " << info[idx].day << " " << info[idx].weather;
    return 0;
}