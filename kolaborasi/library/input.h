#include <iostream>
#include <fstream>

using namespace std;
class Input {
	public :
		void cetak(){
			cout<<"Aplikasi Penjualan Ayam\n";
			cout<<"Menu Yang Tersedia : ";
			cout<<"1. Ayam Geprek : 21000\n";
			cout<<"2. Ayam Bakar : 25000\n\n";
			cout<<"Pesan Ayam Geprek : ";cin>>byk_gprk;
      cout<<"Pesan Ayam Bakar : ";cin>>byk_bkr;
		}
		void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data<<byk_gprk<<endl;
			tulis_data<<byk_bkr;
			tulis_data.close();
		}
	private :
		ofstream tulis_data;
		int byk_gprk, byk_bkr;
};