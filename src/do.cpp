//
// Created by HP on 04/10/2024.
//
#include <iostream>
using namespace std;

void doWhileLoop() {
    int jumlahMahasiswa;
    float nilai, totalNilai = 0, rataRata;
    int i = 1;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    do {
        cout << "Masukkan nilai mahasiswa ke-" << i << ": ";
        cin >> nilai;
        totalNilai += nilai;
        i++;
    } while (i <= jumlahMahasiswa);

    rataRata = totalNilai / jumlahMahasiswa;
    cout << "Total nilai: " << totalNilai << endl;
    cout << "Rata-rata nilai: " << rataRata << endl;
}
