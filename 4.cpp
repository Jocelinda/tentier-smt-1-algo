#include <iostream>
using namespace std;

struct Kelas
{
public:
    // deklarasi member yang bersifat public
    string nama;
    string nim;
    float nilai;

    // Constructor
    // Kelas()
    // {
    //     this->nama = nama;
    //     this->nim = nim;
    //     this->nilai = nilai;
    // }
};

int main()
{
    // Init new object
    Kelas kelas;

    cout << "Masukkan nama: ";
    // cin >> kelas.nama;
    getline(cin, kelas.nama);

    cout << "Masukkan nim: ";
    // cin >> kelas.nim;
    getline(cin, kelas.nim);

    cout << "Masukkan nilai: ";
    cin >> kelas.nilai;

    cout << "Nama saya adalah " << kelas.nama << " dengan NIM " << kelas.nim << " dan nilai Saya adalah 100 di UTS.\n";

    return 0;
}