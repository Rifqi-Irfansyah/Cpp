#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int bil=1,N;
	
	cout<<"Masukkan N: ";
	cin>>N;
	
	while(bil<=N)
	{
		if(bil==5)
		break;
		
		cout<<bil<<endl;
		bil++;
	}
	
	cout<<"\n Selesai \n";
	
	system("pause");
	return 0;
}
