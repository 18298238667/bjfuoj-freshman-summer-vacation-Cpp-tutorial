#include <iostream>
using namespace std;
int CntOdd(int *a,int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			count++;
		}
	}
	return count;
}
int SumOdd(int *a,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			sum+=a[i];
		}
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum=SumOdd(arr,n);
	int cnt=CntOdd(arr,n);
	int average=sum/cnt;
	cout<<average;
	return 0;
}
