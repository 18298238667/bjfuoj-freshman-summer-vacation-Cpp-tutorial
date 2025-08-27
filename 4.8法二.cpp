#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int Count_Digit(int num,int d){
	string num_str=to_string(abs(num));
	char target='0'+d;
	int count=0;
	for(char c : num_str){
		if(c==target){
			count++;
		}
	}
	return count;
} 
int main(){
	int num,d;
	cin>>num>>d;
	cout<<Count_Digit(num,d);
	return 0;
}
