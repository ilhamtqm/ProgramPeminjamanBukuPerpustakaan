#include <iostream>
#include <string>
using namespace std;
string nama;
int judul;
void function() {
	cout << endl;
	cout << "Mohon masukan nama lengkap Anda\n";
	getline(cin, nama);
	cout << "Halo! " << nama << endl;
	cout << "berapa judul buku yang ingin Anda pinjam? ";
	cin >> judul;
	cout << judul;
	//for ()
}
