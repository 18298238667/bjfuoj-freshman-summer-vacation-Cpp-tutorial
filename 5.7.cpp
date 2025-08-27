#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
struct Student{ 
	char name[20]; 
	int id;
 	int age; 
 	float score;
	};
int main(){
	int n;
	cin>>n;
	vector<Student> students(n);
	for(int i=0;i<n;i++){
		cin>>students[i].name>>students[i].id>>students[i].age>>students[i].score;
	}
	auto max_it=max_element(students.begin(),students.end(),[](const Student& a,const Student& b){
	return a.age<b.age;
	});
	cout<<"name:"<<max_it->name<<'\n';
	cout<<"id:"<<max_it->id<<'\n';
	cout<<"age:"<<max_it->age<<'\n';
	cout<<"score:"<<fixed<<setprecision(2)<<max_it->score;
	return 0;
}
 
