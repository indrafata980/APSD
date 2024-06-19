#include <iostream>
using namespace std;

int main() {
    cout << "PROGRAN HITUNG NILAI RATA-RATA \n";

// Deklarasi variabel
    float  Nilai_Tugas1, Nilai_Tugas2, Nilai_Tugas3, Nilai_Rata_rata; 
    string Nim_siswa, Nama_siswa;

// Input data siswa
    cout << "Nim siswa   : ";
    cin >> Nim_siswa;
    cout << "Nama siswa  : ";
    cin >> Nama_siswa;
    cout << "Nilai Tugas I   : ";
    cin >> Nilai_Tugas1;
    cout << "Nilai Tugas II  : ";
    cin >> Nilai_Tugas2;
    cout << "Nilai Tugas III : ";
    cin >> Nilai_Tugas3;

// Menghitung nilai rata-rata
    Nilai_Rata_rata = (Nilai_Tugas1 + Nilai_Tugas2 + Nilai_Tugas3) / 3;

// Tampilan output
    cout << "Nim " << Nim_siswa;
    cout << " Siswa yang bernama " << Nama_siswa ;
    cout << "\nMemperoleh nilai rata-rata " << Nilai_Rata_rata;
    cout << " dari hasil tugas yang diikutinya.";
return 0; 
}
