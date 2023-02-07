#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i,N;
	
	cout<<"Contoh Program untuk melihat efek penggunaan contine \n";
	cout<<"=====================================================\n";
	cout<<"Masukkan N: ";
	cin>>N;
	
	for(i=1; i<=N; i++) 
	{
		if (i%2==0)
		continue;
		
		cout<<i<<endl;
	}
	cout<<"\n Selesai \n";
	
	system("pause");
	return 0;
}
