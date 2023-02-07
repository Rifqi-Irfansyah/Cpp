#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	//deklarasi variabel x
	int x=1, bil;
	
	cout<<"Masukkan Bilangan: ";
	cin>>bil;
	
	do
	{
		cout<<"Bilangan"<<endl;
		x++;
	}
	while (x<=bil);
	
	cout<<"\n Selesai \n";
	
	system("pause");
	return 0;
}
