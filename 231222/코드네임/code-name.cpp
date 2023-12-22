#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student {
    public:
        string name;
        int score;
        Student(string a = "", int b = 0) {
            this -> name = a;
            this -> score = b;
        }
        bool operator<(Student& student) {
            return this -> score < student.score;
        }

};

int main() {
    // 여기에 코드를 작성해주세요.
    Student students[5];
    string n;
    int s;
    for (int i = 0; i < 5; i++) {
        cin >> n >> s;
        students[i] = Student(n, s);
    };
    sort(students, students + 5);
    cout << students[0].name << " " << students[0].score;
    return 0;
}