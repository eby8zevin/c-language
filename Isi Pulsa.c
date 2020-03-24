#include <stdio.h>
#include <string.h>

void info()
{
    printf(" Info Program \n");
}


char *pilihmenu[]={"1. 10.000\n","2. 20.000\n","3. 25.000\n"};
int i=0;
char tombol;
struct a{
    char b[100];
};

main ()
{
    int *px, pilihan;
    px = &pilihan;
    float y[4]={10.000,20.000,25.000};

struct a c;
strcpy(c.b, "Jika Pulsa Belum Terisi Hub. 081234567890 ");

info();
    do
    {
        printf("Nominal Pulsa\n");
        for (i=0;i<=2;i++){
            printf("%s",pilihmenu[i]);
        }
        printf("Pilih salah satu nominal pulsa di atas (1/2/3) : ");
        scanf("%d",&pilihan);

        switch(*px){
        case 1:{
                printf("\nNo. %d Pulsa %.3f dengan Masa Aktif 7 Hari ", *px, y[0]);
                printf("\n\n %s", c.b);
                break;
                }
         case 2:{
                printf("\nNo. %d Pulsa %.3f dengan Masa Aktif 15 Hari ", *px, y[1]);
                printf("\n\n %s", c.b);
                break;
                }
        case 3:{
                printf("\nNo. %d Pulsa %.3f dengan Masa Aktif 30 Hari ", *px, y[2]);
                printf("\n\n %s", c.b);
                break;
                }
        default :{
                    printf("\npilihan anda tidak sesuai\n\n");
                    return main();
                    break;
        }
        }
        printf ("\n\n\nIsi Ulang Pulsa Lagi (Y/T)? : ");
        scanf("%c", &tombol);
        while (! (tombol == 'T' || tombol == 'Y' || tombol == 't' || tombol == 'y' ))
        scanf("%c", &tombol);
        system("cls");
    }
    while (tombol == 'Y' || tombol == 'y');
}