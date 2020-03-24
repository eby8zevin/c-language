#include<stdio.h>
#include<string.h>
int main(){

char menu [3];
int pertama, kedua, hasil;

printf("=========================================\n");
printf("Selamat Datang di Program Kalkulator Saya\n");
printf("=========================================\n\n");
printf("=============================\n");
printf("Nama \t: \n");
printf("NIM \t: \n");
printf("=============================\n\n");
printf("Mulai Menjalankan Kalkulator\n");

menu:
 printf("====================\n");
 printf(" +. Pertambahan\n");
 printf(" -. Pengurangan\n");
 printf(" *. Perkalian\n");
 printf(" /. Pembagian\n");
 printf(" ^. Pemangkatan\n");
 printf(" #. Exit \n");
 printf("====================\n");
 printf("-------------->>> Silakan input pilihan anda \t ?");
 scanf("%s",menu);


  if (strcmp(menu,"+")==0)
     {
       system("cls");
       printf("Pertambahan ( + ) \n");
       printf ("Input angka Pertama\t:");
       scanf ("%d",&pertama);
       printf ("\n");
       printf ("Input angka kedua\t:");
       scanf ("%d",&kedua);
       printf("   . . Loading . .\n");
       hasil=pertama+kedua;
       system ("pause");
       printf ("\n");
       printf ("Jadi Hasil Penghitunganya adalah : %d+%d= %d\n", pertama, kedua, hasil);
     }
  if (strcmp(menu,"-")==0)
     {
       system("cls");
       printf("Pengurangan ( - ) \n");
       printf ("Input angka Pertama\t:");
       scanf ("%d",&pertama);
       printf ("\n");
       printf ("Input angka kedua\t:");
       scanf ("%d",&kedua);
       printf("   . . Loading . .\n");
       hasil=pertama-kedua;
       system ("pause");
       printf ("\n");
       printf ("Jadi Hasil Penghitunganya adalah : %d-%d= %d\n", pertama, kedua, hasil);
     }

   if (strcmp(menu,"*")==0)
     {
       system("cls");
       printf("Perkalian ( * ) \n");
       printf ("Input angka Pertama\t:");
       scanf ("%d",&pertama);
       printf ("\n");
       printf ("Input angka kedua\t:");
       scanf ("%d",&kedua);
       printf("   . . Loading . .\n");
       hasil=pertama*kedua;
       system ("pause");
       printf ("\n");
       printf ("Jadi Hasil Penghitunganya adalah : %d*%d= %d\n", pertama, kedua, hasil);
     }

   if (strcmp(menu,"/")==0)
     {
        system("cls");
       printf("Pembagian ( / ) \n");
       printf ("Input angka Pertama\t:");
       scanf ("%d",&pertama);
       printf ("\n");
       printf ("Input angka kedua\t:");
       scanf ("%d",&kedua);
       printf("   . . Loading . .\n");
       hasil=pertama/kedua;
       system ("pause");
       printf ("\n");
       printf ("Jadi Hasil Penghitunganya adalah : %d/%d= %d\n", pertama, kedua, hasil);
     }
   if (strcmp(menu,"^")==0)
     {
       system("cls");
       printf("Pemangkatan ( ^ ) \n");
       printf ("Input angka Pertama\t:");
       scanf ("%d",&pertama);
       printf ("\n");
       printf ("Input angka kedua\t:");
       scanf ("%d",&kedua);
       printf("   . . Loading . .\n");
       hasil= pow(pertama,kedua);
       system ("pause");
       printf ("\n");
       printf ("Jadi Hasil Penghitunganya adalah : (%d^%d)= %d\n", pertama, kedua,                 hasil);
     }
    if (strcmp(menu,"#")==0)
     {
       return 0;
     }
    system("pause");
    system("cls");
    goto menu;
}