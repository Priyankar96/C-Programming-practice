//Find power of a number
#include<iostream>
using namespace std;

int main(){
	float b,e;
	float result=1;
	cin>>b>> e;
	
	
	while(e!=0){
		result *=b;
		e=e-1;
	}
	
	cout<<result<<endl;
	
}
