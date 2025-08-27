#include <iostream>
using namespace std;
struct Date
{
    int year,month,day;
};
struct Person{
    char name[20];
    Date birth;
};
int main(){
    int n, y, f=0;
    cin>>n>>y;
    Person *people = new Person[n];
    for (int i = 0;i<n;i++){
        cin >>people[i].name>>people[i].birth.year >> people[i].birth.month >> people[i].birth.day;
    }
    for (int i = 0; i < n; i++)
    {
        if (people[i].birth.year==y)
        {
            cout << people[i].name << ' ' << people[i].birth.year << ' ' << people[i].birth.month << ' ' << people[i].birth.day << endl;
            f = 1;
        }
        
    }
    if (f==0)
    {
        cout << "None" << endl;
    }
    
    
    delete[] people;
    
    return 0;
}
