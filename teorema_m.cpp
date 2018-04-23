#include <bits/stdc++.h>

using namespace std;

int main(){
    cout<<"Forma: T(n) = a*T(n/b) + θ( (n^k) * ([log(n)]^p) )"<<endl;
    cout<<"a>=1; b>1; k>=0; p pertenece a IR, θ es Big O."<<endl<<endl;
    int a,b,k,p;
    
    do{
    cout<<"Ingrese a: ";
    cin>>a;
    } while(a<1);
    do{
    cout<<"Ingrese b: ";
    cin>>b;
    } while(b<=1);
    do{
    cout<<"Ingrese k: " ;
    cin>>k;
    } while(k<0);
    cout<<"Ingrese p: ";
    cin>>p;
    cout<<endl;
    if(a>pow(b,k)) cout<<"T(n) = θ( n^(log de "<<a<<" en base "<<b<<") )"<<endl;
    
    if(a==pow(b,k)){
        if(p>-1) cout<<"T(n) = θ( [n^(log de "<<a<<" en base "<<b<<")] * ([log(n)]^"<<p+1<<") )"<<endl;
        if(p==-1) cout<<"T(n) = θ( [n^(log de "<<a<<" en base "<<b<<")] * [log(log(n))] )"<<endl;
        if(p<-1) cout<<"T(n) = θ( n^(log de "<<a<<" en base "<<b<<") )"<<endl;
    }
    
     if(a<pow(b,k)){
         if(p>=0) cout<<"T(n) = θ( [n^"<<k<<"] * ([log(n)]^"<<p<<") )"<<endl;
         if(p<0) cout<<"T(n) = θ( n^"<<k<<" )"<<endl;
         
     }
    
    return 0;
}
