#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void menu();
void proses(int pil);

float x,y,hasil;
float *pz;

int main(void){

    int i,pil,ulang;
    pz = &hasil;

menu();
       printf("\n\n Masukan Pilihan Anda : ");
       scanf("%i",&pil);

proses(pil);
       printf ("\n\n Apakah Anda Ingin Melakukan Operasi Yang Lain (1=YES , 2=NO) ? ");
       scanf  ("%i",&ulang);    system("cls");

       if(ulang==1){
              while (ulang==1){
menu();
        printf("\n\n Masukan Pilihan Anda : ");
        scanf("%i",&pil);
proses(pil);
        printf (" Apakah Anda Ingin Melakukan Operasi Yang Lain (1 = Yes , 2 = No) ? ");
        scanf("%i",&ulang);   system("cls");
        //printf("\n\n\n\n\n\n\n\n\n\n\t\t\t ==== Terima Kasih ==== \n\n\n\n\n\n\n\n\n\n\n");
        } system("cls");
        }else{
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t ==== Terima Kasih ==== \n\n\n\n\n\n\n\n\n\n\n");
        }
        system ("pause");
        //return main();
}
void menu(){
       printf ("\n ==============\n");
       printf ("  MENU OPERASI\n");
       printf (" ==============\n\n");
       printf (" 1.  Proses Penjumlahan\n");
       printf (" 2.  Proses Pengurangan\n");
       printf (" 3.  Proses Perkalian\n");
       printf (" 4.  Proses Pembagian\n");
}
void proses(int pil){
       switch (pil){
       case 1:{
                 printf ("\n\n Proses Penjumlahan\n");
                 printf (" =========================\n");
                 printf ("\n Masukan Angka 1 : ");
                 scanf  ("%f",&x);
                 printf (" Masukan Angka 2 : ");
                 scanf  ("%f",&y);
                 *pz=x+y;
                 printf (" Hasil = %0.f \n", *pz);
                 break;
                 }
       case 2:{
                 printf ("\n\n Proses Pengurangan\n");
                 printf (" ===========================\n");
                 printf (" Masukan Angka 1 : ");
                 scanf  (" %f",&x);
                 printf (" Masukan Angka 2 : ");
                 scanf  (" %f",&y);
                 *pz=x-y;
                 printf (" Hasil = %.0f \n", *pz);
                 break;
                 }
       case 3:{
                 printf ("\n\n Proses Perkalian\n");
                 printf (" ==========================\n");
                 printf (" Masukan Angka 1 : ");
                 scanf  (" %f",&x);
                 printf (" Masukan Angka 2 : ");
                 scanf  ("%f",&y);
                 *pz=x*y;
                 printf (" Hasil = %.0f \n", *pz);
                 break;
                 }
       case 4:{
                 printf ("\n\n Proses Pembagian\n");
                 printf (" =========================\n");
                 printf (" Masukan Angka 1 : ");
                 scanf  ("%f",&x);
                 printf (" Masukan Angka 2 : ");
                 scanf  ("%f",&y);
                 *pz=x/y;
                 printf (" Hasil = %.2f \n", *pz);
                 break;
                 }
       default :
              printf ("\n ===Pilihan Operasi Anda Tidak Sesuai===\n\n\n");
              }
}