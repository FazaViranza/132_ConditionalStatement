#include <iostream>
using namespace std;

float Luas, Panjang, Lebar;

void ProsedurHitungLuas(){
    Luas = Panjang * Lebar;
}

int main()
{
    cout << "Masukkan panjangnya : ";
    cin >> Panjang;
    cout << "Masukkan lebarnya : ";
    cin >> Lebar;
    
    ProsedurHitungLuas();
    cout << "Luas Persegi Panjang : " << Luas;
}