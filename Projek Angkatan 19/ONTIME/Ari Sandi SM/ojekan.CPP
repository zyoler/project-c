////////////////////////////////////////////////////////////////////////////////
// . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  //
// . . . . . . . . . Nama	: 	Ari Sandi Shefa Maldini . . . . . . . . . . . . //
//	. . . . . . . . . Prodi	:  D-3 Manajemen Informatika . . . . . . . . . . . //
// . . . . . . . . . . . . . PUB Angkatan '19' . . . . . . . . . . . . . . .  //
//	. . . . . . . . . . . . . . . "NEOPHYTE" . . . . . . . . . . . . . . . . . //
// . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  //
////////////////////////////////////////////////////////////////////////////////
// . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  //
// . . . . . . . . . . . . . . . . Projekan . . . . . . . . . . . . . . . . . //
//	. . . . . . .  Ujian Akhir Pelatihan Logika & Algoritma . . . . . . . . .  //
// . . . . . . . . . . . . . . "AC Milan Store" . . . . . . . . . . . . . . . //
// . . . . . . . Widht	:	140 . . . . . . . . . Height	:	44 . . . . . . .  //
// . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  //
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<windows.h>

//============================================================================//
//PROTOTYPE
//============================================================================//
void profil();                                  void tentangaplikasi();
int valalamat(char y[100]);                     int valhuruf(char y[100]);
void ac();                                      int valnope(char n[20]);
void profildiri();                              void milan();
void sejarah();                                 void trophy();
void tampilanopening();									void logo();
void before();												void tampilanpilih();
void tampilantransaksi();								void loading();
void bingkaidefault();									void bingkaicustom();
void transisi();											void transisi2();
void login();												void menuadmin();
void tambahbarang();										void jerseytambah();
void jerseytambahb();									void jerseytambahp();
void fashiontambah();									void fashiontambahb();
void fashiontambahp();									void accetambah();
void accetambahb();										void accetambahp();
void tambahstok();										void tambahstokjersey();
void tambahstokjerseyb();								void tambahstokjerseyp();
void tambahstokfashionb();								void tambahstokfashionp();
void tambahstokfashion();								void ubahharga();
void ubahhargajersey();									void ubahhargajerseyb();
void ubahhargajerseyp();								void ubahhargafashion();
void ubahhargafashionb();								void ubahhargafashionp();
void ubahhargaacce();									void ubahhargaacceb();
void ubahhargaaccep();									void tambahstokacce();
void tambahstokacceb();									void tambahstokaccep();
void menucustomer();										void hitungpendapatan();
void pembelian();											void jersey();
void fashion();											void acce();
void nota();												void pemesanan();
void pesananjersey();									void pesananfashion();
void pesananacce();										void kredit();
void faktur();												void pengiriman();
int transisi1(int a);									int persegi(int a,int b,int c,int d);
int valbarang(char y[100]);                     int valharga(char y[100]);
//============================================================================//
//VARIABLE GLOBAL
//============================================================================//
char user[50];																					char passs[50];
char bayar[100];
char nope[100];
char alamat[100];
char desa[100];
char kecamatan[100];
char kota[100];
char provinsi[100];
char nama[100];																				char kitsbaru[100][100];
char kitsbarup[100][100];																	char hargaubah[100][100];
char fashionbaru[100][100];																char fashionbarup[100][100];
char accebarup[100][100];																	char accebaru[100][100];
char kitsnota[100][100];																	char barang[100];
char price[100];                                									int hargajerseyb[100]={600000,500000,450000,400000};
char code[100][100]={"1A","1B","1C","1D","1E","1F","1G","1H","1I","1J","2A","2B","2C","2D","2E","2F","2G","2H","2I","2J","3A","3B","3C","3D","3E","3F","3G","3H","3I","3J"};
int hargajerseyp[100]={550000,450000,400000,350000};								int hargafashionb[100]={120000,200000,100000,150000};
int hargafashionp[100]={110000,190000,90000,140000};								int hargaacceb[100]={50000,200000,100000,90000};
int hargaaccep[100]={40000,190000,90000,80000};										char acceb[100][100]={"Face Masks","Helmets","Caps","Bags"};
char kits[100][100]={"Home Kits","Away Kits","Third Kits","GK Kits"};		char fashionb[100][100]={"T-Shirt","Jackets","Pants","Underwear"};
int stok[100]={100,100,100,100,100,100,100,100,100,100};							int stokfashionb[100]={100,100,100,100,100,100,100,100,100,100};
int stokacceb[100]={100,100,100,100,100,100,100,100,100,100};					int stokjerseyp[100]={500,500,500,500,500,500,500,500,500,500};
int stokfashionp[100]={500,500,500,500,500,500,500,500,500,500};				int stokaccep[100]={500,500,500,500,500,500,500,500,500,500};
int hargabaru[100];																			int hargabarup[100];
int hargabarufashion[100];																	int hargabarufashionp[100];
int hargabaruacce[100];																		int hargabaruaccep[100];
int biayabeban[100]={10000000,5000000,15000000,50000000,50000000};			char beban[100][100]={"Beban Gaji","Beban Iklan","Beban Perlengkapan","Beban Sewa","Beban Biaya Manufaktur"};
int harganota[100];													int stoknota[100];
int totalnota[100];													int kembalian;
int uang;																int cek=0;
int ttl;																	int s1;
int total;																int penjualan=0;
int totalbeban;														int barujersey=0;
int barujerseyp=0;													int barufashion=0;
int barufashionp=0;													int baruacce=0;
int baruaccep=0;														int plusstok=0;
int hargaganti=0;														int saldofaktur;
float totalbunga;														float ab;
float angsuranpokok;													float unga;
char waktu[50];														int jangka;
char a;
int LR;                                                  int x=0;
//============================================================================//
//											  KODINGAN                                   //
//============================================================================//

//================================[TAMPILAN]==================================//
void loading(){
	for(int x=1; x<=100; x++){
   gotoxy(69,39);textcolor(4);cprintf("%d%",x);Sleep(25);
   gotoxy(21+x,40);textcolor(4);cprintf("%c",178);Sleep(25);
   }
}

//=================================[LOGO]=====================================//
void logo(){
	gotoxy(6,3);textbackground(0);textcolor(4);cprintf("   @@@@   ");
	gotoxy(6,4);textbackground(0);textcolor(4);cprintf("  @@@ @@  ");
	gotoxy(6,5);textbackground(0);textcolor(4);cprintf(" @@ @ @@@ ");
	gotoxy(6,6);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
   gotoxy(6,7);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
	gotoxy(6,8);textbackground(0);textcolor(4);cprintf("@ @ @    @");
	gotoxy(6,9);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
	gotoxy(6,10);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
	gotoxy(6,11);textbackground(0);textcolor(4);cprintf(" @@ @ @@@ ");
	gotoxy(6,12);textbackground(0);textcolor(4);cprintf("  @@@ @@  ");
	gotoxy(6,13);textbackground(0);textcolor(4);cprintf("   @@@@   ");

	gotoxy(125,3);textbackground(0);textcolor(4);cprintf("   @@@@   ");
	gotoxy(125,4);textbackground(0);textcolor(4);cprintf("  @@@ @@  ");
	gotoxy(125,5);textbackground(0);textcolor(4);cprintf(" @@ @ @@@ ");
	gotoxy(125,6);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
	gotoxy(125,7);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
	gotoxy(125,8);textbackground(0);textcolor(4);cprintf("@ @ @    @");
	gotoxy(125,9);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
	gotoxy(125,10);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
	gotoxy(125,11);textbackground(0);textcolor(4);cprintf(" @@ @ @@@ ");
	gotoxy(125,12);textbackground(0);textcolor(4);cprintf("  @@@ @@  ");
	gotoxy(125,13);textbackground(0);textcolor(4);cprintf("   @@@@   ");

	textbackground(0);textcolor(4);gotoxy(41,5);cprintf(" %c%c%c%c%c%c%c %c%c%c%c%c%c%c   %c%c%c%c    %c%c%c%c %c%c %c%c      %c%c%c%c%c%c%c %c%c%c%c    %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(2);
	textbackground(0);textcolor(4);gotoxy(41,6);cprintf(" %c%c   %c%c %c%c        %c%c %c%c  %c%c %c%c %c%c %c%c      %c%c   %c%c %c%c%c%c%c   %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	textbackground(0);textcolor(4);gotoxy(41,7);cprintf(" %c%c   %c%c %c%c        %c%c  %c%c%c%c  %c%c %c%c %c%c      %c%c   %c%c %c%c %c%c%c  %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	textbackground(0);textcolor(4);gotoxy(41,8);cprintf(" %c%c%c%c%c%c%c %c%c        %c%c   %c%c   %c%c %c%c %c%c      %c%c%c%c%c%c%c %c%c  %c%c%c %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	textbackground(0);textcolor(4);gotoxy(41,9);cprintf(" %c%c%c%c%c%c%c %c%c        %c%c        %c%c %c%c %c%c      %c%c%c%c%c%c%c %c%c   %c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	textbackground(0);textcolor(4);gotoxy(41,10);cprintf(" %c%c   %c%c %c%c%c%c%c%c%c   %c%c        %c%c %c%c %c%c%c%c%c%c%c %c%c   %c%c %c%c    %c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
}

//================================[OPENING]===================================//
void tampilanopening(){
	for(int x=1; x<=4; x++){
		for(int y=1; y<=40; y++){
			textcolor(x);gotoxy(1+y,4);cprintf(" %c%c%c%c%c%c%c %c%c%c%c%c%c%c   %c%c%c%c    %c%c%c%c %c%c %c%c      %c%c%c%c%c%c%c %c%c%c%c    %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(2);
			textcolor(x);gotoxy(1+y,5);cprintf(" %c%c   %c%c %c%c        %c%c %c%c  %c%c %c%c %c%c %c%c      %c%c   %c%c %c%c%c%c%c   %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			textcolor(x);gotoxy(1+y,6);cprintf(" %c%c   %c%c %c%c        %c%c  %c%c%c%c  %c%c %c%c %c%c      %c%c   %c%c %c%c %c%c%c  %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			textcolor(x);gotoxy(1+y,7);cprintf(" %c%c%c%c%c%c%c %c%c        %c%c   %c%c   %c%c %c%c %c%c      %c%c%c%c%c%c%c %c%c  %c%c%c %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			textcolor(x);gotoxy(1+y,8);cprintf(" %c%c%c%c%c%c%c %c%c        %c%c        %c%c %c%c %c%c      %c%c%c%c%c%c%c %c%c   %c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			textcolor(x);gotoxy(1+y,9);cprintf(" %c%c   %c%c %c%c%c%c%c%c%c   %c%c        %c%c %c%c %c%c%c%c%c%c%c %c%c   %c%c %c%c    %c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		}
		for(int z=1; z<56; z++){
			textcolor(x);gotoxy(111-z,11);cprintf(" %c%c%c  %c%c%c%c%c  %c%c%c  %c%c%c%c%c  %c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(2);
			textcolor(x);gotoxy(111-z,12);cprintf("%c       %c   %c   %c %c   %c %c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			textcolor(x);gotoxy(111-z,13);cprintf(" %c%c%c    %c   %c   %c %c%c%c%c%c %c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			textcolor(x);gotoxy(111-z,14);cprintf("    %c   %c   %c   %c %c  %c  %c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			textcolor(x);gotoxy(111-z,15);cprintf(" %c%c%c    %c    %c%c%c  %c   %c  %c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	}
 	}

char wel[]={'W','E','L','C','O','M','E',' ','T','O',' ','M','I','L','A','N',' ','H','O','M','E'};
	for(int a=0; a<=20; a++){
		gotoxy(60+a,18);textcolor(4);cprintf("%c",wel[a]);Sleep(100);
	}
	gotoxy(66,22);cprintf("   @@@@   ");
	gotoxy(66,23);cprintf("  @@@ @@  ");
	gotoxy(66,24);cprintf(" @@ @ @@@ ");
	gotoxy(66,25);cprintf("@ @ @ @@@@");
	gotoxy(66,26);cprintf("@ @ @ @@@@");
	gotoxy(66,27);cprintf("@ @ @    @");
	gotoxy(66,28);cprintf("@ @ @ @@@@");
	gotoxy(66,29);cprintf("@ @ @ @@@@");
	gotoxy(66,30);cprintf(" @@ @ @@@ ");
	gotoxy(66,31);cprintf("  @@@ @@  ");
	gotoxy(66,32);cprintf("   @@@@   ");

	gotoxy(58,36);textcolor(4);cprintf("Press Any Key For Next...");a=getche();
   loading();
   transisi();
   tampilanpilih();
}
//===============================[PILIH]======================================//
void tampilanpilih(){
	clrscr();
	transisi1(0);
	bingkaidefault();
	logo();
	persegi(25,5,40,20);
	persegi(25,5,75,20);
   persegi(25,3,57,29);
   gotoxy(2,42);textbackground(0);textcolor(15);cprintf("Tekan X untuk kembali");
   gotoxy(119,42);textbackground(0);textcolor(15);cprintf("Tekan 0 untuk keluar");
	gotoxy(49,23);textbackground(0);textcolor(15);cprintf("1. ADMIN");
	gotoxy(83,23);textbackground(0);textcolor(15);cprintf("2. CUSTOMER");
   gotoxy(60,31);textbackground(0);textcolor(15);cprintf("Pilihan:");
	while(true){
   gotoxy(68,31);textbackground(0);textcolor(15);a=getche();
		if(a=='1'){
			transisi();
         login();
		}else if(a=='2'){
			transisi();
         clrscr();
         before();
         menucustomer();
		}else if(a=='x'){
         clrscr();
         transisi1(0);
         tampilanopening();
      }else if(a=='0'){
      	exit(0);
      }else{
      	for(int x=1; x<=15; x++){
         	gotoxy(44+x,37);textbackground(0);textcolor(x);cprintf(">>");Sleep(50);
            gotoxy(98-x,37);textbackground(0);textcolor(x);cprintf("<<");Sleep(50);

         }

			gotoxy(62,37);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid");Sleep(1000);
         gotoxy(62,37);printf("                   ");
         for(int x=1; x<=15; x++){
         	gotoxy(44+x,37);textbackground(0);textcolor(x);cprintf("  ");Sleep(50);
            gotoxy(98-x,37);textbackground(0);textcolor(x);cprintf("  ");Sleep(50);

         }
         gotoxy(68,31);printf(" ");
		}
	}

}

//================================[LOGIN]=====================================//
void login(){
clrscr();
transisi1(0);
bingkaidefault();
logo();
persegi(45,12,46,22);
	gotoxy(53,27);textbackground(0);textcolor(15);cprintf("USERNAME: ");
	gotoxy(53,30);textbackground(0);textcolor(15);cprintf("PASSWORD: ");
   while(true){
		gotoxy(64,27);textbackground(0);textcolor(15);gets(user);
      gotoxy(64,30);textbackground(0);textcolor(15);gets(passs);
		if((strcmp(user,"arisheva")==0) && (strcmp(passs,"ari0908")==0)){
         for(int x=1; x<=15; x++){
         	gotoxy(39+x,37);textbackground(0);textcolor(x);cprintf(">>");Sleep(50);
            gotoxy(100-x,37);textbackground(0);textcolor(x);cprintf("<<");Sleep(50);

         }
         gotoxy(63,37);textcolor(15);cprintf("Login Berhasil!!");
         for(int x=1; x<=15; x++){
         	gotoxy(39+x,37);textbackground(0);textcolor(x);cprintf("  ");Sleep(50);
            gotoxy(100-x,37);textbackground(0);textcolor(x);cprintf("  ");Sleep(50);

         }
         loading();
   		transisi();
      	clrscr();
         before();
      	menuadmin();
      }else{
         for(int x=1; x<=15; x++){
         	gotoxy(39+x,37);textbackground(0);textcolor(x);cprintf(">>");Sleep(50);
            gotoxy(100-x,37);textbackground(0);textcolor(x);cprintf("<<");Sleep(50);

         }
      	gotoxy(57,37);textbackground(0);textcolor(15);cprintf("Username & Password Salah!!");Sleep(1000);
         for(int x=1; x<=15; x++){
         	gotoxy(39+x,37);textbackground(0);textcolor(x);cprintf("  ");Sleep(50);
            gotoxy(100-x,37);textbackground(0);textcolor(x);cprintf("  ");Sleep(50);

         }
         for(int x=0; x<=26; x++){
         	textbackground(0);textcolor(0);gotoxy(63+x,27);cprintf("%c",219);
            textbackground(0);textcolor(0);gotoxy(63+x,30);cprintf("%c",219);
            textbackground(0);textcolor(0);gotoxy(57+x,37);cprintf("%c",219);
         }
      }
   }
}

//=================================[ADMIN]====================================//
void menuadmin(){
   gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   for(int x=0; x<=27; x++){
      gotoxy(2+x,19);textbackground(4);cprintf(" ");
      gotoxy(2+x,23);textbackground(4);cprintf(" ");
      gotoxy(2+x,27);textbackground(4);cprintf(" ");
      gotoxy(2+x,31);textbackground(4);cprintf(" ");
      gotoxy(2+x,35);textbackground(4);cprintf(" ");
    	gotoxy(2+x,39);textbackground(4);cprintf(" ");
   }
	gotoxy(4,17);textbackground(0);textcolor(15);cprintf("1. Tambah Barang");
	gotoxy(4,21);textbackground(0);textcolor(15);cprintf("2. Tambah Stok");
	gotoxy(4,25);textbackground(0);textcolor(15);cprintf("3. Ubah Harga");
	gotoxy(4,29);textbackground(0);textcolor(15);cprintf("4. Hitung Pendapatan");
	gotoxy(4,33);textbackground(0);textcolor(15);cprintf("5. Logout");
	gotoxy(4,37);textbackground(0);textcolor(15);cprintf("6. Keluar");
	gotoxy(4,41);textbackground(0);textcolor(15);cprintf("Pilihan:");
	while(true){
		gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
		if(a=='1'){
      	tambahbarang();
   	}else if(a=='2'){
      	tambahstok();
   	}else if(a=='3'){
      	ubahharga();
   	}else if(a=='4'){
      	hitungpendapatan();
   	}else if(a=='5'){
         for(int x=1; x<=90; x++){
   			for(int y=1; y<=25; y++){
      			gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      		}
   		}
char y[1];
         gotoxy(76,25);printf("Yakin untuk Keluar?");
         gotoxy(82,26);printf("Ya/Tidak");
         while(true){
         gotoxy(80,30);printf("Input : ");gets(y);
      	if(strcmp(y,"Ya")==0){
           tampilanpilih();
           break;
         }else if(strcmp(y,"Tidak")==0){
         	menuadmin();
            break;
         }else{
         	gotoxy(75,30);printf("Maaf Inputan Salah Boss!");Sleep(500);
            gotoxy(75,30);printf("                        ");
         }
         }
   	}else if(a=='6'){
      	exit(0);
   	}else{
      for(int x=1; x<=26; x++){
      	for(int y=1; y<=13; y++){
         	gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");
         }
      }
   	gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      for(int x=1; x<=26; x++){
      	for(int y=1; y<=13; y++){
         	gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         }
      }
      gotoxy(5,8);textbackground(0);textcolor(4);cprintf("                     ");
      gotoxy(11,3);textbackground(0);textcolor(4);cprintf("   @@@@   ");
		gotoxy(11,4);textbackground(0);textcolor(4);cprintf("  @@@ @@  ");
		gotoxy(11,5);textbackground(0);textcolor(4);cprintf(" @@ @ @@@ ");
		gotoxy(11,6);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
		gotoxy(11,7);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
		gotoxy(11,8);textbackground(0);textcolor(4);cprintf("@ @ @    @");
		gotoxy(11,9);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
		gotoxy(11,10);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
		gotoxy(11,11);textbackground(0);textcolor(4);cprintf(" @@ @ @@@ ");
		gotoxy(11,12);textbackground(0);textcolor(4);cprintf("  @@@ @@  ");
		gotoxy(11,13);textbackground(0);textcolor(4);cprintf("   @@@@   ");
      gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}
}

void tambahbarang(){
	gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   for(int x=2; x<=29; x++){
   	for(int y=1; y<=22; y++){
      	gotoxy(x,16+y);textbackground(0);textcolor(15);cprintf(" ");
      }
   }
   for(int x=0; x<=42; x++){
   	gotoxy(30,1+x);textbackground(4);textcolor(15);cprintf(" ");
      gotoxy(1,1+x);textbackground(4);textcolor(15);cprintf(" ");
   }

   for(int x=1; x<=30; x++){
   	gotoxy(x,23);textbackground(4);textcolor(15);cprintf(" ");
      gotoxy(x,31);textbackground(4);textcolor(15);cprintf(" ");
   }
   gotoxy(129,42);textcolor(15);printf("Kembali X");
	gotoxy(4,19);textbackground(0);textcolor(15);cprintf("1. Jersey");
	gotoxy(4,27);textbackground(0);textcolor(15);cprintf("2. Fashion");
	gotoxy(4,35);textbackground(0);textcolor(15);cprintf("3. Accessories");
   gotoxy(4,41);textbackground(0);textcolor(15);cprintf("Pilihan:");
   gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
	while(true){
		gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
		if(a=='1'){
      	jerseytambah();
   	}else if(a=='2'){
      	fashiontambah();
   	}else if(a=='3'){
      	accetambah();
   	}else if(a=='x'){
         before();
         menuadmin();
		}else{
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}

void jerseytambah(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   gotoxy(129,42);textcolor(15);cprintf("Kembali X");
   persegi(30,3,52,25);
   persegi(30,3,92,25);
   gotoxy(57,27);printf("1. Tambah Pembelian");
   gotoxy(97,27);printf("2. Tambah Pemesanan");
   while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   if(a=='1'){
      jerseytambahb();
   }else if(a=='2'){
   	jerseytambahp();
   }else if(a=='x'){
   	menuadmin();
   }else{
   	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}
void jerseytambahb(){
for(int x=1; x<=91; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
tampilantransaksi();
int tamp=0;
	for(int x=0; x<4+barujersey; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaru[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kitsbaru[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stok[x]);
         tamp+=2;
      }else{
			gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
			gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kits[x]);
			gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stok[x]);
			gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargajerseyb[x]);
			tamp+=2;
      }
	}

char b;
	do{
      while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
			gotoxy(42,38);textcolor(15);cprintf("Nama Barang :");gotoxy(56,38);gets(kitsbaru[barujersey]);
      	if(strlen(kitsbaru[barujersey])<1 ){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
      	}else if(valbarang(kitsbaru[barujersey])>0 ){
         	gotoxy(50,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(50,41);printf("                         ");
         }else if(strlen(kitsbaru[barujersey])>10){
            gotoxy(50,41);printf("Maksimal 10 Karakter");Sleep(500);
            gotoxy(50,41);printf("                       ");
         }else{
         	break;
         }
      }
      gotoxy(57,38);textcolor(15);cprintf("                                ");
		while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
      	gotoxy(42,38);textcolor(15);cprintf("Masukkan Harga :");gotoxy(59,38);gets(hargaubah[barujersey]);
         if(strlen(hargaubah[barujersey])<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(hargaubah[barujersey])>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);textcolor(15);cprintf("                                ");
      hargabaru[barujersey]=atoi(hargaubah[barujersey]);
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[4+barujersey]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kitsbaru[barujersey]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stok[barujersey+4]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaru[barujersey]);
      gotoxy(50,41);printf("Barang Berhasil Ditambahkan...");Sleep(1000);
      gotoxy(50,41);printf("                              ");
		tamp+=2;
      barujersey++;
      gotoxy(42,38);printf("Tambah barang lagi?(y/t)");b=getche();
      if(b=='y'){
      	gotoxy(42,38);textcolor(15);cprintf("                                ");
      }else if(b=='t'){
      	gotoxy(48,40);printf("Menuju Tak Terbatas dan Melampauinya...");Sleep(2000);
         before();
         menuadmin();
      }else{
         gotoxy(50,41);printf("Inputan Invalid");
      }
	}while(barujersey!=6 && b!='t');
}

void fashiontambah(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   gotoxy(129,42);textcolor(15);cprintf("Kembali X");
   persegi(30,3,52,25);
   persegi(30,3,92,25);
   gotoxy(57,27);printf("1. Tambah Pembelian");
   gotoxy(97,27);printf("2. Tambah Pemesanan");
   while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   if(a=='1'){
      fashiontambahb();
   }else if(a=='2'){
   	fashiontambahp();
   }else if(a=='x'){
   	menuadmin();
   }else{
   	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}

void fashiontambahb(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+barufashion; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarufashion[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionbaru[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x+10]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionb[x]);
         tamp+=2;
      }else{
			gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x+10]);
			gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionb[x]);
			gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionb[x]);
			gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargafashionb[x]);
			tamp+=2;
      }
	}

char b;
	do{
      while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
			gotoxy(42,38);textcolor(15);cprintf("Nama Barang :");gotoxy(56,38);gets(fashionbaru[barufashion]);
      	if(strlen(fashionbaru[barufashion])<1 ){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
      	}else if(valbarang(fashionbaru[barufashion])>0 ){
         	gotoxy(50,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(50,41);printf("                         ");
         }else if(strlen(fashionbaru[barufashion])>10){
            gotoxy(50,41);printf("Maksimal 10 Karakter");Sleep(500);
            gotoxy(50,41);printf("                       ");
         }else{
         	break;
         }
      }
      gotoxy(57,38);textcolor(15);cprintf("                                ");
		while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
      	gotoxy(42,38);textcolor(15);cprintf("Masukkan Harga :");gotoxy(59,38);gets(hargaubah[barufashion]);
         if(strlen(hargaubah[barufashion])<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(hargaubah[barufashion])>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);textcolor(15);cprintf("                                ");
      hargabarufashion[barufashion]=atoi(hargaubah[barufashion]);
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[14+barufashion]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionbaru[barufashion]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionb[barufashion+4]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarufashion[barufashion]);
		tamp+=2;
      barufashion++;
      gotoxy(50,41);printf("Barang Berhasil Ditambahkan...");Sleep(1000);
      gotoxy(50,41);printf("                              ");
      gotoxy(42,38);printf("Tambah barang lagi?(y/t)");b=getche();
      if(b=='y'){
         gotoxy(42,38);textcolor(15);cprintf("                                ");
      }else if(b=='t'){
      	gotoxy(48,40);printf("Menuju Tak Terbatas dan Melampauinya");Sleep(2000);
         before();
         menuadmin();
      }else{
         gotoxy(50,41);printf("Inputan Invalid");
      }
	}while(barufashion!=6 && b!='t');
}

void accetambah(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   gotoxy(129,42);textcolor(15);cprintf("Kembali X");
   persegi(30,3,52,25);
   persegi(30,3,92,25);
   gotoxy(57,27);printf("1. Tambah Pembelian");
   gotoxy(97,27);printf("2. Tambah Pemesanan");
   while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   if(a=='1'){
      accetambahb();
   }else if(a=='2'){
   	accetambahp();
   }else if(a=='x'){
    	menuadmin();
   }else{
   	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}

void accetambahb(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+baruacce; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaruacce[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",accebaru[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x+20]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokacceb[x]);
         tamp+=2;
      }else{
			gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x+20]);
			gotoxy(51,21+tamp);textcolor(15);cprintf("%s",acceb[x]);
			gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokacceb[x]);
			gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargaacceb[x]);
			tamp+=2;
      }
	}

char b;
	do{
      while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
			gotoxy(42,38);textcolor(15);cprintf("Nama Barang :");gotoxy(56,38);gets(accebaru[baruacce]);
      	if(strlen(accebaru[baruacce])<1 ){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
      	}else if(valbarang(accebaru[baruacce])>0 ){
         	gotoxy(50,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(50,41);printf("                         ");
         }else if(strlen(accebaru[baruacce])>10){
            gotoxy(50,41);printf("Maksimal 10 Karakter");Sleep(500);
            gotoxy(50,41);printf("                       ");
         }else{
         	break;
         }
      }
      gotoxy(57,38);textcolor(15);cprintf("                                ");
		while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
      	gotoxy(42,38);textcolor(15);cprintf("Masukkan Harga :");gotoxy(59,38);gets(hargaubah[baruacce]);
         if(strlen(hargaubah[baruacce])<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(hargaubah[baruacce])>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);textcolor(15);cprintf("                                ");
   	hargabaruacce[baruacce]=atoi(hargaubah[baruacce]);
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[24+baruacce]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",accebaru[baruacce]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokacceb[baruacce+4]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaruacce[baruacce]);
		tamp+=2;
      baruacce++;
      gotoxy(50,41);printf("Barang Berhasil Ditambahkan...");Sleep(1000);
      gotoxy(50,41);printf("                              ");
      gotoxy(42,38);printf("Tambah barang lagi?(y/t)");b=getche();
      if(b=='y'){
         gotoxy(42,38);textcolor(15);cprintf("                                ");
      }else if(b=='t'){
      	gotoxy(48,40);printf("Menuju Tak Terbatas dan Melampauinya");Sleep(2000);
         before();
         menuadmin();
      }else{
         gotoxy(50,41);printf("Inputan Invalid");
      }
	}while(baruacce!=6 && b!='t');
}

void jerseytambahp(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+barujerseyp; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarup[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kitsbarup[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokjerseyp[x]);
         tamp+=2;
      }else{
			gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
			gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kits[x]);
			gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stok[x]);
			gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargajerseyb[x]);
			tamp+=2;
      }
	}


