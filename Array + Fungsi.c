 // Array - Fungsi
 
 char *namaBulan(int angkaBulan)   ;

 int i;

 #include<stdio.h>

 int main( int argc, char *argv[])
 {


     int angkaBulan ;


     printf("Untuk Keluar ketik angka > 12 \n\n");
    while(angkaBulan <= 12)
    {   printf("Tulis bulan ke berapa (angka 1-12) : ") ;
       scanf("%d",&angkaBulan);
       if((angkaBulan > 12)||(angkaBulan<1))
       {
           printf("Mana ada bulan %d, Jenius!", angkaBulan);
           break;
       }

      // printf("pilihan : %d",angkaBulan );

   printf("Bulan : %s \n",namaBulan(angkaBulan));       //array string dapat dicetak langsung dengan namanya
    }


 return 0  ;
 }


char *namaBulan(int angkaBulan)     //menggunakan pointer karena
                                    //akan menghasilkan array sebagai
                                    //luaran dari return
 {
    angkaBulan -= 1;   // dikurangi 1 agar elemen ke 0 adalah bulan 1
    char *bulan[12] = {"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};

    return bulan[angkaBulan] ;
 }