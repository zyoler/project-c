//==============================================================================
//==               ==      BISMILLAHIRRAHMAANIRRAHIIM     ==                  ==
//==               ==             FIRST PROJECT           ==                  ==
//==               ==    CREATED BY ANISA R. NURHAMIDAH   ==                  ==
//==               ==       D3 MANAJEMEN INFORMATIKA      ==                  ==
//==               ==          PUB'17 [FIREWALL]          ==                  ==
//==               =========================================                  ==
//==               WIDTH: 120                     HEIGHT:40                   ==
//==============================================================================

#include <stdio.h>
#include <conio.h>
#include <windows.h>

//==============================================================================
//==                                PROTOTYPE                                 ==
//==============================================================================

void bingkai();
void logo();
void login();
void bingkai_login();
void tabel();
void menu();
void pilihan1();
void pilihan2();
void garis();
void hapus();
void bingkai_produk();
void kategori();
void tabel_kategori();
void bunga();
void bunga_buket();
void bunga_meja();
void bunga_kotak();
void bunga_keranjang();
void tabel_bunga();
void pembelian();
void daftar_bunga();
void produk();
void profil();
void profil2();
void loading();
void transaksi();
void kategori1();
void kategori2();
void kategori3();
void kategori4();
void kategori_pesan1();
void kategori_pesan2();
void kategori_pesan3();
void kategori_pesan4();
void pembayaran();
void beli_lagi();
void form_pemesanan();
void background1();
void copyright();
void pesan();
void name();
void telepon();
void alamat();
void bingkai_struk();
void struk();
void pilih_pesan();
void pesan_lagi();
void transaksi2();
void back();
int valangka(char a[10]);
int valhuruf(char b[20]);

//==============================================================================
//==                              VARIABEL GLOBAL                             ==
//==============================================================================


char nama[10];
char pass[10];
char pilih1[1];
char pilih2[1];
char pilih3[1];
char pilihpesan2[1];
char keluar[1];
char kuantitas[10];
char uang[9];
char beli_lagii[1];
char nama_pemesan[20];
char alamat_pemesan[20];
char no_hp[13];
char pilihpesan[1];
char lanjut[1];
char kembali_ke_menu[1];
char kembali[1];

int val;
int pilihh;

float total=0;
float bayar;
float jumlah;
//==============================================================================
//                                   DESAIN                                   ==
//==============================================================================
void bingkai(){
	textcolor(14);
   for(int x=1;x<=120;x++){
   gotoxy(x,1);cprintf("%c",219);
   gotoxy(x,40);cprintf("%c",219);
   }
   textcolor(14);
   for(int x=1;x<=40;x++){
   gotoxy(1,x);cprintf("%c",219);
   gotoxy(120,x);cprintf("%c",219);
   }
}
void bingkai_login(){
   textcolor(14);
   for(int x=45;x<=75;x++){
       gotoxy(x,20);cprintf("%c",219);
       gotoxy(x,24);cprintf("%c",219);
       gotoxy(x,28);cprintf("%c",219);
   }
   for(int y=20;y<=28;y++){
   textcolor(14);
   	gotoxy(45,y);cprintf("%c",219);
      gotoxy(75,y);cprintf("%c",219);
   }
}

