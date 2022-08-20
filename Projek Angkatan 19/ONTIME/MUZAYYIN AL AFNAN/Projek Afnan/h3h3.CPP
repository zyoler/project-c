#include<stdio.h>
#include<conio.h>
main(){
	int jumlah,harga,uang,kembalian;
   printf("Masukkan Jumlah Barang: "); scanf("%d",&jumlah);
   printf("Masukkan Nominal Uang: "); scanf("%d",&uang);
   if(jumlah<=50){
   	harga=jumlah*10000;
      printf("jumlah barang: %d\n",jumlah);
      printf("anda berhasil membeli senilai: %d\n",harga);
      kembalian=uang-harga;
      printf("kembalian: %d",kembalian);
   }else{
   	printf("barang tidak mencukupi");
   }
getch();
}