char b;
	do{
      while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
			gotoxy(42,38);textcolor(15);cprintf("Nama Barang :");gotoxy(56,38);gets(kitsbarup[barujerseyp]);
      	if(strlen(kitsbarup[barujerseyp])<1 ){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
      	}else if(valbarang(kitsbarup[barujerseyp])>0 ){
         	gotoxy(50,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(50,41);printf("                         ");
         }else if(strlen(kitsbarup[barujerseyp])>10){
            gotoxy(50,41);printf("Maksimal 10 Karakter");Sleep(500);
            gotoxy(50,41);printf("                       ");
         }else{
         	break;
         }
      }
      gotoxy(57,38);textcolor(15);cprintf("                                ");
		while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
      	gotoxy(42,38);textcolor(15);cprintf("Masukkan Harga :");gotoxy(59,38);gets(hargaubah[barujerseyp]);
         if(strlen(hargaubah[barujerseyp])<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(hargaubah[barujerseyp])>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);textcolor(15);cprintf("                                ");
   	hargabarup[barujerseyp]=atoi(hargaubah[barujerseyp]);
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[4+barujerseyp]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kitsbarup[barujerseyp]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokjerseyp[barujerseyp+4]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarup[barujerseyp]);
      gotoxy(50,41);printf("Barang Berhasil Ditambahkan...");Sleep(1000);
      gotoxy(50,41);printf("                              ");
		tamp+=2;
      barujerseyp++;
      gotoxy(42,38);printf("Tambah barang lagi?(y/t)");b=getche();
      if(b=='y'){
         gotoxy(42,38);textcolor(15);cprintf("                                ");
      }else if(b=='t'){
      	gotoxy(48,40);printf("Menuju Tak Terbatas dan Melampauinya");Sleep(2000);
         before();
         menuadmin();
      }else{
         gotoxy(50,41);printf("Inputan Invalid");
      }
	}while(barujerseyp!=6 && b!='t');
}

void fashiontambahp(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+barufashionp; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarufashionp[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionbarup[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x+10]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionp[x]);
         tamp+=2;
      }else{
			gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x+10]);
			gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionb[x]);
			gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionb[x]);
			gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargafashionb[x]);
			tamp+=2;
      }
	}


char b;
	do{
      while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
			gotoxy(42,38);textcolor(15);cprintf("Nama Barang :");gotoxy(56,38);gets(fashionbarup[barufashionp]);
      	if(strlen(fashionbarup[barufashionp])<1 ){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
      	}else if(valbarang(fashionbarup[barufashionp])>0 ){
         	gotoxy(50,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(50,41);printf("                         ");
         }else if(strlen(fashionbarup[barufashionp])>10){
            gotoxy(50,41);printf("Maksimal 10 Karakter");Sleep(500);
            gotoxy(50,41);printf("                       ");
         }else{
         	break;
         }
      }
      gotoxy(57,38);textcolor(15);cprintf("                                ");
		while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
      	gotoxy(42,38);textcolor(15);cprintf("Masukkan Harga :");gotoxy(59,38);gets(hargaubah[barufashionp]);
         if(strlen(hargaubah[barufashionp])<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(hargaubah[barufashionp])>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);textcolor(15);cprintf("                                ");
   	hargabarufashionp[barufashionp]=atoi(hargaubah[barufashionp]);
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[14+barufashionp]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionbarup[barufashionp]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionp[barufashionp+4]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarufashionp[barufashionp]);
		tamp+=2;
      barufashionp++;
      gotoxy(50,41);printf("Barang Berhasil Ditambahkan...");Sleep(1000);
      gotoxy(50,41);printf("                              ");
      gotoxy(42,38);printf("Tambah barang lagi?(y/t)");b=getche();
      if(b=='y'){
         gotoxy(42,38);textcolor(15);cprintf("                                ");
      }else if(b=='t'){
      	gotoxy(48,40);printf("Menuju Tak Terbatas dan Melampauinya");Sleep(2000);
         before();
         menuadmin();
      }else{
         gotoxy(50,41);printf("Inputan Invalid");
      }
	}while(barufashionp!=6 && b!='t');
}

void accetambahp(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+baruaccep; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaruaccep[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",accebarup[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x+20]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokaccep[x]);
         tamp+=2;
      }else{
			gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x+20]);
			gotoxy(51,21+tamp);textcolor(15);cprintf("%s",acceb[x]);
			gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokacceb[x]);
			gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargaacceb[x]);
			tamp+=2;
      }
	}


char b;
	do{
      while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
			gotoxy(42,38);textcolor(15);cprintf("Nama Barang :");gotoxy(56,38);gets(accebarup[baruaccep]);
      	if(strlen(accebarup[baruaccep])<1 ){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
      	}else if(valbarang(accebarup[baruaccep])>0 ){
         	gotoxy(50,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(50,41);printf("                         ");
         }else if(strlen(accebarup[baruaccep])>10){
            gotoxy(50,41);printf("Maksimal 10 Karakter");Sleep(500);
            gotoxy(50,41);printf("                       ");
         }else{
         	break;
         }
      }
      gotoxy(57,38);textcolor(15);cprintf("                                ");
		while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
      	gotoxy(42,38);textcolor(15);cprintf("Masukkan Harga :");gotoxy(59,38);gets(hargaubah[baruaccep]);
         if(strlen(hargaubah[baruaccep])<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(hargaubah[baruaccep])>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);textcolor(15);cprintf("                                ");
   	hargabaruaccep[baruaccep]=atoi(hargaubah[baruaccep]);
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[24+baruaccep]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",accebarup[baruaccep]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokaccep[baruaccep+4]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaruaccep[baruaccep]);
		tamp+=2;
      baruaccep++;
      gotoxy(50,41);printf("Barang Berhasil Ditambahkan...");Sleep(1000);
      gotoxy(50,41);printf("                              ");
      gotoxy(42,38);printf("Tambah barang lagi?(y/t)");b=getche();
      if(b=='y'){
         gotoxy(42,38);textcolor(15);cprintf("                                ");
      }else if(b=='t'){
      	gotoxy(48,40);printf("Menuju Tak Terbatas dan Melampauinya");Sleep(2000);
         before();
         menuadmin();
      }else{
         gotoxy(50,41);printf("Inputan Invalid");
      }
	}while(baruaccep!=6 && b!='t');
}

