#include<cstdlib>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char kata[]="AbcDEfG";
	
	cout<<"Before strupr="<<kata<<endl;
	strupr(kata);
	cout<<"After strupr="<<kata<<endl;
	
	system("pause");
	return 0;
}
