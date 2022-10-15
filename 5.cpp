#include <iostream>
using namespace std;

bool isPrime(int num)
{
    // 0 dan 1 bukanlah prime number
    // jadi return false
    if (num == 1 || num == 0)
        return false;

    // cek apakah num adalah prime number
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return false;

    // Kalau number adalah prime number
    return true;
}

int main()
{
    int numInput = 0;

    cout << "Masukkan batas angka bilangan prima: ";
    cin >> numInput;

    cout << "\n";

    for (int i = 1; i <= numInput; i++)
        if (isPrime(i))
            cout << i << " ";

    return 0;
}