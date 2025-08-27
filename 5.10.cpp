#include <iostream>
using namespace std;
struct Date{
	int year,month,day;
};
bool isleapyear(int y){
	if(y%400==0||(y%4==0 && y%100!=0)){
		return true;
	}
	else{
		return false;
	}
}
int daysOfYear(const Date & d){
	int daysInMonth_leap[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int daysInMonth_nonleap[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(isleapyear(d.year)){
		int count=0;
		for(int i=0;i<d.month-1;i++){
			count+=daysInMonth_leap[i];
		}
		count+=d.day;
		return count;
	}
	else{
		int count=0;
		for(int i=0;i<d.month-1;i++){
			count+=daysInMonth_nonleap[i];
		}
		count+=d.day;
		return count;
	}
}
int main(){
	Date d;
	cin>>d.year>>d.month>>d.day;
	cout<<daysOfYear(d);
	return 0;
}
