#include<bits/stdc++.h>
using namespace std;

int main() {
    //input
    int n ; cin>>n;
    if(n == 2 || n == 3)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    //even number
    for (int i = 2; i <= n; i+=2)
    {
        cout<<i<<" ";   
    }
    //odd numbers 
    for(int i =1 ; i <= n ; i+=2)
    {
        cout<<i<<" ";
    }
    
    return 0;
}