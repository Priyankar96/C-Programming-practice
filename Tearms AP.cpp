
#include<iostream>
using namespace std;

 int main() {
int x;
cin>>x;


int n = 1;
int count = 1;
while(count<=x){
    int num = 3*n+2;
    if(num%4 !=0){
cout<<num<<" ";
        count++;
    }
    n++;
}

     }








