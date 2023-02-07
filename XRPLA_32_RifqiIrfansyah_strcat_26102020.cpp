#include<cstdlib>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char st[128]="satu dua";
	
	cout<<"Isi st semula = "<<st<<endl;
	strcat(st," tiga empat lima");
	cout<<"Isi st sekarang = "<<st<<endl;
	
	system("pause");
	return 0;
}
