#include <stdio.h>
#include <stdlib.h>
int main() {
  /* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
  int *tab; /* deklarasi array, perhatikan belum tampak bedanya dg

  deklarasi pointer biasa */

  int N, i;
  /* program */
  printf("Contoh mengisi array dinamis berukuran 0..N : \n");
  printf("N = ");
  scanf("%d", &N);
  printf("Alokasi setelah mengetahui ukuran array \n");

  // Alokasi dynamic sejumlah N + 1 (karena start dari index 0)
  tab = (int *)malloc((N + 1) * sizeof(int));

  if (tab != NULL) {
    for (i = 0; i <= N; i++) {
      // karena nilai yang ditunjuk belum diisi, maka akan
      // mengembalikan/menampilkan nilai 0
      // (tab + i) bukan increment 1 byte, tetapi 4 byte karena tipe data int
      printf("i=%d tab[i]=%d \n", i, *(tab + i));
    };
    printf("Akhir program \n");
    /* dealloc */
    free(tab); /*dealokasi*/
    return 0;
  } else {
    printf("Alokasi gagal ... \n");
    return 1;
  }
  return 0;
}
