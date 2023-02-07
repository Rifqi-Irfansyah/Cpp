#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

void tampilkan (int x)
{
	cout<<"\nHarga yang harus dibayar adalah "<<x<<endl;
}

int pengurangan (int a, int b, int c)
{
	a=b-c;
	return a;
}


int main()
{
	//variabel
	int berat, diskon, harga, total, pilih, bayar, kembalian, cetak;
	char nama[25], alamat[50], telp[20], kembali;
	

	do{
		system("cls");
		cout<<"-------------------------------------------"<<endl;
		cout<<"        PROGRAM LAUNDRY IRFAN JAYA         "<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"Nama Pelanggan\t: ";
		cin>>nama;
		cout<<"No Hp\t\t: ";
		cin>>telp;
		cout<<"Alamat\t\t: ";
		cin>>alamat;
		system("cls");
		
		cout<<"-------------------------------------------"<<endl;
		cout<<"             KATEGORI CUCIAN               "<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"1. Kilat\t15.000/kg  "<<endl;
		cout<<"2. Reguler\t13.000/kg"<<endl;
		cout<<"3. Biasa\t10.000/kg  "<<endl;
		cout<<"Lebih dari 5 kg diskon 15% loh!!!"<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"Silahkan pilih kategori\t: ";
		cin>>pilih;
		cout<<"Berat cucian(kg)\t: ";
		cin>>berat;
	
		switch(pilih)
		{
			case 1:
				harga=15000;
				break;
			case 2:
				harga=13000;
				break;
			case 3:
				harga=10000;
				break;
			default:
				cout<<"Warning!!! Pilih Kategori 1 s/d 3"<<endl;
		}
	
		
		//jika berat lebih dari 5 kg diskon 15%
		if (berat>=5)
		{
			total=berat*harga*85/100;
		}
	
		else
		{
			total=berat*harga;
		}
			tampilkan(total);
	

		system("cls");
		cout<<"-------------------------------------------"<<endl;
		cout<<"        STRUK PEMBAYARAN IRFAN JAYA        "<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"Nama Pelanggan\t: "<<nama<<endl;
		cout<<"Alamat\t\t: "<<alamat<<endl;
		cout<<"No Hp\t\t: "<<telp<<endl;
		cout<<"Berat cucian\t: "<<berat<<endl;
		cout<<"Total biaya\t: "<<total<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"Total bayar\t: ";
		cin>>bayar;
		cout<<"Kembalian\t: "<<pengurangan(kembalian, bayar, total)<<endl; 
		cout<<"-------------------------------------------"<<endl;	
		cout<<"  Terimakasih telah datang ke laundry kami "<<endl<<endl;
		cout<<"Kembali Ke Menu Utama (y/n) ? ";
		cin>>kembali;	
	}while(kembali=='y'||kembali=='Y');
		
	cout<<"Apakah anda mau mencetaknya(y/n) ??";		cin>>cetak;
	
	if (cetak=='y'||'Y'){
		ofstream myfile;
		myfile.open("datalaundry.txt");
		myfile<<"-------------------------------------------"<<endl;
		myfile<<"        STRUK PEMBAYARAN IRFAN JAYA        "<<endl;
		myfile<<"-------------------------------------------"<<endl;
		myfile<<"Nama Pelanggan\t: "<<nama<<endl;
		myfile<<"Alamat\t\t: "<<alamat<<endl;
		myfile<<"No Hp\t\t: "<<telp<<endl;
		myfile<<"Berat cucian\t: "<<berat<<endl;
		myfile<<"Total biaya\t: "<<total<<endl;
		myfile<<"-------------------------------------------"<<endl;	
		myfile<<"Total bayar\t: "<<bayar<<endl;
		myfile<<"Kembalian\t: "<<pengurangan(kembalian, bayar, total)<<endl; 
		myfile<<"-------------------------------------------"<<endl;
		myfile<<"  Terimakasih telah datang ke laundry kami "<<endl;		
	}	


	cout<<"Program Selesai"<<endl;
	system("pause");
	return 0;
}
