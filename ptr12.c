/* ------------------------------------------------------------------------------------------------------------------
 */
/* File : PTR12.cpp */
/* Deskripsi : Pointer ke function (Procedure dengan parameter input/output
 * sebagai parameter) */
/* Melakukan offset terhadap tabel tergantung fungsi f */
/* ------------------------------------------------------------------------------------------------------------------
 */

#include <stdio.h>

/* Kamus Global */
int N; /* ukuran efektif */

/* Prototype, fungsi yang diberikan sebagai parameter aktual */
void succ(int *i); /* suksessor, berupa procedure by ref */
void pred(int *i); /* predesessor */
/* Prosedur dengan parameter sebuah fungsi */
void geser(int *TT, void (*f)(int *));

/* Program Utama */
int main() {
  /* kamus lokal */
  int MyTab[10];
  int i;

  /* program */
  N = 10;
  // inisialisasi nilai ke setiap elemen
  for (i = 0; i < N; i++) {
    MyTab[i] = i;
  }

  printf("Isi tabel dalam main sebelum pemanggilan : \n");
  for (i = 0; i < N; i++) {
    printf(" %d ", MyTab[i]);
  }

  printf("\n");

  /* Pakai geser dengan parameter succ */
  printf("Geser dengan succ \n");
  geser(MyTab, succ);

  printf(" dalam main \n");
  for (i = 0; i < N; i++) {
    printf(" %d ", MyTab[i]);
  }

  printf("\n");

  /* Pakai geser dengan parameter pred */
  printf("Geser dengan pred \n");
  geser(MyTab, pred);

  printf(" dalam main setelah aplikasi pred \n");
  for (i = 0; i < N; i++) {
    printf(" %d ", MyTab[i]);
  }

  printf("\n");
  return 0;
}

/* Body Function */
/*
 * Procedure yang menerima parameter pointer bertipe int.
 *
 * Melakukan manipulasi/operasi nilai suatu variabel melalui addressnya.
 * Nilai yang masuk ke parameter adalah address/alamat.
 */
void succ(int *i) { *i = *i + 1; }
void pred(int *i) {
  printf("[pred] nilai param *i %d \n", *i);
  printf("[pred] address param i %p \n", i);
  *i = *i - 1;
}

/**
 * Procedure dgn param sbb:
 * - TT: variabel pointer bertipe int
 * - f(int *): function pointer yang menerima parameter bertipe pointer int
 */
void geser(int *TT, void (*f)(int *)) {
  int i;
  printf(" dalam geser \n");

  // printf(" nilai param *TT %d \n", *TT);
  // printf(" address param *TT %p \n\n", TT);
  // printf(" address param *f %p \n\n", f);

  for (i = 0; i < N; i++) {
    // karena pointer procedure menerima parameter bertipe pointer int, maka
    // perlu dilakukan passing parameter by address.
    // NOTE: Address dari nilai *TT[i] dengan parameter procedure pointer f akan
    // sama
    /**
     * Good thing: use less memory, less variable
     * Bad thing: complicated
     */
    printf("\n[geser] nilai param *TT %d \n", TT[i]);
    printf("[geser] address param *TT %p \n\n", &TT[i]);
    f(&TT[i]);
    printf(" %d ", TT[i]);
  }

  printf("\n");
}
