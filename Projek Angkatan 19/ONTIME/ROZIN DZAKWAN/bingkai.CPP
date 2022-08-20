#include <stdio.h>
#include <conio.h>
#include <windows.h>
////////////////////////////////////////////////////////////////////////////////
//											PARAMETER				   							//
////////////////////////////////////////////////////////////////////////////////
void bingkaiawal();
void bingkailogin();
void login();
void menuawal();
void bingkaiutama();
void pembelian();
void bingkai7();
void bingkai4();
void menucarrier();
void menucarrier();
void careig();
void carrei();
void carav();
void carcoz();
void menujaket();
void jakeig();
void jakrei();
void jakav();
void jakcoz();
void menusepatu();
void sepeig();
void seprei();
void sepav();
void sepcoz();
void menucelana();
void celeig();
void celrei();
void celav();
void celcoz();
void menutopi();
void menusleepingbag();
void menutenda();
void tencon();
void teneig();
void tencoz();
void tenrei();
void tenav();
void tentnf();
void tendet();
void bingkaijadi();
void bingkailain();
void tampil_transaksi();
void bingkai7harga();
void selesai();
void tentang();
////////////////////////////////////////////////////////////////////////////////
//												LAIN-LAIN                                 //
////////////////////////////////////////////////////////////////////////////////
int cek=0;
int u=0;
int totalharga=0;
int pilih1;
int uangakhir;
char pilih,yakin,lagi,jadi,lain;
char satuInput();
char totalbarang[50][50];
bool cek2 = true;
bool cek1 = true;
char uang[50][50];
bool valangka(char uang[]);
////////////////////////////////////////////////////////////////////////////////
//											TAMPUNGAN												//
////////////////////////////////////////////////////////////////////////////////
int tamp_total_tas_eiger[4]={0,0,0,0};
int tamp_total_tas_rei[4]={0,0,0,0};
int tamp_total_tas_avtech[4]={0,0,0,0};
int tamp_total_tas_cozmeed[4]={0,0,0,0};
int tamp_total_jaket_eiger[4]={0,0,0,0};
int tamp_total_jaket_rei[4]={0,0,0,0};
int tamp_total_jaket_avtech[4]={0,0,0,0};
int tamp_total_jaket_cozmeed[4]={0,0,0,0};
int tamp_total_sepatu_eiger[4]={0,0,0,0};
int tamp_total_sepatu_rei[4]={0,0,0,0};
int tamp_total_sepatu_avtech[4]={0,0,0,0};
int tamp_total_sepatu_cozmeed[4]={0,0,0,0};
int tamp_total_celana_eiger[4]={0,0,0,0};
int tamp_total_celana_rei[4]={0,0,0,0};
int tamp_total_celana_avtech[4]={0,0,0,0};
int tamp_total_celana_cozmeed[4]={0,0,0,0};
int tamp_total_tenda_eiger[4]={0,0,0,0};
int tamp_total_tenda_rei[4]={0,0,0,0};
int tamp_total_tenda_avtech[4]={0,0,0,0};
int tamp_total_tenda_cozmeed[4]={0,0,0,0};
int tamp_total_topi[7]={0,0,0,0,0,0,0};
int tamp_total_sleepingbag[7]={0,0,0,0,0,0,0};
int tamp_tas_eiger[4]={0,0,0,0};
int tamp_tas_rei[4]={0,0,0,0};
int tamp_tas_avtech[4]={0,0,0,0};
int tamp_tas_cozmeed[4]={0,0,0,0};
int tamp_jaket_eiger[4]={0,0,0,0};
int tamp_jaket_rei[4]={0,0,0,0};
int tamp_jaket_avtech[4]={0,0,0,0};
int tamp_jaket_cozmeed[4]={0,0,0,0};
int tamp_sepatu_eiger[4]={0,0,0,0};
int tamp_sepatu_rei[4]={0,0,0,0};
int tamp_sepatu_avtech[4]={0,0,0,0};
int tamp_sepatu_cozmeed[4]={0,0,0,0};
int tamp_celana_eiger[4]={0,0,0,0};
int tamp_celana_rei[4]={0,0,0,0};
int tamp_celana_avtech[4]={0,0,0,0};
int tamp_celana_cozmeed[4]={0,0,0,0};
int tamp_tenda_eiger[4]={0,0,0,0};
int tamp_tenda_rei[4]={0,0,0,0};
int tamp_tenda_avtech[4]={0,0,0,0};
int tamp_tenda_cozmeed[4]={0,0,0,0};
int tamp_topi[7]={0,0,0,0,0,0,0};
int tamp_sleepingbag[7]={0,0,0,0,0,0,0};
int stok_tas_eiger[4]={4,7,10,3};
int stok_tas_rei[4]={5,7,21,11};
int stok_tas_avtech[4]={9,6,1,9};
int stok_tas_cozmeed[4]={2,7,8,3};
int stok_jaket_eiger[4]={4,7,10,3};
int stok_jaket_rei[4]={5,7,21,11};
int stok_jaket_avtech[4]={9,6,1,9};
int stok_jaket_cozmeed[4]={2,7,8,3};
int stok_celana_eiger[4]={4,7,10,3};
int stok_celana_rei[4]={5,7,21,11};
int stok_celana_avtech[4]={9,6,1,9};
int stok_celana_cozmeed[4]={2,7,8,3};
int stok_sepatu_eiger[4]={4,7,10,3};
int stok_sepatu_rei[4]={5,7,21,11};
int stok_sepatu_avtech[4]={9,6,1,9};
int stok_sepatu_cozmeed[4]={2,7,8,3};
int stok_topi[7]={2,7,8,3,6,4,9};
int stok_sleepingbag[7]={6,20,13,8,12,11,9};
int stok_tenda_eiger[4]={4,9,10,7};
int stok_tenda_rei[4]={5,4,21,11};
int stok_tenda_avtech[4]={9,6,26,9};
int stok_tenda_cozmeed[4]={4,10,8,5};
////////////////////////////////////////////////////////////////////////////////
//												HARGA													//
////////////////////////////////////////////////////////////////////////////////
int harga_tas_eiger[4]={600000,800000,1100000,1300000};
int harga_tas_rei[4]={370000,550000,810000,940000};
int harga_tas_avtech[4]={320000,510000,780000,900000};
int harga_tas_cozmeed[4]={370000,590000,820000,920000};
int harga_jaket_eiger[4]={210000,270000,290000,310000};
int harga_jaket_rei[4]={230000,290000,310000,340000};
int harga_jaket_avtech[4]={210000,290000,320000,370000};
int harga_jaket_cozmeed[4]={200000,230000,260000,280000};
int harga_sepatu_eiger[4]={1100000,980000,860000,800000};
int harga_sepatu_rei[4]={1000000,960000,910000,870000};
int harga_sepatu_avtech[4]={970000,900000,840000,800000};
int harga_sepatu_cozmeed[4]={940000,900000,860000,800000};
int harga_celana_eiger[4]={210000,230000,250000,270000};
int harga_celana_rei[4]={230000,235000,270000,290000};
int harga_celana_avtech[4]={200000,215000,260000,270000};
int harga_celana_cozmeed[4]={212000,220000,245000,250000};
int harga_topi[7]={189000,192000,172000,197000,213000,231000,250000};
int harga_sleepingbag[7]={320000,342000,350000,325000,362000,400000,390000};
int harga_tenda_eiger[4]={520000,565000,590000,620000};
int harga_tenda_cozmeed[4]={340000,365000,380000,410000};
int harga_tenda_rei[4]={542000,580000,605000,690000};
int harga_tenda_avtech[4]={331000,360000,385000,430000};
////////////////////////////////////////////////////////////////////////////////
//												INDEKS                                    //
////////////////////////////////////////////////////////////////////////////////
char tas_eiger[4][100]={"CARRIER EIGER 40L","CARRIER EIGER 60L","CARRIER EIGER 80L","CARRIER EIGER 100L"};
char tas_rei[4][100]={"CARRIER REI 40L","CARRIER REI 60L","CARRIER REI 80L","CARRIER REI 100L"};
char tas_avtech[4][100]={"CARRIER AVTECH 40L","CARRIER AVTECH 60L","CARRIER AVTECH 80L","CARRIER AVTECH 100L"};
char tas_cozmeed[4][100]={"CARRIER COZMEED 40L","CARRIER COZMEED 60L","CARRIER COZMEED 80L","CARRIER COZMEED 100L"};
char jaket_eiger[4][100]={"JACKET EIGER UK M","JACKET EIGER UK L","JACKET EIGER XL","JACKET EIGER XXL"};
char jaket_rei[4][100]={"JACKET REI UK M","JACKET REI UK L","JACKET REI XL","JACKET REI XXL"};
char jaket_avtech[4][100]={"JACKET AVTECH UK M","JACKET AVTECH UK L","JACKET AVTECH XL","JACKET AVTECH XXL"};
char jaket_cozmeed[4][100]={"JACKET COZMEED UK M","JACKET COZMEED UK L","JACKET COZMEED XL","JACKET COZMEED XXL"};
char sepatu_eiger[4][100]={"SEPATU EIGER UK 39","SEPATU EIGER UK 40","SEPATU EIGER 41","SEPATU EIGER 42"};
char sepatu_rei[4][100]={"SEPATU REI UK 39","SEPATU REI UK 40","SEPATU REI 41","SEPATU REI 42"};
char sepatu_avtech[4][100]={"SEPATU AVTECH UK 39","SEPATU AVTECH UK 40","SEPATU AVTECH 41","SEPATU AVTECH 42"};
char sepatu_cozmeed[4][100]={"SEPATU COZMEED UK 39","SEPATU COZMEED UK 40","SEPATU COZMEED 41","SEPATU COZMEED 42"};
char celana_eiger[4][100]={"CELANA EIGER UK 28","CELANA EIGER UK 29","CELANA EIGER 30","CELANA EIGER 31"};
char celana_rei[4][100]={"CELANA REI UK 28","CELANA REI UK 29","CELANA REI 30","CELANA REI 31"};
char celana_avtech[4][100]={"CELANA AVTECH UK 28","CELANA AVTECH UK 29","CELANA AVTECH 30","CELANA AVTECH 31"};
char celana_cozmeed[4][100]={"CELANA COZMEED UK 28","CELANA COZMEED UK 29","CELANA COZMEED 30","CELANA COZMEED 31"};
char topi[7][100]={"TOPI CONSINA","TOPI EIGER","TOPI COZMEED","TOPI REI","TOPI AVTECH","TOPI TNF","TOPI DEUTER"};
char sleepingbag[7][100]={"SLEEPING BAG CONSINA","SLEEPING BAG EIGER","SLEEPING BAG COZMEED","SLEEPING BAG REI","SLEEPING BAG AVTECH","SLEEPING BAG TNF","SLEEPING BAG DEUTER"};
char tenda_eiger[4][100]={"TENDA EIGER KAP 3","TENDA EIGER KAP 5","TENDA EIGER KAP 6","TENDA EIGER KAP 8"};
char tenda_cozmeed[4][100]={"TENDA COZMEED KAP 3","TENDA COZMEED KAP 5","TENDA COZMEED KAP 6","TENDA COZMEED KAP 8"};
char tenda_rei[4][100]={"TENDA REI KAP 3","TENDA REI KAP 5","TENDA REI KAP 6","TENDA REI KAP 8"};
char tenda_avtech[4][100]={"TENDA AVTECH KAP 3","TENDA AVTECH KAP 5","TENDA AVTECH KAP 6","TENDA AVTECH KAP 8"};
char as;
char as1;
char as2;
////////////////////////////////////////////////////////////////////////////////
//											 FUNCTION GETCHE										//
////////////////////////////////////////////////////////////////////////////////
char satuInput(){
	pilih = getche();

   return pilih;
}
////////////////////////////////////////////////////////////////////////////////
//											BINGKAI													//
////////////////////////////////////////////////////////////////////////////////
void bingkaiutama(){
int a=0;
    for(int x=1;x<=10;x++){
    	Sleep(60); textcolor(9);
    		gotoxy(x,5);cprintf(" %c%c%c     %c%c%c %c%c%c%c%c%c%c %c%c   %c%c %c%c%c     %c%c%c  %c%c    %c%c %c%c%c%c%c%c%c%c",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36);
	 		gotoxy(x,6);cprintf(" %c%c%c%c   %c%c%c%c %c%c%c%c%c%c%c %c%c  %c%c  %c%c%c%c   %c%c%c%c  %c%c    %c%c %c%c   %c%c ",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36);
	 		gotoxy(x,7);cprintf(" %c%c %c%c %c%c %c%c %c%c   %c%c %c%c%c%c    %c%c %c%c %c%c %c%c  %c%c    %c%c %c%c%c%c%c%c  ",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36);
	 		gotoxy(x,8);cprintf(" %c%c  %c%c%c  %c%c %c%c%c%c%c%c%c %c%c%c%c    %c%c  %c%c%c  %c%c  %c%c    %c%c %c%c %c%c%c%c ",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36);
	 		gotoxy(x,9);cprintf(" %c%c   %c   %c%c %c%c   %c%c %c%c  %c%c  %c%c   %c   %c%c  %c%c%c  %c%c%c %c%c   %c%c%c",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36);
	 		gotoxy(x,10);cprintf(" %c%c       %c%c %c%c   %c%c %c%c   %c%c %c%c       %c%c   %c%c%c%c%c%c  %c%c    %c%c",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36);
    }
    for(int x=19;x<=40;x++){
    	Sleep(40);
    	textcolor(6);
    		gotoxy(x,16);cprintf("   %c%c   %c%c%c%c%c  %c%c    %c%c %c%c%c%c%c%c %c%c    %c%c %c%c%c%c%c%c%c%c %c%c   %c%c %c%c%c%c%c  %c%c%c%c%c%c ",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36);
         gotoxy(x,17);cprintf("  %c%c%c%c  %c%c%c%c%c%c %c%c    %c%c %c%c%c%c%c%c %c%c%c   %c%c %c%c%c%c%c%c%c%c %c%c   %c%c %c%c  %c%c %c%c%c%c%c%c ",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36);
    		gotoxy(x,18);cprintf(" %c%c  %c%c %c%c  %c%c %c%c    %c%c %c%c     %c%c%c%c  %c%c    %c%c    %c%c   %c%c %c%c %c%c  %c%c     ",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36);
    		gotoxy(x,19);cprintf(" %c%c%c%c%c%c %c%c  %c%c  %c%c  %c%c  %c%c%c%c%c%c %c%c %c%c %c%c    %c%c    %c%c   %c%c %c%c%c%c   %c%c%c%c%c%c ",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,3,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,3);
    		gotoxy(x,20);cprintf(" %c%c%c%c%c%c %c%c%c%c%c%c   %c%c%c%c   %c%c     %c%c  %c%c%c%c    %c%c    %c%c%c%c%c%c%c %c%c %c%c  %c%c     ",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,3,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,3);
    		gotoxy(x,21);cprintf(" %c%c  %c%c %c%c%c%c%c     %c%c    %c%c%c%c%c%c %c%c   %c%c%c    %c%c     %c%c%c%c%c  %c%c  %c%c %c%c%c%c%c%c ",36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,3,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,3);
    }  textcolor(3);
   for(int a=1;a<=120;a++){
   	gotoxy(a,1);cprintf("%c",219);Sleep(5);
   	gotoxy(a,40);cprintf("%c",219);
	}

	for(int a=1;a<=40;a++){
		gotoxy(1,a);cprintf("%c",219);Sleep(5);
   	gotoxy(120,a);cprintf("%c",219);
	}
   for(int x=0;x<=100;x++){
   textcolor(13);
   	if(x%1==0){
      	a++;
      }
      gotoxy(50,32);cprintf("loading...%d%",x);
      gotoxy(8+a,30);cprintf("%c%c%c%c",219,219,219,219);
      Sleep(30);
   }
  clrscr();
  bingkailogin();
  login();
}
////////////////////////////////////////////////////////////////////////////////
//                              BINGKAILOGIN                                  //
////////////////////////////////////////////////////////////////////////////////
void bingkailogin(){
textcolor(3);
   for(int x=36;x<=90;x++){
       gotoxy(x,20);cprintf("%c",219);
       gotoxy(x,24);cprintf("%c",219);
       gotoxy(x,28);cprintf("%c",219);
   }
   for(int y=20;y<=28;y++){
   textcolor(3);
   	gotoxy(36,y);cprintf("%c",219);
      gotoxy(90,y);cprintf("%c",219);
   }
}
////////////////////////////////////////////////////////////////////////////////
//                              		 LOGIN                                    //
////////////////////////////////////////////////////////////////////////////////
void login(){
char jeneng[12];
char sandi[12];
//char pilih;
int p=1;
textcolor(13);

for(int a=1;a<=120;a++){
   	gotoxy(a,1);cprintf("%c",219);Sleep(5);
   	gotoxy(a,40);cprintf("%c",219);
	}

	for(int a=1;a<=40;a++){
		gotoxy(1,a);cprintf("%c",219);Sleep(5);
   	gotoxy(120,a);cprintf("%c",219);
	}
textcolor(3);
 	gotoxy(35,5);cprintf("***          ****     ******* ********** ***       ***  ");
   gotoxy(35,6);cprintf("***         ******   ******** ********** ****      ***  ");
	gotoxy(35,7);cprintf("***        ***  *** *********    ***     *****     ***  ");
	gotoxy(35,8);cprintf("***        ***  *** ***          ***     ******    ***  ");
	gotoxy(35,9);cprintf("***        ***  *** ***  ***     ***     *** ***   ***  ");
	gotoxy(35,10);cprintf("***        ***  *** ***  ****    ***     ***  ***  ***  ");
	gotoxy(35,11);cprintf("***        ***  *** ***    **    ***     ***   *** ***  ");
	gotoxy(35,12);cprintf("********** ***  *** *********    ***     ***    ******  ");
	gotoxy(35,13);cprintf("**********  ******  ********* ********** ***     *****  ");
	gotoxy(35,14);cprintf("**********   ****    *******  ********** ***      ****  ");

   do{
   textcolor(5);
		gotoxy(40,22);	cprintf("username   = ");
      gotoxy(40,26);	cprintf("password   = ");
		gotoxy(53,22);gets(jeneng);
		gotoxy(53,26);gets(sandi);
   textcolor(5);
		if(strcmp(jeneng,"hokya")==0 && strcmp(sandi,"makmur")==0){
         p=6;

      }else if(strcmp(jeneng,"hokya")!=0 && strcmp(sandi,"makmur")==0){
   		for(int a=1;a<=3;a++){
   				textcolor(5);
				gotoxy(52,33);cprintf("username salah !!!!!!!!"); Sleep(400);
   			gotoxy(52,33);cprintf("                              "); Sleep(400);}
   			gotoxy(53,22);cprintf("                              ");
   			gotoxy(53,26);cprintf("                              ");
      		p++;
      }else if (strcmp(jeneng,"hokya")==0 && strcmp(sandi,"makmur")!=0){
            for(int a=1;a<=3;a++){
   				textcolor(5);
				gotoxy(52,33);cprintf("password salah !!!!!!!!"); Sleep(400);
   			gotoxy(52,33);cprintf("                              "); Sleep(400);}
   			gotoxy(53,22);cprintf("                              ");
   			gotoxy(53,26);cprintf("                              ");
      		p++;
   	}else if (strcmp(jeneng,"hokya")!=0 && strcmp(sandi,"makmur")!=0){
            for(int a=1;a<=3;a++){
  				 textcolor(5);
				gotoxy(52,33);cprintf("username dan password salah !!!!!!!!"); Sleep(400);
   			gotoxy(52,33);cprintf("                                     "); Sleep(400);}
   			gotoxy(53,22);cprintf("                              ");
   			gotoxy(53,26);cprintf("                              ");
      		p++;
   	}

	}while(p<=3);
      if(p==6){
         clrscr();
      	menuawal();
      }else{
      clrscr();
gotoxy(36,20);cprintf("ANDA SUDAH MEMASUKKAN USERNAME DAN PASSWORD YANG SALAH 3 KALI");
gotoxy(36,21);cprintf("APAKAH ANDA INGIN LOGIN KEMBALI.?(y/t) = ");pilih=satuInput();Sleep(500);
   clrscr();
   bingkailogin();
 	if(pilih=='y'){
   	login();
   }else if(pilih=='t'){
   	clrscr();
      gotoxy(36,20);cprintf("PROGRAM SELESAI");Sleep(500);
   }else{
   	clrscr();
      cprintf("ANDA MEMAKSA UNTUK MEMATIKAN PROGRAM DAN PESENKU ANDA TERLALU BODOH........");
	}
  }
}
////////////////////////////////////////////////////////////////////////////////
//												MENU AWAL											//
////////////////////////////////////////////////////////////////////////////////
void menuawal(){
   for(int a=1;a<=120;a++){textcolor(13);
   	gotoxy(a,1);cprintf("%c",219);Sleep(5);
   	gotoxy(a,40);cprintf("%c",219);
	}

	for(int a=1;a<=40;a++){textcolor(13);
		gotoxy(1,a);cprintf("%c",219);Sleep(5);
   	gotoxy(120,a);cprintf("%c",219);
	}
   for(int a=45;a<=75;a++){  textcolor(9);
     	    gotoxy(a,13);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,17);cprintf("%c",219);
	}
   for(int a=13;a<=17;a++){  textcolor(9);
		   gotoxy(45,a);cprintf("%c",219);Sleep(5);
   		gotoxy(75,a);cprintf("%c",219);
	}
   for(int a=45;a<=75;a++){  textcolor(9);
     	    gotoxy(a,20);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,24);cprintf("%c",219);
	}
   for(int a=20;a<=24;a++){  textcolor(9);
		   gotoxy(45,a);cprintf("%c",219);Sleep(5);
   		gotoxy(75,a);cprintf("%c",219);
	}for(int a=45;a<=75;a++){  textcolor(9);
     	    gotoxy(a,27);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,31);cprintf("%c",219);
	}
   for(int a=27;a<=31;a++){  textcolor(9);
		   gotoxy(45,a);cprintf("%c",219);Sleep(5);
   		gotoxy(75,a);cprintf("%c",219);
	}
   textcolor(13);
   gotoxy(55,15);cprintf("1.PEMBELIAN");
   gotoxy(56,22);cprintf("2.TENTANG");
	gotoxy(57,29);cprintf("3.KELUAR");
   	do{
       gotoxy(60,36);pilih=satuInput();
      	if(pilih == '1'){
         	clrscr();
        		pembelian();
      	}else if(pilih == '2'){
            clrscr();
      		tentang();
      	}else if(pilih == '3'){
         	exit(0);
         }else{
         	for(int a=1;a<=3;a++){
            	gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
               gotoxy(58,36);printf("                         "); Sleep(400);}
      	}
      }while(pilih != '1',pilih != '2',pilih != '3');

}
////////////////////////////////////////////////////////////////////////////////
//										   PEMBELIAN 			 			 						//
////////////////////////////////////////////////////////////////////////////////
void pembelian(){
   bingkai7();
	textcolor(6);
   gotoxy(18,16);cprintf("1.CARRIER");
   gotoxy(58,16);cprintf("2.JACKET");
   gotoxy(98,16);cprintf("3.SEPATU");
   gotoxy(58,24);cprintf("4.CELANA");
   gotoxy(20,31);cprintf("5.TOPI");
   gotoxy(56,31);cprintf("6.SLEEPING BAG");
   gotoxy(99,31);cprintf("7.TENDA");
   gotoxy(75,37);cprintf("TEKAN 0 JIKA INGIN LANGSUNG KE PEMBAYARAN");

  do{
   gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      	clrscr();
         menucarrier();
      }else if(pilih=='2'){
         clrscr();
         menujaket();
      }else if(pilih=='3'){
         clrscr();
         menusepatu();
      }else if(pilih=='4'){
         clrscr();
         menucelana();
      }else if(pilih=='5'){
         clrscr();
         menutopi();
      }else if(pilih=='6'){
         clrscr();
         menusleepingbag();
      }else if(pilih=='7'){
         clrscr();
         menutenda();
      }else if(pilih=='0'){
         clrscr();
         tampil_transaksi();
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}
      }
  }while(pilih!='1'||pilih!='2'||pilih!='3'||pilih!='4'||pilih!='5'||pilih!='6'||pilih!='7'||pilih!='0');
}
////////////////////////////////////////////////////////////////////////////////
//												BINGKAI 4											//
////////////////////////////////////////////////////////////////////////////////
void bingkai4(){
   for(int a=1;a<=120;a++){
   	gotoxy(a,1);cprintf("%c",219);Sleep(5);
   	gotoxy(a,40);cprintf("%c",219);
	}
	for(int a=1;a<=40;a++){
		gotoxy(1,a);cprintf("%c",219);Sleep(5);
   	gotoxy(120,a);cprintf("%c",219);
	}
   for(int a=1;a<=120;a++){
   	gotoxy(a,1);cprintf("%c",219);Sleep(5);
   	gotoxy(a,10);cprintf("%c",219);
	}
   for(int a=25;a<=45;a++){  textcolor(9);
     	    gotoxy(a,16);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,20);cprintf("%c",219);
	}
   for(int a=16;a<=20;a++){  textcolor(9);
		   gotoxy(25,a);cprintf("%c",219);Sleep(5);
   		gotoxy(45,a);cprintf("%c",219);
	}
   for(int a=25;a<=45;a++){  textcolor(9);
     	    gotoxy(a,27);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,31);cprintf("%c",219);
	}
   for(int a=27;a<=31;a++){  textcolor(9);
		   gotoxy(25,a);cprintf("%c",219);Sleep(5);
   		gotoxy(45,a);cprintf("%c",219);
	}
   for(int a=75;a<=95;a++){  textcolor(9);
     	    gotoxy(a,16);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,20);cprintf("%c",219);
	}
   for(int a=16;a<=20;a++){  textcolor(9);
		   gotoxy(75,a);cprintf("%c",219);Sleep(5);
   		gotoxy(95,a);cprintf("%c",219);
	}
   for(int a=75;a<=95;a++){  textcolor(9);
     	    gotoxy(a,27);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,31);cprintf("%c",219);
	}
   for(int a=27;a<=31;a++){  textcolor(9);
		   gotoxy(75,a);cprintf("%c",219);Sleep(5);
   		gotoxy(95,a);cprintf("%c",219);
	}
}
////////////////////////////////////////////////////////////////////////////////
//											BINGKAI 7												//
////////////////////////////////////////////////////////////////////////////////
void bingkai7(){
	for(int a=1;a<=120;a++){textcolor(13);
   	gotoxy(a,1);cprintf("%c",219);Sleep(5);
   	gotoxy(a,40);cprintf("%c",219);
	}

	for(int a=1;a<=40;a++){textcolor(13);
		gotoxy(1,a);cprintf("%c",219);Sleep(5);
   	gotoxy(120,a);cprintf("%c",219);
	}
   for(int a=1;a<=120;a++){textcolor(13);
   	gotoxy(a,1);cprintf("%c",219);Sleep(5);
   	gotoxy(a,10);cprintf("%c",219);
	}

   for(int a=10;a<=35;a++){  textcolor(9);
     	    gotoxy(a,15);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,18);cprintf("%c",219);
	}
   for(int a=15;a<=18;a++){  textcolor(9);
		   gotoxy(10,a);cprintf("%c",219);Sleep(5);
   		gotoxy(35,a);cprintf("%c",219);
	}
   for(int a=50;a<=75;a++){  textcolor(9);
     	    gotoxy(a,15);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,18);cprintf("%c",219);
	}
   for(int a=15;a<=18;a++){  textcolor(9);
		   gotoxy(50,a);cprintf("%c",219);Sleep(5);
   		gotoxy(75,a);cprintf("%c",219);
	}
   for(int a=90;a<=115;a++){  textcolor(9);
     	    gotoxy(a,15);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,18);cprintf("%c",219);
	}
   for(int a=15;a<=18;a++){  textcolor(9);
		   gotoxy(90,a);cprintf("%c",219);Sleep(5);
   		gotoxy(115,a);cprintf("%c",219);
	}
   for(int a=10;a<=35;a++){  textcolor(9);
     	    gotoxy(a,30);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,33);cprintf("%c",219);
	}
   for(int a=30;a<=33;a++){  textcolor(9);
		gotoxy(10,a);cprintf("%c",219);Sleep(5);
   		gotoxy(35,a);cprintf("%c",219);
	}
   for(int a=50;a<=75;a++){  textcolor(9);
     	    gotoxy(a,30);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,33);cprintf("%c",219);
	}
   for(int a=30;a<=33;a++){  textcolor(9);
		   gotoxy(50,a);cprintf("%c",219);Sleep(5);
   		gotoxy(75,a);cprintf("%c",219);
	}
   for(int a=90;a<=115;a++){  textcolor(9);
     	    gotoxy(a,30);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,33);cprintf("%c",219);
	}
   for(int a=30;a<=33;a++){  textcolor(9);
		   gotoxy(90,a);cprintf("%c",219);Sleep(5);
   		gotoxy(115,a);cprintf("%c",219);
	}
   for(int a=40;a<=85;a++){  textcolor(9);
     	    gotoxy(a,23);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,26);cprintf("%c",219);
	}
   for(int a=23;a<=26;a++){  textcolor(9);
		   gotoxy(40,a);cprintf("%c",219);Sleep(5);
   		gotoxy(85,a);cprintf("%c",219);
	}
}
////////////////////////////////////////////////////////////////////////////////
//												BINGKAI HARGA										//
////////////////////////////////////////////////////////////////////////////////
void bingkaiharga(){
   for(int a=1;a<=120;a++){   textcolor(13);
   	gotoxy(a,1);cprintf("%c",219);Sleep(5);
   	gotoxy(a,40);cprintf("%c",219);
	}
	for(int a=1;a<=40;a++){    textcolor(13);
		gotoxy(1,a);cprintf("%c",219);Sleep(5);
   	gotoxy(120,a);cprintf("%c",219);
	}
   for(int a=1;a<=120;a++){   textcolor(13);
   	gotoxy(a,1);cprintf("%c",219);Sleep(5);
   	gotoxy(a,10);cprintf("%c",219);
	}
   for(int a=15;a<=45;a++){  textcolor(9);
     	    gotoxy(a,16);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,23);cprintf("%c",219);
	}
   for(int a=16;a<=23;a++){  textcolor(9);
		   gotoxy(15,a);cprintf("%c",219);Sleep(5);
   		gotoxy(45,a);cprintf("%c",219);
	}
   for(int a=15;a<=45;a++){  textcolor(9);
     	    gotoxy(a,16);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,18);cprintf("%c",219);
   }
   for(int a=75;a<=105;a++){  textcolor(9);
     	    gotoxy(a,16);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,23);cprintf("%c",219);
	}
   for(int a=16;a<=23;a++){  textcolor(9);
		   gotoxy(75,a);cprintf("%c",219);Sleep(5);
   		gotoxy(105,a);cprintf("%c",219);
	}
   for(int a=75;a<=105;a++){  textcolor(9);
     	    gotoxy(a,16);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,18);cprintf("%c",219);
   }
   for(int a=15;a<=45;a++){  textcolor(9);
     	    gotoxy(a,28);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,35);cprintf("%c",219);
	}
   for(int a=28;a<=35;a++){  textcolor(9);
		   gotoxy(15,a);cprintf("%c",219);Sleep(5);
   		gotoxy(45,a);cprintf("%c",219);
	}
   for(int a=15;a<=45;a++){  textcolor(9);
     	    gotoxy(a,28);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,30);cprintf("%c",219);
   }
   for(int a=75;a<=105;a++){  textcolor(9);
     	    gotoxy(a,28);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,35);cprintf("%c",219);
	}
   for(int a=28;a<=35;a++){  textcolor(9);
		   gotoxy(75,a);cprintf("%c",219);Sleep(5);
   		gotoxy(105,a);cprintf("%c",219);
	}
   for(int a=75;a<=105;a++){  textcolor(9);
     	    gotoxy(a,28);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,30);cprintf("%c",219);
   }
}
////////////////////////////////////////////////////////////////////////////////
// 									  BINGKAI LAIN												//
////////////////////////////////////////////////////////////////////////////////
void bingkailain(){
   for(int a=24;a<=92;a++){  textcolor(9);
     	    gotoxy(a,23);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,25);cprintf("%c",219);
	}
   for(int a=23;a<=25;a++){  textcolor(9);
		   gotoxy(24,a);cprintf("%c",219);Sleep(5);
   		gotoxy(92,a);cprintf("%c",219);
	}
}
////////////////////////////////////////////////////////////////////////////////
//										 BINGKAI JADI												//
////////////////////////////////////////////////////////////////////////////////
void bingkaijadi(){
   for(int a=1;a<=120;a++){ textcolor(13);
   	gotoxy(a,1);cprintf("%c",219);Sleep(5);
   	gotoxy(a,40);cprintf("%c",219);
	}
	for(int a=1;a<=40;a++){  textcolor(13);
		gotoxy(1,a);cprintf("%c",219);Sleep(5);
   	gotoxy(120,a);cprintf("%c",219);
	}
   for(int a=24;a<=92;a++){  textcolor(9);
     	    gotoxy(a,16);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,18);cprintf("%c",219);
	}
   for(int a=16;a<=18;a++){  textcolor(9);
		   gotoxy(24,a);cprintf("%c",219);Sleep(5);
   		gotoxy(92,a);cprintf("%c",219);
	}
}
////////////////////////////////////////////////////////////////////////////////
void menucarrier(){
	bingkai4(); textcolor(6);
	gotoxy(32,18);cprintf("1.EIGER");
   gotoxy(83,18);cprintf("2.REI");
   gotoxy(32,29);cprintf("3.AVTECH");
   gotoxy(81,29);cprintf("4.COZMEED");
	do{
   gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      	clrscr();
         careig();
      }else if(pilih=='2'){
      	clrscr();
         carrei();
      }else if(pilih=='3'){
      	clrscr();
         carav();
      }else if(pilih=='4'){
      	clrscr();
         carcoz();
      }else{
      	for(int a=1;a<=3;a++){
         	gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
         	gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void careig(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(28,17);cprintf("1.40L  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_tas_eiger[0]);
    gotoxy(25,21);cprintf("Rp.600.000");
    gotoxy(88,17);cprintf("2.60L  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_tas_eiger[1]);
    gotoxy(85,21);cprintf("Rp.800.000");
	 gotoxy(28,29);cprintf("3.80L  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_tas_eiger[2]);
    gotoxy(25,33);cprintf("Rp.1.100.000");
	 gotoxy(88,29);cprintf("4.100L  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_tas_eiger[3]);
    gotoxy(85,33);cprintf("Rp.1.300.000");
    do{
   	gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      	if(stok_tas_eiger[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				careig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER EIGER 40 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
					if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_eiger[pilih1];
                  	tamp_tas_eiger[0]++;
                     stok_tas_eiger[0] -= tamp_tas_eiger[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_eiger[pilih1];
                  	tamp_tas_eiger[0]++;
                     stok_tas_eiger[0] -= tamp_tas_eiger[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			careig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
      	if(stok_tas_eiger[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				careig();
         }else{
         clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER EIGER 60 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_eiger[pilih1];
                  	tamp_tas_eiger[1]++;
                     stok_tas_eiger[1] -= tamp_tas_eiger[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_eiger[pilih1];
                  	tamp_tas_eiger[1]++;
                     stok_tas_eiger[1] -= tamp_tas_eiger[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			careig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
      	if(stok_tas_eiger[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				careig();
         }else{
         clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER EIGER 80 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_eiger[pilih1];
                  	tamp_tas_eiger[2]++;
                     stok_tas_eiger[2] -= tamp_tas_eiger[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_eiger[pilih1];
                  	tamp_tas_eiger[2]++;
                     stok_tas_eiger[2] -= tamp_tas_eiger[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			careig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
      	if(stok_tas_eiger[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				careig();
         }else{
         clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER EIGER 100 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_eiger[pilih1];
                  	tamp_tas_eiger[3]++;
                     stok_tas_eiger[3] -= tamp_tas_eiger[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_eiger[pilih1];
                  	tamp_tas_eiger[3]++;
                     stok_tas_eiger[3] -= tamp_tas_eiger[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			careig();
      		}else{
					for(int a=1;a<=3;a++){
						gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   					gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void carrei(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(28,17);cprintf("1.40L  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_tas_rei[0]);
    gotoxy(25,21);cprintf("Rp.370.000");
    gotoxy(88,17);cprintf("2.60L  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_tas_rei[1]);
    gotoxy(85,21);cprintf("Rp.550.000");
	 gotoxy(28,29);cprintf("3.80L  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_tas_rei[2]);
    gotoxy(25,33);cprintf("Rp.810.000");
	 gotoxy(88,29);cprintf("4.100L  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_tas_rei[3]);
    gotoxy(85,33);cprintf("Rp.940.000");
    do{
   	gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      if(stok_tas_rei[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				carrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER REI 40 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_rei[pilih1];
                  	tamp_tas_rei[0]++;
                     stok_tas_rei[0] -= tamp_tas_rei[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_rei[pilih1];
                  	tamp_tas_rei[0]++;
                     stok_tas_rei[0] -= tamp_tas_rei[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			carrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_tas_rei[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				carrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER REI 60 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_rei[pilih1];
                  	tamp_tas_rei[1]++;
                     stok_tas_rei[1] -= tamp_tas_rei[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_rei[pilih1];
                  	tamp_tas_rei[1]++;
                     stok_tas_rei[1] -= tamp_tas_rei[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			carrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_tas_rei[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				carrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER REI 80 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_rei[pilih1];
                  	tamp_tas_rei[2]++;
                     stok_tas_rei[2] -= tamp_tas_rei[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_rei[pilih1];
                  	tamp_tas_rei[2]++;
                     stok_tas_rei[2] -= tamp_tas_rei[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			carrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_tas_rei[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				carrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER REI 100 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_rei[pilih1];
                  	tamp_tas_rei[3]++;
                     stok_tas_rei[3] -= tamp_tas_rei[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_rei[pilih1];
                  	tamp_tas_rei[3]++;
                     stok_tas_rei[3] -= tamp_tas_rei[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			carrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void carav(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(28,17);cprintf("1.40L  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_tas_avtech[0]);
    gotoxy(25,21);cprintf("Rp.320.000");
    gotoxy(88,17);cprintf("2.60L  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_tas_avtech[1]);
    gotoxy(85,21);cprintf("Rp.510.000");
	 gotoxy(28,29);cprintf("3.80L  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_tas_avtech[2]);
    gotoxy(25,33);cprintf("Rp.810.000");
	 gotoxy(88,29);cprintf("4.100L  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_tas_avtech[3]);
    gotoxy(85,33);cprintf("Rp.940.000");
    do{
   	gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      if(stok_tas_avtech[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				carav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER AVTECH 40 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_avtech[pilih1];
                  	tamp_tas_avtech[0]++;
                     stok_tas_avtech[0] -= tamp_tas_avtech[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_avtech[pilih1];
                  	tamp_tas_avtech[0]++;
                     stok_tas_avtech[0] -= tamp_tas_avtech[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			carav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_tas_avtech[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				carav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER AVTECH 60 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_avtech[pilih1];
                  	tamp_tas_avtech[1]++;
                     stok_tas_avtech[1] -= tamp_tas_avtech[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_avtech[pilih1];
                  	tamp_tas_avtech[1]++;
                     stok_tas_avtech[1] -= tamp_tas_avtech[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			carav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_tas_avtech[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				carav();
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER AVTECH 80 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_avtech[pilih1];
                  	tamp_tas_avtech[2]++;
                     stok_tas_avtech[2] -= tamp_tas_avtech[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_avtech[pilih1];
                  	tamp_tas_avtech[2]++;
                     stok_tas_avtech[2] -= tamp_tas_avtech[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			carav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_tas_avtech[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				carav();
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER AVTECH 100 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_avtech[pilih1];
                  	tamp_tas_avtech[3]++;
                     stok_tas_avtech[3] -= tamp_tas_avtech[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_avtech[pilih1];
                  	tamp_tas_avtech[3]++;
                     stok_tas_avtech[3] -= tamp_tas_avtech[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			carav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void carcoz(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(28,17);cprintf("1.40L  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_tas_cozmeed[0]);
    gotoxy(25,21);cprintf("Rp.370.000");
    gotoxy(88,17);cprintf("2.60L  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_tas_cozmeed[1]);
    gotoxy(85,21);cprintf("Rp.590.000");
	 gotoxy(28,29);cprintf("3.80L  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_tas_cozmeed[2]);
    gotoxy(25,33);cprintf("Rp.820.000");
	 gotoxy(88,29);cprintf("4.100L  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_tas_cozmeed[3]);
    gotoxy(85,33);cprintf("Rp.920.000");
    do{
   	gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      	if(stok_tas_cozmeed[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				carcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER COZMEED 40 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_cozmeed[pilih1];
                  	tamp_tas_cozmeed[0]++;
                     stok_tas_cozmeed[0] -= tamp_tas_cozmeed[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_cozmeed[pilih1];
                  	tamp_tas_cozmeed[0]++;
                     stok_tas_cozmeed[0] -= tamp_tas_cozmeed[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			carcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_tas_cozmeed[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				carcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER COZMEED 60 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_cozmeed[pilih1];
                  	tamp_tas_cozmeed[1]++;
                     stok_tas_cozmeed[1] -= tamp_tas_cozmeed[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_cozmeed[pilih1];
                  	tamp_tas_cozmeed[1]++;
                     stok_tas_cozmeed[1] -= tamp_tas_cozmeed[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			carcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
         }
      }else if(pilih=='3'){
         if(stok_tas_cozmeed[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				carcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER COZMEED 80 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_cozmeed[pilih1];
                  	tamp_tas_cozmeed[2]++;
                     stok_tas_cozmeed[2] -= tamp_tas_cozmeed[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_cozmeed[pilih1];
                  	tamp_tas_cozmeed[2]++;
                     stok_tas_cozmeed[2] -= tamp_tas_cozmeed[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			carcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_tas_cozmeed[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				carcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CARRIER COZMEED 100 LITER...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_cozmeed[pilih1];
                  	tamp_tas_cozmeed[3]++;
                     stok_tas_cozmeed[3] -= tamp_tas_cozmeed[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tas_cozmeed[pilih1];
                  	tamp_tas_cozmeed[3]++;
                     stok_tas_cozmeed[3] -= tamp_tas_cozmeed[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			carcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void menujaket(){
	bingkai4(); textcolor(6);
	gotoxy(32,18);cprintf("1.EIGER");
   gotoxy(83,18);cprintf("2.REI");
   gotoxy(32,29);cprintf("3.AVTECH");
   gotoxy(81,29);cprintf("4.COZMEED");
   do{
   gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      	clrscr();
         jakeig();
      }else if(pilih=='2'){
      	clrscr();
         jakrei();
      }else if(pilih=='3'){
      	clrscr();
         jakav();
      }else if(pilih=='4'){
      	clrscr();
         jakcoz();
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void jakeig(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(23,17);cprintf("1.UKURAN M  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_jaket_eiger[0]);
    gotoxy(25,21);cprintf("Rp.210.000");
    gotoxy(83,17);cprintf("2.UKURAN L  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_jaket_eiger[1]);
    gotoxy(85,21);cprintf("Rp.270.000");
	 gotoxy(23,29);cprintf("3.UKURAN XL  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_jaket_eiger[2]);
    gotoxy(25,33);cprintf("Rp.290.000");
	 gotoxy(83,29);cprintf("4.UKURAN XXL  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_jaket_eiger[3]);
    gotoxy(85,33);cprintf("Rp.310.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      if(stok_jaket_eiger[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakeig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET EIGER UKURAN M...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_eiger[pilih1];
                  	tamp_jaket_eiger[0]++;
                     stok_jaket_eiger[0] -= tamp_jaket_eiger[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_eiger[pilih1];
                  	tamp_jaket_eiger[0]++;
                     stok_jaket_eiger[0] -= tamp_jaket_eiger[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakeig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
          if(stok_jaket_eiger[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakeig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET EIGER UKURAN L...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_eiger[pilih1];
                  	tamp_jaket_eiger[1]++;
                     stok_jaket_eiger[1] -= tamp_jaket_eiger[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_eiger[pilih1];
                  	tamp_jaket_eiger[1]++;
                     stok_jaket_eiger[1] -= tamp_jaket_eiger[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakeig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
          if(stok_jaket_eiger[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakeig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET EIGER UKURAN XL...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_eiger[pilih1];
                  	tamp_jaket_eiger[2]++;
                     stok_jaket_eiger[2] -= tamp_jaket_eiger[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_eiger[pilih1];
                  	tamp_jaket_eiger[2]++;
                     stok_jaket_eiger[2] -= tamp_jaket_eiger[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakeig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
          if(stok_jaket_eiger[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakeig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET EIGER UKURAN XXL...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_eiger[pilih1];
                  	tamp_jaket_eiger[3]++;
                     stok_jaket_eiger[3] -= tamp_jaket_eiger[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_eiger[pilih1];
                  	tamp_jaket_eiger[3]++;
                     stok_jaket_eiger[3] -= tamp_jaket_eiger[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakeig();
      		}else{
					for(int a=1;a<=3;a++){
						gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   					gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void jakrei(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(25,17);cprintf("1.UKURAN M  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_jaket_rei[0]);
    gotoxy(25,21);cprintf("Rp.230.000");
    gotoxy(85,17);cprintf("2.UKURAN L  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_jaket_rei[1]);
    gotoxy(85,21);cprintf("Rp.290.000");
	 gotoxy(25,29);cprintf("3.UKURAN XL  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_jaket_rei[2]);
    gotoxy(25,33);cprintf("Rp.310.000");
	 gotoxy(85,29);cprintf("4.UKURAN XXL  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_jaket_rei[3]);
    gotoxy(85,33);cprintf("Rp.340.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      	if(stok_jaket_rei[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET REI UKURAN M...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_rei[pilih1];
                  	tamp_jaket_rei[0]++;
                     stok_jaket_rei[0] -= tamp_jaket_rei[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_rei[pilih1];
                  	tamp_jaket_rei[0]++;
                     stok_jaket_rei[0] -= tamp_jaket_rei[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_jaket_rei[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET REI UKURAN L...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_rei[pilih1];
                  	tamp_jaket_rei[1]++;
                     stok_jaket_rei[1] -= tamp_jaket_rei[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_rei[pilih1];
                  	tamp_jaket_rei[1]++;
                     stok_jaket_rei[1] -= tamp_jaket_rei[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_jaket_rei[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET REI UKURAN XL...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_rei[pilih1];
                  	tamp_jaket_rei[2]++;
                     stok_jaket_rei[2] -= tamp_jaket_rei[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_rei[pilih1];
                  	tamp_jaket_rei[2]++;
                     stok_jaket_rei[2] -= tamp_jaket_rei[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_jaket_rei[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET REI UKURAN XXL...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_rei[pilih1];
                  	tamp_jaket_rei[3]++;
                     stok_jaket_rei[3] -= tamp_jaket_rei[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_rei[pilih1];
                  	tamp_jaket_rei[3]++;
                     stok_jaket_rei[3] -= tamp_jaket_rei[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void jakav(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(25,17);cprintf("1.UKURAN M  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_jaket_avtech[0]);
    gotoxy(25,21);cprintf("Rp.210.000");
    gotoxy(85,17);cprintf("2.UKURAN L  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_jaket_avtech[1]);
    gotoxy(85,21);cprintf("Rp.290.000");
	 gotoxy(25,29);cprintf("3.UKURAN XL  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_jaket_avtech[2]);
    gotoxy(25,33);cprintf("Rp.320.000");
	 gotoxy(85,29);cprintf("4.UKURAN XXL  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_jaket_avtech[3]);
    gotoxy(85,33);cprintf("Rp.370.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
         if(stok_jaket_avtech[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET AVTECH UKURAN M...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_avtech[pilih1];
                  	tamp_jaket_avtech[0]++;
                     stok_jaket_avtech[0] -= tamp_jaket_avtech[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_avtech[pilih1];
                  	tamp_jaket_avtech[0]++;
                     stok_jaket_avtech[0] -= tamp_jaket_avtech[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_jaket_avtech[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET AVTECH UKURAN L...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_avtech[pilih1];
                  	tamp_jaket_avtech[1]++;
                     stok_jaket_avtech[1] -= tamp_jaket_avtech[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_avtech[pilih1];
                  	tamp_jaket_avtech[1]++;
                     stok_jaket_avtech[1] -= tamp_jaket_avtech[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_jaket_avtech[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET AVTECH UKURAN XL...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_avtech[pilih1];
                  	tamp_jaket_avtech[2]++;
                     stok_jaket_avtech[2] -= tamp_jaket_avtech[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_avtech[pilih1];
                  	tamp_jaket_avtech[2]++;
                     stok_jaket_avtech[2] -= tamp_jaket_avtech[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_jaket_avtech[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET AVTECH UKURAN XXL...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_avtech[pilih1];
                  	tamp_jaket_avtech[3]++;
                     stok_jaket_avtech[3] -= tamp_jaket_avtech[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_avtech[pilih1];
                  	tamp_jaket_avtech[3]++;
                     stok_jaket_avtech[3] -= tamp_jaket_avtech[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void jakcoz(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(25,17);cprintf("1.UKURAN M  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_jaket_cozmeed[0]);
    gotoxy(25,21);cprintf("Rp.200.000");
    gotoxy(85,17);cprintf("2.UKURAN L  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_jaket_cozmeed[1]);
    gotoxy(85,21);cprintf("Rp.230.000");
	 gotoxy(25,29);cprintf("3.UKURAN XL  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_jaket_cozmeed[2]);
    gotoxy(25,33);cprintf("Rp.260.000");
	 gotoxy(85,29);cprintf("4.UKURAN XXL  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_jaket_cozmeed[3]);
    gotoxy(85,33);cprintf("Rp.280.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      if(stok_jaket_cozmeed[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET COZMEED UKURAN M...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_cozmeed[pilih1];
                  	tamp_jaket_cozmeed[0]++;
                     stok_jaket_cozmeed[0] -= tamp_jaket_cozmeed[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_cozmeed[pilih1];
                  	tamp_jaket_cozmeed[0]++;
                     stok_jaket_cozmeed[0] -= tamp_jaket_cozmeed[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_jaket_cozmeed[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET COZMEED UKURAN L...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_cozmeed[pilih1];
                  	tamp_jaket_cozmeed[1]++;
                     stok_jaket_cozmeed[1] -= tamp_jaket_cozmeed[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_cozmeed[pilih1];
                  	tamp_jaket_cozmeed[1]++;
                     stok_jaket_cozmeed[1] -= tamp_jaket_cozmeed[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_jaket_cozmeed[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET COZMEED UKURAN XL...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_cozmeed[pilih1];
                  	tamp_jaket_cozmeed[2]++;
                     stok_jaket_cozmeed[2] -= tamp_jaket_cozmeed[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_cozmeed[pilih1];
                  	tamp_jaket_cozmeed[2]++;
                     stok_jaket_cozmeed[2] -= tamp_jaket_cozmeed[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_jaket_cozmeed[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				jakcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI JAKET COZMEED UKURAN XXL...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_cozmeed[pilih1];
                  	tamp_jaket_cozmeed[3]++;
                     stok_jaket_cozmeed[3] -= tamp_jaket_cozmeed[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_jaket_cozmeed[pilih1];
                  	tamp_jaket_cozmeed[3]++;
                     stok_jaket_cozmeed[3] -= tamp_jaket_cozmeed[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			jakcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void menusepatu(){
	bingkai4(); textcolor(6);
	gotoxy(32,18);cprintf("1.EIGER");
   gotoxy(83,18);cprintf("2.REI");
   gotoxy(32,29);cprintf("3.AVTECH");
   gotoxy(81,29);cprintf("4.COZMEED");
	do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      	clrscr();
         sepeig();
      }else if(pilih=='2'){
      	clrscr();
         seprei();
      }else if(pilih=='3'){
      	clrscr();
         sepav();
      }else if(pilih=='4'){
      	clrscr();
         sepcoz();
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void sepeig(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(26,17);cprintf("1.UKURAN 39  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_sepatu_eiger[0]);
    gotoxy(25,21);cprintf("Rp.1.100.000");
    gotoxy(86,17);cprintf("2.UKURAN 40  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_sepatu_eiger[1]);
    gotoxy(85,21);cprintf("Rp.980.000");
	 gotoxy(26,29);cprintf("3.UKURAN 41  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_sepatu_eiger[2]);
    gotoxy(25,33);cprintf("Rp.860.000");
	 gotoxy(86,29);cprintf("4.UKURAN 42  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_sepatu_eiger[3]);
    gotoxy(85,33);cprintf("Rp.800.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      	if(stok_sepatu_eiger[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				sepeig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU EIGER UKURAN 39...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_eiger[pilih1];
                  	tamp_sepatu_eiger[0]++;
                     stok_sepatu_eiger[0] -= tamp_sepatu_eiger[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_eiger[pilih1];
                  	tamp_sepatu_eiger[0]++;
                     stok_sepatu_eiger[0] -= tamp_sepatu_eiger[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			sepeig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_sepatu_eiger[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				sepeig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU EIGER UKURAN 40...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_eiger[pilih1];
                  	tamp_sepatu_eiger[1]++;
                     stok_sepatu_eiger[1] -= tamp_sepatu_eiger[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_eiger[pilih1];
                  	tamp_sepatu_eiger[1]++;
                     stok_sepatu_eiger[1] -= tamp_sepatu_eiger[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			sepeig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_sepatu_eiger[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				sepeig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU EIGER UKURAN 41...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_eiger[pilih1];
                  	tamp_sepatu_eiger[2]++;
                     stok_sepatu_eiger[2] -= tamp_sepatu_eiger[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_eiger[pilih1];
                  	tamp_sepatu_eiger[2]++;
                     stok_sepatu_eiger[2] -= tamp_sepatu_eiger[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			sepeig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_sepatu_eiger[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				sepeig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU EIGER UKURAN 42...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_eiger[pilih1];
                  	tamp_sepatu_eiger[3]++;
                     stok_sepatu_eiger[3] -= tamp_sepatu_eiger[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_eiger[pilih1];
                  	tamp_sepatu_eiger[3]++;
                     stok_sepatu_eiger[3] -= tamp_sepatu_eiger[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			sepeig();
      		}else{
					for(int a=1;a<=3;a++){
						gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   					gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void seprei(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(26,17);cprintf("1.UKURAN 39  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_sepatu_rei[0]);
    gotoxy(25,21);cprintf("Rp.1.000.000");
    gotoxy(86,17);cprintf("2.UKURAN 40  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_sepatu_rei[1]);
    gotoxy(85,21);cprintf("Rp.960.000");
	 gotoxy(26,29);cprintf("3.UKURAN 41  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_sepatu_rei[2]);
    gotoxy(25,33);cprintf("Rp.910.000");
	 gotoxy(86,29);cprintf("4.UKURAN 42  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_sepatu_rei[3]);
    gotoxy(85,33);cprintf("Rp.870.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      	if(stok_sepatu_rei[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				seprei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU REI UKURAN 39...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_rei[pilih1];
                  	tamp_sepatu_rei[0]++;
                     stok_sepatu_rei[0] -= tamp_sepatu_rei[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_rei[pilih1];
                  	tamp_sepatu_rei[0]++;
                     stok_sepatu_rei[0] -= tamp_sepatu_rei[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			seprei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_sepatu_rei[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				seprei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU REI UKURAN 40...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_rei[pilih1];
                  	tamp_sepatu_rei[1]++;
                     stok_sepatu_rei[1] -= tamp_sepatu_rei[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_rei[pilih1];
                  	tamp_sepatu_rei[1]++;
                     stok_sepatu_rei[1] -= tamp_sepatu_rei[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			seprei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_sepatu_rei[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				seprei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU REI UKURAN 41...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_rei[pilih1];
                  	tamp_sepatu_rei[2]++;
                     stok_sepatu_rei[2] -= tamp_sepatu_rei[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_rei[pilih1];
                  	tamp_sepatu_rei[2]++;
                     stok_sepatu_rei[2] -= tamp_sepatu_rei[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			seprei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_sepatu_rei[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				seprei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU REI UKURAN 42...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_rei[pilih1];
                  	tamp_sepatu_rei[3]++;
                     stok_sepatu_rei[3] -= tamp_sepatu_rei[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_rei[pilih1];
                  	tamp_sepatu_rei[3]++;
                     stok_sepatu_rei[3] -= tamp_sepatu_rei[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			seprei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void sepav(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(26,17);cprintf("1.UKURAN 39  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_sepatu_avtech[0]);
    gotoxy(25,21);cprintf("Rp.970.000");
    gotoxy(86,17);cprintf("2.UKURAN 40  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_sepatu_avtech[1]);
    gotoxy(85,21);cprintf("Rp.900.000");
	 gotoxy(26,29);cprintf("3.UKURAN 41  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_sepatu_avtech[2]);
    gotoxy(25,33);cprintf("Rp.840.000");
	 gotoxy(86,29);cprintf("4.UKURAN 42  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_sepatu_avtech[3]);
    gotoxy(85,33);cprintf("Rp.800.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      	if(stok_sepatu_avtech[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				sepav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU AVTECH UKURAN 39...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_avtech[pilih1];
                  	tamp_sepatu_avtech[0]++;
                     stok_sepatu_avtech[0] -= tamp_sepatu_avtech[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_avtech[pilih1];
                  	tamp_sepatu_avtech[0]++;
                     stok_sepatu_avtech[0] -= tamp_sepatu_avtech[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			sepav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_sepatu_avtech[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				sepav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU AVTECH UKURAN 40...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_avtech[pilih1];
                  	tamp_sepatu_avtech[1]++;
                     stok_sepatu_avtech[1] -= tamp_sepatu_avtech[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_avtech[pilih1];
                  	tamp_sepatu_avtech[1]++;
                     stok_sepatu_avtech[1] -= tamp_sepatu_avtech[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			sepav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_sepatu_avtech[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				sepav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU AVTECH UKURAN 41...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_avtech[pilih1];
                  	tamp_sepatu_avtech[2]++;
                     stok_sepatu_avtech[2] -= tamp_sepatu_avtech[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_avtech[pilih1];
                  	tamp_sepatu_avtech[2]++;
                     stok_sepatu_avtech[2] -= tamp_sepatu_avtech[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			sepav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_sepatu_avtech[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				sepav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU AVTECH UKURAN 42...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_avtech[pilih1];
                  	tamp_sepatu_avtech[3]++;
                     stok_sepatu_avtech[3] -= tamp_sepatu_avtech[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_avtech[pilih1];
                  	tamp_sepatu_avtech[3]++;
                     stok_sepatu_avtech[3] -= tamp_sepatu_avtech[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			sepav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void sepcoz(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(26,17);cprintf("1.UKURAN 39  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_sepatu_cozmeed[0]);
    gotoxy(25,21);cprintf("Rp.940.000");
    gotoxy(86,17);cprintf("2.UKURAN 40  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_sepatu_cozmeed[1]);
    gotoxy(85,21);cprintf("Rp.900.000");
	 gotoxy(26,29);cprintf("3.UKURAN 41  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_sepatu_cozmeed[2]);
    gotoxy(25,33);cprintf("Rp.860.000");
	 gotoxy(86,29);cprintf("4.UKURAN 42  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_sepatu_cozmeed[3]);
    gotoxy(85,33);cprintf("Rp.800.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      	if(stok_sepatu_cozmeed[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				sepcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU COZMEED UKURAN 39...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_cozmeed[pilih1];
                  	tamp_sepatu_cozmeed[0]++;
                     stok_sepatu_cozmeed[0] -= tamp_sepatu_cozmeed[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_cozmeed[pilih1];
                  	tamp_sepatu_cozmeed[0]++;
                     stok_sepatu_cozmeed[0] -= tamp_sepatu_cozmeed[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			sepcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_sepatu_cozmeed[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				sepcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU COZMEED UKURAN 40...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_cozmeed[pilih1];
                  	tamp_sepatu_cozmeed[1]++;
                     stok_sepatu_cozmeed[1] -= tamp_sepatu_cozmeed[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_cozmeed[pilih1];
                  	tamp_sepatu_cozmeed[1]++;
                     stok_sepatu_cozmeed[1] -= tamp_sepatu_cozmeed[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			sepcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_sepatu_cozmeed[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				sepcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU COZMEED UKURAN 41...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_cozmeed[pilih1];
                  	tamp_sepatu_cozmeed[2]++;
                     stok_sepatu_cozmeed[2] -= tamp_sepatu_cozmeed[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_cozmeed[pilih1];
                  	tamp_sepatu_cozmeed[2]++;
                     stok_sepatu_cozmeed[2] -= tamp_sepatu_cozmeed[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			sepcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_sepatu_cozmeed[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				sepcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SEPATU COZMEED UKURAN 42...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_cozmeed[pilih1];
                  	tamp_sepatu_cozmeed[3]++;
                     stok_sepatu_cozmeed[3] -= tamp_sepatu_cozmeed[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sepatu_cozmeed[pilih1];
                  	tamp_sepatu_cozmeed[3]++;
                     stok_sepatu_cozmeed[3] -= tamp_sepatu_cozmeed[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			sepcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void menucelana(){
	bingkai4(); textcolor(6);
	gotoxy(32,18);cprintf("1.EIGER");
   gotoxy(83,18);cprintf("2.REI");
   gotoxy(32,29);cprintf("3.AVTECH");
   gotoxy(81,29);cprintf("4.COZMEED");
	do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      	clrscr();
         sepeig();
      }else if(pilih=='2'){
      	clrscr();
         seprei();
      }else if(pilih=='3'){
      	clrscr();
         sepav();
      }else if(pilih=='4'){
      	clrscr();
         sepcoz();
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void celeig(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(25,17);cprintf("1.UKURAN 28  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_celana_eiger[0]);
    gotoxy(25,21);cprintf("Rp.210.000");
    gotoxy(85,17);cprintf("2.UKURAN 29  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_celana_eiger[1]);
    gotoxy(85,21);cprintf("Rp.230.000");
	 gotoxy(25,29);cprintf("3.UKURAN 30  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_celana_eiger[2]);
    gotoxy(25,33);cprintf("Rp.250.000");
	 gotoxy(85,29);cprintf("4.UKURAN 31  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_celana_eiger[3]);
    gotoxy(85,33);cprintf("Rp.270.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
         if(stok_celana_eiger[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celeig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA EIGER UKURAN 28...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_eiger[pilih1];
                  	tamp_celana_eiger[0]++;
                     stok_celana_eiger[0] -= tamp_celana_eiger[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_eiger[pilih1];
                  	tamp_celana_eiger[0]++;
                     stok_celana_eiger[0] -= tamp_celana_eiger[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celeig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_celana_eiger[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celeig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA EIGER UKURAN 29...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_eiger[pilih1];
                  	tamp_celana_eiger[1]++;
                     stok_celana_eiger[1] -= tamp_celana_eiger[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_eiger[pilih1];
                  	tamp_celana_eiger[1]++;
                     stok_celana_eiger[1] -= tamp_celana_eiger[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celeig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_celana_eiger[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celeig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA EIGER UKURAN 30...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_eiger[pilih1];
                  	tamp_celana_eiger[2]++;
                     stok_celana_eiger[2] -= tamp_celana_eiger[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_eiger[pilih1];
                  	tamp_celana_eiger[2]++;
                     stok_celana_eiger[2] -= tamp_celana_eiger[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celeig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_celana_eiger[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celeig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA EIGER UKURAN 31...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_eiger[pilih1];
                  	tamp_celana_eiger[3]++;
                     stok_celana_eiger[3] -= tamp_celana_eiger[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_eiger[pilih1];
                  	tamp_celana_eiger[3]++;
                     stok_celana_eiger[3] -= tamp_celana_eiger[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celeig();
      		}else{
					for(int a=1;a<=3;a++){
						gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   					gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void celrei(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(25,17);cprintf("1.UKURAN 28  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_celana_rei[0]);
    gotoxy(25,21);cprintf("Rp.230.000");
    gotoxy(85,17);cprintf("2.UKURAN 29  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_celana_rei[1]);
    gotoxy(85,21);cprintf("Rp.235.000");
	 gotoxy(25,29);cprintf("3.UKURAN 30  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_celana_rei[2]);
    gotoxy(25,33);cprintf("Rp.270.000");
	 gotoxy(85,29);cprintf("4.UKURAN 31  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_celana_rei[3]);
    gotoxy(85,33);cprintf("Rp.290.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
         if(stok_celana_rei[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA REI UKURAN 28...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_rei[pilih1];
                  	tamp_celana_rei[0]++;
                     stok_celana_rei[0] -= tamp_celana_rei[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_rei[pilih1];
                  	tamp_celana_rei[0]++;
                     stok_celana_rei[0] -= tamp_celana_rei[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_celana_rei[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA REI UKURAN 29...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_rei[pilih1];
                  	tamp_celana_rei[1]++;
                     stok_celana_rei[1] -= tamp_celana_rei[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_rei[pilih1];
                  	tamp_celana_rei[1]++;
                     stok_celana_rei[1] -= tamp_celana_rei[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_celana_rei[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA REI UKURAN 30...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_rei[pilih1];
                  	tamp_celana_rei[2]++;
                     stok_celana_rei[2] -= tamp_celana_rei[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_rei[pilih1];
                  	tamp_celana_rei[2]++;
                     stok_celana_rei[2] -= tamp_celana_rei[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_celana_rei[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA REI UKURAN 31...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_rei[pilih1];
                  	tamp_celana_rei[3]++;
                     stok_celana_rei[3] -= tamp_celana_rei[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_rei[pilih1];
                  	tamp_celana_rei[3]++;
                     stok_celana_rei[3] -= tamp_celana_rei[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void celav(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(25,17);cprintf("1.UKURAN 28  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_celana_avtech[0]);
    gotoxy(25,21);cprintf("Rp.200.000");
    gotoxy(85,17);cprintf("2.UKURAN 29  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_celana_avtech[1]);
    gotoxy(85,21);cprintf("Rp.215.000");
	 gotoxy(25,29);cprintf("3.UKURAN 30  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_celana_avtech[2]);
    gotoxy(25,33);cprintf("Rp.260.000");
	 gotoxy(85,29);cprintf("4.UKURAN 31  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_celana_avtech[3]);
    gotoxy(85,33);cprintf("Rp.270.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
         if(stok_celana_avtech[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA AVTECH UKURAN 28...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_avtech[pilih1];
                  	tamp_celana_avtech[0]++;
                     stok_celana_avtech[0] -= tamp_celana_avtech[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_avtech[pilih1];
                  	tamp_celana_avtech[0]++;
                     stok_celana_avtech[0] -= tamp_celana_avtech[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_celana_avtech[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA AVTECH UKURAN 29...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_avtech[pilih1];
                  	tamp_celana_avtech[1]++;
                     stok_celana_avtech[1] -= tamp_celana_avtech[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_avtech[pilih1];
                  	tamp_celana_avtech[1]++;
                     stok_celana_avtech[1] -= tamp_celana_avtech[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_celana_avtech[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA AVTECH UKURAN 30...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_avtech[pilih1];
                  	tamp_celana_avtech[2]++;
                     stok_celana_avtech[2] -= tamp_celana_avtech[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_avtech[pilih1];
                  	tamp_celana_avtech[2]++;
                     stok_celana_avtech[2] -= tamp_celana_avtech[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_celana_avtech[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA AVTECH UKURAN 31...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_avtech[pilih1];
                  	tamp_celana_avtech[3]++;
                     stok_celana_avtech[3] -= tamp_celana_avtech[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_avtech[pilih1];
                  	tamp_celana_avtech[3]++;
                     stok_celana_avtech[3] -= tamp_celana_avtech[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void celcoz(){
	 bingkaiharga();
	 textcolor(6);
	 gotoxy(25,17);cprintf("1.UKURAN 28  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_celana_cozmeed[0]);
    gotoxy(25,21);cprintf("Rp.212.000");
    gotoxy(85,17);cprintf("2.UKURAN 29  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_celana_cozmeed[1]);
    gotoxy(85,21);cprintf("Rp.220.000");
	 gotoxy(25,29);cprintf("3.UKURAN 30  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_celana_cozmeed[2]);
    gotoxy(25,33);cprintf("Rp.245.000");
	 gotoxy(85,29);cprintf("4.UKURAN 31  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_celana_cozmeed[3]);
    gotoxy(85,33);cprintf("Rp.250.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
         if(stok_celana_cozmeed[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA COZMEED UKURAN 28...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_cozmeed[pilih1];
                  	tamp_celana_cozmeed[0]++;
                     stok_celana_cozmeed[0] -= tamp_celana_cozmeed[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_cozmeed[pilih1];
                  	tamp_celana_cozmeed[0]++;
                     stok_celana_cozmeed[0] -= tamp_celana_cozmeed[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_celana_cozmeed[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA COZMEED UKURAN 29...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_cozmeed[pilih1];
                  	tamp_celana_cozmeed[1]++;
                     stok_celana_cozmeed[1] -= tamp_celana_cozmeed[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_cozmeed[pilih1];
                  	tamp_celana_cozmeed[1]++;
                     stok_celana_cozmeed[1] -= tamp_celana_cozmeed[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_celana_cozmeed[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA COZMEED UKURAN 30...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_cozmeed[pilih1];
                  	tamp_celana_cozmeed[2]++;
                     stok_celana_cozmeed[2] -= tamp_celana_cozmeed[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_cozmeed[pilih1];
                  	tamp_celana_cozmeed[2]++;
                     stok_celana_cozmeed[2] -= tamp_celana_cozmeed[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_celana_cozmeed[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				celcoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI CELANA COZMEED UKURAN 31...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_cozmeed[pilih1];
                  	tamp_celana_cozmeed[3]++;
                     stok_celana_cozmeed[3] -= tamp_celana_cozmeed[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_celana_cozmeed[pilih1];
                  	tamp_celana_cozmeed[3]++;
                     stok_celana_cozmeed[3] -= tamp_celana_cozmeed[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			celcoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}
      }
      }while(pilih!='4' ||pilih!='3' || pilih!='2' || pilih!='1' );
}
////////////////////////////////////////////////////////////////////////////////
void bingkai7harga(){
for(int a=1;a<=120;a++){textcolor(13);
   	gotoxy(a,1);cprintf("%c",219);Sleep(5);
   	gotoxy(a,40);cprintf("%c",219);
	}

	for(int a=1;a<=40;a++){textcolor(13);
		gotoxy(1,a);cprintf("%c",219);Sleep(5);
   	gotoxy(120,a);cprintf("%c",219);
	}
   for(int a=1;a<=120;a++){textcolor(13);
   	gotoxy(a,1);cprintf("%c",219);Sleep(5);
   	gotoxy(a,10);cprintf("%c",219);
	}
      //
   for(int a=10;a<=35;a++){  textcolor(9);
     	    gotoxy(a,12);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,19);cprintf("%c",219);
          gotoxy(a,14);cprintf("%c",219);
	}
   for(int a=12;a<=19;a++){  textcolor(9);
		   gotoxy(10,a);cprintf("%c",219);Sleep(5);
   		gotoxy(35,a);cprintf("%c",219);
	}
   for(int a=50;a<=75;a++){  textcolor(9);
     	    gotoxy(a,12);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,19);cprintf("%c",219);
          gotoxy(a,14);cprintf("%c",219);
	}
   for(int a=12;a<=19;a++){  textcolor(9);
		   gotoxy(50,a);cprintf("%c",219);Sleep(5);
   		gotoxy(75,a);cprintf("%c",219);
	}
   for(int a=90;a<=115;a++){  textcolor(9);
     	    gotoxy(a,12);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,19);cprintf("%c",219);
          gotoxy(a,14);cprintf("%c",219);
	}
   for(int a=12;a<=19;a++){  textcolor(9);
		   gotoxy(90,a);cprintf("%c",219);Sleep(5);
   		gotoxy(115,a);cprintf("%c",219);
	}
   for(int a=10;a<=35;a++){  textcolor(9);
     	    gotoxy(a,30);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,37);cprintf("%c",219);
          gotoxy(a,32);cprintf("%c",219);
	}
   for(int a=30;a<=37;a++){  textcolor(9);
		gotoxy(10,a);cprintf("%c",219);Sleep(5);
   		gotoxy(35,a);cprintf("%c",219);
	}
   for(int a=50;a<=75;a++){  textcolor(9);
     	    gotoxy(a,30);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,37);cprintf("%c",219);
          gotoxy(a,32);cprintf("%c",219);
	}
   for(int a=30;a<=37;a++){  textcolor(9);
		   gotoxy(50,a);cprintf("%c",219);Sleep(5);
   		gotoxy(75,a);cprintf("%c",219);
	}
   for(int a=90;a<=115;a++){  textcolor(9);
     	    gotoxy(a,30);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,37);cprintf("%c",219);
          gotoxy(a,32);cprintf("%c",219);
	}
   for(int a=30;a<=37;a++){  textcolor(9);
		   gotoxy(90,a);cprintf("%c",219);Sleep(5);
   		gotoxy(115,a);cprintf("%c",219);
	}
   for(int a=40;a<=85;a++){  textcolor(9);
     	    gotoxy(a,21);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,28);cprintf("%c",219);
          gotoxy(a,23);cprintf("%c",219);
	}
   for(int a=21;a<=28;a++){  textcolor(9);
		   gotoxy(40,a);cprintf("%c",219);Sleep(5);
   		gotoxy(85,a);cprintf("%c",219);
	}
}
////////////////////////////////////////////////////////////////////////////////
void menutopi(){
	bingkai7harga();
   textcolor(6);
   gotoxy(18,13);cprintf("1.CONSINA");
   gotoxy(18,15);cprintf("STOK = %d",stok_topi[0]);
   gotoxy(15,17);cprintf("HARGA RP.189.000 ");
   gotoxy(58,13);cprintf("2.EIGER");
   gotoxy(58,15);cprintf("STOK = %d",stok_topi[1]);
   gotoxy(55,17);cprintf("HARGA RP.192.000 ");
   gotoxy(98,13);cprintf("3.COZMEED");
   gotoxy(98,15);cprintf("STOK = %d",stok_topi[2]);
   gotoxy(95,17);cprintf("HARGA RP.172.000 ");
   gotoxy(58,22);cprintf("4.REI");
   gotoxy(58,24);cprintf("STOK = %d",stok_topi[3]);
   gotoxy(55,26);cprintf("HARGA RP.197.000 ");
   gotoxy(19,31);cprintf("5.AVTECH");
   gotoxy(19,33);cprintf("STOK = %d",stok_topi[4]);
   gotoxy(14,35);cprintf("HARGA RP.213.000 ");
   gotoxy(59,31);cprintf("6.TNF");
   gotoxy(59,33);cprintf("STOK = %d",stok_topi[5]);
   gotoxy(54,35);cprintf("HARGA RP.231.000 ");
   gotoxy(99,31);cprintf("7.DEUTER");
   gotoxy(99,33);cprintf("STOK = %d",stok_topi[6]);
   gotoxy(94,35);cprintf("HARGA RP.250.000 ");
   do{
    gotoxy(60,39);pilih=satuInput();
   if(pilih=='1'){
         if(stok_topi[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TOPI CONSINA  ...?(y/t)\n");gotoxy(59,39);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,39);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_topi[pilih1];
                  	tamp_topi[0]++;
                     stok_topi[0] -= tamp_topi[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_topi[pilih1];
                  	tamp_topi[0]++;
                     stok_topi[0] -= tamp_topi[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			menutopi();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_topi[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TOPI EIGER  ...?(y/t)\n");gotoxy(59,39);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,39);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_topi[pilih1];
                  	tamp_topi[1]++;
                     stok_topi[1] -= tamp_topi[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_topi[pilih1];
                  	tamp_topi[1]++;
                     stok_topi[1] -= tamp_topi[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			menutopi();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_topi[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TOPI COZMEED  ...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_topi[pilih1];
                  	tamp_topi[2]++;
                     stok_topi[2] -= tamp_topi[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_topi[pilih1];
                  	tamp_topi[2]++;
                     stok_topi[2] -= tamp_topi[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			menutopi();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_topi[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TOPI REI  ...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_topi[pilih1];
                  	tamp_topi[3]++;
                     stok_topi[3] -= tamp_topi[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_topi[pilih1];
                  	tamp_topi[3]++;
                     stok_topi[3] -= tamp_topi[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			menutopi();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='5'){
         if(stok_topi[4] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TOPI AVTECH  ...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 117;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 85;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_topi[pilih1];
                  	tamp_topi[4]++;
                     stok_topi[4] -= tamp_topi[4];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_topi[pilih1];
                  	tamp_topi[4]++;
                     stok_topi[4] -= tamp_topi[4];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			menutopi();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='6'){
         if(stok_topi[5] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TOPI TNF  ...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 116;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 84;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_topi[pilih1];
                  	tamp_topi[5]++;
                     stok_topi[5] -= tamp_topi[5];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_topi[pilih1];
                  	tamp_topi[5]++;
                     stok_topi[5] -= tamp_topi[5];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			menutopi();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='7'){
         if(stok_topi[6] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TOPI DEUTER  ...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 115;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 83;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_topi[pilih1];
                  	tamp_topi[6]++;
                     stok_topi[6] -= tamp_topi[6];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_topi[pilih1];
                  	tamp_topi[6]++;
                     stok_topi[6] -= tamp_topi[6];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			menutopi();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
      }
      }while(pilih!='4' ||pilih!='3' || pilih!='2' || pilih!='1'|| pilih!='5'|| pilih!='6'|| pilih!='7' );
}
////////////////////////////////////////////////////////////////////////////////
void menusleepingbag(){
	bingkai7harga();
   textcolor(6);
   gotoxy(18,13);cprintf("1.CONSINA");
   gotoxy(18,15);cprintf("STOK = %d",stok_sleepingbag[0]);
   gotoxy(15,17);cprintf("HARGA RP.320.000 ");
   gotoxy(58,13);cprintf("2.EIGER");
   gotoxy(58,15);cprintf("STOK = %d",stok_sleepingbag[1]);
   gotoxy(55,17);cprintf("HARGA RP.342.000 ");
   gotoxy(98,13);cprintf("3.COZMEED");
   gotoxy(98,15);cprintf("STOK = %d",stok_sleepingbag[2]);
   gotoxy(95,17);cprintf("HARGA RP.350.000 ");
   gotoxy(58,22);cprintf("4.REI");
   gotoxy(58,24);cprintf("STOK = %d",stok_sleepingbag[3]);
   gotoxy(55,26);cprintf("HARGA RP.325.000 ");
   gotoxy(19,31);cprintf("5.AVTECH");
   gotoxy(19,33);cprintf("STOK = %d",stok_sleepingbag[4]);
   gotoxy(14,35);cprintf("HARGA RP.362.000 ");
   gotoxy(59,31);cprintf("6.TNF");
   gotoxy(59,33);cprintf("STOK = %d",stok_sleepingbag[5]);
   gotoxy(54,35);cprintf("HARGA RP.400.000 ");
   gotoxy(99,31);cprintf("7.DEUTER");
   gotoxy(99,33);cprintf("STOK = %d",stok_sleepingbag[6]);
   gotoxy(94,35);cprintf("HARGA RP.390.000 ");
   do{
    gotoxy(60,39);pilih=satuInput();
   if(pilih=='1'){
         if(stok_sleepingbag[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SLEEPING BAG CONSINA  ...?(y/t)\n");gotoxy(59,39);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,39);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sleepingbag[pilih1];
                  	tamp_sleepingbag[0]++;
                     stok_sleepingbag[0] -= tamp_sleepingbag[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sleepingbag[pilih1];
                  	tamp_sleepingbag[0]++;
                     stok_sleepingbag[0] -= tamp_sleepingbag[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			menusleepingbag();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_sleepingbag[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SLEEPING BAG EIGER  ...?(y/t)\n");gotoxy(59,39);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,39);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sleepingbag[pilih1];
                  	tamp_sleepingbag[1]++;
                     stok_sleepingbag[1] -= tamp_sleepingbag[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sleepingbag[pilih1];
                  	tamp_sleepingbag[1]++;
                     stok_sleepingbag[1] -= tamp_sleepingbag[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			menusleepingbag();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_sleepingbag[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SLEEPING BAG COZMEED  ...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sleepingbag[pilih1];
                  	tamp_sleepingbag[2]++;
                     stok_sleepingbag[2] -= tamp_sleepingbag[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sleepingbag[pilih1];
                  	tamp_sleepingbag[2]++;
                     stok_sleepingbag[2] -= tamp_sleepingbag[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			menusleepingbag();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_sleepingbag[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SLEEPING BAG REI  ...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sleepingbag[pilih1];
                  	tamp_sleepingbag[3]++;
                     stok_sleepingbag[3] -= tamp_sleepingbag[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sleepingbag[pilih1];
                  	tamp_sleepingbag[3]++;
                     stok_sleepingbag[3] -= tamp_sleepingbag[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			menusleepingbag();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='5'){
         if(stok_sleepingbag[4] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SLEEPING BAG AVTECH  ...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 117;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 85;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sleepingbag[pilih1];
                  	tamp_sleepingbag[4]++;
                     stok_sleepingbag[4] -= tamp_sleepingbag[4];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sleepingbag[pilih1];
                  	tamp_sleepingbag[4]++;
                     stok_sleepingbag[4] -= tamp_sleepingbag[4];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			menusleepingbag();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='6'){
         if(stok_sleepingbag[5] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SLEEPING BAG TNF  ...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 116;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 84;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sleepingbag[pilih1];
                  	tamp_sleepingbag[5]++;
                     stok_sleepingbag[5] -= tamp_sleepingbag[5];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sleepingbag[pilih1];
                  	tamp_sleepingbag[5]++;
                     stok_sleepingbag[5] -= tamp_sleepingbag[5];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			menusleepingbag();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='7'){
         if(stok_sleepingbag[6] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI SLEEPING BAG DEUTER  ...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 115;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 83;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sleepingbag[pilih1];
                  	tamp_sleepingbag[6]++;
                     stok_sleepingbag[6] -= tamp_sleepingbag[6];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_sleepingbag[pilih1];
                  	tamp_sleepingbag[6]++;
                     stok_sleepingbag[6] -= tamp_sleepingbag[6];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			menusleepingbag();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,39);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,39);printf("                         "); Sleep(400);}
      }
      }while(pilih!='4' ||pilih!='3' || pilih!='2' || pilih!='1'|| pilih!='5'|| pilih!='6'|| pilih!='7' );
}
////////////////////////////////////////////////////////////////////////////////
void menutenda(){
	bingkai4(); textcolor(6);
	gotoxy(32,18);cprintf("1.EIGER");
   gotoxy(83,18);cprintf("2.REI");
   gotoxy(32,29);cprintf("3.AVTECH");
   gotoxy(81,29);cprintf("4.COZMEED");
	do{
   gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      	clrscr();
         teneig();
      }else if(pilih=='2'){
      	clrscr();
         tenrei();
      }else if(pilih=='3'){
      	clrscr();
         tenav();
      }else if(pilih=='4'){
      	clrscr();
         tencoz();
      }else{
      	for(int a=1;a<=3;a++){
         	gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
         	gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void teneig(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(25,17);cprintf("1.KAP 3  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_tenda_eiger[0]);
    gotoxy(25,21);cprintf("Rp.520.000");
    gotoxy(85,17);cprintf("2.KAP 5  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_tenda_eiger[1]);
    gotoxy(85,21);cprintf("Rp.565.000");
	 gotoxy(25,29);cprintf("3.KAP 6  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_tenda_eiger[2]);
    gotoxy(25,33);cprintf("Rp.590.000");
	 gotoxy(85,29);cprintf("4.KAP 8  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_tenda_eiger[3]);
    gotoxy(85,33);cprintf("Rp.620.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      if(stok_tenda_eiger[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				teneig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA EIGER KAP 3...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_eiger[pilih1];
                  	tamp_tenda_eiger[0]++;
                     stok_tenda_eiger[0] -= tamp_tenda_eiger[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_eiger[pilih1];
                  	tamp_tenda_eiger[0]++;
                     stok_tenda_eiger[0] -= tamp_tenda_eiger[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			teneig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
          if(stok_tenda_eiger[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				teneig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA EIGER KAP 5...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_eiger[pilih1];
                  	tamp_tenda_eiger[1]++;
                     stok_tenda_eiger[1] -= tamp_tenda_eiger[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_eiger[pilih1];
                  	tamp_tenda_eiger[1]++;
                     stok_tenda_eiger[1] -= tamp_tenda_eiger[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			teneig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
          if(stok_tenda_eiger[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				teneig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA EIGER KAP 6...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_eiger[pilih1];
                  	tamp_tenda_eiger[2]++;
                     stok_tenda_eiger[2] -= tamp_tenda_eiger[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_eiger[pilih1];
                  	tamp_tenda_eiger[2]++;
                     stok_tenda_eiger[2] -= tamp_tenda_eiger[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			teneig();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
          if(stok_tenda_eiger[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				teneig();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA EIGER KAP 8...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_eiger[pilih1];
                  	tamp_tenda_eiger[3]++;
                     stok_tenda_eiger[3] -= tamp_tenda_eiger[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_eiger[pilih1];
                  	tamp_tenda_eiger[3]++;
                     stok_tenda_eiger[3] -= tamp_tenda_eiger[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			teneig();
      		}else{
					for(int a=1;a<=3;a++){
						gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   					gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void tenrei(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(25,17);cprintf("1.KAP 3  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_tenda_rei[0]);
    gotoxy(25,21);cprintf("Rp.542.000");
    gotoxy(85,17);cprintf("2.KAP 5  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_tenda_rei[1]);
    gotoxy(85,21);cprintf("Rp.580.000");
	 gotoxy(25,29);cprintf("3.KAP 6  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_tenda_rei[2]);
    gotoxy(25,33);cprintf("Rp.605.000");
	 gotoxy(85,29);cprintf("4.KAP 8  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_tenda_rei[3]);
    gotoxy(85,33);cprintf("Rp.690.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      	if(stok_tenda_rei[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				tenrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA REI KAP 3...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_rei[pilih1];
                  	tamp_tenda_rei[0]++;
                     stok_tenda_rei[0] -= tamp_tenda_rei[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_rei[pilih1];
                  	tamp_tenda_rei[0]++;
                     stok_tenda_rei[0] -= tamp_tenda_rei[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			tenrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_tenda_rei[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				tenrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA REI KAP 5...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_rei[pilih1];
                  	tamp_tenda_rei[1]++;
                     stok_tenda_rei[1] -= tamp_tenda_rei[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_rei[pilih1];
                  	tamp_tenda_rei[1]++;
                     stok_tenda_rei[1] -= tamp_tenda_rei[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			tenrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_tenda_rei[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				tenrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA REI KAP 6...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_rei[pilih1];
                  	tamp_tenda_rei[2]++;
                     stok_tenda_rei[2] -= tamp_tenda_rei[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_rei[pilih1];
                  	tamp_tenda_rei[2]++;
                     stok_tenda_rei[2] -= tamp_tenda_rei[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			tenrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_tenda_rei[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				tenrei();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA REI KAP 8...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_rei[pilih1];
                  	tamp_tenda_rei[3]++;
                     stok_tenda_rei[3] -= tamp_tenda_rei[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_rei[pilih1];
                  	tamp_tenda_rei[3]++;
                     stok_tenda_rei[3] -= tamp_tenda_rei[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			tenrei();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void tenav(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(25,17);cprintf("1.KAP 3  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_tenda_avtech[0]);
    gotoxy(25,21);cprintf("Rp.331.000");
    gotoxy(85,17);cprintf("2.KAP 5  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_tenda_avtech[1]);
    gotoxy(85,21);cprintf("Rp.360.000");
	 gotoxy(25,29);cprintf("3.KAP 6  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_tenda_avtech[2]);
    gotoxy(25,33);cprintf("Rp.385.000");
	 gotoxy(85,29);cprintf("4.KAP 8  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_tenda_avtech[3]);
    gotoxy(85,33);cprintf("Rp.430.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
         if(stok_tenda_avtech[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				tenav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA AVTECH KAP 3...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_avtech[pilih1];
                  	tamp_tenda_avtech[0]++;
                     stok_tenda_avtech[0] -= tamp_tenda_avtech[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_avtech[pilih1];
                  	tamp_tenda_avtech[0]++;
                     stok_tenda_avtech[0] -= tamp_tenda_avtech[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			tenav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_tenda_avtech[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				tenav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA AVTECH KAP 5...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_avtech[pilih1];
                  	tamp_tenda_avtech[1]++;
                     stok_tenda_avtech[1] -= tamp_tenda_avtech[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_avtech[pilih1];
                  	tamp_tenda_avtech[1]++;
                     stok_tenda_avtech[1] -= tamp_tenda_avtech[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			tenav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_tenda_avtech[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				tenav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA AVTECH KAP 6...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_avtech[pilih1];
                  	tamp_tenda_avtech[2]++;
                     stok_tenda_avtech[2] -= tamp_tenda_avtech[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_avtech[pilih1];
                  	tamp_tenda_avtech[2]++;
                     stok_tenda_avtech[2] -= tamp_tenda_avtech[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			tenav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_tenda_avtech[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				tenav();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA AVTECH KAP 8...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_avtech[pilih1];
                  	tamp_tenda_avtech[3]++;
                     stok_tenda_avtech[3] -= tamp_tenda_avtech[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_avtech[pilih1];
                  	tamp_tenda_avtech[3]++;
                     stok_tenda_avtech[3] -= tamp_tenda_avtech[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			tenav();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}
////////////////////////////////////////////////////////////////////////////////
void tencoz(){
	bingkaiharga();
	 textcolor(6);
	 gotoxy(25,17);cprintf("1.KAP 3  ");
    gotoxy(26,20);cprintf("STOK = %d",stok_tenda_cozmeed[0]);
    gotoxy(25,21);cprintf("Rp.340.000");
    gotoxy(85,17);cprintf("2.KAP 5  ");
    gotoxy(86,20);cprintf("STOK = %d",stok_tenda_cozmeed[1]);
    gotoxy(85,21);cprintf("Rp.365.000");
	 gotoxy(25,29);cprintf("3.KAP 6  ");
    gotoxy(26,32);cprintf("STOK = %d",stok_tenda_cozmeed[2]);
    gotoxy(25,33);cprintf("Rp.380.000");
	 gotoxy(85,29);cprintf("4.KAP 8  ");
    gotoxy(86,32);cprintf("STOK = %d",stok_tenda_cozmeed[3]);
    gotoxy(85,33);cprintf("Rp.410.000");
    do{
    gotoxy(60,36);pilih=satuInput();
   	if(pilih=='1'){
      if(stok_tenda_cozmeed[0] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				tencoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA COZMEED KAP 3...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 121;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 89;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_cozmeed[pilih1];
                  	tamp_tenda_cozmeed[0]++;
                     stok_tenda_cozmeed[0] -= tamp_tenda_cozmeed[0];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_cozmeed[pilih1];
                  	tamp_tenda_cozmeed[0]++;
                     stok_tenda_cozmeed[0] -= tamp_tenda_cozmeed[0];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			tencoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='2'){
         if(stok_tenda_cozmeed[1] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				tencoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA COZMEED KAP 5...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 120;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 88;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_cozmeed[pilih1];
                  	tamp_tenda_cozmeed[1]++;
                     stok_tenda_cozmeed[1] -= tamp_tenda_cozmeed[1];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_cozmeed[pilih1];
                  	tamp_tenda_cozmeed[1]++;
                     stok_tenda_cozmeed[1] -= tamp_tenda_cozmeed[1];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			tencoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='3'){
         if(stok_tenda_cozmeed[2] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				tencoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA COZMEED KAP 6...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 119;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 87;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_cozmeed[pilih1];
                  	tamp_tenda_cozmeed[2]++;
                     stok_tenda_cozmeed[2] -= tamp_tenda_cozmeed[2];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_cozmeed[pilih1];
                  	tamp_tenda_cozmeed[2]++;
                     stok_tenda_cozmeed[2] -= tamp_tenda_cozmeed[2];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			tencoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else if(pilih=='4'){
         if(stok_tenda_cozmeed[3] <= 0){
			for(int a=1;a<=3;a++){
         	gotoxy(52,36);printf("STOK HABIS	!!!!!"); Sleep(400);
         	gotoxy(52,36);printf("                         "); Sleep(400);}
				tencoz();
         }else{
      	clrscr();
           bingkaijadi();
            do{
      		gotoxy(28,17);printf("APAKAH ANDA YAKIN AKAN MEMBELI TENDA COZMEED KAP 8...?(y/t)\n");gotoxy(59,34);pilih=satuInput();
   			if(pilih=='y' || pilih == 'Y'){
            	if(pilih == 'y'){
               	pilih1 = int(pilih) - 118;
               }else if(pilih == 'Y'){
                  pilih1 = int(pilih) - 86;
               }
            cek1 = false;

               do{
               bingkailain();
      			gotoxy(33,24);printf("APAKAH ANDA INGIN MEMBELI BARANG YANG LAIN...?(y/t)");gotoxy(59,34);lain=satuInput();
         			if(lain=='y' || lain == 'Y'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_cozmeed[pilih1];
                  	tamp_tenda_cozmeed[3]++;
                     stok_tenda_cozmeed[3] -= tamp_tenda_cozmeed[3];
               		clrscr();
               		pembelian();
            		}else if(lain=='t' || lain == 'T'){
                  	cek2 = false;
                     totalharga = totalharga + harga_tenda_cozmeed[pilih1];
                  	tamp_tenda_cozmeed[3]++;
                     stok_tenda_cozmeed[3] -= tamp_tenda_cozmeed[3];
            			clrscr();
                     tampil_transaksi();
         			}else{
            			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
                     cek2 = true;
            		}
               }while(cek2);
      		}else if(pilih=='t' || pilih == 'T'){
            	cek = false;
      			clrscr();
      			tencoz();
      		}else{
      			for(int a=1;a<=3;a++){
								gotoxy(58,34);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,34);printf("                         "); Sleep(400);}
               cek1 = true;
     		   }
            }while(cek1);
           }
      }else{
      	for(int a=1;a<=3;a++){
								gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
   							gotoxy(58,36);printf("                         "); Sleep(400);}

      }
   }while(pilih!='1' ||pilih!='2' ||pilih!='3' ||pilih!='4');
}

////////////////////////////////////////////////////////////////////////////////
void tentang(){
textcolor(3);
   char as[200] = "MAKMUR OUTDOOR MENYEDIAKAN BANYAK PERALATAN UNTUK MENDAKI ANDA ";
   for(int i=0; i<strlen(as); i++){
   	if(i == 0){
      	gotoxy(15,3);system("color 40");cprintf("          %c",as[i]);
      }else{
   		gotoxy(25+i,3);system("color 40");cprintf("%c",as[i]);
   	}
   }
textcolor(6);
   char as1[200] = "BANYAK SEKALI PILIHAN KEBUTUHAN MENDAKI ANDA ";
   for(int i=0; i<strlen(as1); i++){
   	if(i == 0){
      	gotoxy(20,4);system("color 40");cprintf("          %c",as1[i]);
      }else{
   		gotoxy(30+i,4);system("color 40");cprintf("%c",as1[i]);
   	}
   }
textcolor(5);
   char as2[200] = "TERLETAK DI SAMBI BOYOLALI";
   for(int i=0; i<strlen(as2); i++){
   	if(i == 0){
      	gotoxy(35,5);system("color 40");cprintf("          %c",as2[i]);
      }else{
   		gotoxy(45+i,5);system("color 40");cprintf("%c",as2[i]);
   	}
   }
	do{ textcolor(5);
   gotoxy(80,37);printf("PILIH 0 JIKA INGIN KEMBALI");
   gotoxy(60,36);pilih=getche();
   if(pilih=='0'){
   	clrscr();
   	menuawal();
   }else{
      	for(int a=1;a<=3;a++){ textcolor(5);
         	gotoxy(58,36);printf("INPUTAN SALAH !!!!!!!!!"); Sleep(400);
         	gotoxy(58,36);printf("                         "); Sleep(400);}

   }
   }while(pilih!='0');

}
////////////////////////////////////////////////////////////////////////////////
void tampil_transaksi(){
		for(int a=1;a<=120;a++){
   	gotoxy(a,1);cprintf("%c",219);Sleep(5);
   	gotoxy(a,40);cprintf("%c",219);
	}

	for(int a=1;a<=40;a++){
		gotoxy(1,a);cprintf("%c",219);Sleep(5);
   	gotoxy(120,a);cprintf("%c",219);
	}
   for(int a=15;a<=105;a++){
   	gotoxy(a,6);cprintf("%c",219);Sleep(5);
      gotoxy(a,10);cprintf("%c",219);
   	gotoxy(a,30);cprintf("%c",219);
	}

	for(int a=6;a<=30;a++){
		gotoxy(15,a);cprintf("%c",219);Sleep(5);
   	gotoxy(65,a);cprintf("%c",219);
      gotoxy(75,a);cprintf("%c",219);
      gotoxy(105,a);cprintf("%c",219);
	}
   gotoxy(30,8);printf("NAMA BARANG");
   gotoxy(67,8);printf("JUMLAH");
   gotoxy(86,8);printf("HARGA");
   for(int a=3;a<=50;a++){
   	gotoxy(a,33);cprintf("%c",219);Sleep(5);
   	gotoxy(a,37);cprintf("%c",219);
	}

	for(int a=33;a<=37;a++){
		gotoxy(3,a);cprintf("%c",219);Sleep(5);
   	gotoxy(50,a);cprintf("%c",219);
	}
   gotoxy(8,35);printf("TOTAL PEMBELIAN ANDA = Rp.");
   for(int a=70;a<=118;a++){
   	gotoxy(a,33);cprintf("%c",219);Sleep(5);
   	gotoxy(a,37);cprintf("%c",219);
	}

	for(int a=33;a<=37;a++){
		gotoxy(70,a);cprintf("%c",219);Sleep(5);
   	gotoxy(118,a);cprintf("%c",219);
	}
   gotoxy(75,35);printf("MASUKKAN UANG ANDA = Rp.");
	tamp_total_tas_eiger[0] = harga_tas_eiger[0] * tamp_tas_eiger[0];
   tamp_total_tas_eiger[1] = harga_tas_eiger[1] * tamp_tas_eiger[1];
   tamp_total_tas_eiger[2] = harga_tas_eiger[2] * tamp_tas_eiger[2];
   tamp_total_tas_eiger[3] = harga_tas_eiger[3] * tamp_tas_eiger[3];
   int b =7;
   for(int j=0; j<4; j++){
      if(tamp_tas_eiger[j] != NULL){
				gotoxy(28,4+b);printf("%s",tas_eiger[j]);
         	gotoxy(70,4+b); printf("%d",tamp_tas_eiger[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_tas_eiger[j]);
      	b+=1;
      }
   }
   tamp_total_tas_rei[0] = harga_tas_rei[0] * tamp_tas_rei[0];
   tamp_total_tas_rei[1] = harga_tas_rei[1] * tamp_tas_rei[1];
   tamp_total_tas_rei[2] = harga_tas_rei[2] * tamp_tas_rei[2];
   tamp_total_tas_rei[3] = harga_tas_rei[3] * tamp_tas_rei[3];
   for(int j=0; j<4; j++){
      if(tamp_tas_rei[j] != NULL){
				gotoxy(28,4+b);printf("%s",tas_rei[j]);
         	gotoxy(70,4+b); printf("%d",tamp_tas_rei[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_tas_rei[j]);
      	b+=1;
      }
   }
   tamp_total_tas_avtech[0] = harga_tas_avtech[0] * tamp_tas_avtech[0];
   tamp_total_tas_avtech[1] = harga_tas_avtech[1] * tamp_tas_avtech[1];
   tamp_total_tas_avtech[2] = harga_tas_avtech[2] * tamp_tas_avtech[2];
   tamp_total_tas_avtech[3] = harga_tas_avtech[3] * tamp_tas_avtech[3];
   for(int j=0; j<4; j++){
      if(tamp_tas_avtech[j] != NULL){
				gotoxy(28,4+b);printf("%s",tas_avtech[j]);
         	gotoxy(70,4+b); printf("%d",tamp_tas_avtech[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_tas_avtech[j]);
      	b+=1;
      }
   }
   tamp_total_tas_cozmeed[0] = harga_tas_cozmeed[0] * tamp_tas_cozmeed[0];
   tamp_total_tas_cozmeed[1] = harga_tas_cozmeed[1] * tamp_tas_cozmeed[1];
   tamp_total_tas_cozmeed[2] = harga_tas_cozmeed[2] * tamp_tas_cozmeed[2];
   tamp_total_tas_cozmeed[3] = harga_tas_cozmeed[3] * tamp_tas_cozmeed[3];
   for(int j=0; j<4; j++){
      if(tamp_tas_cozmeed[j] != NULL){
				gotoxy(28,4+b);printf("%s",tas_cozmeed[j]);
         	gotoxy(70,4+b); printf("%d",tamp_tas_cozmeed[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_tas_cozmeed[j]);
      	b+=1;
      }
   }
   tamp_total_jaket_eiger[0] = harga_jaket_eiger[0] * tamp_jaket_eiger[0];
   tamp_total_jaket_eiger[1] = harga_jaket_eiger[1] * tamp_jaket_eiger[1];
   tamp_total_jaket_eiger[2] = harga_jaket_eiger[2] * tamp_jaket_eiger[2];
   tamp_total_jaket_eiger[3] = harga_jaket_eiger[3] * tamp_jaket_eiger[3];
   for(int j=0; j<4; j++){
      if(tamp_jaket_eiger[j] != NULL){
				gotoxy(28,4+b);printf("%s",jaket_eiger[j]);
         	gotoxy(70,4+b); printf("%d",tamp_jaket_eiger[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_jaket_eiger[j]);
      	b+=1;
      }
   }
   tamp_total_jaket_rei[0] = harga_jaket_rei[0] * tamp_jaket_rei[0];
   tamp_total_jaket_rei[1] = harga_jaket_rei[1] * tamp_jaket_rei[1];
   tamp_total_jaket_rei[2] = harga_jaket_rei[2] * tamp_jaket_rei[2];
   tamp_total_jaket_rei[3] = harga_jaket_rei[3] * tamp_jaket_rei[3];
   for(int j=0; j<4; j++){
      if(tamp_jaket_rei[j] != NULL){
				gotoxy(28,4+b);printf("%s",jaket_rei[j]);
         	gotoxy(70,4+b); printf("%d",tamp_jaket_rei[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_jaket_rei[j]);
      	b+=1;
      }
   }
   tamp_total_jaket_avtech[0] = harga_jaket_avtech[0] * tamp_jaket_avtech[0];
   tamp_total_jaket_avtech[1] = harga_jaket_avtech[1] * tamp_jaket_avtech[1];
   tamp_total_jaket_avtech[2] = harga_jaket_avtech[2] * tamp_jaket_avtech[2];
   tamp_total_jaket_avtech[3] = harga_jaket_avtech[3] * tamp_jaket_avtech[3];
   for(int j=0; j<4; j++){
      if(tamp_jaket_avtech[j] != NULL){
				gotoxy(28,4+b);printf("%s",jaket_avtech[j]);
         	gotoxy(70,4+b); printf("%d",tamp_jaket_avtech[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_jaket_avtech[j]);
      	b+=1;
      }
   }
   tamp_total_jaket_cozmeed[0] = harga_jaket_cozmeed[0] * tamp_jaket_cozmeed[0];
   tamp_total_jaket_cozmeed[1] = harga_jaket_cozmeed[1] * tamp_jaket_cozmeed[1];
   tamp_total_jaket_cozmeed[2] = harga_jaket_cozmeed[2] * tamp_jaket_cozmeed[2];
   tamp_total_jaket_cozmeed[3] = harga_jaket_cozmeed[3] * tamp_jaket_cozmeed[3];
   for(int j=0; j<4; j++){
      if(tamp_jaket_cozmeed[j] != NULL){
				gotoxy(28,4+b);printf("%s",jaket_cozmeed[j]);
         	gotoxy(70,4+b); printf("%d",tamp_jaket_cozmeed[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_jaket_cozmeed[j]);
      	b+=1;
      }
   }
   tamp_total_sepatu_eiger[0] = harga_sepatu_eiger[0] * tamp_sepatu_eiger[0];
   tamp_total_sepatu_eiger[1] = harga_sepatu_eiger[1] * tamp_sepatu_eiger[1];
   tamp_total_sepatu_eiger[2] = harga_sepatu_eiger[2] * tamp_sepatu_eiger[2];
   tamp_total_sepatu_eiger[3] = harga_sepatu_eiger[3] * tamp_sepatu_eiger[3];
   for(int j=0; j<4; j++){
      if(tamp_sepatu_eiger[j] != NULL){
				gotoxy(28,4+b);printf("%s",sepatu_eiger[j]);
         	gotoxy(70,4+b); printf("%d",tamp_sepatu_eiger[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_sepatu_eiger[j]);
      	b+=1;
      }
   }
   tamp_total_sepatu_rei[0] = harga_sepatu_rei[0] * tamp_sepatu_rei[0];
   tamp_total_sepatu_rei[1] = harga_sepatu_rei[1] * tamp_sepatu_rei[1];
   tamp_total_sepatu_rei[2] = harga_sepatu_rei[2] * tamp_sepatu_rei[2];
   tamp_total_sepatu_rei[3] = harga_sepatu_rei[3] * tamp_sepatu_rei[3];
   for(int j=0; j<4; j++){
      if(tamp_sepatu_rei[j] != NULL){
				gotoxy(28,4+b);printf("%s",sepatu_rei[j]);
         	gotoxy(70,4+b); printf("%d",tamp_sepatu_rei[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_sepatu_rei[j]);
      	b+=1;
      }
   }
   tamp_total_sepatu_avtech[0] = harga_sepatu_avtech[0] * tamp_sepatu_avtech[0];
   tamp_total_sepatu_avtech[1] = harga_sepatu_avtech[1] * tamp_sepatu_avtech[1];
   tamp_total_sepatu_avtech[2] = harga_sepatu_avtech[2] * tamp_sepatu_avtech[2];
   tamp_total_sepatu_avtech[3] = harga_sepatu_avtech[3] * tamp_sepatu_avtech[3];
   for(int j=0; j<4; j++){
      if(tamp_sepatu_avtech[j] != NULL){
				gotoxy(28,4+b);printf("%s",sepatu_avtech[j]);
         	gotoxy(70,4+b); printf("%d",tamp_sepatu_avtech[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_sepatu_avtech[j]);
      	b+=1;
      }
   }
   tamp_total_sepatu_cozmeed[0] = harga_sepatu_cozmeed[0] * tamp_sepatu_cozmeed[0];
   tamp_total_sepatu_cozmeed[1] = harga_sepatu_cozmeed[1] * tamp_sepatu_cozmeed[1];
   tamp_total_sepatu_cozmeed[2] = harga_sepatu_cozmeed[2] * tamp_sepatu_cozmeed[2];
   tamp_total_sepatu_cozmeed[3] = harga_sepatu_cozmeed[3] * tamp_sepatu_cozmeed[3];
   for(int j=0; j<4; j++){
      if(tamp_sepatu_cozmeed[j] != NULL){
				gotoxy(28,4+b);printf("%s",sepatu_cozmeed[j]);
         	gotoxy(70,4+b); printf("%d",tamp_sepatu_cozmeed[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_sepatu_cozmeed[j]);
      	b+=1;
      }
   }
   tamp_total_celana_eiger[0] = harga_celana_eiger[0] * tamp_celana_eiger[0];
   tamp_total_celana_eiger[1] = harga_celana_eiger[1] * tamp_celana_eiger[1];
   tamp_total_celana_eiger[2] = harga_celana_eiger[2] * tamp_celana_eiger[2];
   tamp_total_celana_eiger[3] = harga_celana_eiger[3] * tamp_celana_eiger[3];
   for(int j=0; j<4; j++){
      if(tamp_celana_eiger[j] != NULL){
				gotoxy(28,4+b);printf("%s",celana_eiger[j]);
         	gotoxy(70,4+b); printf("%d",tamp_celana_eiger[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_celana_eiger[j]);
      	b+=1;
      }
   }
   tamp_total_celana_rei[0] = harga_celana_rei[0] * tamp_celana_rei[0];
   tamp_total_celana_rei[1] = harga_celana_rei[1] * tamp_celana_rei[1];
   tamp_total_celana_rei[2] = harga_celana_rei[2] * tamp_celana_rei[2];
   tamp_total_celana_rei[3] = harga_celana_rei[3] * tamp_celana_rei[3];
   for(int j=0; j<4; j++){
      if(tamp_celana_rei[j] != NULL){
				gotoxy(28,4+b);printf("%s",celana_rei[j]);
         	gotoxy(70,4+b); printf("%d",tamp_celana_rei[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_celana_rei[j]);
      	b+=1;
      }
   }
   tamp_total_celana_avtech[0] = harga_celana_avtech[0] * tamp_celana_avtech[0];
   tamp_total_celana_avtech[1] = harga_celana_avtech[1] * tamp_celana_avtech[1];
   tamp_total_celana_avtech[2] = harga_celana_avtech[2] * tamp_celana_avtech[2];
   tamp_total_celana_avtech[3] = harga_celana_avtech[3] * tamp_celana_avtech[3];
   for(int j=0; j<4; j++){
      if(tamp_celana_avtech[j] != NULL){
				gotoxy(28,4+b);printf("%s",celana_avtech[j]);
         	gotoxy(70,4+b); printf("%d",tamp_celana_avtech[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_celana_avtech[j]);
      	b+=1;
      }
   }
   tamp_total_celana_cozmeed[0] = harga_celana_cozmeed[0] * tamp_celana_cozmeed[0];
   tamp_total_celana_cozmeed[1] = harga_celana_cozmeed[1] * tamp_celana_cozmeed[1];
   tamp_total_celana_cozmeed[2] = harga_celana_cozmeed[2] * tamp_celana_cozmeed[2];
   tamp_total_celana_cozmeed[3] = harga_celana_cozmeed[3] * tamp_celana_cozmeed[3];
   for(int j=0; j<4; j++){
      if(tamp_celana_cozmeed[j] != NULL){
				gotoxy(28,4+b);printf("%s",celana_cozmeed[j]);
         	gotoxy(70,4+b); printf("%d",tamp_celana_cozmeed[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_celana_cozmeed[j]);
      	b+=1;
      }
   }
   tamp_total_tenda_eiger[0] = harga_tenda_eiger[0] * tamp_tenda_eiger[0];
   tamp_total_tenda_eiger[1] = harga_tenda_eiger[1] * tamp_tenda_eiger[1];
   tamp_total_tenda_eiger[2] = harga_tenda_eiger[2] * tamp_tenda_eiger[2];
   tamp_total_tenda_eiger[3] = harga_tenda_eiger[3] * tamp_tenda_eiger[3];
   for(int j=0; j<4; j++){
      if(tamp_tenda_eiger[j] != NULL){
				gotoxy(28,4+b);printf("%s",tenda_eiger[j]);
         	gotoxy(70,4+b); printf("%d",tamp_tenda_eiger[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_tenda_eiger[j]);
      	b+=1;
      }
   }
   tamp_total_tenda_rei[0] = harga_tenda_rei[0] * tamp_tenda_rei[0];
   tamp_total_tenda_rei[1] = harga_tenda_rei[1] * tamp_tenda_rei[1];
   tamp_total_tenda_rei[2] = harga_tenda_rei[2] * tamp_tenda_rei[2];
   tamp_total_tenda_rei[3] = harga_tenda_rei[3] * tamp_tenda_rei[3];
   for(int j=0; j<4; j++){
      if(tamp_tenda_rei[j] != NULL){
				gotoxy(28,4+b);printf("%s",tenda_rei[j]);
         	gotoxy(70,4+b); printf("%d",tamp_tenda_rei[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_tenda_rei[j]);
      	b+=1;
      }
   }
   tamp_total_tenda_avtech[0] = harga_tenda_avtech[0] * tamp_tenda_avtech[0];
   tamp_total_tenda_avtech[1] = harga_tenda_avtech[1] * tamp_tenda_avtech[1];
   tamp_total_tenda_avtech[2] = harga_tenda_avtech[2] * tamp_tenda_avtech[2];
   tamp_total_tenda_avtech[3] = harga_tenda_avtech[3] * tamp_tenda_avtech[3];
   for(int j=0; j<4; j++){
      if(tamp_tenda_avtech[j] != NULL){
				gotoxy(28,4+b);printf("%s",tenda_avtech[j]);
         	gotoxy(70,4+b); printf("%d",tamp_tenda_avtech[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_tenda_avtech[j]);
      	b+=1;
      }
   }
   tamp_total_tenda_cozmeed[0] = harga_tenda_cozmeed[0] * tamp_tenda_cozmeed[0];
   tamp_total_tenda_cozmeed[1] = harga_tenda_cozmeed[1] * tamp_tenda_cozmeed[1];
   tamp_total_tenda_cozmeed[2] = harga_tenda_cozmeed[2] * tamp_tenda_cozmeed[2];
   tamp_total_tenda_cozmeed[3] = harga_tenda_cozmeed[3] * tamp_tenda_cozmeed[3];
   for(int j=0; j<4; j++){
      if(tamp_tenda_cozmeed[j] != NULL){
				gotoxy(28,4+b);printf("%s",tenda_cozmeed[j]);
         	gotoxy(70,4+b); printf("%d",tamp_tenda_cozmeed[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_tenda_cozmeed[j]);
      	b+=1;
      }
   }

   tamp_total_topi[0] = harga_topi[0] * tamp_topi[0];
   tamp_total_topi[1] = harga_topi[1] * tamp_topi[1];
   tamp_total_topi[2] = harga_topi[2] * tamp_topi[2];
   tamp_total_topi[3] = harga_topi[3] * tamp_topi[3];
   tamp_total_topi[4] = harga_topi[4] * tamp_topi[4];
   tamp_total_topi[5] = harga_topi[5] * tamp_topi[5];
   tamp_total_topi[6] = harga_topi[6] * tamp_topi[6];
   for(int j=0; j<7; j++){
      if(tamp_topi[j] != NULL){
				gotoxy(28,4+b);printf("%s",topi[j]);
         	gotoxy(70,4+b); printf("%d",tamp_topi[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_topi[j]);
      	b+=1;
      }
   }
   tamp_total_sleepingbag[0] = harga_sleepingbag[0] * tamp_sleepingbag[0];
   tamp_total_sleepingbag[1] = harga_sleepingbag[1] * tamp_sleepingbag[1];
   tamp_total_sleepingbag[2] = harga_sleepingbag[2] * tamp_sleepingbag[2];
   tamp_total_sleepingbag[3] = harga_sleepingbag[3] * tamp_sleepingbag[3];
   tamp_total_sleepingbag[4] = harga_sleepingbag[4] * tamp_sleepingbag[4];
   tamp_total_sleepingbag[5] = harga_sleepingbag[5] * tamp_sleepingbag[5];
   tamp_total_sleepingbag[6] = harga_sleepingbag[6] * tamp_sleepingbag[6];
   for(int j=0; j<7; j++){
      if(tamp_sleepingbag[j] != NULL){
				gotoxy(28,4+b);printf("%s",sleepingbag[j]);
         	gotoxy(70,4+b); printf("%d",tamp_sleepingbag[j]);
            gotoxy(85,4+b); printf("%d",tamp_total_sleepingbag[j]);
      	b+=1;
      }
   }gotoxy(36,35);printf("%d", totalharga);

   while(true){
		gotoxy(99,35); gets(uang[u]);
      if(valangka(uang[u])==true){
      	break;
      }else{
      	gotoxy(99,35); printf("Nomor Tidak Valid !"); Sleep(500);
         gotoxy(99,35); printf("                   ");
      }
   }
   uangakhir=atoi(uang[u]);

   if(uangakhir>=totalharga){
   	gotoxy(35,38);printf("kembalian anda  : Rp. %d",uangakhir-totalharga);
   }else if(uangakhir<totalharga){
       	for(int a=1;a<=3;a++){
   			gotoxy(50,39);printf("  NOMINAL UANG KURANG !!!       ");Sleep(500);
   			gotoxy(50,39);printf("                                     ");Sleep(500);

   		}
   }
   printf("");Sleep(5000);
   clrscr();
   selesai();
}
////////////////////////////////////////////////////////////////////////////////
void selesai(){
	for(int a=24;a<=92;a++){  textcolor(9);
     	    gotoxy(a,16);cprintf("%c",219);Sleep(5);
   	    gotoxy(a,18);cprintf("%c",219);
	}
   for(int a=16;a<=18;a++){  textcolor(9);
		   gotoxy(24,a);cprintf("%c",219);Sleep(5);
   		gotoxy(92,a);cprintf("%c",219);
	}
   gotoxy(30,17);printf("TERIMA KASIH TELAH BERBELANJA DI MAKMUR ADVENTURE");
   gotoxy(40,20);printf("PROGRAM AKAN BERAKHIR DALAM ");

   for(int a=5;a>=1;a--){
   gotoxy(70,20);printf("%d",a);Sleep(1000);
   }exit(0);
}
////////////////////////////////////////////////////////////////////////////////
bool valangka(char uang[]){
    if(uang[0]=='0'){
    	return false;
    }
    for(int a=0; uang[a]!=NULL; a++){
   	if(!(uang[a]>='0' && uang[a]<='9' )){
      	return false;
      }

    }
    return true;

}

////////////////////////////////////////////////////////////////////////////////
main(){
	bingkaiutama();
   getch();
}
