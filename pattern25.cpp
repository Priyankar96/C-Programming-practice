#include<iostream>
using namespace std;

void printPatt(int n)
{
    
   
    int l=1;
    int m=n/2;  
    
   
        int i=1;
        while(i<=n){
            
            if(i<=(n/2)+1){
            int k=0;
            while(k<=(n/2)-i){
            cout<<" ";
            k++;
            }
            int j=0;
            while(j<2*i-1){
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }  
        else if(i>(n/2)+1){
            
            int k =0;
            while(k <= l-1){
            cout<<" ";
            k++;
            }
            l++;
        int j=0;
       
        while(j<(2*m)-1){
            cout<<"*";
            j++;
        }
            m--;
        i++;
        cout<<endl;
            
        }
        
    }
}


int main()
{
    int n;
    cin>>n;
    printPatt(n);
	
}
