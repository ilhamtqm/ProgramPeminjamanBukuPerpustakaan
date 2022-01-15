#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int input;

void loginAuth() {
	ifstream myFile;
	int data;
	myFile.open("anggota.txt");
	myFile >> data;
	cout << data;
	
}
void halamanDepan() {
halamanDepan:
	string login;
	/*cout << "Selamat datang di perpustakaan\n";
	cout << "1.	Pinjam buku\n";
	cout << "2.	Input\n";
	cout << "Mohon memilih salah satu opsi untuk melanjutkan\n";*/

	cout << "Silahkan login\n";
	cout << "Masukkan USER ID Anda\n";
	cout << "login: \n";
	cin >> login;

	if (login == "V9U2E") {
		system("cls");
		peminjamanBuku();
		function();
	}
	else if (login == "Rizky") {
		system("cls");
		peminjamanBuku();
		function();
	}
	else {
		goto halamanDepan;
	}
	
	/*if (input == 1) {
		system("cls");
		peminjamanBuku();
		function();
	}
		else if(input == 2) {
			cout << "input ke 2";
		}
		else if (cin.fail())
		{
		cin.clear();
		goto halamanDepan;
		
		}
		else {
		goto halamanDepan;*/
		
	/*}*/


			


 }
