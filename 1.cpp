#include <iostream> // library
using namespace std;

int main() // main function
{
    // Deklarasi tipe data string dengan variable name nya yaitu "nama"
    string nama;

    // Bagian input
    cout << "Masukkan nama Anda: ";
    getline(cin, nama);

    // Tampilkan hasilnya
    cout << "Halo, " << nama << "\n";

    return 0;
}