#include<stdio.h>

void identitas(){
printf("\nNAMA \t :  \n");
printf("NIM \t : \n");
printf("\n\nprogram ini menunjukan ketentuan isi ulang pulsa\n");
}

struct a{
    char nama[20];
};

main(){
    int u[4]={7,15,30};
    int i;
    int *px, pulsa;
    px = &pulsa;
    char ulang;

struct a pls = {"hari"};

identitas();
do{
    printf("\n Berikut Pilihan Pulsa nya \n");
    printf("\n1. 10.000 \n2. 20.000 \n3. 25.000");
    printf("\n\nPilih angka (1/2/3) sesuai dengan pulsa yang Anda beli: ");
    scanf("%d",&pulsa);

    if(pulsa<=1){
    printf("\nAngka %d dengan pulsa sebesar 10.000 \nMasa aktif bertambah %d %s", *px, u[0], pls.nama);
    }else if(pulsa<=2){
    printf("\nAngka %d dengan pulsa sebesar 20.000 \nMasa aktif bertambah %d %s", *px, u[1], pls.nama);
    }else if(pulsa<=3){
    printf("\nAngka %d dengan pulsa sebesar 30.000 \nMasa aktif bertambah %d %s", *px, u[2], pls.nama);
    }else{
    printf(" Angka Yang Anda Masukkan Tidak Sesuai ");
    }
printf ("\n\n Ingin Mengulangi (Y/T)? : ");
        scanf("%c", &ulang);
        while (! (ulang == 'T' || ulang == 'Y' || ulang == 't' || ulang == 'y' ))
        scanf("%c", &ulang);
        system("cls");
    }
    while (ulang == 'Y' || ulang == 'y');
}