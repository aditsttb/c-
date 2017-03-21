#include <iostream>
  
using namespace std;

	//prototype
	int tambahkan (int a, int b);
	void probaca ();
	int prohasil ();
	int proses ();
	void protampil ();


	//definisi global
	int a,b;


	//program utama
	int main () {
	probaca ();
			cout << " Hasil : " << tambahkan (a, b) <<endl;
		
		return 0;
		}
			
	//proses membaca

	void probaca () {

	cout << "Masukan nilai A : ";
	cin>> a;
	cout << "Masukan nilai B : ";
	cin>> b;
	
	}

			
		int tambahkan (int a, int b) {
			
		
						return a + b;
						
						}
						
				