/* -------------------------------------------------------------------------------------------------
 */
/* File Program : PTR8b.CPP */
/* (Pointer dan String bagian ke-2) */
/* Deskripsi : menukar isi dua buah string yang ditunjuk oleh pointer */
/* PERHATIKAN! Bila dibandingkan dengan program PTR8A.cpp, maka dengan */
/* pointer, penyalinan isi array tidak perlu dilakukan. Sehingga bisa menghemat
 * waktu eksekusi. */
/* ----------------------------------------------------------------------------------------------
 */
#include <stdio.h>
int main() {
  /* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
  char *nama1 = "DEWI SARTIKA";
  char *nama2 = "SULTAN HASANUDDIN";
  char *namaX;

  puts("Nama semula : ");
  printf("Nama 1 --> %s\n", nama1);
  printf("Nama 2 --> %s\n", nama2);

  // address awal
  printf("awal address nama1 %p\n", nama1);
  printf("awal address nama2 %p\n", nama2);
  printf("awal address namaX %p\n\n", namaX);

  /* Penukaran string yang ditunjuk oleh pointer nama1 dan nama2 */
  namaX = nama1;
  nama1 = nama2;
  nama2 = namaX;

  puts("Nama sekarang : ");
  printf("Nama 1 --> %s\n", nama1);
  printf("Nama 2 --> %s\n", nama2);

  // address awal
  printf("address nama1 %p\n", nama1);
  printf("address nama2 %p\n", nama2);
  printf("address namaX %p\n\n", namaX);
  return 0;
}
