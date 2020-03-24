#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int i, n, b, k, k2, h[100], j[100], tsh=0, th[100];//DEKLARASI VARIABEL BILANGAN BULAT
    char a[100][30], p[5];//DDELARASI VARIABEL STRING
    printf("===PRAKTIKUM PEMROGRAMAN KOMPUTER MODUL IV===\n");
    printf("\t\t===NOMOR 1===\n");
    awal://LABEL"awal"
    printf("\nMasukkan banyak barang: ");
    scanf("%i",&n);//MENGGUNAKAN VARIABEL "n" UNTUK MENERIMA INPUT INTEGER
    for(i=1; i<=n; i++)
    {
        printf(" Masukkan nama barang ke-%i\t: ",i);
        scanf("%s", &a[i]);//MENGGUNAKAN VARIABEL "a[i]" UNTUK MENERIMA INPUT STRING SEBANYAK "n" KALI
        printf(" Masukkan harga per barang\t: Rp. ");
        scanf("%i",&h[i]);//MENGGUNAKAN VARIABEL "h[i]" UNTUK MENERIMA INPUT INTEGER SEBANYAK "n" KALI
        printf(" Masukkan jumlah barang\t\t: ");
        scanf("%i", &j[i]);//MENGGUNAKAN VARIABEL "J[i]" UNTUK MENERIMA INPUT INTEGER SEBANYAK "n" KALI
        printf("\n");
    }

    for(i=1; i<=n; i++)
    {
        th[i]=j[i]*h[i];//MENCARI TOTAL HARGA MASING-MASING BARANG
        tsh=tsh+th[i];//MENCARI TOTAL HARGA KESELURUHAN
    }
    printf("Total harga keseluruhan\t\t: Rp. %i\n", tsh);
    printf("Masukkan jumlah pembayaran\t: Rp. ");
    scanf("%i", &b);//MENGGUNAKAN VARIABEL "b" UNTUK MENERIMA INPUT INTEGER
    k=b-tsh;//MENGHITUNG KEMBALIAN PEMBAYARAN
    system("cls");//MEMBERSIHKAN LAYAR
    printf("=========================================================================\n");
    printf("Daftar belanja anda:\n");
    for(i=1; i<=n; i++)
    {
       printf(" %i. %i buah %s (@ Rp. %i)\t: Rp. %i\n", i, j[i], a[i], h[i], th[i]);//MENAMPILKAN DAFTAR BELANJA
    }
    if(b>=tsh)//PEMILIHAN KODISI
    {
        printf("\nTotal harga\t: Rp. %i\n", tsh);
        printf("Pembayaran\t: Rp. %i\n", b);
        printf("Kembalian\t: Rp. %i\n", k);
    }
    else
    {
        k2=-1*k;//MENCARI KEKURANGAN PEMBAYaRAN
        printf("\nMAAF UANG ANDA TIDAK CUKUP UNTUK MELAKUKAN PEMBAYARAN...\n");
        printf("Total harga\t: Rp. %i\n", tsh);
        printf("Pembayaran\t: Rp. %i\n", b);
        printf("Kekurangan\t: Rp. %i\n", k2);
    }
    printf("=========================================================================\n");
    pilih://LABEL "pilih"
    printf("\nUlangi (y/t): ");
    scanf("%s", &p);//MENGGUNAKAN VARIABEL "P" UNTUK MENERIMA INPUT STRING
    system("cls");//MEMBERSIHKAN LAYAR
    if(strcmp(p,"y")==0||strcmp(p,"Y")==0)//SELEKSI KODISI
    {
        goto awal;//MENUJU LABEL "awal"
    }
    else if(strcmp(p,"t")==0||strcmp(p,"T")==0)
    {
        printf("\nAnda akan keluar dari program ini...\n");
    }
    else
    {
        printf("Masukkan pilihan yang benar...\n");
        goto pilih;//MENUJU KE LABEL "pilih"
    }
 return 0;
}