#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	//deklarasi variabel x
	int x=100;
	
	do
	{
		cout<<"x="<<x<<endl;
		x++;	
	}
	while(x<=5);	
	
	cout<<"\n Selesai \n";
	
	system("pause");
	return 0;
}
