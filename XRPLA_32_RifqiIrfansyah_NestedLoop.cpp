#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int luar, dalam;
	
	for(luar=1; luar<=3; luar++)
	{
		for(dalam=0; dalam<3; dalam++)
		{
			cout<<luar<<"\t"<<dalam<<endl;
		}
	}	
	cout<<"\n Selesai \n";
	
	system("pause");
	return 0;
}
