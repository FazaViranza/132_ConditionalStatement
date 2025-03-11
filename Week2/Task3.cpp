#include <iostream> 
using namespace std;

float FungsiHitungLuasRerata(float x, float y){
    return (x * y) / 2;
}

string FungsiCekStatus(float a){
    if (a >= 60){
        return "lulus";
    } else {
        return "tidak lulus";
    }
}

int main()
{
    float Nilai1, Nilai2;

    cout << "Masukkan Nilai 1: ";
    cin >> Nilai1;
    cout << "Masukkan Nilai 2: ";
    cin >> Nilai2;
    cout << "Status Kelulusan: " 
    << FungsiCekStatus(FungsiHitungLuasRerata(Nilai1, Nilai2));
}
