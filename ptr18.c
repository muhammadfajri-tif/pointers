#include <stdio.h>

/* Definisi tabel integer */
typedef struct {
  int tab[10]; /* array integernya */
  int N;       /* Ukuran efektif */
} tabint;

/* Prototype */
void incTab(tabint *T);  /* Increment setiap elemen tabel */
void printTab(tabint T); /* Print tabel */

int main() {
  /* kamus */
  tabint T;
  int i;

  // debug
  printf("[MAIN] address T: %p\n", &T);
  printf("Size T: %lu byte\n", sizeof(T));
  // NOTE: size subvar tab 40byte karena 10 elemen * 4 byte
  printf("Size T.tab: %lu byte\n", sizeof(T.tab));
  printf("Size T.N: %lu byte\n\n", sizeof(T.N));

  /* program */
  T.N = 3;
  printf("Isi dan print tabel untuk indeks 1..5 \n");

  /* isi dari pembacaan */
  for (i = 0; i < T.N; i++) {
    printf("Input tabel ke -[%d] = ", i);
    scanf("%d", &(T.tab[i]));
  };

  /* Print : perhatikan passing parameter by value */
  printTab(T);

  printf("\n");
  /* Increment : perhatikan passing parameter by reference
   *
   * NOTE: Memanipulasi nilai dari subvar suatu record menggunakan procedure
   * dengan passing parameter by reference/address
   * */
  incTab(&T);
  printTab(T);
  return 0;
}

/* Body prototype */

/* Increment setiap elemen tabel
 *
 * mengambil nilai yang ditunjuk oleh address T,
 * kemudian memanipulasi nilainya (nilai awal + 1)
 * */
void incTab(tabint *T) {
  /* Kamus lokal */
  int i;

  // debug
  // NOTE: Address nya akan sama dengan address dari variabel T, karena
  // parameternya passing by reference/address
  printf("[incTab] address T: %p\n", T);

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
