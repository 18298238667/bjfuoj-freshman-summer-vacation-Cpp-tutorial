#include <iostream>
#include <vector>
#define MAX_N 1000000
using namespace std;
int main(){
	vector<bool> isprime(MAX_N+1,true);
	isprime[0]=false;
	isprime[1]=false;
	for(int i=2;i*i<=MAX_N;i++){
		if(isprime[i]){
			for(int j=i*i;j<=MAX_N;j+=i){
				isprime[j]=false;
			}
		}
	}
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		if(isprime[N]){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
