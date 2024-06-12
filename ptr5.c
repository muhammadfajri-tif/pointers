/* ---------------------------------------------------------------------------------------------
 */
/* File Program : PTR5.CPP */
/* Deskripsi : pointer ke type dasar, mendeklarasikan & alokasi variabel dinamik
 */
/* ---------------------------------------------------------------------------------------------
 */
#include <stdio.h>
#include <stdlib.h>
int main() {
  /* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
  int i = 5, j;
  char c = 'X';

  // alokasi dinamis pada memori
  // alokasi memori sebanyak 4 byte yang bertipe int
  int *Ptri = (int *)malloc(4);
  // alokasi memori sebanyak ukuran tipe data int
  int *Ptrj = (int *)malloc(sizeof(int));
  // alokasi memori sebanyak ukuran tipe data float
  float *fx = (float *)malloc(sizeof(float));

  // ukuran int: 4 byte; Jika terdapat array of int sebanyak 5 elemen, maka
  // ukurannya 4x5 = 20 byte;
  int A[5];
  float f = 7.23;

  /* program */
  *Ptri = 8;
  *Ptrj = 0;
  *fx = 3;

  // char *cp;
  // printf("Ukuran char = %d byte\n\n", sizeof(cp));

  // *(Ptri + 1) = 3;
  // printf("Alamat ptri+1 = %x \n", (Ptri + 1));
  // printf("Nilai ptri+1 = %d \n", *(Ptri + 1));

  printf("Alamat i = %x \n", &i);
  printf("Nilai i = %d \n", i);
  printf("Ukuran int = %d byte\n\n", sizeof(int));

  printf("Alamat j = %x \n", &j);
  printf("Nilai j = %d \n", j);

  printf("Alamat c = %x \n", &c);
  printf("Nilai c = %c \n", c);

  printf("Ukuran char = %d byte\n\n", sizeof(char));

  printf("Alamat Ptri = %x \n", &Ptri);
  printf("Isi var Ptri = %x \n", Ptri);
  printf("Nilai yang ditunjuk oleh Ptri = %d \n", *Ptri);

  printf("Ukuran pointer int = %d byte\n\n", sizeof(int *));
  printf("Alamat Ptrj = %x \n", &Ptrj);
  printf("Isi var Ptrj = %x \n", Ptrj);
  printf("Nilai yang ditunjuk oleh Ptrj = %d \n", *Ptrj);

  Ptrj = Ptri;
  printf("Isi var Ptrj sekarang = %x \n", Ptrj);
  printf("Nilai yang ditunjuk oleh Ptrj sekarang = %d \n", *Ptrj);

  printf("Alamat A = %x \n", &A);
  printf("Isi var A = %x \n", A[0]);
  printf("Ukuran array A = %d byte\n\n", sizeof(A));

  printf("Alamat f = %x \n", &f);
  printf("Nilai f = %f \n", f);
  printf("Ukuran float = %d byte\n\n", sizeof(float));
  return 0;
}
