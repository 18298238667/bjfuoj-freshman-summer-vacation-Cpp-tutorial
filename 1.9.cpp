#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b,c,result;
	cin>>a>>b>>c;
	result=max(max(a,b),c);
	cout<<result;
	return 0;
}
