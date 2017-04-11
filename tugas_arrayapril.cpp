//aplikasi menentukan jumlah huruf yang di masukan dengan array
//oleh Nama  : Aditya permana
//	   Kelas : TIF RM 16-C
//	   NIM   : 16.111.156

#include <iostream>

using namespace std;

int main(){
	
	
	char m; //inisialisai variabel
	int z=0, sum=0, n;
	//ALGORITMA	
	cout<<"masukan jumlah huruf:\n";
	cin>>n;
	
	char huruf[n-1]; //variabel utama yang akan ditampilkan outputnya
	while(z <= n-1){
			cout<<">>>>\n";
			cout<<"= ";cin>>huruf[z]; //huruf
			z++;
	}
	
	for(int w=0; w<=w-1; w++ ){
	cout<<"huruf ke-"<<w<<": "<<huruf[w]<<"\n";
	}
	
	cout<<"masukan huruf penentu\n";
	cin>>m;
	
	for(int z=0; z<=n-1; z++ ){
	if(m == huruf[z]){int v=1; sum+=v; }
	}
	
	
	cout<<"jumlah huruf "<<m<<" : sebanyak: "<<sum;
	
}
