#include <iostream>
#include <vector>
using namespace std;
void Change(int num){
	vector<int> v;
	while(num){
		v.push_back(num%2);
		num/=2;
	}
	for(int i=v.size()-1;i>=0;i--){
		cout<<v.at(i);
	}
}
int main(){
	int num;
	cin>>num;
	Change(num);
	return 0;
}
