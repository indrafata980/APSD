#include <iostream>
#include <iomanip>
#include <string> // tambahkan library string
using namespace std;

struct Mahasiswa {
    string nim; // ubah tipe data menjadi string
    string nama; // ubah tipe data menjadi string
    float nilaiUTS;
    float nilaiUAS;
    float nilaiAkhir;
    char nilaiHuruf;
};

void hitungNilai(Mahasiswa &mahasiswa) {
    mahasiswa.nilaiAkhir = (mahasiswa.nilaiUAS * 0.4) + (mahasiswa.nilaiUTS * 0.6);
    if (mahasiswa.nilaiAkhir >= 80)
        mahasiswa.nilaiHuruf = 'A';
    else if (mahasiswa.nilaiAkhir >= 70)
        mahasiswa.nilaiHuruf = 'B';
    else if (mahasiswa.nilaiAkhir >= 56)
        mahasiswa.nilaiHuruf = 'C';
    else if (mahasiswa.nilaiAkhir >= 47)
        mahasiswa.nilaiHuruf = 'D';
    else
        mahasiswa.nilaiHuruf = 'E';
}

int main() {
    int banyakData;
    cout << "Masukkan jumlah data mahasiswa: ";
    cin >> banyakData;

    Mahasiswa daftarMahasiswa[banyakData];

    // Menentukan lebar kolom untuk nomor, NIM, dan nama
    int lebarNomor = 4;
    int lebarNIM = 9;
    int lebarNama = 20;

    for (int i = 0; i < banyakData; ++i) {
        cout << "\nData Mahasiswa ke-" << i + 1 << ":" << endl;
        cout << "Masukkan NIM: ";
        cin >> daftarMahasiswa[i].nim;
        cout << "Masukkan Nama: ";
        cin.ignore(); // untuk membersihkan buffer agar getline tidak terpengaruh
        getline(cin, daftarMahasiswa[i].nama);
        // Memotong nama jika lebih panjang dari 20 karakter
        if (daftarMahasiswa[i].nama.length() > lebarNama) {
            daftarMahasiswa[i].nama = daftarMahasiswa[i].nama.substr(0, lebarNama);
        }
        cout << "Masukkan Nilai UTS: ";
        cin >> daftarMahasiswa[i].nilaiUTS;
        cout << "Masukkan Nilai UAS: ";
        cin >> daftarMahasiswa[i].nilaiUAS;

        hitungNilai(daftarMahasiswa[i]);
    }

    // Tampilan Tabel
    cout << "\nTabel Nilai Mahasiswa:\n";
       cout << "| " << setw(lebarNomor) << left << "No" << left 
            << " | " << setw(lebarNIM) << "NIM" 
            << " | " << setw(lebarNama) << "Nama Mahasiswa" 
            << " | " << setw(9) << "Nilai UTS" 
            << " | " << setw(9) << "Nilai UAS" 
            << " | " << setw(11) << "Nilai Akhir" 
            << " | " << setw(11) << "Nilai Huruf" << " |\n";

    cout << "|------|-----------|----------------------|-----------|-----------|-------------|-------------|\n";
    for (int i = 0; i < banyakData; ++i) {
        cout  << "| " << setw(lebarNomor) << left << i + 1 
             << " | " << setw(lebarNIM) << daftarMahasiswa[i].nim 
             << " | " << setw(lebarNama) << left << daftarMahasiswa[i].nama 
             << " | " << setw(9) << fixed << setprecision(0) << daftarMahasiswa[i].nilaiUTS 
             << " | " << setw(9) << fixed << setprecision(0) << daftarMahasiswa[i].nilaiUAS
             << " | " << setw(11) << fixed << setprecision(1) << daftarMahasiswa[i].nilaiAkhir
             << " | " << setw(11) << daftarMahasiswa[i].nilaiHuruf << " |\n";
    }

    return 0;
}
