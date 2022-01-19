//Memasukkan library
#include <iostream>
#include <Windows.h>
#include <string.h>
  
//Penggunaan namespace std
using namespace std;

//Deklarasi fungsi void "function() 
void peminjamanBuku() {		//Fungsi void "function() dimulai
	cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n";
	cout << "Daftar buku yang tersedia\n";
	void headerTabel(); {
	
	//Bagian atas judul
	
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
	
	//Penamaan bagian tabel
	
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

	//Bagian bawah judul tabel
	
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
		
		//Penamaan tabel buku A001

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
		string lamaPA001 = "7 hari";
		int lamaPSizeA001 = lamaPA001.size();
		int lengthlamaPA001 = 18;
		cout << lamaPA001;
		for (int i = 0; i < lengthlamaPA001 - lamaPSizeA001; ++i)
			cout << ' ';
		cout << char(179);
		cout << "\n";
		
		//-----------//

		//Garis border bawah buku A001

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
	void A020(); {
		//buku A020
		 
		//Penamaan tabel buku A020
		 
		//nomer
		cout << "\n";
		cout << char(179);
		cout << "2 " << char(179);
		//nama buku
		string A020 = "Pengantar Logika Informatika";
		int A020Size = A020.size();
		int judulBukuSize = 45;
		cout << A020;
		for (int i = 0; i < judulBukuSize - A020Size; ++i)
			cout << ' ';
		cout << char(179);
		//kode buku
		string kodeA020 = "A020";
		int kodeSizeA020 = kodeA020.size();
		int lengthA020 = 12;
		cout << kodeA020;
		for (int i = 0; i < lengthA020 - kodeSizeA020; ++i)
			cout << ' ';
		cout << char(179);
		//lama peminjaman
		string lamaPA020 = "7 hari";
		int lamaPSizeA020 = lamaPA020.size();
		int lengthlamaPA020 = 18;
		cout << lamaPA020;
		for (int i = 0; i < lengthlamaPA020 - lamaPSizeA020; ++i)
			cout << ' ';
		cout << char(179);
		cout << "\n";
		
		//-----------//

		//Garis border bawah buku A020

		//border bawah
		//pojok kiri bawah
		cout << char(195);
		//horizontal bawah1
		for (int i = 0; i < 2; ++i)
			cout << char(196);
		//pojok cross section1
		cout << char(197);
		//horizontal bawah2
		for (int i = 0; i < A020Size + (judulBukuSize - A020Size); ++i)
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
	void B002(); {
		//buku B002
		
		//Penamaan tabel buku B002

		//nomer
		cout << "\n";
		cout << char(179);
		cout << "3 " << char(179);
		//nama buku
		string B002 = "English for Beginner";
		int B002Size = B002.size();
		int judulBukuSize = 45;
		cout << B002;
		for (int i = 0; i < judulBukuSize - B002Size; ++i)
			cout << ' ';
		cout << char(179);
		//kode buku
		string kodeB002 = "B002";
		int kodeSizeB002 = kodeB002.size();
		int lengthB002 = 12;
		cout << kodeB002;
		for (int i = 0; i < lengthB002 - kodeSizeB002; ++i)
			cout << ' ';
		cout << char(179);
		//lama peminjaman
		string lamaPB002 = "7 hari";
		int lamaPSizeB002 = lamaPB002.size();
		int lengthlamaPB002 = 18;
		cout << lamaPB002;
		for (int i = 0; i < lengthlamaPB002 - lamaPSizeB002; ++i)
			cout << ' ';
		cout << char(179);
		cout << "\n";
		
		//-----------//

		//Garis border bawah buku B002

		//border bawah
		//pojok kiri bawah
		cout << char(195);
		//horizontal bawah1
		for (int i = 0; i < 2; ++i)
			cout << char(196);
		//pojok cross section1
		cout << char(197);
		//horizontal bawah2
		for (int i = 0; i < B002Size + (judulBukuSize - B002Size); ++i)
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
	void C003(); {
		//buku C003
		
		//Penamaan tabel buku C003

		//nomer
		cout << "\n";
		cout << char(179);
		cout << "4 " << char(179);
		//nama buku
		string C003 = "Mendulang Dolar Melalui Foto";
		int C003Size = C003.size();
		int judulBukuSize = 45;
		cout << C003;
		for (int i = 0; i < judulBukuSize - C003Size; ++i)
			cout << ' ';
		cout << char(179);
		//kode buku
		string kodeC003 = "C003";
		int kodeSizeC003 = kodeC003.size();
		int lengthAC003 = 12;
		cout << kodeC003;
		for (int i = 0; i < lengthAC003 - kodeSizeC003; ++i)
			cout << ' ';
		cout << char(179);
		//lama peminjaman
		string lamaPBC003 = "7 hari";
		int lamaPSizeC003 = lamaPBC003.size();
		int lengthlamaPC003 = 18;
		cout << lamaPBC003;
		for (int i = 0; i < lengthlamaPC003 - lamaPSizeC003; ++i)
			cout << ' ';
		cout << char(179);
		cout << "\n";
		
		//-----------//

		//Garis border bawah buku C003

		//border bawah
		//pojok kiri bawah
		cout << char(195);
		//horizontal bawah1
		for (int i = 0; i < 2; ++i)
			cout << char(196);
		//pojok cross section1
		cout << char(197);
		//horizontal bawah2
		for (int i = 0; i < C003Size + (judulBukuSize - C003Size); ++i)
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
	void D005(); {
		//buku D005
		
		//Penamaan tabel buku D005

		//nomer
		cout << "\n";
		cout << char(179);
		cout << "5 " << char(179);
		//nama buku
		string D005 = "Cerpen Nusantara";
		int D005Size = D005.size();
		int judulBukuSize = 45;
		cout << D005;
		for (int i = 0; i < judulBukuSize - D005Size; ++i)
			cout << ' ';
		cout << char(179);
		//kode buku
		string kodeD005 = "D005";
		int kodeSizeD005 = kodeD005.size();
		int lengthAD005 = 12;
		cout << kodeD005;
		for (int i = 0; i < lengthAD005 - kodeSizeD005; ++i)
			cout << ' ';
		cout << char(179);
		//lama peminjaman
		string lamaPBD005 = "7 hari";
		int lamaPSizeD005 = lamaPBD005.size();
		int lengthlamaPD005 = 18;
		cout << lamaPBD005;
		for (int i = 0; i < lengthlamaPD005 - lamaPSizeD005; ++i)
			cout << ' ';
		cout << char(179);
		cout << "\n";
		
		//-----------//

		//Garis border bawah buku D005

		//border bawah
		//pojok kiri bawah
		cout << char(192);
		//horizontal bawah1
		for (int i = 0; i < 2; ++i)
			cout << char(196);
		//pojok cross section1
		cout << char(193);
		//horizontal bawah2
		for (int i = 0; i < D005Size + (judulBukuSize - D005Size); ++i)
			cout << char(196);
		//pojok cross section2
		cout << char(193);
		//horizontal bawah3
		for (int i = 0; i < 12; ++i)
			cout << char(196);
		//pojok cross section3
		cout << char(193);
		//horizontal bawah4
		for (int i = 0; i < 18; ++i)
			cout << char(196);
		//pojok kanan bawah
		cout << char(217);
	}
	cout << "\n<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n";
}