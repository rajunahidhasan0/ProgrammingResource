#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int test, tc ;
    cin>>test;
    if(test%3==0){
            tc=test/3;

        cout<<1<<" "<<1<<" "<<test-2<<endl;
    }
    else if(test%3==1){
        cout<<1<<" "<<1<<" "<<test-2<<endl;
    }
    else{
        cout<<1<<" "<<2<<" "<<test-3<<endl;
    }

    return 0;
}

