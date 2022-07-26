#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int pilih_menu;
int i;
char konfirmasi;
string user, pass;
int larik = 0;
	
struct customer_pesawat{
	string nama;
	string pesawat;
	string no_telp;
	string email;	
	string user;
	string pass;	
};

struct data_tiket{	
	string jenis_tiket;
	string bandara;
	string tujuan;
	int harga_tiket;	
};

customer_pesawat customer[1]; 
data_tiket tiket[1];

void daftar (){
	for (i = 0; i < 1; i++) {
		cout << "\t============================================= " << endl;
	    cout << "\t========   Halaman Daftar Akun    =========== " << endl;
	    cout << "\t============================================= " << endl << endl;
	    
	    cin.ignore(); 
	    
	    cout << "\tNama Pengguna 	\t: "; getline(cin, customer[i].nama);  
	    cout << "\tAlamat Email 	\t: "; getline(cin, customer[i].email); 
	    cout << "\tNo.Telepon/Ponsel \t: "; getline(cin, customer[i].no_telp); cout << endl;
	    
	    cout << "\tUsername \t: "; cin >> customer[i].user;
	    cout << "\tPassword \t: "; cin >> customer[i].pass;
	    
		user = customer[i].user;
	    pass = customer[i].pass;
	}
};

void jadwal_penerbangan (){
	string jadwal[5][6] = {{" Garuda Indonesia","GI050","09:25","Jakarta ","09:15","Landed"},
						   {" Batik Air       ","BA124","11:20","Makassar","11:10","Landed"},
						   {" Air Asia        ","AA024","10:30","Pontianak","10:21","Landed"},
						   {" Citilink        ","CL156","13:00","Aceh    ","12:47","Landed"},
						   {" Lion Air        ","LA006","15:25","Bali    ","15:12","Landed"}};
						   
	cout << "\t-----------------------------------------------------------------------" << endl;
	cout << "\t Daftar Pesawat            Jadwal       Tujuan           ETA    Status " << endl;
	cout << "\t-----------------------------------------------------------------------" << endl;
	
	for (int i = 0; i < 5; i++){ 
		for (int j = 0; j < 6; j++){ 
			cout << "\t" << jadwal[i][j] << ends;
		}
		cout << endl << endl;
	}
	cout << "\t-----------------------------------------------------------------------" << endl;
};

void regist_customer(){
	
	int pilih_pesawat;
	
	cout << "\t==============================" << endl;
	cout << "\t      Daftar Nama Pesawat     " << endl;
	cout << "\t==============================" << endl;
	cout << "\t1. Garuda Indonesia" << endl;
	cout << "\t2. Batik Air"		<< endl;
	cout << "\t3. Air Asia" 		<< endl;
	cout << "\t4. CitiLink" 		<< endl;
	cout << "\t5. Lion Air" 		<< endl;
	cout << "\t==============================" << endl << endl;
	
	pesawat:
	cout << "Pesawat mana yang ingin anda gunakan ?" << endl;
	cout << "Pilih Pesawat yang ingin digunakan : ";
	cin >> pilih_pesawat;
	switch(pilih_pesawat)
	{	case 1:
			customer[larik].pesawat="Garuda Indonesia";
			system ("cls");
			break;
		case 2:
			customer[larik].pesawat="Batik Air";
			system ("cls");
			break;
		case 3:
			customer[larik].pesawat="Air Asia";
			system ("cls");
			break;
		case 4:
			customer[larik].pesawat="CitiLink";
			system ("cls");
			break;
		case 5:
			customer[larik].pesawat="Lion Air";
			system ("cls");
			break;
		default:
			system ("cls");
			cout << "Pilihan anda tidak tersedia" << endl;
			regist_customer();
			break;
	}
};

