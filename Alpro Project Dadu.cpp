#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

//global_variabel--- 
int jumlahPemain, nilaidadu1, nilaidadu2, a ,b, c, d, e, hasilAkhir, maks;
bool finish;
//------------------

//function----------
int daduSatu(){
	return rand ()% 6 + 1 ;
}
int daduDua() {
	return rand ()% 6 + 1 ;
}
//-----------------

int main(){
	srand((unsigned)time(NULL));
		cout<<"==============================="<<endl;
		cout<<"= RENY = SILVI = ADEL = GUSTI ="<<endl;
		cout<<"==============================="<<endl;
			
			while(true){
				cout<<"Masukkan pemain (2 s/d 4) : ";
				cin>>jumlahPemain;
				
					if(jumlahPemain < 2){
						cout<<"jumlah pemain terlalu sedikit"<<endl;
					}else if(jumlahPemain > 4){
						cout<<"jumlah pemain terlalu banyak"<<endl;
					}else{
						break;
					}
			}

string namaPemain[jumlahPemain];
int arr_dadu[jumlahPemain];
int tmp_dadu[jumlahPemain];

	for(a=0; a<jumlahPemain; a++){
		cout<<"Nama Pemain "<<a+1<<" : ";
		cin>>namaPemain[a];
	}
	
	cin.ignore();
	
	for(c=0; c<a; c++){
		arr_dadu[c] = 0;
	}
	
	finalSeri:
	finish = false;
	while(finish == false){
		
		for(b=0; b<a; b++){
			
		ulang:
		cout<<namaPemain[b]<<" [ENTER] : ";
		cin.ignore();
		
			nilaidadu1 = daduSatu();
			nilaidadu2 = daduDua();
				cout<<"============="<<endl;
					cout<<"=  "<<nilaidadu1<<" dan "<<nilaidadu2<<"  ="<<endl;
				cout<<"============="<<endl;
					
		tmp_dadu[b] = nilaidadu1 + nilaidadu2;
		cout<<namaPemain[b]<<" = "<<tmp_dadu[b]<<endl<<endl;
		
		arr_dadu[b] += nilaidadu1 + nilaidadu2;
		
			if(nilaidadu1 == nilaidadu2){
				cout<<"Dadu Kembar, Roll Lagi"<<endl;
				goto ulang;
			}
		
		}
		
		maks = 0;
		cout<<"Skor saat ini"<<endl;
		cout<<"============="<<endl;
		
			for(d=0; d<b; d++){
				cout<<namaPemain[d]<<" = "<<arr_dadu[d]<<endl;
			}
			
			for(e=0; e<d; e++){
				if(arr_dadu[e] >= 100 && arr_dadu[e] > maks){
					maks = arr_dadu[e];
					hasilAkhir = e;
					finish = true;
				} else if(arr_dadu[e] >= 100 && arr_dadu[e] >= maks){
					maks = arr_dadu[e];
					cout<<"Skor Masih Seimbang, Roll Lagi"<<endl;
					cout<<"============="<<endl<<endl;
					goto finalSeri;
				}
			}
		
		cout<<"============="<<endl<<endl;
		
			if(finish == true){
				cout<<"Pemenangnya adalah "<<namaPemain[hasilAkhir]<<" dengan skor "<<arr_dadu[hasilAkhir];
			}
		
	}

}
