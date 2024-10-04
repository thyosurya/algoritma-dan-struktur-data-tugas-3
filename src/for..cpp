//
// Created by HP on 04/10/2024.
//
#include <iostream>
using namespace std;

void forLoop() {
    int jumlahMahasiswa;
    float nilai, totalNilai = 0, rataRata;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    for (int i = 1; i <= jumlahMahasiswa; i++) {
        cout << "Masukkan nilai mahasiswa ke-" << i << ": ";
        cin >> nilai;
        totalNilai += nilai;
    }

    rataRata = totalNilai / jumlahMahasiswa;
    cout << "Total nilai: " << totalNilai << endl;
    cout << "Rata-rata nilai: " << rataRata << endl;
}
