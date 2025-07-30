#include<bits/stdc++.h>
using namespace std;
#define ll long long 

//base case is 1 
int main() {
    //should use while because we don't know the bounds. 
    
    ll n ; cin>>n;
    while(n>1){
     //two decision odd and even 
     cout<<n<<" ";
     if(n%2 != 0 )
     {  
        n = n*3 + 1 ; 
     }
     else{
        n = n /2 ;
     }


    }
    cout<<1;
    return 0;
} 
