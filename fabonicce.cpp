#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int t1=0;
	int t2=1;
	int t3;
	
	for(int i=0;i<n;i++){
		t3=t1+t2;
		t1=t2;
		t2=t3;
	
	}
		cout<<t1;
}
