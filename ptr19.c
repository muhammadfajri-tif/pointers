#include <stdio.h>
#include <stdlib.h>

/* Definisi tabel integer */
typedef struct {
  int *tab; /* array integernya */
  int N;    /* Ukuran efektif */
} tabint;

/* Prototype */
void incTab(tabint *T);  /* Increment setiap elemen tabel */
void printTab(tabint T); /* Print tabel */

int main() {
  /* kamus */
  tabint T;
  int i;

  // debug
  printf("Size T: %lu byte\n", sizeof(T));
  printf("Size T.tab: %lu byte\n", sizeof(T.tab));
  printf("Size T.N: %lu byte\n\n", sizeof(T.N));

  /* program */
  /**
   * Sama seperti sebelumnya, tetapi subvar tab bukan array seperti sebelumnya,
   * tetapi pointer of integer yang kemudian dialokasi sebanyak 3 buah, sehingga
   * seolah-olah seperti array yang memiliki 3 elemen
   *
   * Dari segi ukuran, record tabint disini memiliki size yang lebih kecil
   * daripada di prt18 karena subvar tab bertipe pointer
   */
  T.tab = (int *)malloc(3 * sizeof(int));
  T.N = 3;

  printf("Size T: %lu byte\n", sizeof(T));
  printf("Size T.tab: %lu byte\n", sizeof(T.tab));
  printf("Size T.N: %lu byte\n\n", sizeof(T.N));

  printf("Isi dan print tabel untuk indeks 1..3 \n");

  for (i = 0; i < T.N; i++) { /* isi dari pembacaan */
    printf("Input tabel ke -[%d] = ", i);
    scanf("%d", &(T.tab[i]));
  };
  printTab(T); /* Print : perhatikan passing parameter by value */

  incTab(&T); /* Increment : perhatikan passing parameter by reference */
  printTab(T);
  return 0;
}

/* Body prototype */

/* Increment setiap elemen tabel */
void incTab(tabint *T) {
  /* Kamus lokal */
  int i;

  /* Program */
  for (i = 0; i < (*T).N; i++) {
    (*T).tab[i] = (*T).tab[i] + 1;
  }
}

/* Print setiap elemen tabel */
void printTab(tabint T) {
  /* Kamus lokal */
  int i;

  /* Program untuk traversal print */
  for (i = 0; i < T.N; i++) {
    printf("T[%d] = %d \n", i, T.tab[i]);
  }
}
