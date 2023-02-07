#include<cstdlib>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char S1[50];
	char* S2;
	
	S2="Ini adalah contoh penyalinan string";
	
	strcpy(S1,S2);
	
	cout<<S1<<endl;
	cout<<"selesai"<<endl;
	
	system("pause");
	return 0;
}