void tambahstok(){
	gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   for(int x=2; x<=29; x++){
   	for(int y=1; y<=22; y++){
      	gotoxy(x,16+y);textbackground(0);textcolor(15);cprintf(" ");
      }
   }
   for(int x=0; x<=42; x++){
   	gotoxy(30,1+x);textbackground(4);textcolor(15);cprintf(" ");
      gotoxy(1,1+x);textbackground(4);textcolor(15);cprintf(" ");
   }

   for(int x=1; x<=30; x++){
   	gotoxy(x,23);textbackground(4);textcolor(15);cprintf(" ");
      gotoxy(x,31);textbackground(4);textcolor(15);cprintf(" ");
   }
   gotoxy(129,42);textcolor(15);printf("Kembali X");
	gotoxy(4,19);textbackground(0);textcolor(15);cprintf("1. Jersey");
	gotoxy(4,27);textbackground(0);textcolor(15);cprintf("2. Fashion");
	gotoxy(4,35);textbackground(0);textcolor(15);cprintf("3. Accessories");
   gotoxy(4,41);textbackground(0);textcolor(15);cprintf("Pilihan:");
   gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
	while(true){
		gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
		if(a=='1'){
      	tambahstokjersey();
   	}else if(a=='2'){
      	tambahstokfashion();
   	}else if(a=='3'){
      	tambahstokacce();
   	}else if(a=='x'){
         before();
         menuadmin();
		}else{
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}

void tambahstokjersey(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   persegi(30,3,52,25);
   persegi(30,3,92,25);
   gotoxy(56,27);printf("1. Tambah Stok Pembelian");
   gotoxy(96,27);printf("2. Tambah Stok Pemesanan");
   while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   if(a=='1'){
      tambahstokjerseyb();
   }else if(a=='2'){
   	tambahstokjerseyp();
   }else if(a=='x'){
   	before();
   	menuadmin();
   }else{
   	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}

void tambahstokjerseyb(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+barujersey; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaru[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kitsbaru[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stok[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kits[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stok[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargajerseyb[x]);
		tamp+=2;
      }
	}


char b;
	do{
      while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
      	gotoxy(42,38);textcolor(15);cprintf("Tambah Stok :");gotoxy(59,38);gets(price);
         if(strlen(price)<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(price)>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);textcolor(15);cprintf("                                ");
   	plusstok=atoi(price);
      while(true){
      gotoxy(42,38);printf("                            ");
      gotoxy(42,38);textcolor(15);cprintf("Kode Barang :");gotoxy(56,38);gets(barang);
      if(strcmp(barang,code[0])==0){
      	stok[0]=stok[0]+plusstok;
         break;
      }else if(strcmp(barang,code[1])==0){
      	stok[1]=stok[1]+plusstok;
         break;
      }else if(strcmp(barang,code[2])==0){
      	stok[2]=stok[2]+plusstok;
         break;
      }else if(strcmp(barang,code[3])==0){
      	stok[3]=stok[3]+plusstok;
         break;
      }else if(strcmp(barang,code[4])==0){
      	stok[4]=stok[4]+plusstok;
         break;
      }else if(strcmp(barang,code[5])==0){
      	stok[5]=stok[5]+plusstok;
         break;
      }else if(strcmp(barang,code[6])==0){
      	stok[6]=stok[6]+plusstok;
         break;
      }else if(strcmp(barang,code[7])==0){
      	stok[7]=stok[7]+plusstok;
         break;
      }else if(strcmp(barang,code[8])==0){
      	stok[8]=stok[8]+plusstok;
         break;
      }else if(strcmp(barang,code[9])==0){
      	stok[9]=stok[9]+plusstok;
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(56,38);printf("                    ");
      }
      }
      gotoxy(42,38);printf("                            ");
      gotoxy(90,40);printf("Stok Berhasil Ditambahkan...");Sleep(50);
      gotoxy(90,41);printf("Menuju Tak Terbatas dan Melampauinya...");
      getch();
      before();
      menuadmin();
    }while(barujersey!=6 && b!='y');
}

void tambahstokjerseyp(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+barujerseyp; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarup[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kitsbarup[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokjerseyp[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kits[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokjerseyp[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargajerseyp[x]);
		tamp+=2;
      }
	}


char b;
	do{
      while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
      	gotoxy(42,38);textcolor(15);cprintf("Tambah Stok :");gotoxy(59,38);gets(price);
         if(strlen(price)<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(price)>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);textcolor(15);cprintf("                                ");
   	plusstok=atoi(price);
      while(true){
      gotoxy(42,38);printf("                            ");
      gotoxy(42,38);textcolor(15);cprintf("Kode Barang :");gotoxy(56,38);gets(barang);
      if(strcmp(barang,code[0])==0){
      	stokjerseyp[0]=stokjerseyp[0]+plusstok;
         break;
      }else if(strcmp(barang,code[1])==0){
      	stokjerseyp[1]=stokjerseyp[1]+plusstok;
         break;
      }else if(strcmp(barang,code[2])==0){
      	stokjerseyp[2]=stokjerseyp[2]+plusstok;
         break;
      }else if(strcmp(barang,code[3])==0){
      	stokjerseyp[3]=stokjerseyp[3]+plusstok;
         break;
      }else if(strcmp(barang,code[4])==0){
      	stokjerseyp[4]=stokjerseyp[4]+plusstok;
         break;
      }else if(strcmp(barang,code[5])==0){
      	stokjerseyp[5]=stokjerseyp[5]+plusstok;
         break;
      }else if(strcmp(barang,code[6])==0){
      	stokjerseyp[6]=stokjerseyp[6]+plusstok;
         break;
      }else if(strcmp(barang,code[7])==0){
      	stokjerseyp[7]=stokjerseyp[7]+plusstok;
         break;
      }else if(strcmp(barang,code[8])==0){
      	stokjerseyp[8]=stokjerseyp[8]+plusstok;
         break;
      }else if(strcmp(barang,code[9])==0){
      	stokjerseyp[9]=stokjerseyp[9]+plusstok;
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(56,38);printf("                    ");
      }
      }
   	gotoxy(42,38);printf("                            ");
      gotoxy(90,40);printf("Stok Berhasil Ditambahkan...");Sleep(50);
      gotoxy(90,41);printf("Menuju Tak Terbatas dan Melampauinya...");
      getch();
      before();
      menuadmin();
    }while(barujerseyp!=6 && b!='y');
}

void tambahstokfashion(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   persegi(30,3,52,25);
   persegi(30,3,92,25);
   gotoxy(56,27);printf("1. Tambah Stok Pembelian");
   gotoxy(96,27);printf("2. Tambah Stok Pemesanan");
   while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   if(a=='1'){
      tambahstokfashionb();
   }else if(a=='2'){
   	tambahstokfashionp();
   }else if(a=='x'){
      before();
   	menuadmin();
   }else{
   	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}

void tambahstokfashionb(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+barufashion; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarufashion[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionbaru[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[10+x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionb[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[10+x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionb[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionb[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargafashionb[x]);
		tamp+=2;
      }
	}


char b;
	do{
      while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
      	gotoxy(42,38);textcolor(15);cprintf("Tambah Stok :");gotoxy(59,38);gets(price);
         if(strlen(price)<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(price)>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);textcolor(15);cprintf("                                ");
   	plusstok=atoi(price);
      while(true){
      gotoxy(42,38);printf("                            ");
      gotoxy(42,38);textcolor(15);cprintf("Kode Barang :");gotoxy(56,38);gets(barang);
      if(strcmp(barang,code[10])==0){
      	stokfashionb[0]=stokfashionb[0]+plusstok;
         break;
      }else if(strcmp(barang,code[11])==0){
      	stokfashionb[1]=stokfashionb[1]+plusstok;
         break;
      }else if(strcmp(barang,code[12])==0){
      	stokfashionb[2]=stokfashionb[2]+plusstok;
         break;
      }else if(strcmp(barang,code[13])==0){
      	stokfashionb[3]=stokfashionb[3]+plusstok;
         break;
      }else if(strcmp(barang,code[14])==0){
      	stokfashionb[4]=stokfashionb[4]+plusstok;
         break;
      }else if(strcmp(barang,code[15])==0){
      	stokfashionb[5]=stokfashionb[5]+plusstok;
         break;
      }else if(strcmp(barang,code[16])==0){
      	stokfashionb[6]=stokfashionb[6]+plusstok;
         break;
      }else if(strcmp(barang,code[17])==0){
      	stokfashionb[7]=stokfashionb[7]+plusstok;
         break;
      }else if(strcmp(barang,code[18])==0){
      	stokfashionb[8]=stokfashionb[8]+plusstok;
         break;
      }else if(strcmp(barang,code[19])==0){
      	stokfashionb[9]=stokfashionb[9]+plusstok;
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(56,38);printf("                    ");
      }
      }
      gotoxy(42,38);printf("                            ");
      gotoxy(90,40);printf("Stok Berhasil Ditambahkan...");Sleep(50);
      gotoxy(90,41);printf("Menuju Tak Terbatas dan Melampauinya...");
      getch();
      before();
      menuadmin();
    }while(barufashion!=6 && b!='y');
}

void tambahstokfashionp(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+barufashionp; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarufashionp[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionbarup[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[10+x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionp[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[10+x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionb[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionp[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargafashionp[x]);
		tamp+=2;
      }
	}

char b;
      do{
      while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
      	gotoxy(42,38);textcolor(15);cprintf("Tambah Stok :");gotoxy(59,38);gets(price);
         if(strlen(price)<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(price)>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);textcolor(15);cprintf("                                ");
   	plusstok=atoi(price);
      while(true){
      gotoxy(42,38);printf("                            ");
      gotoxy(42,38);textcolor(15);cprintf("Kode Barang :");gotoxy(56,38);gets(barang);
      if(strcmp(barang,code[10])==0){
      	stokfashionp[0]=stokfashionp[0]+plusstok;
         break;
      }else if(strcmp(barang,code[11])==0){
      	stokfashionp[1]=stokfashionp[1]+plusstok;
         break;
      }else if(strcmp(barang,code[12])==0){
      	stokfashionp[2]=stokfashionp[2]+plusstok;
         break;
      }else if(strcmp(barang,code[13])==0){
      	stokfashionp[3]=stokfashionp[3]+plusstok;
         break;
      }else if(strcmp(barang,code[14])==0){
      	stokfashionp[4]=stokfashionp[4]+plusstok;
         break;
      }else if(strcmp(barang,code[15])==0){
      	stokfashionp[5]=stokfashionp[5]+plusstok;
         break;
      }else if(strcmp(barang,code[16])==0){
      	stokfashionp[6]=stokfashionp[6]+plusstok;
         break;
      }else if(strcmp(barang,code[17])==0){
      	stokfashionp[7]=stokfashionp[7]+plusstok;
         break;
      }else if(strcmp(barang,code[18])==0){
      	stokfashionp[8]=stokfashionp[8]+plusstok;
         break;
      }else if(strcmp(barang,code[19])==0){
      	stokfashionp[9]=stokfashionp[9]+plusstok;
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(56,38);printf("                    ");
      }
      }
      gotoxy(42,38);printf("                            ");
      gotoxy(90,40);printf("Stok Berhasil Ditambahkan...");Sleep(50);
      gotoxy(90,41);printf("Menuju Tak Terbatas dan Melampauinya...");
      getch();
      before();
      menuadmin();
    }while(barufashion!=6 && b!='y');
}

void tambahstokacce(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   persegi(30,3,52,25);
   persegi(30,3,92,25);
   gotoxy(56,27);printf("1. Tambah Stok Pembelian");
   gotoxy(96,27);printf("2. Tambah Stok Pemesanan");
char a;
   while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   if(a=='1'){
      tambahstokacceb();
   }else if(a=='2'){
   	tambahstokaccep();
   }else if(a=='x'){
   	menuadmin();
   }else{
   	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}

void tambahstokacceb(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+baruacce; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaruacce[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",accebaru[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[20+x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokacceb[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[20+x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",acceb[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokacceb[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargaacceb[x]);
		tamp+=2;
      }
	}


char b;
	do{
      while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
      	gotoxy(42,38);textcolor(15);cprintf("Tambah Stok :");gotoxy(59,38);gets(price);
         if(strlen(price)<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(price)>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);textcolor(15);cprintf("                                ");
   	plusstok=atoi(price);
      while(true){
      gotoxy(42,38);printf("                            ");
      gotoxy(42,38);textcolor(15);cprintf("Kode Barang :");gotoxy(56,38);gets(barang);
      if(strcmp(barang,code[20])==0){
      	stokacceb[0]=stokacceb[0]+plusstok;
         break;
      }else if(strcmp(barang,code[21])==0){
      	stokacceb[1]=stokacceb[1]+plusstok;
         break;
      }else if(strcmp(barang,code[22])==0){
      	stokacceb[2]=stokacceb[2]+plusstok;
         break;
      }else if(strcmp(barang,code[23])==0){
      	stokacceb[3]=stokacceb[3]+plusstok;
         break;
      }else if(strcmp(barang,code[24])==0){
      	stokacceb[4]=stokacceb[4]+plusstok;
         break;
      }else if(strcmp(barang,code[25])==0){
      	stokacceb[5]=stokacceb[5]+plusstok;
         break;
      }else if(strcmp(barang,code[26])==0){
      	stokacceb[6]=stokacceb[6]+plusstok;
         break;
      }else if(strcmp(barang,code[27])==0){
      	stokacceb[7]=stokacceb[7]+plusstok;
         break;
      }else if(strcmp(barang,code[28])==0){
      	stokacceb[8]=stokacceb[8]+plusstok;
         break;
      }else if(strcmp(barang,code[29])==0){
      	stokacceb[9]=stokacceb[9]+plusstok;
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(56,38);printf("                    ");
      }
      }
      gotoxy(42,38);printf("                            ");
      gotoxy(90,40);printf("Stok Berhasil Ditambahkan...");Sleep(50);
      gotoxy(90,41);printf("Menuju Tak Terbatas dan Melampauinya...");
      getch();
      before();
      menuadmin();
    }while(baruacce!=6 && b!='y');
}

void tambahstokaccep(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+baruaccep; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaruaccep[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",accebarup[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[20+x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokaccep[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[20+x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",acceb[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokaccep[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargaaccep[x]);
		tamp+=2;
      }
	}


char b;
	do{
      while(true){
         gotoxy(56,38);textcolor(15);cprintf("                                ");
      	gotoxy(42,38);textcolor(15);cprintf("Tambah Stok :");gotoxy(59,38);gets(price);
         if(strlen(price)<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(price)>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);textcolor(15);cprintf("                                ");
   	plusstok=atoi(price);
      while(true){
      gotoxy(42,38);printf("                            ");
      gotoxy(42,38);textcolor(15);cprintf("Kode Barang :");gotoxy(56,38);gets(barang);
      if(strcmp(barang,code[20])==0){
      	stokaccep[0]=stokaccep[0]+plusstok;
         break;
      }else if(strcmp(barang,code[21])==0){
      	stokaccep[1]=stokaccep[1]+plusstok;
         break;
      }else if(strcmp(barang,code[22])==0){
      	stokaccep[2]=stokaccep[2]+plusstok;
         break;
      }else if(strcmp(barang,code[23])==0){
      	stokaccep[3]=stokaccep[3]+plusstok;
         break;
      }else if(strcmp(barang,code[24])==0){
      	stokaccep[4]=stokaccep[4]+plusstok;
         break;
      }else if(strcmp(barang,code[25])==0){
      	stokaccep[5]=stokaccep[5]+plusstok;
         break;
      }else if(strcmp(barang,code[26])==0){
      	stokaccep[6]=stokaccep[6]+plusstok;
         break;
      }else if(strcmp(barang,code[27])==0){
      	stokaccep[7]=stokaccep[7]+plusstok;
         break;
      }else if(strcmp(barang,code[28])==0){
      	stokaccep[8]=stokaccep[8]+plusstok;
         break;
      }else if(strcmp(barang,code[29])==0){
      	stokaccep[9]=stokaccep[9]+plusstok;
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(56,38);printf("                    ");
      }
      }
      gotoxy(42,38);printf("                            ");
      gotoxy(90,40);printf("Stok Berhasil Ditambahkan...");Sleep(50);
      gotoxy(90,41);printf("Menuju Tak Terbatas dan Melampauinya...");
      getch();
      before();
      menuadmin();
    }while(baruaccep!=6 && b!='y');
}

void ubahharga(){
	gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   for(int x=2; x<=29; x++){
   	for(int y=1; y<=22; y++){
      	gotoxy(x,16+y);textbackground(0);textcolor(15);cprintf(" ");
      }
   }
   for(int x=0; x<=42; x++){
   	gotoxy(30,1+x);textbackground(4);textcolor(15);cprintf(" ");
      gotoxy(1,1+x);textbackground(4);textcolor(15);cprintf(" ");
   }

   for(int x=1; x<=30; x++){
   	gotoxy(x,23);textbackground(4);textcolor(15);cprintf(" ");
      gotoxy(x,31);textbackground(4);textcolor(15);cprintf(" ");
   }
   gotoxy(129,42);textcolor(15);printf("Kembali X");
	gotoxy(4,19);textbackground(0);textcolor(15);cprintf("1. Jersey");
	gotoxy(4,27);textbackground(0);textcolor(15);cprintf("2. Fashion");
	gotoxy(4,35);textbackground(0);textcolor(15);cprintf("3. Accessories");
   gotoxy(4,41);textbackground(0);textcolor(15);cprintf("Pilihan:");
   gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
	while(true){
		gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
		if(a=='1'){
      	ubahhargajersey();
   	}else if(a=='2'){
      	ubahhargafashion();
   	}else if(a=='3'){
      	ubahhargaacce();
   	}else if(a=='x'){
         before();
         menuadmin();
		}else{
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}

void ubahhargajersey(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   persegi(30,3,52,25);
   persegi(30,3,92,25);
   gotoxy(56,27);printf("1. Ubah Harga Pembelian");
   gotoxy(96,27);printf("2. Ubah Harga Pemesanan");
   while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   if(a=='1'){
      ubahhargajerseyb();
   }else if(a=='2'){
   	ubahhargajerseyp();
   }else if(a=='x'){
      before();
   	menuadmin();
   }else{
   	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}

void ubahhargajerseyb(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+barujersey; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaru[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kitsbaru[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stok[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kits[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stok[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargajerseyb[x]);
		tamp+=2;
      }
	}


char b;
	while(barujersey!=6 && b!='y'){
      while(true){
      gotoxy(42,38);printf("                            ");
      gotoxy(42,38);textcolor(15);cprintf("Harga Baru :");gotoxy(56,38);gets(price);
      if(strlen(price)<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(price)>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);printf("                            ");
   	hargaganti=atoi(price);
      while(true){
      gotoxy(42,38);textcolor(15);cprintf("Kode Barang :");gotoxy(56,38);gets(barang);
      	if(strcmp(barang,code[0])==0){
      		hargajerseyb[0]=hargaganti;
         	break;
      	}else if(strcmp(barang,code[1])==0){
      		hargajerseyb[1]=hargaganti;
         	break;
      	}else if(strcmp(barang,code[2])==0){
      		hargajerseyb[2]=hargaganti;
         	break;
      	}else if(strcmp(barang,code[3])==0){
      		hargajerseyb[3]=hargaganti;
         	break;
      	}else if(strcmp(barang,code[4])==0){
      		hargabaru[0]=hargaganti;
         	break;
      	}else if(strcmp(barang,code[5])==0){
      		hargabaru[1]=hargaganti;
         	break;
      	}else if(strcmp(barang,code[6])==0){
      		hargabaru[2]=hargaganti;
         	break;
      	}else if(strcmp(barang,code[7])==0){
      		hargabaru[3]=hargaganti;
            break;
      	}else if(strcmp(barang,code[8])==0){
      		hargabaru[4]=hargaganti;
         	break;
      	}else if(strcmp(barang,code[9])==0){
      		hargabaru[5]=hargaganti;
         	break;
      	}else{
         	gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         	gotoxy(42,40);printf("               ");
         	gotoxy(56,38);printf("                    ");
      	}
      }
      gotoxy(42,38);printf("                            ");
      gotoxy(90,40);printf("Harga Berhasil Diubah...");Sleep(50);
      gotoxy(90,41);printf("Menuju Tak Terbatas dan Melampauinya...");
      getch();
      before();
      menuadmin();
    }
}

void ubahhargajerseyp(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+barujerseyp; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarup[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kitsbarup[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokjerseyp[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kits[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokjerseyp[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargajerseyp[x]);
		tamp+=2;
      }
	}

char b;
		while(barujerseyp!=6 && b!='y'){
      while(true){
      gotoxy(42,38);printf("                            ");
      gotoxy(42,38);textcolor(15);cprintf("Harga Baru :");gotoxy(56,38);gets(price);
      if(strlen(price)<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(price)>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);printf("                            ");
   	hargaganti=atoi(price);
      while(true){
      gotoxy(42,38);textcolor(15);cprintf("Kode Barang :");gotoxy(56,38);gets(barang);
      if(strcmp(barang,code[0])==0){
      	hargajerseyp[0]=hargaganti;
         break;
      }else if(strcmp(barang,code[1])==0){
      	hargajerseyp[1]=hargaganti;
         break;
      }else if(strcmp(barang,code[2])==0){
      	hargajerseyp[2]=hargaganti;
         break;
      }else if(strcmp(barang,code[3])==0){
      	hargajerseyp[3]=hargaganti;
         break;
      }else if(strcmp(barang,code[4])==0){
      	hargabarup[0]=hargaganti;
         break;
      }else if(strcmp(barang,code[5])==0){
      	hargabarup[1]=hargaganti;
         break;
      }else if(strcmp(barang,code[6])==0){
      	hargabarup[2]=hargaganti;
         break;
      }else if(strcmp(barang,code[7])==0){
      	hargabarup[3]=hargaganti;
         break;
      }else if(strcmp(barang,code[8])==0){
      	hargabarup[4]=hargaganti;
         break;
      }else if(strcmp(barang,code[9])==0){
      	hargabarup[5]=hargaganti;
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(56,38);printf("                    ");
      }
      }
      gotoxy(42,38);printf("                            ");
      gotoxy(90,40);printf("Harga Berhasil Diubah...");Sleep(50);
      gotoxy(90,41);printf("Menuju Tak Terbatas dan Melampauinya...");
      getch();
      before();
      menuadmin();
    }
}

void ubahhargafashion(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   persegi(30,3,52,25);
   persegi(30,3,92,25);
   gotoxy(56,27);printf("1. Ubah Harga Pembelian");
   gotoxy(96,27);printf("2. Ubah Harga Pemesanan");

   while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   if(a=='1'){
      ubahhargafashionb();
   }else if(a=='2'){
   	ubahhargafashionp();
   }else if(a=='x'){
      before();
   	menuadmin();
   }else{
   	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}

void ubahhargafashionb(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+barufashion; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarufashion[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionbaru[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[10+x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionb[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[10+x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionb[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionb[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargafashionb[x]);
		tamp+=2;
      }
	}


char b;
	while(barufashion!=6 && b!='y'){
      while(true){
      gotoxy(42,38);printf("                            ");
      gotoxy(42,38);textcolor(15);cprintf("Harga Baru :");gotoxy(56,38);gets(price);
      if(strlen(price)<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(price)>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);printf("                            ");
   	hargaganti=atoi(price);
      while(true){
      gotoxy(42,38);textcolor(15);cprintf("Kode Barang :");gotoxy(56,38);gets(barang);
      if(strcmp(barang,code[10])==0){
      	hargafashionb[0]=hargaganti;
         break;
      }else if(strcmp(barang,code[11])==0){
      	hargafashionb[1]=hargaganti;
         break;
      }else if(strcmp(barang,code[12])==0){
      	hargafashionb[2]=hargaganti;
         break;
      }else if(strcmp(barang,code[13])==0){
      	hargafashionb[3]=hargaganti;
         break;
      }else if(strcmp(barang,code[14])==0){
      	hargabarufashion[0]=hargaganti;
         break;
      }else if(strcmp(barang,code[15])==0){
      	hargabarufashion[1]=hargaganti;
         break;
      }else if(strcmp(barang,code[16])==0){
      	hargabarufashion[2]=hargaganti;
         break;
      }else if(strcmp(barang,code[17])==0){
      	hargabarufashion[3]=hargaganti;
         break;
      }else if(strcmp(barang,code[18])==0){
      	hargabarufashion[4]=hargaganti;
         break;
      }else if(strcmp(barang,code[19])==0){
      	hargabarufashion[5]=hargaganti;
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(56,38);printf("                    ");
      }
      }
      gotoxy(42,38);printf("                            ");
      gotoxy(90,40);printf("Harga Berhasil Diubah...");Sleep(50);
      gotoxy(90,41);printf("Menuju Tak Terbatas dan Melampauinya...");
      getch();
      before();
      menuadmin();
    }
}

void ubahhargafashionp(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+barufashionp; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarufashionp[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionbarup[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[10+x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionp[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[10+x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionb[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionp[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargafashionp[x]);
		tamp+=2;
      }
	}

char b;
	while(barufashionp!=6 && b!='y'){
      while(true){
      gotoxy(42,38);printf("                            ");
      gotoxy(42,38);textcolor(15);cprintf("Harga Baru :");gotoxy(56,38);gets(price);
      if(strlen(price)<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(price)>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);printf("                            ");
   	hargaganti=atoi(price);
      while(true){
      gotoxy(42,38);textcolor(15);cprintf("Kode Barang :");gotoxy(56,38);gets(barang);
      if(strcmp(barang,code[10])==0){
      	hargafashionp[0]=hargaganti;
         break;
      }else if(strcmp(barang,code[11])==0){
      	hargafashionp[1]=hargaganti;
         break;
      }else if(strcmp(barang,code[12])==0){
      	hargafashionp[2]=hargaganti;
         break;
      }else if(strcmp(barang,code[13])==0){
      	hargafashionp[3]=hargaganti;
         break;
      }else if(strcmp(barang,code[14])==0){
      	hargabarufashionp[0]=hargaganti;
         break;
      }else if(strcmp(barang,code[15])==0){
      	hargabarufashionp[1]=hargaganti;
         break;
      }else if(strcmp(barang,code[16])==0){
      	hargabarufashionp[2]=hargaganti;
         break;
      }else if(strcmp(barang,code[17])==0){
      	hargabarufashionp[3]=hargaganti;
         break;
      }else if(strcmp(barang,code[18])==0){
      	hargabarufashionp[4]=hargaganti;
         break;
      }else if(strcmp(barang,code[19])==0){
      	hargabarufashionp[5]=hargaganti;
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(56,38);printf("                    ");
      }
      }
      gotoxy(42,38);printf("                            ");
      gotoxy(90,40);printf("Harga Berhasil Diubah...");Sleep(50);
      gotoxy(90,41);printf("Menuju Tak Terbatas dan Melampauinya...");
      getch();
      before();
      menuadmin();
    }
}

void ubahhargaacce(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   persegi(30,3,52,25);
   persegi(30,3,92,25);
   gotoxy(56,27);printf("1. Ubah Harga Pembelian");
   gotoxy(96,27);printf("2. Ubah Harga Pemesanan");
char a;
   while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   if(a=='1'){
      ubahhargaacceb();
   }else if(a=='2'){
   	ubahhargaaccep();
   }else if(a=='x'){
      before();
   	menuadmin();
   }else{
   	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}

void ubahhargaacceb(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+baruacce; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaruacce[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",accebaru[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[20+x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokacceb[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[20+x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",acceb[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokacceb[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargaacceb[x]);
		tamp+=2;
      }
	}


char b;
	do{
      while(true){
      gotoxy(42,38);printf("                            ");
      gotoxy(42,38);textcolor(15);cprintf("Harga Baru :");gotoxy(56,38);gets(price);
      if(strlen(price)<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(price)>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);printf("                            ");
   	hargaganti=atoi(price);
      while(true){
      gotoxy(42,38);textcolor(15);cprintf("Kode Barang :");gotoxy(56,38);gets(barang);
      if(strcmp(barang,code[20])==0){
      	hargaacceb[0]=hargaganti;
         break;
      }else if(strcmp(barang,code[21])==0){
      	hargaacceb[1]=hargaganti;
         break;
      }else if(strcmp(barang,code[22])==0){
      	hargaacceb[2]=hargaganti;
         break;
      }else if(strcmp(barang,code[23])==0){
      	hargaacceb[3]=hargaganti;
         break;
      }else if(strcmp(barang,code[24])==0){
      	hargabaruacce[0]=hargaganti;
         break;
      }else if(strcmp(barang,code[25])==0){
      	hargabaruacce[1]=hargaganti;
         break;
      }else if(strcmp(barang,code[26])==0){
      	hargabaruacce[2]=hargaganti;
         break;
      }else if(strcmp(barang,code[27])==0){
      	hargabaruacce[3]=hargaganti;
         break;
      }else if(strcmp(barang,code[28])==0){
      	hargabaruacce[4]=hargaganti;
         break;
      }else if(strcmp(barang,code[29])==0){
      	hargabaruacce[5]=hargaganti;
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(56,38);printf("                    ");
      }
      }
      gotoxy(90,40);printf("Harga Berhasil Diubah...");Sleep(50);
      gotoxy(90,41);printf("Menuju Tak Terbatas dan Melampauinya...");
      getch();
      before();
      menuadmin();
    }while(baruacce!=6 && b!='y');
}

void ubahhargaaccep(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+baruaccep; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaruaccep[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",accebarup[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[20+x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokaccep[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[20+x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",acceb[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokaccep[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargaaccep[x]);
		tamp+=2;
      }
	}

char b;
	do{
      while(true){
      gotoxy(42,38);printf("                            ");
      gotoxy(42,38);textcolor(15);cprintf("Harga Baru :");gotoxy(56,38);gets(price);
      if(strlen(price)<1){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
        	}else if(valharga(price)>0){
            gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
            gotoxy(50,41);printf("                        ");
         }else{
         	break;
         }
      }
      gotoxy(42,38);printf("                            ");
   	hargaganti=atoi(price);
      while(true){
      gotoxy(42,38);textcolor(15);cprintf("Kode Barang :");gotoxy(56,38);gets(barang);
      if(strcmp(barang,code[20])==0){
      	hargaaccep[0]=hargaganti;
         break;
      }else if(strcmp(barang,code[21])==0){
      	hargaaccep[1]=hargaganti;
         break;
      }else if(strcmp(barang,code[22])==0){
      	hargaaccep[2]=hargaganti;
         break;
      }else if(strcmp(barang,code[23])==0){
      	hargaaccep[3]=hargaganti;
         break;
      }else if(strcmp(barang,code[24])==0){
      	hargabaruaccep[0]=hargaganti;
         break;
      }else if(strcmp(barang,code[25])==0){
      	hargabaruaccep[1]=hargaganti;
         break;
      }else if(strcmp(barang,code[26])==0){
      	hargabaruaccep[2]=hargaganti;
         break;
      }else if(strcmp(barang,code[27])==0){
      	hargabaruaccep[3]=hargaganti;
         break;
      }else if(strcmp(barang,code[28])==0){
      	hargabaruaccep[4]=hargaganti;
         break;
      }else if(strcmp(barang,code[29])==0){
      	hargabaruaccep[5]=hargaganti;
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(56,38);printf("                    ");
      }
      }
      gotoxy(90,40);printf("Harga Berhasil Diubah...");Sleep(50);
      gotoxy(90,41);printf("Menuju Tak Terbatas dan Melampauinya...");
      getch();
      before();
      menuadmin();
    }while(barujerseyp!=6 && b!='y');
}

void hitungpendapatan(){
   for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }

   for(int x=1; x<=103; x++){
   	for(int y=1; y<=19; y++){
         gotoxy(33+x,19);printf("=");
         gotoxy(33+x,21);printf("=");
         gotoxy(33+x,39);printf("=");
         gotoxy(33+x,37);printf("=");
         gotoxy(33+x,33);printf("=");
         gotoxy(33,19+y);printf("||");
         gotoxy(85,19+y);printf("||");
         gotoxy(135,19+y);printf("||");
      }
   }
int tamp=0;
	gotoxy(53,20);printf("Beban - Beban");
   for(int x=0; x<5; x++){
		gotoxy(38,23+tamp);textcolor(15);cprintf("%s",beban[x]);
      gotoxy(36,23+tamp);textcolor(15);cprintf("%d.",x+1);
		gotoxy(68,23+tamp);textcolor(15);cprintf("Rp. %d,-",biayabeban[x]);
		tamp+=2;
      }
   int t=0;
    while(true){
char a[5];
    	gotoxy(42,38);printf("Masukkan Beban");gotoxy(58,38);gets(a);
    	if(strcmp(a,"1")==0){
      	totalbeban+=biayabeban[0];
         gotoxy(90,23+t);printf("%s",beban[0]);
         gotoxy(120,23+t);printf("Rp. %d,-",biayabeban[0]);
         t++;
    	}else if(strcmp(a,"2")==0){
         totalbeban+=biayabeban[1];
         gotoxy(90,23+t);printf("%s",beban[1]);
			gotoxy(120,23+t);printf("Rp. %d,-",biayabeban[1]);
         t++;
      }else if(strcmp(a,"3")==0){
         totalbeban+=biayabeban[2];
         gotoxy(90,23+t);printf("%s",beban[2]);
         gotoxy(120,23+t);printf("Rp. %d,-",biayabeban[2]);
         t++;
      }else if(strcmp(a,"4")==0){
         totalbeban+=biayabeban[3];
         gotoxy(90,23+t);printf("%s",beban[3]);
         gotoxy(120,23+t);printf("Rp. %d,-",biayabeban[3]);
         t++;
      }else if(strcmp(a,"5")==0){
         totalbeban+=biayabeban[4];
         gotoxy(90,23+t);printf("%s",beban[4]);
         gotoxy(120,23+t);printf("Rp. %d,-",biayabeban[4]);
         t++;
      }else if(strcmp(a,"x")==0){
         break;
      }else{
         gotoxy(90,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(90,40);printf("               ");
      }gotoxy(58,38);printf("   ");
    }
    gotoxy(88,35);printf("Total Beban");
    gotoxy(88,36);printf("Total Penjualan");
    gotoxy(118,35);printf("Rp. (%d,-)",totalbeban);
    gotoxy(118,36);printf("Rp. %d,-",penjualan);
    LR=penjualan-totalbeban;
    if(LR>=0){
    	gotoxy(88,38);printf("Laba Neto");
    }else{
    	gotoxy(88,38);printf("Rugi Usaha");
    }
    gotoxy(118,38);printf("Rp. %d,-",LR);
    getch();
    totalbeban=0;
    before();
    menuadmin();
}

//================================[CUSTOMER]==================================//
void before(){
	clrscr();
	transisi1(0);
	bingkaicustom();
      for(int x=1; x<=36; x++){
   	gotoxy(76,17);textbackground(0);textcolor(x);cprintf("**********************");Sleep(50);
      gotoxy(75,18);textbackground(0);textcolor(x);cprintf("*                      *");
      gotoxy(74,19);textbackground(0);textcolor(x);cprintf("* ********************** *");
      gotoxy(73,20);textbackground(0);textcolor(x);cprintf("* ************************ *");
     	gotoxy(72,21);textbackground(0);textcolor(x);cprintf("* **                      ** *");
    	gotoxy(71,22);textbackground(0);textcolor(x);cprintf("* **  **  **  ******** **** ** *");
   	gotoxy(70,23);textbackground(0);textcolor(x);cprintf("* **   **  **  ******** ***** ** *");
  		gotoxy(69,24);textbackground(0);textcolor(x);cprintf("* ** *  **  **  ******** ****** ** *");
 		gotoxy(68,25);textbackground(0);textcolor(x);cprintf("* ** **  **  **  ******** ******* ** *");
		gotoxy(68,26);textbackground(0);textcolor(x);cprintf("* *  **  **  **  ******** ******** * *");
		gotoxy(68,27);textbackground(0);textcolor(x);cprintf("* *  **  **  **  ******** ******** * *");
		gotoxy(68,28);textbackground(0);textcolor(x);cprintf("* *  **  **  **                    * *");
		gotoxy(68,29);textbackground(0);textcolor(x);cprintf("* *  **  **  **  ******** ******** * *");
      gotoxy(68,30);textbackground(0);textcolor(x);cprintf("* *  **  **  **  ******** ******** * *");
		gotoxy(68,31);textbackground(0);textcolor(x);cprintf("* *  **  **  **  ******** ******** * *");
		gotoxy(68,32);textbackground(0);textcolor(x);cprintf("* *  **  **  **  ******** ******* ** *");
 		gotoxy(68,33);textbackground(0);textcolor(x);cprintf("* ** **  **  **  ******** ****** ** *");
  		gotoxy(69,34);textbackground(0);textcolor(x);cprintf("* ** *  **  **  ******** ***** ** *");
      gotoxy(70,35);textbackground(0);textcolor(x);cprintf("* **   **  **  ******** **** ** *");
    	gotoxy(71,36);textbackground(0);textcolor(x);cprintf("* **                       ** *");
     	gotoxy(72,37);textbackground(0);textcolor(x);cprintf("* ************************* *");
      gotoxy(73,38);textbackground(0);textcolor(x);cprintf("* *********************** *");
      gotoxy(74,39);textbackground(0);textcolor(x);cprintf("*                       *");
      gotoxy(75,40);textbackground(0);textcolor(x);cprintf("**********************");
      }
      gotoxy(85,22);textbackground(0);textcolor(15);cprintf("*******  ****");
		gotoxy(85,23);textbackground(0);textcolor(15);cprintf("*******  *****");
		gotoxy(85,24);textbackground(0);textcolor(15);cprintf("*******  ******");
		gotoxy(85,25);textbackground(0);textcolor(15);cprintf("*******  *******");
		gotoxy(85,26);textbackground(0);textcolor(15);cprintf("*******  ********");
		gotoxy(85,27);textbackground(0);textcolor(15);cprintf("*******  ********");
		gotoxy(85,29);textbackground(0);textcolor(15);cprintf("*******  ********");
		gotoxy(85,30);textbackground(0);textcolor(15);cprintf("*******  ********");
		gotoxy(85,31);textbackground(0);textcolor(15);cprintf("*******  ********");
		gotoxy(85,32);textbackground(0);textcolor(15);cprintf("*******  *******");
      gotoxy(85,33);textbackground(0);textcolor(15);cprintf("*******  ******");
		gotoxy(85,34);textbackground(0);textcolor(15);cprintf("*******  *****");
		gotoxy(85,35);textbackground(0);textcolor(15);cprintf("*******  ****");

		gotoxy(74,21);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(73,22);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(72,23);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(71,24);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(70,25);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(70,26);textbackground(0);textcolor(15);cprintf("*");
		gotoxy(70,27);textbackground(0);textcolor(15);cprintf("*");
		gotoxy(70,28);textbackground(0);textcolor(15);cprintf("*");
		gotoxy(70,29);textbackground(0);textcolor(15);cprintf("*");
		gotoxy(70,30);textbackground(0);textcolor(15);cprintf("*");
		gotoxy(70,31);textbackground(0);textcolor(15);cprintf("*");
		gotoxy(70,32);textbackground(0);textcolor(15);cprintf("*");
		gotoxy(70,33);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(71,34);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(72,35);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(73,36);textbackground(0);textcolor(15);cprintf("**");

		gotoxy(98,21);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(99,22);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(100,23);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(101,24);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(102,25);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(103,26);textbackground(0);textcolor(15);cprintf("*");
		gotoxy(103,27);textbackground(0);textcolor(15);cprintf("*");
		gotoxy(103,28);textbackground(0);textcolor(15);cprintf("*");
		gotoxy(103,29);textbackground(0);textcolor(15);cprintf("*");
		gotoxy(103,30);textbackground(0);textcolor(15);cprintf("*");
		gotoxy(103,31);textbackground(0);textcolor(15);cprintf("*");
		gotoxy(102,32);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(101,33);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(100,34);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(99,35);textbackground(0);textcolor(15);cprintf("**");
		gotoxy(98,36);textbackground(0);textcolor(15);cprintf("**");

      gotoxy(76,19);textbackground(0);textcolor(15);cprintf("**********************");
      gotoxy(75,20);textbackground(0);textcolor(15);cprintf("************************");

      gotoxy(74,37);textbackground(0);textcolor(15);cprintf("*************************");
      gotoxy(75,38);textbackground(0);textcolor(15);cprintf("***********************");
}

void menucustomer(){
before();
char a;
	gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   for(int x=0; x<=27; x++){
      gotoxy(2+x,19);textbackground(4);cprintf(" ");
      gotoxy(2+x,23);textbackground(4);cprintf(" ");
      gotoxy(2+x,27);textbackground(4);cprintf(" ");
      gotoxy(2+x,31);textbackground(4);cprintf(" ");
      gotoxy(2+x,35);textbackground(4);cprintf(" ");
    	gotoxy(2+x,39);textbackground(4);cprintf(" ");
   }
	gotoxy(4,17);textbackground(0);textcolor(15);cprintf("1. Profil");
	gotoxy(4,21);textbackground(0);textcolor(15);cprintf("2. Pembelian");
	gotoxy(4,25);textbackground(0);textcolor(15);cprintf("3. Pemesanan");
	gotoxy(4,29);textbackground(0);textcolor(15);cprintf("4. AC Milan");
	gotoxy(4,33);textbackground(0);textcolor(15);cprintf("5. Kembali");
	gotoxy(4,37);textbackground(0);textcolor(15);cprintf("6. Keluar");
	gotoxy(4,41);textbackground(0);textcolor(15);cprintf("Pilihan:");
	while(true){
		gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
		if(a=='1'){
      	profil();
   	}else if(a=='2'){
      	pembelian();
   	}else if(a=='3'){
      	pemesanan();
   	}else if(a=='4'){
      	milan();
   	}else if(a=='5'){
      	tampilanpilih();
   	}else if(a=='6'){
      	exit(0);
   	}else{
      for(int x=1; x<=26; x++){
      	for(int y=1; y<=13; y++){
         	gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         }
      }
   	gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      for(int x=1; x<=26; x++){
      	for(int y=1; y<=13; y++){
         	gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         }
      }
      gotoxy(5,8);textbackground(0);textcolor(4);cprintf("                     ");
      gotoxy(11,3);textbackground(0);textcolor(4);cprintf("   @@@@   ");
		gotoxy(11,4);textbackground(0);textcolor(4);cprintf("  @@@ @@  ");
		gotoxy(11,5);textbackground(0);textcolor(4);cprintf(" @@ @ @@@ ");
		gotoxy(11,6);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
		gotoxy(11,7);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
		gotoxy(11,8);textbackground(0);textcolor(4);cprintf("@ @ @    @");
		gotoxy(11,9);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
		gotoxy(11,10);textbackground(0);textcolor(4);cprintf("@ @ @ @@@@");
		gotoxy(11,11);textbackground(0);textcolor(4);cprintf(" @@ @ @@@ ");
		gotoxy(11,12);textbackground(0);textcolor(4);cprintf("  @@@ @@  ");
		gotoxy(11,13);textbackground(0);textcolor(4);cprintf("   @@@@   ");
      gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}

void pembelian(){

	gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   for(int x=2; x<=29; x++){
   	for(int y=1; y<=22; y++){
      	gotoxy(x,16+y);textbackground(0);textcolor(15);cprintf(" ");
      }
   }
   for(int x=0; x<=42; x++){
   	gotoxy(30,1+x);textbackground(4);textcolor(15);cprintf(" ");
      gotoxy(1,1+x);textbackground(4);textcolor(15);cprintf(" ");
   }

   for(int x=1; x<=30; x++){
   	gotoxy(x,23);textbackground(4);textcolor(15);cprintf(" ");
      gotoxy(x,31);textbackground(4);textcolor(15);cprintf(" ");
   }

	gotoxy(4,19);textbackground(0);textcolor(15);cprintf("1. Jersey");
	gotoxy(4,27);textbackground(0);textcolor(15);cprintf("2. Fashion");
	gotoxy(4,35);textbackground(0);textcolor(15);cprintf("3. Accessories");
   gotoxy(4,41);textbackground(0);textcolor(15);cprintf("Pilihan:");
   gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
	while(true){
		gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
		if(a=='1'){
      	jersey();
   	}else if(a=='2'){
      	fashion();
   	}else if(a=='3'){
      	acce();
   	}else if(a=='x'){
         menucustomer();
		}else{
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}

void jersey(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+barujersey; x++){
      if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaru[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kitsbaru[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stok[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kits[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stok[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargajerseyb[x]);
		tamp+=2;
      }
	}


char s[3];
char b;
char kode[4];
	do{
      while(true){
		gotoxy(42,38);textcolor(15);cprintf("Pilih Kode Produk :");gotoxy(62,38);gets(kode);
      if(strcmp(kode,code[0])==0){
      	strcpy(kitsnota[cek],kits[0]);
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kits[0]);
         break;
      }else if(strcmp(kode,code[1])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kits[1]);
         strcpy(kitsnota[cek],kits[1]);
         break;
      }else if(strcmp(kode,code[2])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kits[2]);
         strcpy(kitsnota[cek],kits[2]);
         break;
      }else if(strcmp(kode,code[3])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kits[3]);
         strcpy(kitsnota[cek],kits[3]);
         break;
      }else if(strcmp(kode,code[4])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kitsbaru[0]);
         strcpy(kitsnota[cek],kitsbaru[0]);
         break;
      }else if(strcmp(kode,code[5])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kitsbaru[1]);
         strcpy(kitsnota[cek],kitsbaru[1]);
         break;
      }else if(strcmp(kode,code[6])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kitsbaru[2]);
         strcpy(kitsnota[cek],kitsbaru[2]);
         break;
      }else if(strcmp(kode,code[7])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kitsbaru[3]);
         strcpy(kitsnota[cek],kitsbaru[3]);
         break;
      }else if(strcmp(kode,code[8])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kitsbaru[4]);
         strcpy(kitsnota[cek],kitsbaru[4]);
         break;
      }else if(strcmp(kode,code[9])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kitsbaru[5]);
         strcpy(kitsnota[cek],kitsbaru[5]);
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(62,38);printf("                    ");
      }
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}
   while(true){
      while(true){
   		gotoxy(62,38);printf("               ");
   		gotoxy(42,38);textcolor(15);cprintf("Quantity          :");gotoxy(62,38);gets(s);
   		if(strlen(s)<1){
   			gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
      		gotoxy(50,41);printf("                   ");
  	 		}else if(strlen(s)>2){
      		gotoxy(50,41);printf("Maksimal 2 Karakter");Sleep(500);
      		gotoxy(50,41);printf("                       ");
   		}else if(valharga(s)>0){
   			gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
      		gotoxy(50,41);printf("                        ");
      	}else {
         	break;
         }
       }
   	s1=atoi(s);

      if(strcmp(kode,code[0])==0){
         if(s1<stok[0]){
         	stok[0]=stok[0]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stok[0]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }

      }else if(strcmp(kode,code[1])==0){
         if(s1<stok[1]){
         	stok[1]=stok[1]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stok[1]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[2])==0){
         if(s1<stok[2]){
         	stok[2]=stok[2]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stok[2]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[3])==0){
         if(s1<stok[3]){
         	stok[3]=stok[3]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stok[3]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[4])==0){
         if(s1<stok[4]){
         	stok[4]=stok[4]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stok[4]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[5])==0){
         if(s1<stok[5]){
         	stok[5]=stok[5]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stok[5]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[6])==0){
         if(s1<stok[6]){
         	stok[6]=stok[6]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stok[6]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[7])==0){
         if(s1<stok[7]){
         	stok[7]=stok[7]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stok[7]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[8])==0){
         if(s1<stok[8]){
         	stok[8]=stok[8]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stok[8]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[9])==0){
         if(s1<stok[9]){
         	stok[9]=stok[9]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stok[9]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }
   }
      if(strcmp(kode,code[0])==0){
         total=s1*hargajerseyb[0];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargajerseyb[0];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[1])==0){
         total=s1*hargajerseyb[1];
         harganota[0+cek]=hargajerseyb[1];
         totalnota[0+cek]=total;
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[2])==0){
         total=s1*hargajerseyb[2];
         harganota[0+cek]=hargajerseyb[2];
      	totalnota[0+cek]=total;
         gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[3])==0){
         total=s1*hargajerseyb[3];
         harganota[0+cek]=hargajerseyb[3];
         totalnota[0+cek]=total;
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[4])==0){
         total=s1*hargabaru[0];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaru[0];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[5])==0){
         total=s1*hargabaru[1];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaru[1];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[6])==0){
         total=s1*hargabaru[2];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaru[2];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[7])==0){
         total=s1*hargabaru[3];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaru[3];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[8])==0){
         total=s1*hargabaru[4];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaru[4];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[9])==0){
         total=s1*hargabaru[5];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaru[5];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}
while(true){
   	gotoxy(42,38);textcolor(15);cprintf("Selesai Memilih? (y/t)");b=getche();
      if(b=='y' || b=='t'){
       break;
      }else{
      	gotoxy(40,41);printf("Inputan Invalid");Sleep(500);
         gotoxy(40,41);printf("               ");
         gotoxy(59,38);printf("  ");
      }
      }
   ttl=ttl+total;
   x+=2;
   cek++;
	}while(cek!=6 && b!='y');
   x=0;
   penjualan+=ttl;
   gotoxy(92,36);textbackground(0);textcolor(15);cprintf("___________________________________+");
   gotoxy(91,38);textbackground(0);textcolor(15);cprintf("  Total Pembayaran   ");
   gotoxy(113,38);textbackground(0);textcolor(15);cprintf("Rp. %d,-",ttl);
   gotoxy(40,40);textbackground(0);textcolor(15);cprintf("Tekan x Untuk Lanjut Pembayaran");
   gotoxy(40,41);textbackground(0);textcolor(15);cprintf("Tekan y Untuk Batalkan Pembelian");
	while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   	if(a=='x'){
         gotoxy(90,40);textcolor(15);cprintf("Masukkan Uang          Rp. ");
         while(true){
         		gotoxy(117,40);textcolor(15);cprintf("                   ");
         		gotoxy(117,40);gets(bayar);
      		if(strlen(bayar)<1 ){
      			gotoxy(110,41);printf("Tidak Boleh Kosong!");Sleep(500);
         		gotoxy(110,41);printf("                   ");
      		}else if(valharga(bayar)>0 ){
         		gotoxy(118,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            	gotoxy(118,41);printf("                         ");
         	}else{
         		break;
         	}
      	}

   		uang=atoi(bayar);
         if(uang>=ttl){
         	kembalian=uang-ttl;
            gotoxy(90,40);textcolor(15);cprintf("                                     ");
            for(int x=0; x<=15; x++){
               //gotoxy(90,41);textcolor(15);cprintf("                            ");
            	gotoxy(90,40);textcolor(15);cprintf("Harap Tunggu....");Sleep(200);
               gotoxy(90+x,41);textcolor(15);cprintf("%c",219);
            }
            gotoxy(90,42);textcolor(15);cprintf("Pembelian Berhasil...");Sleep(2000);
            clrscr();
            nota();
         }else{
         	gotoxy(90,42);printf("Uang Anda Kurang!!");Sleep(1000);
            gotoxy(90,42);printf("                  ");
            gotoxy(105,40);printf("                              ");
         }
   	}else if(a=='y'){
      	gotoxy(90,40);printf("Pembelian Dibatalkan...");Sleep(2000);
         if(strcmp(kode,code[0])==0){
         	stok[0]=stok[0]+s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stok[0]);
      	}else if(strcmp(kode,code[1])==0){
         	stok[1]=stok[1]+s1;
      		gotoxy(66,23);textbackground(0);textcolor(15);cprintf("%d  ",stok[1]);
      	}else if(strcmp(kode,code[2])==0){
         	stok[2]=stok[2]+s1;
      		gotoxy(66,25);textbackground(0);textcolor(15);cprintf("%d  ",stok[2]);
      	}else if(strcmp(kode,code[3])==0){
         	stok[3]=stok[3]+s1;
      		gotoxy(66,27);textbackground(0);textcolor(15);cprintf("%d  ",stok[3]);
      	}else if(strcmp(kode,code[4])==0){
         	stok[4]=stok[4]+s1;
      		gotoxy(66,29);textbackground(0);textcolor(15);cprintf("%d  ",stok[4]);
      	}else if(strcmp(kode,code[5])==0){
         	stok[5]=stok[5]+s1;
      		gotoxy(66,31);textbackground(0);textcolor(15);cprintf("%d  ",stok[5]);
      	}else if(strcmp(kode,code[6])==0){
         	stok[6]=stok[6]+s1;
      		gotoxy(66,33);textbackground(0);textcolor(15);cprintf("%d  ",stok[6]);
      	}else if(strcmp(kode,code[7])==0){
         	stok[7]=stok[7]+s1;
      		gotoxy(66,36);textbackground(0);textcolor(15);cprintf("%d  ",stok[7]);
      	}else if(strcmp(kode,code[8])==0){
         	stok[8]=stok[8]+s1;
      		gotoxy(66,39);textbackground(0);textcolor(15);cprintf("%d  ",stok[8]);
      	}else if(strcmp(kode,code[9])==0){
         	stok[9]=stok[9]+s1;
      		gotoxy(66,41);textbackground(0);textcolor(15);cprintf("%d  ",stok[9]);
         }
      }else{
           gotoxy(90,40);printf("Inputan Invalid!");Sleep(500);
           gotoxy(90,40);printf("                  ");
      }
   }
   ttl=NULL;
         cek=NULL;
         before();
         menucustomer();
}
void fashion(){
   gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

    int tamp=0;
	for(int x=0; x<4+barufashion; x++){
      if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarufashion[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionbaru[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[10+x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionb[x+4]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[10+x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionb[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionb[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargafashionb[x]);
		tamp+=2;
      }
	}
char s[3];
char b;
char kode[4];
	do{
      while(true){
		gotoxy(42,38);textcolor(15);cprintf("Pilih Kode Produk :");gotoxy(62,38);gets(kode);
      if(strcmp(kode,code[10])==0){
      	strcpy(kitsnota[cek],fashionb[0]);
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionb[0]);
         break;
      }else if(strcmp(kode,code[11])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionb[1]);
         strcpy(kitsnota[cek],fashionb[1]);
         break;
      }else if(strcmp(kode,code[12])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionb[2]);
         strcpy(kitsnota[cek],fashionb[2]);
         break;
      }else if(strcmp(kode,code[13])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionb[3]);
         strcpy(kitsnota[cek],fashionb[3]);
         break;
      }else if(strcmp(kode,code[14])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionbaru[0]);
         strcpy(kitsnota[cek],fashionbaru[0]);
         break;
      }else if(strcmp(kode,code[15])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionbaru[1]);
         strcpy(kitsnota[cek],fashionbaru[1]);
         break;
      }else if(strcmp(kode,code[16])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionbaru[2]);
         strcpy(kitsnota[cek],fashionbaru[2]);
         break;
      }else if(strcmp(kode,code[17])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionbaru[3]);
         strcpy(kitsnota[cek],fashionbaru[3]);
         break;
      }else if(strcmp(kode,code[18])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionbaru[4]);
         strcpy(kitsnota[cek],fashionbaru[4]);
         break;
      }else if(strcmp(kode,code[19])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionbaru[5]);
         strcpy(kitsnota[cek],fashionbaru[5]);
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(62,38);printf("                    ");
      }
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}
   while(true){
      while(true){
   		gotoxy(62,38);printf("               ");
   		gotoxy(42,38);textcolor(15);cprintf("Quantity          :");gotoxy(62,38);gets(s);
   		if(strlen(s)<1){
   			gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
      		gotoxy(50,41);printf("                   ");
  	 		}else if(strlen(s)>2){
      		gotoxy(50,41);printf("Maksimal 2 Karakter");Sleep(500);
      		gotoxy(50,41);printf("                       ");
   		}else if(valharga(s)>0){
   			gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
      		gotoxy(50,41);printf("                        ");
      	}else {
         	break;
         }
       }
   s1=atoi(s);
      if(strcmp(kode,code[10])==0){
         if(s1<stokfashionb[0]){
         	stokfashionb[0]=stokfashionb[0]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[0]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[11])==0){
         if(s1<stokfashionb[1]){
         	stokfashionb[1]=stokfashionb[1]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[1]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[12])==0){
         if(s1<stokfashionb[2]){
         	stokfashionb[2]=stokfashionb[2]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[2]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[13])==0){
         if(s1<stokfashionb[3]){
         	stokfashionb[3]=stokfashionb[3]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[3]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[14])==0){
         if(s1<stokfashionb[4]){
         	stokfashionb[4]=stokfashionb[4]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[4]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[15])==0){
         if(s1<stokfashionb[5]){
         	stokfashionb[5]=stokfashionb[5]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[5]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[16])==0){
         if(s1<stokfashionb[6]){
         	stokfashionb[6]=stokfashionb[6]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[6]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[17])==0){
         if(s1<stokfashionb[7]){
         	stokfashionb[7]=stokfashionb[7]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[7]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[18])==0){
         if(s1<stokfashionb[8]){
         	stokfashionb[8]=stokfashionb[8]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[8]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[19])==0){
         if(s1<stokfashionb[9]){
         	stokfashionb[9]=stokfashionb[9]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[9]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }
   }
      if(strcmp(kode,code[10])==0){
         total=s1*hargafashionb[0];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargafashionb[0];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[11])==0){
         total=s1*hargafashionb[1];
         harganota[0+cek]=hargafashionb[1];
         totalnota[0+cek]=total;
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[12])==0){
         total=s1*hargafashionb[2];
         harganota[0+cek]=hargafashionb[2];
      	totalnota[0+cek]=total;
         gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[13])==0){
         total=s1*hargafashionb[3];
         harganota[0+cek]=hargafashionb[3];
         totalnota[0+cek]=total;
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[14])==0){
         total=s1*hargabarufashion[0];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarufashion[0];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[15])==0){
         total=s1*hargabarufashion[1];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarufashion[1];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[16])==0){
         total=s1*hargabarufashion[2];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarufashion[2];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[17])==0){
         total=s1*hargabaru[3];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarufashion[3];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[18])==0){
         total=s1*hargabarufashion[4];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarufashion[4];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[19])==0){
         total=s1*hargabarufashion[5];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarufashion[5];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}

   while(true){
   	gotoxy(42,38);textcolor(15);cprintf("Selesai Memilih? (y/t)");b=getche();
      if(b=='y' || b=='t'){
       break;
      }else{
      	gotoxy(40,41);printf("Inputan Invalid");Sleep(500);
         gotoxy(40,41);printf("               ");
         gotoxy(59,38);printf("  ");
      }
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}
   ttl=ttl+total;
   x+=2;
   cek++;
	}while(cek!=6 && b!='y');
   x=0;
   penjualan+=ttl;
   gotoxy(92,36);textbackground(0);textcolor(15);cprintf("___________________________________+");
   gotoxy(91,38);textbackground(0);textcolor(15);cprintf("  Total Pembayaran   ");
   gotoxy(113,38);textbackground(0);textcolor(15);cprintf("Rp. %d,-",ttl);
   gotoxy(40,40);textbackground(0);textcolor(15);cprintf("Tekan x Untuk Lanjut Pembayaran");
   gotoxy(40,41);textbackground(0);textcolor(15);cprintf("Tekan y Untuk Batalkan Pembelian");

	while(true){
     gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   	if(a=='x'){
      	gotoxy(90,40);textcolor(15);cprintf("Masukkan Uang          Rp. ");
         while(true){
         gotoxy(117,40);textcolor(15);cprintf("                     ");
         gotoxy(117,40);gets(bayar);
      	if(strlen(bayar)<1 ){
      		gotoxy(110,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(110,41);printf("                   ");
      	}else if(valharga(bayar)>0 ){
         	gotoxy(118,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(118,41);printf("                         ");
         }else{
         	break;
         }
      }
   		uang=atoi(bayar);
         if(uang>=ttl){
         	kembalian=uang-ttl;
            gotoxy(90,40);textcolor(15);cprintf("                                     ");            for(int x=0; x<=15; x++){
               //gotoxy(90,41);textcolor(15);cprintf("                            ");
            	gotoxy(90,40);textcolor(15);cprintf("Harap Tunggu....");Sleep(200);
               gotoxy(90+x,41);textcolor(15);cprintf("%c",219);
            }
            gotoxy(90,42);textcolor(15);cprintf("Pembelian Berhasil...");Sleep(2000);
            clrscr();
            nota();
         }else{
         	gotoxy(90,42);printf("Uang Anda Kurang!!");Sleep(1000);
            gotoxy(90,42);printf("                  ");
            gotoxy(105,40);printf("                              ");
         }
      }else if(a=='y'){
      	gotoxy(90,40);printf("Pembelian Dibatalkan...");Sleep(2000);
         if(strcmp(kode,code[10])==0){
         	stokfashionb[0]=stokfashionb[0]+s1;
      	}else if(strcmp(kode,code[11])==0){
         	stokfashionb[1]=stokfashionb[1]+s1;
      		gotoxy(66,23);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[1]);
      	}else if(strcmp(kode,code[12])==0){
         	stokfashionb[2]=stokfashionb[2]+s1;
      		gotoxy(66,25);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[2]);
      	}else if(strcmp(kode,code[13])==0){
         	stokfashionb[3]=stokfashionb[3]+s1;
      		gotoxy(66,27);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[3]);
      	}else if(strcmp(kode,code[14])==0){
         	stokfashionb[4]=stokfashionb[4]+s1;
      		gotoxy(66,29);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[4]);
      	}else if(strcmp(kode,code[15])==0){
         	stokfashionb[5]=stokfashionb[5]+s1;
      		gotoxy(66,31);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[5]);
      	}else if(strcmp(kode,code[16])==0){
         	stokfashionb[6]=stokfashionb[6]+s1;
      		gotoxy(66,33);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[6]);
      	}else if(strcmp(kode,code[17])==0){
         	stokfashionb[7]=stokfashionb[7]+s1;
      		gotoxy(66,36);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[7]);
      	}else if(strcmp(kode,code[18])==0){
         	stokfashionb[8]=stokfashionb[8]+s1;
      		gotoxy(66,39);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[8]);
      	}else if(strcmp(kode,code[19])==0){
         	stokfashionb[9]=stokfashionb[9]+s1;
      		gotoxy(66,41);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionb[9]);
         }
      }else{
           gotoxy(90,40);printf("Inputan Invalid!");Sleep(500);
            gotoxy(90,40);printf("                        ");
      }

   }ttl=0;
         cek=0;
         before();
         menucustomer();
}

void acce(){
   gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+baruacce; x++){
      if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaruacce[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",accebaru[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[20+x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokacceb[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[20+x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",acceb[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokacceb[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargaacceb[x]);
		tamp+=2;
      }
	}


char s[3];
char b;
char kode[4];
	do{
      while(true){
		gotoxy(42,38);textcolor(15);cprintf("Pilih Kode Produk :");gotoxy(62,38);gets(kode);
      if(strcmp(kode,code[20])==0){
      	strcpy(kitsnota[cek],acceb[0]);
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",acceb[0]);
         break;
      }else if(strcmp(kode,code[21])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",acceb[1]);
         strcpy(kitsnota[cek],acceb[1]);
         break;
      }else if(strcmp(kode,code[22])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",acceb[2]);
         strcpy(kitsnota[cek],acceb[2]);
         break;
      }else if(strcmp(kode,code[23])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",acceb[3]);
         strcpy(kitsnota[cek],acceb[3]);
         break;
      }else if(strcmp(kode,code[24])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",accebaru[0]);
         strcpy(kitsnota[cek],accebaru[0]);
         break;
      }else if(strcmp(kode,code[25])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",accebaru[1]);
         strcpy(kitsnota[cek],accebaru[1]);
         break;
      }else if(strcmp(kode,code[26])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",accebaru[2]);
         strcpy(kitsnota[cek],accebaru[2]);
         break;
      }else if(strcmp(kode,code[27])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",accebaru[3]);
         strcpy(kitsnota[cek],accebaru[3]);
         break;
      }else if(strcmp(kode,code[28])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",accebaru[4]);
         strcpy(kitsnota[cek],accebaru[4]);
         break;
      }else if(strcmp(kode,code[29])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",accebaru[5]);
         strcpy(kitsnota[cek],accebaru[5]);
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(62,38);printf("                    ");
      }
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}

  while(true){
      while(true){
   		gotoxy(62,38);printf("               ");
   		gotoxy(42,38);textcolor(15);cprintf("Quantity          :");gotoxy(62,38);gets(s);
   		if(strlen(s)<1){
   			gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
      		gotoxy(50,41);printf("                   ");
  	 		}else if(strlen(s)>2){
      		gotoxy(50,41);printf("Maksimal 2 Karakter");Sleep(500);
      		gotoxy(50,41);printf("                       ");
   		}else if(valharga(s)>0){
   			gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
      		gotoxy(50,41);printf("                        ");
      	}else {
         	break;
         }
       }
   s1=atoi(s);
      if(strcmp(kode,code[20])==0){
         if(s1<stokacceb[0]){
         	stokacceb[0]=stokacceb[0]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[0]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[21])==0){
         if(s1<stokacceb[1]){
         	stokacceb[1]=stokacceb[1]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[1]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[22])==0){
         if(s1<stokacceb[2]){
         	stokacceb[2]=stokacceb[2]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[2]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[23])==0){
         if(s1<stokacceb[3]){
         	stokacceb[3]=stokacceb[3]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[3]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[24])==0){
         if(s1<stokacceb[4]){
         	stokacceb[4]=stokacceb[4]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[4]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[25])==0){
         if(s1<stokacceb[5]){
         	stokacceb[5]=stokacceb[5]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[5]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[26])==0){
         if(s1<stokacceb[6]){
         	stokacceb[6]=stokacceb[6]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[6]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[27])==0){
         if(s1<stokacceb[7]){
         	stokacceb[7]=stokacceb[7]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[7]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[28])==0){
         if(s1<stokacceb[8]){
         	stokacceb[8]=stokacceb[8]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[8]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[29])==0){
         if(s1<stokacceb[9]){
         	stokacceb[9]=stokacceb[9]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[9]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }
   }
      if(strcmp(kode,code[20])==0){
         total=s1*hargaacceb[0];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargaacceb[0];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[21])==0){
         total=s1*hargaacceb[1];
         harganota[0+cek]=hargaacceb[1];
         totalnota[0+cek]=total;
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[22])==0){
         total=s1*hargaacceb[2];
         harganota[0+cek]=hargaacceb[2];
      	totalnota[0+cek]=total;
         gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[23])==0){
         total=s1*hargaacceb[3];
         harganota[0+cek]=hargaacceb[3];
         totalnota[0+cek]=total;
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[24])==0){
         total=s1*hargabaruacce[0];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaruacce[0];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[25])==0){
         total=s1*hargabaruacce[1];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaruacce[1];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[26])==0){
         total=s1*hargabaruacce[2];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaruacce[2];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[27])==0){
         total=s1*hargabaruacce[3];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaruacce[3];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[28])==0){
         total=s1*hargabaruacce[4];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaruacce[4];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[29])==0){
         total=s1*hargabaruacce[5];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaruacce[5];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}

      while(true){
   	gotoxy(42,38);textcolor(15);cprintf("Selesai Memilih? (y/t)");b=getche();
      if(b=='y' || b=='t'){
       break;
      }else{
      	gotoxy(40,41);printf("Inputan Invalid");Sleep(500);
         gotoxy(40,41);printf("                ");
         gotoxy(58,38);printf("  ");
      }
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}
   ttl=ttl+total;
   x+=2;
   cek++;
	}while(cek!=6 && b!='y');
   x=0;
   penjualan+=ttl;
   gotoxy(92,36);textbackground(0);textcolor(15);cprintf("___________________________________+");
   gotoxy(91,38);textbackground(0);textcolor(15);cprintf("  Total Pembayaran   ");
   gotoxy(113,38);textbackground(0);textcolor(15);cprintf("Rp. %d,-",ttl);
   gotoxy(40,40);textbackground(0);textcolor(15);cprintf("Tekan x Untuk Lanjut Pembayaran");
   gotoxy(40,41);textbackground(0);textcolor(15);cprintf("Tekan y Untuk Batalkan Pembelian");
