#include <stdio.h>
#include <conio.h>
#include <windows.h>
//500
//500
//widht150
//height 57
//left 110
//top 6
////////////////////////////PROTOTYPE/////////////////////////////////////////
void kodeakses();
void menu();
void bagan();
void tampilanpengguna();
void tampilan3();
void tampilan4();
void kepalanegara();
void kepalanegara2();
void utama();
void isimenu();
void tentang();
void keluar();
void kotakpenjualan();
void negara();
void jenissenjata();
void input();
void kotakbeli();
void kotakpembelian();
void kotakpesan();
void transaksi();
void datapembeli();
void tampilan5();
void kepalanegara3();




////////////////////////////////GLOBAL VARIABEL//////////////////////////////
char nomor[6][100][100];
char namasenjata[6][100][100];
char spesifikasi[6][100][100];
char kode[6][100][100];
char harga[6][100][100];
int jumlah=0;
char kodesenjata[100];
int akun=0;
int a=0;
int susah[11];
char data_ngr[10][100];
char data_nmpbli[10][100];
char data_nmsenjata[10][100];
char data_kode[10][100];
char data_harga[10][100];
char nama_kepalanegara[10][100]={{"jokowi"},{"duterte"},{"bounnyang"},{"sihamoni"},{"wachiralongkon"}};
char nama_akun_negara[10][100]={{"INDONESIA"},{"MYANMAR"},{"THAILAND"},{"VIETNAM"},{"KAMBOJA"}};

///////////////////////////BINGKAI LUAR////////////////////////////////////////
void bingkai(){
	 for (int a=1;a<=56;a++){
 		for(int b=1;b<=140;b++){
   		textcolor(17);
         textbackground(16);
   		if(a==1 || b==1 || a==54 || b==139 || a==9 ||a==2 || a==56 || b==140){
   			cprintf("%c",219);
   		}else{
   			printf(" ");
   		}
   	}printf("\n");
	}

////////////////////////////BINGKAI JUDUL//////////////////////////////////////
   for(int a=1;a<=15;a++){
   	for(int b=1;b<=40;b++){
         textcolor(32);
         textbackground(16);
      	if(a==1 || b==1 || a==15 || b==40){
   			gotoxy(48+b,0+a);cprintf("%c",45);Sleep(10);
   		}else{
   			printf(" ");
   		}
      }
   }
//////////////////////////////BINGKAI KODE AKSES////////////////////////////////////
   for(int a=1;a<=11;a++){
      for(int b=1;b<=20;b++){
         textcolor(32);
         textbackground(16);
         if( b==10 || b==11  ){
         	gotoxy(57+b,15+a);cprintf("%c",219);Sleep(10);
         }else{
   			printf(" ");
   		}
      }
   }

   for(int a=1;a<=5;a++){
   	for(int b=1;b<=50;b++){
         textcolor(32);
         textbackground(16);
      	if(a==1 || b==1 || a==5 || b==50){
   			gotoxy(42+b,26+a);cprintf("%c",45);Sleep(10);
   		}else{
   			printf(" ");
   		}
      }
   }
 for(int b=58;b<=78;b++){
  gotoxy(b,34);printf("%c",219);}
 for(int b=32;b<=34;b++){
  gotoxy(58,b);printf("%c",219);
  gotoxy(78,b);printf("%c",219);}
///////////////////////////////JUDUL APLIKASI/////////////////////////////////
  char judul[90]="APLIKASI RAHASIA JUAL BELI PERSENJATAAN MILITER INTERNASIONAL BY TRIA SAGITA KUSPARMANTO";
   for(int a=0;a<90;a++){
      textcolor(27);textbackground(26);
      if(a<17){
   		gotoxy(61+a,5);cprintf("%c",judul[a]);Sleep(40);
      }else if(a>=17 && a<=25){
      	gotoxy(48+a,6);cprintf("%c",judul[a]);Sleep(40);
		}else if(a>25 && a<=46){
      	gotoxy(32+a,7);cprintf("%c",judul[a]);Sleep(40);
		}else if(a>47 && a<=61){
      	gotoxy(15+a,8);cprintf("%c",judul[a]);Sleep(40);
      }else{
      	textcolor(26);textbackground(26);gotoxy(-6+a,14);cprintf("%c",judul[a]);Sleep(30);
		}
	}
	kodeakses();
}
////////////////////////////kode akses/////////////////////////////////////////
void kodeakses(){
char pasword[10];
char keamanan[10];
gotoxy(59,29);printf("KODE AKSES APLIKASI");
			gotoxy(63,33);gets(keamanan);
      	if(strcmp(keamanan,"200700")==0){
				 for(int a=1;a<=100;a++){
               gotoxy(67,37);printf("%d%",a);Sleep(10);
               	if(a<=19){
							gotoxy(58+a,36);textcolor(11);cprintf("%c",219);Sleep(100);
               	}
             	}clrscr();menu();
           	}

         else{
         	textcolor(12);gotoxy(59,37);cprintf("KODE AKSES DI TOLAK");
            	getch();textbackground(10);textcolor(10);gotoxy(59,37);cprintf("                    ");
            		gotoxy(63,33);textbackground(10);textcolor(10);cprintf("             ");
            			kodeakses();
            	}
         	}


