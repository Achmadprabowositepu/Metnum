#include <stdio.h>
#include <conio.h>
#include<windows.h>


main(){
   int nilai1, nilai2,hasil = 0;
   int pilih;
   int i;
   home:

   printf("Tampilan Menu\n");
   printf(" Metode numerik Aritmatika\n");
   printf("______________________________\n");
   printf("1. Hitung Hasil tambah  Nilai1 + Nilai2\n");
   printf("2. Hitung Hasil kurang  Nilai1 - Nilai\n");
   printf("3. Hitung Hasil kali    Nilai * Nilai\n");
   printf("4. Hitung Hasil pangkat Nilai1 ^ Nilai2\n");
   printf("5. Hitung Hasil F(x) = 2x^2-4x+1\n");
   printf("6. keluar\n");
   printf("Pilih : ");scanf(" %d",&pilih);
   if(pilih==1){
      goto tambah;
   }
      else if(pilih==2){
       	goto kurang;
      }
         else if(pilih==3){
             goto kali;
         }
            else if(pilih==4){
               goto pangkat;
            }
               else if(pilih==5){
               	  goto fungsi;
               }
                  else if (pilih==6){
               	     goto exit;
                  }
               	      else{
            		printf("salah Borr !");
               	      }
	getch();
   		tambah:
   			printf("Masukan Nilai bil1 : ");scanf("%d",&nilai1);
   			printf("Masukan Nilai bil2 : ");scanf("%d",&nilai2);
   			hasil = nilai1 + nilai2;
   			printf("hasil : %d",hasil);
   			getch();
   			system("cls");
   			goto home;
   		kurang:
   			printf("Masukan Nilai bil1 : ");scanf("%d",&nilai1);
   			printf("Masukan Nilai bil2 : ");scanf("%d",&nilai2);
   			hasil = nilai1 - nilai2;
   			printf("hasil : %d",hasil);
   			getch();
   			system("cls");
  		 	goto home;
   		kali:
   			printf("Masukan Nilai bil1 : ");scanf("%d",&nilai1);
   			printf("Masukan Nilai bil2 : ");scanf("%d",&nilai2);
  			hasil = nilai1 * nilai2;
  			printf("hasil : %d",hasil);
   			getch();
   			system("cls");
   			goto home;
   		pangkat:
   			printf("Masukan Nilai bil1 : ");scanf("%d",&nilai1);
   			printf("Masukan Nilai bil2 : ");scanf("%d",&nilai2);
   			hasil = nilai1;
   			for(i=1;i<nilai2;i++){
   			hasil = hasil * nilai1;
   		}
   			printf("hasil : %d",hasil);
   			getch();
   			system("cls");
   			goto home;
   		fungsi:
   			printf("Masukan Nilai bil1 :");scanf("%d",&nilai1);
   			printf("Masukan Nilai bil2 :");scanf("%d",&nilai2);
   			for(i=nilai1;i<=nilai2;i++){
      			hasil = (2*(i*i))-((4*i)+1);
      		printf("hasil : %d\n",hasil);
   }
   			getch();
   			system("cls");
   			goto home;
exit:
return 0;
}
