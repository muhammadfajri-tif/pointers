/* --------------------------------------------------------------------------------
 */
/* File Program : PTR8a.CPP */
/* (Pointer dan String bagian ke-2) */
/* Deskripsi : menukar isi dua buah string TANPA pemakaian pointer */
/* -------------------------------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>
#define PANJANG 20

int main() {
  /* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
  char nama1[PANJANG] = "DEWI SARTIKA";
  char nama2[PANJANG] = "SULTAN HASANUDDIN";
  char namaX[PANJANG];

  puts("Nama semula : ");
  printf("Nama 1 --> %s\n", nama1);
  printf("Nama 2 --> %s\n", nama2);

  // address awal
  printf("awal address nama1 %p\n", nama1);
  printf("awal address nama2 %p\n", nama2);
  printf("awal address namaX %p\n\n", namaX);

  /* Pertukaran string */
  strcpy(namaX, nama1);
  strcpy(nama1, nama2);
  strcpy(nama2, namaX);

  puts("Nama sekarang : ");
  printf("Nama 1 --> %s\n", nama1);
  printf("Nama 2 --> %s\n", nama2);

  // perturakan arr of chars dengan nilai aktualnya langsung
  // address tidak berubah
  printf("address nama1 %p\n", nama1);
  printf("address nama2 %p\n", nama2);
  printf("address namaX %p\n", namaX);
  return 0;
}
