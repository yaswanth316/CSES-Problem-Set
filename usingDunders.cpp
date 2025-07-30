#include<bits/stdc++.h>

#include <numeric>
using namespace std;
int lcm(int a, int b){
    return( a  / __gcd(a,b))*b;    
}

/*
Six bells commence tolling together and toll at intervals of 3, 6, 9, 12, 15 and 18 seconds respectively. In 60 minutes, how many times do they toll together ?
*/
int main() {
    int lcm1 =  lcm(3,lcm(6,lcm(9,lcm(12,lcm(15,18)))));
    int  time = 60*60 ;
    int result =  time /lcm1 +1  ;
    cout<<result<<endl;
    return 0;
}