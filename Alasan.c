#include <stdio.h>

void info_program();
void proses();

char *pilih[]={"\n Apa Alasan Anda (1/2) ? "};
int z;
char ulang;

struct a{
    char *at[3];
};

main()
{
    info_program();
    proses();
}

void info_program()
{
    printf("\n\t==========================");
    printf("\n\t| Nama : Ahmad Abu Hasan |\n");
    printf("\t| NIM  : 117227007       |\n");
    printf("\t==========================\n");
}
void proses()
{
    int *px, y;
    px = &y;

    struct a alas = {"Hujan","Kerja","Alasan"};

    printf("\n ===Pilih Alasan Anda !===\n");
    printf("\n 1. Hujan\n 2. Lembur\n");

    for (z=0;z<=1;z++){
    printf("%s", pilih[z]);

    scanf("%i", &y);
    if(y<=1)
    {
        printf("\n Anda Memilih Alasan Nomor %i. %s \n", *px, alas.at[0]);
        printf("\n Note : %s Saja Tidak Masuk, Apalagi Kalau Sampai Banjir. \n", alas.at[0]);
    break;
    }else if(y<=2){
        printf("\n Anda Memilih Alasan Nomor %i. %s \n", *px, alas.at[1]);
        printf("\n Note : %s Boleh Lembur, Tapi Belajar Nggak Boleh Libur. \n", alas.at[1]);
    break;
    }else{
        printf("\n Pilih Nomor 1 Atau 2 ! Anda Pilih Nomor %i ? \n", *px);
        printf("\n Note : FIX ! Anda Memang Banyak %s. \n", alas.at[2]);
    break;
    }
}   printf("\n ");
    system("pause");
    system("cls");
return proses();
}