//
// Created by HP on 04/10/2024.
//
#include <iostream>
#include "perulangan.h"

using namespace std;

int main() {
    int pilihan;

    cout << "Pilih jenis perulangan:\n";
    cout << "1. for loop\n";
    cout << "2. do-while loop\n";
    cout << "3. while loop\n";
    cout << "Masukkan pilihan (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            forLoop();
        break;
        case 2:
            doWhileLoop();
        break;
        case 3:
            whileLoop();
        break;
        default:
            cout << "Pilihan tidak valid!\n";
    }

    return 0;
}
