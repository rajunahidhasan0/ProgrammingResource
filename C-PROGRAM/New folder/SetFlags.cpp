#include<iostream>
using namespace std;
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

int main()
{
    double a=12.98655;
    int b=90;

    cout<<a<<"  "<<b<<endl;

    cout.setf(  ios::hex , ios::basefield);
    showflags();
    cout<<a<<"  "<<b<<" "<<100<<endl;
    cout.setf(  ios::right );
    showflags();
    cout.precision(12);
    cout.width(15);
    //cout.fill('J');
    showflags();

    cout<<a<<"  "<<b<<" "<<100<<endl;

    cout<<100<<endl;
    cout.setf(ios::showbase);  //octal---'0'  hexadecimal--'0x'  decimal--nothing tomshow
    cout<<100<<endl;
    showflags();
    cout<<100.09<<endl;
    cout.setf(ios::showpoint);
    cout<<100.90888<<endl;
    showflags();
    cout.setf(ios::hex , ios::showpoint);
    showflags();
    cout<<100.90888<<endl;

    return 0;
}
