////////////////////////////////////////////////////////////////////////////////
//      /     /     /     /     /     /     /     /     /     /     /     /   //
//     /     /     /     /    UJIAN AKHIR SEMESTER     /     /     /     /    //
//    /     /     /     /    PROJECT APLIKASI E-TIKET /     /     /     /     //
//   /     /     /     /     /     / OLEH :    /     /     /     /     /     ///
//  /     /     /     /     /  	ARIS PURNAMA /     /     /     /     /     / //
// /     /     /     /     /D3 MANAJEMEN INFORMATIKA     /     /     /     /  //
///     /     /     /     /     /     /     /     /     /     /     /     /   //
////////////////////////////////////////////////////////////////////////////////
//                          //                     //                         //
//    SCREEN BUFFER SIZE    //     WINDOW SIZE     //     WINDOW POSITION     //
//         120 X 42         //      120 X 40       //    180 X 0 (OPSIONAL)   //
//                          //                     //                         //
////////////////////////////////////////////////////////////////////////////////
//     /     /     /     /     /     /     /     /     /     /     /     /    //
//    /     /     /     / SCREEN BACKGROUND : WHITE   /     /     /     /     //
//   /     /     /     /  SCREEN TEXT    /  : BLACK  /     /     /     /     ///
//  /     /     /     /   FONT    /     /   : CONSOLAS    /     /     /     / //
// /     /     /     /    SIZE   /     /    : 16   /     /     /     /     /  //
///     /     /     /     /     /     /     /     /     /     /     /     /   //
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>                                                             //
#include <conio.h>                                                             //
#include <windows.h>                                                           //
#include <time.h>                                                              //
////////////////////////////////////////////////////////////////////////////////
////////////////////////////// P R O T O T Y P E ///////////////////////////////
void pesawat();
void uang1();
void start();
int dasar(int a, int b, int c, int d);
void titik(int x,int y,int warna);
void garis(int sumbu,int mulaiX,int mulaiY,int panjang,int warna);
void persegi(int mulaiX, int mulaiY, int panjangX, int panjangY, int warna);
void loading();
void loading1();
void home();
void menuutama();
void nama1();
void buatakun();
void sisitampilan();
void nama1();
void jeniskelamin();
void usia1();
void alamat1();
void kota1();
void provinsi1();
void nohp1();
void nohp2();
void login();
void pekerjaan1();
void desa1();
void kampung1();
void kecamatan1();
void tentang();
void username1();
void password1();
void profil();
void informasi();
void transaksi();
void tiketpesawat();
void tujuanairasia();
void tujuangaruda();
void tujuancitilink();
void tujuansriwijaya();
void namapng();
void jeniskelamin1();
void usia2();
void hapus();
void keluar();
void keluar2();
void tagihan();
void latar();
void jumlahtiket();
void warganegara();
void tglpembelian();
void kota2();
void jenispesawat();
void pembayaran();
void struk();
void datatransaksi();
void tambahsaldo();
void array();
//fungci
int dasar(int a, int b, int c, int d);
//validasi
int validasihuruf(char a []);
int validasinama(char a []);
int validasiangka(char a[]);
int validasiumur(char a[]);
int validasialamat(char a[]);
int validasiemail(char a[]);
int validasinohp(char a[]);
int validasiusername(char a[]);
int validasipassword(char a[]);
int validasitiket(char a[]);
int validasiuang(char a[]);

////////////////////////////////////////////////////////////////////////////////
////////////////////////////// VARIABEL GLOBAL /////////////////////////////////
char nama[100];
char umur[100];
char jk[10];
char alamat[100];
char kota[100];
char provinsi[100];
char nohp[50];
char nohp3[50];
char pekerjaan[50];
char kampung [100];
char email[50];
char kecamatan[50];
char desa[50];
char nama2[100];
char umur1[100];
char jk1[10];

///////////////////
char user[100];
char pass[100];
char user2[100];
char pass2[100];
////////////////////
char uang[50];
int  pembantu;
int pilih;
char inp;
int harga=1;

char wargangr[25];
char tglpbln[100];
char kota3[50];
int hasil;
int total;

