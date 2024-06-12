#include <stdio.h>
#include <stdlib.h>

int main() {
  /* kamus */
  /* Definisi array yang elemennya string, statik dan sekaligus mengisi */
  static char *s[3] = {"the", "time", "is"};
  /* Definisi array yang elemennya string, dinamik */
  char *(*TabStr); /* Deklarasi array of string */

  printf("size of TabStr: %lu\n", sizeof(TabStr));
  int i;
  /* program */
  for (i = 0; i < 3; i++) { // cetak isi s
    printf("%s\n", s[i]);
  }

  /* Alokasi TabStr sebanyak 3
   *
   * Mendefinisikan array of strings dengan panjang max 3 elemen yang setiap
   * elemennya dapat diisi dengan dinamis berdasarkan user input (max 5 char)
   *
   * Typecasting menjadi double pointer char (char **) karena tipe data asalnya,
   * dan isinya akan menjadi pointer of chars
   * */
  TabStr = (char **)malloc(3 * sizeof(char *));
  for (i = 0; i < 3; i++) {
    /* Alokasi string yang merupakan elemen tabel */
    *(TabStr + i) = (char *)malloc(5 * sizeof(char));
    printf("\nInput Str[%d], maksimum 5 karakter : ", i);
    scanf("%5s", *(TabStr + i)); /* Mengisi nilai string */
    printf("\n Nilai Str[%d] : %5s\n ", i, *(TabStr + i));
  }
  return 0;
}