void tujuan ()
{   int bandara;
	cin.ignore();
    cout << "----------------------------------------- " << endl;
	cout << "Masukkan Bandara awal keberangkatan anda : "; getline(cin, tiket[0].bandara);
	cout << "----------------------------------------- " << endl;
	
	cout << endl;
	int daerah;
	cout << "\t--------------------------" << endl;
	cout << "\t       Daftar Daerah      " << endl;
	cout << "\t--------------------------" << endl;
	cout << "\t1. Aceh" 	<< endl;
	cout << "\t2. Jakarta" 	<< endl;
	cout << "\t3. Bali" 	<< endl;
	cout << "\t4. Pontianak"<< endl;
	cout << "\t5. Makassar" << endl;
	cout << "-----------------------------------" << endl;
	cout << "Pilih Tujuan Destinasi    \t : "; cin >> daerah;
	
	switch(daerah){
		case 1 : 
			tiket[larik].tujuan = "Aceh";
			system ("cls");
			break;
		case 2 :
			tiket[larik].tujuan = "Jakarta";
			system ("cls");
			break;
		case 3 :
			tiket[larik].tujuan = "Bali";
			system ("cls");
			break;
		case 4 :
			tiket[larik].tujuan = "Pontianak";
			system ("cls");
			break;
		case 5 :
			tiket[larik].tujuan = "Makassar";
			system ("cls");
			break;
		default :
			system ("cls");
			cout << "Pilihan anda tidak tersedia" << endl << endl;
			tujuan();
			break;		
	}
};

void pembelian()
{
	int pil_jenis_tiket;
	
	string jenis[3][2] = {{"1. Ekonomi", "Rp. 700.000,00"}, {"2. Bussiness", "Rp. 1.000.000,00"}, {"3. Eksekutif", "Rp. 1.500.000,00"}};
	
	cout << "\t---------------------------------" << endl;
	cout << "\t   Tiket	     Harga				" << endl;
	cout << "\t---------------------------------" << endl;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 2; j++){
			cout << "\t" << jenis[i][j] << ends;
		}
		cout << endl << endl; }
	cout << "\t---------------------------------" << endl << endl;

		cout << "Pilih Jenis Tiket          : ";
		cin >> pil_jenis_tiket;
		switch (pil_jenis_tiket)
		{
			case 1:
				tiket[larik].jenis_tiket="Ekonomi";
				tiket[larik].harga_tiket= 700000;
				break;
			case 2:
				tiket[larik].jenis_tiket="Bussiness";
				tiket[larik].harga_tiket= 1000000;
				break;
			case 3:
				tiket[larik].jenis_tiket="Eksekutif";
				tiket[larik].harga_tiket= 1500000;
				break;
			default :
				system ("cls");
				cout << "Pilihan anda tidak tersedia" << endl << endl;
				pembelian();
				break;
		}	
};

void tampil(){
	for (int i = 0; i < 1; i++){
		
		cout <<"\t===============================================" << endl;
		cout <<"\t		 Data Pembelian				  			 " << endl;
		cout <<"\t===============================================" << endl;
		cout <<"\tNama Pesawat		 			: " << customer[i].pesawat << endl;
		cout <<"\tNama Customer	 		  		: " << customer[i].nama << endl;
		cout <<"\tNomor Telepon		 			: " << customer[i].no_telp << endl;
		cout <<"\tBandara Keberangkatan             		: " << tiket[i].bandara << endl;
		cout <<"\tTujuan Penerbangan		 		: " << tiket[i].tujuan << endl;
		cout <<"\tJenis Tiket		 			: " << tiket[i].jenis_tiket << endl; 
		cout <<"\t==============================================="<< endl;
		cout <<"\tHarga Tiket		 			: Rp." << tiket[i].harga_tiket << endl; 
		cout <<"\t==============================================="<< endl;
		
	}
};

void pembayaran(){
	int bayar;
	int kembalian;
	
	bayaran: 
	cout << endl;
	cout << "\tPembayaran					: Rp.";
	cin >> bayar;
	cout << "\t===============================================" << endl;
	if (tiket[0].harga_tiket < bayar) {
		kembalian = bayar - tiket[0].harga_tiket;
		cout << "\tKembalian Anda			: Rp." << kembalian << endl;
		cout << "\t===============================================" << endl;
		cout << "\tTerima Kasih " << endl << endl; 
	}
	else if(tiket[0].harga_tiket == bayar){
		cout << "\tTerima Kasih " << endl << endl;
	}
	else{
		cout << "\tSaldo Yang Anda Miliki Kurang" << endl;
		goto bayaran;
	}
};