char a;
   while(true){
      gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   	if(a=='x'){
      	gotoxy(90,40);textcolor(15);cprintf("Masukkan Uang          Rp. ");
         while(true){
         gotoxy(117,40);textcolor(15);cprintf("                    ");
         gotoxy(117,40);gets(bayar);
      	if(strlen(bayar)<1 ){
      		gotoxy(110,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(110,41);printf("                   ");
      	}else if(valharga(bayar)>0 ){
         	gotoxy(118,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(118,41);printf("                         ");
         }else{
         	break;
         }
      }
   		uang=atoi(bayar);
         if(uang>=ttl){
         	kembalian=uang-ttl;
            gotoxy(90,40);textcolor(15);cprintf("                                     ");
            for(int x=0; x<=15; x++){
               //gotoxy(90,41);textcolor(15);cprintf("                            ");
            	gotoxy(90,40);textcolor(15);cprintf("Harap Tunggu....");Sleep(200);
               gotoxy(90+x,41);textcolor(15);cprintf("%c",219);
            }
            gotoxy(90,42);textcolor(15);cprintf("Pembelian Berhasil...");Sleep(2000);
            clrscr();
            nota();
         }else{
         	gotoxy(90,42);printf("Uang Anda Kurang!!");Sleep(1000);
            gotoxy(90,42);printf("                  ");
            gotoxy(105,40);printf("                              ");
         }
   	}else if(a=='y'){
      	gotoxy(90,40);printf("Pembelian Dibatalkan...");Sleep(2000);
         if(strcmp(kode,code[20])==0){
         stokacceb[0]=stokacceb[0]+s1;
      	gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[0]);
      }else if(strcmp(kode,code[21])==0){
         stokacceb[1]=stokacceb[1]+s1;
      	gotoxy(66,23);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[1]);
      }else if(strcmp(kode,code[22])==0){
         stokacceb[2]=stokacceb[2]+s1;
      	gotoxy(66,25);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[2]);
      }else if(strcmp(kode,code[23])==0){
         stokacceb[3]=stokacceb[3]+s1;
      	gotoxy(66,27);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[3]);
      }else if(strcmp(kode,code[24])==0){
         stokacceb[4]=stokacceb[4]+s1;
      	gotoxy(66,29);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[4]);
      }else if(strcmp(kode,code[25])==0){
         stokacceb[5]=stokacceb[5]+s1;
      	gotoxy(66,31);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[5]);
      }else if(strcmp(kode,code[26])==0){
         stokacceb[6]=stokacceb[6]+s1;
      	gotoxy(66,33);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[6]);
      }else if(strcmp(kode,code[27])==0){
         stokacceb[7]=stokacceb[7]+s1;
      	gotoxy(66,36);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[7]);
      }else if(strcmp(kode,code[28])==0){
         stokacceb[8]=stokacceb[8]+s1;
      	gotoxy(66,39);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[8]);
      }else if(strcmp(kode,code[29])==0){
         stokacceb[9]=stokacceb[9]+s1;
      	gotoxy(66,41);textbackground(0);textcolor(15);cprintf("%d  ",stokacceb[9]);
        }
      }else{
           gotoxy(90,40);printf("Inputan Invalid!");Sleep(500);
            gotoxy(90,40);printf("                      ");
		}
   }ttl=NULL;
         cek=NULL;
         before();
         menucustomer();

}

