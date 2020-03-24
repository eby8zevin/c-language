#include <stdlib.h>
#include <stdio.h>

void info();
void proses();

char tombol;
char *pilihmenu[]={" 1. Paket 1\n"," 2. Paket 2\n"," 3. Paket 3\n"};
int i=0;
char tombol;

main()
{
    info();
    proses();
}

void info(){
    printf(" \n Program Menu Paket Makanan \n\n");
}

void proses()
{
    int menu, nasi=3000, ayam_bakar=7000, tahu=1000, tempe=1000, lalap=2000,
    air_mineral=3000, sayur_asem=2000, gepuk=5000, air_hangat=1000,jumlah_pesanan,total,pajak,total_akhir;

    int pilihan;

do
{
    printf("\n =========Selamat datang di Raka's Resto========== ");
    printf("\n Menu Pilihan Menu \n");
        for (i=0;i<=2;i++){
            printf("%s",pilihmenu[i]);
    }
    printf(" Silakan pilih paket menu yang ada : ");
    scanf("%d",&pilihan);

    printf(" Banyaknya pesanan :");
    scanf("%d",&jumlah_pesanan);
    printf("\n");

    switch (pilihan){
           case 1 : {
                printf(" Paket 1 \n");
                printf(" Nasi :%d",nasi);
                printf("\n Ayam Bakar :%d",ayam_bakar);
                printf("\n Tahu  :%d",tahu);
                printf("\n Tempe :%d",tempe);
                printf("\n Lalapan :%d",lalap);
                printf("\n Air Mineral :%d",air_mineral);
                printf("\n Jumlah pesanan :%d paket",jumlah_pesanan);
                total=(nasi+ayam_bakar+tahu+tempe+lalap+air_mineral)*jumlah_pesanan;
                pajak=(total)*10/100;
                total_akhir=total+pajak;
                printf("\n");
                printf("\n Total, paket 1 * %d :%d",jumlah_pesanan,total);
                printf("\n Pajak 10 persen : %d",pajak);
                printf("\n Jadi, total yang harus anda bayar :%d",total_akhir);
                printf("\n");
           break;}
            case 2 : {
                printf(" Paket 2 \n");
                printf(" Nasi :%d",nasi);
                printf("\n Ayam Bakar :%d",ayam_bakar);
                printf("\n Sayur Asem :%d",sayur_asem);
                printf("\n Tahu :%d",tahu);
                printf("\n Tempe :%d",tempe);
                printf("\n Lalapan :%d",lalap);
                printf("\n Air Mineral :%d",air_mineral);
                printf("\n Jumlah pesanan :%d paket",jumlah_pesanan);
                total=(nasi+ayam_bakar+sayur_asem+tahu+tempe+lalap+air_mineral)*jumlah_pesanan;
                pajak=(total)*10/100;
                total_akhir=total+pajak;
                printf("\n");
                printf("\n Total, paket 2 * %d :%d",jumlah_pesanan,total);
                printf("\n Pajak 10 persen : %d",pajak);
                printf("\n Jadi, total yang harus anda bayar :%d",total_akhir);
                printf("\n");
           break; }
            case 3 : {
                printf(" Paket 1 \n");
                printf(" Nasi :%d",nasi);
                printf("\n Gepuk :%d",gepuk);
                printf("\n Tahu :%d",tahu);
                printf("\n Tempe :%d",tempe);
                printf("\n Lalapan :%d",lalap);
                printf("\n Air Hangat :%d",air_hangat);
                printf("\n Jumlah pesanan :%d paket",jumlah_pesanan);
                total=(nasi+gepuk+tahu+tempe+lalap+air_hangat)*jumlah_pesanan;
                pajak=(total)*10/100;
                total_akhir=total+pajak;
                printf("\n");
                printf("\n Total, paket 2 * %d :%d",jumlah_pesanan,total);
                printf("\n Pajak 10 persen : %d",pajak);
                printf("\n Jadi, total yang harus anda bayar :%d",total_akhir);
                printf("\n");
           break; }
           default: {
                   printf(" Maaf, Paket yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
                   break;
                }
                }

        printf("\n-----Ada Lagi (Y/T)? : ");
        tombol = getchar();
        while (! (tombol == 'T' || tombol == 'Y' || tombol == 't' || tombol == 'y' ))
        tombol = getchar();
        printf ("%c\n", tombol);
        system ("cls");
}
    while (tombol == 'Y' || tombol == 'y');
}