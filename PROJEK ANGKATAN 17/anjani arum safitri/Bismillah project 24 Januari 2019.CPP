////////////////////////////////////////////////////////////////////////////////
//                     Project SEDERHANA Untuk Memenuhi UAS Pelatihan         //
//                                PUB'17                                      //
//                              FIREWALL                                      //
//					Project Fisika Berbasis Bayar Dan Latihan Soal                 //
//                                                                            //
//                  Nama		: Cahyati Ayuningtias                           //
//                  Jurusan	: D3 Manajemen Informatika                      //
//weight=110,high=55                                                          //
////////////////////////////////////////////////////////////////////////////////

//========================== Fungsi Library ==================================//

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

//============================== PROTOTYPE ===================================//

void awal();
void bingkaimenuutama();
void menuutama();
void tampmenuutama();
void bingkai_tampilankedua();
void tampilan_kedua();
//void berlangganan();
void load();
void login ();
void bingkai_berlangganan();
void bayar_berlangganan();
void daftar();
void keluar();
void masuk();
void materi();
void berbayar();
void contohsoal();
void tamp_contohsoal();
void tampmateri();
void soal1();
void soalsoal2();
void soalsoal3();
void soalsoal4();
void satuminggu();
void duaminggu();
void bayar1();
void bayar2();
void pembahasan();
void tamppembahasan();
void pembahasan_soal1();
void pembahasan_soal2();
void pembahasan_soal3();
void pembahasan_soal4();
void pilih();

void bingkai_bayar();

//=============================== CEKUSER NAME ===============================//


int cekuser(char periksa[100]){
int salah=0;
for (int a=0; periksa[a]!='\0'; a++){
	if (periksa[a]>='1' && periksa[a]<='9'){
		salah++;
		}
   else if (periksa[a]=='!' || periksa[a]=='`' ||periksa[a]=='~' ||periksa[a]=='@' ||periksa[a]=='#' || periksa[a]=='$' || periksa[a]=='%' ||
   periksa[a]=='^' || periksa[a]=='&'  || periksa[a]=='(' || periksa[a]==')' || periksa[a]=='_' || periksa[a]=='-' || periksa[a]=='+' ||
   periksa[a]=='=' || periksa[a]==' ' || periksa[a]=='{' || periksa[a]=='}' || periksa[a]=='[' || periksa[a]==']' || periksa[a]=='\\' || periksa[a]=='|' ||
   periksa[a]==';' || periksa[a]==':' ||periksa[a]=='"' ||periksa[a]=='<' ||periksa[a]==',' ||periksa[a]=='>' ||periksa[a]=='.' ||periksa[a]=='*' ||
   periksa[a]=='/' ||periksa[a]=='?' ||periksa[a]=='\'' ) {
   salah++;
   	}
   else if (periksa[0]=='0'){
   salah++;}
	}
return salah;
}


//============================= VARIABEL GLOBAL ==============================//



char duit[10];
int harga=0;
int uang;
char nomerid[100][100];
int index=0;
char nim[100];
char nama[100];
char nama1[100];
char soal[100];



//============================== BINGKAI AWAL ================================//

void bingkai_awal(){

	for(int a=0;a<=100;a++){
    gotoxy(a+5,5);cprintf("%c",177);
    gotoxy(a+5,50);cprintf("%c",177);
   }
   for(int b=0;b<45;b++){
    gotoxy(5,5+b);cprintf("%c",177);
    gotoxy(105,5+b);cprintf("%c",177);Sleep(8);
	}awal();
}

//================================= AWAL =====================================//


void awal(){
 for(int a=1;a<=10;a++){
  textcolor(a);

  gotoxy(10,15);cprintf(" WW                  WW EEEEEEEE LL        CCCCCCCC OOOOOOOO MMMM      MMMM EEEEEEEE  ");
  gotoxy(10,16);cprintf("  WW                WW  EE       LL        CC       OO    OO MM MM    MM MM EE        ");
  gotoxy(10,17);cprintf("   WW              WW   EE       LL        CC       OO    OO MM  MM  MM  MM EE        ");
  gotoxy(10,18);cprintf("    WW    WWWW    WW    EEEEEEEE LL        CC       OO    OO MM   MMMM   MM EEEEEEEE  ");
  gotoxy(10,19);cprintf("     WW  WW  WW  WW     EE       LL        CC       OO    OO MM          MM EE        ");
  gotoxy(10,20);cprintf("      WWWW    WWWW      EEEEEEEE LLLLLLLLL CCCCCCCC OOOOOOOO MM          MM EEEEEEEE  ");

  gotoxy(12,22);cprintf(" TTTTTTTT OOOOOOOO     PPPPPPPP   HH    HH YY      YY SSSSSSSS II CCCCCCCC ");
  gotoxy(12,23);cprintf("    TT    OO    OO     PP      PP HH    HH  YY    YY  SS       II CC       ");
  gotoxy(12,24);cprintf("    TT    OO    OO     PP     PP  HH    HH   YY  YY   SS       II CC       ");
  gotoxy(12,25);cprintf("    TT    OO    OO     PPPPPPP    HHHHHHHH    YYYY    SSSSSSSS II CC       ");
  gotoxy(12,26);cprintf("    TT    OO    OO     PP         HH    HH     YY           SS II CC       ");
  gotoxy(12,27);cprintf("    TT    OOOOOOOO     PP         HH    HH     YY     SSSSSSSS II CCCCCCCC ");

  gotoxy(7,29);cprintf(" EEEEEEEE        LL       EEEEEEEE      AA      RRRRRRRR   NNNN     NN II NNNN     NN GGGGGGGG ");
  gotoxy(7,30);cprintf(" EE              LL       EE           AAAA     RR      RR NN NN    NN II NN NN    NN GG       ");
  gotoxy(7,31);cprintf(" EE        ===== LL       EE          AA  AA    RR     RR  NN  NN   NN II NN  NN   NN GG       ");
  gotoxy(7,32);cprintf(" EEEEEEEE        LL       EEEEEEEE   AAAAAAAA   RRRRRRR    NN   NN  NN II NN   NN  NN GGGGGGGG ");
  gotoxy(7,33);cprintf(" EE              LL       EE        AA      AA  RR  RR     NN    NN NN II NN    NN NN GG    GG ");
  gotoxy(7,34);cprintf(" EEEEEEEE        LLLLLLLL EEEEEEEE AA        AA RR   RR    NN     NNNN II NN     NNNN GGGGGGGG ");
  gotoxy(11,45);cprintf("                      CREATED BY : CAHYATI AYUNINGTIAS                    ");Sleep(100);
 }clrscr();login();load();clrscr();tampilan_kedua();
}



void tampilan_kedua(){
bingkai_tampilankedua();
  textcolor(14);
  char awal[100]="Silahkan Pilih Sesuai Kebutuhan Anda  ";
  char awal1[100]="   1. BERLANGGANAN         ";
  char awal2[100]="   2. BERBAYAR             ";
    for(int x=0;awal[x]!=NULL;x++){
     gotoxy(35+x,8);cprintf("%c",awal[x]);Sleep(100);
    }
    for(int x=0;awal1[x]!=NULL;x++){
     gotoxy(15+x,15);cprintf("%c",awal1[x]);Sleep(100);
    }
    for(int x=0;awal2[x]!=NULL;x++){
     gotoxy(65+x,15);cprintf("%c",awal2[x]);Sleep(100);
    }
    gotoxy(57,46);textcolor(17);cprintf(" MASUKKAN PILIHAN :      ");Sleep(5);
    gotoxy(57,48);textcolor(15);cprintf(" tekan sembarang untuk keluar >>>>> ");

    gotoxy(76,46);char pilih=getche();


    if(pilih=='1'){
     clrscr();
     daftar();
     bayar_berlangganan();
     load();
    }
    else if(pilih=='2'){
     clrscr();
     berbayar();
     load();
    }
    else{
     keluar();

   }

}


void bingkaimenuutama(){
 textcolor(15);
 for(int a=0;a<=100;a++){
    gotoxy(a+5,5);cprintf("%c",177);
    gotoxy(a+5,50);cprintf("%c",177);
   }
   for(int b=0;b<45;b++){
    gotoxy(5,5+b);cprintf("%c",177);
    gotoxy(105,5+b);cprintf("%c",177);
	}
   int x=40;

		for(int a=20;a<=24;a++){
   		for(int b=15;b<=35;b++){
      	if(a==20||a==24||b==15||b==35){
      		gotoxy(b,a);cprintf("%c",219);
         }
         else{
         	printf(" ");
         }
      }printf("\n");
   }
   for(int a=20;a<=24;a++){
   		for(int b=75;b<=95;b++){
      	if(a==20||a==24||b==75||b==95){
      		gotoxy(b,a);cprintf("%c",219);
         }
         else{
         	printf(" ");
         }
      }printf("\n");
   }
   for(int a=33;a<=37;a++){
   		for(int b=15;b<=35;b++){
      	if(a==33||a==37||b==15||b==35){
      		gotoxy(b,a);cprintf("%c",219);
         }
         else{
         	printf(" ");
         }
      }printf("\n");
   }

   for(int a=33;a<=37;a++){
   		for(int b=75;b<=95;b++){
      	if(a==33||a==37||b==75||b==95){
      		gotoxy(b,a);cprintf("%c",219);
         }
         else{
         	printf(" ");
         }
      }printf("\n");
   }//menuutama();
}

