////////////////////////////////////////////////////////////////////////////////
//                        UJIAN AKHIR SEMESTER                                //
//               PROJECT PEMBUATAN CUCI STEAM MOTOR DAN MOBIL                 //
//                      			 OLEH:                                       //
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
void logo();
void judul();
void harga();
void login();
void background();
void background2();
void bingkai();
void bingkai1();
void bingkai2();
void bingkai3();
void tentang();
void motormatic();
void motorbiasa();
void motortrail();
void motorsport();
void motorsport1();
void motor();
void motorbebek();
void mobil();
void mobiltravel();
void mobilsport();
void mobilkeluarga();
void bayar();
void keluar();
void menu();
void cuci1();
void balik();
bool validasiangka(char a[]);
////////////////////////////////////////////////////////////////////////////////
//////////////////////////// V A R I A B E L  INT //////////////////////////////
////////////////////////////////////////////////////////////////////////////////
int total,Tentang,pilih,pilih2;
int motor1,mobil1,motor2,mobil2,motor3,mobil3;
int bay,cuci;
int x=1;
int Keluar,kembali;
int tam;
char uang[50];

////////////////////////////////////////////////////////////////////////////////
/////////////////////////// V A R I A B E L  CHAR //////////////////////////////
////////////////////////////////////////////////////////////////////////////////
char tr;
char user[20];
char pass[20];


void logo(){
textcolor(2);
textbackground(0);
for(int a=1;a<=33;a++){
	for(int b=1;b<=7;b++){
   	gotoxy(a,b);cprintf("%c",219);
	}
}
gotoxy(10,2);cprintf("Selamat datang ");
gotoxy(17,3);cprintf("di");
gotoxy(10,4);cprintf("Duta  Kinclong ");
}



void login(){

   do{
   clrscr();
   background2();
	bingkai2();
   logo();
   textcolor(2);
   textbackground(7);

   gotoxy(57,20); cprintf("Login");
   gotoxy(45,21); cprintf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	gotoxy(45,23); cprintf("Username : ");gotoxy(45+12,23); gets(user);
   gotoxy(45,25); cprintf("Password : ");gotoxy(45+12,25); gets(pass);
   	if(strcmp(user,"strix")==0 && strcmp(pass,"200301")==0){
			char nama[]={"Login Berhasil!!!!!!!!!!!!!!!"};
         	for(int a=0;a<strlen(nama);a++){
            textcolor(2);
            	gotoxy(45+a,27);cprintf("%c",nama[a]);Sleep(100);
            }
            clrscr();
         menu();
		}else{
			gotoxy(40,28);cprintf("Username Atau Password salah!!!");
         gotoxy(40,29);cprintf("Tekan Sembarang untuk Ulangi Inputan");

         getche();


      }
   }while(true);


}

void menu(){
do{
logo();
background2();
textbackground(7);
textcolor(2);
	gotoxy(30,1);cprintf(" ###       ###  #############  ###     ###  ###        ### ");
	gotoxy(30,2);cprintf(" ####     ####  #############  ####    ###  ###        ### ");
	gotoxy(30,3);cprintf(" ###### ######  ###            #####   ###  ###        ### ");
	gotoxy(30,4);cprintf(" ###  ###  ###  #########      ####### ###  ###        ### ");
	gotoxy(30,5);cprintf(" ###   #   ###  #########      ### #######  ###        ### ");
	gotoxy(30,6);cprintf(" ###       ###  ###            ###   #####  ###        ### ");
	gotoxy(30,7);cprintf(" ###       ###  #############  ###    ####  ############## ");
	gotoxy(30,8);cprintf(" ###       ###  #############  ###     ###   ############  ");

gotoxy(2,26);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(2,27);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(2,28);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(2,29);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(2,30);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
char nama[]={"1. Daftar Harga Cuci"};
	for(int a=0;a<strlen(nama);a++){
		textcolor(2);
		gotoxy(2+3+a,28);cprintf("%c ",nama[a]);Sleep(100);
   }
gotoxy(30+2,26);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(30+2,27);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(30+2,28);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(30+2,29);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(30+2,30);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);

char nama1[]={"2. Cuci"};
	for(int a=0;a<strlen(nama1);a++){
		textcolor(2);
		gotoxy(30+5+a,28);cprintf("%c ",nama1[a]);Sleep(100);
   }
gotoxy(68-2,26);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(68-2,27);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(68-2,28);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(68-2,29);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(68-2,30);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);

