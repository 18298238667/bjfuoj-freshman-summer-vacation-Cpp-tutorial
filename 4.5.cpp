#include <iostream>
#include <algorithm>
using namespace std;

int Min3(int a,int b,int c){
	return min(min(a,b),c);
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<Min3(a,b,c);
	return 0;
}
