#include <stdio.h>

main(){
    int *ptr;
    int k;
    k=7;
    printf("Isi variabel k = %d",k);
    printf("\nAlamat variabel k = %d",&k);
    printf("\nAlamat variabel *ptr = %d",&ptr);
    printf("\nIsi variabel *ptr = %d",ptr);
    ptr=&k;
    printf("\nAlamat variabel *ptr = %d",&ptr);
    printf("\nIsi variabel *ptr = %d",ptr);
    printf("\nIsi dari alamat %d = %d",ptr,*ptr);
    printf("\n");
}