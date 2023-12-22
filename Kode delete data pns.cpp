#include <iostream>
using namespace std;

#define max 10
string n[max], nip[max], u[max], jk[max], s[max], pend[max], pk[max], tt[max], gol[max], g[max], loop;
int pos=0;

void del(){
	int x;
	do{
		if(pos>0){
			cout<<"hapus data ke : ";
			cin>>x;
			for(int i=x; i<pos; i++){
				n[i-1]=n[1];
			}
			pos--;
			cout<<"hapus lagi(y/t) : ";
			cin>>loop;
		}else {
			cout<<"isi t : ";
			cin>>loop;
		}
		
	}while(loop=="y");
}

int main(){
	int pil;
	do{
		system("cls");
		cout<<"4. Hapus Data\n";
	
		cout<<"Pilihan : ";
		cin>>pil;
		switch(pil){
		case 4:
			del();
			break;
		default:
			cout<<"pilih 1-4"<<endl;
			break;
		}
	}while(pil !=5);
	cout<<"Program Selesai";
	 
}

