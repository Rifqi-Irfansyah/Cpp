#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int x, bil;
	cout<<"Masukan Bilangan: ";
	cin>>bil;

	for(x=1; x<=bil; x++)
	{
		if(x%2==0)
		cout<<x<<" adalah bilangan genap"<<endl;
		if(x%2==1)
		cout<<x<<" adalah bilangan ganjil"<<endl;
	}	
	
	
	system("pause");
	return 0;
}
