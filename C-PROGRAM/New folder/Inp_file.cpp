#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream inp("new_file.txt");
    if(!inp){
        cout<<"Cannot open new_file."<<endl;
        return 1;
    }
    string h,k;
    double u,v,w;
    inp>>h>>u;
    inp>>k>>v;
    cout<<u<<endl<<v<<endl;
    cout<<h<<endl<<k<<endl;
    inp.close();
    return 0;
}