void tampmenuutama(){
textcolor(15);
 gotoxy(10,10);cprintf(" ^^^       ^^                                                                   ");Sleep(10);
 gotoxy(10,11);cprintf(" ^^ ^     ^ ^ ^^^^^^^ ^^^^^^^ ^^    ^   ^^    ^ ^^      ^^^^^^^ ^^^^^^ ^^^^^^^  ");Sleep(10);
 gotoxy(10,12);cprintf(" ^^  ^   ^  ^ ^^    ^ ^^    ^ ^^    ^   ^^    ^ ^^           ^^ ^^ ^ ^      ^^  ");Sleep(10);
 gotoxy(10,13);cprintf(" ^^   ^^^   ^ ^^^^^^^ ^^    ^ ^^    ^   ^^    ^ ^^^^^^  ^^^^^^^ ^^ ^ ^ ^^^^^^^  ");Sleep(10);
 gotoxy(10,14);cprintf(" ^^         ^ ^^      ^^    ^ ^^    ^   ^^    ^ ^^      ^    ^^ ^^ ^ ^ ^    ^^  ");Sleep(10);
 gotoxy(10,15);cprintf(" ^^         ^ ^^^^^^^ ^^    ^ ^^^^^^^   ^^^^^^^ ^^^^^^^ ^^^^^^^ ^^ ^ ^ ^^^^^^^  ");Sleep(10);




}
void menuutama(){
bingkaimenuutama();
tampmenuutama();
 textcolor(14);
  gotoxy(20,22);cprintf("1. Materi ");
  gotoxy(78,22);cprintf("2. Contoh Soal");
  gotoxy(20,35);cprintf("0. Keluar");
  gotoxy(76,35);cprintf("Masukkan Pilihan :");

  gotoxy(94,35);char pilih=getche();

  if(pilih=='1'){
   clrscr();
   materi();
  }
  else if(pilih=='2'){
   clrscr();
   contohsoal();
  }
  else{
   clrscr();
   login();
  }


}





//=========================== BINGKAI TAMPILAN KEDUA =========================//

void bingkai_tampilankedua(){
 for(int a=0;a<=100;a++){
    textcolor(15);

    gotoxy(a+5,5);cprintf("%c",177);
    gotoxy(a+5,50);cprintf("%c",177);
   }
   for(int b=0;b<45;b++){
    gotoxy(5,5+b);cprintf("%c",177);
    gotoxy(105,5+b);cprintf("%c",177);
	}
 for(int a=6;a<=105;a++){
    textcolor(15);
    gotoxy(a,10);cprintf("%c",177);
    gotoxy(a,20);cprintf("%c",177);
   }
  for(int b=11;b<=49;b++){
	gotoxy(56,b);cprintf("%c",177);
  }
  for(int c=56;c<=105;c++){
   gotoxy(c,40);cprintf("%c",177);
   gotoxy(c,50);cprintf("%c",177);
  }
}



//============================= TAMPILAN KEDUA ===============================//







//==============================langganan 30hari==============================//
void bayar_berlangganan(){
 textcolor(14);
 harga=450000;
 bingkai_bayar();
 gotoxy(43,21);cprintf("   Silahkan masukkan uang Rp.450000      ");Sleep(100);
 gotoxy(43,23);cprintf("*****************************************");Sleep(100);
 gotoxy(43,24);cprintf("*  Masukkan Uang Anda :                 *");Sleep(100);
 gotoxy(43,25);cprintf("*****************************************");Sleep(100);
 gotoxy(66,24);cprintf(" Rp."); gets(duit);
   uang=atoi(duit);
int a=strlen(duit);
if(a>10){
	gotoxy(25,31);printf("                                ");
	gotoxy(25,31);printf("Maksimal 10 digit angka!");
   getch();
   gotoxy(25,32);printf("                                ");
   bayar_berlangganan();
}
if((strcmp(duit,"")==0)||duit[0]=='0'){
	gotoxy(33,25); printf("                       ");
      	bayar_berlangganan();


}else{
int salah=0;
int stat=0;
while(stat==0){
	salah=0;
	for(int a=0;duit[a]!='\0';a++){
		if(!(duit[a]>='0' && duit[a]<='9')){
      salah++;
   }
}
if(salah>0){
      gotoxy(33,25);printf("Masukkan salah!         ");
      getch();
      gotoxy(33,25);printf("                        ") ;
      bayar_berlangganan();
}else{
		long mbayar;
   	mbayar=atoi(duit);
      if(mbayar>0){
      	if (mbayar==harga){
   			gotoxy(33,36);cprintf("Uang anda pas");
            getch();
            clrscr();
            menuutama();
         }else if(mbayar<harga){
      		textcolor(91);
   			gotoxy(31,35);cprintf("Uang anda kurang %d",harga-mbayar);
      		gotoxy(36,38);cprintf("Silahkan lakukan pembayaran ulang");
            getch();
            gotoxy(31,35);cprintf("                                ");
      		gotoxy(36,38);cprintf("                                 ");
            gotoxy(35,35);printf("                  ");
      		bayar_berlangganan();

         }else if(mbayar>=harga){
   			gotoxy(31,35);cprintf("Kembalian   : Rp %d",mbayar-harga);
            getch();
            clrscr();
            menuutama();
      	}/*else if(mbayar>harga){
   			gotoxy(35,36);printf("Uang melebihi maksimal");
         	getch();
      		gotoxy(35,36);printf("                                ");
      		bayar_berlangganan();
   		}*/else{
            gotoxy(35,36);printf("                                ");
         }
      }else{
       	gotoxy(33,35);printf("Masukkan Salah!                    ");
         getch();
         gotoxy(33,35);printf("                                   ");
      }
    }
  }
     clrscr();menuutama();
      }

}


//================================ bingkai log================================//


void bingkai_log(){

	for(int a=0;a<=100;a++){
    textcolor(18);
    gotoxy(a+5,5);cprintf("%c",177);
    gotoxy(a+5,50);cprintf("%c",177);
   }
   for(int b=0;b<45;b++){
    gotoxy(5,5+b);cprintf("%c",177);
    gotoxy(105,5+b);cprintf("%c",177);
	}
}


//================================== LOGIN ===================================//


int salah1=0;

void login(){
bingkai_log();
 char username[1000]="jeyas";
 char pswrd[50]="2418";

   masuk();
	int x=40;
	textcolor(15);
		for(int a=20;a<=28;a++){
   		for(int b=40;b<=85;b++){
      	if(a==20||a==24||a==28||b==40||b==85||b==59){
      		gotoxy(b,a);cprintf("%c",219);
         }
         else{
         	printf(" ");
         }
      }printf("\n");
   }
   gotoxy(x+2,22);printf("Masukan Username");
   gotoxy(62,22);gets(username);
   gotoxy(x+2,26);printf("Masukan Password");
   gotoxy(62,26);gets(pswrd);


 if (cekuser(username)==0){
	 if (salah1==3){
   	 salah1=0;
       clrscr();
      for (int a=10;a>=1;a--){
         textcolor(14);
      	gotoxy(21,10);cprintf("ANDA SALAH 3 KALI COBA LAGI TUNGGU    DETIK");
         textcolor(12);
      	gotoxy(56,10);cprintf("%d",a);Sleep(1000);
         clrscr();
         }login();
      for (int a=64;a>=20;a--){
      textcolor(14);
				gotoxy(a,9);cprintf("%c",219);
				gotoxy(a,10);cprintf("%c",219);
				gotoxy(a,11);cprintf("%c",219);Sleep(50);
						}
         gotoxy(20,10);printf("                                           ");


   }else{
   		if (strcmp(username,"jeyas")==0 && strcmp(pswrd,"2418")==0){
            load();
            bingkai_tampilankedua();
            tampilan_kedua();
         	}else if(strcmp(username,"jeyas")!=0 && strcmp(pswrd,"2418")==0){
         	clrscr();
         	textcolor(14);
   			gotoxy(40,10);cprintf("  USERNAME ANDA SALAH !!!");Sleep(1000);
      		gotoxy(40,10);printf("                          ");
              clrscr();
      		salah1++;

      		login();
         }else if(strcmp(username,"jeyas")==0 && strcmp(pswrd,"2418")!=0){
         	clrscr();
            textcolor(13);
   			gotoxy(40,10);cprintf(" PASSWORD ANDA SALAH !!!");Sleep(1000);
      		gotoxy(40,10);printf("                         ");
            salah1++;
            clrscr();
      		login();
         }else{
   			clrscr();
            textcolor(13);
   			gotoxy(21,10);cprintf("USERNAME DAN PASSWORD ANDA SALAH !!!");Sleep(1000);

            for (int a=58;a>=20;a--){
				gotoxy(a,9);cprintf("%c",219);
				gotoxy(a,10);cprintf("%c",219);
				gotoxy(a,11);cprintf("%c",219);Sleep(50);
            }
            clrscr();
      		salah1++;
      		login();
   			}
	}
   }else{
   	clrscr();
      textcolor(13);
      gotoxy(21,10);cprintf("         USER NAME HARUS HURUF");Sleep(1000);

      for (int a=58;a>=20;a--){
      gotoxy(a,9);cprintf("%c",219);
      gotoxy(a,10);cprintf("%c",219);
      gotoxy(a,11);cprintf("%c",219);Sleep(50);
      }
      salah1++;
      clrscr();
      login();
   }

}

//=================================tampmateri=================================//

void tampmateri(){
 textcolor(14);
  gotoxy(30,10);cprintf(" mmmmm mmmmm m     mmmm  mmmmm m ");
  gotoxy(30,11);cprintf(" m m m     m m     m   m m     m ");
  gotoxy(30,12);cprintf(" m m m mmmmm mmmm  mmmm  m     m ");
  gotoxy(30,13);cprintf(" m m m m   m m     m     m     m ");
  gotoxy(30,14);cprintf(" m m m mmmmm mmmmm mmmmm m     m ");Sleep(100);


}

