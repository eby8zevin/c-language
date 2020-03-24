#include <stdio.h>


float perkalian(float a, float b){
    return(a*b);
}

float pengurangan(float a, float b){
    return(a-b);
}

float pertambahan(float a, float b){
    return(a+b);
}

float pembagian(float a, float b){
    return(a/b);
}

char *pilihmenu[]={"1. Perkalian\n","2. Pengurangan\n","3. Pertambahan\n","4. Pembagian\n"};
int i=0;
char tombol;

main (){
    int pilihan;
    float a,b;

    do
    {
        printf("Menu Pilihan Kalkulator\n");
        for (i=0;i<=3;i++){
            printf("%s",pilihmenu[i]);
        }
        printf("Pilih salah satu menu di atas\n");
        scanf("%d",&pilihan);

        switch(pilihan){
        case 1:{
                printf("Nilai pertama = ");
                scanf("%f",&a);
                printf("nilai kedua = ");
                scanf("%f",&b);
                printf("Hasil dari %g x %g = %g\n",a,b,perkalian(a,b));
                break;
                }
         case 2:{
                printf("Nilai pertama = ");
                scanf("%f",&a);
                printf("nilai kedua = ");
                scanf("%f",&b);
                printf("Hasil dari %g - %g = %g\n",a,b,pengurangan(a,b));
                break;
                }
        case 3:{
                printf("Nilai pertama = ");
                scanf("%f",&a);
                printf("nilai kedua = ");
                scanf("%f",&b);
                printf("Hasil dari %g + %g = %g\n",a,b,pertambahan(a,b));
                break;
                }
        case 4:{
                printf("Nilai pertama = ");
                scanf("%f",&a);
                printf("nilai kedua = ");
                scanf("%f",&b);
                printf("Hasil dari %g / %g = %g\n",a,b,pembagian(a,b));
                break;
                }
        default :{
                    printf("pilihan anda tidak sesuai\n");
                    return main();

                    break;
        }
        }
        printf ("\n-----Ada Lagi (Y/T)? : ");
        tombol = getch();
        while (! (tombol == 'T' || tombol == 'Y' || tombol == 't' || tombol == 'y' ))
        tombol = getch();
        printf ("%c\n\n\n\n", tombol);
    }
    while (tombol == 'Y' || tombol == 'y');
}