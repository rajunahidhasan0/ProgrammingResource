#include<bits/stdc++.h>
using namespace std;
int main()
{
   /// while(1){
    double n, a, b;
    cin>>n;
    a = abs(ceil(ceil(-1 + sqrt(1+8.0*n))/2.0));
    b = abs(floor(floor(-1 - sqrt(1+8.0*n))/2.0));
   /// cout<<a<<b<<endl;
    if( ((a*a)+a)>=2*n )cout<<abs(a)<<endl;
    else cout<<abs(b)<<endl;

    return 0;
}