void nota(){
	gotoxy(10,5);printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
   gotoxy(10,39);printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
   gotoxy(19,19);printf("-----------------------------------------------------------------------------------------------------");
   gotoxy(19,33);printf("-----------------------------------------------------------------------------------------------------");
   gotoxy(19,16);printf("-----------------------------------------------------------------------------------------------------");
   for(int x=1; x<=34; x++){
   	gotoxy(10,5+x);printf("//");
      gotoxy(130,5+x);printf("//");
   }
   for(int x=1; x<=16; x++){
   	gotoxy(45,16+x);printf("|");
      gotoxy(19,16+x);printf("|");
      gotoxy(119,16+x);printf("|");
      gotoxy(60,16+x);printf("|");
      gotoxy(90,16+x);printf("|");
   }
   gotoxy(66,10);printf("N O T A");
   gotoxy(30,18);printf("BARANG");
   gotoxy(49,18);printf("QUANTITY");
   gotoxy(73,18);printf("HARGA");
   gotoxy(103,18);printf("TOTAL");
   gotoxy(78,34);printf("Total");
   gotoxy(78,36);printf("Tunai");
   gotoxy(78,38);printf("Kembali");
   gotoxy(93,34);printf("Rp. %d,-",ttl);
   gotoxy(93,36);printf("Rp. %d,-",uang);
   gotoxy(93,38);printf("Rp. %d,-",kembalian);

int tam=0;
	for(int x=0; x<cek; x++){
   	gotoxy(27,21+tam);printf("%s\n",kitsnota[x]);
      gotoxy(70,21+tam);printf("Rp. %d,-",harganota[x]);
      gotoxy(50,21+tam);printf("%d pcs",stoknota[x]);
   	gotoxy(99,21+tam);printf("Rp. %d,-",totalnota[x]);
      tam+=2;
   }
   cek=NULL;

   gotoxy(19,13);printf("AC Milan Store");
   gotoxy(19,14);printf("Jalan Dakota No.18A");
   gotoxy(19,15);printf("Kota Bandung");
   gotoxy(19,34);printf("Terima Kasih Atas Kunjungan Anda");
   gotoxy(19,35);printf("Periksa Barang Sebelum Dibeli");
   gotoxy(19,36);printf("Barang Yang Sudah Dibeli Tidak Bisa");
   gotoxy(19,37);printf("Ditukar atau Dikembalikan");

   ttl=0;
   getch();
   before();
   menucustomer();


}

