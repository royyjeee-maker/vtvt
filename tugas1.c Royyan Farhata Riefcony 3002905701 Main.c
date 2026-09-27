#include <stdio.h>

int main() {
    // Deklarasi variabel untuk menyimpan 3 bilangan bulat
    int bilangan1, bilangan2, bilangan3;

    // Variabel untuk menyimpan hasil perhitungan
    int penjumlahan;
    int pengurangan;
    int perkalian;
    float pembagian;
    float rata_rata;

    // Meminta pengguna memasukkan tiga bilangan
    printf("Masukkan tiga bilangan bulat: ");
    scanf("%d %d %d", &bilangan1, &bilangan2, &bilangan3);

    // Menghitung penjumlahan
    penjumlahan = bilangan1 + bilangan2 + bilangan3;

    // Menghitung pengurangan
    pengurangan = bilangan1 - bilangan2 - bilangan3;

    // Menghitung perkalian
    perkalian = bilangan1 * bilangan2 * bilangan3;

    // Menghitung pembagian dengan validasi pembagian nol
    if (bilangan2 != 0 && bilangan3 != 0) {
        pembagian = (float)bilangan1 / bilangan2 / bilangan3;
        printf("Penjumlahan = %d\n", penjumlahan);
        printf("Pengurangan = %d\n", pengurangan);
        printf("Perkalian = %d\n", perkalian);
        printf("Pembagian = %.4f\n", pembagian);
    } else {
        printf("Penjumlahan = %d\n", penjumlahan);
        printf("Pengurangan = %d\n", pengurangan);
        printf("Perkalian = %d\n", perkalian);
        printf("Pembagian = Tidak dapat dilakukan karena pembagi bernilai 0\n");
    }

    // Menghitung rata-rata tiga bilangan
    rata_rata = (float)penjumlahan / 3;

    // Menampilkan rata-rata dengan dua angka di belakang koma
    printf("Rata-rata = %.2f\n", rata_rata);

    return 0;
}