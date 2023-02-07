#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int x=1, bil;
	cout<<"Masukkan bilangan: ";
	cin>>bil;
	
	while(x<=bil)
	{
		cout<<x*2<<endl;
		x++;	
	}	
	
	cout<<"\n Selesai \n";
	
	system("pause");
	return 0;
}
