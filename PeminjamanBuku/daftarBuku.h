#include <iostream>
#include <Windows.h>
#include <string.h>
#include <time.h>   

using namespace std;

void peminjamanBuku() {
	
	void headerTabel(); {
	//border atas
	//pojok kiri atas
	cout << char(218);
	//horizontal atas1
	for (int i = 0; i < 2; ++i)
	cout << char(196);
	//pojok cross section1
	cout << char(194);
	//horizontal atas2
	for (int i = 0; i < 45; ++i)
	cout << char(196);
	//pojok cross section2
	cout << char(194);
	//horizontal atas3
	for (int i = 0; i < 12; ++i)
	cout << char(196);
	//pojok cross section3
	cout << char(194);
	//horizontal atas4
	for (int i = 0; i < 18; ++i)
		cout << char(196);
	//pojok kanan atas
	cout << char(191);
	//-----------//
	
	//baris 1
	//nomer
	cout << "\n";
	cout<< char(179);
	cout << "No" << char(179);
	//nama buku
	cout<< "Judul Buku";
	for (int i = 0; i < 35; ++i)
		cout << ' ';
	cout << char(179);
	//kode buku
	cout << "Kode Buku";
	for (int i = 0; i < 3; ++i)
		cout << ' ';
	cout << char(179);
	//lama peminjaman
	cout << "Lama Peminjaman";
	for (int i = 0; i < 3; ++i)
		cout << ' ';
	cout << char(179);
	cout << "\n";
	//-----------//
	
	//border bawah
	//pojok kiri bawah
	cout << char(195);
	//horizontal bawah1
	for (int i = 0; i < 2; ++i)
		cout << char(196);
	//pojok cross section1
	cout << char(197);
	//horizontal bawah2
	for (int i = 0; i < 45; ++i)
		cout << char(196);
	//pojok cross section2
	cout << char(197);
	//horizontal bawah3
	for (int i = 0; i < 12; ++i)
		cout << char(196);
	//pojok cross section3
	cout << char(197);
	//horizontal bawah4
	for (int i = 0; i < 18; ++i)
		cout << char(196);
	//pojok kanan bawah
	cout << char(180);
	}
	void A001(); {
		//buku A001
		//nomer
		cout << "\n";
		cout << char(179);
		cout << "1 " << char(179);
		//nama buku
		string A001 = "Mengenal Bahasa Pemrograman C++";
		int A001Size = A001.size();
		int judulBukuSize = 45;
		cout << A001;
		for (int i = 0; i < judulBukuSize - A001Size; ++i)
				cout << ' ';
		cout << char(179);
		//kode buku
		string kodeA001 = "A001";
		int kodeSizeA001 = kodeA001.size();
		int lengthA001 = 12;
		cout << kodeA001;
		for (int i = 0; i < lengthA001 - kodeSizeA001; ++i)
			cout << ' ';
		cout << char(179);
		//lama peminjaman
		string lamaPA001 = "31 hari";
		int lamaPSizeA001 = lamaPA001.size();
		int lengthlamaPA001 = 18;
		cout << lamaPA001;
		for (int i = 0; i < lengthlamaPA001 - lamaPSizeA001; ++i)
			cout << ' ';
		cout << char(179);
		cout << "\n";
		//-----------//

		//border bawah
		//pojok kiri bawah
		cout << char(195);
		//horizontal bawah1
		for (int i = 0; i < 2; ++i)
			cout << char(196);
		//pojok cross section1
		cout << char(197);
		//horizontal bawah2
		for (int i = 0; i < A001Size + (judulBukuSize-A001Size); ++i)
			cout << char(196);
		//pojok cross section2
		cout << char(197);
		//horizontal bawah3
		for (int i = 0; i < 12; ++i)
			cout << char(196);
		//pojok cross section3
		cout << char(197);
		//horizontal bawah4
		for (int i = 0; i < 18; ++i)
			cout << char(196);
		//pojok kanan bawah
		cout << char(180);
	}
	
	
	////pojok kiri atas
	//cout << char(218);
	////horizontal atas
	//for (int i = 0; i < 60; ++i)
	//cout << char(196);
	////pojok kanan atas
	//cout << char(191);
	////vertikal
	//	for (int i = 0; i < 8; ++i)
	//	cout << "\n" << char(179);

		//cout << char(179);
	//cout << char(179);
	}