//===============================tampcontohsoal===============================//
void tamp_contohsoal(){
textcolor(14);
 gotoxy(5,5); cprintf("*******                                                                        ");Sleep(10);
 gotoxy(5,6); cprintf("**      ******* ******* **      ******* **       ******* ******* ******* **    ");Sleep(10);
 gotoxy(5,7); cprintf("**      **    * **    * **      **    * **       **      **    *      ** **    ");Sleep(10);
 gotoxy(5,8); cprintf("**      **    * **    * ******  **    * *******  ******* **    * ******* **    ");Sleep(10);
 gotoxy(5,9); cprintf("**      **    * **    * **      **    * **    *        * **    * *    ** **    ");Sleep(10);
 gotoxy(5,10);cprintf("******* ******* **    * ******* ******* **    *  ******* ******* ******* ****  ");Sleep(10);
}


//================================tamppembahasan==============================//
void tamppembahasan(){
 gotoxy(2,5); cprintf(" ******                                                                             ");Sleep(10);
 gotoxy(2,6); cprintf(" **    * ******  ****    ** **      ******* **      ******* ******* ******* ******* ");Sleep(10);
 gotoxy(2,7); cprintf(" ******  **    * **  *  * * **           ** **           ** **           ** **    * ");Sleep(10);
 gotoxy(2,8); cprintf(" **      ******  **   **  * ******* ******* ******* ******* ******* ******* **    * ");Sleep(10);
 gotoxy(2,9); cprintf(" **      **      **       * **    * *    ** **    * *    **       * *    ** **    * ");Sleep(10);
 gotoxy(2,10);cprintf(" **      ******* **       * ******* ******* **    * ******* ******* ******* **    * ");Sleep(10);
}

