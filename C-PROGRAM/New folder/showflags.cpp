#include<iostream>
using namespace std;

void showflags();

int main()
{
    showflags();

    cout.setf( ios::fixed | ios::scientific | ios::left  );

    showflags();

    return 0;
}

void showflags(){
        ios::fmtflags f;
        int i;
        f = cout.flags();

        for(i=0x4000 ; i ; i = i >>1){
            if(f & i)cout<<1<<" ";
            else cout<<0<<" ";
        }


        cout<<endl;
}