void menu(){
	for (int a=1;a<=56;a++){
 		for(int b=1;b<=140;b++){
   		textcolor(12);
         textbackground(16);
   		if(a==1 || b==1 || a==54 || b==139 || a==9 ||a==2 || a==56 || b==140 || b==10 || b==130 ){
   			cprintf("%c",219);Sleep(1);
   		}else{
   			printf(" ");
   		}
   	}printf("\n");

    }
	for(int a=1;a<=23;a++){
      for(int b=1;b<=20;b++){
         textcolor(32);
         textbackground(16);
         if( b==20 ){
         	gotoxy(47+b,9+a);cprintf("%c",219);
      	}
      }
   }
for(int a=1;a<=30;a++){
      for(int b=1;b<=60;b++){
         textcolor(32);
         textbackground(16);
         if( a==15 ){
         	gotoxy(36+b,7+a);cprintf("%c",219);
         }
      }
   }
for(int a=1;a<=3;a++){
      for(int b=1;b<=3;b++){
         textcolor(32);
         textbackground(16);
			if( b==3 ){
         	gotoxy(34+b,22+a);cprintf("%c",219);Sleep(10);
         }
      }
   }

/////////////////////////////////kotakmasuk///////////////////////////////////
for(int a=53;a<=82;a++){
	gotoxy(a,40);cprintf("%c",219);Sleep(10);
   gotoxy(a,43);cprintf("%c",219);Sleep(10);}
for(int a=40;a<=43;a++){
	gotoxy(53,a);cprintf("%c",219);Sleep(10);
   gotoxy(82,a);cprintf("%c",219);Sleep(10);}
for(int a=64;a<=70;a++){
	gotoxy(a,46);cprintf("%c",219);Sleep(10);
         }
for(int a=43;a<=45;a++){
	gotoxy(64,a);cprintf("%c",219);Sleep(10);
   gotoxy(70,a);cprintf("%c",219);Sleep(10);}
for(int a=1;a<=3;a++){
      for(int b=1;b<=3;b++){
         textcolor(32);
         textbackground(16);
			if( b==3 ){
         	gotoxy(93+b,22+a);cprintf("%c",219);Sleep(10);
         }
      }
   }tampilanpengguna();
}
/////////////////////////////////tampilan penggguna///////////////////////
void tampilanpengguna(){
char pilih;
   textcolor(11);
   textbackground(2);
	gotoxy(26,25);cprintf(" <===================== >");
	gotoxy(26,26);cprintf("<   |   1.PEMBELI    |   >");
	gotoxy(26,27);cprintf(" <===================== >");
   gotoxy(84,25);cprintf("  <===================== >");
	gotoxy(85,26);cprintf("<   |   2.PENJUAL    |   >");
	gotoxy(86,27);cprintf("<===================== >");
   gotoxy(53,33);cprintf("   <===================== >");
	gotoxy(54,34);cprintf(" <   |   3.ADMIN    |      >");
	gotoxy(55,35);cprintf(" <===================== >");


	gotoxy(60,42);printf("Masukan Pilihan");gotoxy(67,45);textcolor(15);textbackground(10);pilih=getche();
   	if(pilih=='1'){
       	for(int a=1;a<=100;a++){
   		textcolor(11);
   		gotoxy(61,50);cprintf("loading....%d%",a);Sleep(10);
         }clrscr();tampilan3();
       }
       else if(pilih=='2'){
       	for(int a=1;a<=100;a++){
   		textcolor(11);
   		gotoxy(61,50);cprintf("loading....%d%",a);Sleep(10);
         }clrscr();tampilan4();kotakpenjualan();
       }
       else if(pilih=='3'){
       	for(int a=1;a<=100;a++){
   		textcolor(11);
   		gotoxy(61,50);cprintf("loading....%d%",a);Sleep(10);
         }clrscr();tampilan5();kepalanegara3();datapembeli();exit(0);
       }
       else{
         textcolor(9);
       	gotoxy(59,50);cprintf("inputan tidak valid");
       	getch();textbackground(10);textcolor(10);gotoxy(59,50);cprintf("                     ");
         gotoxy(67,48);textcolor(15);textbackground(10);cprintf("                     ");
		  	tampilanpengguna();
       }

}
////////////////////////////////tampilan menu ke3//////////////////////////////////////////
void tampilan3(){
for (int a=1;a<=56;a++){
 		for(int b=1;b<=140;b++){
   		textcolor(17);
         textbackground(16);
   		if(a==1 || b==1 || a==54 || b==139 || a==9 ||a==2 || a==56 || b==140){
   			cprintf("%c",219);
   		}else{
   			printf(" ");
   		}
   	}printf("\n");
	}

for(int b=50;b<=90;b++){
			gotoxy(b,31);printf("%c",219);
         gotoxy(b,34);printf("%c",219);
         gotoxy(b,37);printf("%c",219);
	      }
for(int b=31;b<=37;b++){
			gotoxy(50,b);printf("%c",219);
         gotoxy(66,b);printf("%c",219);
         gotoxy(90,b);printf("%c",219);
         }
	textcolor(43);
   textbackground(10);
gotoxy(43,12);cprintf(" L          OOOOOOOOO   GGGGGGGG       O   N      N                            ");
gotoxy(43,13);cprintf(" L          O       O   G                  N N    N              ");
gotoxy(43,14);cprintf(" L          O       O   G              I   N  N   N               ");
gotoxy(43,15);cprintf(" L          O       O   GGGGGGGG       I   N   N  N                      ");
gotoxy(43,16);cprintf(" L          O       O   G      G       I   N    N N                ");
gotoxy(43,17);cprintf(" LLLLLLLLL  OOOOOOOOO   GGGGGGGG       I   N     NN                                     ");
gotoxy(30,21);cprintf("                   M           M  RRRRRRRR       X       X           ");
gotoxy(30,22);cprintf("                   M M       M M  R     R         X     X     ");
gotoxy(30,23);cprintf("                   M  M     M  M  R   R            X   X           ");
gotoxy(30,24);cprintf("                   M   M   M   M  R R R              X       ");
gotoxy(30,25);cprintf("                   M    M M    M  R    R           X   X     ");
gotoxy(30,26);cprintf("                   M     M     M  R      R        X     X    ");
gotoxy(30,27);cprintf("                   M           M  R        R     X       X       ");
kepalanegara();
}
//////////////////////////////////kepalanegara////////////////////////////////
void kepalanegara(){
char password[100];
char nama[100];

gotoxy(55,33);printf("USER");
gotoxy(55,36);printf("PASSWORD");
      gotoxy(68,33);gets(nama);
      gotoxy(68,36);gets(password);

      	if(strcmp(password,"12345")==0 && strcmp(nama,"jokowi")==0){
         	for(int a=1;a<=100;a++){
   			textcolor(12);
				gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();utama();
         }
      	else if(strcmp(password,"12345")==0 && strcmp(nama,"duterte")==0){
         	for(int a=1;a<=100;a++){
   			textcolor(12);
   			gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();utama();
         }

      	else if(strcmp(password,"67890")==0 && strcmp(nama,"bounnyang")==0){
         	for(int a=1;a<=100;a++){
   			textcolor(12);
   			gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();utama();
         }

      	else if(strcmp(password,"2272727")==0 && strcmp(nama,"sihamoni")==0){
         	for(int a=1;a<=100;a++){
   			textcolor(12);
   			gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();utama();
         }

      	else if(strcmp(password,"56566565")==0 && strcmp(nama,"wachiralongkon")==0){
         	for(int a=1;a<=100;a++){
   			textcolor(12);
   			gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();utama();
         }

      else{
         textcolor(12);
       	gotoxy(62,39);cprintf("inputan tidak valid");
       	getch();textbackground(10);textcolor(10);gotoxy(62,39);cprintf("                    ");
         gotoxy(68,33);textcolor(15);textbackground(10);cprintf("                     ");
         gotoxy(68,36);textcolor(15);textbackground(10);cprintf("                     ");
			kepalanegara();
      }
}
/////////////////////////tampilan4//////////////////////////////
void tampilan4(){
for (int a=1;a<=56;a++){
 		for(int b=1;b<=140;b++){
   		textcolor(17);
         textbackground(16);
   		if(a==1 || b==1 || a==54 || b==139 || a==9 ||a==2 || a==56 || b==140){
   			cprintf("%c",219);
   		}else{
   			printf(" ");
   		}
   	}printf("\n");
	}

for(int b=50;b<=90;b++){
			gotoxy(b,31);printf("%c",219);
         gotoxy(b,34);printf("%c",219);
         gotoxy(b,37);printf("%c",219);
	      }
for(int b=31;b<=37;b++){
			gotoxy(50,b);printf("%c",219);
         gotoxy(66,b);printf("%c",219);
         gotoxy(90,b);printf("%c",219);
         }
	textcolor(43);
   textbackground(10);
gotoxy(43,12);cprintf(" L          OOOOOOOOO   GGGGGGGG       O   N      N                            ");
gotoxy(43,13);cprintf(" L          O       O   G                  N N    N              ");
gotoxy(43,14);cprintf(" L          O       O   G              I   N  N   N               ");
gotoxy(43,15);cprintf(" L          O       O   GGGGGGGG       I   N   N  N                      ");
gotoxy(43,16);cprintf(" L          O       O   G      G       I   N    N N                ");
gotoxy(43,17);cprintf(" LLLLLLLLL  OOOOOOOOO   GGGGGGGG       I   N     NN                                     ");
gotoxy(30,21);cprintf("                   M           M  RRRRRRRR       X       X           ");
gotoxy(30,22);cprintf("                   M M       M M  R     R         X     X     ");
gotoxy(30,23);cprintf("                   M  M     M  M  R   R            X   X           ");
gotoxy(30,24);cprintf("                   M   M   M   M  R R R              X       ");
gotoxy(30,25);cprintf("                   M    M M    M  R    R           X   X     ");
gotoxy(30,26);cprintf("                   M     M     M  R      R        X     X    ");
gotoxy(30,27);cprintf("                   M           M  R        R     X       X       ");
kepalanegara2();
}
////////////////////////////////tampilan5////////////////////////////
void tampilan5(){
for (int a=1;a<=56;a++){
 		for(int b=1;b<=140;b++){
   		textcolor(17);
         textbackground(16);
   		if(a==1 || b==1 || a==54 || b==139 || a==9 ||a==2 || a==56 || b==140){
   			cprintf("%c",219);
   		}else{
   			printf(" ");
   		}
   	}printf("\n");
	}

for(int b=50;b<=90;b++){
			gotoxy(b,31);printf("%c",219);
         gotoxy(b,34);printf("%c",219);
         gotoxy(b,37);printf("%c",219);
	      }
for(int b=31;b<=37;b++){
			gotoxy(50,b);printf("%c",219);
         gotoxy(66,b);printf("%c",219);
         gotoxy(90,b);printf("%c",219);
         }
	textcolor(43);
   textbackground(10);
gotoxy(43,12);cprintf(" L          OOOOOOOOO   GGGGGGGG       O   N      N                            ");
gotoxy(43,13);cprintf(" L          O       O   G                  N N    N              ");
gotoxy(43,14);cprintf(" L          O       O   G              I   N  N   N               ");
gotoxy(43,15);cprintf(" L          O       O   GGGGGGGG       I   N   N  N                      ");
gotoxy(43,16);cprintf(" L          O       O   G      G       I   N    N N                ");
gotoxy(43,17);cprintf(" LLLLLLLLL  OOOOOOOOO   GGGGGGGG       I   N     NN                                     ");
gotoxy(30,21);cprintf("                   M           M  RRRRRRRR       X       X           ");
gotoxy(30,22);cprintf("                   M M       M M  R     R         X     X     ");
gotoxy(30,23);cprintf("                   M  M     M  M  R   R            X   X           ");
gotoxy(30,24);cprintf("                   M   M   M   M  R R R              X       ");
gotoxy(30,25);cprintf("                   M    M M    M  R    R           X   X     ");
gotoxy(30,26);cprintf("                   M     M     M  R      R        X     X    ");
gotoxy(30,27);cprintf("                   M           M  R        R     X       X       ");}
///////////////////////////kepala negara3//////////////
void kepalanegara3(){
char password[100];
char nama[100];

gotoxy(55,33);printf("USER");
gotoxy(55,36);printf("PASSWORD");
      gotoxy(68,33);gets(nama);
      gotoxy(68,36);gets(password);

      	if(strcmp(password,"12345")==0 && strcmp(nama,"jokowi")==0){
         	for(int a=1;a<=100;a++){
   			textcolor(12);
				gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();
         }
      	else if(strcmp(password,"12345")==0 && strcmp(nama,"duterte")==0){
         	for(int a=1;a<=100;a++){
   			textcolor(12);
   			gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();
         }

      	else if(strcmp(password,"67890")==0 && strcmp(nama,"bounnyang")==0){
         	for(int a=1;a<=100;a++){
   			textcolor(12);
   			gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();
         }

      	else if(strcmp(password,"2272727")==0 && strcmp(nama,"sihamoni")==0){
         	for(int a=1;a<=100;a++){
   			textcolor(12);
   			gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();
         }

      	else if(strcmp(password,"56566565")==0 && strcmp(nama,"wachiralongkon")==0){
         	for(int a=1;a<=100;a++){
   			textcolor(12);
   			gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();
         }

      else{
         textcolor(12);
       	gotoxy(62,39);cprintf("inputan tidak valid");
       	getch();textbackground(10);textcolor(10);gotoxy(62,39);cprintf("                    ");
         gotoxy(68,33);textcolor(15);textbackground(10);cprintf("                     ");
         gotoxy(68,36);textcolor(15);textbackground(10);cprintf("                     ");}}
//////////////////////////////////kepalanegara////////////////////////////////
void kepalanegara2(){
char password[100];
char nama[100];

gotoxy(55,33);printf("USER");
gotoxy(55,36);printf("PASSWORD");
      gotoxy(68,33);gets(nama);
      gotoxy(68,36);gets(password);

      	if(strcmp(password,"12345")==0 && strcmp(nama,"jokowi")==0){

         	for(int a=1;a<=100;a++){
   			textcolor(12);
				gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();
         }
      	else if(strcmp(password,"12345")==0 && strcmp(nama,"duterte")==0){

         	for(int a=1;a<=100;a++){
   			textcolor(12);
   			gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();
         }

      	else if(strcmp(password,"67890")==0 && strcmp(nama,"bounnyang")==0){

            for(int a=1;a<=100;a++){
   			textcolor(12);
   			gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();
         }

      	else if(strcmp(password,"2272727")==0 && strcmp(nama,"sihamoni")==0){

         	for(int a=1;a<=100;a++){
   			textcolor(12);
   			gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();
         }

      	else if(strcmp(password,"56566565")==0 && strcmp(nama,"wachiralongkon")==0){
          
         	for(int a=1;a<=100;a++){
   			textcolor(12);
   			gotoxy(62,39);cprintf("loading....%d%",a);Sleep(10);
            }clrscr();
         }

      else{
         textcolor(12);
       	gotoxy(62,39);cprintf("inputan tidak valid");
       	getch();textbackground(10);textcolor(10);gotoxy(62,39);cprintf("                    ");
         gotoxy(68,33);textcolor(15);textbackground(10);cprintf("                     ");
         gotoxy(68,36);textcolor(15);textbackground(10);cprintf("                     ");
			kepalanegara();
      }
}
//////////////////////MENU UTAMA//////////////////////////////////////////
void utama(){
char pilih;
 for (int a=1;a<=56;a++){
 		for(int b=1;b<=140;b++){
   		textcolor(17);
         textbackground(8);
   		if(a==1 || b==1 || a==54 || b==139 || a==9 ||a==2 || a==56 || b==140){
   			cprintf("%c",219);
   		}else{
   			cprintf(" ");
   		}
   	}printf("\n");
	}
for(int b=2;b<=70;b++){
            gotoxy(b,16);printf("%c",219);}
for(int b=2;b<=35;b++){

         gotoxy(b,22);printf("%c",219);
         gotoxy(b,28);printf("%c",219);
         gotoxy(b,34);printf("%c",219);
         gotoxy(b,40);printf("%c",219);}
for(int b=2;b<=70;b++){
         gotoxy(b,46);printf("%c",219);
         }
for(int b=138;b>=70;b--){
         gotoxy(b,16);printf("%c",219); }
for(int b=105;b<=138;b++){
			gotoxy(b,19);printf("%c",219);
         gotoxy(b,22);printf("%c",219);
         gotoxy(b,25);printf("%c",219);
         gotoxy(b,28);printf("%c",219);
         gotoxy(b,31);printf("%c",219);
         gotoxy(b,34);printf("%c",219);
         gotoxy(b,37);printf("%c",219);
         gotoxy(b,40);printf("%c",219);
         gotoxy(b,43);printf("%c",219);}
for(int b=138;b>=70;b--){
         gotoxy(b,46);printf("%c",219);
         }
//buat 2garis bawah
for(int b=16;b<=46;b++){
         gotoxy(5,b);printf("%c",219);
  			gotoxy(35,b);printf("%c",219);
         gotoxy(105,b);printf("%c",219);
			 }
//nuat nomorpilih
for(int b=46;b<=48;b++){
         gotoxy(65,b);printf("%c",219);
         gotoxy(75,b);printf("%c",219);
			}

for(int b=65;b<=75;b++){
         gotoxy(b,49);printf("%c",219);
         }

for(int b=2;b<=35;b++){
 gotoxy(b,49);printf("%c",219);}
for(int b=47;b<=49;b++){
         gotoxy(35,b);printf("%c",219);
          }
for(int b=3;b<=8;b++){
         gotoxy(2,b);printf("%c",219);
         gotoxy(4,b);printf("%c",219);
         gotoxy(6,b);printf("%c",219);
         gotoxy(8,b);printf("%c",219);
         gotoxy(10,b);printf("%c",219);
         gotoxy(12,b);printf("%c",219);
         gotoxy(14,b);printf("%c",219);
         gotoxy(26,b);printf("%c",219);
         gotoxy(40,b);printf("%c",219);
         gotoxy(52,b);printf("%c",219);
         gotoxy(64,b);printf("%c",219);
         gotoxy(76,b);printf("%c",219);
         gotoxy(88,b);printf("%c",219);
         gotoxy(100,b);printf("%c",219);
         gotoxy(112,b);printf("%c",219);
         gotoxy(124,b);printf("%c",219);
         gotoxy(126,b);printf("%c",219);
         gotoxy(128,b);printf("%c",219);
         gotoxy(130,b);printf("%c",219);
         gotoxy(132,b);printf("%c",219);
         gotoxy(134,b);printf("%c",219);
         gotoxy(136,b);printf("%c",219);
         gotoxy(138,b);printf("%c",219);
         }

textbackground(16);
gotoxy(46,10);cprintf(" M            M  EEEEEEEE   N      N  U       U                ");
gotoxy(46,11);cprintf(" M M        M M  E          N N    N  U       U       ");
gotoxy(46,12);cprintf(" M  M      M  M  EEEEEEEE   N  N   N  U       U               ");
gotoxy(46,13);cprintf(" M   M    M   M  EEEEEEEE   N   N  N  U       U                         ");
gotoxy(46,14);cprintf(" M    M  M    M  E          N    N N  U       U         ");
gotoxy(46,15);cprintf(" M      M     M  EEEEEEEE   N      N   UUUUUUU                          ");
///////////////////DAFTAR///////////////////////////////////
textcolor(12);
textbackground(0);
gotoxy(3,19);cprintf("1");
gotoxy(3,25);cprintf("2");
gotoxy(3,31);cprintf("3");
gotoxy(3,37);cprintf("4");
gotoxy(3,43);cprintf("5");
gotoxy(7,19);cprintf("NEGARA PEMBUAT");
gotoxy(7,37);cprintf("TENTANG APLIKASI");
gotoxy(7,25);cprintf("BELI SENJATA");
gotoxy(7,43);cprintf("KELUAR");
gotoxy(7,31);cprintf("LOG IN KEMBALI");
            gotoxy(9,48);cprintf("Masukan Pilihan");gotoxy(70,48);pilih=getche();
       	if(pilih=='1'){
       	for(int a=1;a<=100;a++){
   		textcolor(11);
   		gotoxy(64,51);cprintf("loading....%d%",a);Sleep(10);
         }clrscr();negara();
       }
       else if(pilih=='2'){
       	for(int a=1;a<=100;a++){
   		textcolor(11);
   		gotoxy(64,51);cprintf("loading....%d%",a);Sleep(10);
         }clrscr();kotakpembelian();
       }
       else if(pilih=='3'){
       	for(int a=1;a<=100;a++){
   		textcolor(11);
   		gotoxy(64,51);cprintf("loading....%d%",a);Sleep(10);
         }clrscr();menu();tampilanpengguna();
       }
       else if(pilih=='4'){
       	for(int a=1;a<=100;a++){
   		textcolor(11);
   		gotoxy(64,51);cprintf("loading....%d%",a);Sleep(10);
         }clrscr();tentang();
       }

       else if(pilih=='5'){
       	for(int a=1;a<=100;a++){
   		textcolor(11);
   		gotoxy(64,51);cprintf("loading....%d%",a);Sleep(10);
         }clrscr();keluar();
       }

       else{
         textcolor(9);
       	gotoxy(62,51);cprintf("inputan tidak valid");
       	getch();textbackground(0);textcolor(0);gotoxy(62,51);cprintf("                     ");
         gotoxy(70,48);textcolor(12);textbackground(0);cprintf("                     ");
         clrscr();utama();
       }
}
////////////////////////////tentang/////////////////////////////////////////////
void tentang(){
char pilih;
for (int a=1;a<=56;a++){
 		for(int b=1;b<=140;b++){
   		textcolor(17);
         textbackground(8);
   		if(a==1 || b==1 || a==54 || b==139 || a==9 ||a==2 || a==56 || b==140){
   			cprintf("%c",219);
   		}else{
   			cprintf(" ");
   		}
   	}printf("\n");
	}
textcolor(11);
for(int b=2;b<=70;b++){
            gotoxy(b,16);cprintf("%c",219);}
for(int b=2;b<=35;b++){
			gotoxy(b,19);cprintf("%c",219);
         gotoxy(b,22);cprintf("%c",219);
         gotoxy(b,25);cprintf("%c",219);
         gotoxy(b,28);cprintf("%c",219);
         gotoxy(b,31);cprintf("%c",219);
         gotoxy(b,34);cprintf("%c",219);
         gotoxy(b,37);cprintf("%c",219);
         gotoxy(b,40);cprintf("%c",219);
         gotoxy(b,43);cprintf("%c",219);}

for(int b=2;b<=70;b++){
         gotoxy(b,46);cprintf("%c",219);
         }
for(int b=138;b>=70;b--){
         gotoxy(b,16);printf("%c",219); }
for(int b=105;b<=138;b++){
			gotoxy(b,19);cprintf("%c",219);
         gotoxy(b,22);cprintf("%c",219);
         gotoxy(b,25);cprintf("%c",219);
         gotoxy(b,28);cprintf("%c",219);
         gotoxy(b,31);cprintf("%c",219);
         gotoxy(b,34);cprintf("%c",219);
         gotoxy(b,37);cprintf("%c",219);
         gotoxy(b,40);cprintf("%c",219);
         gotoxy(b,43);cprintf("%c",219);}
for(int b=138;b>=70;b--){
         gotoxy(b,46);cprintf("%c",219);
         }
//buat 2garis bawah
for(int b=16;b<=46;b++){

  			gotoxy(35,b);cprintf("%c",219);
         gotoxy(105,b);cprintf("%c",219);
			 }
//nuat nomorpilih
for(int b=46;b<=48;b++){
         gotoxy(65,b);cprintf("%c",219);
         gotoxy(75,b);cprintf("%c",219);
			}

for(int b=65;b<=75;b++){
         gotoxy(b,49);cprintf("%c",219);
         }

textcolor(15);textbackground(0);
gotoxy(45,23);cprintf("Aplikasi ini adalah aplikasi  yang di buat untuk     ");
gotoxy(45,24);cprintf("tugas UAS saya sebagai mahasiswa PUB Universitas       ");
gotoxy(45,25);cprintf("Nasional Pasim.Aplikasi ini saya buat karena              ");
gotoxy(45,26);cprintf("karena dari dulu saya suka hal hal yang berbau              ");
gotoxy(45,27);cprintf("militer,jadi karena hal itu saya membuat aplikasi ini.");
gotoxy(45,28);cprintf("Mohon maaf bila banyak kekurangangan.");

gotoxy(45,32);cprintf("___________________TERIMA KASIH___________________");
gotoxy(55,45);cprintf("CREATED TRIA SAGITA KUSPARMANTO");
///tentang
textbackground(16);
textcolor(12);
gotoxy(36,3);cprintf("TTTTTTTTT EEEEEEE N       N TTTTTTTTT      A      N       N GGGGGGG              ");
gotoxy(36,4);cprintf("    T     E       N N     N     T         A A     N N     N G              ");
gotoxy(36,5);cprintf("    T     EEEEEE  N  N    N     T        A   A    N  N    N G             ");
gotoxy(36,6);cprintf("    T     EEEEEE  N   N   N     T       AAAAAAA   N   N   N GGGGGGG       ");
gotoxy(36,7);cprintf("    T     E       N    N  N     T      A       A  N    N  N G     G       ");
gotoxy(36,8);cprintf("    T     EEEEEEE N     N N     T     A         A N     N N GGGGGGG       ");
gotoxy(54,10);cprintf("       A       PPPPPPP  K     K    ");
gotoxy(54,11);cprintf("      A A      P     P  K   K      ");
gotoxy(54,12);cprintf("     A   A     PPPPPPP  K K         ");
gotoxy(54,13);cprintf("    AAAAAAA    P        K K          ");
gotoxy(54,14);cprintf("   A       A   P        K   K         ");
gotoxy(54,15);cprintf("  A         A  P        K     K        ");

gotoxy(55,52);cprintf("Tekan apa saja untuk kembali ke menu");
gotoxy(70,48);getch();clrscr();utama();
}
void keluar(){
for (int a=1;a<=56;a++){
 		for(int b=1;b<=140;b++){
   		textcolor(17);
         textbackground(8);
   		if(a==1 || b==1 || a==54 || b==139  ||a==2|| a==56 || b==140||a==55){
   			cprintf("%c",219);
   		}else{
   			cprintf(" ");
   		}
   	}printf("\n");
	}
for (int a=1;a<=75;a++){
textcolor(a);Sleep(50);
gotoxy(36,6);cprintf("   zzzzzzzz  I   GGGGGGGGG     zzzzzzzz        A        GGGGGGGGG         ");
gotoxy(36,7);cprintf("         z   I   G                   z        A A       G                 ");
gotoxy(36,8);cprintf("        z    I   G                  z        A   A      G                 ");
gotoxy(36,9);cprintf("       z     I   G                 z        A     A     G                 ");
gotoxy(36,10);cprintf("      z      I   GGGGGGGGG        z        AAAAAAAAA    GGGGGGGGG        ");
gotoxy(36,11);cprintf("     z       I   G       G       z        A         A   G       G        ");
gotoxy(36,12);cprintf("    z        I   G       G      z        A           A  G       G        ");
gotoxy(36,13);cprintf("   zzzzzzzz  I   GGGGGGGGG     zzzzzzzz A             A GGGGGGGGG        ");
///////////////////////FROM
gotoxy(48,17);cprintf("       FFFFFFFFF  RRRRRRRRR  RRRRRRRRRR  M                M              ");
gotoxy(48,18);cprintf("       F          R       R  R        R  M M            M M              ");
gotoxy(48,19);cprintf("       F          R       R  R        R  M  M          M  M              ");
gotoxy(48,20);cprintf("       FFFFFFFFF  RRRRRRRRR  R        R  M   M        M   M              ");
gotoxy(48,21);cprintf("       F          RR         R        R  M    M      M    M              ");
gotoxy(48,22);cprintf("       F          R  R       R        R  M     M    M     M              ");
gotoxy(48,23);cprintf("       F          R    R     R        R  M      M  M      M              ");
gotoxy(48,24);cprintf("       F          R      R   RRRRRRRRRR  M       MM       M              ");
////////BMS
gotoxy(60,29);cprintf("       BBBBBBBB   M               M  SSSSSSSS                            ");
gotoxy(60,30);cprintf("       B       B  M M           M M  S                                   ");
gotoxy(60,31);cprintf("       B       B  M  M         M  M  S                                   ");
gotoxy(60,32);cprintf("       BBBBBBBB   M   M       M   M  S                                   ");
gotoxy(60,33);cprintf("       B       B  M    M     M    M  SSSSSSSS                            ");
gotoxy(60,34);cprintf("       B       B  M     M   M     M         S                            ");
gotoxy(60,35);cprintf("       B       B  M      M M      M         S                            ");
gotoxy(60,36);cprintf("       BBBBBBBB   M       M       M  SSSSSSSS                            ");
///////thn
gotoxy(33,42);cprintf("     222220  000000  1 888888              222222  000000  1 999999        ");
gotoxy(33,43);cprintf("         2   0    0  1 8    8                  2   0    0  1 9    9         ");
gotoxy(33,44);cprintf("        2    0    0  1 888888 ============    2    0    0  1 999999          ");
gotoxy(33,45);cprintf("       2     0    0  1 8    8                2     0    0  1      9          ");
gotoxy(33,46);cprintf("      022222 000000  1 888888               222222 000000  1 999999         ");
}exit(0);
}
///////////////////////penjualan////////////////////
void kotakpenjualan(){

for (int a=1;a<=56;a++){
 		for(int b=1;b<=140;b++){
   		textcolor(17);
         textbackground(8);
   		if(a==1 || b==1 || a==54 || b==139 || a==9 ||a==2 || a==56 || b==140){
   			cprintf("%c",219);
   		}else{
   			cprintf(" ");
   		}
   	}printf("\n");
	}
for(int b=16;b<=40;b++){
         gotoxy(7,b);printf("%c",219);
         gotoxy(11,b);printf("%c",219);
  			gotoxy(40,b);printf("%c",219);
         gotoxy(70,b);printf("%c",219);
         gotoxy(100,b);printf("%c",219);
         gotoxy(130,b);printf("%c",219);

			 }

  for(int b=7;b<=130;b++){
			gotoxy(b,15);printf("%c",219);
         gotoxy(b,18);printf("%c",219);
         gotoxy(b,40);printf("%c",219);
}
for (int a=1;a<=59;a++){
textcolor(a);Sleep(10);
gotoxy(20,3);cprintf("  PPPPPP   EEEEEEE  N      N       JJ  U      U       A      L              A       N      N     ");
gotoxy(20,4);cprintf("  P     p  E        N N    N        J  U      U      A A     L             A A      N N    N  ");
gotoxy(20,5);cprintf("  PPPPPP   EEEEEEE  N  N   N        J  U      U     A   A    L            A   A     N  N   N         ");
gotoxy(20,6);cprintf("  P        EEEEEEE  N   N  N        J  U      U    AAAAAAA   L           AAAAAAA    N   N  N       ");
gotoxy(20,7);cprintf("  P        E        N    N N  J     J  U      U   A       A  L          A       A   N    N N      ");
gotoxy(20,8);cprintf("  P        EEEEEEE  N     NN  JJJJJJJ  UUUUUUUU  A         A LLLLLLLL  A         A  N     NN               ");
}textcolor(12);
gotoxy(15,17);cprintf("Masukan nama senjata");
gotoxy(80,17);cprintf("kode senjata");
gotoxy(48,17);cprintf("spesifikasi senjata");
gotoxy(110,17);cprintf("Harga/Unit");jenissenjata();
}

/////////////////////////////negara////////////////////////////////
void negara(){
char pilih[1];
for (int a=1;a<=56;a++){
 		for(int b=1;b<=140;b++){
   		textcolor(17);
         textbackground(8);
   		if(a==1 || b==1 || a==54 || b==139 || a==9 ||a==2 || a==56 || b==140){
   			cprintf("%c",219);
   		}else{
   			cprintf(" ");
   		}
   	}printf("\n");
	}
for(int b=13;b<=38;b++){
         gotoxy(40,b);printf("%c",219);
         gotoxy(44,b);printf("%c",219);
         gotoxy(85,b);printf("%c",219);


			 }

  for(int b=40;b<=85;b++){
			gotoxy(b,13);printf("%c",219);
         gotoxy(b,18);printf("%c",219);
         gotoxy(b,22);printf("%c",219);
         gotoxy(b,26);printf("%c",219);
         gotoxy(b,30);printf("%c",219);
         gotoxy(b,34);printf("%c",219);
         gotoxy(b,38);printf("%c",219);

}
textcolor(10);
gotoxy(58,16);cprintf("NAMA NEGARA");
gotoxy(42,20);cprintf("1");
gotoxy(42,24);cprintf("2");
gotoxy(42,28);cprintf("3");
gotoxy(42,32);cprintf("4");
gotoxy(42,36);cprintf("5");
gotoxy(59,20);cprintf("INDONESIA");
gotoxy(60,24);cprintf("MYANMAR");
gotoxy(59,28);cprintf("THAILAND");
gotoxy(60,32);cprintf("VIETNAM");
gotoxy(59,36);cprintf("SINGAPURA");
gotoxy(70,48);cprintf(" ");
gotoxy(45,53);cprintf("press spasi untuk kembali.....");

////////////////
gotoxy(45,45);cprintf("Masukan Pilihan");gotoxy(65,45);pilih[0]=getche();
	int pilih2=atoi(pilih);
		 if(pilih[0]=='1'){

       clrscr();
       kotakbeli();
       for(int a=0;strcmp(namasenjata[pilih2][a],"")!=0;a++){
   	gotoxy(9,20+a+1);cprintf("%s",nomor[pilih2][a]);
	   gotoxy(14,20+a+1);cprintf("%s",namasenjata[pilih2][a]);
      gotoxy(42,20+a+1);cprintf("%s",spesifikasi[pilih2][a]);
		gotoxy(72,20+a+1);cprintf("%s",kode[pilih2][a]);
		gotoxy(102,20+a+1);cprintf("%s",harga[pilih2][a]);

    } getch(); clrscr();negara();
      }

       else if(pilih[0]=='2'){

       clrscr();kotakbeli();
       for(int a=0;a<jumlah;a++){
   	gotoxy(9,20+a+1);cprintf("%s",nomor[pilih2][a]);
	   gotoxy(14,20+a+1);cprintf("%s",namasenjata[pilih2][a]);
      gotoxy(42,20+a+1);cprintf("%s",spesifikasi[pilih2][a]);
		gotoxy(72,20+a+1);cprintf("%s",kode[pilih2][a]);
		gotoxy(102,20+a+1);cprintf("%s",harga[pilih2][a]);
      }getch(); clrscr();negara();
      }


       else if(pilih[0]=='3'){

       clrscr();kotakbeli();
       for(int a=0;a<jumlah;a++){
   	gotoxy(9,20+a+1);cprintf("%s",nomor[pilih2][a]);
	   gotoxy(14,20+a+1);cprintf("%s",namasenjata[pilih2][a]);
      gotoxy(42,20+a+1);cprintf("%s",spesifikasi[pilih2][a]);
		gotoxy(72,20+a+1);cprintf("%s",kode[pilih2][a]);
		gotoxy(102,20+a+1);cprintf("%s",harga[pilih2][a]);
      }getch(); clrscr();negara();}

       else if(pilih[0]=='4'){

      clrscr();kotakbeli();
      for(int a=0;a<jumlah;a++){
   	gotoxy(9,20+a+1);cprintf("%s",nomor[pilih2][a]);
	   gotoxy(14,20+a+1);cprintf("%s",namasenjata[pilih2][a]);
      gotoxy(42,20+a+1);cprintf("%s",spesifikasi[pilih2][a]);
		gotoxy(72,20+a+1);cprintf("%s",kode[pilih2][a]);
		gotoxy(102,20+a+1);cprintf("%s",harga[pilih2][a]);

      }getch(); clrscr();negara();}

       else if(pilih[0]=='5'){

       clrscr();kotakbeli();
       for(int a=0;a<jumlah;a++){
   	gotoxy(9,20+a+1);cprintf("%s",nomor[pilih2][a]);
	   gotoxy(14,20+a+1);cprintf("%s",namasenjata[pilih2][a]);
      gotoxy(42,20+a+1);cprintf("%s",spesifikasi[pilih2][a]);
		gotoxy(72,20+a+1);cprintf("%s",kode[pilih2][a]);
		gotoxy(102,20+a+1);cprintf("%s",harga[pilih2][a]);
      }getch(); clrscr();negara();}

       else if(pilih[0]==' '){
        clrscr();utama();
       }
       else{
         textcolor(9);
       	gotoxy(54,48);cprintf("inputan tidak valid");
       	getch();textbackground(0);textcolor(0);gotoxy(54,48);cprintf("                     ");
         gotoxy(65,45);textcolor(12);textbackground(0);cprintf("                     ");
         clrscr();negara();
       }

}
////////////////array////////////////////
void jenissenjata(){
char pilih[1];
int a=1,error=0;
textcolor(11);
textbackground(0);
for(int a=0;a<=jumlah;a++){
		gotoxy(9,20+a+1);cprintf("%s",nomor[akun][a]);
	   gotoxy(14,20+a+1);cprintf("%s",namasenjata[akun][a]);
      gotoxy(42,20+a+1);cprintf("%s",spesifikasi[akun][a]);
		gotoxy(72,20+a+1);cprintf("%s",kode[akun][a]);
		gotoxy(102,20+a+1);cprintf("%s",harga[akun][a]);
      }
gotoxy(9,20+jumlah+1);gets(nomor[akun][jumlah]);
gotoxy(14,20+jumlah+1);gets(namasenjata[akun][jumlah]);
gotoxy(42,20+jumlah+1);gets(spesifikasi[akun][jumlah]);
gotoxy(72,20+jumlah+1);gets(kode[akun][jumlah]);

while(a!=0){
gotoxy(102,20+jumlah+1);gets(harga[akun][jumlah]);
for(int b=0;harga[akun][jumlah][b]!=NULL;b++){
	if(harga[akun][jumlah][b]>='0' && harga[akun][jumlah][b]<='9'   ){
   error+=0;}
   else if(harga[akun][jumlah][0]=='$' && harga[akun][jumlah][0]!='0' && harga[akun][jumlah][1]!='0'){
   error+=0;}

   else{
   error++;
   }
}
   if(error==0){
   a=0;}
   else{
   error=0;a=1;gotoxy(62,51);cprintf("Masukan Dalam Dolar");
       	getch();textbackground(0);gotoxy(62,51);cprintf("                     ");
         gotoxy(102,20+jumlah+1);textbackground(0);cprintf("                     ");

   }
}
strcpy(data_ngr[jumlah],nama_akun_negara[akun]);//gotoxy(9,19+a);printf("%s",data_ngr[a]);
strcpy(data_nmpbli[jumlah],nama_kepalanegara[akun]);//gotoxy(35,19+a);printf("%s",data_nmpbli[a]);
strcpy(data_nmsenjata[jumlah],namasenjata[akun][jumlah]);//gotoxy(62,19+a);printf("%s",data_nmsenjata[a]);
strcpy(data_kode[jumlah],kode[akun][jumlah]);// gotoxy(89,19+a);printf("%s",data_kode[a]);
strcpy(data_harga[jumlah],harga[akun][jumlah]);//gotoxy(118,19+a);printf("%s",data_harga[a]);


jumlah++;input();
textcolor(0);
textbackground(0);
for(int a=0;a<=jumlah;a++){
		gotoxy(9,20+a+1);cprintf("%s",nomor[akun][a]);
	   gotoxy(14,20+a+1);cprintf("%s",namasenjata[akun][a]);
      gotoxy(42,20+a+1);cprintf("%s",spesifikasi[akun][a]);
		gotoxy(72,20+a+1);cprintf("%s",kode[akun][a]);
		gotoxy(102,20+a+1);cprintf("%s",harga[akun][a]);
  }getch(); clrscr();

}
void input(){
char pilih;
gotoxy(65,45);printf("apakah ingin menambah barang baru lagi y/n");gotoxy(120,45);pilih=getche();

if(pilih=='y'){
getch();clrscr();kotakpenjualan();jenissenjata();}
else if(pilih=='n'){
clrscr();menu();
}
else{
gotoxy(120,48);printf("inputan tidak valid");
getch();textbackground(0);textcolor(0);gotoxy(120,48);cprintf("                   ");
gotoxy(120,45);textcolor(12);textbackground(0);cprintf("                ");
input();
}
}
////////////tamppembelian/////////////
void kotakbeli(){
char pilih;
char kodesenjata[100];
for (int a=1;a<=56;a++){
 		for(int b=1;b<=140;b++){
   		textcolor(17);
         textbackground(8);
   		if(a==1 || b==1 || a==54 || b==139 || a==9 ||a==2 || a==56 || b==140){
   			cprintf("%c",219);
   		}else{
   			cprintf(" ");
   		}
   	}printf("\n");
	}
for (int a=1;a<=59;a++){
textcolor(a);Sleep(10);
gotoxy(40,3);cprintf(" DDDDDD       A      FFFFFFF TTTTTTT      A      RRRRRRR              ");
gotoxy(40,4);cprintf(" D     D     A A     F          T        A A     R     R          ");
gotoxy(40,5);cprintf(" D     D    A   A    FFFFFFF    T       A   A    RRRRRR           ");
gotoxy(40,6);cprintf(" D     D   AAAAAAA   F          T      AAAAAAA   R   R            ");
gotoxy(40,7);cprintf(" D     D  A       A  F          T     A       A  R    R          ");
gotoxy(40,8);cprintf(" DDDDDD  A         A F          T    A         A R     R                 ");
}
for(int b=16;b<=40;b++){
         gotoxy(7,b);printf("%c",219);
         gotoxy(11,b);printf("%c",219);
  			gotoxy(40,b);printf("%c",219);
         gotoxy(70,b);printf("%c",219);
         gotoxy(100,b);printf("%c",219);
         gotoxy(130,b);printf("%c",219);

			 }

  for(int b=7;b<=130;b++){
			gotoxy(b,15);printf("%c",219);
         gotoxy(b,18);printf("%c",219);
         gotoxy(b,40);printf("%c",219);
}
gotoxy(15,17);printf("Masukan nama senjata");
gotoxy(80,17);printf("kode senjata");
gotoxy(48,17);printf("spesifikasi senjata");
gotoxy(110,17);printf("Harga/Unit");


gotoxy(70,48);cprintf(" ");
textcolor(10);gotoxy(70,52);cprintf("press spasi untuk kembali.....");
gotoxy(105,52);pilih=getche();
if(pilih==' '){
        clrscr();negara();
       }
}
 /////////////////kotakbeli///////////////////
void kotakpembelian(){
char pilih[1];
char kodesenjata[100];
	 for (int a=1;a<=56;a++){
 		for(int b=1;b<=140;b++){
   		textcolor(17);
         textbackground(16);
   		if(a==1 || b==1 || a==54 || b==139 || a==9 ||a==2 || a==56 || b==140){
   			cprintf("%c",219);
   		}else{
   			printf(" ");
   		}
   	}printf("\n");
	}
  textcolor(11);
  textbackground(10);
gotoxy(20,3);cprintf("  PPPPPP   EEEEEEE  M            M  BBBBBBB EEEEEEE  L         I       A      N      N    ");
gotoxy(20,4);cprintf("  P     p  E        M M        M M  B     B E        L         I      A A     N N    N      ");
gotoxy(20,5);cprintf("  PPPPPP   EEEEEEE  M  M      M  M  BBBBBB  EEEEEEE  L         I     A   A    N  N   N      ");
gotoxy(20,6);cprintf("  P        EEEEEEE  M   M    M   M  B    B  E        L         I    AAAAAAA   N   N  N          ");
gotoxy(20,7);cprintf("  P        E        M    M  M    M  B     B E        L         I   A       A  N    N N            ");
gotoxy(20,8);cprintf("  P        EEEEEEE  M     MM     M  BBBBBB  EEEEEEE  LLLLLLLL  I  A         A N     NN         ");

for(int b=16;b<=40;b++){
         gotoxy(7,b);printf("%c",219);
         gotoxy(11,b);printf("%c",219);
  			gotoxy(40,b);printf("%c",219);
         gotoxy(70,b);printf("%c",219);
         gotoxy(100,b);printf("%c",219
         );
         gotoxy(130,b);printf("%c",219);

			 }

  for(int b=7;b<=130;b++){
			gotoxy(b,15);printf("%c",219);
         gotoxy(b,18);printf("%c",219);
         gotoxy(b,40);printf("%c",219);
}
gotoxy(15,17);printf("Masukan kode negara");
gotoxy(80,17);printf("nama senjata");
gotoxy(48,17);printf("kode senjata");
gotoxy(110,17);printf("Harga/Unit");
////////////////////inputbeli////////////////////////////////////////////
a:
gotoxy(20,19+a);pilih[0]=getche();
int negara=atoi(pilih);
gotoxy(48,19+a);gets(kodesenjata);
for(int a=0;a<=jumlah;a++){
if(strcmp(kodesenjata,kode[negara][a])==0){
gotoxy(72,19+a);printf(namasenjata[negara][a]);
gotoxy(110,19+a);printf(harga[negara][a]);
} }

char pilih1;
gotoxy(50,46);printf("Press spasi untuk beli barang lagi..");
gotoxy(50,48);printf("Press enter untuk lanjut pembelian....");
gotoxy(50,50);printf("Press backspace untuk membatalkan....");
gotoxy(100,48);pilih1=getche();

if(pilih1==13){
    getch();gotoxy(50,46);textbackground(10);cprintf("                                      ");
         gotoxy(50,48);textbackground(10);cprintf("                                       ");
         gotoxy(50,50);textbackground(10);cprintf("                                       ");
	for(int a=1;a<=100;a++){
   		textcolor(11);
   		gotoxy(61,50);cprintf("SAVED DATA....%d%",a);Sleep(50);}
         clrscr();kotakpesan();
         }
else if(pilih1==32){
a++;goto a;
}
else if(pilih1==8){
clrscr();utama();}
}
///////////////////////////pesanberapabanyak///////////////
void kotakpesan(){
	 for (int a=1;a<=56;a++){
 		for(int b=1;b<=140;b++){
   		textcolor(17);
         textbackground(0);
   		if(a==1 || b==1 || a==54 || b==139 || a==9 ||a==2 || a==56 || b==140){
   			cprintf("%c",219);
   		}else{
   			cprintf(" ");
   		}
   	}printf("\n");
	}

  textcolor(11);
gotoxy(37,23);cprintf("Data pemesanan  senjata awal telah di simpan dan akan segera di kirim     ");
gotoxy(36,25);cprintf("ke akun negara penjual yang bersangkutan,untuk jumlah senjata yang akan di pesan       ");
gotoxy(39,27);cprintf("kedua belah pihak akan melakukan pertemuan untuk membahas itu....              ");getch();clrscr();bingkai();
}
void datapembeli(){
for (int a=1;a<=56;a++){
 		for(int b=1;b<=140;b++){
   		textcolor(17);
         textbackground(16);
   		if(a==1 || b==1 || a==54 || b==139 || a==9 ||a==2 || a==56 || b==140){
   			cprintf("%c",219);
   		}else{
   			cprintf(" ");
   		}
   	}printf("\n");
	}

for(int b=16;b<=40;b++){
         gotoxy(4,b);printf("%c",219);
         gotoxy(28,b);printf("%c",219);
  			gotoxy(55,b);printf("%c",219);
         gotoxy(83,b);printf("%c",219);
         gotoxy(110,b);printf("%c",219);
         gotoxy(135,b);printf("%c",219);

			 }

  for(int b=4;b<=135;b++){
			gotoxy(b,15);printf("%c",219);
         gotoxy(b,18);printf("%c",219);
         gotoxy(b,40);printf("%c",219);
}
         gotoxy(9,17);printf("NAMA NEGARA");
         gotoxy(35,17);printf("NAMA KEPALA NEGARA");
         gotoxy(62,17);printf("NAMA SENJATA");
         gotoxy(89,17);printf("KODE SENJATA");
         gotoxy(118,17);printf("HARGA/UNIT");

for(int a=0;a<=jumlah;a++){
gotoxy(9,20+a+1);printf("%s",data_ngr[a]);
gotoxy(35,20+a+1);printf("%s",data_nmpbli[a]);
gotoxy(62,20+a+1);printf("%s",data_nmsenjata[a]);
gotoxy(89,20+a+1);printf("%s",data_kode[a]);
gotoxy(118,20+a+1);printf("%s",data_harga[a]);
}
}
main(){
bingkai();


getch();
}

