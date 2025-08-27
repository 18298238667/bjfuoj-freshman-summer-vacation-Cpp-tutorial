#include <iostream>
using namespace std;

int Average(int* a,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	return sum/n;
}
int main(){
	int num;
	cin>>num;
	int* arr=new int[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	int ave=Average(arr,num);
	cout<<ave;
	delete[] arr;
	return 0;
}
