#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
        int height, weight, seq;
        Student(int a, int b, int c) {
            this -> height = a;
            this -> weight = b;
            this -> seq = c;
        }
        Student() {}
};

bool cmp(Student a, Student b) {
    if (a.height != b.height) {
        return a.height < b.height;
    }
    if (a.weight != b.weight) {
        return a.weight > b.weight;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    Student students[1000];

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        students[i] = Student(a, b, i + 1);
    }
    
    sort(students, students + n, cmp);
    
    for (int i = 0; i < n; i++) {
        cout << students[i].height << " " << students[i].weight << " " << students[i].seq << endl; 
    }
    return 0;
}