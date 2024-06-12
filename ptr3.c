/* --------------------------------------------------------- */
/* File Program : PTR3.CPP */
/* Contoh pengubahan isi suatu variabel melalui pointer */
/* Tujuan : Menggunakan type data pointer dan manipulasinya */
/* --------------------------------------------------------- */
#include <stdio.h>
int main() {
  float d,
      *pd; // d: variable bertipe float, *pd: variabel pointer bertipe float

  d = 54.5; // inisialisasi variabel
  printf("Isi d semula = %g\n", d);

  pd = &d;        // inisialisasi variable pointer dengan alamat dari variabel d
  *pd = *pd + 10; // mengakses nilai yang ditunjuk oleh pointer pd, kemudian
                  // jumlahkan nilai sebelumnya dengan 10

  // nilai d akan otomatis berubah karena operasi sebelumnya
  printf("Isi d kini = %g\n", d);
  return 0;
  /* STUDI KASUS : */
  /* - Eksekusi file program tersebut dan pahami maksud program ini */
  /* - Komentari setiap baris program (maksud tiap pernyataan di tiap baris
   * program ) */
  /* - Tulis hasil pemahaman Anda pada kertas yang disediakan */
}
