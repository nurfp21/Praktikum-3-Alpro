#include <iostream>
#include <fstream>

using namespace std;

class Proses {
	public :
		void cetak(){
			cout<<"Anda sebagai proses \n";
		}
		void getData(){
			ambil_data.open("api_data.txt");
			bool ayam_geprek = true;
			while(!ambil_data.eof()){
				if (ayam_geprek){
					ambil_data>>byk_gprk;
					ayam_geprek = false;
				}
				else{
					ambil_data>>byk_bkr;
				}
			}
			ambil_data.close();
		}
		void toFile(){
			int total = (hrg_aymgprk * byk_gprk) + (hrg_aymbkr * byk_bkr);
			float batas = 150000;
			float t2= float(total);
			float diskon = t2 * 0.35;

			if (total >= batas)
				t2 = t2 - diskon;

			tulis_data.open("api_data.txt");
			tulis_data<<total<<endl;
			tulis_data<<diskon<<endl;
			tulis_data<<t2<<endl;
			tulis_data<<byk_gprk<<endl;
			tulis_data<<byk_bkr;
			tulis_data.close();
		}

	private :
	  ifstream ambil_data;
	  ofstream tulis_data;
	  int byk_gprk;
	  int byk_bkr;
	  int hrg_aymgprk = 21000;
	  int hrg_aymbkr = 25000;
};