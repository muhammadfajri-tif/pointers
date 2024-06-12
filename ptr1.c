/* --------------------------------------------------------- */
/* File Program : PTR1.CPP */
/* Contoh pemakaian pointer */
/* Tujuan : mengetahui panjang dan posisi variabel di memory */
/* --------------------------------------------------------- */
#include <stdio.h>
int main() {
  int x, y; // deklarasi variable x,y
  int *px;  // deklarasi variable pointer
  x = 87;   // inisialisasi variable x
  px = &x;  // inisialisasi variable px dengan alamat variable x
  y = *px;  // inisialisasi variable y dengan nilai yg ditunjuk oleh px (x)

  printf("Alamat x = %p\n", &x);
  printf("Isi px = %d\n", x);
  printf("Nilai yang ditunjuk oleh px = %d\n", *px);
  printf("Nilai y = %d\n", y);
  return 0;
  /* STUDI KASUS : */
  /* - Eksekusi file program tersebut dan pahami maksud program ini */
  /* - Komentari setiap baris program (maksud tiap pernyataan di tiap baris
   * program ) */
  /* - Tambahkan pernyataan untuk menampilkan Alamat varabel y, eksekusi, dan
   * perhatikan hasilnya */
  /* - Bila pernyataan px = &x; diganti dengan y = *px; ,apa yang terjadi? */
  /* - Tulis hasil pemahaman Anda pada kertas yang disediakan */
}
