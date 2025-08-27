#include <iostream>
using namespace std;
int main(){
	int score;
	cin>>score;
	switch(score/10){
		case 10:
		case 9:
			cout<<'A';
			break;
		case 8:
			cout<<'B';
			break;
		case 7:
		case 6:
			cout<<'C';
			break;
		default:
			cout<<'D';
			break;
	}
	return 0;
}
