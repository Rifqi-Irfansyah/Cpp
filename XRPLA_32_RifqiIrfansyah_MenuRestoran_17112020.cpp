#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int menu,makanan,minuman, hargatotal, bayar, kembalian;
	int oncom={1000}, mieayam={5000}, naskun={7000}, boba={3000}, akua={5000}, tehjawa={2000};
	char kembali;
	
awal:

	cout<<"*****************************************"<<endl;
	cout<<"        PROGRAM APLIKASI RESTORAN        "<<endl;
	cout<<"           REKAYASA PEMBANGUNAN          "<<endl;
	cout<<"*****************************************"<<endl;

	
	cout<<"Daftar Menu"<<endl;
	cout<<"1. Makanan"<<endl;
	cout<<"2. Minuman"<<endl;
	cout<<"Silahkan Pilih menu (1/2): ";
	cin>>menu;
	
	
//menyu	
	if (menu==1)
	{
		cout<<"   ------------------------------"<<endl;	
		cout<<"   |1. Oncom Goreng   Rp 1.000,-|"<<endl;
		cout<<"   |2. Mie Ayam       Rp 5.000,-|"<<endl;
		cout<<"   |3. Nasi Kuning    Rp 7.000,-|"<<endl;
		cout<<"   ------------------------------"<<endl;		
		cout<<"Pilih Menu Makanan (1/2/3) : ";
		cin>>makanan;
	}
	
		
	else if (menu==2)
		{
			cout<<"   ------------------------------"<<endl;
			cout<<"   |1. Boba           Rp 3.000,-|"<<endl;
			cout<<"   |2. Akua           Rp 5.000,-|"<<endl;
			cout<<"   |3. Teh Jawa       Rp 2.000,-|"<<endl;
			cout<<"   ------------------------------"<<endl;
			cout<<"Pilih Menu Makanan (1/2/3) : ";
			cin>>minuman;
		}
		
	else
		{
		cout<<"Kode Yang Anda Masukkan Salah"<<endl;
		}
	
//makanan
	if (makanan==1)	
	{
		cout<<"Anda memilih Oncom Goreng Harga Rp 1.000,-\n";
		makanan=oncom;
	}
	else if (makanan==2)	
	{
		cout<<"Anda memilih Mie Ayam Harga Rp 5.000,-\n";
		makanan=mieayam;
	}

	else if (makanan==3)	
	{
		cout<<"Anda memilih Nasi Kuning Harga Rp 7.000,-\n";
		makanan=naskun;
	}
/*minuman*/
	else if (minuman==1)	
	{
		cout<<"Anda memilih Boba Harga Rp 3.000,-\n";
		minuman=boba;
	}
	else if (minuman==2)	
	{
		cout<<"Anda memilih Akua Harga Rp 5.000,-\n";
		minuman=akua;
	}

	else if (minuman==3)	
	{
		cout<<"Anda memilih Teh Jawa Harga Rp 2.000,-\n";
		minuman=tehjawa;
	}
	
	else
	{
		cout<<"Kode Menu Yang Anda Masukkan Salah"<<endl;
	}

	cout<<"Ke Menu Utama (Y/N)";
	cin>>kembali;

	if (kembali=='Y'||kembali=='y')
	{
		system("cls");
		goto awal;
	}
 	
 	else
 	{
	cout<<"Anda Memilih Menu Makanan Rp "<<makanan<<endl;
	cout<<"Anda Memilih Menu Minuman Rp "<<minuman<<endl;
	hargatotal=makanan+minuman;
	cout<<"Total Yang Harus Dibayar : Rp "<<hargatotal<<endl;
	
	cout<<"Uang Yang Dibayar :";
	cin>>bayar;
	kembalian=bayar-hargatotal;
	
	cout<<"Kembalian Anda Rp"<<kembalian<<endl<<endl;
	cout<<"Terimakasih Telah Berbelanja"<<endl;
	}
	return 0;
	system("pause");

}


