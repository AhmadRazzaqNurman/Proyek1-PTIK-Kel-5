#include <iostream>
using namespace std;

#define max 10
string n[max], nip[max], u[max], jk[max], s[max], pend[max], pk[max], tt[max], gol[max], g[max], loop;
int pos=0;

void edit(){
	int y, k;
	do{
	
		cout << "Edit Data ke : ";
		cin>>y;
		cout<<"Edit Nomor : ";
		cin>>k;
		cin.ignore();
		if(k==1){
		cout<<"Edit Nama : ";
		getline(cin, n[y-1]);
		}else if(k==2){
		cout<<"Edit NIP : ";
		getline(cin, nip[y-1]);
		}else if(k==3){
		cout<<"Edit Umur : ";
		getline(cin, u[y-1]);
		}else if(k==4){
		cout<<"Edit Jenis Kelamin : ";
		getline(cin, jk[y-1]);
		}else if(k==5){
		cout<<"Edit Status : ";
		getline(cin, s[y-1]);
		}else if(k==6){
		cout<<"Edit Pendidikan : ";
		getline(cin, pend[y-1]);
		}else if(k==7){
		cout<<"Edit Pekerjaan : ";
		getline(cin, pk[y-1]);
		}else if(k==8){
		cout<<"Edit Tempat Tugas : ";
		getline(cin, tt[y-1]);
		}else if(k==9){
		cout<<"Edit Golongan : ";
		getline(cin, gol[y-1]);
		}else if(k==10){
		cout<<"Edit Gaji : ";
		getline(cin, g[y-1]);
		}else{
			cout<<"selesai";
		}
		cout<<"Edit menjadi : ";
		
		cout << "ubah lagi (y/t) : ";
		cin >> loop;
	} while (loop == "y");
}

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
		cout<<"3. Edit Data\n";
		cout<<"4. Hapus Data\n";
	
		cout<<"Pilihan : ";
		cin>>pil;
		switch(pil){
		case 3:
			edit();
			break;
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

