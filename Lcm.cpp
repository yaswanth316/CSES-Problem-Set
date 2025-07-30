#include<bits/stdc++.h>
using namespace std;
int computeLcm(vector<int>&arr){
    int lcm = arr[0];
    for(int i  = 1 ; i < arr.size() ; i++)
    {   
        lcm = (lcm/__gcd(lcm,arr[i])*arr[i]);

    }
    return  lcm;
}

int main() {
    vector<int> intervals =  {3,6,9,12,15,18};
    int lcm = computeLcm(intervals);
    int time  = 60*60;
    int result  = (time/lcm)+1;
    cout<<result<<endl;
    return 0;
}