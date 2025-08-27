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
    Student stu;
    cin>> stu.name >> stu.id >> stu.age >> stu.score;
    cout<<"name:"<< stu.name << endl;
    cout<<"id:"<< stu.id << endl;
    cout<<"age:"<< stu.age << endl;
    cout<<"score:"<<fixed<<setprecision(2)<< stu.score << endl;
    return 0;
}
