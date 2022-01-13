#include <iostream>
#include <fstream>
#include <string>
#include "daftarBuku.h"
#include "function.h"
#include "halamanDepan.h"
using namespace std;
int main() {
	/*ifstream myFile;
	string data;
	string id;
	
	myFile.open("anggota.txt");
	myFile >> data;
	cout << data;
	cout << "\nMasukkan ID milik Anda\n";
	cin >> id;
	if (id == data){
	cout << "ID anda adalah " << id;
	}
	else
	{
		"salah ID";
	}*/


	peminjamanBuku();
	function();
	//loginAuth();
	/*halamanDepan();*/
	cout << "\n";
	system("pause");
	return 0;
}