#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char jawab;
    
    cout<<"apakah anda bisa berenang ? ";
    cin>>jawab;
    
    if(jawab=='Y'||jawab=='y')
    {
      cout<<"anda bisa masuk akmil"<<endl;
      cout<<"anda juga bisa menjadi pelatih renang"<<endl;
    }
    
    else
    {
      cout<<"anda harus berlatih renang"<<endl;
      cout<<"anda tidak bisa menjadi pelatih renang"<<endl;
    }
   
   system("pause");
   return 0;
}