#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int x=1;
	
	cout<<"Contoh Program Looping do-while\n";
	
	do
	{
		cout<<"x="<<x<<endl;
		x++;	
	}
	while(x<5);	
	
	cout<<"\n Selesai \n";
	
	system("pause");
	return 0;
}
