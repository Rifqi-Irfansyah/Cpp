#include<cstdlib>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char S1[50]="CONTOH";
	char S2[50]="salin string";
	
	strncpy(S1,S2,4);
	
	cout<<S1<<endl;
	cout<<endl;
	cout<<"selesai"<<endl;
	
	system("pause");
	return 0;
}
