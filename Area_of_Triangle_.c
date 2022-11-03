#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,d,s;
    cin>>b>>c>>d;
    s=(d+b+c)/2;
    a=sqrt(s*(s-b)*(s-c)*(s-d));
    cout<<fixed<<setprecision(2)<<a;
    
}