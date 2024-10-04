

---

# Program Perulangan C++ 

Nama: **Moh. Radithyo Surya Martuah**  
NIM: **531424113**  
Mata Kuliah: **Algoritma dan Struktur Data**  
Dosen Pengampu: **Alfian Zakaria, ST., M.T., MCE**

## Deskripsi Proyek

Proyek ini adalah implementasi dari berbagai jenis perulangan di dalam bahasa pemrograman C++. Program ini memungkinkan pengguna untuk memasukkan nilai ujian mahasiswa secara berulang menggunakan tiga jenis perulangan yang berbeda: **for loop**, **do-while loop**, dan **while loop**. Setelah nilai-nilai dimasukkan, program akan menghitung total nilai dan rata-rata nilai mahasiswa.

## Struktur Proyek

```
/perulangan_project
    /src
        main.cpp       # Fungsi utama program
        for.cpp        # Implementasi perulangan for
        do.cpp         # Implementasi perulangan do-while
        while.cpp      # Implementasi perulangan while
    /include
        perulangan.h   # Deklarasi fungsi dari perulangan
    CMakeLists.txt     # Konfigurasi build dengan CMake
```

## Fitur Program

- Memasukkan nilai ujian mahasiswa secara berulang.
- Menggunakan tiga jenis perulangan:
  - **For loop**
  - **Do-while loop**
  - **While loop**
- Menghitung total dan rata-rata nilai ujian mahasiswa.

## Cara Menjalankan Program

1. Clone atau download repository ini ke dalam komputer Anda.
2. Buka terminal atau command prompt dan navigasi ke direktori proyek.
3. Buat build folder dan jalankan CMake:
    ```bash
    cmake -S . -B build
    ```
4. Lakukan build proyek:
    ```bash
    cmake --build build
    ```
5. Jalankan file executable yang dihasilkan:
    ```bash
    ./build/perulangan_project  # Pada Windows, jalankan perulangan_project.exe
    ```

## Cara Menggunakan Program

Setelah menjalankan program, Anda akan diminta untuk memilih jenis perulangan yang ingin digunakan. Masukkan angka 1, 2, atau 3 sesuai dengan perulangan yang diinginkan:

1. **For Loop**: Untuk memasukkan nilai menggunakan perulangan `for`.
2. **Do-While Loop**: Untuk memasukkan nilai menggunakan perulangan `do-while`.
3. **While Loop**: Untuk memasukkan nilai menggunakan perulangan `while`.

Setelah memilih, Anda akan diminta untuk memasukkan jumlah mahasiswa dan nilai ujian mereka. Program kemudian akan menghitung total nilai dan rata-rata.

---
