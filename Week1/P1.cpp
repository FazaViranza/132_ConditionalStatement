#include    <iostream>
using namespace std;

//numeric nLuas, nPanjang, nLebar;
float Luas, Panjang, Lebar;

void InputData()
{
    //display "Masukkan Panjangnya ; "
    cout << "Masukkan Panjangnya : ";
    //accept nPanjang
    cin >> Panjang;
    //display "Masukkan Lebarnya ; "
    cout << "Masukkan Lebarnya : ";
    //accept nLebar
    cin >> Lebar; 
}
float HitungLuas()
{
    //compute nLuas = nPanjang * nLebar
    return Panjang * Lebar;

}
void TampilData()
{
    //display "Luas Persegi Panjang ; " + nLuas
    cout << "Luas Persegi Panjang : " << HitungLuas();
}


int main()
{   //begin
    InputData();
    TampilData();

}   //end