/* -------------------------------------------------- */
/* File Program : PTR9.CPP */
/* Deskripsi : pointer yang menunjuk pointer */
/* -------------------------------------------------- */
#include <stdio.h>
int main() {
  /* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
  int var_x = 273;
  int *ptr1; /* ptr1 adl pointer yang menunjuk ke objek bertipe integer */
  /* (Boleh disebut pointer integer saja) */
  int **ptr2; /* ptr2 adl pointer yang menunjuk ke pointer yang menunjuk */
  /* ke objek bertipe integer (Boleh disebut : pointer menunjuk ke pointer
  integer saja) */

  // inisialisasi variable pointer ptr1 dengan address variabel var_x
  // artinya, variabel ini mengarah pada variabel non-pointer
  ptr1 = &var_x;

  // inisialisasi variabel pointer ptr2 dengan address variabel pointer ptr1
  // artinya, variabel ini merupakan variabel pointer yang mengarah ke pointer
  // lain
  ptr2 = &ptr1;

  // akses alamat dari ptr1
  printf("Nilai ptr1 = %p\n", ptr1);
  // akses nilai yang ditunjuk alamat ptr1
  printf("Nilai *ptr1 = %d\n\n", *ptr1);

  // akses alamat dari ptr2
  printf("Nilai ptr2 = %p\n", ptr2);
  // akses nilai yang ditunjuk alamat ptr2
  printf("Nilai *ptr2 = %p\n", *ptr2);
  // akses nilai yang ditunjuk alamat ptr2,
  // kemudian menunjuk nilai dari alamat tersebut
  printf("Nilai **ptr2 = %d\n\n", **ptr2);

  /* Mengakses nilai var_x melalui ptr1 dan ptr2 */
  printf("Nilai var_x = %d\n", *ptr1);
  printf("Nilai var_x = %d\n", **ptr2);

  return 0;
}
/* STUDI KASUS : */
/* Eksekusi dan pahami maksud program ini dan */
/* komentari setiap baris programnya (mulai dari baris ptr1= &var_x; ) */
