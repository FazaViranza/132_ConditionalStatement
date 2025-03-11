#include <iostream>
using namespace std;

float FungsiHitungLuasBerapameter(float a, float b){
    return a * b;
}

int main()
{
    float Panjang, Lebar;

    cout << "Masukkan panjangnya : ";
    cin >> Panjang;
    cout << "Masukkan Lebarnya";
    cin >> Lebar;

    cout << "Luas Persegi Panjang : "
    << FungsiHitungLuasBerapameter (Panjang, Lebar);
}