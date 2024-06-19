#include <iostream>
#include <iomanip>
using namespace std;

struct Pegawai {
    string nama;
    int jamKerja;
    int honorLembur;
    int totalHonor;
    int waktuLembur; // tambahkan atribut waktuLembur
};

void hitungHonor(Pegawai &pegawai) {
    if (pegawai.jamKerja > 8) {
        int kelebihanJam = pegawai.jamKerja - 8;
        pegawai.honorLembur = kelebihanJam * 5000;
        pegawai.totalHonor = pegawai.honorLembur + 80000; // Honor harian adalah 80000
        pegawai.waktuLembur = kelebihanJam; // Hitung waktu lembur
    } else {
        pegawai.honorLembur = 0;
        pegawai.totalHonor = 80000; // Honor harian adalah 80000
        pegawai.waktuLembur = 0; // Tidak ada lembur
    }
}

int main() {
    int banyakData;
    cout << "Masukkan jumlah data pegawai: ";
    cin >> banyakData;

    Pegawai daftarPegawai[banyakData];

    // Menentukan lebar kolom
    int lebarNama = 20;
    int lebarJamKerja = 10;
    int lebarWaktuLembur = 13;
    int lebarHonorLembur = 13;
    int lebarTotalHonor = 12;

    for (int i = 0; i < banyakData; ++i) {
        cout << "\nData Pegawai ke-" << i + 1 << ":" << endl;
        cout << "Masukkan Nama: ";
        cin.ignore(); // Membersihkan buffer agar getline tidak terpengaruh
        getline(cin, daftarPegawai[i].nama);
        cout << "Masukkan Jam Kerja: ";
        cin >> daftarPegawai[i].jamKerja;

        // Memotong nama jika lebih panjang dari 20 karakter
        if (daftarPegawai[i].nama.length() > lebarNama) {
            daftarPegawai[i].nama = daftarPegawai[i].nama.substr(0, lebarNama);
        }
        hitungHonor(daftarPegawai[i]);
    }

    // Tampilan Tabel
    cout << "\nTabel Honor Pegawai Honorer:\n";
    cout << "| No   |   Nama Pegawai       | Jam Kerja  | Waktu Lembur  | Honor Lembur  | Total Honor  |\n";
    cout << "|------|----------------------|------------|---------------|---------------|--------------|\n";
    for (int i = 0; i < banyakData; ++i) {
        cout << "| " << left << setw(4) << i + 1 << " | " << left << setw(lebarNama) << daftarPegawai[i].nama << " | "
             << setw(lebarJamKerja) << left << daftarPegawai[i].jamKerja << " | "
             << setw(lebarWaktuLembur) << left << daftarPegawai[i].waktuLembur << " | "
             << setw(lebarHonorLembur) << left << daftarPegawai[i].honorLembur << " | "
             << setw(lebarTotalHonor) << left << daftarPegawai[i].totalHonor << " |\n";
    }

    return 0;
}