void logo(){
	textcolor(12);
   gotoxy(50,3);  cprintf("%c W E L C O M E   T O %c",254,254);Sleep(1500);
   for(int x=5;x<=15;x++){
   Sleep(40);
   gotoxy(x+5,5); cprintf("    %c%c%c     %c%c%c%c%c%c         %c%c%c%c%c%c%c   %c%c       %c%c%c%c%c  %c%c%c%c%c%c  %c%c%c%c   %c%c%c%c%c  %c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);//Sleep(200);
   gotoxy(x+5,6); cprintf("   %c   %c    %c%c   %c%c        %c%c        %c%c      %c%c   %c%c %c%c   %c%c  %c%c   %c%c    %c    %c%c   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);//Sleep(200);
   gotoxy(x+5,7); cprintf("  %c%c   %c%c   %c%c   %c%c        %c%c        %c%c      %c%c   %c%c %c%c   %c%c  %c%c   %c%c         %c%c   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);//Sleep(200);
   gotoxy(x+5,8); cprintf("  %c%c%c%c%c%c%c   %c%c%c%c%c%c         %c%c%c%c%c%c%c   %c%c      %c%c   %c%c %c%c%c%c%c%c   %c%c    %c%c%c%c%c     %c%c   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);//Sleep(200);
   gotoxy(x+5,9); cprintf("  %c%c   %c%c   %c%c%c%c           %c%c        %c%c      %c%c   %c%c %c%c%c%c     %c%c        %c%c    %c%c   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);//Sleep(200);
   gotoxy(x+5,10);cprintf("  %c%c   %c%c   %c%c %c%c     %c%c   %c%c        %c%c%c%c%c%c%c %c%c   %c%c %c%c  %c%c   %c%c   %c    %c%c    %c%c   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);//Sleep(200);
   gotoxy(x+5,11);cprintf("  %c%c   %c%c   %c%c   %c%c   %c%c   %c%c        %c%c%c%c%c%c%c  %c%c%c%c%c  %c%c   %c%c %c%c%c%c   %c%c%c%c%c     %c%c   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);//Sleep(200);
   }
	gotoxy(20,14); textcolor(12);cprintf("  %c C  H  O  O  S  E     Y  O  U  R    B  E  A  U  T  Y    F  L  O  W  E  R  S %c",254,254);Sleep(1000);

}
void menu(){
	textcolor(12);
   gotoxy(43,5);cprintf("%c%c    %c%c  %c%c%c%c%c%c  %c%c    %c%c  %c%c   %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(43,6);cprintf("%c%c%c  %c%c%c  %c%c      %c%c%c   %c%c  %c%c   %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(43,7);cprintf("%c%c %c%c %c%c  %c%c%c%c%c%c  %c%c %c  %c%c  %c%c   %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(43,8);cprintf("%c%c    %c%c  %c%c      %c%c  %c %c%c  %c%c   %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(43,9);cprintf("%c%c    %c%c  %c%c%c%c%c%c  %c%c   %c%c%c   %c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(25,12);cprintf("==========================================================================");
   bingkai();
   pilihan1();
}
void profil(){
	textcolor(12);
   gotoxy(40,5);cprintf("%c%c%c%c%c%c  %c%c%c%c%c%c   %c%c%c%c%c  %c%c%c%c%c%c%c %c%c%c%c  %c%c     ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(40,6);cprintf("%c%c   %c%c %c%c   %c%c %c%c   %c%c %c%c       %c%c   %c%c     ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(40,7);cprintf("%c%c%c%c%c%c  %c%c%c%c%c%c  %c%c   %c%c %c%c%c%c%c%c%c  %c%c   %c%c     ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(40,8);cprintf("%c%c      %c%c %c%c   %c%c   %c%c %c%c       %c%c   %c%c     ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(40,9);cprintf("%c%c      %c%c   %c%c  %c%c%c%c%c  %c%c      %c%c%c%c  %c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(34,12);cprintf("========================================================");
   profil2();
}
void profil2(){
	textcolor(3);
   gotoxy(29,14);cprintf(" _________________________________________________________________");
   gotoxy(29,15);cprintf("|                                                                 |");
   gotoxy(29,16);cprintf("|                        A R. F L O R I S T                       |");
   gotoxy(29,17);cprintf("|                                                                 |");
   gotoxy(29,18);cprintf("|                                                                 |");
   gotoxy(29,19);cprintf("|  SEJAK  2018  AR.FLORIST  TELAH  DIKENAL  SEBAGAI  TOKO  BUNGA  |");
   gotoxy(29,20);cprintf("|  YANG MENYEDIAKAN  BERBAGAI  RANGKAIAN BUNGA SEGAR BERKUALITAS  |");
   gotoxy(29,21);cprintf("|  UNTUK   BUNGA   BUKET,   BUNGKA   TANGKAI,   BUNGA  KERANJANG  |");
   gotoxy(29,22);cprintf("|  DAN BERBAGAI BENTUK  RANGKAIAN  BUNGA  LAINNYA UNTUK BERBAGAI  |");
   gotoxy(29,23);cprintf("|  MOMEN  SPESIAL  ANDA   KHUSUSNYA  BAGI  ANDA  PENCINTA  BUNGA  |");
   gotoxy(29,24);cprintf("|  AYO TUNGGU APA LAGI? SEGERA  PILIH  DAN  PESAN BUNGA FAVORITMU |");
   gotoxy(29,25);cprintf("|  HANYA  DI  AR.FLORIST  %c %c                                     |",33,33);
   gotoxy(29,26);cprintf("|                                                                 |");
   gotoxy(29,27);cprintf("|  CONTACT US:                                                    |");
   gotoxy(29,28);cprintf("|  EMAIL: ar.florist@gmail.com                                    |");
   gotoxy(29,29);cprintf("|  INSTAGRAM: florist_ar                                          |");
   gotoxy(29,30);cprintf("|  WEBSITE: arflorist.co.id                                       |");
   gotoxy(29,31);cprintf("|                                                                 |");
   gotoxy(29,32);cprintf(" _________________________________________________________________|");
   copyright();
   while(true){
      	gotoxy(40,35);cprintf("Tekan 0 untuk kembali ke Menu ");gotoxy(69,35);gets(kembali);
   		if(strcmp(kembali,"0")==0){
      		clrscr();
            menu();
         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(69,35);cprintf("                         ");
      	}
      }
}


void tabel(){
	textcolor(14);
   for(int x=43;x<=73;x++){
   gotoxy(x,15);cprintf("%c",219);
   gotoxy(x,19);cprintf("%c",219);
   gotoxy(x,23);cprintf("%c",219);
   gotoxy(x,27);cprintf("%c",219);
   gotoxy(x,31);cprintf("%c",219);
	}

   for(int y=15;y<=31;y++){
   gotoxy(43,y);cprintf("%c",219);
   gotoxy(73,y);cprintf("%c",219);
   }
}
void loading(){
	for(int x=1;x<=30;x++){
   	textcolor(12);Sleep(50);
   	gotoxy(43+x,33);cprintf("%c",219);
      gotoxy(43 +x,34);cprintf("%c",219);
   }
}
void background1(){
	textbackground(5);
   	for(int x=2;x<=119;x++){
      	for(int y=2;y<=39;y++){
         	gotoxy(x,y);cprintf(" ");
         }
      }
}

void copyright(){
	textcolor(3);
   gotoxy(98,37);cprintf("Copyright 2019 by  ");
   gotoxy(98,38);cprintf("Anisa R. Nurhamidah");
}

void back(){
	while(true){
      	gotoxy(85,35);cprintf("Tekan 0 untuk kembali ke Menu ");gotoxy(116,35);gets(kembali);
   		if(strcmp(kembali,"0")==0){
      		clrscr();
            menu();
      	}
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
}
//==============================================================================
//==                             VALIDASI LOGIN                               ==
//==============================================================================
void login(){
	bingkai();
   background1();
   logo();
   bingkai_login();
   copyright();
   textcolor(3);
   while (true){
   	gotoxy(47,22);cprintf("username: ");
   	gotoxy(47,26);cprintf("password: ");
   	gotoxy(58,22);gets(nama);
   	gotoxy(58,26);gets(pass);

   if(strcmp(nama,"anisa")==0 && strcmp(pass,"22022000")==0){
   	textcolor(3);
   	gotoxy(55,30);cprintf("Login sukses %c",33);
      loading();
      clrscr();
      menu();
   }
   else{
   	textcolor(3);
   	gotoxy(49,30);cprintf("Login gagal %c Coba lagi",33);Sleep(1500);
      gotoxy(49,30);cprintf("                        ");
      gotoxy(58,22);cprintf("           ");
      gotoxy(58,26);cprintf("           ");
   }
  }
}
//==============================================================================
//==                               VALIDASI MENU                              ==
//==============================================================================
void pilihan1(){
tabel();
	textcolor(3);
   gotoxy(44,17);cprintf("1. Profil");
   gotoxy(44,21);cprintf("2. Pembelian");
   gotoxy(44,25);cprintf("3. Pemesanan dan Pengiriman");
   gotoxy(44,29);cprintf("4. Keluar" );
   gotoxy(44,33);cprintf("Masukkan pilihan: ");
    while (true){
    gotoxy(63,33);gets(pilih1);
   	if(strcmp (pilih1,"1")==0){
      	clrscr();
         bingkai();
        	profil();
         getch();
      }
      else if(strcmp (pilih1,"2")==0){
      	clrscr();
         pembelian();
         getch();
      }
      else if(strcmp (pilih1,"3")==0){
         clrscr();
         bingkai();
        	pesan();
         getch();
      }
      else if(strcmp (pilih1,"4")==0){
      textcolor(3);
      gotoxy(44,35);cprintf("Apakah anda yakin ingin keluar? (y/t):");
      	while (true){
      		gotoxy(84,35);gets(keluar);
      		if(strcmp(keluar,"Y")==0 || strcmp(keluar,"y")==0){
         		exit(0);
         		}
         	else if(strcmp(keluar,"T")==0 || strcmp(keluar,"t")==0){
            	clrscr();
               login();
            	}
         	else{
         		gotoxy(44,37);cprintf("Inputan tidak valid %c",33);Sleep(2000);
            	gotoxy(44,37);cprintf("                       ");
            	gotoxy(84,35);cprintf("                       ");
         	}
         }
      }
      else{
      textcolor(3);
      gotoxy(44,35);cprintf("Inputan tidak valid %c",33);Sleep(2000);
      gotoxy(44,35);cprintf("                       ");
      gotoxy(63,33);cprintf("                       ");
      }
   }
}
//==============================================================================
//                              PENGIRIMAN DAN PEMESANAN                      ==
//==============================================================================
void pesan(){
	textcolor(12);
	gotoxy(52,3);cprintf("P E M E S A N A N");
    bingkai_produk();
    pilih_pesan();
    transaksi2();
}
void kategori_pesan1(){
	textcolor(3);
   gotoxy(47,36);cprintf("Masukkan Pilihan: ");
   gotoxy(65,36);gets(pilihpesan2);
		if(strcmp(pilihpesan2,"1")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*200000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();
      }
      else if(strcmp(pilihpesan2,"2")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*300000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();
      }
      else if(strcmp(pilihpesan2,"3")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*350000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();
      }
      else if(strcmp(pilihpesan2,"4")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*400000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();
      }
      else if(strcmp(pilihpesan2,"5")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*450000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();
      }
      else if(strcmp(pilihpesan2,"6")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*250000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();
      }
      else{
         gotoxy(47,37);cprintf("Tidak tersedia %c",33);Sleep(700);
         gotoxy(47,37);cprintf("                    ");
         gotoxy(65,36);cprintf("              ");
         kategori_pesan1();
      }
}
void kategori_pesan2(){
	textcolor(3);
   gotoxy(47,36);cprintf("Masukkan Pilihan: ");
   gotoxy(65,36);gets(pilihpesan2);
		if(strcmp(pilihpesan2,"1")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*150000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();

      }
      else if(strcmp(pilihpesan2,"2")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*250000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();

      }
      else if(strcmp(pilihpesan2,"3")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*300000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
          pesan_lagi();

       }
      else if(strcmp(pilihpesan2,"4")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*300000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
          pesan_lagi();

      }
      else if(strcmp(pilihpesan2,"5")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*350000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
          pesan_lagi();

      }
      else if(strcmp(pilihpesan2,"6")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*150000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();

      }
      else{
         gotoxy(47,37);cprintf("Tidak tersedia %c",33);Sleep(700);
         gotoxy(47,37);cprintf("                    ");
         gotoxy(65,36);cprintf("              ");
         kategori_pesan2();
      }
}

void kategori_pesan3(){
	textcolor(3);
   gotoxy(47,36);cprintf("Masukkan Pilihan: ");
   gotoxy(65,36);gets(pilihpesan2);
		if(strcmp(pilihpesan2,"1")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*150000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();
      	}
      else if(strcmp(pilihpesan2,"2")==0){
         transaksi();
      	jumlah=atoi(kuantitas)*250000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();
      	}
      else if(strcmp(pilihpesan2,"3")==0){
         transaksi();
      	jumlah=atoi(kuantitas)*300000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();

      	}
      else if(strcmp(pilihpesan2,"4")==0){
         transaksi();
      	jumlah=atoi(kuantitas)*350000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();
      	}
      else if(strcmp(pilihpesan2,"5")==0){
         transaksi();
      	jumlah=atoi(kuantitas)*400000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
        	pesan_lagi();

      	}
      else if(strcmp(pilihpesan2,"6")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*150000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
        	pesan_lagi();

      }
      else{
         gotoxy(47,37);cprintf("Tidak tersedia %c",33);Sleep(800);
         gotoxy(47,37);cprintf("                    ");
         gotoxy(65,36);cprintf("              ");
         kategori_pesan3();
      }
}

void kategori_pesan4(){
	textcolor(3);
   gotoxy(47,36);cprintf("Masukkan Pilihan: ");
   gotoxy(65,36);gets(pilihpesan2);
		if(strcmp(pilihpesan2,"1")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*200000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
        	pesan_lagi();
      }
      else if(strcmp(pilihpesan2,"2")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*300000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
        	pesan_lagi();
      }
      else if(strcmp(pilihpesan2,"3")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*300000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
        	pesan_lagi();
      }
      else if(strcmp(pilihpesan2,"4")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*300000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
      	pesan_lagi();
      }
      else if(strcmp(pilihpesan2,"5")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*450000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();
      }
      else if(strcmp(pilihpesan2,"6")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*250000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         pesan_lagi();
         }
      else{
         gotoxy(47,37);cprintf("Tidak tersedia %c",33);Sleep(800);
         gotoxy(47,37);cprintf("                    ");
         gotoxy(65,36);cprintf("              ");
         kategori_pesan4();
      }
}
void transaksi2(){
	pesan_lagi();
}
void pilih_pesan(){
	textcolor(3);
   gotoxy(7,28);cprintf("Pilih Kategori: ");
   gotoxy(24,28);gets(pilihpesan);
	  while(true){
     	 	if(strcmp (pilihpesan,"1")==0){
         bunga();
      	tabel_bunga();
         bunga_buket();
         kategori_pesan1();
         getch();
      }
      else if(strcmp (pilihpesan,"2")==0){
         bunga();
      	tabel_bunga();
         bunga_kotak();
         kategori_pesan2();
			getch();
      }
      else if(strcmp (pilihpesan,"3")==0){
         bunga();
      	tabel_bunga();
         bunga_meja();
         kategori_pesan3();
			getch();
      }
      else if(strcmp (pilihpesan,"4")==0){
         bunga();
      	tabel_bunga();
         bunga_keranjang();
         kategori_pesan4();
			getch();
      }
      else{
      	textcolor(3);
      	gotoxy(7,30);cprintf("Tidak tersedia %c",33);Sleep(700);
         gotoxy(24,28);cprintf("                ");
         gotoxy(7,30);cprintf("                 ");
         pilihan2();
     }
   }
}

void pesan_lagi(){
   textcolor(3);
   gotoxy(84,17);cprintf("Apakah ingin beli lagi?");
   gotoxy(84,18);cprintf("(y/t): ");
   while (true){
      gotoxy(92,18);gets(beli_lagii);
      	if(strcmp(beli_lagii,"Y")==0 || strcmp(beli_lagii,"y")==0){
         	clrscr();
            pesan();
         	}
         else if(strcmp(beli_lagii,"T")==0 || strcmp(beli_lagii,"t")==0){
         	clrscr();
            form_pemesanan();
            }
         else{
         	gotoxy(84,19);cprintf("Inputan tidak valid %c",33);Sleep(1500);
            gotoxy(84,19);cprintf("                      ");
            gotoxy(92,18);cprintf("                    ");
         	}
         }
}

//==============================================================================
//==                                 FORMULIR                                 ==
//==============================================================================
void form_pemesanan(){
	bingkai();
   copyright();
   textcolor(3);
   gotoxy(43,5);cprintf("F O R M U L I R  P E M E S A N A N");
	textcolor(14);
   for(int x=35;x<=85;x++){
   gotoxy(x,7);cprintf("%c",219);
   gotoxy(x,11);cprintf("%c",219);
   gotoxy(x,15);cprintf("%c",219);
   gotoxy(x,19);cprintf("%c",219);
   }
   for(int y=7;y<=19;y++){
   gotoxy(35,y);cprintf("%c",219);
   gotoxy(85,y);cprintf("%c",219);
   }
   name();
   bingkai_struk();
   struk();
}
//=====================================NAMA PEMESAN=============================
 void name(){
   	while(true){
         textcolor(3);
   		gotoxy(37,9);cprintf ("Nama         : ");gotoxy(53,9);gets(nama_pemesan);
   				if(valhuruf(nama_pemesan)==0)break;
      			else if(strlen(nama_pemesan)<2){
      				textcolor(3);
      				gotoxy(37,29);cprintf("Inputan minimal 2 digit %c",33);Sleep(1500);
      				gotoxy(37,29);cprintf("                          ");
      				gotoxy(53,9);cprintf("                          ");
            	}
            	else if(strlen(nama_pemesan)>30){
      				textcolor(3);
      				gotoxy(37,29);cprintf("Inputan maksimal 20 digit %c",33);Sleep(1500);
      				gotoxy(37,29);cprintf("                            ");
      				gotoxy(53,9);cprintf("                          ");
            	}
            	else{
            		textcolor(3);
      				gotoxy(37,29);cprintf("Inputan tidak valid %c       ",33);Sleep(1500);
      				gotoxy(37,29);cprintf("                            ");
      				gotoxy(53,9);cprintf("                             ");
               	name();
            	}
      	}alamat();
 }
//=============================VALIDASI ALAMAT===========================
void alamat(){
      	textcolor(3);
   		gotoxy(37,13);cprintf("Alamat       : Jl. ");gotoxy(56,13);gets(alamat_pemesan);
      if(strcmp(alamat_pemesan,"")==0){
         		gotoxy(37,29);cprintf("Alamat harus diisi dengan benar %c",33);Sleep(1500);
         		gotoxy(37,29);cprintf("                                   ");
         		gotoxy(53,13);cprintf("                           ");
      }else{
      	for(int a=0;a<strlen(alamat_pemesan);a++){
            if(alamat_pemesan[strlen(alamat_pemesan)-1]==' '){
               gotoxy(37,29);cprintf("Alamat harus diisi dengan benar %c",33);Sleep(1500);
         		gotoxy(37,29);cprintf("                                   ");
         		gotoxy(56,13);cprintf("                           ");
            }
      		else if(alamat_pemesan[0]!=' '|| (!(alamat_pemesan[0]>='0' && alamat_pemesan[0]<='9')) || alamat_pemesan[a]>='a' && alamat_pemesan[a]<='z' || alamat_pemesan[a]>='A' && alamat_pemesan[a]<='Z' || alamat_pemesan[a]>='0' && alamat_pemesan[a]<='9'|| alamat_pemesan[a]==' '){
         		continue;
            }
         	else{
      			gotoxy(37,29);cprintf("Alamat harus diisi dengan benar %c",33);Sleep(1500);
         		gotoxy(37,29);cprintf("                                   ");
         		gotoxy(53,13);cprintf("                           ");
            	alamat();
      		}
         }
      }telepon();
}
//================================VALIDASI NO.HP================================
void telepon(){
      textcolor(3);
      gotoxy(37,17);cprintf("No.HP        : ");gotoxy(53,17);gets(no_hp);
         for(int a=0;a<strlen(no_hp);a++){
   			if(no_hp[a]>='0' && no_hp[a]<='9' && no_hp[0]=='0' && no_hp[1]=='8' && (no_hp[2]=='3' || no_hp[2]=='1'|| no_hp[2]=='5' || no_hp[2]=='7' || no_hp[2]=='9')){
            clrscr();
      		struk();
            }
            else{
            	gotoxy(37,29);cprintf("Inputan tidak valid %c",33);Sleep(1500);
      			gotoxy(37,29);cprintf("                      ");
      			gotoxy(53,17);cprintf("                      ");
            }telepon();
         }
}
//========================================STRUK=================================
void bingkai_struk(){
	clrscr();
   bingkai();
   copyright();
	textcolor(14);
   gotoxy(34,9);cprintf("                       STRUK PEMESANAN                    ");
   gotoxy(34,11);cprintf(" ________________________________________________________ ");
   gotoxy(34,12);cprintf("|                                                        |");
   gotoxy(34,13);cprintf("|Nama       :                                            |");
   gotoxy(34,14);cprintf("|Alamat     :                                            |");
   gotoxy(34,15);cprintf("|No.HP      :                                            |");
	gotoxy(34,16);cprintf("|                                                        |");
   gotoxy(34,17);cprintf("|Total bayar:                                            |");
   gotoxy(34,18);cprintf("|Note       : Mohon transfer ke rekening AR.Florist      |");
   gotoxy(34,19);cprintf("|             No.rekening 0089825253100                  |");
   gotoxy(34,20);cprintf("|                                                        |");
   gotoxy(34,21);cprintf("|                                                        |");
   gotoxy(34,22);cprintf("|                                                        |");
   gotoxy(34,23);cprintf("| Pesanan Anda akan sampai setelah Anda mentransfer uang |");
   gotoxy(34,24);cprintf("|                                                        |");
   gotoxy(34,25);cprintf(" ________________________________________________________ ");
   gotoxy(51,27);cprintf("T E R I M A K A S I H%c",33);
}

void struk(){
	clrscr();
   bingkai();
   bingkai_struk();
   strupr(nama_pemesan);strupr(alamat_pemesan);
   	gotoxy(48,13);cprintf("%s",nama_pemesan);
      gotoxy(48,14);cprintf("%s",alamat_pemesan);
   	gotoxy(48,15);cprintf("%s",no_hp);
   	gotoxy(48,17);cprintf("Rp.%.0f",jumlah);
      while(true){
      	gotoxy(40,32);cprintf("Tekan 0 untuk kembali ke Menu 99 untuk Keluar ");gotoxy(86,32);gets(kembali);
   		if(strcmp(kembali,"0")==0){
      		clrscr();
            menu();
      	}
         else if(strcmp(kembali,"99")==0){
      		exit(0);
         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
}

//==============================================================================
//==                              VALIDASI HURUF                              ==
//==============================================================================
int valhuruf(char b[]){
   if(strcmp(b,"")==0){
   	return 1;
   }
	int cek=0;
		for(int x=0;b[x]!=NULL;x++){
			if(b[0]==' ' || b[strlen(b)-1]==' '){
   			cek+=1;
		   }else if(b[x]>='a' && b[x]<='z' || b[x]>='A' && b[x]<='Z'||  b[x]==' ' && b[x+1]!=' ' && b[0]!=NULL){
   			cek+=0;
			}else{
         	cek+=1;
         }
		}return cek;
}

//==============================================================================
//==                              VALIDASI ANGKA                              ==
//==============================================================================
int valangka(char a[]){
int cek;
for(int x=0;x<strlen(a);x++){
	if(a[x]>=48 && a[x]<=56){
   	cek=0;
   }
   else{
   	cek=1;
   }
}return cek;
}

//==============================================================================
//==                                PEMBELIAN                                 ==
//==============================================================================


void pembelian(){
   textcolor(12);
	gotoxy(48,3);cprintf("P  E  M  B  E  L  I  A  N");
	bingkai_produk();
	kategori();
   tabel_kategori();
   pilihan2();
}

void pilihan2(){
	textcolor(3);
   gotoxy(7,28);cprintf("Pilih Kategori: ");
   gotoxy(24,28);gets(pilih2);
   while (true){
   	int pilihh=atoi(pilih2);
   	if(strcmp (pilih2,"1")==0){
         bunga();
      	tabel_bunga();
         bunga_buket();
         kategori1();
         pembayaran();
         getch();
      }
      else if(strcmp (pilih2,"2")==0){
         bunga();
      	tabel_bunga();
         bunga_kotak();
         kategori2();
         pembayaran();
			getch();
      }
      else if(strcmp (pilih2,"3")==0){
         bunga();
      	tabel_bunga();
         bunga_meja();
         kategori3();
         pembayaran();
			getch();
      }
      else if(strcmp (pilih2,"4")==0){
         bunga();
      	tabel_bunga();
         bunga_keranjang();
         kategori4();
         pembayaran();
			getch();
      }
      else if(pilihh>4){
      	textcolor(3);
         gotoxy(7,30);cprintf("Tidak Tersedia %c",33);Sleep(800);
         gotoxy(24,28);cprintf("                ");
         gotoxy(7,30);cprintf("                 ");
         pilihan2();
      }
      else{
         textcolor(3);
      	gotoxy(7,30);cprintf("Inputan tidak valid %c",33);Sleep(800);
         gotoxy(24,28);cprintf("                ");
         gotoxy(7,30);cprintf("                     ");
         pilihan2();
      }
   }
}

void kategori1(){
	textcolor(3);
   gotoxy(47,36);cprintf("Masukkan Pilihan: ");
   gotoxy(65,36);gets(pilih3);
		if(strcmp(pilih3,"1")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*200000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(strcmp(pilih3,"2")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*300000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(strcmp(pilih3,"3")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*350000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(strcmp(pilih3,"4")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*400000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(strcmp(pilih3,"5")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*450000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(strcmp(pilih3,"6")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*250000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(pilihh>6){
         gotoxy(47,37);cprintf("Tidak tersedia %c",33);Sleep(700);
         gotoxy(47,37);cprintf("                    ");
         gotoxy(65,36);cprintf("              ");
         kategori1();
      }
      else{
         gotoxy(47,37);cprintf("Inputan tidak valid %c",33);Sleep(700);
         gotoxy(47,37);cprintf("                      ");
         gotoxy(65,36);cprintf("              ");
         kategori1();
      }
}
void kategori2(){
	textcolor(3);
   gotoxy(47,36);cprintf("Masukkan Pilihan: ");
   gotoxy(65,36);gets(pilih3);
		if(strcmp(pilih3,"1")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*150000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(strcmp(pilih3,"2")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*250000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(strcmp(pilih3,"3")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*300000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(strcmp(pilih3,"4")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*300000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(strcmp(pilih3,"5")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*350000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(strcmp(pilih3,"6")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*150000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(pilihh>6){
         gotoxy(47,37);cprintf("Tidak tersedia %c",33);Sleep(700);
         gotoxy(47,37);cprintf("                    ");
         gotoxy(65,36);cprintf("              ");
         kategori1();
      }
      else{
         gotoxy(47,37);cprintf("Inputan tidak valid %c",33);Sleep(700);
         gotoxy(47,37);cprintf("                    ");
         gotoxy(65,36);cprintf("              ");
         kategori2();
      }
}

void kategori3(){
	textcolor(3);
   gotoxy(47,36);cprintf("Masukkan Pilihan: ");
   gotoxy(65,36);gets(pilih3);
		if(strcmp(pilih3,"1")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*150000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      	}
      else if(strcmp(pilih3,"2")==0){
         transaksi();
      	jumlah=atoi(kuantitas)*250000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      	}
      else if(strcmp(pilih3,"3")==0){
         transaksi();
      	jumlah=atoi(kuantitas)*300000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      	}
      else if(strcmp(pilih3,"4")==0){
         transaksi();
      	jumlah=atoi(kuantitas)*350000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      	}
      else if(strcmp(pilih3,"5")==0){
         transaksi();
      	jumlah=atoi(kuantitas)*400000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      	}
      else if(strcmp(pilih3,"6")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*150000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(pilihh>6){
         gotoxy(47,37);cprintf("Tidak tersedia %c",33);Sleep(700);
         gotoxy(47,37);cprintf("                    ");
         gotoxy(65,36);cprintf("              ");
         kategori1();
      }
      else{
         gotoxy(47,37);cprintf("Inputan tidak valid %c",33);Sleep(800);
         gotoxy(47,37);cprintf("                      ");
         gotoxy(65,36);cprintf("              ");
         kategori3();
      }
}

void kategori4(){
	textcolor(3);
   gotoxy(47,36);cprintf("Masukkan Pilihan: ");
   gotoxy(65,36);gets(pilih3);
		if(strcmp(pilih3,"1")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*200000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(strcmp(pilih3,"2")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*300000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(strcmp(pilih3,"3")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*300000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(strcmp(pilih3,"4")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*300000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();}
      else if(strcmp(pilih3,"5")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*450000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
      }
      else if(strcmp(pilih3,"6")==0){
      	transaksi();
      	jumlah=atoi(kuantitas)*250000;
        	gotoxy(83,11);cprintf("Total        : Rp %0.f",jumlah);
         beli_lagi();
         pembayaran();
         }
      else if(pilihh>6){
         gotoxy(47,37);cprintf("Tidak tersedia %c",33);Sleep(700);
         gotoxy(47,37);cprintf("                    ");
         gotoxy(65,36);cprintf("              ");
         kategori1();
      }
      else{
         gotoxy(47,37);cprintf("Inputan tidak valid %c",33);Sleep(800);
         gotoxy(47,37);cprintf("                      ");
         gotoxy(65,36);cprintf("              ");
         kategori4();
      }
}
void transaksi(){
	textcolor(12);
   gotoxy(92,7);cprintf("T R A N S A K S I");
   gotoxy(92,8);cprintf("=================");
   textcolor(3);
   gotoxy(83,10);cprintf("Kuantitas    : ");

   int loop=1;
   int indexkuant=0;
   int x=100;
   while(loop!=0){
      gotoxy(x,10);kuantitas[indexkuant]=getch();
   	int ubah=kuantitas[indexkuant];
      if(indexkuant==0&&(ubah==13||ubah==8)){
         textcolor(3);
   		gotoxy(83,12);cprintf("Tidak Valid%c",33);Sleep(1500);
      	gotoxy(83,12);cprintf("             ");
      	gotoxy(100,10);cprintf("   ");
      }else if((indexkuant>0&&indexkuant<=2)&&ubah==13){
      	kuantitas[indexkuant]=NULL;
         loop=0;
      }else if(indexkuant==2&&ubah!=13){
      	indexkuant--;textcolor(0);
         gotoxy(x,10);cprintf("%c",219);
         x--;
         gotoxy(x,10);cprintf("%c",219);
      }else if((indexkuant>0&&indexkuant<=2)&&ubah==8){
      	indexkuant--;
         textcolor(0);
         gotoxy(x,10);cprintf("%c",219);
         x--;
         gotoxy(x,10);cprintf("%c",219);
      }else if(indexkuant==2&&(ubah!=13||ubah!=8)){
      	indexkuant--;textcolor(0);
         gotoxy(x,10);cprintf("%c",219);
         x--;
         gotoxy(x,10);cprintf("%c",219);
      }else if((indexkuant>=0&&indexkuant<2)&&(kuantitas[indexkuant]>='0'&&kuantitas[indexkuant]<='9')){
         textcolor(3);
      	gotoxy(x,10);cprintf("%c",kuantitas[indexkuant]);
         x++;indexkuant++;
      }else{
      textcolor(3);
        	gotoxy(83,12);cprintf("Inputan harus berupa angka%c",33);Sleep(1500);
      	gotoxy(101,10);cprintf("       ");
      	gotoxy(83,12);cprintf("                             ");
      }
   }

}
void bingkai_produk(){
   textcolor(14);
	for(int x=1;x<=120;x++){
   gotoxy(x,1);cprintf("%c",219);
	gotoxy(x,5);cprintf("%c",219);
   gotoxy(x,40);cprintf("%c",219);

   }
   textcolor(14);
   for(int x=1;x<=40;x++){
   gotoxy(1,x);cprintf("%c",219);
   gotoxy(120,x);cprintf("%c",219);
   }
   for(int x=5;x<=40;x++){
   gotoxy(40,x);cprintf("%c",219);
   gotoxy(80,x);cprintf("%c",219);
   }
   tabel_kategori();
   kategori();
}

void tabel_kategori(){
	textcolor(14);
   for(int x=5;x<=35;x++){
      gotoxy(x,10);cprintf("%c",219);
      gotoxy(x,14);cprintf("%c",219);
      gotoxy(x,18);cprintf("%c",219);
      gotoxy(x,22);cprintf("%c",219);
      gotoxy(x,26);cprintf("%c",219);
   }
   textcolor(14);
   for(int y=10;y<=26;y++){
   gotoxy(5,y);cprintf("%c",219);
   gotoxy(35,y);cprintf("%c",219);
   }
}

void kategori(){
	textcolor(12);
   gotoxy(9,7);cprintf("K  A  T  E  G  O  R  I");
   gotoxy(9,8);cprintf("======================");
	textcolor(3);
   gotoxy(9,12);cprintf("1. Hand Bouqet");
   gotoxy(9,16);cprintf("2. Bunga Kotak");
   gotoxy(9,20);cprintf("3. Bunga Meja");
   gotoxy(9,24);cprintf("4. Standing Flowers");
}

void tabel_bunga(){
	for(int x=45;x<=75;x++){
   textcolor(14);
   gotoxy(x,10);cprintf("%c",219);
   gotoxy(x,14);cprintf("%c",219);
   gotoxy(x,18);cprintf("%c",219);
   gotoxy(x,22);cprintf("%c",219);
   gotoxy(x,26);cprintf("%c",219);
   gotoxy(x,30);cprintf("%c",219);
   gotoxy(x,34);cprintf("%c",219);
   }
   for(int y=10;y<=34;y++){
   gotoxy(45,y);cprintf("%c",219);
   gotoxy(75,y);cprintf("%c",219);
   }
}
void bunga(){
	textcolor(12);
   gotoxy(53,7);cprintf("B   U   N   G   A");
   gotoxy(53,8);cprintf("=================");
}

void daftar_bunga(){
	textcolor(3);
   gotoxy(47,12);cprintf("1. Carnations ");
   gotoxy(47,16);cprintf("2. Daisy      ");
   gotoxy(47,20);cprintf("3. Aster      ");
   gotoxy(47,24);cprintf("4. Orchid     ");
   gotoxy(47,28);cprintf("5. Roses      ");
   gotoxy(47,32);cprintf("6. Sunflowers ");
}
void bunga_buket(){
	textcolor(3);
   gotoxy(47,12);cprintf("1. Carnations  Rp.200.000");
   gotoxy(47,16);cprintf("2. Daisy       Rp.300.000");
   gotoxy(47,20);cprintf("3. Edelweiss   Rp.350.000");
   gotoxy(47,24);cprintf("4. Orchid      Rp.400.000");
   gotoxy(47,28);cprintf("5. Roses       Rp.450.000");
   gotoxy(47,32);cprintf("6. Sunflowers  Rp.250.000");
}
void bunga_kotak(){
	textcolor(3);
   gotoxy(47,12);cprintf("1. Carnations  Rp.150.000");
   gotoxy(47,16);cprintf("2. Daisy       Rp.250.000");
   gotoxy(47,20);cprintf("3. Edelweiss   Rp.300.000");
   gotoxy(47,24);cprintf("4. Orchid      Rp.300.000");
   gotoxy(47,28);cprintf("5. Roses       Rp.350.000");
   gotoxy(47,32);cprintf("6. Sunflowers  Rp.150.000");
}
void bunga_meja(){
	textcolor(3);
 	gotoxy(47,12);cprintf("1. Carnations  Rp.150.000");
   gotoxy(47,16);cprintf("2. Daisy       Rp.250.000");
   gotoxy(47,20);cprintf("3. Edelweiss   Rp.300.000");
   gotoxy(47,24);cprintf("4. Orchid      Rp.350.000");
   gotoxy(47,28);cprintf("5. Roses       Rp.400.000");
   gotoxy(47,32);cprintf("6. Sunflowers  Rp.150.000");
}
void bunga_keranjang(){
	textcolor(3);
 	gotoxy(47,12);cprintf("1. Carnations  Rp.200.000");
   gotoxy(47,16);cprintf("2. Daisy       Rp.300.000");
   gotoxy(47,20);cprintf("3. Edelweiss   Rp.350.000");
   gotoxy(47,24);cprintf("4. Orchid      Rp.400.000");
   gotoxy(47,28);cprintf("5. Roses       Rp.450.000");
   gotoxy(47,32);cprintf("6. Sunflowers  Rp.250.000");
}

//==============================================================================
//==                                PEMBAYARAN                                ==
//==============================================================================

void pembayaran(){
	textcolor(3);
   gotoxy(83,14);cprintf("Masukkan Uang: Rp ");
   int loop=1;
   int indexuang=0;
   int x=101;
   while(loop!=0){
      gotoxy(x,14);uang[indexuang]=getch();
   	int ubah=uang[indexuang];
      if(indexuang==0&&(ubah==13||ubah==8)){
   		gotoxy(83,15);cprintf("Tidak Valid%c",33);Sleep(1500);
      	gotoxy(101,14);cprintf("         ");
      	gotoxy(83,15);cprintf("            ");
      }else if((indexuang>0&&indexuang<=8)&&ubah==13){
      	uang[indexuang]=NULL;
         loop=0;
      }else if((indexuang>0&&indexuang<=8)&&ubah==8){
      	indexuang--;
         x--;
      }else if(indexuang==8&&(ubah!=13||ubah!=8)){
      	indexuang--;
         gotoxy(x,14);printf("%c",219);
         x--;
      }else if((indexuang>=0&&indexuang<8)&&(ubah>='0'&&ubah<='9')){
      	gotoxy(x,14);cprintf("%c",uang[indexuang]);
         x++;
         indexuang++;
      }else{
        	gotoxy(83,15);cprintf("Inputan harus berupa angka%c",33);Sleep(1500);
      	gotoxy(101,14);cprintf("         ");
      	gotoxy(83,15);cprintf("                             ");
         pembayaran();
      }
   }

   bayar=atof(uang);
   if(bayar==total){
   	gotoxy(92,21);cprintf("      ");
   	gotoxy(83,16);cprintf("Uang Anda pas");
      gotoxy(89,20);cprintf("T E R I M A K A S I H%c",33);
      back();
   }
   else if(bayar>total){
      gotoxy(92,21);cprintf("      ");
      gotoxy(83,16);cprintf("Kembalian    : Rp %.0f",bayar-total);
   	gotoxy(89,20);cprintf("T E R I M A K A S I H%c",33);
      back();
   }
   else if(bayar<total){
   	//gotoxy(83,13);cprintf("                               ");
   	gotoxy(83,16);cprintf("Uang anda kurang Rp %.0f",total-bayar);Sleep(1500);
      gotoxy(101,14);cprintf("                  ");
      gotoxy(83,16);cprintf("                                 ");
      pembayaran();
   }
}

//==============================================================================
//==                                  BELI LAGI                               ==
//==============================================================================
void beli_lagi(){
   textcolor(3);
   total+=jumlah;
   gotoxy(84,20);cprintf("Apakah Anda ingin beli lagi?");
   gotoxy(84,21);cprintf("(y/t): ");
   while (true){
      gotoxy(92,21);gets(beli_lagii);
      	if(strcmp(beli_lagii,"Y")==0 || strcmp(beli_lagii,"y")==0){
         	clrscr();
            pembelian();
         	}
         else if(strcmp(beli_lagii,"T")==0 || strcmp(beli_lagii,"t")==0){
            gotoxy(84,20);cprintf("                            ");
            gotoxy(84,21);cprintf("                                                                                                                                                                                                                                                                                                                                                                                                  