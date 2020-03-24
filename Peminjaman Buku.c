#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(int pil);
    int pil;
    int main (void){
menu(pil);
    system ("pause");
    return (0);
}
void menu(int pil){
    struct data_nilai {
    char Nomor[8], Nama[15];
};

    int a,b;
    struct data_nilai buku[25];
    printf ("\n\n\t\t\tDATA PEMINJAMAN BUKU\n");
    printf ("\t\t\t--------------------");
    printf ("\n\nMasukan Jumlah Buku : ");
    scanf ("%d",&a);
if (a<=10){
    for (b=0;b<a;b++){
    printf("\nData Peminjaman Buku ke %d\n\n", b+1);
    printf ("Masukan Nomor Buku : ");
    scanf ("\n%s", &buku[b].Nomor);
    printf ("Masukan Judul Buku: ");
    scanf ("%s", &buku[b].Nama);
    system ("CLS");
    printf ("\n\n\t\t\tDATA PEMINJAMAN BUKU\n");
    printf ("\t\t\t--------------------\n");
}
    system ("CLS");
    printf ("\n\n\t\t\tDATA PEMINJAMAN BUKU\n");
    printf ("\t\t\t--------------------\n");
    printf ("\n");
    printf ("-------------------------------------------------------");
    printf ("\n Nomor\t\tJudul Buku\n");
    printf ("-------------------------------------------------------");
    for (b=0;b<a;b++){
    printf ("\n %s\t",buku[b].Nomor);
    printf ("\t%s\t",buku[b].Nama);
}
    printf("\n\n\n\n --------------TERIMAKASIH-------------- \n");
}else{
    printf ("\nMaaf, Batas Peminjaman Hanya 10 Buku....!!!");
}
    printf ("\n\n");
}