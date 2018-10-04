#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	 fstream inout("getline.txt", ios::out ); 	
/*	
	if(!out){
		cout<<"Cannot open file.\n";
		return 1;
	}
	inout << " Cannot open file.( !@#$%^&*\_+ ) ";
*/
	char s[1000];
	//s = " Cannot open file.( !@#$%^&*_+ ) " ;
	//istream in("getline.txt");
	while(inout){
		inout.getline(s, 12 );
		if(inout) cout<< s <<endl;
	
	}

	return 0;
}
