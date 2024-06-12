#include <stdio.h>
#include <stdlib.h>

/*Definisi akses komponen type, standard kuliah Algoritma dan pemrograman*/
#define info(P) (P)->info
#define next(P) (P)->next
#define Nil NULL

/* Definisi TYPE global (sebenarnya untuk soal ini tidak perlu global) */
/* Element list linier */
typedef int infotype;
typedef struct tElmtlist *address;
typedef struct tElmtlist {
  infotype info;
  address next;
} ElmtList;

/* tampilkan list */
void printElmtList(address list);

/* tambah di awal */
void insertFirst(address list, infotype info);

/* tambah di akhir */
void insertLast(address list, infotype info);

/* tambah di tengah */
void insertAfter(address list, infotype infoNew, infotype find);

/* Program Utama */
int main() {
  /* kamus */
  address First;
  address P, Q;

  /* program */
  /* Create list kosong */
  First = Nil;

  /* Alokasi, insert as first elemen */
  P = (address)malloc(sizeof(ElmtList));
  info(P) = 10;
  next(P) = Nil;
  First = P;

  /* Alokasi, insert as first elemen */
  Q = (address)malloc(sizeof(ElmtList));
  info(Q) = 20;
  next(Q) = Nil;
  next(Q) = First;
  First = Q;

  /* Alokasi, insert as first elemen */
  P = (address)malloc(sizeof(ElmtList));
  info(P) = 30;
  next(P) = Nil;
  next(P) = First;
  First = P;

  printf("%d \n", info(next(next(First))));

  /* tambah di awal; Data 40 */
  P = (address)malloc(sizeof(ElmtList));
  info(P) = 40;
  next(P) = First;
  First = P;

  printf("Tambah awal\n");
  printElmtList(First);

  /* tambah di akhir; Data 50 */
  P = (address)malloc(sizeof(ElmtList));
  info(P) = 50;
  next(P) = Nil;
  next(next(next(next(First)))) = P;

  printf("Tambah akhir\n");
  printElmtList(First);

  /* tambah di tengah; Data 60, setelah 20...10 */
  P = (address)malloc(sizeof(ElmtList));
  info(P) = 60;
  next(P) = next(next(First->next));
  next(next(next(First))) = P;

  printf("Tambah diantara 20...10\n");
  printElmtList(First);

  return 0;
}

/* body module */
void printElmtList(address list) {
  printf("\n[");
  address current = list;
  while (current != Nil) {
    printf(" %d -> ", info(current));
    current = next(current);
  }

  printf("Nil ]\n");
}
