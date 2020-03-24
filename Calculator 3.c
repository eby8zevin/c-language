#include <stdio.h>

int main()
{
    char menu;
    int bil_pertama, bil_kedua, hasil;
    printf(" ====================================\n");
    printf("     Program Kalkulator Sederhana\n");
    printf(" ====================================\n\n");
    printf(" Menu :\n");
    printf(" \t[1] Penjumlahan\n");
    printf(" \t[2] Pengurangan\n");
    printf(" \t[3] Perkalian\n");
    printf(" \t[4] Pembagian\n");
    printf(" \t[5] Keluar\n\n");
    printf(" Pilih menu : ");
    scanf("%c",&menu);
    if(menu == '1')
    {
        printf("\n [1] Penjumlahan :\n");
        printf("     -------------------------------\n");
        printf("     Masukan bilangan pertama : ");
        scanf("%d",&bil_pertama);
        printf("     Masukan bilangan kedua   : ");
        scanf("%d",&bil_kedua);
        hasil = bil_pertama + bil_kedua;
        printf("     ------------------------------- +\n");
        printf("     Hasil                    : %d", hasil);
    }
    else if(menu == '2')
    {
        printf("\n [2] Pengurangan :\n");
        printf("     -------------------------------\n");
        printf("     Masukan bilangan pertama : ");
        scanf("%d",&bil_pertama);
        printf("     Masukan bilangan kedua   : ");
        scanf("%d",&bil_kedua);
        hasil = bil_pertama - bil_kedua;
        printf("     ------------------------------- +\n");
        printf("     Hasil                    : %d", hasil);
    }
    else if(menu == '3')
    {
        printf("\n [3] Perkalian :\n");
        printf("     -------------------------------\n");
        printf("     Masukan bilangan pertama : ");
        scanf("%d",&bil_pertama);
        printf("     Masukan bilangan kedua   : ");
        scanf("%d",&bil_kedua);
        hasil = bil_pertama * bil_kedua;
        printf("     ------------------------------- +\n");
        printf("     Hasil                    : %d", hasil);
    }
    else if(menu == '4')
    {
        printf("\n [4] Pembagian :\n");
        printf("     -------------------------------\n");
        printf("     Masukan bilangan pertama : ");
        scanf("%d",&bil_pertama);
        printf("     Masukan bilangan kedua   : ");
        scanf("%d",&bil_kedua);
        hasil = bil_pertama / bil_kedua;
        printf("     ------------------------------- +\n");
        printf("     Hasil                    : %d", hasil);
    }
    else if(menu == '5')
    {
        exit(0);
    }
    else
    {
        printf(" Menu yang anda pilih tidak terdaftar.");
    }
    printf("\n\n ====================================\n");
    getch();
    return 0;
}