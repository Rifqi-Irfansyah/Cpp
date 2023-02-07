#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int angka;
	
	cout<<"Menghentikan Eksekusi Program dengan fungsi exit \n";
	cout<<"======= Untuk berhenti masukkan angka >5 ========\n";
	
	for(;;) 
	{
		cout<<"Masukkan angka: ";
		cin>>angka;
		
		if(angka>5)
		exit(0);
	}
	cout<<"\n Selesai \n";
	
	system("pause");
	return 0;
}