char arr[10][10][10];
char jmltiket[50];
int aspek;
char n[10];
int z=0;
char nmr[10]="Berhasil";
struct tm* waktu;
////////////////////////////////////////////////////////////////////////////////
//................................PESAWAT.....................................//
void pesawat(){
   textcolor(4);
   for(int x=150;x>=0;x--){
   Sleep(20);
 		gotoxy(x,5);cprintf("                 %c%c                                                                  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	   gotoxy(x,6);cprintf("                %c%c %c%c                                                      %c%c%c%c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
      gotoxy(x,7);cprintf("               %c%c    %c%c                                                   %c%c%c    %c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
      gotoxy(x,8);cprintf("                %c%c      %c%c                                              %c%c%c     %c%c   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
      gotoxy(x,9);cprintf("                  %c%c       %c%c                                         %c%c%c      %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
      gotoxy(x,10);cprintf("                   %c%c       %c%c                                     %c%c%c       %c%c     ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
      gotoxy(x,11);cprintf("                     %c%c       %c%c                                 %c%c%c        %c%c      ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
      gotoxy(x,12);cprintf("                       %c%c       %c%c                             %c%c%c         %c%c       ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
  		gotoxy(x,13);cprintf("             %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c          %c%c        ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
      gotoxy(x,14);cprintf("           %c%c%c%c%c%c                                                        %c%c         ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	gotoxy(x,15);cprintf("         %c%c%c   %c%c%c                                                      %c%c          ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	gotoxy(x,16);cprintf("      %c%c%c      %c%c%c     %c%c       %c%c       %c%c       %c%c                   %c%c           ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	gotoxy(x,17);cprintf("    %c%c%c        %c%c%c    %c  %c     %c  %c     %c  %c     %c  %c                 %c%c            ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	gotoxy(x,18);cprintf("  %c%c%c          %c%c%c     %c%c       %c%c       %c%c       %c%c              %c%c%c%c%c             ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	gotoxy(x,19);cprintf("  %c%c%c%c        %c%c%c                                               %c%c%c%c%c               ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	gotoxy(x,20);cprintf("   %c%c%c%c%c%c%c%c%c%c%c%c%c              %c%c%c%c%c%c%c%c%c%c%c                      %c%c%c%c                 ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	gotoxy(x,21);cprintf("     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
      gotoxy(x,22);cprintf("                                  %c%c       %c%c                                       ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(x,23);cprintf("                                    %c%c       %c%c                                     ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(x,24);cprintf("                                      %c%c       %c%c                                   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(x,25);cprintf("                                        %c%c       %c%c                                 ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
      gotoxy(x,26);cprintf("                                          %c%c%c      %c%c                               ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
      gotoxy(x,27);cprintf("                                              %c%c%c    %c%c                             ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(x,28);cprintf("                                                 %c%c%c  %c%c                            ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
      gotoxy(x,29);cprintf("                                                    %c%c%c%c%c                           ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	}
}
////////////////////////////////////////////////////////////////////////////////
//............................... SISI TAMPLIAN...............................//
void sisitampilan(){
	textcolor(6);
	for (int a=1; a<=119; a++){
		gotoxy(a,1);cprintf("%c",219);
	}
	for (int b=1; b<=41; b++){
		gotoxy(1,b);cprintf("%c",219);
	}
	for (int c=1; c<=41; c++){
		gotoxy(120,c);cprintf("%c",219);
	}
	for (int d=1; d<=119; d++){
		gotoxy(d,42);cprintf("%c",219);
	}
}


////////////////////////////////////////////////////////////////////////////////
//................................... D A S A R...............................//
int dasar(int a, int b, int c, int d){
	for(int x=1; x<=a; x++){
		for(int y=1; y<=b; y++){
   		gotoxy(c+1+x,d+1+y);textbackground(0);cprintf("  ");Sleep(0);
   	}
	}
}


////////////////////////////////////////////////////////////////////////////////
//............................... T I T I K ..................................//
void titik(x, y, warna){
	gotoxy(x, y);
   textcolor(warna);
	cprintf("%c",219);
}

////////////////////////////////////////////////////////////////////////////////
//................................ H A P U S .................................//

void hapus(){
	for(int a=1;a<=43;a++){
   	gotoxy(1,0+a);printf("                                                                                                                        ");Sleep(25);
   }
}




////////////////////////////////////////////////////////////////////////////////
//............................... G A R I S ..................................//

void garis(sumbu, mulaiX, mulaiY, panjang, warna) {
   for(int x = 1; x <= panjang; x ++){
   	if(sumbu == 'x') {
      	titik(mulaiX + x - 1, mulaiY, warna);
      } else if(sumbu == 'y') {
      	titik(mulaiX, mulaiY + x - 1, warna);
      }
   }
}


////////////////////////////////////////////////////////////////////////////////
//.............................. P E R S E G I ...............................//

void persegi(mulaiX, mulaiY, panjangX, panjangY, warna) {
	for(int y = 1; y <= panjangY; y ++){
   	garis('x', mulaiX, mulaiY + y - 1, panjangX, warna);
   }
}


////////////////////////////////////////////////////////////////////////////////
//...........................B A C K G R O U N D 1............................//
void background1(){
	for(int a=1; a<=120; a++){
		for(int b=1; b<=42; b++){
   		gotoxy(a,b);textcolor(3);cprintf("%c",219);
   	}
	}
}


////////////////////////////////////////////////////////////////////////////////
//................................Latar.......................................//
void latar(){
		persegi(1,3,120,9,7);
		persegi(3,11,115,30,8);
		persegi(10,12,100,25,7);

}


////////////////////////////////////////////////////////////////////////////////
//..................................L O D I N G...............................//
void loading(){
   int tamp=0;
   for(int a=1;a<=101;a++){
   	textcolor(1);Sleep(50);
		gotoxy(10+a,37);cprintf("%c",219);
      gotoxy(51,35);cprintf("Loading ... %d %",tamp);
   	tamp+=1;
   }
   gotoxy(51,35);printf("-Loading Berhasil-");Sleep(500);
   gotoxy(51,35);printf("                  ");Sleep(500);
   gotoxy(51,35);printf("-Loading Berhasil-");
   clrscr();home();
}

////////////////////////////////Tampilan 1//////////////////////////////////////
//.............................. Background_1.................................//
void start(){
background1();
sisitampilan();
persegi(1,11,120,7,7);
gotoxy(33,12);textcolor(5);cprintf("%c%c     %c%c %c%c%c%c%c%c %c%c     %c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c %c%c%c%c %c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(33,13);textcolor(5);cprintf("%c%c  %c  %c%c %c%c     %c%c     %c%c     %c%c  %c%c %c%c%c%c%c%c%c%c%c %c%c     ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(33,14);textcolor(5);cprintf("%c%c %c%c%c %c%c %c%c%c%c   %c%c     %c%c     %c%c  %c%c %c%c %c%c%c %c%c %c%c%c%c   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(33,15);textcolor(5);cprintf("%c%c%c%c%c%c%c%c%c %c%c     %c%c     %c%c     %c%c  %c%c %c%c  %c  %c%c %c%c     ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(33,16);textcolor(5);cprintf("%c%c%c%c %c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c     %c%c %c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
printf("\n\n\n");
gotoxy(55,17);printf(" T O ");
persegi(1,18,120,7,7);
gotoxy(36,19);textcolor(5);cprintf("%c%c%c%c%c%c        %c%c%c%c%c%c   %c%c   %c%c  %c%c %c%c%c%c%c%c %c%c%c%c%c%c \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(36,20);textcolor(5);cprintf("%c%c              %c%c     %c%c   %c%c %c%c  %c%c       %c%c   \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(36,21);textcolor(5);cprintf("%c%c%c%c%c%c %c%c%c%c%c%c   %c%c     %c%c   %c%c%c%c   %c%c%c%c%c%c   %c%c   \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(36,22);textcolor(5);cprintf("%c%c              %c%c     %c%c   %c%c %c%c  %c%c       %c%c   \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(36,23);textcolor(5);cprintf("%c%c%c%c%c%c          %c%c     %c%c   %c%c  %c%c %c%c%c%c%c%c   %c%c   \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);

gotoxy(40,8);textcolor(5);cprintf("   <<=== A R I S    P U R N A M A === >>  ");
gotoxy(35,27);textcolor(5);cprintf(" <<==== U J I A N    A K H I R    S E M E S T E R ====>> ");
gotoxy(30,29);textcolor(5);cprintf(" <<==== D - 3   M A N A J E M E N    I N F O R M A T I K A ====>> ");

loading();
}



////////////////////////////////////////////////////////////////////////////////
//....................................H O M E.................................//
void home (){
int pilih;
	background1();
   sisitampilan();
   persegi(1,2,120,9,7);
   gotoxy(35,4);textcolor(5);cprintf("%c%c%c%c%c%c        %c%c%c%c%c%c   %c%c   %c%c  %c%c %c%c%c%c%c%c %c%c%c%c%c%c \n",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36);
	gotoxy(35,5);textcolor(5);cprintf("%c%c              %c%c     %c%c   %c%c %c%c  %c%c       %c%c   \n",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36);
	gotoxy(35,6);textcolor(5);cprintf("%c%c%c%c%c%c %c%c%c%c%c%c   %c%c     %c%c   %c%c%c%c   %c%c%c%c%c%c   %c%c   \n",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36);
	gotoxy(35,7);textcolor(5);cprintf("%c%c              %c%c     %c%c   %c%c %c%c  %c%c       %c%c   \n",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36);
	gotoxy(35,8);textcolor(5);cprintf("%c%c%c%c%c%c          %c%c     %c%c   %c%c  %c%c %c%c%c%c%c%c   %c%c   \n",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36);
   persegi(1,13,120,3,7);
   gotoxy(45,14);textcolor(5);cprintf(" =='''''''''''''''''''== ");
   gotoxy(45,14);textcolor(5);cprintf(" ======= H O M E ======= ");
   gotoxy(45,15);textcolor(5);cprintf(" ==,,,,,,,,,,,,,,,,,,,== ");
   persegi(45,18,24,3,7);
   gotoxy(50,19);textcolor(0);cprintf(" 1. Buat Akun  ");
   persegi(45,22,24,3,7);
   gotoxy(50,23);textcolor(0);cprintf(" 2. Masuk  ");
   persegi(45,26,24,3,7);
   gotoxy(50,27);textcolor(0);cprintf(" 3. Keluar  ");
   persegi(40,32,34,3,7);
   persegi(40,35,34,3,7);
	while(true){
      textcolor(0);
      gotoxy(50,33);cprintf("pilih akses   ");
      gotoxy(55,36);pilih=getche();
		if(pilih=='1'){
      	clrscr();buatakun();
      }else if (pilih=='2'){
         clrscr();login();
      }else if(pilih=='3'){
      	clrscr();keluar2();
      }else {
      	gotoxy(47,36);textcolor(4);printf("Inputan Tidak Valide");
         gotoxy(47,36);textcolor(7);printf("                    ");
      }

   }
}



////////////////////////////////////////////////////////////////////////////////
//............................MENU UTAMA......................................//
void menuutama(){
background1();
sisitampilan();
   	persegi(1,3,120,7,7);
   gotoxy(35,4);textcolor(5);cprintf("%c%c%c%c%c%c        %c%c%c%c%c%c   %c%c   %c%c  %c%c %c%c%c%c%c%c %c%c%c%c%c%c \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	gotoxy(35,5);textcolor(5);cprintf("%c%c              %c%c     %c%c   %c%c %c%c  %c%c       %c%c   \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	gotoxy(35,6);textcolor(5);cprintf("%c%c%c%c%c%c %c%c%c%c%c%c   %c%c     %c%c   %c%c%c%c   %c%c%c%c%c%c   %c%c   \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	gotoxy(35,7);textcolor(5);cprintf("%c%c              %c%c     %c%c   %c%c %c%c  %c%c       %c%c   \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	gotoxy(35,8);textcolor(5);cprintf("%c%c%c%c%c%c          %c%c     %c%c   %c%c  %c%c %c%c%c%c%c%c   %c%c   \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   persegi(50,11,24,3,7);
   	gotoxy(51,12);textcolor(0);cprintf(" M E N U  U T A M A ");
   persegi(15,19,24,3,7);
   	gotoxy(17,20);textcolor(0);cprintf("1. TENTANG        ");
   persegi(85,19,24,3,7);
   	gotoxy(87,20);textcolor(0);cprintf("2. DATA TRANSAKSI ");
   persegi(15,25,24,3,7);
   	gotoxy(17,26);textcolor(0);cprintf("3. PEMBELIAN      ");
   persegi(50,25,24,3,7);
   	gotoxy(52,26);textcolor(0);cprintf("4. PEMBAYARAN     ");
   persegi(85,25,24,3,7);
   	gotoxy(88,26);textcolor(0);cprintf("5. HOME           ");
   persegi(50,35,24,3,7);
   while(true){
      textcolor(0);
      gotoxy(52,36);cprintf("PILIH AKSES   ");
      gotoxy(65,36);pilih=getche();
		if(pilih=='1'){
      	clrscr();
         tentang();
      }else if (pilih=='2'){
         clrscr();
         datatransaksi();
      }else if(pilih=='3'){
      	clrscr();
         transaksi();
      }else if(pilih=='4'){
        	clrscr();
         pembayaran();
      }else if (pilih=='5'){
      	clrscr();
         home();
       }else {

      	gotoxy(50,36);textcolor(4);cprintf("Inputan Tidak Valide!!!");Sleep(750);
         gotoxy(50,36);printf("                       ");Sleep(750);
         gotoxy(50,36);textcolor(4);cprintf("Inputan Tidak Valide!!!");Sleep(750);
         gotoxy(50,36);printf("                       ");Sleep(750);

      }

   }
}


////////////////////////////////////////////////////////////////////////////////
//.........................T E N T A N G......................................//
void tentang(){
background1();
   sisitampilan();
   persegi(2,2,118,35,7);
   persegi(2,2,118,7,7);
   persegi(4,10,112,30,8);
   textcolor(0);
   gotoxy(32,3);cprintf(" %c%c%c%c%c%c%c%c %c%c%c%c%c%c %c%c   %c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c %c%c   %c%c %c%c%c%c%c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(32,4);cprintf("    %c%c    %c%c     %c%c%c  %c%c    %c%c    %c%c  %c%c %c%c%c  %c%c %c%c        ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(32,5);cprintf("    %c%c    %c%c%c%c%c%c %c%c %c %c%c    %c%c    %c%c%c%c%c%c %c%c %c %c%c %c%c %c%c%c%c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(32,6);cprintf("    %c%c    %c%c     %c%c  %c%c%c    %c%c    %c%c  %c%c %c%c  %c%c%c %c%c    %c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(32,7);cprintf("    %c%c    %c%c%c%c%c%c %c%c   %c%c    %c%c    %c%c  %c%c %c%c   %c%c %c%c%c%c%c%c%c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   persegi(10,15,30,3,7);
   gotoxy(15,16);printf("1. Profil");
   persegi(47,23,30,3,7);
   gotoxy(50,24);printf("2. Informasi");
   persegi(82,15,30,3,7);
   gotoxy(85,16);printf("0. Kembali");
   while(true){
      textcolor(0);
      gotoxy(25,37);cprintf(" <<== Tekan 0 untuk kembali                   Masukan :       ==>> ");
   	gotoxy(80,37);pilih=getche();
   	if(pilih=='0'){
      	clrscr();menuutama();
      }else if(pilih=='1'){
      	clrscr();profil();
      }else if(pilih=='2'){
         clrscr();informasi();
      }else{
         textcolor(4);
      	gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         gotoxy(50,37);cprintf("                       ");Sleep(750);
      	gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         gotoxy(50,37);cprintf("                       ");Sleep(750);
      }
   }
}


//............................................................................//
void profil(){
background1();
//persegi(1,2,120,7,3);
persegi(1,1,120,42,7);
sisitampilan();
		gotoxy(40,3);printf("%c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c %c%c       ",64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64);
      gotoxy(40,4);printf("%c%c  %c%c %c%c   %c %c%c  %c%c %c%c       %c%c %c%c       ",64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64);
      gotoxy(40,5);printf("%c%c%c%c%c%c %c%c%c%c   %c%c  %c%c %c%c%c%c%c%c   %c%c %c%c       ",64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64);
      gotoxy(40,6);printf("%c%c     %c%c  %c  %c%c  %c%c %c%c       %c%c %c%c       ",64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64);
      gotoxy(40,7);printf("%c%c     %c%c   %c %c%c%c%c%c%c %c%c       %c%c %c%c%c%c%c%c%c%c ",64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64);
      gotoxy(45,9);printf(" =========================== ");
      gotoxy(45,10);printf(" <<==   E - T I K E T   ==>> ");
      gotoxy(45,11);printf(" ======---------------====== ");
      gotoxy(45,12);printf(" =========================== ");

      gotoxy(7,14);printf("==================================================================");
      gotoxy(7,15);printf("E-Tiket merupakan Aplikasi Untuk Membeli Tiket dan Booking Tiket Pesawat ");
      gotoxy(7,16);printf("Pembuatan Aplikasi Ini ditujukan Untuk Memenuhi Tugas Akhir Saya dan Tidak Hanya Memenuhi Tugas Saja.");
      gotoxy(7,17);printf("Saya Juga Bertujuan Untuk Membuat Aplikasi Ini Agar Memudahkan Kita Dalam Berpergian ");
      gotoxy(7,18);printf("=================================================================");
      gotoxy(7,20);printf("Alamat          : Jalan Dakota No. 8A Sukaraja Cicendo - Bandung ");
      gotoxy(7,21);printf("Kontak Kami     : 0857-2977-4828 ");
      gotoxy(7,22);printf("Websit          : www.etiket/asd/sdm.com ");
      gotoxy(7,23);printf("E-Mail          : etiket.123@gmail.com ");
      gotoxy(7,24);printf("==================================================================");
      gotoxy(7,25);printf(" <<-- Creator -->> ");
      gotoxy(7,26);printf("Nama                  : Aris Purnama ");
      gotoxy(7,27);printf("Tempat, Tanggal Lahir : Ciamis, 16 November 2001 ");
      gotoxy(7,28);printf("Perguruan Tinggi      : Universitas Nasional PASIM ");
      gotoxy(7,29);printf("Fakultas              : Ilmu Komputer ");
      gotoxy(7,30);printf("Prodi                 : D-3 Manajemen Informatika ");
      gotoxy(7,31);printf("Kontak                : 0857-2977-4828 ");
      gotoxy(7,32);printf("E-Mail                : aris.purnama.1616@gmail.com");
   while(true){
      textcolor(0);
      gotoxy(50,37);cprintf(" <<== Tekan 0 untuk kembali ==>> ");
   	gotoxy(66,37);pilih=getche();
   	if(pilih=='0'){
      	clrscr();tentang();
      }else{
         textcolor(4);
      	gotoxy(50,37);cprintf("     INPUTAN TIDAK VALIDE !!!!    ");Sleep(750);
         gotoxy(50,37);cprintf("                                  ");Sleep(750);
      	gotoxy(50,37);cprintf("     INPUTAN TIDAK VALIDE !!!!    ");Sleep(750);
         gotoxy(50,37);cprintf("                                  ");Sleep(750);
      }
   }

}


//............................................................................//
void informasi(){
persegi(3,11,115,30,8);
persegi(10,12,100,25,7);
gotoxy(35,4);printf(" %c%c %c%c  %c%c %c%c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c   %c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
gotoxy(35,5);printf(" %c%c %c%c%c %c%c %c%c      %c%c  %c%c %c%c   %c %c%c%c %c%c%c %c%c  %c%c %c%c     %c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
gotoxy(35,6);printf(" %c%c %c%c%c%c%c%c %c%c%c%c%c   %c%c  %c%c %c%c%c%c   %c%c %c %c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
gotoxy(35,7);printf(" %c%c %c%c %c%c%c %c%c      %c%c  %c%c %c%c  %c  %c%c   %c%c %c%c  %c%c     %c%c %c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
gotoxy(35,8);printf(" %c%c %c%c  %c%c %c%c      %c%c%c%c%c%c %c%c   %c %c%c   %c%c %c%c  %c%c %c%c%c%c%c%c %c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
gotoxy(20,13);printf(".......................................................................");
gotoxy(20,17);printf("Aplikasi Ini Dibuat Untuk Memudahkan Kita Jika Ingin Berpergian Jauh");
gotoxy(20,18);printf("Ke Luar Pulau atau Luar Kota Saja, Aplikasi Ini Menawarkan Tiket Pesawat");
gotoxy(20,19);printf("Dan Jangan Khawatir Dengan Keamanan dan Kenyamanan-Nya.");
gotoxy(20,20);printf("Aplikasi Ini Juga Memiliki Izin Yang Terjamin, Data Yang Dimasukan Harus");
gotoxy(20,21);printf("Sesuai Dengan KTP jika Melakukan Pembelian");
gotoxy(20,22);printf("........................................................................");
gotoxy(20,23);printf("........................................................................");
gotoxy(20,24);printf("Semoga Aplikasi Ini Bisa Membantu Kita dalam Bekerja Ataupun Beraktivitas.");
gotoxy(20,25);printf("Saya Mohon Maaf Bila Banyak Kekurangan Dalam Aplikasi Ini");
gotoxy(20,26);printf("........................................................................");
while(true){
      textcolor(0);
      gotoxy(45,37);cprintf(" <<== Tekan 0 untuk kembali ==>> ");
   	gotoxy(60,37);pilih=getche();
   	if(pilih=='0'){
      	clrscr();tentang();
      }else{
         textcolor(4);
      	gotoxy(45,37);cprintf("      MASUKAN TIDAK VALIDE !!!      ");Sleep(750);
         gotoxy(45,37);cprintf("                                    ");Sleep(750);
      	gotoxy(45,37);cprintf("      MASUKAN TIDAK VALIDE !!!      ");Sleep(750);
         gotoxy(45,37);cprintf("                                    ");Sleep(750);
      }
   }

}


////////////////////////////////////////////////////////////////////////////////
/////...............................TRANSAKSI............................../////
void transaksi(){
	background1();
	persegi(1,3,120,7,7);
   persegi(5,10,110,30,8);
   persegi(8,11,105,29,7);

     		gotoxy(35,3);printf("%c%c%c%c%c  %c%c %c%c%c%c%c%c %c%c%c%c%c   %c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
      	gotoxy(35,4);printf("%c%c   %c %c%c %c%c  %c%c %c%c   %c  %c%c  %c%c    %c%c    %c%c  %c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
       	gotoxy(35,5);printf("%c%c%c%c%c  %c%c %c%c  %c%c %c%c    %c %c%c%c%c%c%c    %c%c    %c%c%c%c%c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
        	gotoxy(35,6);printf("%c%c   %c %c%c %c%c  %c%c %c%c   %c  %c%c  %c%c    %c%c    %c%c  %c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
         gotoxy(35,7);printf("%c%c%c%c%c  %c%c %c%c%c%c%c%c %c%c%c%c%c   %c%c  %c%c    %c%c    %c%c  %c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
       textcolor(0);
		gotoxy(12,12);cprintf("Nama Pemesan             : ");
      gotoxy(12,14);cprintf("Jenis Kelamin (P/L)      : ");
      gotoxy(12,16);cprintf("Usia                     :     tahun");
      gotoxy(12,18);cprintf("No. Hp                   : ");
      gotoxy(12,20);cprintf("Jumlah Tiket             : ");
      gotoxy(12,22);cprintf("Warga Negara             : Indonesia ");
      gotoxy(12,24);cprintf("Kota Asal                : ");
      gotoxy(12,26);cprintf("Tanggal Pembelian        :%d/%d/%d",waktu->tm_mday,waktu->tm_mon+1,1900+waktu->tm_year);

      while(true){
      textcolor(0);
      gotoxy(10,37);cprintf(" <<== Tekan 0 untuk kembali                   Masukan :               Tekan ENTER untuk lanjutkan ==> ");
   	gotoxy(66,37);pilih=getche();
   	if(pilih=='0'){
      	clrscr();menuutama();
      }else if(pilih==13){
         gotoxy(10,37);cprintf("                                                                                                      ");



         namapng();
      }else{
         textcolor(4);
      	gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         gotoxy(50,37);cprintf("                       ");Sleep(750);
      	gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         gotoxy(50,37);cprintf("                       ");Sleep(750);
      }
   }
}



////////////////////////////////////////////////////////////////////////////////
//gotoxy harus di perbaiki

void namapng(){


   	textcolor(0);gotoxy(40,12);gets(nama2);
   	textcolor(4);
   if(validasinama(nama2)==0&&strlen(nama2)<=25&&strlen(nama2)!=0){
   	strcpy(arr[0+z][0],nama2);
      jeniskelamin1();
   }else if(strlen(nama2)>25){
   	gotoxy(40,12);cprintf("Nama Maksimal 25 Digit (Coba Lagi)");Sleep(500);
      gotoxy(40,12);cprintf("                                                   ");Sleep(500);
      gotoxy(40,12);cprintf("Nama Maksimal 25 Digit (Coba Lagi)");Sleep(500);
      gotoxy(40,12);cprintf("                                                   ");namapng();
   }else{
   	gotoxy(40,12);cprintf("Masukan Tidak Valid (Coba Lagi)");Sleep(500);
      gotoxy(40,12);cprintf("                                                   ");Sleep(500);
      gotoxy(40,12);cprintf("Masukan Tidak Valid (Coba Lagi)");Sleep(500);
      gotoxy(40,12);cprintf("                                                   ");namapng();
   }
}


//............................................................................//
void jeniskelamin1(){
			textcolor(0);
         gotoxy(40,14);gets(jk1);
         textcolor(4);
		if(strcmp(jk1,"L")==0 || strcmp(jk1,"l")==0 || strcmp(jk1,"P")==0 || strcmp(jk1,"p")==0){
			usia2();
		}else{
      	gotoxy(40,14);cprintf("Inputan Tidak valid (Coba Lagi)");Sleep(500);
         gotoxy(40,14);cprintf("                                                ");Sleep(500);
      	gotoxy(40,14);cprintf("Inputan Tidak valid (Coba Lagi)");Sleep(500);
         gotoxy(40,14);cprintf("                                                ");Sleep(500);
      	jeniskelamin1();
		}
}


//.............................................................................//
void usia2(){
   textcolor(0);
   	gotoxy(40,16);gets(umur1);
      	textcolor(4);
   if(validasiumur(umur1)==0&&strlen(umur1)==2&&strlen(umur1)!=0){
  		nohp1();
   }else if(strlen(umur1)==1){
   	gotoxy(40,16);cprintf("Minimal Usia 10 Tahun (Coba Lagi)");Sleep(500);
      gotoxy(40,16);printf("                                                    ");Sleep(500);
      gotoxy(40,16);cprintf("Minimal Usia 10 Tahun (Coba Lagi)");Sleep(500);
      gotoxy(40,16);printf("                                                    ");gotoxy(12,16);textcolor(0);cprintf("Usia                     :     tahun");usia2();
   }else{
   textcolor(4);
   	gotoxy(40,16);cprintf("Masukan Tidak Valid (Coba Lagi)");Sleep(500);
      gotoxy(40,16);cprintf("                               ");Sleep(500);
      gotoxy(40,16);cprintf("Masukan Tidak Valid (Coba Lagi)");Sleep(500);
      gotoxy(40,16);cprintf("                                                   ");textcolor(0);gotoxy(12,16);cprintf("Usia                     :     tahun");usia2();
   }
}


//...........................................................................//
void nohp1(){
   textcolor(0);
   gotoxy(40,18);gets(nohp);
   textcolor(4);
   if(validasinohp(nohp)==0&&strlen(nohp)>=11&&strlen(nohp)<=13&&(nohp[0]=='0'&&nohp[1]=='8'&&(nohp[2]=='3'||nohp[2]=='7'||nohp[2]=='5'||nohp[2]=='9'||nohp[2]=='2'||nohp[2]=='1'))&&strlen(nohp)!=0){
   	jumlahtiket();
   }else if(strlen(nohp)>13){
   	gotoxy(40,18);cprintf("Nomor Handphone Maksimal 13 Digit (Coba Lagi)");Sleep(500);
      gotoxy(40,18);cprintf("                                             ");Sleep(500);
      gotoxy(40,18);cprintf("Nomor Handphone Maksimal 13 Digit (Coba Lagi)");Sleep(500);
      gotoxy(40,18);cprintf("                                             ");nohp1();
   }else{
   	gotoxy(40,18);cprintf("Masukan Tidak Valid, Masukan No. Hp 12 digits(Coba Lagi)");Sleep(500);
      gotoxy(40,18);cprintf("                                                           ");Sleep(500);
      gotoxy(40,18);cprintf("Masukan Tidak Valid, Masukan No. Hp 12 digits(Coba Lagi)");Sleep(500);
      gotoxy(40,18);cprintf("                                                          ");nohp1();
   }
}


////////....................................................................////
void jumlahtiket(){
			textcolor(0);
         gotoxy(40,20);gets(jmltiket);
         textcolor(4);
		if(validasitiket(jmltiket)==0&&jmltiket!=0&&strlen(jmltiket)<=2){
			aspek=atoi(jmltiket);
				itoa(aspek,n,10);
				strcpy(arr[0+z][1],n);
				kota2();
		}else{
      	gotoxy(40,20);cprintf("Inputan Tidak valid (Coba Lagi) Max Tiket 100!!!");Sleep(500);
         gotoxy(40,20);cprintf("                                                 ");Sleep(500);
      	gotoxy(40,20);cprintf("Inputan Tidak valid (Coba Lagi) Max Tiket 100!!!");Sleep(500);
         gotoxy(40,20);cprintf("                                                 ");Sleep(500);
      	jumlahtiket();
		}
}


//............................................................................//
//............................................................................//
void kota2(){
   	textcolor(0);
		gotoxy(40,24);gets(kota3);
      textcolor(4);
	if(validasihuruf(kota3)==0&&strlen(kota3)<=25&&strlen(kota3)!=0&&strlen(kota3)>=4){



		jenispesawat();
	}else if(strlen(kota3)>25){
			gotoxy(40,24);cprintf("Batas 25 karakter");Sleep(1000);
         gotoxy(40,24);cprintf("                                              ");Sleep(1000);
      	gotoxy(40,24);cprintf("Batas 25 karakter");Sleep(1000);
         gotoxy(40,24);cprintf("                                              ");kota2();
	}else{
			gotoxy(40,24);cprintf(" Karakter Tidak Sesuai minimal 4 digits");Sleep(750);
         gotoxy(40,24);cprintf("                                         ");Sleep(1000);
			gotoxy(40,24);cprintf(" Karakter Tidak Sesuai minimal 4 digits");Sleep(750);
         gotoxy(40,24);cprintf("                                         ");kota2();
	}
}


//............................................................................//
//Tiket Pesawat
void jenispesawat(){
	background1();
   sisitampilan();
		latar();
      	gotoxy(38,3);textcolor(9);printf("%c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c   %c%c %c%c%c%c%c%c %c%c%c%c%c%c%c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
      	gotoxy(38,4);textcolor(9);printf("%c%c  %c%c %c%c     %c%c     %c%c  %c%c %c%c   %c%c %c%c  %c%c    %c%c    ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
       	gotoxy(38,5);textcolor(9);printf("%c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c %c %c%c %c%c%c%c%c%c    %c%c    ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
        	gotoxy(38,6);textcolor(9);printf("%c%c     %c%c         %c%c %c%c  %c%c %c%c%c%c%c%c%c %c%c  %c%c    %c%c    ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
         gotoxy(38,7);textcolor(9);printf("%c%c     %c%c%c%c%c%c %c%c%c%c%c%c %c%c  %c%c %c%c%c %c%c%c %c%c  %c%c    %c%c    ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
         gotoxy(40,14);printf("Pilih Jenis Pesawat Yang Akan Anda Gunakan");
          persegi(42,17,36,15,8);
      	gotoxy(48,19);printf("1. Pesawat Air Asia      ");
      	gotoxy(48,22);printf("2. Pesawat Garuda        ");
      	gotoxy(48,25);printf("3. Pesawat Citilink      ");
      	gotoxy(48,28);printf("4. Pesawat Sriwijiya Air ");
      while(true){
      	textcolor(0);
      	gotoxy(25,37);cprintf(" <<== Tekan 0 untuk kembali                   Masukan :        ==>>");
   		gotoxy(82,37);pilih=getche();
   	if(pilih=='0'){
      	clrscr();
         menuutama();
      }else if(pilih=='1'){
      	clrscr();
         tujuanairasia();
      }else if(pilih=='2'){
         clrscr();
         tujuangaruda();
      }else if (pilih=='3'){
      	clrscr();
         tujuancitilink();
      }else if (pilih=='4'){
      	clrscr();
         tujuansriwijaya();
      }else{
         textcolor(4);
      	gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         gotoxy(50,37);cprintf("                       ");Sleep(750);
      	gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         gotoxy(50,37);cprintf("                       ");Sleep(750);
         }
      }
}


/////....................................................................../////
void tujuanairasia(){
background1();
	sisitampilan();
	persegi(5,3,112,35,7);
   gotoxy(38,3);printf("%c%c%c%c%c%c%c %c%c  %c%c   %c%c%c%c %c%c  %c%c %c%c%c%c%c%c %c%c  %c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,4);printf("  %c%c    %c%c  %c%c     %c%c %c%c  %c%c %c%c  %c%c %c%c%c %c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,5);printf("  %c%c    %c%c  %c%c     %c%c %c%c  %c%c %c%c%c%c%c%c %c%c%c%c%c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,6);printf("  %c%c    %c%c  %c%c %c%c  %c%c %c%c  %c%c %c%c  %c%c %c%c %c%c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,7);printf("  %c%c    %c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c  %c%c %c%c  %c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   persegi(10,10,100,25,8);
	gotoxy(15,12);printf(" a. Medan         ");
	gotoxy(15,14);printf(" b. Lampung       ");
	gotoxy(15,16);printf(" c. Makasar       ");
	gotoxy(15,18);printf(" d. Jayapura      ");
	gotoxy(15,20);printf(" e. Pekanbaru     ");
	gotoxy(65,22);printf(" f. Palangkaraya  ");
	gotoxy(65,24);printf(" g. Banjarmasin   ");
	gotoxy(65,26);printf(" h. Bandung       ");
	gotoxy(65,28);printf(" i. Jakarta       ");
	gotoxy(65,30);printf(" j. Yogyakarta    ");
   gotoxy(35,12);printf("  Rp.500000       ");
   gotoxy(35,14);printf("  Rp.450000       ");
   gotoxy(35,16);printf("  Rp.550000       ");
   gotoxy(35,18);printf("  Rp.550000       ");
   gotoxy(35,20);printf("  Rp.550000       ");
   gotoxy(85,22);printf("  Rp.400000       ");
   gotoxy(85,24);printf("  Rp.450000       ");
   gotoxy(85,26);printf("  Rp.300000       ");
   gotoxy(85,28);printf("  Rp.400000       ");
   gotoxy(85,30);printf("  Rp.450000       ");

   while(true){
      	textcolor(0);
      	gotoxy(45,37);cprintf(" <<==          Masukan Kode:        ==>>");
   		gotoxy(75,37);inp=getche();

   	if(inp=='a'){
      		harga=500000;
        		clrscr();
        		tagihan();
   	}else if(inp=='b'){
   		harga=450000;
      	clrscr();
      	tagihan();
   	}else if(inp=='c'){
   		harga=550000;
      	clrscr();
      	tagihan();
   	}else if(inp=='d'){
   		harga=550000;
      	clrscr();
      	tagihan();
   	}else if(inp=='e'){
   		harga=550000;
      	clrscr();
      	tagihan();
   	}else if(inp=='f'){
   		harga=400000;
      	clrscr();
      	tagihan();
  		 }else if(inp=='g'){
  			 harga=450000;
       	clrscr();
       	tagihan();
   	}else if(inp=='h'){
   		harga=300000;
      	clrscr();
      	tagihan();
   	}else if(inp=='i'){
   		harga=400000;
      	clrscr();
      	tagihan();
   	}else if(inp=='j'){
   		harga=450000;
      	clrscr();
      	tagihan();
   	}else{
      	gotoxy(20,37);printf("Masukan Tidak Valide (Coba Lagi)");Sleep(750);
         gotoxy(20,37);printf("                                ");Sleep(750);
         gotoxy(20,37);printf("Masukan Tidak Valide (Coba Lagi)");Sleep(750);
         gotoxy(20,37);printf("                                "); tujuanairasia();
      }
	}
}


/////........................................................................//
void tujuangaruda(){
background1();
	sisitampilan();
	persegi(5,3,112,35,7);
   gotoxy(38,3);printf("%c%c%c%c%c%c%c %c%c  %c%c   %c%c%c%c %c%c  %c%c %c%c%c%c%c%c %c%c  %c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,4);printf("  %c%c    %c%c  %c%c     %c%c %c%c  %c%c %c%c  %c%c %c%c%c %c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,5);printf("  %c%c    %c%c  %c%c     %c%c %c%c  %c%c %c%c%c%c%c%c %c%c%c%c%c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,6);printf("  %c%c    %c%c  %c%c %c%c  %c%c %c%c  %c%c %c%c  %c%c %c%c %c%c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,7);printf("  %c%c    %c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c  %c%c %c%c  %c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   persegi(10,10,100,25,8);
	gotoxy(15,12);printf(" a. Medan         ");
	gotoxy(15,14);printf(" b. Tanggerang    ");
	gotoxy(15,16);printf(" c. Jakarta       ");
	gotoxy(15,18);printf(" d. Wamena        ");
	gotoxy(15,20);printf(" e. Bawean        ");
	gotoxy(65,22);printf(" f. Madura        ");
	gotoxy(65,24);printf(" g. Pontianak     ");
	gotoxy(65,26);printf(" h. Banda Aceh    ");
	gotoxy(65,28);printf(" i. Yogyakarta    ");
	gotoxy(65,30);printf(" j. Bali          ");
   gotoxy(35,12);printf("  Rp.650000       ");
   gotoxy(35,14);printf("  Rp.350000       ");
   gotoxy(35,16);printf("  Rp.650000       ");
   gotoxy(35,18);printf("  Rp.600000       ");
   gotoxy(35,20);printf("  Rp.550000       ");
   gotoxy(85,22);printf("  Rp.750000       ");
   gotoxy(85,24);printf("  Rp.800000       ");
   gotoxy(85,26);printf("  Rp.850000       ");
   gotoxy(85,28);printf("  Rp.450000       ");
   gotoxy(85,30);printf("  Rp.450000       ");

   while(true){
      	textcolor(0);
      	gotoxy(45,37);cprintf(" <<==          Masukan Kode:        ==>>");
   		gotoxy(75,37);inp=getche();

   	if(inp=='a'){
      		harga=650000;
        		clrscr();
        		tagihan();
   	}else if(inp=='b'){
   		harga=350000;
      	clrscr();
      	tagihan();
   	}else if(inp=='c'){
   		harga=650000;
      	clrscr();
      	tagihan();
   	}else if(inp=='d'){
   		harga=600000;
      	clrscr();
      	tagihan();
   	}else if(inp=='e'){
   		harga=550000;
      	clrscr();
      	tagihan();
   	}else if(inp=='f'){
   		harga=750000;
      	clrscr();
      	tagihan();
  		 }else if(inp=='g'){
  			 harga=800000;
       	clrscr();
       	tagihan();
   	}else if(inp=='h'){
   		harga=850000;
      	clrscr();
      	tagihan();
   	}else if(inp=='i'){
   		harga=450000;
      	clrscr();
      	tagihan();
   	}else if(inp=='j'){
   		harga=450000;
      	clrscr();
      	tagihan();
   	}else{
      	gotoxy(20,37);printf("Masukan Tidak Valide (Coba Lagi)");Sleep(750);
         gotoxy(20,37);printf("                                ");Sleep(750);
         gotoxy(20,37);printf("Masukan Tidak Valide (Coba Lagi)");Sleep(750);
         gotoxy(20,37);printf("                                "); tujuanairasia();
      }
	}
}


////......................................................................./////
void tujuancitilink(){
background1();
	sisitampilan();
	persegi(5,3,112,35,7);
   gotoxy(38,3);printf("%c%c%c%c%c%c%c %c%c  %c%c   %c%c%c%c %c%c  %c%c %c%c%c%c%c%c %c%c  %c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,4);printf("  %c%c    %c%c  %c%c     %c%c %c%c  %c%c %c%c  %c%c %c%c%c %c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,5);printf("  %c%c    %c%c  %c%c     %c%c %c%c  %c%c %c%c%c%c%c%c %c%c%c%c%c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,6);printf("  %c%c    %c%c  %c%c %c%c  %c%c %c%c  %c%c %c%c  %c%c %c%c %c%c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,7);printf("  %c%c    %c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c  %c%c %c%c  %c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   persegi(10,10,100,25,8);
	gotoxy(15,12);printf(" a. Samarinda     ");
	gotoxy(15,14);printf(" b. Gorontalo     ");
	gotoxy(15,16);printf(" c. Denpasar      ");
	gotoxy(15,18);printf(" d. Mataram       ");
	gotoxy(15,20);printf(" e. Ternate       ");
	gotoxy(65,22);printf(" f. Sorong        ");
	gotoxy(65,24);printf(" g. Surakarta     ");
	gotoxy(65,26);printf(" h. Kota Jambi    ");
	gotoxy(65,28);printf(" i. Bandung       ");
	gotoxy(65,30);printf(" j. Jakarta       ");
   gotoxy(35,12);printf("  Rp.500000       ");
   gotoxy(35,14);printf("  Rp.500000       ");
   gotoxy(35,16);printf("  Rp.650000       ");
   gotoxy(35,18);printf("  Rp.500000       ");
   gotoxy(35,20);printf("  Rp.750000       ");
   gotoxy(85,22);printf("  Rp.450000       ");
   gotoxy(85,24);printf("  Rp.450000       ");
   gotoxy(85,26);printf("  Rp.650000       ");
   gotoxy(85,28);printf("  Rp.350000       ");
   gotoxy(85,30);printf("  Rp.450000       ");

   while(true){
      	textcolor(0);
      	gotoxy(45,37);cprintf(" <<==          Masukan Kode:        ==>>");
   		gotoxy(75,37);inp=getche();

   	if(inp=='a'){
      		harga=500000;
        		clrscr();
        		tagihan();
   	}else if(inp=='b'){
   		harga=500000;
      	clrscr();
      	tagihan();
   	}else if(inp=='c'){
   		harga=650000;
      	clrscr();
      	tagihan();
   	}else if(inp=='d'){
   		harga=500000;
      	clrscr();
      	tagihan();
   	}else if(inp=='e'){
   		harga=750000;
      	clrscr();
      	tagihan();
   	}else if(inp=='f'){
   		harga=450000;
      	clrscr();
      	tagihan();
  		 }else if(inp=='g'){
  			 harga=450000;
       	clrscr();
       	tagihan();
   	}else if(inp=='h'){
   		harga=650000;
      	clrscr();
      	tagihan();
   	}else if(inp=='i'){
   		harga=350000;
      	clrscr();
      	tagihan();
   	}else if(inp=='j'){
   		harga=450000;
      	clrscr();
      	tagihan();
   	}else{
      	gotoxy(20,37);printf("Masukan Tidak Valide (Coba Lagi)");Sleep(750);
         gotoxy(20,37);printf("                                ");Sleep(750);
         gotoxy(20,37);printf("Masukan Tidak Valide (Coba Lagi)");Sleep(750);
         gotoxy(20,37);printf("                                "); tujuanairasia();
      }
	}
}


/////.......................................................................////
void tujuansriwijaya(){
background1();
	sisitampilan();
	persegi(5,3,112,35,7);
   gotoxy(38,3);printf("%c%c%c%c%c%c%c %c%c  %c%c   %c%c%c%c %c%c  %c%c %c%c%c%c%c%c %c%c  %c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,4);printf("  %c%c    %c%c  %c%c     %c%c %c%c  %c%c %c%c  %c%c %c%c%c %c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,5);printf("  %c%c    %c%c  %c%c     %c%c %c%c  %c%c %c%c%c%c%c%c %c%c%c%c%c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,6);printf("  %c%c    %c%c  %c%c %c%c  %c%c %c%c  %c%c %c%c  %c%c %c%c %c%c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   gotoxy(38,7);printf("  %c%c    %c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c  %c%c %c%c  %c%c ",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
   persegi(10,10,100,25,8);
	gotoxy(15,12);printf(" a. Tanjaung Pinang ");
	gotoxy(15,14);printf(" b. Balikpapan      ");
	gotoxy(15,16);printf(" c. Manando         ");
	gotoxy(15,18);printf(" d. Padang          ");
	gotoxy(15,20);printf(" e. Mataram         ");
	gotoxy(65,22);printf(" f. Manokwari       ");
	gotoxy(65,24);printf(" g. Ambon           ");
	gotoxy(65,26);printf(" h. Aceh            ");
	gotoxy(65,28);printf(" i. Sibolga         ");
	gotoxy(65,30);printf(" j. Malang          ");
   gotoxy(35,12);printf("  Rp.700000       ");
   gotoxy(35,14);printf("  Rp.650000       ");
   gotoxy(35,16);printf("  Rp.550000       ");
   gotoxy(35,18);printf("  Rp.650000       ");
   gotoxy(35,20);printf("  Rp.550000       ");
   gotoxy(85,22);printf("  Rp.750000       ");
   gotoxy(85,24);printf("  Rp.550000       ");
   gotoxy(85,26);printf("  Rp.750000       ");
   gotoxy(85,28);printf("  Rp.600000       ");
   gotoxy(85,30);printf("  Rp.450000       ");
   while(true){
      	textcolor(0);
      	gotoxy(45,37);cprintf(" <<==          Masukan Kode :        ==>>");
   		gotoxy(75,37);inp=getche();

   	if(inp=='a'){
      		harga=700000;
        		clrscr();
        		tagihan();
   	}else if(inp=='b'){
   		harga=650000;
      	clrscr();
      	tagihan();
   	}else if(inp=='c'){
   		harga=550000;
      	clrscr();
      	tagihan();
   	}else if(inp=='d'){
   		harga=650000;
      	clrscr();
      	tagihan();
   	}else if(inp=='e'){
   		harga=550000;
      	clrscr();
      	tagihan();
   	}else if(inp=='f'){
   		harga=750000;
      	clrscr();
      	tagihan();
  		 }else if(inp=='g'){
  			 harga=550000;
       	clrscr();
       	tagihan();
   	}else if(inp=='h'){
   		harga=750000;
      	clrscr();
      	tagihan();
   	}else if(inp=='i'){
   		harga=600000;
      	clrscr();
      	tagihan();
   	}else if(inp=='j'){
   		harga=450000;
      	clrscr();
      	tagihan();
   	}else{
      	gotoxy(20,37);printf("Masukan Tidak Valide (Coba Lagi)");Sleep(750);
         gotoxy(20,37);printf("                                ");Sleep(750);
         gotoxy(20,37);printf("Masukan Tidak Valide (Coba Lagi)");Sleep(750);
         gotoxy(20,37);printf("                                "); tujuanairasia();
      }
	}
}


//......................................TAGIHAN..............................//
void tagihan(){
background1();
	sisitampilan();
	persegi(5,3,112,35,7);

		gotoxy(30,12);printf("Nama Pemesan             : %s",nama2);
      gotoxy(30,14);printf("Jenis Kelamin (P/L)      : %s",jk1);
      gotoxy(30,16);printf("Usia                     : %s  tahun",umur1);
      gotoxy(30,18);printf("No. Hp                   : %s",nohp);
      gotoxy(30,20);printf("Jumlah Tiket             : %s",jmltiket);
      gotoxy(30,22);printf("Warga Negara             : Indonesia");
      gotoxy(30,26);printf("Tanggal Pembelian        : %d/%d/%d",waktu->tm_mday,waktu->tm_mon+1,1900+waktu->tm_year);
      gotoxy(30,24);printf("Kota Asal                : %s",kota3);
      aspek=atoi(jmltiket);

       hasil=harga*aspek;

      gotoxy(30,28);printf("Total Harga              :Rp. %d ",hasil);
      gotoxy(30,30);printf("-----------------------------------------");
      while(true){
      textcolor(0);
      gotoxy(50,37);cprintf(" <== Tekan ENTER untuk lanjutkan ==> ");
   	gotoxy(55,37);pilih=getche();
   	if(pilih=='0'){
      	clrscr();menuutama();
      }else if(pilih==13){
         gotoxy(10,37);cprintf("                                                                                                      ");
         clrscr();menuutama();
      }else{
         textcolor(4);
      	gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         gotoxy(50,37);cprintf("                       ");Sleep(750);
      	gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         gotoxy(50,37);cprintf("                       ");Sleep(750);
      }

     }

}


////////////////////////////////////////////////////////////////////////////////
//..............................PEMBAYARAN....................................//
void pembayaran(){
background1();
	sisitampilan();
	persegi(5,3,112,35,7);


  while(true){
      textcolor(0);
      gotoxy(25,37);cprintf("                                                                        ");
      gotoxy(25,37);cprintf(" <<== Tekan 0 untuk kembali                 Tekan 4 Untuk Lanjut ==>> ");
   	gotoxy(80,37);pilih=getche();
   	if(pilih=='0'){
      	clrscr();menuutama();
      }else if(pilih=='4'){
      gotoxy(25,37);cprintf("                                                                        ");


      gotoxy(30,12);printf("Nama Pemesan             : %s",nama2);
      gotoxy(30,14);printf("Jenis Kelamin (P/L)      : %s",jk1);
      gotoxy(30,16);printf("Usia                     : %s  tahun",umur1);
      gotoxy(30,18);printf("No. Hp                   : %s",nohp);
      gotoxy(30,20);printf("Jumlah Tiket             : %s",jmltiket);
      gotoxy(30,22);printf("Warga Negara             : Indonesia");
      gotoxy(30,26);printf("Tanggal Pembelian        : %d/%d/%d",waktu->tm_mday,waktu->tm_mon+1,1900+waktu->tm_year);
      gotoxy(30,24);printf("Kota Asal                : %s",kota3);
      gotoxy(30,28);printf("Total Harga              :Rp. %d ",hasil);
      gotoxy(30,30);printf("-----------------------------------------");
      gotoxy(30,32);printf("Uang                     :Rp. ");uang1();


 	 	}else{
         textcolor(4);
      	gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         gotoxy(50,37);cprintf("                       ");Sleep(750);
      	gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         gotoxy(50,37);cprintf("                       ");Sleep(750);
      }

   }
}

////////////////////////////////////////////////////////////////////////////////
void uang1(){
   	 textcolor(0);gotoxy(60,32);gets(uang);

if(validasiuang(uang)==0){
pembantu=atoi(uang);
   if(pembantu>hasil){

   	gotoxy(30,34);total=pembantu-hasil;
      printf("Kembalian Uang Anda             :Rp. %d",total);
      while(true){
      			textcolor(0);
      			gotoxy(45,37);cprintf(" <<== Tekan 9 untuk Lanjut ==>> ");
   				gotoxy(60,37);pilih=getche();
   		if(pilih=='9'){
      			clrscr();struk();
      	}else{
         	textcolor(4);
      		gotoxy(45,37);cprintf("      MASUKAN TIDAK VALIDE !!!      ");Sleep(750);
         	gotoxy(45,37);cprintf("                                    ");Sleep(750);
      		gotoxy(45,37);cprintf("      MASUKAN TIDAK VALIDE !!!      ");Sleep(750);
         	gotoxy(45,37);cprintf("                                    ");Sleep(750);
     		 }
  		 }

   }else if(pembantu<hasil){
   pembantu=atoi(uang);

   total=hasil-pembantu;
   gotoxy(30,34);printf("Uang Anda Kurang                  :Rp. %d",total);
   	gotoxy(40,37);cprintf("Uang Anda Kurang !!!!!!!");Sleep(500);
      gotoxy(40,37);cprintf("                        ");Sleep(500);
      gotoxy(40,37);cprintf("Uang Anda Kurang !!!!!!!");Sleep(500);
      gotoxy(40,37);cprintf("                        ");
      gotoxy(30,34);printf("                                               ");gotoxy(30,32);printf("Uang                     :Rp.                    ");uang1();
   }else{
   pembantu=atoi(uang);
   total=pembantu-hasil;

   	gotoxy(40,37);cprintf("Uang Anda Pass......Terimakasih!!!");Sleep(500);
      gotoxy(40,37);cprintf("                                  ");Sleep(500);
      gotoxy(40,37);cprintf("Uang Anda Pass......Terimakasih!!!");Sleep(500);
      gotoxy(40,37);cprintf("                                  ");
      gotoxy(30,34);printf("Uang Uang Anda                    :Rp. %d",total);
      gotoxy(30,34);printf("                                               ");
      while(true){
      			textcolor(0);
      			gotoxy(45,37);cprintf(" <<== Tekan 9 untuk kembali ==>> ");
   				gotoxy(60,37);pilih=getche();
   		if(pilih=='9'){
      			clrscr();
               struk();
      	}else{
         	textcolor(4);
      		gotoxy(45,37);cprintf("      MASUKAN TIDAK VALIDE !!!      ");Sleep(750);
         	gotoxy(45,37);cprintf("                                    ");Sleep(750);
      		gotoxy(45,37);cprintf("      MASUKAN TIDAK VALIDE !!!      ");Sleep(750);
         	gotoxy(45,37);cprintf("                                    ");Sleep(750);
     		 }
  		 }

   }
}

}

//......................................STRUCK................................//
void struk(){
//background1();
	sisitampilan();


      gotoxy(58,2);printf("E-TIKET");
      gotoxy(56,4);printf("081323068201");
      gotoxy(30,6);printf("------------------------------------------------------------");
      gotoxy(45,8);printf("SELAMAT TRANSAKSI ANDA BERHASIL");
		gotoxy(30,10);printf("Nama Pemesan             : %s",nama2);
      gotoxy(30,12);printf("Jenis Kelamin (P/L)      : %s",jk1);
      gotoxy(30,14);printf("Usia                     : %s  tahun",umur1);
      gotoxy(30,16);printf("No. Hp                   : %s",nohp);
      gotoxy(30,18);printf("Jumlah Tiket             : %d",jmltiket);
      gotoxy(30,20);printf("Warga Negara             : Indonesia");
      gotoxy(30,24);printf("Tanggal Pembelian        : %d/%d/%d",waktu->tm_mday,waktu->tm_mon+1,1900+waktu->tm_year);
      gotoxy(30,22);printf("Kota Asal                : %s",kota3);

      gotoxy(30,25);printf("------------------------------------------------------------");
      gotoxy(30,27);printf("Total Harga              :Rp. %d ",hasil);
      gotoxy(30,29);printf("uang  Anda               :Rp. %s ",uang);
      gotoxy(30,30);printf("------------------------------------------------------------");
      gotoxy(30,32);printf("Sisa Uang                :Rp. %d ",total);
      gotoxy(30,33);printf("------------------------------------------------------------");
      gotoxy(56,35);printf("TERIMAKASIH");
       textcolor(0);
		gotoxy(25,37);cprintf("                                                                         ");
      gotoxy(25,37);cprintf(" <<==    Tekan 5 Untuk Menyimpan dan Lanjut   ==>> ");
               while(true){pilih=getche();
            	if(pilih=='5'){
               	z++;
               	clrscr();
                  menuutama();
                }else{
         textcolor(4);
      	gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         gotoxy(50,37);cprintf("                       ");Sleep(750);
      	gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         gotoxy(50,37);cprintf("                       ");Sleep(750);
      			}
				}
   }

////////////////////////////////////////////////////////////////////////////////
//............................DATA TRANSAKSI..................................//
void datatransaksi(){
	sisitampilan();
	persegi(5,3,112,35,7);

	while(true){
      textcolor(0);
      gotoxy(25,37);cprintf(" <<== Tekan 0 untuk kembali                 Tekan 1 Untuk Mengecek ==>> ");
   	gotoxy(80,37);pilih=getche();
   	if(pilih=='0'){
      	clrscr();menuutama();
      }else if(pilih=='1'){
      gotoxy(55,4);printf("D A T A  T R A N S A K S I");
  			gotoxy(30,6);printf("NAMA");
			gotoxy(56,6);printf("TANGGAL");
			gotoxy(75,6);printf("JUMLAH TIKET");
			gotoxy(95,6);printf("No. HP");
					for(int x=1;x<=30;x++){
   						gotoxy(10,5+x);printf("|");
							gotoxy(50,5+x);printf("|");
							gotoxy(70,5+x);printf("|");
							gotoxy(90,5+x);printf("|");
							gotoxy(110,5+x);printf("|");
					}
               for(int y=1;y<=101;y++){
					  	gotoxy(9+y,5);printf("=");
				  		gotoxy(9+y,7);printf("=");
				  		gotoxy(9+y,35);printf("=");
   				}

         		for(int x=0;arr[x][0][0]!=NULL;x++){

               	gotoxy(15,8+x);printf("%s",arr[x][0]);
                  gotoxy(73,8+x);printf("%s",arr[x][1]);
                  gotoxy(53,8+x);printf("%d/%d/%d",waktu->tm_mday,waktu->tm_mon+1,1900+waktu->tm_year);
                  gotoxy(92,8+x);printf("%s",nohp);
         		}

                           gotoxy(25,37);cprintf("                                                                         ");
  								    gotoxy(30,37);cprintf(" <<==            Tekan 0 Untuk Keluar        ==>> ");
                            gotoxy(70,37);
               					while(true){pilih=getche();
            							if(pilih=='0'){
               						clrscr();
                 					 	menuutama();
                						}else{
                            		textcolor(4);
      									gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         								gotoxy(50,37);cprintf("                       ");Sleep(750);
      									gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         								gotoxy(50,37);cprintf("                       ");Sleep(750);gotoxy(30,37);textcolor(0);cprintf(" <<==            Tekan 0 Untuk Keluar        ==>> ");gotoxy(70,37);
      									}
										}

  			}else{
         	textcolor(4);
      		gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         	gotoxy(50,37);cprintf("                       ");Sleep(750);
      		gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         	gotoxy(50,37);cprintf("                       ");Sleep(750);
         }
     }
}

////////////////////////////////////////////////////////////////////////////////
//.......................... BUAT AKUN .......................................//
void buatakun(){
		background1();
   	persegi(6,8,110,33,15);
   	persegi(10,9,102,30,7);
   	textcolor(0);
		gotoxy(35,2);textbackground(3);cprintf("%c%c%c%c%c%c  %c%c  %c%c %c%c%c%c%c%c %c%c%c%c%c%c  %c%c%c%c%c%c %c%c   %c%c %c%c  %c%c %c%c  %c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
      gotoxy(35,3);textbackground(3);cprintf("%c%c   %c%c %c%c  %c%c %c%c  %c%c   %c%c    %c%c  %c%c %c%c  %c%c  %c%c  %c%c %c%c%c %c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
      gotoxy(35,4);textbackground(3);cprintf("%c%c%c%c%c%c  %c%c  %c%c %c%c%c%c%c%c   %c%c    %c%c%c%c%c%c %c%c%c%c%c   %c%c  %c%c %c%c%c%c%c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
      gotoxy(35,5);textbackground(3);cprintf("%c%c   %c%c %c%c  %c%c %c%c  %c%c   %c%c    %c%c  %c%c %c%c  %c%c  %c%c  %c%c %c%c %c%c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
      gotoxy(35,6);textbackground(3);cprintf("%c%c%c%c%c%c  %c%c%c%c%c%c %c%c  %c%c   %c%c    %c%c  %c%c %c%c   %c%c %c%c%c%c%c%c %c%c  %c%c ",5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5);
       textbackground(7);
		gotoxy(12,12);cprintf("Nama Lengkap          : ");
      gotoxy(12,14);cprintf("Jenis Kelamin (L/P)   : ");
      gotoxy(12,16);cprintf("Usia                  :     tahun");
      gotoxy(12,18);cprintf("Pekerjaan             : ");
      gotoxy(12,20);cprintf("Kampung               : ");
      gotoxy(12,22);cprintf("Desa/kelurahan        : ");
      gotoxy(12,24);cprintf("Kecamatan             : ");
      gotoxy(12,26);cprintf("Kota/Kabupaten        : ");
      gotoxy(12,28);cprintf("Provinsi              : ");
      gotoxy(12,30);cprintf("No. Handphone         : ");
      gotoxy(12,32);cprintf("Username              : ");
      gotoxy(12,34);cprintf("Passwornd             : ");
   while(true){
      textcolor(0);
      gotoxy(20,37);cprintf(" <<== Tekan 0 untuk kembali         Masukan :        Tekan Enter Untuk Melanjutkan ==> ");
   	gotoxy(66,37);pilih=getche();
   	if(pilih=='0'){
      	clrscr();home();
      }else if (pilih==13){
         gotoxy(10,37);cprintf("                                                                                                      ");
         nama1();
      }else{
         textcolor(4);
      	gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         gotoxy(50,37);cprintf("                       ");Sleep(750);
      	gotoxy(50,37);cprintf("MASUKAN TIDAK VALID !!!");Sleep(750);
         gotoxy(50,37);cprintf("                       ");Sleep(750);
      }
   }
}

////////////////////////////////////////////////////////////////////////////////

void nama1(){
   	textcolor(0);gotoxy(36,12);gets(nama);
   	textcolor(4);
   if(validasinama(nama)==0&&strlen(nama)<=25&&strlen(nama)!=0){
   	jeniskelamin();
   }else if(strlen(nama)>25){
   	gotoxy(36,12);cprintf("Nama Maksimal 25 Digit (Coba Lagi)");Sleep(500);
      gotoxy(36,12);cprintf("                                                   ");Sleep(500);
      gotoxy(36,12);cprintf("Nama Maksimal 25 Digit (Coba Lagi)");Sleep(500);
      gotoxy(36,12);cprintf("                                                   ");nama1();
   }else{
   	gotoxy(36,12);cprintf("Masukan Tidak Valid (Coba Lagi)");Sleep(500);
      gotoxy(36,12);cprintf("                                                   ");Sleep(500);
      gotoxy(36,12);cprintf("Masukan Tidak Valid (Coba Lagi)");Sleep(500);
      gotoxy(36,12);cprintf("                                                   ");nama1();
   }
}


//............................................................................//
void jeniskelamin(){
			textcolor(0);
         gotoxy(36,14);gets(jk);
         textcolor(4);
		if(strcmp(jk,"L")==0 || strcmp(jk,"l")==0 || strcmp(jk,"P")==0 || strcmp(jk,"p")==0){
			usia1();
		}else{
      	gotoxy(36,14);cprintf("Inputan salah !!!!!!! (Coba Lagi)");Sleep(500);
         gotoxy(36,14);cprintf("                                 ");Sleep(500);
      	gotoxy(36,14);cprintf("Inputan salah !!!!!!! (Coba Lagi)");Sleep(500);
         gotoxy(36,14);cprintf("                                 ");Sleep(500);
      	jeniskelamin();
		}
}


//.............................................................................//
void usia1(){
   textcolor(0);
   	gotoxy(36,16);gets(umur);
      	textcolor(4);
   if(validasiumur(umur)==0&&strlen(umur)==2&&strlen(umur)!=0){
  		pekerjaan1();
   }else if(strlen(umur)==1){
   	gotoxy(36,16);cprintf("Minimal Usia 10 Tahun (Coba Lagi)");Sleep(500);
      gotoxy(36,16);printf("                                                    ");Sleep(500);
      gotoxy(36,16);cprintf("Minimal Usia 10 Tahun (Coba Lagi)");Sleep(500);
      gotoxy(36,16);printf("                                                    ");gotoxy(12,16);textcolor(0);cprintf("Usia                  :     tahun");usia1();
   }else{
   textcolor(4);
   	gotoxy(36,16);cprintf("Masukan Tidak Valid (Coba Lagi)");Sleep(500);
      gotoxy(36,16);cprintf("                               ");Sleep(500);
      gotoxy(36,16);cprintf("Masukan Tidak Valid (Coba Lagi)");Sleep(500);
      gotoxy(36,16);cprintf("                                                   ");gotoxy(12,16);textcolor(0);cprintf("Usia                  :     tahun");usia1();usia1();
   }
}


//............................................................................//
void pekerjaan1(){
   	textcolor(0);
   	gotoxy(36,18);textcolor(0);gets(pekerjaan);
   	textcolor(4);
   if(validasihuruf(pekerjaan)==0&&strlen(pekerjaan)<=15&&strlen(pekerjaan)!=0&&strlen(pekerjaan)>=2){
      kampung1();
   }else if(strlen(pekerjaan)>15){
   	gotoxy(36,18);cprintf("Nama Maksimal 15 Digit (Coba Lagi)");Sleep(500);
      gotoxy(36,18);cprintf("                                                   ");Sleep(500);
      gotoxy(36,18);cprintf("Nama Maksimal 15 Digit (Coba Lagi)");Sleep(500);
      gotoxy(36,18);cprintf("                                                   ");pekerjaan1();
   }else{
   	gotoxy(36,18);cprintf("Masukan Tidak Valid (Coba Lagi)");Sleep(500);
      gotoxy(36,18);cprintf("                                                   ");Sleep(500);
      gotoxy(36,18);cprintf("Masukan Tidak Valid (Coba Lagi)");Sleep(500);
      gotoxy(36,18);cprintf("                                                   ");pekerjaan1();
   }
}


//............................................................................//
void kampung1(){
   	textcolor(0);gotoxy(36,20);gets(kampung);
   	textcolor(4);
   if(validasialamat(kampung)==0&&strlen(kampung)<=30&&strlen(kampung)!=0&&strlen(kampung)>=5){
   	desa1();
   }else if(strlen(kampung)>35){
   	gotoxy(36,20);cprintf("Nama Maksimal 35 Digit (Coba Lagi)");Sleep(500);
      gotoxy(36,20);cprintf("                                                   ");Sleep(500);
      gotoxy(36,20);cprintf("Nama Maksimal 35 Digit (Coba Lagi)");Sleep(500);
      gotoxy(36,20);cprintf("                                                   ");kampung1();
   }else{
   	gotoxy(36,20);cprintf("Masukan Tidak Valid minimal 5 digits(Coba Lagi)");Sleep(500);
      gotoxy(36,20);cprintf("                                                   ");Sleep(500);
      gotoxy(36,20);cprintf("Masukan Tidak Valid minimal 5 digits(Coba Lagi)" );Sleep(500);
      gotoxy(36,20);cprintf("                                                   ");kampung1();
   }
}


//............................................................................//
void desa1(){
   	textcolor(0);gotoxy(36,22);gets(desa);
   	textcolor(4);
   if(validasihuruf(desa)==0&&strlen(desa)<=25&&strlen(desa)!=0&&strlen(desa)>=5){
   	kecamatan1();
   }else if(strlen(desa)>25){
   	gotoxy(36,22);cprintf("Nama Maksimal 25 Digit (Coba Lagi)");Sleep(500);
      gotoxy(36,22);cprintf("                                                   ");Sleep(500);
      gotoxy(36,22);cprintf("Nama Maksimal 25 Digit (Coba Lagi)");Sleep(500);
      gotoxy(36,22);cprintf("                                                   ");desa1();
   }else{
   	gotoxy(36,22);cprintf("Masukan Tidak Valid minimal 5 digits(Coba Lagi)");Sleep(500);
      gotoxy(36,22);cprintf("                                                   ");Sleep(500);
      gotoxy(36,22);cprintf("Masukan Tidak Valid minimal 5 digits(Coba Lagi)");Sleep(500);
      gotoxy(36,22);cprintf("                                                   ");desa1();
   }
}


//............................................................................//
void kecamatan1(){
   	textcolor(0);gotoxy(36,24);gets(kecamatan);
   	textcolor(4);
   if(validasihuruf(kecamatan)==0&&strlen(kecamatan)<=25&&strlen(kecamatan)!=0&&strlen(kecamatan)>=5){
   	kota1();
   }else if(strlen(kecamatan)>25){
   	gotoxy(36,24);cprintf("Nama Maksimal 25 Digit (Coba Lagi)");Sleep(500);
      gotoxy(36,24);cprintf("                                                   ");Sleep(500);
      gotoxy(36,24);cprintf("Nama Maksimal 25 Digit (Coba Lagi)");Sleep(500);
      gotoxy(36,24);cprintf("                                                   ");kecamatan1();
   }else{
   	gotoxy(36,24);cprintf("Masukan Tidak Valid minimal 5 digits(Coba Lagi)");Sleep(500);
      gotoxy(36,24);cprintf("                                                   ");Sleep(500);
      gotoxy(36,24);cprintf("Masukan Tidak Valid minimal 5 digits(Coba Lagi)");Sleep(500);
      gotoxy(36,24);cprintf("                                                   ");kecamatan1();
   }
}


//...........................................................................//
void kota1(){
   	textcolor(0);
		gotoxy(36,26);gets(kota);
      textcolor(4);
	if(validasihuruf(kota)==0&&strlen(kota)<=25&&strlen(kota)!=0&&strlen(kota)>=4){
		provinsi1();
	}else if(strlen(kota)>25){
			gotoxy(36,26);cprintf("Batas 25 karakter");Sleep(1000);
         gotoxy(36,26);cprintf("                                              ");Sleep(1000);
      	gotoxy(36,26);cprintf("Batas 25 karakter");Sleep(1000);
         gotoxy(36,26);cprintf("                                              ");kota1();
	}else{
			gotoxy(36,26);cprintf(" Karakter Tidak Sesuai minimal 4 digits");Sleep(750);
         gotoxy(36,26);cprintf("                                         ");Sleep(1000);
			gotoxy(36,26);cprintf(" Karakter Tidak Sesuai minimal 4 digits");Sleep(750);
         gotoxy(36,26);cprintf("                                         ");kota1();
	}
}



//...........................................................................//
void provinsi1(){
   	textcolor(0);
		gotoxy(36,28);gets(provinsi);
      textcolor(4);
	if(validasihuruf(provinsi)==0&&strlen(provinsi)<=25&&strlen(provinsi)!=0&&strlen(provinsi)>=4){
			nohp2();
	}else if(strlen(provinsi)>25){
			gotoxy(36,28);cprintf("Batas 25 karakter");Sleep(1000);
         gotoxy(36,28);cprintf("                                             ");Sleep(1000);
      	gotoxy(36,28);cprintf("Batas 25 karakter");Sleep(1000);
         gotoxy(36,28);cprintf("                                             ");provinsi1();
	}else{
			gotoxy(36,28);cprintf(" Karakter Tidak Sesuai minimal 4 digits");Sleep(750);
         gotoxy(36,28);cprintf("                                         ");Sleep(1000);
			gotoxy(36,28);cprintf(" Karakter Tidak Sesuai minimal 4 digits");Sleep(750);
         gotoxy(36,28);cprintf("                                          ");provinsi1();
	}
}


//...........................................................................//
void nohp2(){
   textcolor(0);
   gotoxy(36,30);gets(nohp3);
   textcolor(4);
   if(validasinohp(nohp3)==0&&strlen(nohp3)>=11&&strlen(nohp3)<=13&&(nohp3[0]=='0'&&nohp3[1]=='8'&&(nohp3[2]=='3'||nohp3[2]=='7'||nohp3[2]=='5'||nohp3[2]=='9'||nohp3[2]=='2'||nohp3[2]=='1'))&&strlen(nohp3)!=0){
   	username1();
   }else if(strlen(nohp3)>13){
   	gotoxy(36,30);cprintf("Nomor Handphone Maksimal 13 Digit (Coba Lagi)");Sleep(500);
      gotoxy(36,30);cprintf("                                             ");Sleep(500);
      gotoxy(36,30);cprintf("Nomor Handphone Maksimal 13 Digit (Coba Lagi)");Sleep(500);
      gotoxy(36,30);cprintf("                                             ");nohp2();
   }else{
   	gotoxy(36,30);cprintf("Masukan Tidak Valid, Masukan No. Hp 12 digits(Coba Lagi)");Sleep(500);
      gotoxy(36,30);cprintf("                                                           ");Sleep(500);
      gotoxy(36,30);cprintf("Masukan Tidak Valid, Masukan No. Hp 12 digits(Coba Lagi)");Sleep(500);
      gotoxy(36,30);cprintf("                                                          ");nohp2();
   }
}
//............................................................................//
void username1(){
   	textcolor(0);
		gotoxy(36,32);gets(user);
      textcolor(4);
	if(validasiusername(user)==0&&strlen(user)<=50&&strlen(user)!=0){
			password1();
	}else if(strlen(user)>50){
			gotoxy(36,32);cprintf("Batas 50 karakter");Sleep(1000);
         gotoxy(36,32);cprintf("                                             ");Sleep(1000);
      	gotoxy(36,32);cprintf("Batas 50 karakter");Sleep(1000);
         gotoxy(36,32);cprintf("                                             ");username1();
	}else{
			gotoxy(36,32);cprintf(" Karakter Tidak Sesuai ");Sleep(750);
         gotoxy(36,32);cprintf("                                             ");Sleep(1000);
			gotoxy(36,32);cprintf(" Karakter Tidak Sesuai ");Sleep(750);
         gotoxy(36,32);cprintf("                                             ");username1();
	}
}


//.............................................................................//
void password1(){
   	textcolor(0);
		gotoxy(36,34);gets(pass);
      textcolor(4);
	if(validasipassword(pass)==0&&strlen(pass)<=25&&strlen(pass)!=0&&strlen(pass)>=8){
   	while(true){
         gotoxy(55,37);cprintf(" <<== Tekan ENTER untuk menyimpan ==> ");
            pilih=getche();
             if (pilih==13){

             //Menyimpan Ke Notepad
                 FILE*data;
                 data=fopen("datap.txt.","a++");
                 fprintf(data,"%s#%s#%s#%s#\n", nama, jk, umur, nohp3);
                 fclose (data);

                 data=fopen("login.txt.","a++");
                 fprintf(data,"%s#%s#\n",user,pass);
                 fclose (data);home();
             }else{
              gotoxy(10,37);cprintf("                                                                                                      ");
             }
      }

	}else if(strlen(pass)>25&&strlen(pass)>=8){
			gotoxy(36,34);cprintf("Terlalu Banyak karakter");Sleep(1000);
         gotoxy(36,34);cprintf("                                             ");Sleep(1000);
      	gotoxy(36,34);cprintf("Terlalu Banyak karakter");Sleep(1000);
         gotoxy(36,34);cprintf("                                             ");password1();
	}else{
			gotoxy(36,34);cprintf(" Karakter Tidak Sesuai, 8 karakter");Sleep(750);
         gotoxy(36,34);cprintf("                                             ");Sleep(1000);
			gotoxy(36,34);cprintf(" Karakter Tidak Sesuai, 8 karakter");Sleep(750);
         gotoxy(36,34);cprintf("                                             ");password1();
	}
}


////////////////////////////////////////////////////////////////////////////////
//.............................MASUK.........................................///
void login(){
sisitampilan();
dasar(42,10,42,12);
for (int c=1; c<=10;c++){
	for(int d=1; d<=40; d++){
   	if(c==1 || d==1 || c==10 || d==40){
         textcolor(9);
         gotoxy(d+40,c+15);cprintf("%c",219);
      }else {
         textcolor(7);
         gotoxy(d+40,c+15);cprintf("%c",219);
      }
   }
}
   for (int c=10; c<=15; c++){
    	textcolor(c+14);
      textbackground(7);
   gotoxy(45,4);cprintf("%c%c      %c%c%c%c%c%c %c%c%c%c%c%c%c%c   %c%c %c%c   %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
   gotoxy(45,5);cprintf("%c%c      %c%c  %c%c %c%c         %c%c %c%c%c  %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
   gotoxy(45,6);cprintf("%c%c      %c%c  %c%c %c%c %c%c%c%c%c   %c%c %c%c %c %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
   gotoxy(45,7);cprintf("%c%c      %c%c  %c%c %c%c    %c%c   %c%c %c%c  %c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
   gotoxy(45,8);cprintf("%c%c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c%c%c   %c%c %c%c   %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
        }
   textcolor(0);
    while(true){
   //Memanggil dari Notepad
      	FILE *data;
					data = fopen("login.txt","r");
		gotoxy(45,19);printf("  Username  ");
    	gotoxy(56,19);gets(user2);

    			// Mencari baris yang username-nya cocok
    while(!feof(data) && strcmp(user,user2) != 0) {
        fscanf(data,"%[^#]#%[^#]#%[^\n]\n", &user, &pass);

    }

    		gotoxy(45,21);printf("  Password	 ");
         gotoxy(56,21);gets(pass2);
    		// Mencocokkan password pada baris itu
    if(strcmp(pass,pass2) == 0&& strcmp(user,user2)==0) {
        gotoxy(55,37);printf("Log In Berhasil.");Sleep(1000);
        gotoxy(55,37);printf("Log In Berhasil..");Sleep(1000);
        gotoxy(55,37);printf("Log In Berhasil...");Sleep(1000);
        gotoxy(55,37);printf("Log In Berhasil....");Sleep(1000);
        gotoxy(55,37);printf("Log In Berhasil.....");Sleep(1000);
        gotoxy(55,37);printf("                     ");Sleep(1000);menuutama();
    } else {
        gotoxy(55,37);printf("Username atau Password tidak sesuai");Sleep(750);
        gotoxy(55,37);printf("                                   ");Sleep(750);
        gotoxy(55,37);printf("Username atau Password tidak sesuai");Sleep(750);
        gotoxy(55,37);printf("                                   ");clrscr;login();

    }
}


}


////////////////////////////////////////////////////////////////////////////////
//.............................K E L U A R....................................//
void keluar(){
textcolor(0);
   gotoxy(47,22);cprintf("Anda yakin ingin keluar (y/t) : ");pilih=getche();
   if(pilih=='y'||pilih=='Y'){
   	clrscr();Sleep(500);

      gotoxy(45,25);printf("M E N U T U P   P R O G R A M !!!");Sleep(500);gotoxy(45,35);printf("                                 ");Sleep(300);
      gotoxy(45,25);printf("M E N U T U P   P R O G R A M !!!");Sleep(500);gotoxy(45,35);printf("                                 ");Sleep(300);
      gotoxy(45,25);printf("M E N U T U P   P R O G R A M !!!");Sleep(500);gotoxy(45,35);printf("                                 ");Sleep(300);
      pesawat();
   	gotoxy(45,25);printf("      T E R I M A K A S I H      ");Sleep(1500);gotoxy(45,35);printf("                                 ");Sleep(500);
   	persegi(1,1,120,43,0);Sleep(1000);exit(0);
   }else if(pilih=='t'||pilih=='T'){
      hapus();menuutama();
   }else{
      textcolor(4);
      gotoxy(47,22);cprintf("    MASUKAN TIDAK VALID !!!      ");Sleep(750);gotoxy(47,22);cprintf("                                 ");Sleep(750);
      gotoxy(47,22);cprintf("    MASUKAN TIDAK VALID !!!      ");Sleep(750);gotoxy(47,22);cprintf("                                 ");
      keluar();
   }
}
//keluar2
void keluar2(){
textcolor(0);
   gotoxy(47,22);cprintf("Anda yakin ingin keluar (y/t) : ");pilih=getche();
   if(pilih=='y'||pilih=='Y'){
   	clrscr();Sleep(500);

      gotoxy(45,25);printf("M E N U T U P   P R O G R A M !!!");Sleep(500);gotoxy(45,35);printf("                                 ");Sleep(300);
      gotoxy(45,25);printf("M E N U T U P   P R O G R A M !!!");Sleep(500);gotoxy(45,35);printf("                                 ");Sleep(300);
      gotoxy(45,25);printf("M E N U T U P   P R O G R A M !!!");Sleep(500);gotoxy(45,35);printf("                                 ");Sleep(300);
      gotoxy(45,25);printf("      T E R I M A K A S I H      ");Sleep(1500);gotoxy(45,35);printf("                                 ");Sleep(500);
      pesawat();
   	persegi(1,1,120,43,0);Sleep(1000);exit(0);
   }else if(pilih=='t'||pilih=='T'){
      hapus();home();
   }else{
      textcolor(4);
      gotoxy(47,22);cprintf("    MASUKAN TIDAK VALID !!!      ");Sleep(750);gotoxy(47,22);cprintf("                                 ");Sleep(750);
      gotoxy(47,22);cprintf("    MASUKAN TIDAK VALID !!!      ");Sleep(750);gotoxy(47,22);cprintf("                                 ");
      keluar2();
   }
}





////////////////////////////////////////////////////////////////////////////////
//...........................PERVALIDASIAN....................................//
////////////////////////////////////////////////////////////////////////////////
//...................VALIDASI huruf............................................//
int validasihuruf(char a[]){
	int huruf=0; int huruf2=0;
		if(a[0]==' ' || a[strlen(a)-1]==' ' || a[0]=='\''||a[strlen(a)-1]=='\''||a[0]=='-'||a[strlen(a)-1]=='-'){
			huruf2=1;
			return huruf2;
		}
   for (int x=0; x<strlen(a); x++){
		if(!(a[x]>='a'&&a[x]<='z'||a[x]>='A'&&a[x]<='Z'||a[x]=='\''&&a[x+1]!='\''&&a[x+1]!=' '&&a[x+1]!='-'||a[x]==' '&&a[x+1]!=' '&&a[x+1]!='-'||a[x]=='-'&&a[x+1]!='-'&&a[x+1]!=' '&&a[x+1]!='\'')){
  			huruf++;
  		}
  	}
   return huruf;
}
////////////////////////////////////////////////////////////////////////////////
//..........................validasinama......................................//
int validasinama(char a[]){
	int huruf=0; int huruf2=0;
		if(a[0]==' ' || a[strlen(a)-1]==' ' || a[0]=='\''||a[strlen(a)-1]=='\''||a[0]=='-'||a[strlen(a)-1]=='-'){
			huruf2=1;
			return huruf2;
		}
   for (int x=0; x<strlen(a); x++){
		if(!(a[x]>='a'&&a[x]<='z'||a[x]>='A'&&a[x]<='Z'||a[x]=='\''&&a[x+1]!='\''&&a[x+1]!=' '&&a[x+1]!='-'||a[x]==' '&&a[x+1]!=' '&&a[x+1]!='-'||a[x]=='-'&&a[x+1]!='-'&&a[x+1]!=' '&&a[x+1]!='\'')){
  			huruf++;
  		}
  	}
   return huruf;
}


////////////////////////////////////////////////////////////////////////////////
//...................VALIDASI EMAIL............................................//
int validasiemail(char a[]){
	int huruf=0; int valel=0;
		if(a[0]==' ' || a[strlen(a)-1]==' '|| a[0]=='\''||a[strlen(a)-1]=='\''||a[0]=='@'||a[strlen(a)-1]=='@'||a[0]=='_'&&a[strlen(a)-1]=='_'){
			valel=1;
			return valel;
		}
   for (int x=0; x<strlen(a); x++){
		if(!(a[x]>='a'&&a[x]<='z'||a[x]=='.'&&a[x+1]!='.'||a[x]==' '&&a[x+1]!='.'||a[x]=='.'&&a[x+1]!=' '||a[x]>='0'&&a[x]<='9'||a[x]==' '&&a[x+1]!=' '||a[x]=='@'&&a[x+1]!='@'||a[x]=='_'&&a[x+1]!='_'||a[x]==' '&&a[x+1]!='_'||a[x]=='_'&&a[x+1]!=' '||a[x]==' '&&a[x+1]!='@'||a[x]=='@'&&a[x+1]!=' ')){
  			huruf++;
  		}
  	}
   return huruf;
}



////////////////////////////////////////////////////////////////////////////////
//.........................VALIDASI ANGKA......................................//
int validasiangka(char a[]){
   int valAng=0;int huruf2=0;
   	if(a[0]==' '||a[strlen(a)-1]==' '||a[2]=='6'||a[2]=='4'||a[2]=='0' ){
   		huruf2=1;
      	return huruf2;
	   }
		for(int i=0;i<strlen(a);i++){
 			if(!(a[i]>='0'&&a[i]<='9')){
     		valAng++;
  		}
 	}
   return valAng;
}
////////////////////////////////////////////////////////////////////////////////
///.......................VALIDASI UANG.......................................//

int validasiuang(char a[]){
   int valuang=0;int huruf2=0;
   	if(a[0]==' '||a[strlen(a)-1]==' '||a[0]=='0'){
   		huruf2=1;
      	return huruf2;
	   }
		for(int i=0;i<strlen(a);i++){
 			if(!(a[i]>='0'&&a[i]<='9')){
     		valuang++;
  		}
 	}
   return valuang;
}


////////////////////////////////////////////////////////////////////////////////
//.........................Validasi Tiket....................................///
int validasitiket(char a[]){
   int valAng=0;int huruf2=0;
   	if(a[0]==' '||a[strlen(a)-1]==' '){
   		huruf2=1;
      	return huruf2;
	   }
		for(int i=0;i<strlen(a);i++){
 			if(!(a[i]>='0'&&a[i]<='9'|| a[i]>='0'&&a[i]<'6')){
     		valAng++;
  		}
 	}
   return valAng;
}



////////////////////////////////////////////////////////////////////////////////
//......................VALIDASI USIA.........................................//
int validasiumur(char a[]){
	int huruf=0; int huruf2=0;
		if(a[0]==' ' || a[strlen(a)-1]==' '||a[0]=='0'||a[0]=='0'&&a[1]=='0'){
			huruf2=1;
			return huruf2;
		}
   for (int x=0; x<strlen(a); x++){
		if(!(a[x]>='0'&&a[x]<='9'||a[x]=='0'&&a[x+1]!='0') ){
  			huruf++;
  		}
  	}
   return huruf;
}


////////////////////////////////////////////////////////////////////////////////
//...............................VALIDASI ALAMAT..............................//
int validasialamat(char a[]){
   int val=0;int huruf2=0;
   if(a[0]==' '||a[0]=='.'||a[0]==','||a[0]=='-'||a[strlen(a)-1]==' '|| a[0]=='\''||a[strlen(a)-1]=='\''){
   	huruf2=1;
      return huruf2;
   }
	for(int i=0;i<strlen(a);i++){
 		if(!(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'||a[i]=='.'&&a[i+1]!='.'||a[i]>='0'&&a[i]<='9'||a[i]=='-'&&a[i+1]!='-'||a[i]==','&&a[i+1]!=','||a[i]==' '&&a[i+1]!=' ')){
    		val++;
 		}
	}
   return val;
}



////////////////////////////////////////////////////////////////////////////////
//.........................VALIDASI NOHP......................................//
int validasinohp(char a[]){
	int huruf=0; int huruf2=0;
		if(a[0]==' ' || a[strlen(a)-1]==' '||a[2]=='6'||a[2]=='4'||a[2]=='0' ){
			huruf2=1;
			return huruf2;
		}
   for (int x=0; x<strlen(a); x++){
		if(!(a[x]>='0'&&a[x]<='9'||a[0]!='+'||a[0]!='6'||a[0]!='2'||a[0]!='8')){
  			huruf++;
  		}
  	}
   return huruf;
}

////////////////////////////////////////////////////////////////////////////////
//.......................VALIDASI USERNAME....................................//
int validasiusername(char a[]){
	int name=0; int huruf2=0;
		if(a[0]==' ' || a[strlen(a)-1]==' '){
			huruf2=1;
			return huruf2;
		}
   for (int x=0; x<strlen(a); x++){
		if(!(a[x]>='a'&&a[x]<='z'||a[x]>='A'&&a[x]<='Z'||a[x]=='.'&&a[x+1]!='.'||a[x]>='0'&&a[x]<='9'||a[x]==' '&&a[x+1]!=' '||a[x]=='_'&&a[x+1]!='_')){
  			name++;
  		}
  	}
   return name;
}

////////////////////////////////////////////////////////////////////////////////
//.........................VALIDASI PASSWORD..................................//
int validasipassword(char a[]){
	int pss=0; int valpss2=0;
		if(a[0]==' ' || a[strlen(a)-1]==' '){
			valpss2=1;
			return valpss2;
		}
   for (int x=0; x<strlen(a); x++){
		if(!(a[x]>='a'&&a[x]<='z'||a[x]>='A'&&a[x]<='Z'||a[x]>='0'&&a[x]<='9'||a[x]==' '&&a[x+1]!=' ')){
  			pss++;
  		}
  	}
   return pss;
}

////////////////////////////////////////////////////////////////////////////////
//.....................................MAIIN..................................//
main(){
time_t sekarang;
   sekarang = time(NULL); //untuk mendapatkan semua waktu
   waktu = localtime(&sekarang); /* Untuk mendapatkan waktu lokal komputer */
   textbackground(7);
   system("color 70");

start();

getch();
}