char nama2[]={"3. Tentang"};
	for(int a=0;a<strlen(nama2);a++){
		textcolor(2);
		gotoxy(68+1+a,28);cprintf("%c ",nama2[a]);Sleep(100);
	}
gotoxy(95,26);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(95,27);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(95,28);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(95,29);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(95,30);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);

char nama3[]={"4. Keluar"};
	for(int a=0;a<strlen(nama3);a++){
		textcolor(2);
		gotoxy(95+3+a,28);cprintf("%c ",nama3[a]);Sleep(100);
	}

    gotoxy(52,32); cprintf("Masukan pilihan : ");pilih=getche();

   if(pilih=='1'){
   	harga();
   }else if(pilih=='2'){
      cuci1();
   }else if(pilih=='3'){
   	tentang();
   }else if(pilih=='4'){
   	keluar();
   }else if(pilih=='0'){
   	menu();
   }else{
   	gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!!");
      gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi Inputan");
      getche();
      clrscr();
   }
}while(true);


}
void background(){
textbackground(7);
textcolor(2);
gotoxy(35+5,1);cprintf(" ###    ###   ######   #######   ####  ###      ");
gotoxy(35+5,2);cprintf(" ####  ####  ########  ########  ####  ###      ");
gotoxy(35+5,3);cprintf(" ##########  ##    ##  ##    ##  ####  ###      ");
gotoxy(35+5,4);cprintf(" ### ## ###  ##    ##  #######   ####  ###      ");
gotoxy(35+5,5);cprintf(" ###    ###  ##    ##  #######   ####  ###      ");
gotoxy(35+5,6);cprintf(" ###    ###  ##    ##  ##    ##  ####  ###      ");
gotoxy(35+5,7);cprintf(" ###    ###  ########  ########  ####  ######## ");
gotoxy(35+5,8);cprintf(" ###    ###   ######   #######   ####  ######## ");

gotoxy(2,20);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(2,21);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(2,22);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(2,23);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(2,24);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);

gotoxy(95,20);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(95,21);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(95,22);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(95,23);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(95,24);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);

gotoxy(50,20);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(50,21);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(50,22);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(50,23);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(50,24);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);

gotoxy(50,30);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);
gotoxy(50,31);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(50,32);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(50,33);cprintf("%c                       %c",219,219);Sleep(100);
gotoxy(50,34);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(100);


}
void harga(){
	do{
   	background2();
      bingkai2();

      textbackground(7);
      textcolor(2);
      gotoxy(30,1);cprintf("##       ##       ##       ##########  ############      ##     ");
		gotoxy(30,2);cprintf("##       ##      ####      ########### ############     ####    ");
		gotoxy(30,3);cprintf("##       ##     ##  ##     ###    #### ##              ##  ##   ");
		gotoxy(30,4);cprintf("###########    ##    ##    ###    #### ##  ########   ##    ##  ");
		gotoxy(30,5);cprintf("###########   ##########   ##########  ##  ########  ########## ");
		gotoxy(30,6);cprintf("##       ##  ############  ########### ##        ## ############");
		gotoxy(30,7);cprintf("##       ##  ##        ##  ###     ### ############ ##        ##");
		gotoxy(30,8);cprintf("##       ##  ##        ##  ###     ### ############ ##        ##");


   	gotoxy(32,17+1);cprintf("Motor Matic Cuci Biasa                        Rp. 12.000");
      gotoxy(32,18+1);cprintf("Motor Matic Cuci Salju                        Rp. 16.000");
      gotoxy(32,19+1);cprintf("Motor Bebek Biasa Cuci Biasa                  Rp. 13.000");
      gotoxy(32,20+1);cprintf("Motor Bebek Biasa Cuci Salju                  Rp. 17.000");
      gotoxy(32,21+1);cprintf("Motor Trail Cuci Biasa                        Rp. 20.000");
      gotoxy(32,22+1);cprintf("Motor Trail Cuci Salju                        Rp. 25.000");
      gotoxy(32,23+1);cprintf("Motor Sport Cuci Biasa                        Rp. 16.000");
      gotoxy(32,24+1);cprintf("Motor Sport Cuci Salju                        Rp. 20.000");
      gotoxy(32,25+1);cprintf("Mobil Sport Cuci Biasa                        Rp. 60.000");
      gotoxy(32,26+1);cprintf("Mobil Sport Cuci Salju                        Rp. 75.000");
      gotoxy(32,27+1);cprintf("Mobil Keluarga Cuci Biasa                     Rp. 40.000");
      gotoxy(32,28+1);cprintf("Mobil Keluarga Cuci Salju                     Rp. 50.000");
      gotoxy(32,29+1);cprintf("Mobil Travel Cuci Biasa                       Rp. 80.000");
      gotoxy(32,30+1);cprintf("Mobil Travel Cuci Salju                       Rp. 100.000");
      gotoxy(32,31+1);cprintf("Mobil Truk Cuci Biasa                         Rp. 100.000");
      gotoxy(32,32+1);cprintf("Mobil Truk Cuci Salju                         Rp. 150.000");

      gotoxy(50,35);cprintf("Tekan 0 Untuk Kembali : ");kembali=getche();
      	if(kembali=='0'){
      		clrscr();
	      	menu();
   	   }else{
      		gotoxy(47,36);cprintf("INPUTAN SALAH!!!!!!!");
         	gotoxy(47,37);cprintf("Tekan Sembarang untuk Ulangi Inputan");
	         getche();
      	   clrscr();

      	}
      }while(true);
}
void background2(){
	for(int a=0; a<=40 ; a++){
   	for(int b=0; b<=120 ; b++){
   	textcolor(3);
  		 gotoxy(b,a);cprintf("%c",219);
   	}
   }logo();
}

