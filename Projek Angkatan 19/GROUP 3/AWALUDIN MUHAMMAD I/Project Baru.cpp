////////////////////////////////////////////////////////////////////////////////
//                        UJIAN AKHIR SEMESTER                                //
//               PROJECT PEMBUATAN CUCI STEAM MOTOR DAN MOBIL                 //
//                       			OLEH:                                        //
//                       AWALUDIN MUHAMMAD IQBAL                              //
//                    JURUSAN D3 MANAJEMEN INFORMATIKA                        //
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//	 Screen Buffer Size:       Window Size :                                   //
//  Width		       : 120   Width	   : 120                                  //
//	 Height            : 40    Height	: 40                                   //
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <conio.h>
#include <windows.h>


////////////////////////////////////////////////////////////////////////////////
////////////////////////////// P R O T O T Y P E ///////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void judul();
void login();
void background();
void background2();
void bingkai();
void bingkai2();
void awal();
void tentang();
void motor();
void mobil();
void bayar();
void keluar();
void menu();
////////////////////////////////////////////////////////////////////////////////
//////////////////////////// V A R I A B E L  INT //////////////////////////////
////////////////////////////////////////////////////////////////////////////////
int uang,total,Tentang,pilih,pilih2;
int motor1,mobil1,motor2,mobil2,motor3,mobil3;
int bay,cuci;
int x=1;
int Keluar,kembali;
////////////////////////////////////////////////////////////////////////////////
/////////////////////////// V A R I A B E L  CHAR //////////////////////////////
////////////////////////////////////////////////////////////////////////////////
char tr;
char user[20];
char pass[20];



void login(){
   do{
   background2();
	bingkai2();
   textcolor(2);
   textbackground(7);
	gotoxy(57,20); cprintf("Login");
   gotoxy(45,21); cprintf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	gotoxy(45,23); cprintf("Username : ");gotoxy(45+12,23); scanf("%s",&user);
   gotoxy(45,25); cprintf("Password : ");gotoxy(45+12,25); scanf("%s",&pass);
   	if(strcmp(user,"strix")==0 && strcmp(pass,"200301")==0){
			char nama[]={"Login Berhasil!!!!!!!!!!!!!!!"};
         	for(int a=0;a<strlen(nama);a++){
            textcolor(a+1);
            	gotoxy(45+a,27);cprintf("%c",nama[a]);Sleep(100);
            }
            clrscr();
         menu();
		}else{
			gotoxy(40,28);cprintf("Username Atau Password salah!!!\n");Sleep(100);
         gotoxy(40,29);printf("Tekan Sembarang untuk kembali ");Sleep(100);
         x++;
         getche();
         clrscr();
         background2();
      }
   }while(x<=3);


}

void menu(){
background2();
textbackground(7);
textcolor(2);
gotoxy(1,26);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(1,27);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(1,28);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(1,29);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(1,30);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
char nama[]={"1. Daftar Harga Cuci"};
	for(int a=0;a<strlen(nama);a++){
		textcolor(2);
		gotoxy(1+3+a,28);cprintf("%c ",nama[a]);Sleep(100);
   }
gotoxy(30,26);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(30,27);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(30,28);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(30,29);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(30,30);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);

char nama1[]={"2. Cuci"};
	for(int a=0;a<strlen(nama1);a++){
		textcolor(2);
		gotoxy(30+3+a,28);cprintf("%c ",nama1[a]);Sleep(100);
   }
gotoxy(60,26);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(60,27);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(60,28);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(60,29);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(60,30);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);

char nama2[]={"3. Tentang"};
	for(int a=0;a<strlen(nama2);a++){
		textcolor(2);
		gotoxy(60+3+a,28);cprintf("%c ",nama2[a]);Sleep(100);
	}
gotoxy(90,26);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(90,27);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(90,28);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(90,29);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(90,30);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);

char nama3[]={"4. Keluar"};
	for(int a=0;a<strlen(nama3);a++){
		textcolor(2);
		gotoxy(96+3+a,28);cprintf("%c ",nama3[a]);Sleep(100);
	}

