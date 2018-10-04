#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("new_file.txt");
    if(!out){
        cout<<"Cannot open new_file."<<endl;
        return 1;
    }

    out<<"Rice      "<< 12.56 <<endl;
    out<<"Meat      "<< 310.50 <<endl;
    out<<"Sugar     "<< 100.00 <<endl;
    out<<"Petrol    "<< 90.86 <<endl;

    out.close();
    return 0;
}

