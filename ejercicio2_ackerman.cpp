#include <bits/stdc++.h>
using namespace std;

int ackerman(int m, int n){
    if(m==0) return n+1;
    if(m>0&&n==0) return ackerman(m-1,1);
    if(m>0&&n>0) return ackerman(m-1,ackerman(m,n-1));
}

int main(){
    
    cout<<ackerman(2,5);
    
    return 0;
}