void bingkai2(){
for(int a=30; a<=90 ; a++){
   	for(int b=15; b<=38 ; b++){
   	textcolor(7);
  		 gotoxy(a,b); cprintf("%c",219);
   	}
   }logo();


}
void bingkai(){
logo();
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

void bingkai1(){
logo();
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

gotoxy(35,1);cprintf(" ##    ##   ######   ########   ######   #######  ");
gotoxy(35,2);cprintf(" ###  ###  ########  ########  ########  ######## ");
gotoxy(35,3);cprintf(" ########  ##    ##  ########  ##    ##  ##   ### ");
gotoxy(35,4);cprintf(" ## ## ##  ##    ##     ##     ##    ##  ##   ##  ");
gotoxy(35,5);cprintf(" ##    ##  ##    ##     ##     ##    ##  #######  ");
gotoxy(35,6);cprintf(" ##    ##  ##    ##     ##     ##    ##  ######## ");
gotoxy(35,7);cprintf(" ##    ##  ########     ##     ########  ##    ## ");
gotoxy(35,8);cprintf(" ##    ##   ######      ##      ######   ##    ## ");



}

void bingkai3(){
logo();
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

gotoxy(35,1);cprintf(" ##    ##   ######   #######   ##  ##       ");
gotoxy(35,2);cprintf(" ###  ###  ########  ########  ##  ##       ");
gotoxy(35,3);cprintf(" ########  ##    ##  ##    ##  ##  ##       ");
gotoxy(35,4);cprintf(" ## ## ##  ##    ##  #######   ##  ##       ");
gotoxy(35,5);cprintf(" ##    ##  ##    ##  #######   ##  ##       ");
gotoxy(35,6);cprintf(" ##    ##  ##    ##  ##    ##  ##  ##       ");
gotoxy(35,7);cprintf(" ##    ##  ########  ########  ##  ######## ");
gotoxy(35,8);cprintf(" ##    ##   ######   #######   ##  ######## ");

}


void cuci1(){

   do{
	background2();
	bingkai();
	char nama[]={"1. Motor "};
			for(int a=0;a<strlen(nama);a++){
				textcolor(2);
				gotoxy(23+a,22);cprintf("%c ",nama[a]);
      	}

      char nama2[]={"2. Mobil"};
      	for(int a=0;a<strlen(nama2);a++){
         	textcolor(2);
            gotoxy(83+a,22);cprintf("%c",nama2[a]);
         }

       gotoxy(48,37);cprintf("Tekan 0 Untuk Kembali Ke Menu Sebelumnya");
       gotoxy(52,32);cprintf("Masukan pilihan : ");pilih2=getche();

      if(pilih2=='1'){
         clrscr();
      	motor();
      }else if(pilih2=='2'){
			clrscr();
      	mobil();
      }else if(pilih2=='0'){
       	menu();
      }else{
      	gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!");
         gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi Inputan");
         getche();
         clrscr();

      }
   }while(true);

}




void motor(){
	do{
   clrscr();
   background2();
   bingkai1();
	char nama[]={"1. Motor Bebek"};
	for(int a=0;a<strlen(nama);a++){
		textcolor(2);
		gotoxy(23+a,22);cprintf("%c ",nama[a]);
   }

   char nama2[]={"2. Motor Sport"};
	for(int a=0;a<strlen(nama2);a++){
		textcolor(2);
		gotoxy(83+a,22);cprintf("%c",nama2[a]);
   }
      gotoxy(48,35);cprintf("Tekan 0 Untuk Kembali Ke Menu Sebelumnya ");
   	gotoxy(52,32);cprintf("Masukan pilihan : ");motor1=getche();
      clrscr();
   	if(motor1=='1'){
         motorbebek();
         clrscr();
   	}else if(motor1=='2'){
      	motorsport();
         clrscr();
		}else if(motor1=='0'){
         cuci1();
   	}else{
      	gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi Inputan");
   		gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!!");
         getche();

      }

	}while(true);
};
void motorbebek(){
	do{
   	clrscr();
		background2();
      bingkai1();

         char nama[]={"1. Motor Matic"};
				for(int a=0;a<strlen(nama);a++){
				textcolor(2);
				gotoxy(23+a,22);cprintf("%c ",nama[a]);
		   }

         char nama2[]={"2. Motor Bebek Biasa"};
				for(int a=0;a<strlen(nama2);a++){
				textcolor(2);
				gotoxy(83+a,22);cprintf("%c",nama2[a]);
		   }
         gotoxy(48,35);cprintf("Tekan 0 Untuk Kembali Ke Menu Sebelumnya ");
         gotoxy(52,32);cprintf("Masukan pilihan : ");motor2=getche();

            clrscr();
      		if(motor2=='1'){
            	motormatic();
               clrscr();
            }else if(motor2=='2'){
            	motorbiasa();
               clrscr();
            }else if(motor2=='0'){
            	motor();
               clrscr();
            }else{
            	gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi Inputan");
            	gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!!");
            	getche();
            	clrscr();
            }
   }while(true);
}

void motorsport(){
	do{
   	background2();
	   bingkai1();
   	char nama[]={"1. Motor Trail"};
      	for(int a=0;a<strlen(nama);a++){
         	textcolor(2);
				gotoxy(23+a,22);cprintf("%c ",nama[a]);
		   }

      char nama2[]={"2. Motor Sport"};
      	for(int a=0;a<strlen(nama2);a++){
				textcolor(2);
				gotoxy(83+a,22);cprintf("%c",nama2[a]);
		   }
         gotoxy(48,35);cprintf("Tekan 0 Untuk Kembali Ke Menu Sebelumnya ");
         gotoxy(52,32);cprintf("Masukan pilihan : ");motor2=getche();

            clrscr();
      		if(motor2=='1'){
            	motortrail();
               clrscr();
            }else if(motor2=='2'){
            	motorsport1();
               clrscr();
            }else if(motor2=='0'){
            	motor();
               clrscr();
            }else{
               gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi Inputan");
            	gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!!");
            	getche();
            	clrscr();
            }
   }while(true);
}

void motormatic(){
	do{
   	background2();
      bingkai1();
      char nama[]={"1. Cuci Biasa"};
      for(int a=0;a<strlen(nama);a++){
      	textcolor(2);
         gotoxy(23+a,22);cprintf("%c ",nama[a]);
      }
      char nama2[]={"2. Cuci Salju"};
   	   for(int a=0;a<strlen(nama2);a++){
	      textcolor(2);
      	gotoxy(83+a,22);cprintf("%c",nama2[a]);
      }
      gotoxy(48,35);cprintf("Tekan 0 Untuk Kembali Ke Menu Sebelumnya ");
      gotoxy(52,32);cprintf("Masukan pilihan : ");motor3=getche();
      	clrscr();
         if(motor3=='1'){
         	cuci=12000;
            bayar();
         }else if(motor3=='2'){
         	cuci=16000;
            bayar();
         }else if(motor3=='0'){
         	motorbebek();
            clrscr();
         }else{
         	gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!!");
            gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi Inputan");
            getche();
            clrscr();
         }
	}while(true);
}
void motorbiasa(){
	do{
   	background2();
      bingkai1();
      char nama[]={"1. Cuci Biasa"};
      for(int a=0;a<strlen(nama);a++){
      	textcolor(2);
         gotoxy(23+a,22);cprintf("%c ",nama[a]);
      }
      char nama2[]={"2. Cuci Salju"};
   	   for(int a=0;a<strlen(nama2);a++){
	      textcolor(2);
      	gotoxy(83+a,22);cprintf("%c",nama2[a]);
      }
      gotoxy(48,35);cprintf("Tekan 0 Untuk Kembali Ke Menu Sebelumnya ");
      gotoxy(52,32);cprintf("Masukan pilihan : ");motor3=getche();
      	clrscr();
         if(motor3=='1'){
         	cuci=13000;
            bayar();
         }else if(motor3=='2'){
         	cuci=17000;
         	bayar();
         }else if(motor3=='0'){
         	motorbebek();
            clrscr();
         }else{
         	gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!!");
         	gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi Inputan");
         	getche();
   			clrscr();
         }
	}while(true);
}

void motortrail(){
	do{
   	background2();
      bingkai1();
      char nama[]={"1. Cuci Biasa"};
      for(int a=0;a<strlen(nama);a++){
      	textcolor(2);
         gotoxy(23+a,22);cprintf("%c ",nama[a]);
      }
      char nama2[]={"2. Cuci Salju"};
   	   for(int a=0;a<strlen(nama2);a++){
	      textcolor(2);
      	gotoxy(83+a,22);cprintf("%c",nama2[a]);
      }
      gotoxy(48,35);cprintf("Tekan 0 Untuk Kembali Ke Menu Sebelumnya ");
      gotoxy(52,32);cprintf("Masukan pilihan : ");motor3=getche();
      	clrscr();
         if(motor3=='1'){
         	cuci=20000;
            bayar();
         }else if(motor3=='2'){
         	cuci= 25000;
            bayar();
         }else if(motor3=='0'){
         	motorsport();
            clrscr();
         }else{
         	gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!!");
         	gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi Inputan");
         	getche();
   			clrscr();
         }
	}while(true);
}
void motorsport1(){
	do{
   	background2();
      bingkai1();
      char nama[]={"1. Cuci Biasa"};
      for(int a=0;a<strlen(nama);a++){
      	textcolor(2);
         gotoxy(23+a,22);cprintf("%c ",nama[a]);
      }
      char nama2[]={"2. Cuci Salju"};
   	   for(int a=0;a<strlen(nama2);a++){
	      textcolor(2);
      	gotoxy(83+a,22);cprintf("%c",nama2[a]);
      }
      gotoxy(48,35);cprintf("Tekan 0 Untuk Kembali Ke Menu Sebelumnya ");
      gotoxy(52,32);cprintf("Masukan pilihan : ");motor3=getche();
      	clrscr();
         if(motor3=='1'){
         	cuci= 16000;
            bayar();
         }else if(motor3=='2'){
         	cuci= 20000;
         	bayar();
         }else if(motor3=='0'){
         	motorsport();
            clrscr();
         }else{
         	gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!!");
         	gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi Inputan");
         	getche();
   			clrscr();
         }
	}while(true);
}




void mobil(){
      	do{
         background2();
         background();
   		char nama1[]={"1. Mobil Sport"};
				for(int a=0;a<strlen(nama1);a++){
					textcolor(2);
					gotoxy(5+a,22);cprintf("%c ",nama1[a]);
		   	}

         char nama2[]={"2. Mobil Keluarga"};
				for(int a=0;a<strlen(nama2);a++){
					textcolor(2);
					gotoxy(53+a,22);cprintf("%c",nama2[a]);
		   	}
         char nama3[]={"3. Mobil TraveL"};
				for(int a=0;a<strlen(nama3);a++){
				textcolor(2);
				gotoxy(95+3+a,22);cprintf("%c ",nama3[a]);
		   }
         	gotoxy(52,32);cprintf("Masukan pilihan : ");mobil2=getche();
      		if(mobil2=='1'){
            	mobilsport();
               clrscr();
            }else if(mobil2=='2'){
            	mobilkeluarga();
               clrscr();
            }else if(mobil2=='3'){
            	mobiltravel();
               clrscr();
      		}else{
         		gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi Inputan");
	         	gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!!");
	         	getche();
	            clrscr();
   	      }
	}while(true);

};


void mobilsport(){
	do{
   	clrscr();
   	background2();
      bingkai3();
      char nama[]={"1. Cuci Biasa"};
      	for(int a=0;a<strlen(nama);a++){
         	textcolor(2);
            gotoxy(23+a,22);cprintf("%c ",nama[a]);
         }
      char nama2[]={"2. Cuci Salju"};
      	for(int a=0;a<strlen(nama2);a++){
         	textcolor(2);
            gotoxy(83+a,22);cprintf("%c",nama2[a]);
         }
         gotoxy(48,35);cprintf("Tekan 0 Untuk Kembali Ke Menu Sebelumnya ");
         gotoxy(52,32);cprintf("Masukan Pilihan : ");mobil3=getche();
         if(mobil3=='1'){
         	cuci=60000;
            bayar();
            clrscr();
         }else if(mobil3=='2'){
         	cuci= 75000;
            bayar();
            clrscr();
         }else if(mobil3=='0'){
         	mobil();
            clrscr();
         }else{
         	gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi Inputan");
         	gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!!");
         	getche();

         }
	}while(true);
}

void mobilkeluarga(){
	do{
   	clrscr();
   	background2();
      bingkai3();
      char nama[]={"1. Cuci Biasa"};
      	for(int a=0;a<strlen(nama);a++){
         	textcolor(2);
            gotoxy(23+a,22);cprintf("%c ",nama[a]);
         }
      char nama2[]={"2. Cuci Salju"};
      	for(int a=0;a<strlen(nama2);a++){
         	textcolor(2);
            gotoxy(83+a,22);cprintf("%c",nama2[a]);
         }
         gotoxy(48,35);cprintf("Tekan 0 Untuk Kembali Ke Menu Sebelumnya ");
         gotoxy(52,32);cprintf("Masukan Pilihan : ");mobil3=getche();
         if(mobil3=='1'){
         	cuci=50000;
            bayar();
            clrscr();
         }else if(mobil3=='2'){
         	cuci=65000;
            bayar();
            clrscr();
         }else if(mobil3=='0'){
         	mobil();
            clrscr();
         }else{
         	gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi Inputan");
         	gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!!");
         	getche();
         }
	}while(true);
}

void mobiltravel(){
	do{
   	background2();
      bingkai3();
      char nama[]={"1. Cuci Biasa"};
      	for(int a=0;a<strlen(nama);a++){
         	textcolor(2);
            gotoxy(23+a,22);cprintf("%c ",nama[a]);
         }
      char nama2[]={"2. Cuci Salju"};
      	for(int a=0;a<strlen(nama2);a++){
         	textcolor(2);
            gotoxy(83+a,22);cprintf("%c",nama2[a]);
         }
         gotoxy(48,35);cprintf("Tekan 0 Untuk Kembali Ke Menu Sebelumnya ");
         gotoxy(52,32);cprintf("Masukan Pilihan : ");mobil3=getche();
         if(mobil3=='1'){
         	cuci=80000;
            bayar();
            clrscr();
         }else if(mobil3=='2'){
         	cuci= 100000;
            bayar();
            clrscr();
         }else if(mobil3=='0'){
         	mobil();
            clrscr();
         }else{
         	gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi Inputan");
         	gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!!");
         	getche();
            clrscr();
         }
	}while(true);
}
void tentang(){
   do{
   clrscr();
   background2();
   bingkai2();

   textcolor(2);
   textbackground(7);

   gotoxy(25, 21);cprintf("Aplikasi ini dibuat untuk memenuhi salah satu tugas pelatihan Pemrograman,");
   gotoxy(32, 22);cprintf("dimana tugas ini menjadi nilai UAS di pelatihan Pemrograman");

   gotoxy(52,32);cprintf("Tekan 0 Untuk Kembali : ");pilih2=getche();
      if(pilih2=='0'){
      	clrscr();
      	menu();
      }else{
      	gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi");
         gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!!");
         getche();

      }
    }while(true);

};



void keluar(){
   char keluar;
   do{
   clrscr();
   background2();
   textcolor(2);
   textbackground(7);

		gotoxy(43,20);cprintf("Apakah Anda Ingin Keluar (y/t) : ");keluar=getche();
   		if(keluar=='y'){
            gotoxy(43,25); cprintf("Aplikasi Akan Keluar dalam ");
            for(int a=5 ; a>=0 ; a--){
            	gotoxy(72,25); cprintf("%d detik", a);
	            Sleep(1000);
      	   }
            exit(0);
		   }else if(keluar=='t'){
         	clrscr();
            menu();
		   }else{
         	gotoxy(52,32);cprintf("INPUTAN SALAH!!!!!!!!");
      		gotoxy(52,33);cprintf("Tekan Sembarang untuk Ulangi Inputan");
	         getche();
            clrscr();

         }

   }while(true);
}
/////////////////////////// VALIDASI NOMINAL ///////////////////////////////////
bool validasiangka(char a[]){

   for(int i=0;a[x]!=NULL;i++){
   	if(!(a[i]>='0'&&a[i]<='9')){
		 return false;
      }
   }
   return true;
};


void bayar(){
do{
		clrscr();
      background2();

      textcolor(2);
   	textbackground(7);

		gotoxy(52,33);cprintf("Total : %d",cuci);
      gotoxy(52,34);cprintf("Masukan Nominal : Rp. ");gets(uang);


        if(validasiangka(uang)==0){
          tam=atoi(uang);

	     	if(tam>cuci){

	   		total=tam-cuci;
         	gotoxy(52,35);cprintf("Kembalian : %d",total);
		      char nama[]={"Terima Kasih Telah Mencuci Kendaraan Anda!!!!!!!"};
   	      	for(int a=0;a<strlen(nama);a++){
      	         gotoxy(52+a,36);cprintf("%c",nama[a]);Sleep(100);
	            }
   	      char nama1[]={"Silahkan Datang Kembali!!!!!!!!!!"};
      	   	for(int a=0;a<strlen(nama1);a++){
         	      gotoxy(52+a,37);cprintf("%c",nama1[a]);Sleep(100);
	            }
   	         getche();
      	      clrscr();
         	   balik();
	   	}else if(tam==cuci){
		   	gotoxy(52,34);cprintf("Tidak ada Kembalian !!!!!!");
      		char nama[]={"Terima Kasih Telah Mencuci Kendaraan Anda!!!!!!"};
         		for(int a=0;a<strlen(nama);a++){
            	   gotoxy(52+a,35);cprintf("%c",nama[a]);Sleep(100);
	            }
   	      char nama1[]={"Silahkan Datang Kembali!!!!!!!!!!"};
      	   	for(int a=0;a<strlen(nama1);a++){
         	      gotoxy(52+a,36);cprintf("%c",nama1[a]);Sleep(100);
            	}
   	      getche();
	   	   balik();
	   	}else if(tam<cuci){
	   		gotoxy(52,35);cprintf("Uang anda kurang!!!!");
	         gotoxy(52,36);cprintf("Silahkan Ulangi Pembayaran !!!!!");
				getche();

	   	}else{
         	gotoxy(52,35);cprintf("Inputan Salah");
				gotoxy(52,36);cprintf("Silahkan Ulangi Pembayaran !!!!!");

   	      getche();
      	   clrscr();
   		}
        }else{
      	gotoxy(52,35);cprintf("Just Can Input The Number");
     	 	getch();
     	 	bayar();


        }

}while(true);

};
void balik(){
char Balik;
	gotoxy(52,35);cprintf("Apakah Ingin Mencuci Kembali ? (y/t)");Balik=getche();

   if(Balik=='y'){
   	login();
	}else if(Balik=='t'){
   	keluar();
   }else{
   	gotoxy(52,35);cprintf("Inputan Salah");
      gotoxy(52,36);cprintf("Tekan Sembarang untuk Ulangi Inputan");
   }


}



main(){
system("color 72");
login();
//bayar();


getch();
}
