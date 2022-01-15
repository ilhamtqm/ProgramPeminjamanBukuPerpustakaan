#include <iostream>
#include <string>
//#include <istream>
#include <fstream>
//#include <stdio.h>
#include <Windows.h>



using namespace std;
string nama;
int judul;
////const int arraySize = 100;
//int const sizeArray = 1000;
string kodeBuku;
//string simpanKode;
string tanggalPeminjaman;
char yakin;
bool yakinBool;
int jmlBuku;

void function() {
awal:
	cin.ignore();
	cout << "\nMohon masukan nama Anda\n";
		getline(cin, nama);			//input nama lengkap
		if (nama.empty()) {			//Jika User tidak mengisi nama
		goto awal;				//Kembali ke label awal
		}
	cout << "\nHalo! " << nama << endl;
	
	tanggalPeminjamanLabel :
	cout << "Masukkan tanggal peminjaman\n";
		getline(cin,tanggalPeminjaman);
		if (tanggalPeminjaman.empty()) {			//Jika User tidak mengisi nama
			goto tanggalPeminjamanLabel;				//Kembali ke label awal
		}

		//cout << endl;
	/*startPinjam:*/
	//for loop peminjaman
	
	cout << "Masukkan banyaknya judul buku yang ingin dipinjam:\n";
	cin >> judul;
	
	ofstream myFile;
	myFile.open("peminjam.txt", ios::app);
	myFile << "==============================================" << endl;
	myFile << tanggalPeminjaman << " | ";
	myFile << "Peminjam: " << nama << " | \n";
	myFile.close();

	for (int i = 0; i < judul; ++i) {
		kodeBukuLabel:
		cout << "Masukan kode buku ke " << i+1 << ":" << endl;
		cin >> kodeBuku;
		string dataBuku[5]{ "A001","B002" };
		if (kodeBuku == dataBuku[0]) {
			cout << "'Mengenal Bahasa Pemrograman C++' telah ditambahkan\n";
		}
		else if (kodeBuku == dataBuku[1]) {
			cout << "'English for Beginning' telah ditambahkan\n";
		}
		else {
			cout << "Kode buku tidak ditemukan gagal\n";
			goto kodeBukuLabel;
		}


		cout << "Masukkan jumlah buku\n";
		cin >> jmlBuku;

		
		



	/*	ofstream myFile;
		myFile.open("peminjam.txt", ios::app);
		myFile << tanggalPeminjaman << " | ";
		myFile << "Peminjam: " << nama << " | ";*/
		myFile.open("peminjam.txt", ios::app);
		myFile << "Kode buku: " << kodeBuku << " | ";
		myFile << "Jumlah: " << jmlBuku << " | \n";
		myFile.close();
	}
	cout << "Apakah Anda sudah yakin? Y/N\n";
	cin >> yakin;
	if (yakin == 'Y') {
		yakinBool = true;
			}
		else if (yakin == 'y'){
		yakinBool = true;
			}
		else{
		yakinBool = false;
			}
	
			if (yakinBool == true) {
				ofstream myFile;
				myFile.open("peminjam.txt", ios::app);
				myFile << "Peminjaman berhasil" << endl;
				myFile << "=============================================="; //pembatas peminjaman per-orang
				myFile.close();

				cout << "============================================================\n";
				cout << "Terima kasih " << nama << " sudah meminjam buku di perpustakaan\n";
				cout << "Selamat membaca\n";
				cout << "============================================================\n";
				Sleep(8000);
				system("cls");
				peminjamanBuku();
				goto awal;
			}
			else {
				ofstream myFile;
				myFile.open("peminjam.txt", ios::app);
				myFile << "Peminjaman dibatalkan" << endl;
				myFile << "=============================================="; //pembatas peminjaman per-orang
				myFile.close();

				cout << "Peminjaman berhasil dibatalkan";
				Sleep(5000);
				system("cls");
				peminjamanBuku();
				goto awal;

			}


	//working program///
//awal: //label mulai peminjaman buku
//	cout << endl;
//	cout << "Mohon masukan nama lengkap Anda\n";
//	getline(cin, nama);			//input nama lengkap
//	if (nama.empty()) {			//Jika User tidak mengisi nama
//		goto awal;				//Kembali ke label awal
//	}
//	cout << "Halo! " << nama << endl;
//	cout << "Masukkan tanggal peminjaman";
//	getline(cin,tanggalPeminjaman);
//	startPinjam:
//	cout << "Masukkan kode buku yang ingin Anda pinjam\n";
//	cin >> kodeBuku;
//	cout << "Masukkan jumlah buku yang ingin Anda pinjam\n";
//	cin >> jmlBuku;
//
//	ofstream myFile;
//	myFile.open("peminjam.txt",ios::app);
//	myFile << tanggalPeminjaman << " ";
//	myFile << "Peminjam: " << nama << " ";
//	myFile << "kode buku: " << kodeBuku << " ";
//	myFile << "jumlah: " << jmlBuku <<endl;
//	myFile.close();
//	cout << "Apakah Anda ingin meminjam lagi? Y/N\n";
//	cin >> pinjamLagi;
//	bool pinjamBool;
//	if (pinjamLagi == 'Y'){
//		pinjamBool = true;
//	}
//	else if (pinjamLagi == 'y'){
//		pinjamBool = true;
//	}
//	else{
//		pinjamBool = false;
//	}
//
//	cout << pinjamBool;
//
//	if (pinjamBool == true) {
//		goto startPinjam;
//	}
//	else {
//		cout << "program selesai";
//	}
	//work//
	//=====
	/*cout << nama << " apakah Anda sudah yakin?";


	cout << kodeBuku << jmlBuku;*/
	/*for (int i = 0; i < judul; ++i) {
		cout << "Masukan kode buku:";
		cout << endl;
		cin >> kodeBuku;*/
	/*	if (kodeBuku == "A001" , "B002") {
			cout << "buku ada\n";
		}
		else {
			cout << "Maaf kode buku tidak ditemukan";
			Sleep(3000);
			system("cls");
			peminjamanBuku();
			cout << endl;
			goto startPinjam;
		}*/
		
		/*next:*/
		/*if (kodeBuku == "A001","B002") {
			ofstream myFile;
			myFile.open(nama.c_str());
			myFile << "Peminjam: " << nama <<endl;
			myFile << "kode buku: " << kodeBuku;
			myFile.close();
		}*/

		/*cout << "Masukkan jumlah buku";
		cin >> jmlBuku;
	}
	cout << kodeBuku;*/


	/*string F;
	string dataBukuA = "A001";
	if (simpanKode == dataBukuA) {
		dataBukuA = F;
		cout << F;
	}*/

	//Data Buku
	//string A001 = "Mengenal Bahasa Pemrograman C++";
	//string dataBuku[5] = { A001 };
	//string dataBuku = "A001";
	//int res = simpanKode.compare(dataBuku);
	/*if (simpanKode == dataBuku) {
		cout << "Buku ada";
	}*/
}
