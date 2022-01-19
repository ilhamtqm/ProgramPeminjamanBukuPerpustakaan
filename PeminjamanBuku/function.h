//Memasukkan library
#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

//Penggunaan namespace std
using namespace std;

//Deklarasi variabel
string nama;
int judul;
string pinjam;
string kodeBuku;
string tanggalPeminjaman;
char yakin;
bool yakinBool;
int jmlBuku;

//Deklarasi fungsi void "function() 
void function() {		//Fungsi void "function() dimulai
halamanDepan:																											//Label untuk kembali ke awal program
	system("color 0A");																									//Mengganti warna teks menjadi hijau terang dan background hitam

	//Bagian halaman utama
	cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n";					//mengeluarkan kalimat ke user
	cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\n";					//mengeluarkan kalimat ke user
	cout << "\t      Selamat datang di Program Peminjaman Buku Perpustakaan\n";											//mengeluarkan kalimat ke user
	cout << "\n<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n";					//mengeluarkan kalimat ke user
	cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n";					//mengeluarkan kalimat ke user
	cout << endl << endl << endl << endl << endl;																		//mengeluarkan kalimat ke user
	cout << "\t\t      Apakah Anda ingin meminjam buku? Y/N\n";															//mengeluarkan kalimat ke user
	cout << "\t\t\t\t\t";																								//mengeluarkan kalimat ke user
	cin >> pinjam;																										//input user ke variabel "pinjam"
	cout << endl;																										//mengeluarkan endline
	//Bagian halaman utama berakhir

	//Pengecekan nilai variabel "pinjam"
	if (pinjam == "Y") {																								//Jika nilai variabel "pinjam" ekuivalen dengan huruf "Y"
		for (int i = 0; i < 85; i++) {																					//Maka lakukan perulangan for (bagian loading)
			cout << char(219);																							//print char(219) sebanyak 85 kali
			Sleep(15);																									//jeda output selama 15 milidetik
		}																												//Perulangan for berakhir
		system("cls");																									//bersihkan layar
		system("color 07");																								//mengganti warna teks menjadi putih dan background hitam
		peminjamanBuku();																								//eksekusi void peminjamanBuku()
		goto mulai;																										//kembali menuju label "mulai"
	}																													//Bagian if berhenti

	else if (pinjam == "y") {																							//Jika nilai variabel "pinjam" ekuivalen dengan huruf "y"
		for (int i = 0; i < 85; i++) {																					//Maka lakukan perulangan for (bagian loading)
			cout << char(219);																							//print char(219) sebanyak 85 kali
			Sleep(15);																									//jeda output selama 15 milidetik
		}																												//Bagian perulangan for berakhir
		system("cls");																									//bersihkan layar
		system("color 07");																								//mengganti warna teks menjadi putih dan background hitam
		peminjamanBuku();																								//eksekusi void peminjamanBuku()
		goto mulai;																										//kembali menuju label "mulai"
	}																													//Bagian else if berhenti

	else {																												//Jika variabel "pinjam" bernilai lain
		system("cls");																									//bersihkan layar
		goto halamanDepan;																								//kembali menuju label "halamanDepan"
	}																													//Bagian else berakhir

//------//

//Bagian peminjaman buku dimulai

//Bagian input nama peminjam

mulai:																													//Label untuk kembali ke bagian ini
	cin.ignore();																										//Mengabaikan spasi kosong
	cout << "\nMohon masukan nama Anda:\n";																				//Mengeluarkan kalimat ke user
	getline(cin, nama);																									//Input user ke variabel "nama"
	if (nama.empty()) {																									//Jika User tidak mengisi nama maka
		goto mulai;																										//kembali ke label "mulai"
	}																													//Bagian if berakhir
	cout << "\nHalo! " << nama << endl << endl;																			//Mengeluarkan kalimat ke user + variabel "nama"

//------//

//Bagian input tanggal, bulan, dan tahun peminjaman

tanggalPeminjamanLabel:																									//Label untuk kembali ke bagian ini
	cout << "Masukkan tanggal, bulan, dan tahun peminjaman:\n";															//Mengeluarkan kalimat ke user
	getline(cin, tanggalPeminjaman);																					//Input user ke variabel "tanggalPeminjaman"
	if (tanggalPeminjaman.empty()) {																					//Jika User tidak mengisi nama maka
		goto tanggalPeminjamanLabel;																					//kembali ke label "tanggalPeminjamanLabel"
	}																													//Bagian if selesai

//------//

//Bagian input judul buku

judulLabel:																												//Label untuk kembali ke bagian ini
	cout << "Masukkan jumlah judul buku yang ingin dipinjam:\n";														//Mengeluarkan kalimat ke user
	cin >> judul;																										//input user ke variabel "judul"
	while (cin.fail()){																									//While loop untuk pengecekan variabel "judul"
		cin.clear();																									//bersihkan input ke nilai semula
		cin.ignore(INT_MAX, '\n');																						//abaikan input terakhir
		goto judulLabel;																								//kembali ke label judulLabel
	}																													//Bagian while selesai

	//Pembuatan file "riwayat.txt"
	ofstream myFile;																									//Deklarasi variabel myFile
	myFile.open("riwayat.txt", ios::app);																				//buat file bernama "riwayat.txt"
	myFile << "==============================================" << endl;													//memasukan kalimat ke file
	myFile << tanggalPeminjaman << " | ";																				//tulis variabel "tanggalPeminjaman" ke file peminjam.txt
	myFile << "Peminjam: " << nama << " | \n";																			//tulis variabel "nama" ke file peminjam.txt
	myFile.close();																										//Memutus koneksi file

	//------//

	//Bagian perulangan kode buku dan jumlah buku

	//Bagian kode buku
	for (int i = 0; i < judul; ++i) {																					//Perulangan untuk banyaknya judul buku dipinjam
	kodeBukuLabel:																										//label untuk kembali ke bagian ini
		cout << "Masukan kode buku ke " << i + 1 << ":" << endl;														//mengeluarkan kalimat ke user
		cin >> kodeBuku;																								//input user ke variabel "kodeBuku"

		//Pengecekan kode buku sesuai array
		string dataBuku[5]{ "A001","A020", "B002", "C003", "D005" };													//Array berisi kode buku
		//Pengecekan  kode buku dimulai
		if (kodeBuku == dataBuku[0]) {																					//Cek apakah variabel "kodeBuku" ekuivalen array dengan index 0
			cout << "'Mengenal Bahasa Pemrograman C++' telah ditambahkan\n";											//mengeluarkan kalimat ke user
		}																												//Bagian if berhenti

		else if (kodeBuku == dataBuku[1]) {																				//Cek apakah variabel "kodeBuku" ekuivalen dengan array index 1
			cout << "'Pengantar Logika Informatika' telah ditambahkan\n";												//mengeluarkan kalimat ke user
		}																												//Bagian else if berhenti

		else if (kodeBuku == dataBuku[2]) {																				//Cek apakah variabel "kodeBuku" ekuivalen dengan array index 2
			cout << "'English for Beginner' telah ditambahkan\n";														//mengeluarkan kalimat ke user
		}																												//Bagian else if berhenti

		else if (kodeBuku == dataBuku[3]) {																				//Cek apakah variabel "kodeBuku" ekuivalen dengan array index 3
			cout << "'Mendulang Dolar Melalui Foto' telah ditambahkan\n";												//mengeluarkan kalimat ke user
		}																												//Bagian else if berhenti

		else if (kodeBuku == dataBuku[4]) {																				//Cek apakah variabel "kodeBuku" ekuivalen dengan array index 4
			cout << "'Cerpen Nusantara' telah ditambahkan\n";															//mengeluarkan kalimat ke user
		}																												//Bagian else if berhenti

		else {																											//Ketika variabel "kodeBuku" tidak ekuivalen dengan array index 1-4
			cout << "Kode buku tidak ditemukan\n";																		//mengeluarkan kalimat ke user
			goto kodeBukuLabel;																							//kembali ke label "kodeBukuLabel"
		}																												//Bagian else berhenti

	//Bagian jumlah buku
	jmlBukuLabel:																										//Label untuk kembali ke bagian ini
		cout << "Masukkan jumlah buku:\n";																				//Mengeluarkan kalimat ke user
		cin >> jmlBuku;																									//Input user ke variabel "jmlBuku"

		while (cin.fail())																								//While loop untuk pengecekan input
		{																												//Bagian while mulai
			cin.clear();																								//bersihkan input ke nilai semula
			cin.ignore(INT_MAX, '\n');																					//abaikan input terakhir
			goto jmlBukuLabel;																							//kondisi terpenuhi maka kembali ke label "jmlBukuLabel"
		}																												//Bagian while berakhir

		myFile.open("riwayat.txt", ios::app);																			//Buka/buat file peminjam.txt
		myFile << "Kode buku: " << kodeBuku << " | ";																	//tulis variabel "kodeBuku" ke file peminjam.txt
		myFile << "Jumlah: " << jmlBuku << " | \n";																		//tulis variabel "jmlBuku" ke file peminjam.txt
		myFile.close();																									//Memutus koneksi file
	}																													//Bagian perulangan for berakhir

	// ------//

	//Bagian konfirmasi

	cout << "Apakah Anda sudah yakin? Y/N\n";																			//Mengeluarkan kalimat ke user
	cin >> yakin;																										//input user ke variabel "yakin"
	if (yakin == 'Y') {																									//Jika variabel yakin berisi kata "Y" maka
		yakinBool = true;																								//variabel "yakinBool" bernilai true
	}																													//Bagian if berakhir

	else if (yakin == 'y') {																							//Jika variabel yakin berisi kata "y" maka
		yakinBool = true;																								//variabel "yakinBool" bernilai true
	}																													//Bagian else if berakhir

	else {																												//Jika variabel yakin berisi kata lain maka
		yakinBool = false;																								//variabel "yakinBool" bernilai false
	}																													//Bagian else berakhir

	// ------//

	//Bagian penulisan variabel ke file

	if (yakinBool == true) {																							//Jika variabel "yakinBool" bernilai true maka
		ofstream myFile;																								//Deklarasi variabel myFile
		myFile.open("riwayat.txt", ios::app);																			//buka/buat file peminjam.txt
		myFile << "Peminjaman berhasil" << endl;																		//tulis kalimat ke file peminjam.txt
		myFile << "==============================================\n";													//pembatas peminjaman per-orang
		myFile.close();																									//Memutus koneksi file
		system("cls");																									//bersihkan layar
		system("color 02");																								//mengganti warna teks menjadi hijau dan background hitam
		cout << "==================================================================================\n";					//mengeluarkan kalimat ke user
		cout << "Peminjaman buku berhasil!\n";																			//mengeluarkan kalimat ke user
		cout << "Terima kasih sudah meminjam buku\n";																	//mengeluarkan kalimat ke user
		cout << "Selamat membaca :)\n";																					//mengeluarkan kalimat ke user
		cout << "==================================================================================\n";					//mengeluarkan kalimat ke user
		Sleep(7000);																									//jeda output selama 7000 milidetik(7 detik)
		system("cls");																									//bersihkan layar
		goto halamanDepan;																								//kembali menuju label "halamanDepan"
	}																													//Bagian if berakhir

	else {																												//Jika variabel "yakinBool" bernilai lain maka
		ofstream myFile;																								//Deklarasi variabel myFile
		myFile.open("riwayat.txt", ios::app);																			//buka/buat file peminjam.txt
		system("color 04");																								//mengganti warna teks menjadi hijau dan background hitam
		myFile << "Peminjaman dibatalkan" << endl;																		//tulis kalimat ke file peminjam.txt
		myFile << "==============================================\n";													//pembatas peminjaman per-orang
		myFile.close();																									//Memutus koneksi file
		system("cls");																									//bersihkan layar
		cout << "==================================================================================\n";					//mengeluarkan kalimat ke user
		cout << "Peminjaman buku dibatalkan\n";																			//mengeluarkan kalimat ke user
		cout << "==================================================================================\n";					//mengeluarkan kalimat ke user
		Sleep(5000);																									//jeda output selama 5000 milidetik(5 detik)
		system("cls");																									//bersihkan layar
		goto halamanDepan;																								//kembali menuju label "halamanDepan"
	}																													//Bagian else berakhir
} // Fungsi void "function() berakhir