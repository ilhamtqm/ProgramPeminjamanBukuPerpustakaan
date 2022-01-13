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

	cout << "Selamat datang di perpustakaan\n";
	cout << "Mohon memilih salah satu opsi untuk melanjutkan\n";

	cout << "login: \n";
	cin >> input;


	
	if (input == 1) {
		system("cls");
		peminjamanBuku();
	}
		else if(input == 2) {
			cout << "innput ke 2";
		}
		else if (cin.fail())
		{
		cin.clear();
		goto halamanDepan;
		
		}
		else {
		goto halamanDepan;
		
	}


			


}
