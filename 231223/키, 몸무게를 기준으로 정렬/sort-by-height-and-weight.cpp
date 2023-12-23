#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
        string name;
        int height, weight;
        Student(string a, int b, int c) {
            this -> name = a;
            this -> height = b;
            this -> weight = c;
        }
        Student() {}
};

bool cmp(Student a, Student b) {
    if (a.height != b.height) {
        return a.height < b.height;
    }
    return a. weight > b.weight;
}

int main() {
    // 여기에 코드를 작성해주세요.
    Student students[10];

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a;
        int b, c;
        cin >> a >> b >> c;
        students[i] = Student(a, b, c);
    }
    
    sort(students, students + n, cmp);
    
    for (int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl; 
    }
    return 0;
}