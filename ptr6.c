/* ----------------------------------------------------- */
/* File Program : PTR6.CPP */
/* Deskripsi : pointer yang menunjuk ke array */
/* ---------------------------------------------------- */

#include <stdio.h>
int main() {
  /* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
  static int tgl_lahir[] = {18, 6, 1989};

  int *ptgl;        // deklarasi variabel pointer
  ptgl = tgl_lahir; // pointer mengarah ke address array elemen 1

  printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
  printf("Nilai dari tgl_lahir[0] = %d\n", tgl_lahir[0]);

  // alamat ketiganya sama
  printf("Nilai yang ditunjuk oleh ptgl = %p\n", ptgl);
  printf("Nilai dari tgl_lahir[0] = %p\n", &tgl_lahir);
  printf("Nilai dari tgl_lahir[0] = %p\n", &tgl_lahir[0]);

  // mencari ukuran dari sebuah array
  // menghitung ukuran array dan membaginya dengan setiap blok array
  int size_arr = (sizeof(tgl_lahir) / sizeof(tgl_lahir[0]));
  printf("\nSize arr: %d\n", size_arr);

  // menampilkan semua data pada array
  for (int i = 0; i < size_arr; i++) {
    printf("nilai tgl_lahir[%d] = %d\n", i, tgl_lahir[i]);
  }
  return 0;
}
/* STUDI KASUS : */
/* Eksekusi dan pahami maksud program ini (tulis tujuan program ini) */
/* Modifikasi program tersebut agar bisa menampilkan seluruh elemen array
 * tgl_lahir !*/
