#include<cstdlib>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char kata[5]="SMK";
	
	cout<<"Before strlwr="<<kata<<endl;
	strlwr(kata);
	cout<<"After strlwr="<<kata<<endl;
	
	system("pause");
	return 0;
}
