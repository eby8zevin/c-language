#include <stdio.h>
#include <conio.h>

main()
{
    int kode,jumlah;
    float harga, total, drink, bersih, uang, kembalian;
    char *nama;

    menu :
    printf("Input Harga Barang\n========================\n");
    printf("Kode Barang :\n");
    printf("1. Jus\n");
    printf("2. Soda\n");
    printf("3. Susu\n");
    printf("Kode : ");
    scanf("\n%d", &kode);
    if(kode==1){
        nama="Jus";
        harga=6000;
    }else if(kode==2){
        nama="Soda";
        harga=7000;
    }else if (kode==3){
        nama="Susu";
        harga=10000;
    }else {
        nama="-";
        harga=0;
        }

    printf("Nama : %s\n", nama);
    printf("Harga : %.0f\n", harga);
    printf("Jumlah Beli : ");
    scanf("%d", &jumlah);
    total=harga*jumlah;
    printf("================================\n");
    printf("Total Harga : %.0f\n", total);
    printf(" \n");

    printf("Beli lebih dari 5 gratis 1 \n");
    if(jumlah>5){
        drink=harga*1;
        bersih=total-drink;
    }else{
        drink=0;
        bersih=total;
        }
    if(total==0){
        goto menu;}
    printf("FREE : %.0f\n", drink);
    printf("================================\n");
    printf("Harga Yang Dibayar : %.0f\n", bersih);
    printf("Uang Pembayaran : ");
    scanf("\n%f", &uang);
    kembalian=uang-bersih;
    printf("Kembalian : %.0f\n", kembalian);
    printf(" \n");
    printf("        Terimakasih Atas Kepercayaannya \n");
    printf(" \n");

    getche();
}