void pemesanan(){

	gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   for(int x=2; x<=29; x++){
   	for(int y=1; y<=22; y++){
      	gotoxy(x,16+y);textbackground(0);textcolor(15);cprintf(" ");
      }
   }
   for(int x=0; x<=42; x++){
   	gotoxy(30,1+x);textbackground(4);textcolor(15);cprintf(" ");
      gotoxy(1,1+x);textbackground(4);textcolor(15);cprintf(" ");
   }

   for(int x=1; x<=30; x++){
   	gotoxy(x,23);textbackground(4);textcolor(15);cprintf(" ");
      gotoxy(x,31);textbackground(4);textcolor(15);cprintf(" ");
   }

	gotoxy(4,19);textbackground(0);textcolor(15);cprintf("1. Jersey");
	gotoxy(4,27);textbackground(0);textcolor(15);cprintf("2. Fashion");
	gotoxy(4,35);textbackground(0);textcolor(15);cprintf("3. Accessories");
   gotoxy(4,41);textbackground(0);textcolor(15);cprintf("Pilihan:");
   gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
	while(true){
		gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
		if(a=='1'){
      	pesananjersey();
   	}else if(a=='2'){
      	pesananfashion();
   	}else if(a=='3'){
      	pesananacce();
   	}else if(a=='x'){
         menucustomer();
		}else{
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}

}

void pesananjersey(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+barujerseyp; x++){
      if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarup[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kitsbarup[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokjerseyp[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",kits[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokjerseyp[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargajerseyp[x]);
		tamp+=2;
      }
	}


char s[3];
char b;
char kode[4];
	do{
      while(true){
		gotoxy(42,38);textcolor(15);cprintf("Pilih Kode Produk :");gotoxy(62,38);gets(kode);
      if(strcmp(kode,code[0])==0){
      	strcpy(kitsnota[cek],kits[0]);
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kits[0]);
         break;
      }else if(strcmp(kode,code[1])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kits[1]);
         strcpy(kitsnota[cek],kits[1]);
         break;
      }else if(strcmp(kode,code[2])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kits[2]);
         strcpy(kitsnota[cek],kits[2]);
         break;
      }else if(strcmp(kode,code[3])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kits[3]);
         strcpy(kitsnota[cek],kits[3]);
         break;
      }else if(strcmp(kode,code[4])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kitsbarup[0]);
         strcpy(kitsnota[cek],kitsbarup[0]);
         break;
      }else if(strcmp(kode,code[5])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kitsbarup[1]);
         strcpy(kitsnota[cek],kitsbarup[1]);
         break;
      }else if(strcmp(kode,code[6])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kitsbarup[2]);
         strcpy(kitsnota[cek],kitsbarup[2]);
         break;
      }else if(strcmp(kode,code[7])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kitsbarup[3]);
         strcpy(kitsnota[cek],kitsbarup[3]);
         break;
      }else if(strcmp(kode,code[8])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kitsbarup[4]);
         strcpy(kitsnota[cek],kitsbarup[4]);
         break;
      }else if(strcmp(kode,code[9])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",kitsbarup[5]);
         strcpy(kitsnota[cek],kitsbarup[5]);
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(62,38);printf("                    ");
      }
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}

   while(true){
      while(true){
   		gotoxy(62,38);printf("               ");
   		gotoxy(42,38);textcolor(15);cprintf("Quantity          :");gotoxy(62,38);gets(s);
   		if(strlen(s)<1){
   			gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
      		gotoxy(50,41);printf("                   ");
  	 		}else if(strlen(s)>9){
      		gotoxy(50,41);printf("Maksimal 3 Karakter");Sleep(500);
      		gotoxy(50,41);printf("                       ");
   		}else if(valharga(s)>0){
   			gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
      		gotoxy(50,41);printf("                        ");
      	}else {
         	break;
         }
       }
   	s1=atoi(s);

      if(strcmp(kode,code[0])==0){
         if(s1<stokjerseyp[0]){
         	stokjerseyp[0]=stokjerseyp[0]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[0]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }

      }else if(strcmp(kode,code[1])==0){
         if(s1<stokjerseyp[1]){
         	stokjerseyp[1]=stokjerseyp[1]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[1]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[2])==0){
         if(s1<stokjerseyp[2]){
         	stokjerseyp[2]=stokjerseyp[2]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[2]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[3])==0){
         if(s1<stokjerseyp[3]){
         	stokjerseyp[3]=stokjerseyp[3]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[3]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[4])==0){
         if(s1<stokjerseyp[4]){
         	stokjerseyp[4]=stokjerseyp[4]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[4]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[5])==0){
         if(s1<stokjerseyp[5]){
         	stokjerseyp[5]=stokjerseyp[5]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[5]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[6])==0){
         if(s1<stokjerseyp[6]){
         	stokjerseyp[6]=stokjerseyp[6]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[6]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[7])==0){
         if(s1<stokjerseyp[7]){
         	stokjerseyp[7]=stokjerseyp[7]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[7]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[8])==0){
         if(s1<stok[8]){
         	stokjerseyp[8]=stokjerseyp[8]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[8]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[9])==0){
         if(s1<stokjerseyp[9]){
         	stokjerseyp[9]=stokjerseyp[9]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[9]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }
   }
      if(strcmp(kode,code[0])==0){
         total=s1*hargajerseyp[0];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargajerseyp[0];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[1])==0){
         total=s1*hargajerseyp[1];
         harganota[0+cek]=hargajerseyp[1];
         totalnota[0+cek]=total;
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[2])==0){
         total=s1*hargajerseyp[2];
         harganota[0+cek]=hargajerseyp[2];
      	totalnota[0+cek]=total;
         gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[3])==0){
         total=s1*hargajerseyp[3];
         harganota[0+cek]=hargajerseyp[3];
         totalnota[0+cek]=total;
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[4])==0){
         total=s1*hargabarup[0];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarup[0];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[5])==0){
         total=s1*hargabarup[1];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarup[1];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[6])==0){
         total=s1*hargabarup[2];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarup[2];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[7])==0){
         total=s1*hargabarup[3];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarup[3];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[8])==0){
         total=s1*hargabarup[4];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarup[4];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[9])==0){
         total=s1*hargabarup[5];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarup[5];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}

   while(true){
   	gotoxy(42,38);textcolor(15);cprintf("Selesai Memilih? (y/t)");b=getche();
      if(b=='y' || b=='t'){
       break;
      }else{
      	gotoxy(40,41);printf("Inputan Invalid");Sleep(500);
         gotoxy(40,41);printf("               ");
         gotoxy(58,41);printf("  ");
      }
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}
   ttl=ttl+total;
   x+=2;
   cek++;
	}while(cek!=6 && b!='y');
   penjualan+=ttl;
   gotoxy(92,36);textbackground(0);textcolor(15);cprintf("___________________________________+");
   gotoxy(91,38);textbackground(0);textcolor(15);cprintf("  Total Pembayaran   ");
   gotoxy(113,38);textbackground(0);textcolor(15);cprintf("Rp. %d,-",ttl);
   gotoxy(40,40);textbackground(0);textcolor(15);cprintf("Tekan x Untuk Lanjut Pembayaran");
   gotoxy(40,41);textbackground(0);textcolor(15);cprintf("Tekan y Untuk Batalkan Pesanan");

   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   gotoxy(40,40);textbackground(0);textcolor(15);cprintf("                               ");
   gotoxy(40,41);textbackground(0);textcolor(15);cprintf("                               ");
   gotoxy(40,40);textbackground(0);textcolor(15);cprintf("Jangka Hanya Bisa Selama 6 & 12 Bulan");
   while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   	if(a=='x'){
         while(true){
         	gotoxy(90,40);textcolor(15);cprintf("Jangka Angsuran        ");gets(waktu);
         	jangka=atoi(waktu);
         	if(jangka==6 || jangka==12){
            	gotoxy(90,40);textcolor(15);cprintf("                          ");
            	for(int x=0; x<=15; x++){
            		gotoxy(90,40);textcolor(15);cprintf("Harap Tunggu....");Sleep(200);
               	gotoxy(90+x,41);textcolor(15);cprintf("%c",219);
            	}
            	gotoxy(90,42);textcolor(15);cprintf("Pesanan Berhasil...");Sleep(2000);
            	clrscr();
            	kredit();
            	break;
         	}else{
            	gotoxy(90,40);textcolor(15);cprintf("                                     ");
           	 	gotoxy(90,41);textcolor(15);cprintf("Harap Input Jangka Yang Ditentukan!!");Sleep(500);
            	gotoxy(90,41);textcolor(15);cprintf("                                    ");
         	}
         }
   	}else if(a=='y'){
      	gotoxy(90,40);printf("Pembelian Dibatalkan...");Sleep(2000);
         if(strcmp(kode,code[0])==0){
         stokjerseyp[0]=stokaccep[0]+s1;
      	gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[0]);
      }else if(strcmp(kode,code[1])==0){
         stokjerseyp[1]=stokaccep[1]+s1;
      	gotoxy(66,23);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[1]);
      }else if(strcmp(kode,code[2])==0){
         stokjerseyp[2]=stokaccep[2]+s1;
      	gotoxy(66,25);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[2]);
      }else if(strcmp(kode,code[3])==0){
         stokjerseyp[3]=stokaccep[3]+s1;
      	gotoxy(66,27);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[3]);
      }else if(strcmp(kode,code[4])==0){
         stokjerseyp[4]=stokaccep[4]+s1;
      	gotoxy(66,29);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[4]);
      }else if(strcmp(kode,code[5])==0){
         stokjerseyp[5]=stokaccep[5]+s1;
      	gotoxy(66,31);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[5]);
      }else if(strcmp(kode,code[6])==0){
         stokjerseyp[6]=stokaccep[6]+s1;
      	gotoxy(66,33);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[6]);
      }else if(strcmp(kode,code[7])==0){
         stokjerseyp[7]=stokaccep[7]+s1;
      	gotoxy(66,36);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[7]);
      }else if(strcmp(kode,code[8])==0){
         stokjerseyp[8]=stokaccep[8]+s1;
      	gotoxy(66,39);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[8]);
      }else if(strcmp(kode,code[9])==0){
         stokjerseyp[9]=stokaccep[9]+s1;
      	gotoxy(66,41);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[9]);
      }
      }else{
           gotoxy(90,40);printf("Inputan Invalid!");Sleep(500);
            gotoxy(90,40);printf("                        ");

   	}
   }ttl=NULL;
         cek=NULL;
         before();
         menucustomer();
}

void pesananfashion(){
   for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+barufashionp; x++){
		if(x>=4){
     		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabarufashionp[x-4]);
  			gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionbarup[x-4]);
      	gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[10+x]);
   		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionp[x]);
   		tamp+=2;
   	}else{
			gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[10+x]);
			gotoxy(51,21+tamp);textcolor(15);cprintf("%s",fashionb[x]);
			gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokfashionp[x]);
			gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargafashionp[x]);
			tamp+=2;
      }
   }

int x=0;
char s[3];
char b;
char kode[4];
	do{
      while(true){
		gotoxy(42,38);textcolor(15);cprintf("Pilih Kode Produk :");gotoxy(62,38);gets(kode);
      if(strcmp(kode,code[10])==0){
      	strcpy(kitsnota[cek],fashionb[0]);
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionb[0]);
         break;
      }else if(strcmp(kode,code[11])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionb[1]);
         strcpy(kitsnota[cek],fashionb[1]);
         break;
      }else if(strcmp(kode,code[12])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionb[2]);
         strcpy(kitsnota[cek],fashionb[2]);
         break;
      }else if(strcmp(kode,code[13])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionb[3]);
         strcpy(kitsnota[cek],fashionb[3]);
         break;
      }else if(strcmp(kode,code[14])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionbarup[0]);
         strcpy(kitsnota[cek],fashionbarup[0]);
         break;
      }else if(strcmp(kode,code[15])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionbarup[1]);
         strcpy(kitsnota[cek],fashionbarup[1]);
         break;
      }else if(strcmp(kode,code[16])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionbarup[2]);
         strcpy(kitsnota[cek],fashionbarup[2]);
         break;
      }else if(strcmp(kode,code[17])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionbarup[3]);
         strcpy(kitsnota[cek],fashionbarup[3]);
         break;
      }else if(strcmp(kode,code[18])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionbarup[4]);
         strcpy(kitsnota[cek],fashionbarup[4]);
         break;
      }else if(strcmp(kode,code[19])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",fashionbarup[5]);
         strcpy(kitsnota[cek],fashionbarup[5]);
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(62,38);printf("                    ");
      }
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}

   while(true){
      while(true){
   		gotoxy(62,38);printf("               ");
   		gotoxy(42,38);textcolor(15);cprintf("Quantity          :");gotoxy(62,38);gets(s);
   		if(strlen(s)<1){
   			gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
      		gotoxy(50,41);printf("                   ");
  	 		}else if(strlen(s)>3){
      		gotoxy(50,41);printf("Maksimal 3 Karakter");Sleep(500);
      		gotoxy(50,41);printf("                       ");
   		}else if(valharga(s)>0){
   			gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
      		gotoxy(50,41);printf("                        ");
      	}else {
         	break;
         }
       }
   s1=atoi(s);
      if(strcmp(kode,code[10])==0){
         if(s1<stokfashionp[0]){
         	stokfashionp[0]=stokfashionp[0]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionp[0]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[11])==0){
         if(s1<stokfashionp[1]){
         	stokfashionp[1]=stokfashionp[1]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionp[1]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[12])==0){
         if(s1<stokfashionp[2]){
         	stokfashionp[2]=stokfashionp[2]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionp[2]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[13])==0){
         if(s1<stokfashionp[3]){
         	stokfashionp[3]=stokfashionp[3]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionp[3]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[14])==0){
         if(s1<stokfashionp[4]){
         	stokfashionp[4]=stokfashionp[4]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionp[4]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[15])==0){
         if(s1<stokfashionp[5]){
         	stokfashionp[5]=stokfashionp[5]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionp[5]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[16])==0){
         if(s1<stokfashionp[6]){
         	stokfashionp[6]=stokfashionp[6]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionp[6]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[17])==0){
         if(s1<stokfashionp[7]){
         	stokfashionp[7]=stokfashionp[7]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionp[7]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[18])==0){
         if(s1<stokfashionp[8]){
         	stokfashionp[8]=stokfashionp[8]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionp[8]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[19])==0){
         if(s1<stokfashionp[9]){
         	stokfashionp[9]=stokfashionp[9]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokfashionp[9]);
         	stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
         	break;
         }else {
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
         	gotoxy(50,41);printf("                 ");
         }
      }
   }
      if(strcmp(kode,code[10])==0){
         total=s1*hargafashionp[0];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargafashionp[0];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[11])==0){
         total=s1*hargafashionp[1];
         harganota[0+cek]=hargafashionp[1];
         totalnota[0+cek]=total;
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[12])==0){
         total=s1*hargafashionp[2];
         harganota[0+cek]=hargafashionp[2];
      	totalnota[0+cek]=total;
         gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[13])==0){
         total=s1*hargafashionp[3];
         harganota[0+cek]=hargafashionp[3];
         totalnota[0+cek]=total;
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[14])==0){
         total=s1*hargabarufashionp[0];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarufashionp[0];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[15])==0){
         total=s1*hargabarufashionp[1];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarufashionp[1];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[16])==0){
         total=s1*hargabarufashionp[2];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarufashionp[2];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[17])==0){
         total=s1*hargabarufashionp[3];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarufashionp[3];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[18])==0){
         total=s1*hargabarufashionp[4];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarufashionp[4];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[19])==0){
         total=s1*hargabarufashionp[5];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabarufashionp[5];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}

   while(true){
   	gotoxy(42,38);textcolor(15);cprintf("Selesai Memilih? (y/t)");b=getche();
      if(b=='y' || b=='t'){
       break;
      }else{
      	gotoxy(40,41);printf("Inputan Invalid");Sleep(500);
         gotoxy(40,41);printf("                  ");
         gotoxy(59,41);printf("  ");
      }
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}
   ttl=ttl+total;
   x+=2;
   cek++;
	}while(cek!=6 && b!='y');
   penjualan+=ttl;
   gotoxy(92,36);textbackground(0);textcolor(15);cprintf("___________________________________+");
   gotoxy(91,38);textbackground(0);textcolor(15);cprintf("  Total Pembayaran   ");
   gotoxy(113,38);textbackground(0);textcolor(15);cprintf("Rp. %d,-",ttl);
   gotoxy(40,40);textbackground(0);textcolor(15);cprintf("Tekan x Untuk Lanjut Pembayaran");
   gotoxy(40,41);textbackground(0);textcolor(15);cprintf("Tekan y Untuk Batalkan Pesanan");

   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   gotoxy(40,40);textbackground(0);textcolor(15);cprintf("                               ");
   gotoxy(40,41);textbackground(0);textcolor(15);cprintf("                               ");
   gotoxy(40,40);textbackground(0);textcolor(15);cprintf("Jangka Hanya Bisa Selama 6 & 12 Bulan");
   while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   	if(a=='x'){
         while(true){
         	gotoxy(90,40);textcolor(15);cprintf("Jangka Angsuran        ");gets(waktu);
         	jangka=atoi(waktu);
         	if(jangka==6 || jangka==12){
            	gotoxy(90,40);textcolor(15);cprintf("                          ");
            	for(int x=0; x<=15; x++){
            		gotoxy(90,40);textcolor(15);cprintf("Harap Tunggu....");Sleep(200);
               	gotoxy(90+x,41);textcolor(15);cprintf("%c",219);
            	}
            	gotoxy(90,42);textcolor(15);cprintf("Pesanan Berhasil...");Sleep(2000);
            	clrscr();
            	kredit();
            	break;
         	}else{
            	gotoxy(90,40);textcolor(15);cprintf("                                     ");
           	 	gotoxy(90,41);textcolor(15);cprintf("Harap Input Jangka Yang Ditentukan!!");Sleep(500);
            	gotoxy(90,41);textcolor(15);cprintf("                                    ");
         	}
         }
   	}else if(a=='y'){
      	gotoxy(90,40);printf("Pembelian Dibatalkan...");Sleep(2000);
         if(strcmp(kode,code[0])==0){
         stokjerseyp[0]=stokaccep[0]+s1;
      	gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[0]);
      }else if(strcmp(kode,code[1])==0){
         stokjerseyp[1]=stokaccep[1]+s1;
      	gotoxy(66,23);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[1]);
      }else if(strcmp(kode,code[2])==0){
         stokjerseyp[2]=stokaccep[2]+s1;
      	gotoxy(66,25);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[2]);
      }else if(strcmp(kode,code[3])==0){
         stokjerseyp[3]=stokaccep[3]+s1;
      	gotoxy(66,27);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[3]);
      }else if(strcmp(kode,code[4])==0){
         stokjerseyp[4]=stokaccep[4]+s1;
      	gotoxy(66,29);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[4]);
      }else if(strcmp(kode,code[5])==0){
         stokjerseyp[5]=stokaccep[5]+s1;
      	gotoxy(66,31);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[5]);
      }else if(strcmp(kode,code[6])==0){
         stokjerseyp[6]=stokaccep[6]+s1;
      	gotoxy(66,33);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[6]);
      }else if(strcmp(kode,code[7])==0){
         stokjerseyp[7]=stokaccep[7]+s1;
      	gotoxy(66,36);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[7]);
      }else if(strcmp(kode,code[8])==0){
         stokjerseyp[8]=stokaccep[8]+s1;
      	gotoxy(66,39);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[8]);
      }else if(strcmp(kode,code[9])==0){
         stokjerseyp[9]=stokaccep[9]+s1;
      	gotoxy(66,41);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[9]);
      }
      }else{
           gotoxy(90,40);printf("Inputan Invalid!");Sleep(500);
            gotoxy(90,40);printf("                      ");

   	}
   }ttl=NULL;
         cek=NULL;
         before();
         menucustomer();
}

