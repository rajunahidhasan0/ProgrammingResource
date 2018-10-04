#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<hex<<100<<endl;

    cout<< left << setfill('?') << setw(10) << 2343.0;

    return 0;
}
