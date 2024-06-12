/* ----------------------------------------------------------- */
/* File Program : PTR7.CPP */
/* (Pointer dan String bagian ke-1) */
/* Deskripsi : pointer yang menunjuk ke data string */
/* ---------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
  /* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
  char *pkota = "BANDUNG";
  puts(pkota); // menampilkan karakter hingga NULL char
  printf("size of pkota %d byte\n", sizeof(pkota));
  printf("address pkota %p\n", &pkota);
  printf("index 1 pkota %c\n", *(pkota + 1));
  printf("address dari value pkota %p\n\n", pkota);

  // mengganti nilai
  pkota = "SURABAYAA";
  puts(pkota);
  printf("size of pkota %d byte\n", sizeof(pkota));
  printf("address pkota %p\n", &pkota);
  printf("address dari value pkota %p\n\n", pkota);

  // deklarasi dan inisialisasi string dengan array of chars
  char kota[] = "BANDUNG";
  puts(kota);
  printf("size of kota %d byte\n", sizeof(kota));
  printf("address kota %p\n", kota);

  // // mengganti nilai dari array of char kota (error)
  // strcpy("SURAB", kota);
  // kota = "SURABAY";

  // valid dengan 1by1
  kota[0] = 'S';
  kota[1] = 'U';
  kota[2] = 'R';
  kota[3] = 'A';
  kota[4] = 'B';
  kota[5] = 'A';
  kota[6] = 'Y';
  kota[7] = 'A';
  // kota[8] = 'A'; // warn: karena melebihi karakter asalnya
  puts(kota);
  printf("size of kota %d byte\n", sizeof(kota));
  printf("address kota %p\n", kota);

  /**
   * Kesimpulan
   * *pkota menggunakan pointer yang mengarah ke suatu string tertentu,
   * ketika nilainya diubah, maka sebenarnya alamat dari pointer tersebut yang
   * berubah
   *
   * Sedangkan kota[] menggunakan array of chars yang jumlah elemennya sebanyak
   * yang pertama kali diinisialisasikan,
   * nilainya tidak dapat langsung diubah,
   * Untuk mengubah nilainya maka harus dilakukan per-elemen,
   * ketika nilainya diubah maka nilai aktualnya yang berubah. Sedangkan alamat
   * memori nya berubah
   */
  return 0;
}
/* STUDI KASUS : */
/* Apa perbedaan deklarasi variabel char *pkota='BANDUNG'; dengan char
 * kota[]='BANDUNG' ?
 */