//================================ PENDAFTARAN ===============================//
void daftar(){
 int a=1,error=0;
   textcolor(14);
	gotoxy(20,4);cprintf ("#####     #     #####  #####     #    #####  "); Sleep(10);
   gotoxy(20,5);cprintf ("##  ##   ###    ####     #      ###   ## ##  "); Sleep(10);
   gotoxy(20,6);cprintf ("##  ##  #####   ##       #     #####  ####   "); Sleep(10);
   gotoxy(20,7);cprintf ("#####  ##   ##  ##       #    ##   ## ##  ## "); Sleep(10);                                                                                                                         //

 	gotoxy(20,10);cprintf(" >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>||<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
	gotoxy(20,11);cprintf(" || NAMA  :                                                 ||");
	gotoxy(20,12);cprintf(" ||                                                         ||");
	gotoxy(20,13);cprintf(" || NIM   :                                                 ||");
	gotoxy(20,14);cprintf(" >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>||<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
  while(a!=0){
   xz:
	gotoxy(31,11);gets(nama);//validasi nama
   if(strcmp(nama,"")==0)goto xz;
   for(int b=0;nama[b]!=NULL;b++){
    if(nama[b]>='a' && nama[b]<='z' || nama[b]>='A' && nama[b]<='Z' || nama[b]<=' '){
    	if(nama[0]==' '){
      	goto xz;
      }
      if(strcmp(nama,"")==0){
         goto xz;
      }
     error+=0;
    }
    else if(nama[b]!='0' && nama[b]!='9' || strlen(nama)==0){
     error++;
    }
   }
   if(error==0){
    a=0;
   }else{
    for(int a=0;nama[a]!=NULL;a++){
    	gotoxy(31+a,11);printf(" ");
    }
    a=1;
    error=0;
   }
  }
  k:
   error=0;
	gotoxy(31,13);gets(nomerid[index]);//validasi nomerid
    if((strlen(nomerid[index])!=10)){
      goto k;
     }
   for(int b=0;nomerid[index][b]!=NULL;b++){
    	if(!((nomerid[index][b]>='0' && nomerid[index][b]<='9' ))){
      		error++;
      }
   }
   if(error>=1 || strlen(nomerid[index])==0){
   	for(int a=0;nomerid[index][a]!=NULL;a++){
      	gotoxy(31+a,13);printf(" ");
      }
      goto k;
   }

   a=1;
   error=0;
  	while(a!=0){
   	yy:
		gotoxy(31,11);gets(nama1);//validasi nama1
   	for(int b=0;nama1[b]!=NULL;b++){
    		if(nama1[b]>='a' && nama1[b]<='z' || nama1[b]>='A' && nama1[b]<='Z' || nama1[b]<=' '){
         	if(nama1[0] == ' '){
               goto yy;
            }
            else if(strlen(nama1) == 0){
      			goto yy;
      		}
     			error+=0;
         }
    		else if(nama1[b]!='0' && nama1[b]!='9' || strlen(nama1)==0){
     			error++;
    		}
   	}
   	if(error==0){
    		a=0;
   	}else{
    		a=1;
    		error=0;
         for(int a=0;nama1[a]!=NULL;a++){
      		gotoxy(31+a,11);printf(" ");
      	}
   	}
  }
  kk:
   error=0;
	gotoxy(31,13);gets(nim);//validasi nim
    if((strlen(nim)!=10)){
      goto kk;
     }
	for(int b=0;nim[b]!=NULL;b++){
    	if(!((nim[b]>='0' && nim[b]<='9'  || strlen(nim)==10))){
      		error++;
      }
   }
   if(error>=1 || strlen(nim)==0){
   	for(int a=0;nim[a]!=NULL;a++){
      	gotoxy(31+a,13);printf(" ");
      }
      goto kk;
   }
   gotoxy(30,37);cprintf("Silahkan tekan enter untuk melanjutkan ");getch();
   index++;




  int salah=0;
 if(strcmp(nama1,nama)==0 && strcmp(nim,nomerid[index-1])==0){
 gotoxy(40,35);cprintf("SELAMAT ANDA SUDAH TERDAFTAR ");
  	clrscr();
   //pilihpilih();
 }
 else if(strcmp(nama,nama1)!=0 && strcmp(nomerid[index-1],nim)==0){
   clrscr();
   textcolor(3);
   gotoxy(40,10);cprintf("NAMA ANDA SALAH !!!");Sleep(1000);
	gotoxy(40,10);cprintf("                    ");
   clrscr();
   salah++;

   daftar();
 }
 else if(strcmp(nama,nama1)==0 && strcmp(nomerid[index-1],nim)!=0){
   clrscr();
   textcolor(3);
   gotoxy(40,10);cprintf("NIM ANDA SALAH !!!");Sleep(1000);
	gotoxy(40,10);cprintf("                    ");
   clrscr();
   salah++;

   daftar();
 }
  else{
   clrscr();
   textcolor(3);
   gotoxy(21,10);cprintf("NAMA DAN NIM ANDA SALAH !!!!");Sleep(1000);

   for( int a=58;a>=20;a--){
    gotoxy(a,9);cprintf("%c",219);
    gotoxy(a,10);cprintf("%c",219);
    gotoxy(a,11);cprintf("%c",219);Sleep(50);
   }
   clrscr();
   salah++;
   daftar();
  }
}


//================================= masuk ====================================//
void masuk(){
 textcolor(11);
 gotoxy(31,7); cprintf(" mmmmmmmm eeeeeee ll bb       uu   uu  ");Sleep(100);
 gotoxy(31,8); cprintf(" mm mm mm ee   ee ll bb       uu   uu  ");Sleep(100);
 gotoxy(31,9); cprintf(" mm mm mm eeeeeee ll bbbbbbb  uu   uu  ");Sleep(100);
 gotoxy(31,10);cprintf(" mm mm mm ee      ll bb    bb uu   uu  ");Sleep(100);
 gotoxy(31,11);cprintf(" mm mm mm eeeeeee ll bbbbbbb  uuuuuuu  ");Sleep(100);
 gotoxy(31,14);cprintf("  SUGENG RAWUH ING CAHYATI PROJECT  ");Sleep(100);
}


//============================== BINGKAI BERBAYAR ============================//


void bingkai_berbayar(){
for(int a=0;a<=100;a++){
    textcolor(15);
    gotoxy(a+5,5);cprintf("%c",177);
    gotoxy(a+5,45);cprintf("%c",177);
   }
   for(int b=0;b<40;b++){
    gotoxy(5,5+b);cprintf("%c",177);
    gotoxy(105,5+b);cprintf("%c",177);Sleep(8);
	}
}



//================================ LOADING ===================================//


void load(){
	textcolor(14);
	gotoxy(53,34);cprintf("============================");Sleep(10);
   gotoxy(53,36);cprintf("============================");Sleep(10);
	for(int a=1;a<=100;a++){
   	textcolor(a);gotoxy(57,35);cprintf("   Loading .. %d%",a);Sleep(50);
   } clrscr();
}




//========================== Bingkai berlangganan ============================//



void bingkai_berlangganan(){
textcolor(15);
	for (int a=4;a<=89;a++){
   	gotoxy(a,4);cprintf("%c",177);
      gotoxy(a,50);cprintf("%c",177);
      gotoxy(a,11);cprintf("%c",177);
   }
   for (int a=4;a<=50;a++){
   	gotoxy(4,a);cprintf("%c",177);
      gotoxy(89,a);cprintf("%c",177);
	}
   for (int a=1;a<=24;a++){
   	gotoxy(32,14+a);cprintf("%c",177);
      gotoxy(55,14+a);cprintf("%c",177);
   	gotoxy(31+a,14);cprintf("%c",177);
      gotoxy(31+a,20);cprintf("%c",177);
      gotoxy(31+a,26);cprintf("%c",177);
      gotoxy(31+a,32);cprintf("%c",177);
      //gotoxy(31+a,38);cprintf("%c",177);
   }
   for (int a=1;a<=34;a++){
   	gotoxy(26+a,40);cprintf("%c",177);
      gotoxy(26+a,46);cprintf("%c",177);
   }for (int a=1;a<=8;a++){
   	gotoxy(28,35+a);cprintf("%c",177);
      gotoxy(28,40+a);cprintf("%c",177);
   }
   for (int a=1;a<=8;a++){
   	gotoxy(59,35+a);cprintf("%c",177);
      gotoxy(59,40+a);cprintf("%c",177);Sleep(100);
   }
}

//==========================bingkai contoh soal =============================//
 void bingkai_contohsoal(){

  textcolor(17);
	for (int a=1;a<=88;a++){
   	gotoxy(a,1);cprintf("%c",177);
      gotoxy(a,52);cprintf("%c",177);
      gotoxy(a,15);cprintf("%c",177);

   }
   for (int a=1;a<=52;a++){
   	gotoxy(1,a);cprintf("%c",177);
      gotoxy(88,a);cprintf("%c",177);
   }
  for(int b=1; b<=37; b++){
   	gotoxy(24,15+b);cprintf("%c",177);
   }
   for (int a=1;a<=23;a++){
   	gotoxy(a,18);cprintf("%c",177);
   	gotoxy(a,22);cprintf("%c",177);
      gotoxy(a,26);cprintf("%c",177);
      gotoxy(a,30);cprintf("%c",177);
      gotoxy(a,34);cprintf("%c",177);
   }


}
//==============================contohsoal=====================================//
void contohsoal(){
 textcolor(18);
 bingkai_contohsoal();
 tamp_contohsoal();

   gotoxy(3,20);cprintf("1. Soal 1 ");
   gotoxy(3,24);cprintf("2. Soal 2 ");
   gotoxy(3,28);cprintf("3. Soal 3 ");
   gotoxy(3,32);cprintf("3. Soal 4");Sleep(5);
   gotoxy(3,42);cprintf("Masukkan Pilihan : ");
 char pilih=getche();
  if(pilih=='1'){
   soal1();

  }
  else if(pilih=='2'){
   soalsoal2();
  }
  else if(pilih=='3'){
   soalsoal3();
  }
  else if(pilih=='4'){
   soalsoal4();
  }
  else{
   keluar();
  }
}
void pembahasan(){
 textcolor(18);
 clrscr();
 bingkai_contohsoal();

   gotoxy(3,20);cprintf("1. Pembahasan Soal 1 ");
   gotoxy(3,24);cprintf("2. Pembahasan Soal 2 ");
   gotoxy(3,28);cprintf("3. Pembahasan Soal 3 ");
   gotoxy(3,32);cprintf("4. Pembahasan Soal 4 ");Sleep(5);
   gotoxy(3,40);cprintf("Masukkan Pilihan : ");
 char pilih=getche();
  if(pilih=='1'){
   pembahasan_soal1();
   clrscr();
  }
  else if(pilih=='2'){
   pembahasan_soal2();
   clrscr();
  }
  else if(pilih=='3'){
   pembahasan_soal3();
   clrscr();
  }
  else if(pilih=='4'){
   pembahasan_soal4();
   clrscr();
  }
  else{
   keluar();
  }
}

//==================================bingkaibayar==============================//
void bingkai_bayar(){
 int x=40;
	textcolor(15);
		for(int a=20;a<=28;a++){
   		for(int b=40;b<=85;b++){
      	if(a==20||a==28||b==40||b==85){
      		gotoxy(b,a);cprintf("%c",219);
         }
         else{
         	printf(" ");
         }
      }printf("\n");
    }


}

//================================ bayar =====================================//

void bayar1(){
 textcolor(14);
 harga=150000;
 bingkai_bayar();
 gotoxy(43,21);cprintf("   Silahkan masukkan uang Rp.150000      ");Sleep(100);
 gotoxy(43,23);cprintf("*****************************************");
 gotoxy(43,24);cprintf("*  Masukkan Uang Anda :                 *");
 gotoxy(43,25);cprintf("*****************************************");
 gotoxy(66,24);cprintf(" Rp."); gets(duit);
   uang=atoi(duit);
int a=strlen(duit);
if(a>10){
	gotoxy(25,31);printf("                                ");
	gotoxy(25,31);printf("Maksimal 10 digit angka!");
   getch();
   gotoxy(25,32);printf("                                ");
   bayar1();
}
if((strcmp(duit,"")==0)||duit[0]=='0'){
	gotoxy(33,25); printf("                       ");
      	bayar1();


}else{
int salah=0;
int stat=0;
while(stat==0){
	salah=0;
	for(int a=0;duit[a]!='\0';a++){
		if(!(duit[a]>='0' && duit[a]<='9')){
      salah++;
   }
}
if(salah>0){
      gotoxy(33,25);printf("Masukkan salah!         ");
      getch();
      gotoxy(33,25);printf("                        ") ;
      bayar1();
}else{
		long mbayar;
   	mbayar=atoi(duit);
      if(mbayar>0){
      	if (mbayar==harga){
   			gotoxy(33,36);cprintf("Uang anda pas");
            getch();
            clrscr();
            pilih();
         }else if(mbayar<harga && mbayar<=harga){
      		textcolor(91);
   			gotoxy(31,35);cprintf("Uang anda kurang %d",harga-mbayar);
      		gotoxy(36,38);cprintf("Silahkan lakukan pembayaran ulang");
            getch();
            gotoxy(31,35);cprintf("                                ");
      		gotoxy(36,38);cprintf("                                 ");
            gotoxy(35,35);printf("                  ");
      		bayar1();

         }else if(mbayar<=harga){
   			gotoxy(31,35);cprintf("Kembalian   : Rp %d",mbayar-harga);
            getch();
            clrscr();
            pilih();
      	}else if(mbayar>harga){
   			gotoxy(35,36);printf("Uang melebihi maksimal");
         	getch();
      		gotoxy(35,36);printf("                                ");
      		bayar1();
   		}else{
            gotoxy(35,36);printf("                                ");
         }
      }else{
       	gotoxy(33,35);printf("Masukkan Salah!                    ");
         getch();
         gotoxy(33,35);printf("                                   ");
      }
    }
  }
     clrscr();pilih();
      }

}


void bayar2(){
 textcolor(14);
 harga=300000;
 bingkai_bayar();
 gotoxy(43,21);cprintf("   Silahkan masukkan uang Rp.300000      ");Sleep(100);
 gotoxy(43,23);cprintf("*****************************************");
 gotoxy(43,24);cprintf("*  Masukkan Uang Anda :                 *");
 gotoxy(43,25);cprintf("*****************************************");
 gotoxy(66,24);cprintf(" Rp."); gets(duit);
   uang=atoi(duit);
int a=strlen(duit);
if(a>10){
	gotoxy(25,31);printf("                                ");
	gotoxy(25,31);printf("Maksimal 10 digit angka!");
   getch();
   gotoxy(25,32);printf("                                ");
   bayar2();
}
if((strcmp(duit,"")==0)||duit[0]=='0'){
	gotoxy(33,25); printf("                       ");
      	bayar2();


}else{
int salah=0;
int stat=0;
while(stat==0){
	salah=0;
	for(int a=0;duit[a]!='\0';a++){
		if(!(duit[a]>='0' && duit[a]<='9')){
      salah++;
   }
}
if(salah>0){
      gotoxy(33,25);printf("Masukkan salah!         ");
      getch();
      gotoxy(33,25);printf("                        ") ;
      bayar2();
}else{
		long mbayar;
   	mbayar=atoi(duit);
      if(mbayar>0){
      	if (mbayar==harga){
   			gotoxy(33,36);cprintf("Uang anda pas");
            getch();
            clrscr();
            pilih();
         }else if(mbayar<harga && mbayar<=harga){
      		textcolor(91);
   			gotoxy(31,35);cprintf("Uang anda kurang %d",harga-mbayar);
      		gotoxy(36,38);cprintf("Silahkan lakukan pembayaran ulang");
            getch();
            gotoxy(31,35);cprintf("                                ");
      		gotoxy(36,38);cprintf("                                 ");
            gotoxy(35,35);printf("                  ");
      		bayar2();

         }else if(mbayar<=harga){
   			gotoxy(31,35);cprintf("Kembalian   : Rp %d",mbayar-harga);
            getch();
            clrscr();
            pilih();
      	}else if(mbayar>harga){
   			gotoxy(35,36);printf("Uang melebihi maksimal");
         	getch();
      		gotoxy(35,36);printf("                                ");
      		bayar2();
   		}else{
            gotoxy(35,36);printf("                                ");
         }
      }else{
       	gotoxy(33,35);printf("Masukkan Salah!                    ");
         getch();
         gotoxy(33,35);printf("                                   ");
      }
    }
  }
     clrscr();pilih();
      }



}


//=============================== BERBAYAR ===================================//
void berbayar(){
textcolor(18);
 bingkai_berbayar();
 gotoxy(25,20);cprintf("#####################################");
 gotoxy(25,21);cprintf("## 1. 1 Minggu                     ##");
 gotoxy(25,22);cprintf("## 2. 2 Minggu                     ##");
 gotoxy(25,23);cprintf("#####################################");Sleep(100);
 gotoxy(25,25);cprintf("Masukkan Pilihan :                   ");
 gotoxy(45,35);printf("Tekan 8 untuk kembali <<<<<<<<<<<     ");Sleep(100);
 gotoxy(43,25);char pilih=getche();


 if(pilih=='1'){
 	clrscr();
   satuminggu();
   clrscr();
	bayar1();
   clrscr();
 }
 else if(pilih=='2'){
 	clrscr();
   duaminggu();
   clrscr();
   bayar2();
   clrscr();
   //latsoal();
 }
 else if(pilih=='8'){
 	clrscr();
   tampilan_kedua();

 }
}

//============================ satuminggu ====================================//
void satuminggu(){
clrscr();
bingkai_berbayar();
 gotoxy(15,10);cprintf("1. Materi ");Sleep(10);
 gotoxy(15,12);cprintf("Masukkan Pilihan : ");Sleep(10);
 gotoxy(33,12);char pilih=getche();

 gotoxy(15,15);cprintf("Tekan Sembarang Untuk Kembali<<<<<<< ");

 if(pilih=='1'){
   clrscr();
   materi();
 }
 else{
  login();
 }

}



void duaminggu(){
clrscr();
bingkai_berbayar();
 gotoxy(15,10);cprintf("1. Materi ");Sleep(10);
 gotoxy(15,11);cprintf("2. Contoh Soal ");Sleep(10);
 gotoxy(15,13);cprintf("Masukkan Pilihan :");Sleep(10);
 gotoxy(33,13);char pilih=getche();
 

 if(pilih=='1'){
   clrscr();
   bayar2();
   clrscr();
   materi();
 }
 else if(pilih=='2'){
   clrscr();
   bayar2();
   clrscr();
   contohsoal();

 }
 else{
  keluar();
 }

}

void pilih(){
bingkai_berbayar();
 gotoxy(15,30);printf("Masukkan Pilihan :");Sleep(10);
 char pilih=getche();

 if(pilih=='1'){
  clrscr();
  materi();
 }
 else if(pilih=='2'){
  clrscr();
  contohsoal();
 }
 else{
  gotoxy(15,15);printf("Pilihan Hanya 1 dan 2 ");
 }
}



//============================= bingkai materi ===============================//
void bingkai_materi(){
 clrscr();
	for(int a=0;a<=100;a++){
    textcolor(3);
    gotoxy(a+5,5);cprintf("%c",177);Sleep(8);
    gotoxy(a+5,50);cprintf("%c",177);Sleep(8);
   }
   for(int b=0;b<45;b++){
    gotoxy(5,5+b);cprintf("%c",177);Sleep(8);
    gotoxy(105,5+b);cprintf("%c",177);Sleep(8);
	}
}






//================================= MATERI ===================================//

void materi(){
bingkai_materi();
tampmateri();
textcolor(18);
 gotoxy(8,20);cprintf("1. Pengertian Usaha          ");
 gotoxy(8,21);cprintf("Pengertian usaha dalam kehidupan sehari-hari berbeda dengan pengertian usaha dalam fisika.");
 gotoxy(8,22);cprintf("Untuk memahami perbedaan pengertian tersebut di bawah ini diberikan beberapa contoh dan");
 gotoxy(8,23);cprintf("penjelasannya");
 gotoxy(8,24);cprintf("a.Pengertian Usaha berdasarkan pengertian sehari-hari: ");
 gotoxy(8,25);cprintf("1. Bila seseorang mahasiswa ingin lulus dengan IPK yang baik, diperlukan usaha keras untuk");
 gotoxy(8,26);cprintf("belajar. ");
 gotoxy(8,27);cprintf("2. Dosen yang baik, selalu berusaha dengan berbagai cara untuk menerangkan mata kuliahnya,");
 gotoxy(8,28);cprintf("agar dapat difahami dengan baik oleh mahasiswanya.");
 gotoxy(8,29);cprintf("Dari dua contoh di atas dapat disimpulkan bahwa kata USAHA ");
 gotoxy(8,30);cprintf("dalam bahasa sehari-hari menjelaskan hampir semua aktivitas sehari-hari.");
 gotoxy(8,31);cprintf("Kata USAHA dalam pengertian sehari-hari ini tidak dapat dinyatakan dengan suatu angka");
 gotoxy(8,32);cprintf("atau ukuran dan tidak dapat pula dinyatakan dengan rumus matematis. Tetapi dalam fisika");
 gotoxy(8,33);cprintf("usaha");
 gotoxy(8,32);cprintf("merupakan definisi yang sudah pasti, mempunyai arti dan dapat dinyatakan dengan rumus");
 gotoxy(8,33);cprintf("matematis.");
 gotoxy(8,33);cprintf("Jadi pengertian usaha menurut bahasa sehari-hari sebagai UPAYA untuk mendapatkan sesuatu.");
 gotoxy(8,35);cprintf("b. Pengertian usaha dalam Fisika ");
 gotoxy(8,36);cprintf("Dalam fisika, usaha merupakan proses perubahan Energi dan usaha ini selalu dihubungkan");
 gotoxy(8,37);cprintf("dengan gaya (F)");
 gotoxy(8,38);cprintf("yang menyebabkan perpindahan (s) suatu benda. Dengan kata lain, bila ada gaya yang");
 gotoxy(8,39);cprintf("menyebabkan perpindahan suatu benda, maka dikatakan gaya tersebut melakukan usaha ");
 gotoxy(8,40);cprintf("terhadap benda.");

 gotoxy(8,42);cprintf("2. Usaha oleh Gaya Konstan ");
 gotoxy(8,43);cprintf("Pengertian usaha yang diterangkan di atas adalah usaha oleh gaya konstan, artinya arah");
 gotoxy(8,44);cprintf(" dan nilainya konstan.");
 gotoxy(8,45);cprintf("Besar (nilai) usaha yang dilakukan oleh sebuah gaya (F) pada suatu benda yang mengakibatkan");
 gotoxy(8,46);cprintf("perpindahan sebesar s,dapat dirumuskan kembali dengan kalimat, sebagai berikut: ");getch();clrscr();bingkai_materi();tampmateri();
 textcolor(18);
 gotoxy(8,20);cprintf(">=Besar usaha oleh gaya konstan didefinisikan sebagai hasil besar komponen");
 gotoxy(8,21);cprintf("gaya pada arah perpindahan dengan besarnya perpindahan yang dihasilkan.");

 gotoxy(8,23);cprintf("Apabila usaha tersebut dirumuskan secara matematis dapat ditulis sebagai berikut:");
 gotoxy(8,24);cprintf("----------------------");
 gotoxy(8,25);cprintf("|   W =Fs . S        |   Rumus (1.1)              ");
 gotoxy(8,26);cprintf("----------------------");

 gotoxy(8,28);cprintf("W : Besar Usaha (kg . m 2 /s 2 , joule atau newton . meter).");
 gotoxy(8,29);cprintf("Fs : Besar komponen gaya pada arah perpindahan (newton).");
 gotoxy(8,30);cprintf("s : Besar perpindahan (m).");Sleep(100);

 gotoxy(8,32);cprintf("Jika gaya yang bekerja membentuk sudut A dengan arah perpindahan");
 gotoxy(8,33);cprintf("perhatikan gambar dibawah ini.");

 gotoxy(8,35);cprintf("                      Fx  F           ");
 gotoxy(8,36);cprintf("                      | /             ");
 gotoxy(8,37);cprintf("          ------------|/A    Fy       ");
 gotoxy(8,38);cprintf("          |           |------         ");
 gotoxy(8,39);cprintf("          |           |               ");
 gotoxy(8,40);cprintf("          |           |               ");
 gotoxy(8,41);cprintf(" -------------------------------------");

 gotoxy(8,42);cprintf("Gambar 1 : Sebuah benda yang bermassa m ditarik dengan gaya F");
 gotoxy(8,43);cprintf("           membentuk sudut A dengan horisontal.");getch();clrscr();bingkai_materi();tampmateri();
 textcolor(18);

 gotoxy(8,20);cprintf("Jika gaya yang melakukan usaha membentuk sudut A dengan perpindahan,");
 gotoxy(8,21);cprintf("maka gaya tersebut dapat diuraikan ke dalam dua komponen, yaitu : ");

 gotoxy(8,23);cprintf("Komponen y : ");
 gotoxy(8,24);cprintf("-----------------");
 gotoxy(8,25);cprintf("| F y = F sin A |");
 gotoxy(8,26);cprintf("-----------------");
 gotoxy(8,28);cprintf("Komponen x, gaya yang searah dengan perpindahan : ");
 gotoxy(8,29);cprintf("-------------------");
 gotoxy(8,30);cprintf("|  F x = F cos A  |");
 gotoxy(8,31);cprintf("-------------------");

 gotoxy(8,33);cprintf("Sesuai dengan rumus(1.1),Fs merupakan komponen gaya pada arah");
 gotoxy(8,34);cprintf(" perpindahan,");
 gotoxy(8,35);cprintf("maka pada rumus (1.1) Fs digantikan dengan F cos A dan dapat ");
 gotoxy(8,36);cprintf("dituliskan sebagai: ");
 gotoxy(8,37);cprintf("----------------------");
 gotoxy(8,38);cprintf("|    W = F y . s     |");
 gotoxy(8,39);cprintf("|    W = F cos A s   |");
 gotoxy(8,40);cprintf("|    W = F s cos A   |    Rumus (1.2)");
 gotoxy(8,41);cprintf("----------------------");getch();clrscr();bingkai_materi();tampmateri();
 textcolor(18);
 gotoxy(8,20);cprintf("**Usaha adalah besaran skalar, dimana usaha merupakan perkalian");
 gotoxy(8,21);cprintf(" skalar (dot product).");
 gotoxy(8,22);cprintf("antara vektor gaya dan vektor perpindahan. Oleh karena itu usaha");
 gotoxy(8,23);cprintf(" merupakan besaran skalar. ");
 gotoxy(8,24);cprintf("------------------");
 gotoxy(8,25);cprintf("|   W = F . s     | Rumus (1.3)");
 gotoxy(8,26);cprintf("------------------");

 gotoxy(8,28);cprintf("3. Satuan dan Dimensi Usaha ");
 gotoxy(8,29);cprintf("Untuk mencari satuan dan dimensi usaha,dapat diturunkan dari rumus (1.1).");
 gotoxy(8,30);cprintf("Jika digunakan Satuan Sistem Internasional maka,gaya F dalam newton (kg m/s2)");
 gotoxy(8,31);cprintf("dan perpindahan s dinyatakan dalam meter (m). ");

 gotoxy(8,33);cprintf("Satuan usaha ");
 gotoxy(8,34);cprintf("= satuan gaya x satuan perpindahan ");
 gotoxy(8,35);cprintf("= kg m/s2 x m ");
 gotoxy(8,36);cprintf("= kg m2 /s2  ");
 gotoxy(8,37);cprintf("= joule  ");Sleep(100);getch();clrscr();bingkai_materi();tampmateri();
 textcolor(18);

 gotoxy(8,20);cprintf("Satu Joule adalah besar usaha yang dilakukan oleh gaya satu newton untuk memindahkan ");
 gotoxy(8,21);cprintf("benda sejauh satu meter ");
 gotoxy(8,22);cprintf("Untuk mencari dimensinya: ");

 gotoxy(8,24);cprintf("dimensi usaha = dimensi gaya x dimensi perpindahan  ");
 gotoxy(8,25);cprintf("[ W ] = [ F ] . [ s ] ");
 gotoxy(8,26);cprintf("= MLT-2 . L ");
 gotoxy(8,27);cprintf("= ML2 T-2  ");getch();clrscr();bingkai_materi();tampmateri();
 textcolor(18);
 gotoxy(8,20);cprintf("4. Energi ");
 gotoxy(8,21);cprintf("Energi sering juga disebut dengan tenaga. Dalam kehidupan sehari-hari energi dihubungkan ");
 gotoxy(8,22);cprintf("dengan gerak,");
 gotoxy(8,23);cprintf("misal orang yang energik artinya orang yang selalu bergerak tidak pernah diam.");
 gotoxy(8,24);cprintf("Energi dihubungkan juga dengan kerja, Jadi : ");

 gotoxy(8,25);cprintf("Energi didefinisikan sebagai kemampuan untuk melakukan kerja.");

 gotoxy(8,26);cprintf("Dalam Fisika energi dihubungkan dengan gerak, yaitu kemapuan untuk melakukan kerja mekanik.");
 gotoxy(8,27);cprintf("Energi dialam adalah besaran yang kekal, dengan sifat-sifat sebagai berikut : ");
 gotoxy(8,28);cprintf("1.	Transformasi energi : energi dapat diubah menjadi energi bentuk lain,");
 gotoxy(8,29);cprintf("	   tidak dapat hilang misal energi pembakaran berubah menjadi energi penggerak mesin.");
 gotoxy(8,30);cprintf("2.	Transfer energi : energi dapat dipindahkan dari suatu benda kebenda lain atau dari sistem ");
 gotoxy(8,31);cprintf("    ke sistem lain,");
 gotoxy(8,32);cprintf("    misal kita memasak air, energi dari api pindah ke air menjadi energi panas,");
 gotoxy(8,33);cprintf("    energi panas atau kalor dipindah lagi keuap menjadi energi uap.");
 gotoxy(8,34);cprintf("3.	Kerja : energi dapat dipindah ke sistem lain melalui gaya yang menyebabkan pergeseran,");
 gotoxy(8,35);cprintf("    yaitu kerja mekanik  ");
 gotoxy(8,36);cprintf("4.	Energi tidak dapat dibentuk dari nol dan tidak dapat dimusnahkan.");


 gotoxy(8,37);cprintf("Sumber-sumber energi yang banyak digunakan dalam kehidupan sehari-hari misalnya: ");
 gotoxy(8,38);cprintf("energi minyak bumi, energi batubara, energi air terjun, energi nuklir dan energi kimia.");getch();clrscr();bingkai_materi();tampmateri();
 textcolor(18);

 gotoxy(8,20);cprintf("6. Macam-macam Energi ");
 gotoxy(8,21);cprintf("a. Energi Potensial Gravitasi.  ");
 gotoxy(8,22);cprintf("Energi potensial adalah energi yang dimiliki akibat kedudukan benda tersebut terhadap bidang");
 gotoxy(8,23);cprintf("acuannya.Sedangkan yang dimaksud dengan bidang acuan adalah bidang yang diambil sebagai acuan");
 gotoxy(8,24);cprintf("tempat benda mempunyai energi potensial sama dengan nol. Sebagai contoh dari energi potensial,");
 gotoxy(8,25);cprintf("adalah energi pegas yang diregangkan, energi karet ketapel, energi air terjun.");

 gotoxy(8,27);cprintf("Energi Potensial gravitasi suatu benda yang bermassa m dan berada di dalam medan gravitasi");
 gotoxy(8,28);cprintf("benda lain yang bermassa M (dalam kasus ini diambil bumi yang bermassa M) : ");
 gotoxy(8,30);cprintf("-----------");
 gotoxy(8,31);cprintf("| Ep=GMm/r | Rumus (1.4)");
 gotoxy(8,32);cprintf("-----------");


 gotoxy(8,33);cprintf("Dengan titik acuan di tak hingga, dimana :  ");
 gotoxy(8,34);cprintf("G = tetapan gravitasi umum = 6,67 x 10-11 N m2 /kg2.");
 gotoxy(8,35);cprintf("M = massa bumi.");
 gotoxy(8,36);cprintf("m = massa benda.");
 gotoxy(8,37);cprintf("r = jarak benda dari pusat bumi.");Sleep(100);getch();clrscr();bingkai_materi();tampmateri();
 textcolor(18);
 gotoxy(8,20);cprintf("Apabila permukaan bumi sebagai bidang potensial nol dan ketinggian tidak melebihi 1000 km");
 gotoxy(8,21);cprintf("(percepatan gravitasi tidak terlalu berbeda, dianggap konstan), perumusan energi potensial,");
 gotoxy(8,22);cprintf("secara matematis dapat ditulis : ");
 gotoxy(8,23);cprintf("--------------");
 gotoxy(8,24);cprintf("| Ep = m g h | Rumus (1.5)");
 gotoxy(8,25);cprintf("--------------");

 gotoxy(8,27);cprintf("Keterangan : ");
 gotoxy(8,28);cprintf("Ep = energi potensial (joule).");
 gotoxy(8,29);cprintf("m = massa benda (kg).");
 gotoxy(8,30);cprintf("g = percepatan gravitasi (m/s2).");
 gotoxy(8,31);cprintf("h = ketinggian dari muka bumi (m).");Sleep(100);

 gotoxy(8,32);cprintf("b. Energi Potensial Pegas ");
 gotoxy(8,33);cprintf("Energi potensial pegas adalah energi potensial karena ");
 gotoxy(8,34);cprintf("adanya tarikan atau penekanan pegas ");
 gotoxy(8,35);cprintf("atau kemampuan suatu benda yang dihubungkan dengan");
 gotoxy(8,36);cprintf("pegas untuk berada pada suatu tempat");
 gotoxy(8,37);cprintf("karena panjang pegas berubah sepanjang x :");

 gotoxy(8,39);cprintf("---------------------");
 gotoxy(8,40);cprintf("| Epegas = 1/2 k.x2 |");
 gotoxy(8,41);cprintf("---------------------");Sleep(100);getch();clrscr();bingkai_materi();tampmateri();
 textcolor(18);
 gotoxy(8,20);cprintf("Dimana : ");
 gotoxy(8,21);cprintf("Epegas = energi potensial pegas (joule).");
 gotoxy(8,22);cprintf("k = konstanta pegas (N/m).");
 gotoxy(8,23);cprintf("x = perubahan panjang pegas (m).");

 gotoxy(8,25);cprintf("c. Energi Kinetik. ");
 gotoxy(8,26);cprintf("benda yang bermassa m dan bergerak dengan laju v,mempunyai energi kinetik ");
 gotoxy(8,27);cprintf("sebesar Ek dengan kata lain ,energi kinetik suatu benda adalah energi yang ");
 gotoxy(8,28);cprintf("dipunyai benda yang bergerak.Berarti setiap benda yang bergerak, mempunyai energi");
 gotoxy(8,29);cprintf("kinetik Ek , secara matematis,energi kinetik dapat ditulis sebagai:");

 gotoxy(8,30);cprintf("-----------------");
 gotoxy(8,31);cprintf("|  Ek = 1/2 mv2 |");
 gotoxy(8,32);cprintf("-----------------");

 gotoxy(8,34);cprintf("Dimana: ");
 gotoxy(8,35);cprintf("m = massa benda (kg).");
 gotoxy(8,36);cprintf("v = laju benda (m/s).");
 gotoxy(8,37);cprintf("Ek = energi kinetik (joule ).");


 gotoxy(10,40);cprintf("Tekan enter untuk kembali ke menu utama>>>>>>>>");Sleep(10);
 getch();menuutama();
}






//============================== LATIHAN SOAL ================================//


void soal1(){
bingkai_contohsoal();
tamp_contohsoal();
textcolor(14);
  char soal[100]=" Sebuah balok dengan massa M berada pada bidang datar, ";
  char soal2[100]=" balok tersebut ditarik oleh gaya sebesar 30 N ke kanan.";
  char soal3[100]=" Jika balok berpindah sejauh 50 cm maka hitunglah usaha";
  char soal4[100]="yang dilakukan oleh gaya tersebut!";

 for(int x=0;soal[x]!=NULL;x++){
   gotoxy(27+x,18);cprintf("%c",soal[x]);Sleep(100);
 }
 for(int x=0;soal2[x]!=NULL;x++){
   gotoxy(27+x,19);cprintf("%c",soal2[x]);Sleep(100);
 }
 for(int x=0;soal3[x]!=NULL;x++){
   gotoxy(27+x,20);cprintf("%c",soal3[x]);Sleep(100);
 }

 gotoxy(27,45);cprintf("Apakah anda ingin melanjutkan ke pembahasan<y/n>");char bil=getche();
 if(bil=='y' || bil=='Y'){
  pembahasan_soal1();
 }
 else{
  clrscr();
  contohsoal();
 }
}

void pembahasan_soal1(){
tamppembahasan();
bingkai_contohsoal();
textcolor(14);
 char answered[100]="Pembahasan";
 char answered1[100]="Diketahui";
 char answered2[100]="F = 30 N";
 char answered3[100]="s = 50 cm = 0,5 m";
 char answered4[100]="Ditanya: Usaha ( W )";
 char answered5[100]="Jawab:";
 char answered6[100]="W = F.s";
 char answered7[100]="W = 30 (0,5) = 15 Joule";


  for(int x=0;answered[x]!=NULL;x++){
   gotoxy(27+x,22);cprintf("%c",answered[x]);Sleep(100);
 }
 for(int x=0;answered1[x]!=NULL;x++){
   gotoxy(27+x,23);cprintf("%c",answered1[x]);Sleep(100);
 }
 for(int x=0;answered2[x]!=NULL;x++){
   gotoxy(27+x,24);cprintf("%c",answered2[x]);Sleep(100);
 }
  for(int x=0;answered3[x]!=NULL;x++){
   gotoxy(27+x,25);cprintf("%c",answered3[x]);Sleep(100);
 }
 for(int x=0;answered4[x]!=NULL;x++){
   gotoxy(27+x,26);cprintf("%c",answered4[x]);Sleep(100);
 }
 for(int x=0;answered5[x]!=NULL;x++){
   gotoxy(27+x,27);cprintf("%c",answered5[x]);Sleep(100);
 }
  for(int x=0;answered6[x]!=NULL;x++){
   gotoxy(27+x,28);cprintf("%c",answered6[x]);Sleep(100);
 }
 for(int x=0;answered7[x]!=NULL;x++){
   gotoxy(27+x,29);cprintf("%c",answered7[x]);Sleep(100);
 }gotoxy(27,45);cprintf("Apakah anda ingin melihat contoh soal lagi<y/n>");char bil=getche();
 if(bil=='y' || bil=='Y'){
  clrscr();
  contohsoal();
 }
 else{
  clrscr();
  menuutama();

 }

 getch();

}


void soalsoal2(){
bingkai_contohsoal();
textcolor(14);
	char soalsoal[100]="Sebuah benda dengan massa 4 kg berada pada bidang datar.";
	char soalsoal1[100]="Benda tersebut ditarik oleh gaya 50 N yang membentuk sudut";
	char soalsoal2[100]="60 A terhadap bidang horizontal";
	char soalsoal3[100]="Jika benda berpindah sejauh 4 m maka hitunglah usaha yang";
	char soalsoal4[100]="dilakukan oleh gaya tersebut!";

	for(int x=0;soalsoal[x]!=NULL;x++){
    gotoxy(27+x,18);cprintf("%c",soalsoal[x]);Sleep(100);
   }
   for(int x=0;soalsoal1[x]!=NULL;x++){
    gotoxy(27+x,19);cprintf("%c",soalsoal1[x]);Sleep(100);
   }
   for(int x=0;soalsoal2[x]!=NULL;x++){
    gotoxy(27+x,20);cprintf("%c",soalsoal2[x]);Sleep(100);
   }
   for(int x=0;soalsoal3[x]!=NULL;x++){
    gotoxy(27+x,21);cprintf("%c",soalsoal3[x]);Sleep(100);
   }
   for(int x=0;soalsoal4[x]!=NULL;x++){
    gotoxy(27+x,22);cprintf("%c",soalsoal4[x]);Sleep(100);
   }
   gotoxy(27,45);cprintf("Apakah anda ingin melanjutkan ke pembahasan<y/n>");char bil=getche();
 if(bil=='y' || bil=='Y'){

  pembahasan_soal2();
 }
 else{
  clrscr();
  contohsoal();
 }
}

void pembahasan_soal2(){
 tamppembahasan();
 bingkai_contohsoal();
 textcolor(14);
  char answ[100]="Pembahasan: ";
  char answ1[100]="Diketahui: ";
  char answ2[100]="m = 4 kg";
  char answ3[100]="F = 50 N";
  char answ4[100]="s = 4 m ";
  char answ5[100]="Ditanya: Usaha (W)";
  char answ6[100]="Jawab:";

  char answ7[100]="untuk gaya (F) yang membentuk sudut A terhadap perpindahan ";
  char answ8[100]="(s), maka gaya (F)";
  char answ9[100]="harus diuraikan terhadap bidang mendatar ";
  char answ10[100]="(searah dengan perpindahan).Sehingga rumus usaha menjadi: ";
  char answ11[100]="W = F cos A.s";
  char answ12[100]="Atau ";
  char answ13[100]="W = F . s cos A";
  char answ14[100]="W = 50 . 4 cos 60 A";
  char answ15[100]="W = 200 (0,5) = 100 N";
 	for(int x=0;answ[x]!=NULL;x++){
    gotoxy(27+x,23);cprintf("%c",answ[x]);Sleep(100);
   }
   for(int x=0;answ1[x]!=NULL;x++){
    gotoxy(27+x,24);cprintf("%c",answ1[x]);Sleep(100);
   }
   for(int x=0;answ2[x]!=NULL;x++){
    gotoxy(27+x,25);cprintf("%c",answ2[x]);Sleep(100);
   }
   for(int x=0;answ3[x]!=NULL;x++){
    gotoxy(27+x,26);cprintf("%c",answ3[x]);Sleep(100);
   }
   for(int x=0;answ4[x]!=NULL;x++){
    gotoxy(27+x,27);cprintf("%c",answ4[x]);Sleep(100);
   }for(int x=0;answ[x]!=NULL;x++){
    gotoxy(27+x,28);cprintf("%c",answ[x]);Sleep(100);
   }
   for(int x=0;answ5[x]!=NULL;x++){
    gotoxy(27+x,29);cprintf("%c",answ5[x]);Sleep(100);
   }
   for(int x=0;answ6[x]!=NULL;x++){
    gotoxy(27+x,30);cprintf("%c",answ6[x]);Sleep(100);
   }
   for(int x=0;answ7[x]!=NULL;x++){
    gotoxy(27+x,31);cprintf("%c",answ7[x]);Sleep(100);
   }
   for(int x=0;answ8[x]!=NULL;x++){
    gotoxy(27+x,32);cprintf("%c",answ8[x]);Sleep(100);
   }
   for(int x=0;answ9[x]!=NULL;x++){
    gotoxy(27+x,33);cprintf("%c",answ9[x]);Sleep(100);
   }
   for(int x=0;answ10[x]!=NULL;x++){
    gotoxy(27+x,34);cprintf("%c",answ10[x]);Sleep(100);
   }
   for(int x=0;answ11[x]!=NULL;x++){
    gotoxy(27+x,35);cprintf("%c",answ11[x]);Sleep(100);
   }
   for(int x=0;answ12[x]!=NULL;x++){
    gotoxy(27+x,36);cprintf("%c",answ12[x]);Sleep(100);
   }
   for(int x=0;answ13[x]!=NULL;x++){
    gotoxy(27+x,37);cprintf("%c",answ13[x]);Sleep(100);
   }
   for(int x=0;answ14[x]!=NULL;x++){
    gotoxy(27+x,38);cprintf("%c",answ14[x]);Sleep(100);
   }
   for(int x=0;answ15[x]!=NULL;x++){
    gotoxy(27+x,39);cprintf("%c",answ15[x]);Sleep(100);
   }
	gotoxy(27,45);cprintf("Apakah anda ingin melihat contoh soal lagi<y/n>");char bil=getche();
  if(bil=='y' || bil=='Y'){
    clrscr();
    contohsoal();
  }
  else{
    menuutama();
  }

}


void soalsoal3(){
 tamp_contohsoal();
 bingkai_contohsoal();
 textcolor(14);
  char question[100]="Sebuah gaya F = (2i + 4j) N melakukan usaha dengan";
  char question1[100]="titik tangkapnya berpindah menurut r = (5i + aj) m,";
  char question2[100]=" vektor i dan j berturut-turut adalah vektor satuan ";
  char question3[100]="yang searah dengan sumbu X dan sumbu Y pada koordinat Cartesius.";
  char question4[100]="bila usaha itu bernilai 30 Joule, maka hitunglah nilai a!";

  for(int x=0;question[x]!=NULL;x++){
   gotoxy(27+x,18);cprintf("%c",question[x]);Sleep(100);
 }
 for(int x=0;question1[x]!=NULL;x++){
   gotoxy(27+x,19);cprintf("%c",question1[x]);Sleep(100);
 }
 for(int x=0;question2[x]!=NULL;x++){
   gotoxy(27+x,20);cprintf("%c",question2[x]);Sleep(100);
 }
 for(int x=0;question3[x]!=NULL;x++){
   gotoxy(27+x,21);cprintf("%c",question3[x]);Sleep(100);
 }
 for(int x=0;question4[x]!=NULL;x++){
   gotoxy(27+x,22);cprintf("%c",question4[x]);Sleep(100);
 }


 gotoxy(27,45);cprintf("Apakah anda ingin melanjutkan ke pembahasan<y/n>");char bil=getche();
 if(bil=='y' || bil=='Y'){

  pembahasan_soal3();
 }
 else{
  clrscr();
  contohsoal();
 }
}


void pembahasan_soal3(){
 tamppembahasan();
 bingkai_contohsoal();
 textcolor(14);
	char jawab[100]="Pembahasan: ";
	char jawab1[100]="Diketahui: ";
	char jawab2[100]="F = (2i +4j) N";
	char jawab3[100]="r = (5i +aj) m";
	char jawab4[100]="Ditanya: a = ...? ";
	char jawab5[100]="Jawab:";
	char jawab6[100]="Usaha adalah perkalian titik (dot product) antara vektor gaya dengan";
   char jawab7[100]="vektor perpindahan.";
   char jawab8[100]="W = F .r ";
	char jawab9[100]="30 = (2i + 4j) . (5i + aj)";
	char jawab10[100]="30 = 10 + 4a";
	char jawab11[100]="30 - 10 = 4a";
	char jawab12[100]="4a = 20";
	char jawab13[100]="a = 5";

 for(int x=0;jawab[x]!=NULL;x++){
   gotoxy(27+x,23);cprintf("%c",jawab[x]);Sleep(100);
 }
 for(int x=0;jawab1[x]!=NULL;x++){
   gotoxy(27+x,24);cprintf("%c",jawab1[x]);Sleep(100);
 }
 for(int x=0;jawab2[x]!=NULL;x++){
   gotoxy(27+x,25);cprintf("%c",jawab2[x]);Sleep(100);
 }
  for(int x=0;jawab3[x]!=NULL;x++){
   gotoxy(27+x,26);cprintf("%c",jawab3[x]);Sleep(100);
 }
 for(int x=0;jawab4[x]!=NULL;x++){
   gotoxy(27+x,27);cprintf("%c",jawab4[x]);Sleep(100);
 }
 for(int x=0;jawab5[x]!=NULL;x++){
   gotoxy(27+x,28);cprintf("%c",jawab5[x]);Sleep(100);
 }
  for(int x=0;jawab6[x]!=NULL;x++){
   gotoxy(27+x,29);cprintf("%c",jawab6[x]);Sleep(100);
 }
 for(int x=0;jawab7[x]!=NULL;x++){
   gotoxy(27+x,30);cprintf("%c",jawab7[x]);Sleep(100);
 }
 for(int x=0;jawab8[x]!=NULL;x++){
   gotoxy(27+x,31);cprintf("%c",jawab8[x]);Sleep(100);
 }
 for(int x=0;jawab9[x]!=NULL;x++){
   gotoxy(27+x,32);cprintf("%c",jawab9[x]);Sleep(100);
 }
 for(int x=0;jawab10[x]!=NULL;x++){
   gotoxy(27+x,33);cprintf("%c",jawab10[x]);Sleep(100);
 }
  for(int x=0;jawab11[x]!=NULL;x++){
   gotoxy(27+x,34);cprintf("%c",jawab11[x]);Sleep(100);
 }
 for(int x=0;jawab12[x]!=NULL;x++){
   gotoxy(27+x,35);cprintf("%c",jawab12[x]);Sleep(100);
 }
 for(int x=0;jawab13[x]!=NULL;x++){
   gotoxy(27+x,36);cprintf("%c",jawab13[x]);Sleep(100);
 }
 gotoxy(27,45);cprintf("Apakah anda ingin melihat contoh soal lagi<y/n>");char bil=getche();
 if(bil=='y' || bil=='Y'){
  clrscr();
  contohsoal();
 }
 else{
  clrscr();
  menuutama();
 }

 getch();

}

void soalsoal4(){
tamp_contohsoal();
bingkai_contohsoal();
textcolor(14);

 char lt[100]="Sebuah bola besi massanya 0,2 kg dilempar vertikal keatas.";
 char lt1[100]="Energi potensial benda pada ketinggian maksimum adalah 40 J.";
 char lt2[100]="Bila g = 10 m/s2,maka hitunglah ketinggian maksimum yang ";
 char lt3[100]="dicapai bola tersebut!";

for(int x=0;lt[x]!=NULL;x++){
   gotoxy(27+x,18);cprintf("%c",lt[x]);Sleep(100);
 }
 for(int x=0;lt1[x]!=NULL;x++){
   gotoxy(27+x,19);cprintf("%c",lt1[x]);Sleep(100);
 }
 for(int x=0;lt2[x]!=NULL;x++){
   gotoxy(27+x,20);cprintf("%c",lt2[x]);Sleep(100);
 }
 for(int x=0;lt3[x]!=NULL;x++){
   gotoxy(27+x,21);cprintf("%c",lt3[x]);Sleep(100);
 }

 gotoxy(27,45);cprintf("Apakah anda ingin melanjutkan ke pembahasan<y/n>");char bil=getche();
 if(bil=='y' || bil=='Y'){
  pembahasan_soal4();
 }
 else{
  clrscr();
  contohsoal();
 }
}


void pembahasan_soal4(){
tamppembahasan();
bingkai_contohsoal();
textcolor(14);

	char pmb[100]="Pembahasan:";
	char pmb1[100]="Diketahui: ";
	char pmb2[100]="Ep = 40 Joule";
	char pmb3[100]="m = 0,2 kg";
	char pmb4[100]="g = 10 m/s²";
	char pmb5[100]="Ditanya: ketinggian maksimum (h)";
	char pmb6[100]="Jawab:";
	char pmb7[100]="Ep = m.g.h";
	char pmb8[100]="40 = 0,2 (10). h";
	char pmb9[100]="h = 40/2";
	char pmb10[100]="h = 20 meter";
 for(int x=0;pmb[x]!=NULL;x++){
   gotoxy(27+x,23);cprintf("%c",pmb[x]);Sleep(100);
 }
 for(int x=0;pmb1[x]!=NULL;x++){
   gotoxy(27+x,24);cprintf("%c",pmb1[x]);Sleep(100);
 }
 for(int x=0;pmb2[x]!=NULL;x++){
   gotoxy(27+x,25);cprintf("%c",pmb2[x]);Sleep(100);
 }
  for(int x=0;pmb3[x]!=NULL;x++){
   gotoxy(27+x,26);cprintf("%c",pmb3[x]);Sleep(100);
 }
 for(int x=0;pmb4[x]!=NULL;x++){
   gotoxy(27+x,27);cprintf("%c",pmb4[x]);Sleep(100);
 }
 for(int x=0;pmb5[x]!=NULL;x++){
   gotoxy(27+x,28);cprintf("%c",pmb5[x]);Sleep(100);
 }
  for(int x=0;pmb6[x]!=NULL;x++){
   gotoxy(27+x,29);cprintf("%c",pmb6[x]);Sleep(100);
 }
 for(int x=0;pmb7[x]!=NULL;x++){
   gotoxy(27+x,30);cprintf("%c",pmb7[x]);Sleep(100);
 }
 for(int x=0;pmb8[x]!=NULL;x++){
   gotoxy(27+x,31);cprintf("%c",pmb8[x]);Sleep(100);
 }
  for(int x=0;pmb9[x]!=NULL;x++){
   gotoxy(27+x,32);cprintf("%c",pmb9[x]);Sleep(100);
 }
 for(int x=0;pmb10[x]!=NULL;x++){
   gotoxy(27+x,33);cprintf("%c",pmb10[x]);Sleep(100);
 }


 gotoxy(27,45);cprintf("Apakah anda ingin melanjutkan program<y/n>");char bil=getche();
 if(bil=='y' || bil=='Y'){
  clrscr();
  menuutama();
 }
 else{
  clrscr();
  keluar();

 }
getch();






}




//================================= KELUAR ===================================//
 void keluar(){
 clrscr();
 textcolor(18);
   gotoxy(15,20);cprintf(" MMMM    MMMM     AA     TTTTTTTT UU    UU RRRRRRR   ");Sleep(100);
   gotoxy(15,21);cprintf(" MM MM  MM MM    AAAA       TT    UU    UU RR     RR ");Sleep(100);
   gotoxy(15,22);cprintf(" MM  MMMM  MM   AAAAAA      TT    UU    UU RRRRRRR   ");Sleep(100);
   gotoxy(15,23);cprintf(" MM        MM  AA    AA     TT    UU    UU RR  RR    ");Sleep(100);
   gotoxy(15,24);cprintf(" MM        MM AA      AA    TT    UUUUUUUU RR   RR   ");Sleep(100);


   gotoxy(15,27);cprintf(" SSSSSSSS UU    UU WW            WW UU    UU NNNN    NN  ");Sleep(100);
   gotoxy(15,28);cprintf(" SS       UU    UU  WW          WW  UU    UU NN NN   NN  ");Sleep(100);
   gotoxy(15,29);cprintf(" SSSSSSSS UU    UU   WW        WW   UU    UU NN  NN  NN  ");Sleep(100);
   gotoxy(15,30);cprintf("       SS UU    UU    WW  WW  WW    UU    UU NN   NN NN  ");Sleep(100);
   gotoxy(15,31);cprintf(" SSSSSSSS UUUUUUUU     WWW  WWW     UUUUUUUU NN    NNNN  ");Sleep(100);

 exit(0);
 }

main(){

//daftar();
bingkai_awal();
//bingkai_tampilankedua();
//bingkai_latsoal();
//bingkai_bayar();
//bingkaimenuutama();
//menuutama();
//bingkai_log();
getch();
}
