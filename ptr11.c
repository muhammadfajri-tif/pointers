/* -----------------------------------------------------------------------------
 */
/* File : PTR11.cpp */
/* Deskripsi : Pointer ke function (Function sebagai parameter) */
/* Melakukan offset terhadap tabel tergantung fungsi f */
/* -----------------------------------------------------------------------------
 */
#include <stdio.h>

/* Kamus Global */
int N; /* ukuran efektif */

/* Prototype, fungsi yang diberikan sebagai parameter aktual */
int succ(int i); /* succ -> singkatan dari suksessor */
int pred(int i); /* pred -> singkatan dari predesessor */

/* Prosedur dengan parameter sebuah fungsi */
void geser(int *TT, int (*f)(int));

/* Program Utama */
int main() {
  /* kamus lokal */
  int MyTab[10];
  int i;

  /* program */
  N = 10;
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
  // function succ seolah-olah dijadikan sbg parameter untuk procedure geser
  geser(MyTab, succ);
  printf(" dalam main \n");

  for (i = 0; i < N; i++) {
    printf(" %d ", MyTab[i]);
  }
  printf("\n");

  /* Pakai geser dengan parameter pred */
  printf("Geser dengan pred \n");
  // function pred seolah-olah dijadikan sbg parameter untuk procedure geser
  geser(MyTab, pred);
  printf(" dalam main setelah aplikasi pred \n");

  for (i = 0; i < N; i++) {
    printf(" %d ", MyTab[i]);
  }
  printf("\n");

  return 0;
}

/* Body Function */
int succ(int i) { return (i + 1); }

int pred(int i) {
  printf("[pred] address param i %p \n\n", &i);
  return (i - 1);
}

/**
 * Procedure dgn param sbb:
 * - TT: variabel pointer bertipe int
 * - f(int): function pointer yang menerima parameter bertipe int
 */
void geser(int *TT, int (*f)(int)) {
  int i;
  printf(" dalam geser \n");
  // NOTE: nilai yang ditunjuk *TT akan berbeda adddressnya dengan nilai yang
  // menjadi parameter function pointer *f
  printf(" nilai param *TT %d \n", *TT);
  printf(" address param *TT %p \n\n", TT);
  // printf(" address param *f %p \n\n", f);
  for (i = 0; i < N; i++) {
    // nilai TT[i] diisi tergantung function yang dijadikan parameter
    TT[i] = f(TT[i]);
    printf(" %d ", TT[i]);
  }
  printf("\n");
}
