#include <iostream>

using namespace std;

class cl{
    int i;
public:
    cl(){
        i=0;
    }
    cl(int j){ i=j; }
    void set_i(int j){i = j; }
    int get_i(){ return i+5; }
};

int main(){
    cl ob[3] = { 1,2,3 } , ob1[22] ;
    int i;

    /*for(i=0;i<3;i++){
        ob[i].set_i(i+1);
    }*/
    for(i=0;i<3;i++){
        cout<<ob[i].get_i()<<"  Y"<<endl;
    }
    /*for(i=0;i<23;i++){
        ob1[i].set_i(i+1);
    }*/
    for(i=0;i<23;i++){
        cout<<ob1[i].get_i()<<"hh"<<endl;
    }
    return 0;
}