awal();
}
void awal(){
  gotoxy(52,32); printf("Masukan pilihan : ");pilih=getche();
  clrscr();
   if(pilih=='1'){
   	background2();
      bingkai2();
   	gotoxy(32,17);printf("Motor Matic Cuci Biasa Rp. 12.000\n");
      gotoxy(32,18);printf("Motor Matic Cuci Salju Rp. 16.000\n");
      gotoxy(32,19);printf("Motor Bebek Biasa Cuci Biasa Rp. 13.000\n");
      gotoxy(32,20);printf("Motor Bebek Biasa Cuci Salju Rp. 17.000\n");
      gotoxy(32,21);printf("Motor Trail Cuci Biasa Rp. 20.000\n");
      gotoxy(32,22);printf("Motor Trail Cuci Salju Rp. 25.000\n");
      gotoxy(32,23);printf("Motor Sport Cuci Biasa Rp. 16.000\n");
      gotoxy(32,24);printf("Motor Sport Cuci Salju Rp. 20.000\n");
      gotoxy(32,25);printf("Mobil Sport Cuci Biasa Rp. 60.000\n");
      gotoxy(32,26);printf("Mobil Sport Cuci Salju Rp. 75.000\n");
      gotoxy(32,27);printf("Mobil Keluarga Cuci Biasa  Rp. 40.000\n");
      gotoxy(32,28);printf("Mobil Keluarga Cuci Salju  Rp. 50.000\n");
      gotoxy(32,29);printf("Mobil Travel Cuci Biasa  Rp. 80.000\n");
      gotoxy(32,30);printf("Mobil Travel Cuci Salju  Rp. 100.000\n");
      gotoxy(32,31);printf("Mobil Truk Cuci Biasa  Rp. 100.000\n");
      gotoxy(32,32);printf("Mobil Truk Cuci Salju  Rp. 150.000\n");

      gotoxy(90,35);printf("Tekan 0 Untuk Kembali : ");kembali=getche();
      if(kembali=='0'){
      	clrscr();
      	awal();
      }
   }else if(pilih=='2'){
   	printf("1. Motor \n");
      printf("2. Mobil \n");

      gotoxy(52,32);printf("Masukan pilihan : ");pilih2=getche();
      if(pilih2=='1'){
      	motor();
         clrscr();
      }else if(pilih2=='2'){
      	mobil();
         clrscr();
      }else{
      	printf("INPUTAN SALAH!!!!!!!");
         clrscr();
      	awal();
      }
   }else if(pilih=='3'){
   	tentang();
      clrscr();
   }else if(pilih=='4'){
   	keluar();
   }else if(pilih=='0'){
   	awal();
   }else{
   	printf("\nINPUTAN SALAH!!!!!!!!\n");
      clrscr();

   }
}


void background(){
   for(int a=0;a<=40;a++){
	for(int b=0;b<=120;b++){
		textcolor(0+a);
   	gotoxy(b,a);cprintf("%c",219);
   }
}

}

void background2(){
	for(int a=0; a<=40 ; a++){
   	for(int b=0; b<=120 ; b++){
   	textcolor(3);
  		 gotoxy(b,a);cprintf("%c",219);
   	}
   }
}

void bingkai2(){
for(int a=29; a<=89 ; a++){
   	for(int b=16; b<=37 ; b++){
   	textcolor(7);
  		 gotoxy(a,b); cprintf("%c",219);
   	}printf("\n");
   }


}


void bingkai(){
textbackground(7);
textcolor(2);
gotoxy(20,20);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(20,21);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(20,22);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(20,23);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(20,24);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);

gotoxy(80,20);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(80,21);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(80,22);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(80,23);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(80,24);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);

gotoxy(50,30);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(50,31);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(50,32);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(50,33);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(50,34);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);

}

void motor(){
   background2();
   bingkai();
	char nama[]={"1. Motor Bebek"};
	for(int a=0;a<strlen(nama);a++){
		textcolor(2);
		gotoxy(21+a,22);cprintf("%c ",nama[a]);Sleep(100);
   }

   char nama2[]={"2. Motor Sport"};
	for(int a=0;a<strlen(nama2);a++){
		textcolor(2);
		gotoxy(81+a,22);cprintf("%c ",nama2[a]);Sleep(100);
   }


   	gotoxy(52,32);printf("Masukan pilihan : ");motor1=getche();
      clrscr();
   	if(motor1=='1'){
         background2();
   		printf("1. Motor matic \n");
	      printf("2. Motor Bebek biasa \n");


   	   printf("Masukan pilihihan : ");motor2=getche();
            clrscr();
      		if(motor2=='1'){
               background2();
            do{
            	printf("1. Cuci Biasa\n");
               printf("2. Cuci Salju\n");

               printf("Masukan pilihihan : ");motor3=getche();
               clrscr();
               	if(motor3=='1'){
               		cuci=12000;
                  	bayar();
               	}else if(motor3=='2'){
               		cuci=16000;
                  	bayar();
	               }else{
   	            	printf("Inputan SALAH!!!!!\n");
                  }
               }while(false);
            }else if(motor2=='2'){
            	printf("1. Cuci Biasa\n");
               printf("2. Cuci Salju\n");

               printf("Masukan pilihihan : ");motor3=getche();
            	   if(motor3=='1'){
               		cuci=13000;
                  	bayar();
               	}else if(motor3=='2'){
               		cuci=17000;
	                  bayar();
   	            }else{
      	         	printf("Inputan SALAH!!!!!\n");

            	   }
            }
   	}else if(motor1=='2'){
   		printf("1. Motor Sport \n");
	      printf("2. Motor Trail \n");

         printf("Masukan pilihihan : ");motor2=getche();
      		if(motor2=='1'){
            	printf("1. Cuci Biasa\n");
               printf("2. Cuci Salju\n");

               printf("Masukan pilihihan : ");motor3=getche();
               if(motor3=='1'){
               	cuci=20000;
                  bayar();
               }else if(motor3=='2'){
               	cuci= 25000;
                  bayar();
               }else{
               	printf("Inputan SALAH!!!!!\n");

               }
            }else if(motor2=='2'){
            	printf("1. Cuci Biasa\n");
               printf("2. Cuci Salju\n");

               printf("Masukan pilihihan : ");motor3=getche();
               if(motor3=='1'){
               	cuci= 16000;
                  bayar();
               }else if(motor3=='2'){
               	cuci= 20000;
                  bayar();
               }else{
               	printf("Inputan SALAH!!!!!\n");

               }
            }

		}else{
   		printf("INPUTAN SALAH!!!!!!\n");
   	}


};


