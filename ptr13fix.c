/* ------------------------------------------------------------------------------------------------------------------
 */
/* File : PTR13.cpp */
/* Deskripsi : Pointer ke function (Procedure dengan parameter input/output
 * sebagai parameter) */
/* Melakukan offset terhadap tabel tergantung fungsi f */
/* ------------------------------------------------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>

/* Kamus Global */
int N; /* ukuran efektif */
enum MyType { bulat, karakter };

/* Prototype, fungsi yang diberikan sebagai parameter aktual */
void succI(int *i);  /* suksessor, berupa procedure by ref */
void predI(int *i);  /* predesessor */
void succC(char *c); /* suksessor, berupa procedure by ref */
void predC(char *c); /* predesessor */

/* Prosedur dengan parameter sebuah fungsi */
void geser(int *TT, void (*f)(void *));
/* print tabel yang belum ketahuan typenya */
void printtab(void *T, enum MyType Ty);

/* Program Utama */
int main() {
  /* kamus lokal */
  // void *MyTabInt;
  int *MyTabInt; // fix next byte element
  void *MyTabC;
  int i;

  /* program */
  N = 10;
  MyTabInt = (int *)malloc(N * sizeof(int));
  MyTabC = (char *)malloc(N * sizeof(char));
  // *MyTabInt = 1; // BAD SYNTAX: pointer void tidak bisa di assign nilai
  // *MyTabInt = 1; // type casting: force pointer agar bertipe int

  for (i = 0; i < N; i++) {
    // *(MyTabInt + i) = i; // BAD SYNTAX
    // *(MyTabC + i) = 'Z'; // BAD SYNTAX
    *(MyTabInt + i) = i;
    *(char *)(MyTabC + i) = 'Z';
  }

  // // meskipun telah dilakukan type casting, tetapi ukuran pointer tetap
  // // mengikuti ukuran void pointer: 1 byte sehingga nilai nya akan tidak
  // // sesuai dgn yang diinginkan.
  // // ref: https://stackoverflow.com/questions/3922958/void-arithmetic
  for (i = 0; i < N; i++) {
    printf(" %d\t", *(int *)(MyTabInt + i));
    printf(" %p\n", (int *)(MyTabInt + i));
  }

  printf("## Isi tabel dalam main sebelum pemanggilan : \n");
  printf(" Tabel integer \n");
  printtab((int *)MyTabInt, 0);
  printf("\n Tabel karakter \n");
  printtab((char *)MyTabC, 1);
  printf("\n\n");

  /* Pakai geser dengan parameter succ */
  printf("## Geser dengan succ \n");
  // // BAD SYNTAX: parameter pointer secara default bertipe void,
  // // sedangkan procedure succI menggunakan parameter pointer bertipe int
  // geser((int *)MyTabInt, (int *)succI);

  // type casting parameter dari procedure pointer menjadi tipe data int
  geser(MyTabInt, ((void *)(int *)succI));

  // geser((char *)MyTabC, (char *)succC); // BAX SYNTAX
  printf(" [char]");
  geser(MyTabC, ((void *)(char *)succC));

  printf(" ### dalam main \n");
  printf(" Tabel integer \n");
  printtab(MyTabInt, 0);

  printf("\n Tabel karakter \n");
  printtab((char *)MyTabC, 1);
  printf("\n\n");

  /* Pakai geser dengan parameter pred */
  printf("## Geser dengan pred \n");
  // geser((int *)MyTabInt, (int *)predI);
  geser(MyTabInt, ((void *)(int *)predI));

  // geser((char *)MyTabC, (char *)predC);
  printf(" [char]");
  geser(MyTabC, ((void *)(char *)predC));

  printf(" ### dalam main \n");
  printf(" Tabel integer \n");
  printtab(MyTabInt, 0);

  printf("\n Tabel karakter \n");
  printtab((char *)MyTabC, 1);
  printf("\n\n");

  return 0;
}

/* Body Function */
void succI(int *i) { *i = *i + 1; }
void predI(int *i) { *i = *i - 1; }
void succC(char *c) { *c = *c + 1; }
void predC(char *c) { *c = *c - 1; }

void geser(int *TT, void (*f)(void *)) {
  int i;
  printf(" dalam geser \n");
  for (i = 0; i < N; i++) {
    f(&TT[i]);
    printf(" %d ", TT[i]);
  }
  printf("\n");
}

/**
 *
 */
void printtab(void *T, enum MyType Ty) {
  for (int i = 0; i < N; i++) {
    switch (Ty) {
    case bulat:
      // printf("%d ", (int *)*(T + i)); // BAD SYNTAX
      printf("%d ", (*(int *)(T + i)));
      break;
    case karakter:
      // printf("%c ", (char *)*(T + i)); // BAD SYNTAX
      printf("%c ", *(char *)(T + i));
      break;
    }
  }
}
