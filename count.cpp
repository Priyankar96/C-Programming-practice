#include<iostream>
using namespace std;
int main(){
    char c;
    c=cin.get();
    int letter=0,digit=0,space=0;
    while(c!='$'){
    	if(c>='a' && c<='z')
    		letter++;
    	else if(c>='0' && c<='9')
			digit++;
		else
			space++;			
		
    c=cin.get();
    }
    cout<<letter<<' '<<digit<<' '<<space;
  
}

