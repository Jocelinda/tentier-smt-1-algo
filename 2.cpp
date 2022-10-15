#include <iostream>
using namespace std;

int main()
{
    // deklarasi
    string namaBarang[5] = {
        "susu",
        "telur",
        "daging",
        "bayam",
        "ikan"};

    // tampilkan hasilnya
    cout << "List belanja bulan Oktober: \n";
    for (int x = 0; x < 5; x++)
        cout << "- " << namaBarang[x] << "\n";

    cout << "\n";

    // mengakses index tertentu
    cout << "Value dari index ke-4 adalah: " << namaBarang[4] << "\n";

    return 0;
}