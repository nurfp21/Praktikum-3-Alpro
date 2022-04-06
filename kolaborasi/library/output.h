#include <iostream>
#include <fstream>

using namespace std; 
class Output {
	public :
		void cetak(){
			cout<<"Struk Pembayaran\n";
			cout<<"Yang Dibeli : \n";
			cout<<"Ayam Geprek : "<<data_file[3]<<endl;
			cout<<"Ayam Bakar : "<<data_file[4]<<endl;
			cout<<"Harga Total : "<<data_file[0]<<endl;
			cout<<"Diskon : "<<data_file[1]<<endl;
			cout<<"Harga Bayar : "<<data_file[2]<<endl;
		}

		void getData(){
			ambil_data.open("api_data.txt");
			string t;
			while(!ambil_data.eof()){
				ambil_data>>data_file[index];
				index+=1;
			}
			ambil_data.close();
		}
	private :
		ifstream ambil_data;
		string data_file[30];
		int index = 0;
};