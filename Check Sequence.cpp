#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int prev;
    int curr;
    cin>>prev;
    int i=1;
    bool inc = false;
    while(i<n)
    {
        cin>>curr;
        if(prev>curr)
        {
            if(inc==true)
            {
                cout<<"false";
                return 0;
            }
        }
        else if(prev<curr)
        {
            inc = true;
        }
        else if(prev==curr){
            cout<<"false";
            return 0;
        }
        
        prev = curr; 
        i++;
    }
    
    cout<<"true";
}
