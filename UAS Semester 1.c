#include <stdio.h>
#include <string.h>

void info(){
    printf("\n\t==========================");
    printf("\n\t| Nama :  |\n");
    printf("\t| NIM  :        |\n");
    printf("\t==========================\n");
    printf(" =============================================================================\n");
    printf("\n Program Ini Menjelaskan Ketentuan Umur Untuk Membuat SIM A \n");
    printf(" dan Menjelaskan Pada Umur Berapa Anda Harus Memperpanjangnya \n"); // Fungsi
}

struct a{
    char b[21]; // Struct
};

main()
{
    int u[1] = {17}; // Array
    int i;
    int *px, y; // Pointer
    px = &y;

struct a c ;
strcpy(c.b, "Umur"); // String

info();
    printf("\n Berapa %s Anda ? ", c.b);
    scanf("%d", &y);

    if(y<=16){
        i=17-y;
        printf("\n %s Anda Masih Kurang %d Tahun \n", c.b, i);
        printf("\n Tunggu Sampai Umur %d Tahun\n", u[0]);
    }else{
        printf("\n %s Anda Sudah Sesuai %d Tahun \n\n", c.b, *px);
        printf("\n Jika Anda Membuat SIM A Pada %s %d, Maka Anda Harus Memperpanjang Pada ", c.b, *px);
        printf("\n %s ", c.b);
    for(y+=5;y<=63;y+=5){
        printf(" %d | ", *px);
        }
        }
    printf(" \n\n\n\n "); system("pause"); system("cls");
    return main();
}