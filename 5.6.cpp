#include <iostream>
#include <iomanip>
using namespace std;
struct Student
{
    char name[20];
    int id;
    int age;
    float score;
};
int main(){
    int n;
    cin >> n;
    Student *students = new Student[n];
    for(int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].id >> students[i].age >> students[i].score;
    }
    for(int i = 0; i < n; i++) {
        cout << "student " << i + 1 << " : ";
        cout << students[i].name << ' ';
        cout << students[i].id << ' ';
        cout << students[i].age << ' ';
        cout << fixed << setprecision(2) << students[i].score << endl;
    }
    return 0;
}
