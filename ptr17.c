#include <stdio.h>
#include <stdlib.h>

int main() {
  /* kamus */ /* Definisi tabel integer */
  typedef struct {
    int *T; /* array integernya */
    int N;  /* Ukuran efektif */
  } tabint;

  tabint MyTab; // membuat record
  int i;

  /* program */
  printf("Tentukan ukuran tabel, maks 10 = ");
  scanf("%d", &(MyTab.N));

  /**
   * alokasi memory untuk subvar T,
   * subvar T adalah pointer of integers.
   *
   * Karena pengalokasian memory subvar *T itu sejumlah ukuran tipe data int
   * dikalikan nilai subvar N. Maka, seolah-olah subvar *T Seperti array of
   * integer
   *
   * NOTE: sub var tipe pointer of int (MyTab.T) memiliki size: 8 byte,
   * NOTE: pointer MyTab.T mengarah ke block memory dgn size (MyTab.N *4)
   */
  MyTab.T = (int *)malloc(MyTab.N * sizeof(int));

  printf("\nsize of MyTab: %lu\n", sizeof(MyTab));
  printf("size of MyTab.T: %lu\n", sizeof(MyTab.T));
  printf("size of MyTab.N: %lu\n", sizeof(MyTab.N));
  printf("Value of MyTab.N: %d\n", MyTab.N);

  /* isi dengan assignment */
  for (i = 0; i < MyTab.N; i++) {
    *(MyTab.T + i) = i;
    printf("i = %d MyTab.T = %d \n", i, *(MyTab.T + i));
  };

  return 0;
}
