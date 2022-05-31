#include<iostream>

using namespace std;

int main(){
	char ch;
	cout<<"enter input"<<endl;
	cin>>ch;
	
	if(ch>='a' && ch<='z'){
		
		cout <<"lower Case"<<endl;
	}else if(ch>='A' && ch<='Z'){
		cout <<"Upper Case"<<endl;
	}else{
		cout<<"Its Not a Charecter"<<endl;
	}
}