void pesananacce(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   tampilantransaksi();

int tamp=0;
	for(int x=0; x<4+baruaccep; x++){
		if(x>=4){
        	gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargabaruaccep[x-4]);
    		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",accebarup[x-4]);
         gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[20+x]);
         gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokaccep[x]);
         tamp+=2;
      }else{
		gotoxy(44,21+tamp);textbackground(0);textcolor(15);cprintf("%s",code[20+x]);
		gotoxy(51,21+tamp);textcolor(15);cprintf("%s",acceb[x]);
		gotoxy(66,21+tamp);textcolor(15);cprintf("%d",stokaccep[x]);
		gotoxy(75,21+tamp);textcolor(15);cprintf("Rp. %d,-",hargaaccep[x]);
		tamp+=2;
      }
	}


char s[3];
char b;
char kode[4];
	do{
      while(true){
		gotoxy(42,38);textcolor(15);cprintf("Pilih Kode Produk :");gotoxy(62,38);gets(kode);
      if(strcmp(kode,code[20])==0){
      	strcpy(kitsnota[b],acceb[0]);
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",acceb[0]);
         break;
      }else if(strcmp(kode,code[21])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",acceb[1]);
         strcpy(kitsnota[cek],acceb[1]);
         break;
      }else if(strcmp(kode,code[22])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",acceb[2]);
         strcpy(kitsnota[cek],acceb[2]);
         break;
      }else if(strcmp(kode,code[23])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",acceb[3]);
         strcpy(kitsnota[cek],acceb[3]);
         break;
      }else if(strcmp(kode,code[24])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",accebaru[0]);
         strcpy(kitsnota[cek],accebaru[0]);
         break;
      }else if(strcmp(kode,code[25])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",accebaru[1]);
         strcpy(kitsnota[cek],accebaru[1]);
         break;
      }else if(strcmp(kode,code[26])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",accebaru[2]);
         strcpy(kitsnota[cek],accebaru[2]);
         break;
      }else if(strcmp(kode,code[27])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",accebaru[3]);
         strcpy(kitsnota[cek],accebaru[3]);
         break;
      }else if(strcmp(kode,code[28])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",accebaru[4]);
         strcpy(kitsnota[cek],accebaru[4]);
         break;
      }else if(strcmp(kode,code[29])==0){
      	gotoxy(93,21+x);textbackground(0);textcolor(15);cprintf("%s",accebaru[5]);
         strcpy(kitsnota[cek],accebaru[5]);
         break;
      }else{
         gotoxy(42,40);printf("Inputan Invalid");Sleep(500);
         gotoxy(42,40);printf("               ");
         gotoxy(62,38);printf("                    ");
      }
      }
      for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}
   while(true){
      while(true){
   		gotoxy(62,38);printf("               ");
   		gotoxy(42,38);textcolor(15);cprintf("Quantity          :");gotoxy(62,38);gets(s);
   		if(strlen(s)<1){
   			gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
      		gotoxy(50,41);printf("                   ");
  	 		}else if(strlen(s)>3){
      		gotoxy(50,41);printf("Maksimal 3 Karakter");Sleep(500);
      		gotoxy(50,41);printf("                       ");
   		}else if(valharga(s)>0){
   			gotoxy(50,41);printf("Perhatikan Inputan Anda!"); Sleep(500);
      		gotoxy(50,41);printf("                        ");
      	}else {
         	break;
         }
       }
   s1=atoi(s);
      if(strcmp(kode,code[20])==0){
         if(s1<stokaccep[0]){
         	stokaccep[0]=stokaccep[0]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokaccep[0]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[21])==0){
         if(s1<stokaccep[1]){
         	stokaccep[1]=stokaccep[1]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokaccep[1]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[22])==0){
         if(s1<stokaccep[2]){
         	stokaccep[2]=stokaccep[2]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokaccep[2]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[23])==0){
         if(s1<stokaccep[3]){
         	stokaccep[3]=stokaccep[3]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokaccep[3]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[24])==0){
         if(s1<stokaccep[4]){
         	stokaccep[4]=stokaccep[4]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokaccep[4]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[25])==0){
         if(s1<stokaccep[5]){
         	stokaccep[5]=stokaccep[5]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokaccep[5]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[26])==0){
         if(s1<stokaccep[6]){
         	stokaccep[6]=stokaccep[6]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokaccep[6]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[27])==0){
         if(s1<stokaccep[7]){
         	stokaccep[7]=stokaccep[7]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokaccep[7]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[28])==0){
         if(s1<stokaccep[8]){
         	stokaccep[8]=stokaccep[8]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokaccep[8]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }else if(strcmp(kode,code[29])==0){
         if(s1<stokaccep[9]){
         	stokaccep[9]=stokaccep[9]-s1;
      		gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokaccep[9]);
            stoknota[0+cek]=s1;
   			gotoxy(107,21+x);textbackground(0);textcolor(15);cprintf("x%d",s1);
            break;
         }else{
         	gotoxy(50,41);printf("Stok Tidak Cukup!");Sleep(500);
            gotoxy(50,41);printf("                 ");
         }
      }
   }
      if(strcmp(kode,code[20])==0){
         total=s1*hargaaccep[0];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargaaccep[0];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[21])==0){
         total=s1*hargaaccep[1];
         harganota[0+cek]=hargaaccep[1];
         totalnota[0+cek]=total;
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[22])==0){
         total=s1*hargaaccep[2];
         harganota[0+cek]=hargaaccep[2];
      	totalnota[0+cek]=total;
         gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[23])==0){
         total=s1*hargaaccep[3];
         harganota[0+cek]=hargaaccep[3];
         totalnota[0+cek]=total;
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[24])==0){
         total=s1*hargabaruaccep[0];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaruaccep[0];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[25])==0){
         total=s1*hargabaruaccep[1];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaruaccep[1];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[26])==0){
         total=s1*hargabaruaccep[2];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaruaccep[2];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[27])==0){
         total=s1*hargabaruaccep[3];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaruaccep[3];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[28])==0){
         total=s1*hargabaru[4];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaruaccep[4];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }else if(strcmp(kode,code[29])==0){
         total=s1*hargabaruaccep[5];
         totalnota[0+cek]=total;
         harganota[0+cek]=hargabaruaccep[5];
      	gotoxy(113,21+x);textbackground(0);textcolor(15);cprintf("Rp. %d,-",total);
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}

   while(true){
   	gotoxy(42,38);textcolor(15);cprintf("Selesai Memilih? (y/t)");b=getche();
      if(b=='y' || b=='t'){
       break;
      }else{
      	gotoxy(40,41);printf("Inputan Invalid");Sleep(500);
         gotoxy(40,41);printf("Inputan Invalid");
         gotoxy(58,38);printf("  ");
      }
      }
   	for(int x=0; x<=22; x++){
   		gotoxy(42+x,38);textcolor(0);cprintf(" ");Sleep(70);
   	}
   ttl=ttl+total;
   x+=2;
   cek++;
	}while(cek!=6 && b!='y');
   penjualan+=ttl;
   gotoxy(92,36);textbackground(0);textcolor(15);cprintf("___________________________________+");
   gotoxy(91,38);textbackground(0);textcolor(15);cprintf("  Total Pembayaran   ");
   gotoxy(113,38);textbackground(0);textcolor(15);cprintf("Rp. %d,-",ttl);
   gotoxy(40,40);textbackground(0);textcolor(15);cprintf("Tekan x Untuk Lanjut Pembayaran");
   gotoxy(40,41);textbackground(0);textcolor(15);cprintf("Tekan y Untuk Batalkan Pesanan");

   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   gotoxy(40,40);textbackground(0);textcolor(15);cprintf("                               ");
   gotoxy(40,41);textbackground(0);textcolor(15);cprintf("                               ");
   gotoxy(40,40);textbackground(0);textcolor(15);cprintf("Jangka Hanya Bisa Selama 6 & 12 Bulan");
   while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   	if(a=='x'){
         while(true){
         	gotoxy(90,40);textcolor(15);cprintf("Jangka Angsuran        ");gets(waktu);
         	jangka=atoi(waktu);
         	if(jangka==6 || jangka==12){
            	gotoxy(90,40);textcolor(15);cprintf("                          ");
            	for(int x=0; x<=15; x++){
            		gotoxy(90,40);textcolor(15);cprintf("Harap Tunggu....");Sleep(200);
               	gotoxy(90+x,41);textcolor(15);cprintf("%c",219);
            	}
            	gotoxy(90,42);textcolor(15);cprintf("Pesanan Berhasil...");Sleep(2000);
            	clrscr();
            	kredit();
            	break;
         	}else{
            	gotoxy(90,40);textcolor(15);cprintf("                                     ");
           	 	gotoxy(90,41);textcolor(15);cprintf("Harap Input Jangka Yang Ditentukan!!");Sleep(500);
            	gotoxy(90,41);textcolor(15);cprintf("                                    ");
         	}
         }
   	}else if(a=='y'){
      	gotoxy(90,40);printf("Pembelian Dibatalkan...");Sleep(2000);
         if(strcmp(kode,code[0])==0){
         stokjerseyp[0]=stokaccep[0]+s1;
      	gotoxy(66,21);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[0]);
      }else if(strcmp(kode,code[1])==0){
         stokjerseyp[1]=stokaccep[1]+s1;
      	gotoxy(66,23);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[1]);
      }else if(strcmp(kode,code[2])==0){
         stokjerseyp[2]=stokaccep[2]+s1;
      	gotoxy(66,25);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[2]);
      }else if(strcmp(kode,code[3])==0){
         stokjerseyp[3]=stokaccep[3]+s1;
      	gotoxy(66,27);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[3]);
      }else if(strcmp(kode,code[4])==0){
         stokjerseyp[4]=stokaccep[4]+s1;
      	gotoxy(66,29);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[4]);
      }else if(strcmp(kode,code[5])==0){
         stokjerseyp[5]=stokaccep[5]+s1;
      	gotoxy(66,31);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[5]);
      }else if(strcmp(kode,code[6])==0){
         stokjerseyp[6]=stokaccep[6]+s1;
      	gotoxy(66,33);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[6]);
      }else if(strcmp(kode,code[7])==0){
         stokjerseyp[7]=stokaccep[7]+s1;
      	gotoxy(66,36);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[7]);
      }else if(strcmp(kode,code[8])==0){
         stokjerseyp[8]=stokaccep[8]+s1;
      	gotoxy(66,39);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[8]);
      }else if(strcmp(kode,code[9])==0){
         stokjerseyp[9]=stokaccep[9]+s1;
      	gotoxy(66,41);textbackground(0);textcolor(15);cprintf("%d  ",stokjerseyp[9]);
      }
      }else{
           gotoxy(90,40);printf("Inputan Invalid!");Sleep(500);
            gotoxy(90,40);printf("                     ");

   	}
   }ttl=NULL;
         cek=NULL;
         before();
         menucustomer();
}

void kredit(){
float unga1,totalangsuran,totalangsur=0,saldo;
	for(int x=1; x<=50; x++){
		for(int y=1; y<=10; y++){
      	gotoxy(20+x,8);printf("=");
			gotoxy(20+x,19);printf("=");
			gotoxy(20,8+y);printf("||");
      	gotoxy(70,8+y);printf("||");
      	gotoxy(71+x,8);printf("=");
			gotoxy(71+x,19);printf("=");
			gotoxy(71,8+y);printf("||");
      	gotoxy(121,8+y);printf("||");
   	}
	}
	for(int x=1; x<=101; x++){
		for(int y=1; y<=17; y++){
      	gotoxy(20+x,20);printf("=");
			gotoxy(20+x,38);printf("=");
      	gotoxy(20+x,22);printf("=");
			gotoxy(20,20+y);printf("||");
      	gotoxy(25,20+y);printf("||");
         //gotoxy(38,20+y);printf("||");
      	gotoxy(58,20+y);printf("||");
      	gotoxy(77,20+y);printf("||");
      	gotoxy(99,20+y);printf("||");
      	gotoxy(121,20+y);printf("||");
      }
	}
int sp;
saldo=ttl;
saldofaktur=ttl;
sp=ttl;
angsuranpokok=(ttl/jangka);
int tamp=0;
float a=0,b=0;
	while(tamp!=jangka){
   	unga=(ttl*10/100*30)/360;
   	ttl=ttl-angsuranpokok;
   	tamp++;
   	gotoxy(23,22+tamp);printf("%d",tamp);
   	gotoxy(32,22+tamp);printf("Rp. %.2f,-",angsuranpokok);
   	gotoxy(62,22+tamp);printf("Rp. %.2f,-",unga);
   	totalbunga+=unga;
   	totalangsuran=angsuranpokok+unga;
   	gotoxy(81,22+tamp);printf("Rp. %.2f,-",totalangsuran);
   	ab+=totalangsuran;
  // 	saldo=saldo-totalangsuran;

	}
float ba;
ba=ab;
tamp=NULL;
	while(tamp!=jangka){
   	unga1=(saldo*10/100*30)/360;
   	saldo=saldo-totalangsur;
   	totalangsur=angsuranpokok+unga1;
   	ba=ba-totalangsur;
   	if(ba<0){
      	gotoxy(103,23+tamp);printf("Rp. 0,-",ba);
   	}else{
      	gotoxy(103,23+tamp);printf("Rp. %.2f,-",ba);
   	}
   		tamp++;
   }
	gotoxy(37,10);printf("Informasi Pembayaran");
	gotoxy(23,13);printf("Pokok Pembayaran  : Rp. %d,-",sp);
	gotoxy(23,14);printf("Jangka Angsuran   : %dx",jangka);
	gotoxy(23,15);printf("Bunga             : 10%");
	gotoxy(85,10);printf("Informasi Angsuran Kredit");
	gotoxy(74,13);printf("Angsuran              : Rp. %.2f,-",angsuranpokok);
	gotoxy(74,14);printf("Total Periode         : %dx",jangka);
	gotoxy(74,15);printf("Total Bunga           : Rp. %.2f,-",totalbunga);
	gotoxy(74,16);printf("Total yang Dibayarkan : Rp. %.2f,-",ab);
	gotoxy(23,21);printf("#");
	gotoxy(34,21);printf("Angsuran Pokok");
	gotoxy(62,21);printf("Angsuran Bunga");
	gotoxy(80,21);printf("Total Angsuran/Bln");
	gotoxy(104,21);printf("Saldo Pinjaman");

	getch();
	clrscr();
	faktur();

}

