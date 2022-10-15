#include <iostream>
#include <cmath>
using namespace std;

// Rumus balok = p * l * t
float balok(float panjang, float lebar, float tinggi)
{
    // Cara 1:
    // float hasil = panjang * lebar * tinggi;
    // return hasil;

    // Cara 2:
    return panjang * lebar * tinggi;
}

// Rumus bola = 4/3 * PI * r^3
float bola(float PI, float rad)
{
    // Cara 1
    float hasil = (float)4 / 3 * PI * pow(rad, 3);
    return hasil;
}

int main()
{
    // Deklarasi variable
    float panjangBalok;
    float lebarBalok;
    float tinggiBalok;

    const float PI = 3.14;
    float radius;

    // Proses input
    cout << "Masukkan panjang, lebar, tinggi Balok: ";
    cin >> panjangBalok >> lebarBalok >> tinggiBalok;

    cout << "Masukkan radius Bola: ";
    cin >> radius;

    // implementasi function
    // Cara Dylan:
    cout << "Volume balok adalah " << balok(panjangBalok, lebarBalok, tinggiBalok) << "\n";
    cout << "Volume bola adalah " << bola(PI, radius);

    return 0;
}