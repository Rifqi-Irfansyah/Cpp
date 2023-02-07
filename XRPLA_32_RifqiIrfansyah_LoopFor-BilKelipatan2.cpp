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
		cout<<x*2<<endl;
	}	
	
	
	system("pause");
	return 0;
}