void mobil(){
	printf("1. Mobil roda 4\n");
   printf("2. Mobil roda 6\n");

   printf("Masukan pilihan : ");mobil1=getche();
   	if(mobil1=='1'){
   		printf("1. Mobil Keluarga\n");
	      printf("2. Mobil Sport\n");
   	   printf("3. Mobil Travel\n");

         printf("Masukan pilihan : ");mobil2=getche();
      		if(mobil2=='1'){
            	printf("1. Cuci Biasa\n");
               printf("2. Cuci Salju\n");

               printf("Masukan Pilihan : ");mobil3=getche();
               	if(mobil3=='1'){
               		cuci=60000;
	                  bayar();
   	            }else if(mobil3=='2'){
      	         	cuci= 75000;
         	         bayar();
            	   }else{
               		printf("Inputan SALAH!!!!!\n");

	               }
            }else if(mobil2=='2'){
            	printf("1. Cuci Biasa\n");
               printf("2. Cuci Salju\n");

               printf("Masukan Pilihan : ");mobil3=getche();
               	if(mobil3=='1'){
   	            	cuci=50000;
     	               bayar();
        	         }else if(mobil3=='2'){
           	    		cuci= 65000;
	                  bayar();
   	            }else{
      	         	printf("Inputan SALAH!!!!!\n");

         	      }
            }else if(mobil2=='3'){
            	printf("1. Cuci Biasa\n");
               printf("2. Cuci Salju\n");

               printf("Masukan Pilihan : ");mobil3=getche();
               	if(mobil3=='1'){
               		cuci=80000;
                  	bayar();
               	}else if(mobil3=='2'){
               		cuci= 100000;
	                  bayar();
   	            }else{
      	         	printf("Inputan SALAH!!!!!\n");

         	      }
            }else{
            	printf("INPUTAN SALAH !!!!!!!\n");
            }

      }else if(mobil1=='2'){
      	printf("Truk\n");

         printf("Masukan pilihan : ");scanf("%d",&mobil2);
      		if(mobil2=='1'){
            	printf("1. Cuci Biasa\n");
               printf("2. Cuci Salju\n");

               printf("Masukan Pilihan : ");scanf("%d",&mobil3);
               	if(mobil3=='1'){
               	cuci=100000;
                  bayar();
               }else if(mobil3=='2'){
               	cuci= 150000;
                  bayar();
               }else{
               	printf("Inputan SALAH!!!!!\n");

               }
            }
      }

};


void tentang(){
	printf("COMING SOON\n");
   getch();

   printf("Tekan 0 Untuk Kembali : ");pilih2=getche();
      if(pilih2=='0'){
      	clrscr();
      	awal();
      }else{}


};

void keluar(){
   char keluar;
   do{
		printf("Apakah Anda Ingin Keluar (y/t) : ");keluar=getche();
   		if(keluar=='y'){
            gotoxy(43,25); cprintf("Aplikasi Akan Keluar dalam ");
            for(int a=5 ; a>=0 ; a--){
            	gotoxy(72,25); cprintf("%d detik", a);
	            Sleep(1000);
      	   }

            exit(0);
		   }else if(keluar=='t'){
         	clrscr();
		   }else{
         	printf("Inputan salah!!!!!!");
         }

   }while(true);
}

void bayar(){
		printf("Total : %d",cuci);
      printf("Masukan Nominal : ");scanf("%d",&uang);
	   if(uang>cuci){
	   	uang=uang-cuci;
         printf("Kemblian : %d\n",uang);
	      char nama[]={"Terima Kasih Telah Mencuci Kendaraan Anda!!\nSilahkan Datang Kembali\n"};
         	for(int a=0;a<strlen(nama);a++){
               printf("%c",nama[a]);Sleep(100);
            }
            getch();
            clrscr();
            awal();
   	}else if(uang==cuci){
	   	printf("Tidak ada Kembalian \n");
      	printf("Terima Kasih Telah Mencuci Kendaraan Anda!!\n");
   	   printf("Silahkan Datang Kembali \n");
	      getch();
   	   awal();
	   }else{
   		printf("Uang anda kurang!!!!");

         clrscr();
         getch();
         awal();
   	}

};
main(){
	login();
getch();
}
