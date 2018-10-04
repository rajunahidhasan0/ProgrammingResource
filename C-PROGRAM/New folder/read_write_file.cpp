#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream inout("list.txt",ios::binary | ios::out );
	if(!inout){
		cout << "Cannot open file(1)." <<endl;
		return 1;
	}
	int i,j,k;
	char s[1000];
	for(i=1 ; i<=100 ; i++)
	inout <<i<< "amar_sonar_bangla_ami_tomay_valobshi. ." ;
	
	inout.close();
	fstream out("list.txt",ios::binary | ios::in );
	if(!out){
		cout << "Cannot open file(2)." <<endl;
		return 1;
	}
	for(i=1 ; i<=100 ; i++){
		out >> j ;
		
		cout<<j;
		do{
			out >> s;
			cout<<s;
		}while(!s);
		cout<<endl;
	}
	
	inout.close();
	return 0;
}
