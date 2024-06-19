#include <iostream>
using namespace std;

int main () {
   
    // Deklarasi Variabel
   cout << "PROGRAM HITUNG NILAI AKHIR \n";
   string nama_siswa;
   float nilai_keaktifan, nilai_tugas, nilai_ujian, nilai_akhir;
   
   //Input Data Siswa
   cout << "Nama Siswa      : ";
   cin >> nama_siswa;
   
    //Input Data Siswa
   cout << "Nilai Keaktifan : ";
   cin >> nilai_keaktifan;
   cout << "Nilai Tugas     : ";
   cin >> nilai_tugas;
   cout << "Nilai Ujian     : ";
   cin >> nilai_ujian;

   //Mencari Nilai Murni
   float nilai_keaktifan_murni = nilai_keaktifan * 20 / 100;
   float nilai_tugas_murni = nilai_tugas * 50 / 100;
   float nilai_ujian_murni = nilai_ujian * 30 / 100;

   
   //Mencari Nilai Akhir
   nilai_akhir = (nilai_keaktifan_murni + nilai_tugas_murni + nilai_ujian_murni);
   cout << "\n",

   //Output
   cout << "Siswa yang bernama     : " << nama_siswa << "\n";
   cout << "Dengan nilai presentasi yang dihasilkan " << "\n";
   cout << "Nilai Keaktifan * 20 % : " << nilai_keaktifan_murni << "\n";
   cout << "Nilai Tugas * 50 %     : " << nilai_tugas_murni << "\n";
   cout << "Nilai Ujian * 30 %     : " << nilai_ujian_murni << "\n";
   cout << "Jadi siswa yang bernama " << nama_siswa << " memperoleh nilai akhir sebesar " << nilai_akhir; 

return 0;
}
