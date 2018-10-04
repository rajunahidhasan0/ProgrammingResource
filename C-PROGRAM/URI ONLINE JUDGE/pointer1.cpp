#include <iostream>

using namespace std;

class cl{
    int i;
public:
    cl(int j){ i=j; }
    int n=10;
    //void set_i(int j){i = j; }
    int get_i(){ return i; }
};

int main(){
    cl ob(5);
    int *p ;
    p = &ob.n ;
    int i;
    //for(i=0;i<3;i++){
      //  ob[i].set_i(i+1);
    //}
    for(i=0;i<3;i++){
        cout<<*p<<endl;
        //p++ ;
    }
    /*for(i=0;i<23;i++){
        ob1[i].set_i(i+1);
    }
    for(i=0;i<23;i++){
        cout<<ob1[i].get_i()<<endl;
    }*/
    return 0;
}