void tiga (){
	cout << "\t===============================" << endl;
	cout << "\t\t Profil Akun 				  " << endl;
	cout << "\t===============================" << endl << endl;
	cout << "Nama Pengguna     \t: " 	<< customer[0].nama << endl;
	cout << "Alamat Email Pengguna\t: " << customer[0].email << endl;
	cout << "No.Telepon/Ponsel \t: " 	<< customer[0].no_telp << endl << endl;
};

void cetak(){
	
	ofstream keluar;
	keluar.open("Tiket Pesawat.txt");
	
	keluar <<"\t===============================================" << endl;
	keluar <<"\t		 Tiket Pesawat				  		   " << endl;
	keluar <<"\t===============================================" << endl;
	keluar <<"\tNama Pesawat		 		: " << customer[0].pesawat << endl;
	keluar <<"\tNama Customer	 		  	: " << customer[0].nama << endl;
	keluar <<"\tNomor Telepon		 		: " << customer[0].no_telp << endl;
	keluar <<"\tBandara Keberangkatan             		: " << tiket[0].bandara << endl;
	keluar <<"\tTujuan Penerbangan		 	: " << tiket[0].tujuan << endl;
	keluar <<"\tJenis Tiket		 		: " << tiket[0].jenis_tiket << endl; 
	
	keluar.close();		
};

