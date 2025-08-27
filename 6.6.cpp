#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cin>>str;
	string rstr(str.rbegin(),str.rend());
	if(str==rstr){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}
