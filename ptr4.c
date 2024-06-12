/* --------------------------------------------------------- */
/* File Program : PTR4.CPP */
/* Contoh pemakaian pointer */
/* --------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>
int main() {
  int z, s, *pz, *ps; // deklarasi variabel dan variabel pointer

  // inisialisasi variabel dengan nilai
  z = 20;
  s = 30;

  // inisialisasi variabel pointer dengan address suatu variabel
  pz = &z;
  ps = &s;

  // pengubahan nilai variabel z melalui operasi nilai dari variabel pointer
  *pz = *pz + *ps;
  printf("z = %d, s = %d\n", z, s);
  /* STUDI KASUS : */
  /* - Eksekusi file program tersebut dan pahami maksud program ini */
  /* - Komentari setiap baris program (maksud tiap pernyataan di tiap baris
   * program ) */
  /* - Tulis hasil pemahaman Anda pada kertas yang disediakan */

  // // NOTE: replacing
  // int *p = (int *)malloc(4);
  // p = &z;
  // printf("z = %d, s = %d, p = %d\n", z, s, *p);
  // z = s;
  // s = *p;
  // printf("z = %d, s = %d, p = %d\n", z, s, *p);

  // // NOTE: swapping
  // int *p = (int *)malloc(4);
  // *p = z;
  // printf("z = %d, s = %d, p = %d\n", z, s, *p);
  // z = s;
  // s = *p;
  // printf("z = %d, s = %d, p = %d\n", z, s, *p);

  return 0;
}