int main (){
	home:
	char opsi;
	cout << "\t===========================================" << endl;
	cout << "\t  Laman Regitrasi Pembelian Tiket Pesawat  " << endl;
	cout << "\t===========================================" << endl;
	cout << "\t      Selamat Datang di Layanan Kami       " << endl << endl;
	cout << "\tApakah anda sudah memiliki akun\? <y/n>" << endl; 
	cout << "\t= "; cin >> opsi; 
	cout << endl << endl;
	if (opsi == 'y'||opsi == 'Y') { 
		system ("cls");
		goto login;
	}
	else if (opsi == 'n'||opsi == 'N') {
		system ("cls");
		goto daftar_akun;
	}
	else {
		system ("cls");
		cout << "\t! Input-an anda salah" << endl << endl;
		goto home;
	}
	
	daftar_akun:
	daftar ();
	
	tanya1:
	cout << endl;
	cout << "\tApakah Data yang anda masukan sudah benar ? <y/n> "; cin >> konfirmasi;
	
	if (konfirmasi == 'y' ||konfirmasi == 'Y'){
		system ("cls");
		goto home;
	}
	else if (konfirmasi == 'n' ||konfirmasi == 'N'){
		system ("cls");
		daftar();
		goto tanya1;
	}
	else {
		cout << "\t! Input-an anda salah" << endl << endl; 
		system ("pause");
		goto tanya1;
	}
	
	login:
	for (i = 0; i < 1; i++) {
		cout << "\t============================================= " << endl;
		cout << "\t==========   Halaman login    =============== " << endl;
		cout << "\t============================================= " << endl << endl;
		cout << "Username : "; cin >> user;
		cout << "Password : "; cin >> pass; cout << endl;
		if (user == customer[i].user && pass == customer[i].pass) {
			system ("cls");
			goto menu;
		}
		else {
			cout << "Username & password yang anda masukan salah" << endl;
			tanya_lagi:
			cout << endl;
			cout << "Apakah anda ingin memasukkannya ulang ? <y/n> : ";
			cin >> konfirmasi;
			if (konfirmasi == 'y' ||konfirmasi == 'Y'){
				system("cls");
				goto login;
			}
			else if (konfirmasi == 'n' ||konfirmasi == 'N'){
				confirm:
				cout << "Kembali Ke Laman Utama? <y/n> : "; cin >> konfirmasi;
				if (konfirmasi == 'y' ||konfirmasi == 'Y'){
					system("cls");
					goto home;
				}
				else if (konfirmasi == 'n' ||konfirmasi == 'N'){
					goto tanya_lagi;
				}
				else {
					cout << "! Input-an anda salah" << endl << endl; 
					system ("pause");
					goto confirm;
				}
			}
			else {
				cout << "! Input-an anda salah" << endl << endl; 
				system ("pause");
				goto tanya_lagi;
			}
		} 
	}
    
    menu:
		cout.tie(0);
		cout <<"\t===========================================" << endl;
		cout <<"\t====  PROGRAM PEMBELIAN TIKET PESAWAT  ====" << endl << endl;
		cout <<"\t==============  MENU UTAMA  ===============" << endl;
		cout <<"\t1. Pembelian Tiket" << endl;
		cout <<"\t2. Jadwal Penerbangan Pesawat" << endl;
		cout <<"\t3. Cek Profil Akun" << endl;
		cout <<"\t4. Logout" << endl;
		cout <<"\t5. Cetak Tiket" << endl;
		cout <<"\t===========================================" << endl << endl;
		cout <<"- Masukkan Pilihan : ";
		
		cin >> pilih_menu; cout << endl;
		switch (pilih_menu){
			case 1 :
				system ("cls");
				goto menusatu;
				break;
			case 2 :
				system ("cls");
				goto menudua;
				break;
			case 3 :
				system ("cls");
				goto menutiga;
				break;
			case 4 :
				system ("cls");
				goto menuempat;
				break;
			case 5 :
				system ("cls");
				goto menulima;
				break;
			default	: 
				system("cls");
				goto menu;
				break;
	}
		
	menusatu:
		
	tujuan();
	regist_customer();
	pembelian();
	system("cls");
	tampil();
	
	tanya2:
	cout<<"Apakah data sudah benar? <y/n> : ";
	cin>>konfirmasi;
	if (konfirmasi == 'y' ||konfirmasi == 'Y'){
		system("cls");
		tampil();
		pembayaran();
	}
	else if (konfirmasi == 'n' ||konfirmasi == 'N'){
		system("cls");
		goto menusatu;
	}
	else {
		system ("cls");
		cout << "! Input-an anda salah" << endl << endl;
		tampil();
		goto tanya2;
	}
	
	cout << "Kembali Ke Menu Utama? <y/n> : ";
	cin >> konfirmasi;
	
	if (konfirmasi == 'y' ||konfirmasi == 'Y'){
		system("cls");
		goto menu;
	}
	else if (konfirmasi == 'n' ||konfirmasi == 'N'){
		system ("pause");
		goto opsi_ulang;
	}
	else {
		cout << "! Input-an anda salah" << endl << endl; 
		system ("pause");
		goto opsi_ulang;
	}
	
	menudua:
	jadwal_penerbangan();
	opsi_ulang:
	cout << "Kembali ke menu utama? <y/n> : ";
	cin >> konfirmasi;
	
	if (konfirmasi == 'y' ||konfirmasi == 'Y'){
		system ("cls");
		goto menu;
	}
	else if (konfirmasi == 'n' ||konfirmasi == 'N'){
		system ("pause");
		goto opsi_ulang;
	}
	else {
		cout << "! Input-an anda salah" << endl << endl; system ("pause");
		system ("cls");
		jadwal_penerbangan();
		goto opsi_ulang;
	}
	
	menutiga:
	tiga();
	cout << "Apakah Data Anda Sudah Benar ? <y/n> "; cin >> konfirmasi;
	if (konfirmasi == 'y' ||konfirmasi == 'Y'){
		tanya3:
		cout << "Ingin ke menu utama ? <y/n> "; cin >> konfirmasi;
		if (konfirmasi == 'y' ||konfirmasi == 'Y'){
			system ("cls");
			goto menu;
		}
		else if (konfirmasi == 'n' ||konfirmasi == 'N'){
			system ("cls");
			daftar();
		}
		else {
			cout << "! Input-an anda salah" << endl << endl; 
			system ("cls");
			tiga();
			goto tanya3;
		}
	}
	else if (konfirmasi == 'n' ||konfirmasi == 'N'){
		system ("cls");
		goto menutiga;
	}
	else {
		system ("cls");
		cout << "! Input-an anda salah" << endl << endl;
		goto menutiga;	
	}	

	menuempat:
	goto home;
	
	menulima:
	cetak();
	cout << "File Anda Berhasil Di cetak" << endl;
	cout << "Silahkan lihat tiket pada file Tiket Pesawat.txt" << endl;
	tanya4:
	cout << "Kembali ke Menu Utama ? <y/n> "; cin >> konfirmasi;
	if (konfirmasi == 'y' ||konfirmasi == 'Y'){
		system ("cls");
		goto menu;
	}
	else if (konfirmasi == 'n' ||konfirmasi == 'N'){
		system ("cls");
		goto menulima;
	}
	else {
		system ("cls");
		cout << "\t! Input-an anda salah" << endl << endl;
		goto tanya4;
	}
}
