#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;

int main()
{
	char st[128];
	char kata[]="SMK";
	int hasil;

	cout<<"Masukkan sembarang string : ";
	cin.getline(st,sizeof(st));

	hasil=stricmp(st,kata);

	if(hasil==0)
		cout<<st<<"=="<<kata<<endl;
	else if(hasil<0)
		cout<<st<<" < "<<kata<<endl;
	else
		cout<<st<<" > "<<kata<<endl;
	
	system("pause");
	return 0;
}