void faktur(){
	gotoxy(10,3);printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
   gotoxy(10,31);printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
   gotoxy(19,11);printf("-----------------------------------------------------------------------------------------------------");
   gotoxy(19,25);printf("-----------------------------------------------------------------------------------------------------");
   gotoxy(19,8);printf("-----------------------------------------------------------------------------------------------------");
   for(int x=1; x<=28; x++){
   	gotoxy(10,3+x);printf("//");
      gotoxy(130,3+x);printf("//");
   }
   for(int x=1; x<=16; x++){
   	gotoxy(45,8+x);printf("|");
      gotoxy(19,8+x);printf("|");
      gotoxy(119,8+x);printf("|");
      gotoxy(60,8+x);printf("|");
      gotoxy(90,8+x);printf("|");
   }
   gotoxy(30,10);printf("BARANG");
   gotoxy(49,10);printf("QUANTITY");
   gotoxy(73,10);printf("HARGA");
   gotoxy(103,10);printf("TOTAL");
   gotoxy(75,26);printf("Total Harga");
   gotoxy(75,27);printf("Bunga 10%");
   gotoxy(75,29);printf("Sisa Pembayaran");
   gotoxy(93,26);printf("Rp. %d,-",saldofaktur);
   gotoxy(93,27);printf("Rp. %.2f,-",totalbunga);
   gotoxy(93,29);printf("Rp. %.2f,-",ab-(angsuranpokok+unga));

int tam=0;
	for(int x=0; x<cek; x++){
   	gotoxy(27,12+tam);printf("%s",kitsnota[x]);
      gotoxy(70,12+tam);printf("Rp. %d,-",harganota[x]);
      gotoxy(50,12+tam);printf("%d pcs",stoknota[x]);
   	gotoxy(99,12+tam);printf("Rp. %d,-",totalnota[x]);
      tam+=2;
   }
   cek=NULL;

   gotoxy(19,5);printf("AC Milan Store");
   gotoxy(19,6);printf("Jalan Dakota No.18A");
   gotoxy(19,7);printf("Kota Bandung");
   gotoxy(19,26);printf("Terima Kasih Atas Kunjungan Anda");
   gotoxy(19,27);printf("Periksa Barang Sebelum Dibeli");
   gotoxy(19,28);printf("Barang Yang Sudah Dibeli Tidak Bisa");
   gotoxy(19,29);printf("Ditukar atau Dikembalikan");

   gotoxy(11,35);printf("Nama/Toko");
   gotoxy(11,36);printf("No. Hp              +62");
   gotoxy(11,37);printf("Alamat");
   gotoxy(11,38);printf("Kelurahan/Desa");
   gotoxy(11,39);printf("Kecamatan");
   gotoxy(11,40);printf("Kabupaten/Kota");
   gotoxy(11,41);printf("Provinsi");
   while(true){
         gotoxy(31,35);textcolor(15);cprintf("                                ");
         gotoxy(31,35);gets(nama);
      	if(strlen(nama)<1 ){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
      	}else if(valbarang(nama)>0 ){
         	gotoxy(50,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(50,41);printf("                         ");
         }else{
         	break;
         }
      }
   while(true){
         gotoxy(34,36);textcolor(15);cprintf("                                ");
         gotoxy(34,36);gets(nope);
      	if(strlen(nope)<1 ){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
      	}else if(valnope(nope)>0 ){
         	gotoxy(50,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(50,41);printf("                         ");
         }else{
         	break;
         }
      }

   while(true){
         gotoxy(31,37);textcolor(15);cprintf("                                ");
         gotoxy(31,37);gets(alamat);
      	if(strlen(alamat)<1 ){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
      	}else if(valalamat(alamat)>0 ){
         	gotoxy(50,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(50,41);printf("                         ");
         }else{
         	break;
         }
      }
   while(true){
         gotoxy(31,38);textcolor(15);cprintf("                                ");
         gotoxy(31,38);gets(desa);
      	if(strlen(desa)<1 ){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
      	}else if(valhuruf(desa)>0 ){
         	gotoxy(50,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(50,41);printf("                         ");
         }else{
         	break;
         }
      }
   while(true){
         gotoxy(31,39);textcolor(15);cprintf("                                ");
         gotoxy(31,39);gets(kecamatan);
      	if(strlen(kecamatan)<1 ){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
      	}else if(valhuruf(kecamatan)>0 ){
         	gotoxy(50,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(50,41);printf("                         ");
         }else{
         	break;
         }
      }
   while(true){
         gotoxy(31,40);textcolor(15);cprintf("                                ");
         gotoxy(31,40);gets(kota);
      	if(strlen(kota)<1 ){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
      	}else if(valhuruf(kota)>0 ){
         	gotoxy(50,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(50,41);printf("                         ");
         }else{
         	break;
         }
      }
    while(true){
         gotoxy(31,41);textcolor(15);cprintf("                                ");
         gotoxy(31,41);gets(provinsi);
      	if(strlen(provinsi)<1 ){
      		gotoxy(50,41);printf("Tidak Boleh Kosong!");Sleep(500);
         	gotoxy(50,41);printf("                   ");
      	}else if(valhuruf(provinsi)>0 ){
         	gotoxy(50,41);printf("Perhatikan Inputan Anda!");Sleep(500);
            gotoxy(50,41);printf("                         ");
         }else{
         	break;
         }
      }





   for(int x=1; x<=51; x++){
   	for(int y=1; y<=11; y++){
   	gotoxy(8+x,33);printf("*");
      gotoxy(60,32+y);printf("*");
      gotoxy(8,32+y);printf("*");
      gotoxy(8+x,43);printf("*");
      }
	}

   for(int x=1; x<=39; x++){
		gotoxy(60+x,34);textcolor(x);cprintf("  **********************              ");Sleep(15);
  		gotoxy(60+x,35);textcolor(x);cprintf("  **********************              ");           Sleep(15);
   	gotoxy(60+x,36);textcolor(x);cprintf("  *****************************       ");                      Sleep(15);
  		gotoxy(60+x,37);textcolor(x);cprintf("  ******************************      ");                                 Sleep(15);
  		gotoxy(60+x,38);textcolor(x);cprintf("  ***********************    ******** ");                                            Sleep(15);
  		gotoxy(60+x,39);textcolor(x);cprintf("  ************************************");                                                       Sleep(15);
  		gotoxy(60+x,40);textcolor(x);cprintf("  ************************************");                                                                  Sleep(15);
  		gotoxy(60+x,41);textcolor(x);cprintf("  ************************************");                                                                             Sleep(15);
  		gotoxy(60+x,42);textcolor(x);cprintf("       *****              *****       ");                                                                 Sleep(15);
      gotoxy(62+x,33);textcolor(x);cprintf(" BARANG SEDANG DIANTAR..");
   }
   getch();
   before();
   menucustomer();
}


void profil(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   gotoxy(129,42);textcolor(15);cprintf("Kembali X");
   persegi(30,3,52,25);
   persegi(30,3,92,25);
   gotoxy(62,27);printf("1. Profil");
   gotoxy(98,27);printf("2. Tentang Aplikasi");
   while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   if(a=='1'){
      profildiri();
   }else if(a=='2'){
   	tentangaplikasi();
   }else if(a=='x'){
    	menucustomer();
   }else{
   	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}
}

void milan(){
	for(int x=1; x<=90; x++){
   	for(int y=1; y<=25; y++){
      	gotoxy(35+x,15+y);textbackground(0);textcolor(4);cprintf(" ");
      }
   }
   gotoxy(129,42);textcolor(15);cprintf("Kembali X");
   persegi(30,3,50,23);
   persegi(30,3,90,23);
   persegi(30,3,68,30);
   gotoxy(61,25);printf("1. Sejarah");
   gotoxy(101,25);printf("2. Trophy");
   while(true){
   gotoxy(13,41);textbackground(0);textcolor(15);a=getche();
   if(a=='1'){
      sejarah();
   }else if(a=='2'){
      clrscr();
   	trophy();
   }else if(a=='x'){
    	menucustomer();
   }else{
   	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf("=");Sleep(1);
         	}
      	}
   		gotoxy(5,8);textbackground(0);textcolor(15);cprintf("Inputan Tidak Valid!!");Sleep(1000);
      	for(int x=1; x<=26; x++){
      		for(int y=1; y<=13; y++){
         		gotoxy(2+x,1+y);textbackground(0);textcolor(x);cprintf(" ");Sleep(1);
         	}
      	}
         gotoxy(13,41);textbackground(0);textcolor(4);cprintf(" ");
   	}
	}
}

void sejarah(){
clrscr();
bingkaidefault();

for(int x=1; x<=42; x++){
gotoxy(5+x,6);textbackground(0);textcolor(4);printf("  @@@@  @@@@ @@@@@  @@@  @@@@@  @@@  @   @");Sleep(25);
gotoxy(5+x,7);textbackground(0);textcolor(4);printf(" @     @         @ @   @ @   @ @   @ @   @");Sleep(25);
gotoxy(5+x,8);textbackground(0);textcolor(4);printf(" @@@@@ @@@@@     @ @@@@@ @@@@@ @@@@@ @@@@@");Sleep(25);
gotoxy(5+x,9);textbackground(0);textcolor(4);printf("     @ @     @   @ @   @ @  @  @   @ @   @");Sleep(25);
gotoxy(5+x,10);textbackground(0);textcolor(4);printf(" @@@@   @@@@ @@@@@ @   @ @   @ @   @ @   @");Sleep(25);
}

gotoxy(13,24);printf("Associazione Calcio Milan didirikan sebagai Klub Kriket dan Sepakbola Milan pada 16 Desember 1899\n");
gotoxy(4,25);printf("oleh ekspatriat Inggris, Alfred Edwards dan Herbert Kilpin, yang datang dari kota Inggris Nottingham. Untuk menghormati");
gotoxy(4,26);printf("asal usul bahasa Inggris, klub telah mempertahankan ejaan bahasa Inggris dari nama kota, yang bertentangan dengan ejaan");
gotoxy(4,27);printf("Italia Milano yang terpaksa menanggung bawah rezim fasis.");
gotoxy(13,28);printf("Milan memenangkan kejuaraan Italia pertama pada 1901 dan dua lagi secara beruntun pada tahun 1906 dan 1907. Pada tahun");
gotoxy(4,29);printf("1908, Milan mengalami perpecahan yang disebabkan oleh perselisihan internal atas penandatanganan pemain asing, yang menyebabkan");
gotoxy(4,30);printf("pembentukan tim lain Milan berbasis, F.C. Internazionale Milano. Setelah pemisahan, Milan menyentuh kejuaraan di 1910-11 dan 1911-12,");
gotoxy(4,31);printf("sedangkan pada tahun 1916, Rossonerri menempatkan di papan pengumuman Piala Federal. Pada musim berikutnya tim memenangkan");
gotoxy(4,32);printf("kejuaraan daerah dua kali tetapi gagal untuk mendapatkan kesuksesan dalam tahap nasional.");
getch();
menucustomer();
}

void trophy(){
clrscr();
bingkaidefault();
ac();
	for(int x=1; x<=128; x++){
   	for(int y=1; y<=22; y++){
      	gotoxy(5+x,18);printf("=");gotoxy(5+x,20);printf("=");
         gotoxy(5+x,40);printf("=");gotoxy(5+x,29);printf("=");
         gotoxy(5+x,31);printf("=");gotoxy(5,18+y);printf("||");
         gotoxy(132,18+y);printf("||");gotoxy(70,18+y);printf("||");
         gotoxy(36,18+y);printf("||");gotoxy(101,18+y);printf("||");
         gotoxy(11,19);printf("Uefa Champions League");gotoxy(51,19);printf("Serie A");
         gotoxy(81,19);printf("Coppa Italia");gotoxy(107,19);printf("Supercoppa Italia");
         gotoxy(11,30);printf("FIFA Club World Cup");gotoxy(45,30);printf("Intercontinental Cup");
         gotoxy(81,30);printf("Cup Winners Cup");gotoxy(107,30);printf("Uefa Supercup Winner");
         gotoxy(20,25);printf("7x");gotoxy(52,25);printf("18x");
         gotoxy(86,24);printf("5x");gotoxy(117,24);printf("7x");
         gotoxy(20,36);printf("1x");gotoxy(52,35);printf("3x");
         gotoxy(86,35);printf("3x");gotoxy(117,36);printf("5x");
      }
   }
getch();
menucustomer();

}

void profildiri(){
bingkaidefault();
ac();
gotoxy(30,20);printf("BIODATA");
gotoxy(15,25);printf("Nama                  : Ari Sandi Shefa Maldini");
gotoxy(15,26);printf("Tempat, Tanggal Lahir : Banjar, 12 April 2001");
gotoxy(15,27);printf("Alamat                : Jln. Raya Banjar - Pangandaran. Lingk. Tanjungsyukur");
gotoxy(15,28);printf("Hobi						: Main Futsal");
gotoxy(15,29);printf("Kesukaan              : Nonton & Main Game");
gotoxy(15,30);printf("Slogan                : Menuju Tak Terbatas dan Melampauinya");
getch();
menucustomer();

}

void tentangaplikasi(){
bingkaidefault();
ac();
gotoxy(15,20);printf("App AC Milan Store merupakan sebuah aplikasi yang berjalan dibidang marketing. Aplikasi ini memudahkan");
gotoxy(15,21);printf("para pelanggan khususnya untuk penggemar klub sepakbola AC Milan dalam berbelanja merchandise");
gotoxy(15,22);printf("dari klub AC Milan, dengan kualitas barang yang dijamin ori.");

gotoxy(15,24);printf("Jangan Lupa Belanja Disini Kalau Mengaku Fans AC Mila:)");
gotoxy(15,25);printf("#WeAreACMilan #ForzaMilan");

gotoxy(15,27);printf("Menuju Tak Terbatas dan Melampauinya...");

gotoxy(120,33);printf("TTD");

gotoxy(110,38);printf("Ari Sandi Shefa Maldini");

getch();
menucustomer();
}
//================================[VALIDASI]==================================//
int valbarang(char y[100]){
		int a=0;
         if((y[0]>='a'&& y[0]<='z') || (y[0]>='A' && y[0]<='Z')){
   			for(int b=0; b<strlen(y); b++){
               if(y[0]==0 || (y[b]==' ' && y[b+1]==' ') || y[strlen(y)-1]==' ' || y[b]==',' || y[b]=='.' || y[b]=='%' || y[b]>=32 && y[b]<=47|| y[b]>=58 && y[b]<=64 || y[b]>=91 && y[b]<=95 || y[b]>=123 && y[b]<=126){
                 a++;
               }
           		else if((y[0]>='a'&& y[0]<='z') || (y[0]>='A' && y[0]<='Z') || (y[b]>='0'&& y[b]<='9')){
      				continue;
           		}else{
   					a++;
           		}
            	a++;
   			}
         }else {
         	a++;
         }

   	return a;
}

int valhuruf(char y[100]){
		int a=0;
         if(y[0]>='A' && y[0]<='Z'){
   			for(int b=0; b<strlen(y); b++){
               if((y[0]>='a'&& y[0]<='z') || (y[0]>='A' && y[0]<='Z') ){
      				continue;
           		}else{
   					a++;
           		}
            	a++;
   			}
         }else {
         	a++;
         }

   	return a;
}

int valalamat(char y[100]){
		int a=0;
         if((y[0]>='a'&& y[0]<='z') || (y[0]>='A' && y[0]<='Z')){
   			for(int b=0; b<strlen(y); b++){
               if(y[0]==0 || (y[b]==' ' && y[b+1]==' ') || y[strlen(y)-1]==' ' || (y[b]==' ' && y[b+1]==' ') || y[strlen(y)-1]==' ' || y[b]=='%' || y[b]>=32 && y[b]<=43|| y[b]>=58 && y[b]<=64 || y[b]>=91 && y[b]<=95 || y[b]>=123 && y[b]<=126){
                 a++;
               }
           		else if((y[0]>='a'&& y[0]<='z') || (y[0]>='A' && y[0]<='Z') || (y[b]>='0'&& y[b]<='9') || y[b]=='.'){
      				continue;
           		}else{
   					a++;
           		}
            	a++;
   			}
         }else {
         	a++;
         }

   	return a;
}

int valharga(char y[100]){
		int a=0;
   	if(y[0]>='1' && y[0]<='9'){
   		for(int b=0; b<strlen(y); b++){
            if(y[b]>='0'&& y[b]<='9'){
            	continue;
            }else {
            a++;
            }
   		}
   	}else{
   		a++;
   	}

   	return a;
}

int valnope(char n[20]){
	int a=0;

   	if(n[0]>='0' && n[0]<='9'){
   		for(int b=0;n[b]!=NULL;b++){
      		if( n[0]=='4' || n[0]=='6' || n[0]=='8' || n[0]=='0' || (n[b]>='a' && n[b]<='z') || (n[b]>='A' && n[b]<='Z') ){
         		a++;
         	}else if( n[0]=='1' || n[0]=='2' || n[0]=='3' || n[0]=='5' || n[0]=='7' || n[0]=='9'){
         		continue;
         	}
      	}
      }else{
      	a++;
      }
   	return a;
}

//---------------------------[PERKOTAKAN/BINGKAI]-----------------------------//
void tampilantransaksi(){
for(int x=1; x<=21; x++){
   	gotoxy(40,18+x);textbackground(0);textcolor(15);cprintf("|");
      gotoxy(90,18+x);textbackground(0);textcolor(15);cprintf("|");
      gotoxy(129,18+x);textbackground(0);textcolor(15);cprintf("|");
      if(x<20){
      	gotoxy(49,18+x);textbackground(0);textcolor(15);cprintf("|");
      	gotoxy(62,18+x);textbackground(0);textcolor(15);cprintf("|");
      	gotoxy(71,18+x);textbackground(0);textcolor(15);cprintf("|");
   	}
   }
   for(int x=1; x<=90; x++){
   	gotoxy(39+x,18);textbackground(0);textcolor(15);cprintf("-");
      gotoxy(39+x,39);textbackground(0);textcolor(15);cprintf("-");
      if(x<=49){
      	gotoxy(40+x,20);textbackground(0);textcolor(15);cprintf("-");
         gotoxy(40+x,37);textbackground(0);textcolor(15);cprintf("-");
      }
   }
   gotoxy(40,18);textbackground(0);textcolor(15);cprintf("+");
   gotoxy(40,39);textbackground(0);textcolor(15);cprintf("+");
   gotoxy(129,18);textbackground(0);textcolor(15);cprintf("+");
   gotoxy(129,39);textbackground(0);textcolor(15);cprintf("+");

   gotoxy(43,19);textbackground(0);textcolor(15);cprintf("Kode");
	gotoxy(53,19);textbackground(0);textcolor(15);cprintf("Barang");
	gotoxy(65,19);textbackground(0);textcolor(15);cprintf("Stok");
	gotoxy(78,19);textbackground(0);textcolor(15);cprintf("Harga");

}

void bingkaicustom(){
	for(int x=1; x<=139; x++){
		for(int y=1; y<=43; y++){
   		if(x==1||x==139||y==15||y==1||y==43){
      		gotoxy(x,y);textcolor(4);textbackground(4);cprintf("%c",219);
      	}else{
      		gotoxy(0+x,0+y);textbackground(0);cprintf(" ");
      	}
   	}
	}
	for(int x=1; x<=42; x++){
   	gotoxy(30,x);textbackground(4);cprintf(" ");
   }

   gotoxy(11,3);textbackground(0);cprintf("   @@@@   ");
	gotoxy(11,4);textbackground(0);cprintf("  @@@ @@  ");
	gotoxy(11,5);textbackground(0);cprintf(" @@ @ @@@ ");
	gotoxy(11,6);textbackground(0);cprintf("@ @ @ @@@@");
	gotoxy(11,7);textbackground(0);cprintf("@ @ @ @@@@");
	gotoxy(11,8);textbackground(0);cprintf("@ @ @    @");
	gotoxy(11,9);textbackground(0);cprintf("@ @ @ @@@@");
	gotoxy(11,10);textbackground(0);cprintf("@ @ @ @@@@");
	gotoxy(11,11);textbackground(0);cprintf(" @@ @ @@@ ");
	gotoxy(11,12);textbackground(0);cprintf("  @@@ @@  ");
	gotoxy(11,13);textbackground(0);cprintf("   @@@@   ");

   textbackground(0);textcolor(4);gotoxy(55,5);cprintf(" %c%c%c%c%c%c%c %c%c%c%c%c%c%c   %c%c%c%c    %c%c%c%c %c%c %c%c      %c%c%c%c%c%c%c %c%c%c%c    %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(2);
	textbackground(0);textcolor(4);gotoxy(55,6);cprintf(" %c%c   %c%c %c%c        %c%c %c%c  %c%c %c%c %c%c %c%c      %c%c   %c%c %c%c%c%c%c   %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	textbackground(0);textcolor(4);gotoxy(55,7);cprintf(" %c%c   %c%c %c%c        %c%c  %c%c%c%c  %c%c %c%c %c%c      %c%c   %c%c %c%c %c%c%c  %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	textbackground(0);textcolor(4);gotoxy(55,8);cprintf(" %c%c%c%c%c%c%c %c%c        %c%c   %c%c   %c%c %c%c %c%c      %c%c%c%c%c%c%c %c%c  %c%c%c %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	textbackground(0);textcolor(4);gotoxy(55,9);cprintf(" %c%c%c%c%c%c%c %c%c        %c%c        %c%c %c%c %c%c      %c%c%c%c%c%c%c %c%c   %c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	textbackground(0);textcolor(4);gotoxy(55,10);cprintf(" %c%c   %c%c %c%c%c%c%c%c%c   %c%c        %c%c %c%c %c%c%c%c%c%c%c %c%c   %c%c %c%c    %c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);



}

int persegi(int a,int b,int c,int d){
	for(int x=1; x<=a; x++){
		for(int y=1; y<=b; y++){
   		gotoxy(c+1+x,d+1+y);textbackground(15);cprintf(" ");Sleep(0);
   	}
	}for(int x=1; x<=a; x++){
		for(int y=1; y<=b; y++){
   		if(x==1||x==a||y==1||y==b){
      		gotoxy(c+x,d+y);textcolor(4);textbackground(4);cprintf("%c",219);Sleep(10);
      	}else{
      		gotoxy(c+x,d+y);textbackground(0);cprintf(" ");
      	}
   	}
	}
}

void bingkaidefault(){
	for(int x=1; x<=139; x++){
		for(int y=1; y<=43; y++){
   		if(x==1||x==139||y==15||y==1||y==43){
      		gotoxy(x,y);textcolor(4);textbackground(4);cprintf("%c",219);
      	}else{
      		gotoxy(0+x,0+y);textbackground(0);cprintf(" ");
      	}
   	}
	}
}

void transisi(){
 	for(int x=1; x<=44; x++){
      for(int y=1; y<=140; y++){
      	if(x%2==0){
     			gotoxy(y,x);textbackground(0);cprintf("%c",219);
         }else{
            gotoxy(y,x);textbackground(4);textcolor(0);cprintf("%c",219);
         }
      }printf("\n");
   }
}

int transisi1(int a){
	for(int x=1; x<=140; x++){
   	for(int y=1; y<=44; y++){
         gotoxy(0+x,0+y);textbackground(a);textcolor(a);cprintf(" ");
      }
	}

}

void transisi2(){
	for(int x=1; x<=106; x++){
   	for(int y=1; y<=27; y++){
         gotoxy(55+x,16+y);textbackground(0);textcolor(0);cprintf(" ");//Sleep(0);
      }
	}

}

void ac(){
textbackground(0);textcolor(4);gotoxy(41,5);cprintf(" %c%c%c%c%c%c%c %c%c%c%c%c%c%c   %c%c%c%c    %c%c%c%c %c%c %c%c      %c%c%c%c%c%c%c %c%c%c%c    %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(2);
	textbackground(0);textcolor(4);gotoxy(41,6);cprintf(" %c%c   %c%c %c%c        %c%c %c%c  %c%c %c%c %c%c %c%c      %c%c   %c%c %c%c%c%c%c   %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	textbackground(0);textcolor(4);gotoxy(41,7);cprintf(" %c%c   %c%c %c%c        %c%c  %c%c%c%c  %c%c %c%c %c%c      %c%c   %c%c %c%c %c%c%c  %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	textbackground(0);textcolor(4);gotoxy(41,8);cprintf(" %c%c%c%c%c%c%c %c%c        %c%c   %c%c   %c%c %c%c %c%c      %c%c%c%c%c%c%c %c%c  %c%c%c %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	textbackground(0);textcolor(4);gotoxy(41,9);cprintf(" %c%c%c%c%c%c%c %c%c        %c%c        %c%c %c%c %c%c      %c%c%c%c%c%c%c %c%c   %c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	textbackground(0);textcolor(4);gotoxy(41,10);cprintf(" %c%c   %c%c %c%c%c%c%c%c%c   %c%c        %c%c %c%c %c%c%c%c%c%c%c %c%c   %c%c %c%c    %c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);

}

main(){
system("color 0F");
tampilanopening();
getch();
}
