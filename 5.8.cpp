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
double average(const vector<Student> & srr){
	double sum=0.0;
	for(int i=0;i<srr.size();i++){
		sum+=srr[i].score;
	}
	return sum/srr.size();
}
int main(){
	int n;
	cin>>n;
	vector<Student> students(n);
	for(int i=0;i<n;i++){
		cin>>students[i].name>>students[i].id>>students[i].age>>students[i].score;
	}
	double avg=average(students);
	cout<<fixed<<setprecision(2)<<avg;
	return 0;
}
