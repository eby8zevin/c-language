#include <stdio.h>

char *menu[]={"\n 1. Sakit\n"," 2. Izin\n"," 3. Tanpa Keterangan\n"};
int z=0;
char ulang;

main (){

    int p;
    int *px, i;
    px = &i;

    do
    {
        printf("\n =================================");
        printf("\n | Daftar Keterangan Tidak Hadir |");
        printf("\n =================================\n");
        for (z=0;z<=2;z++){
            printf("%s", menu[z]);
        }
        printf("\n Pilih Salah Satu Alasan Anda (1/2/3) ! ");
        scanf("%d",&p);

        switch(p){
        case 1:{
                printf(" Berapa Hari Anda Sakit ? ");
                scanf("%d", &i);

                if (i<=5){
                    printf("\n Selama Sebulan Anda Sakit %d Hari ", *px);
                    printf("\n Selamat ! Anda Naik Kelas\n ");
                }else{
                    printf("\n Selama Sebulan Anda Sakit %d Hari ", *px);
                    printf("\n Anda Naik Kelas Dengan Bersyarat\n ");
                }
                break;
                }
        case 2:{
                printf(" Berapa Hari Anda Izin ? ");
                scanf("%d", &i);

                if (i<=4){
                    printf("\n Selama Sebulan Anda Izin %d Hari ", *px);
                    printf("\n Selamat ! Anda Naik Kelas\n ");
                }else{
                    printf("\n Selama Sebulan Anda Izin %d Hari ", *px);
                    printf("\n Anda Tidak Naik Kelas !\n ");
                }
                break;
                }
        case 3:{
                printf(" Berapa Hari Anda Tidak Masuk Tanpa Keterangan ? ");
                scanf("%d", &i);

                if (i<=3){
                    printf("\n Selama Sebulan Anda Tidak Masuk Tanpa Keterangan %d Hari ", *px);
                    printf("\n Selamat ! Anda Naik Kelas\n ");
                }else{
                    printf("\n Selama Sebulan Anda Tidak Masuk Tanpa Keterangan %d Hari ", *px);
                    printf("\n Anda Tidak Naik Kelas\n ");
                }
                break;
                }
        default:{
                    printf("\n Pilihan Anda Tidak Sesuai ");
                    printf("\n Ulangi Kembali !\n ");
                    printf("\n\n\n");
                    break;
        }
        }
        printf ("\n Ingin Mencoba Lagi (Y / T) ? ");
        scanf("%c", &ulang);
        while(! (ulang == 'T' || ulang == 'Y' || ulang == 't' || ulang == 'y' ))
        scanf("%c", &ulang); system("cls");
    }
    while(ulang == 'Y' || ulang == 'y');
}