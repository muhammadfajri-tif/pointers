/* --------------------------------------------------------- */
/* File Program : PTR2.CPP */
/* Contoh pemakaian pointer yang salah */
/* Tujuan : mengetahui panjang dan posisi variabel di memory */
/* --------------------------------------------------------- */
#include <stdio.h>
int main() {
  float *pu;    // deklarasi variable pointer bertipe float
  float nu;     // deklarasi variabel bertipe float
  int u = 1234; // deklarasi+inisialisasi variable bertipe int dgn nilai 1234

  pu = &u; // warn: karena tipe pointer berbeda dengan tipe data valuenya
  // pu = (float *)&u;
  nu = *pu; // inisialisasi variable dengan nilai yang ditunjuk oleh pu

  printf("u = %d\n", u);
  printf("nu = %f\n", nu);
  return 0;
  /* STUDI KASUS : */
  /* - Eksekusi file program tersebut dan pahami maksud program ini */
  /* - Komentari setiap baris program (maksud tiap pernyataan di tiap baris
   * program ) */

  /* - Tulis hasil pemahaman Anda pada kertas yang disediakan */
}
