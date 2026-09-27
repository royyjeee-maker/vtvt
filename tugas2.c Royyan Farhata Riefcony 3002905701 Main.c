#include <stdio.h>

int main() {
    // Array untuk menyimpan 5 nilai ujian
    int nilai[5];

    // Pointer untuk mengakses array
    int *ptr;

    // Variabel untuk perhitungan
    int i;
    int tertinggi, terendah;
    int total = 0;
    float rata_rata;

    // Pointer menunjuk ke alamat awal array
    ptr = nilai;

    // Memasukkan 5 nilai menggunakan for loop
    printf("=====================================\n");
    printf("       PROGRAM ANALISIS NILAI        \n");
    printf("=====================================\n");

    for (i = 0; i < 5; i++) {
        printf("Masukkan nilai ujian ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    // Nilai pertama digunakan sebagai nilai awal
    // untuk nilai tertinggi dan terendah
    tertinggi = nilai[0];
    terendah = nilai[0];

    // Menghitung total, nilai tertinggi, dan terendah
    for (i = 0; i < 5; i++) {

        // Menghitung jumlah seluruh nilai
        total = total + nilai[i];

        // Mengecek nilai tertinggi
        if (nilai[i] > tertinggi) {
            tertinggi = nilai[i];
        }

        // Mengecek nilai terendah
        if (nilai[i] < terendah) {
            terendah = nilai[i];
        }
    }

    // Menghitung rata-rata
    rata_rata = (float) total / 5;

    // Menampilkan nilai menggunakan pointer
    printf("\n=====================================\n");
    printf("           DATA NILAI UJIAN          \n");
    printf("=====================================\n");

    for (i = 0; i < 5; i++) {
        // *(ptr + i) digunakan untuk mengakses elemen array
        printf("Nilai ke-%d: %d\n", i + 1, *(ptr + i));
    }

    // Menampilkan hasil analisis
    printf("\n=====================================\n");
    printf("          HASIL ANALISIS NILAI       \n");
    printf("=====================================\n");

    printf("Nilai tertinggi : %d\n", tertinggi);
    printf("Nilai terendah  : %d\n", terendah);
    printf("Rata-rata       : %.2f\n", rata_rata);

    return 0;
}