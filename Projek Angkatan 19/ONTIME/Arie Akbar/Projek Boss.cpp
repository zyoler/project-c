#include <stdio.h>
#include <conio.h>
#include <windows.h>

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                            	FIRST PROJECT                                //
//                                                                            //
//												 BY                                       //
//                                                                            //
//                                ARIE AKBAR                                  //
//                                                                            //
//                         D3 MANAJEMEN INFORMATIKA                           //
//                                                                            //
//                            	WIDHT	:	120                                 //
//                                                                            //
//                              HEIGHT	:	40                                  //
//                                                                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

////=============================== PROTOTYPE ==============================////

void bingkai();
void menu_awal();
void kodeAkses();
void keluar();
	void layar();
	void layar2();
	void hps_menu();
   void clear(char a[],int x,int y);
void judul();
void judul_2();
	void tentang();
	void utama();
   void info();
void kolom1();
void kolom2();
void kolomObat();
	void obatA();
   void obatB();
   void obatC();
   void obatD();
   void obatE();
void bukti();
void napem();
void alamat();
void bayar();

////============================ Variable Global ===========================////

char pass[15];
char pilih;
   char unit[50];
   int tamp;
   int tamp1;
char nama[100];
char almt[100];
char nmr[50];
	int stock[100]={20,20,20,20,20,25,25,25,25,25,20,20,20,15,15};
	int stock1[100]={25,20,25,20,25,20,25,25,20,25,20,10,18,15,15};
int harga[100]={45000,10000,21000,17000,15000,2000,2500,5000,3000,47000,39000,35000,194000};
int harga1[100]={8000,40000,7000,30000,4000,18000,20000,19000,500000,25000,175000,138000};
int total[100];

	int jmlh;
   int jmlh1;
char stck[50];
char hrga[50];
   int total_belanja=0;
   char duit[50];
	int uang;

int valnam(char a[]);
int valmat(char a[]);
int valuit(char a[]);


////================================ Bingkai ===============================////

void bingkai(int p,int l,int x,int y,int c){

//atas bawah
   textcolor(c);
   p-=1;
   l-=1;
 	for(int a=0;a<=p;a++){
   	gotoxy(x+a,y);cprintf("%c",219);
      gotoxy(x+a,y+l);cprintf("%c",219);
   }

//kirikanan
   for(int b=0;b<=l;b++){
   	gotoxy(x,y+b);cprintf("%c",219);
      gotoxy(x+p,y+b);cprintf("%c",219);
      //gotoxy(x+1,y+b);cprintf("%c",219);
      //gotoxy(x+p-1,y+b);cprintf("%c",219);
   }
}

void load(){
	for (int a=1,b=1;a<=100;a++){
   	gotoxy(54,35);printf(" Loading  %d % ",a);Sleep(20);

      if(a%2==0){
      	textcolor(7);
      	gotoxy(b+36,37);cprintf("%c",219);Sleep(30);b++;
      }
   }

}

////================================ Clear =================================////

void layar(){
	textcolor(8);
	for(int y=3;y<=38;y++){
   	for(int x=4;x<118;x++){
      	gotoxy(x,y);cprintf("%c",219);
      }
   }
}
void layar2(){
	textbackground(2);
	for(int y=3;y<=38;y++){
   	for(int x=4;x<118;x++){
      	gotoxy(x,y);cprintf("%c",219);
      }
   }
}

void hps_menu(){
	textcolor(0);
	for(int y=2;y<=39;y++){
   	for(int x=2;x<=119;x++){
      	gotoxy(x,y);cprintf("%c",219);
      }
   }
}

void clear(char a[],int x,int y){
	for(int z=0;z<strlen(a);z++){
   	gotoxy(x+z,y);printf(" ");
   }
}


////============================ Menu Awal =================================////

void menu_awal(){
   bingkai(120,40,1,1,9);
   judul();
   layar();
   for (int a=1;a<=3;a++){
   	for (int b=1;b<=23;b++){
      	textcolor(0);
         gotoxy(50+b,13+a);cprintf("%c",219);
         gotoxy(50+b,19+a);cprintf("%c",219);
         gotoxy(50+b,25+a);cprintf("%c",219);
      }
   }
   bingkai(25,5,50,13,20);
   bingkai(25,5,50,19,22);
   bingkai(25,5,50,25,26);
   gotoxy(55,15);cprintf(" 1. A D M I N ");
   gotoxy(55,21);cprintf(" 2. A B O U T ");
   gotoxy(55,27);cprintf(" 3. E X I T ");
   gotoxy(46,34);cprintf(" << Tekan Pilihan Anda (1 - 3) >> ");
   gotoxy(100,37);pilih=getch();
   while (pilih>0){
   	if (pilih=='1'){
         layar();
         	judul_2();
      		kodeAkses();
         utama();
   	}
   	else if (pilih=='2'){
         hps_menu();
         for (int a=2;a<116;a++){
         	gotoxy(2+a,12);printf("%c",220);
         }
         tentang();
   	}else if (pilih=='3'){
			keluar();
   	}
      else {
         textcolor(8);
         gotoxy(57,36);cprintf("Inputan Salah");Sleep(1000);
      	gotoxy(57,36);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219);
         gotoxy(100,37);pilih=getch();
      }
   }
}

////========================== Keluar - Masuk ==============================////

void kodeAkses(){

   textcolor(0);
   for(int a=1;a<=5;a++){
   	for(int b=1;b<=35;b++){
      	gotoxy(b+43,a+25);cprintf("%c",219);
      }
   }
   textcolor(10);
   for(int a=1;a<=5;a++){
   	for(int b=1;b<=36;b++){
         if(a==1 || b==1 || a==5 || b==36){
      	gotoxy(b+43,a+25);cprintf("%c",219);
         }
      }
   }

   char pass[15];
   gotoxy(46,28);printf("Masukkan Password: ");
   	gotoxy(65,28);printf("Maks 6 Digit");Sleep(500);
      gotoxy(65,28);printf("            ");
   int x=0;
   gotoxy(65,28);pass[x]=getch();
   while(pass[x]!=13){
   	if(pass[x]==8){
      	x--;
         if(x<0){
         	x=0;
         }gotoxy(65+x,28);printf(" ");
      }
      else{
         printf("*");
         x++;
      }
      if(x>6){
      	x=6;gotoxy(71,28);printf(" ");
      }
      gotoxy(65+x,28);pass[x]=getch();

   }pass[x]=NULL;
   if((strlen(pass)<=6) && (strcmp(pass,"BgBoss")==0)){
   			load();
            	Sleep(1000);
           	utama();
   }
   else{
      gotoxy(65,28);printf("Wrong Code!!!");Sleep(1000);
      gotoxy(65,28);printf("             ");
      kodeAkses();
   }

}

void keluar(){

      hps_menu();
      textcolor(2);
      textbackground(0);
      gotoxy(24,15);cprintf("@@@@@@@  @@@@@  @@@@   @  @     @   @@@    @   @   @@@    @@@@   @  @   @");
      gotoxy(24,16);cprintf("   @     @      @   @  @  @@   @@  @   @   @  @   @   @  @       @  @   @");
      gotoxy(24,17);cprintf("   @     @@@@   @@@@   @  @ @ @ @  @@@@@   @@@    @@@@@   @@@@   @  @@@@@");
      gotoxy(24,18);cprintf("   @     @      @  @   @  @  @  @  @   @   @  @   @   @       @  @  @   @");
   	gotoxy(24,19);cprintf("   @     @@@@@  @   @  @  @     @  @   @   @   @  @   @   @@@@   @  @   @");


      bingkai(35,6,44,27,9);
      gotoxy(50,29);cprintf("COPYRIGHT BY ARIE AKBAR");
      gotoxy(49,30);cprintf("D3 MANAJEMEN  INFORMATIKA");Sleep(5000);
      exit(0);

}


////================================ Judul =================================////

void judul(){
	hps_menu();
	for(int i=1;i<=20;i++){
		textbackground(8);
		textcolor(i);
		gotoxy(50,10);cprintf("W E L C O M E  T O");Sleep(10);
		gotoxy(7,15);cprintf("    ****    ******       ****    *********  ********  ***      ***                                           ");Sleep(5);
		gotoxy(7,16);cprintf("   ******   *******     ******   *********  ********  ***     ***                                            ");Sleep(5);
		gotoxy(7,17);cprintf("  ***  ***  ***  ***   ***  ***     ***     ***       ***    ***                                             ");Sleep(5);
		gotoxy(7,18);cprintf("  ***  ***  ***  ****  ***  ***     ***     ***       ***   ***                                              ");Sleep(5);
		gotoxy(7,19);cprintf("  ***  ***  ***  ****  ***  ***     ***     ***       ***  ***       *******    ****    ***   ***    ****    ");Sleep(5);
		gotoxy(7,20);cprintf("  ***  ***  ***  ***   ***  ***     ***     ******    *******        *******   ******   ***   ***   ******   ");Sleep(5);
		gotoxy(7,21);cprintf("  ********  *******    ***  ***     ***     ******    *******            ***  ***  ***  ***   ***  ***  ***  ");Sleep(5);
		gotoxy(7,22);cprintf("  ********  ******     ***  ***     ***     ***       ***  ***           ***  ***  ***  ***   ***  ***  ***  ");Sleep(5);
		gotoxy(7,23);cprintf("  ***  ***  ***        ***  ***     ***     ***       ***   ***          ***  ********   *******   ********  ");Sleep(5);
		gotoxy(7,24);cprintf("  ***  ***  ***        ***  ***     ***     ***       ***    ***    *    ***  ********     ***     ********  ");Sleep(5);
		gotoxy(7,25);cprintf("  ***  ***  ***         ******      ***     ********  ***     ***   *******   ***  ***     ***     ***  ***  ");Sleep(5);
		gotoxy(7,26);cprintf("  ***  ***  ***          ****       ***     ********  ***      ***   *****    ***  ***     ***     ***  ***  ");Sleep(5);
		gotoxy(43,31);cprintf("P R O G R E M M E R  S E J A T I");Sleep(10);
	}
}

void judul_2(){

	for(int i=1;i<=22;i++){
		textbackground(8);
		textcolor(i);
		gotoxy(7,9);cprintf("    ****    ******       ****    *********  ********  ***      ***                                           ");Sleep(1);
		gotoxy(7,10);cprintf("   ******   *******     ******   *********  ********  ***     ***                                            ");Sleep(1);
		gotoxy(7,11);cprintf("  ***  ***  ***  ***   ***  ***     ***     ***       ***    ***                                             ");Sleep(1);
		gotoxy(7,12);cprintf("  ***  ***  ***  ****  ***  ***     ***     ***       ***   ***                                              ");Sleep(1);
      gotoxy(7,13);cprintf("  ***  ***  ***  ****  ***  ***     ***     ***       ***  ***       *******    ****    ***   ***    ****    ");Sleep(1);
		gotoxy(7,14);cprintf("  ***  ***  ***  ***   ***  ***     ***     ******    *******        *******   ******   ***   ***   ******   ");Sleep(1);
		gotoxy(7,15);cprintf("  ********  *******    ***  ***     ***     ******    *******            ***  ***  ***  ***   ***  ***  ***  ");Sleep(1);
		gotoxy(7,16);cprintf("  ********  ******     ***  ***     ***     ***       ***  ***           ***  ***  ***  ***   ***  ***  ***  ");Sleep(1);
		gotoxy(7,17);cprintf("  ***  ***  ***        ***  ***     ***     ***       ***   ***          ***  ********   *******   ********  ");Sleep(1);
      gotoxy(7,18);cprintf("  ***  ***  ***        ***  ***     ***     ***       ***    ***    *    ***  ********     ***     ********  ");Sleep(1);
		gotoxy(7,19);cprintf("  ***  ***  ***         ******      ***     ********  ***     ***   *******   ***  ***     ***     ***  ***  ");Sleep(1);
		gotoxy(7,20);cprintf("  ***  ***  ***          ****       ***     ********  ***      ***   *****    ***  ***     ***     ***  ***  ");Sleep(1);
	}
}

////=============================== About ==================================////

void tentang(){

	textcolor(20);
	gotoxy(15,5);cprintf("N A M A     :   A R I E  A K B A R");
   gotoxy(15,7);cprintf("N I M       :   0 2 0 4 2 0 1 1 0 0 4");
   gotoxy(15,9);cprintf("P R O D I   :   D 3  M A N A J E M E N   I N F O R M A T I K A");
   gotoxy(5,38);cprintf("@ C O P Y R I G H T  B Y  A R I E  A K B A R");
   gotoxy(74,37);cprintf("TEKAN TOMBOL 'BackSpace' UNTUK KEMBALI !!!");
   gotoxy(15,15);cprintf("Tempat/Tanggal lahir : Rimbo Bujang,25 Maret 2002");
   gotoxy(15,17);cprintf("Hobby                : Volly Ball");
   gotoxy(15,19);cprintf("Alamat               : Batusangkar - Provinsi SUMBAR");
   gotoxy(15,21);cprintf("Agama                : Islam");
   gotoxy(15,23);cprintf("Golongan Darah       : O");
   gotoxy(15,25);cprintf("Pendidikan           : Mahasiswa");
   gotoxy(15,27);cprintf("Asal Sekolah         : Pondok Pesantren Thawalib Tj.Limau");

   pilih=getch();
   while(pilih){
   	if(pilih==8){
   		menu_awal();
   	}
   	else{
   		pilih=getch();
   	}
   }

}

////============================= Tabel/kolom ==============================////

void kolom1(){
   for(int x=1;x<=114;x++){
      textcolor(0);
   	gotoxy(x+3,8);cprintf("%c",219);
   }
}

void kolomObat(){

   hps_menu();
   for(int x=1;x<=114;x++){
      textcolor(9);
   	gotoxy(x+3,7);cprintf("%c",219);
   }
   gotoxy(50,4);printf(" A P O T E K  J A Y A ");
   gotoxy(9,13);printf("KODE");
   gotoxy(21,13);printf("N A M A  O B A T");
   gotoxy(46,13);printf("STOCK");
   gotoxy(56,13);printf("HARGA");
   gotoxy(66,13);printf("UNIT");
   gotoxy(76,13);printf("J U M L A H");
	for (int x=1;x<=15;x++){
   	for (int y=1;y<=85;y++){
      		textcolor(3);
      	if(x==1 || y==1 || x==15 || y==85){
      		gotoxy(6+y,10+x);cprintf("%c",219);
            gotoxy(6+y,15);cprintf("%c",219);
            gotoxy(14,10+x);cprintf("%c",219);
            gotoxy(44,10+x);cprintf("%c",219);
            gotoxy(52,10+x);cprintf("%c",219);
            gotoxy(64,10+x);cprintf("%c",219);
            gotoxy(71,10+x);cprintf("%c",219);
      	}
      }
   }

}


////============================== Data Pembeli ============================////

void utama(){
	layar();
	kolom1();
   bingkai(25,5,9,11,0);
   bingkai(26,5,48,11,0);
   bingkai(25,5,88,11,0);
   bingkai(25,5,29,20,0);
   bingkai(25,5,68,20,0);
   bingkai(25,5,9,29,0);
   bingkai(26,5,48,29,0);
   bingkai(27,5,86,32,0);
   textbackground(7);
   gotoxy(50,5);cprintf(" A P O T E K  J A Y A ");
   //Keluhan
   gotoxy(88,34);cprintf("K E L U H A N :        ");
   gotoxy(11,13);cprintf("A. DEMAM-BADAN PANAS ");
   gotoxy(52,13);cprintf(" B. SAKIT  KEPALA ");
   gotoxy(90,13);cprintf(" C. A S A M  U R A T ");
   gotoxy(31,22);cprintf(" D. S A K I T  M A G ");
   gotoxy(70,22);cprintf("E. F L U & B A T U K ");
   gotoxy(11,31);cprintf("F. I N F O R M A S I ");
   gotoxy(50,31);cprintf("G. B A C K T O H O M E");
   gotoxy(104,34);pilih=getche();

   while(pilih){
   	if(pilih=='A'){
      	obatA();
   	}
      else if(pilih=='B'){
      	obatB();
      }
      else if(pilih=='C'){
      	obatC();
      }
      else if(pilih=='D'){
      	obatD();
      }
      else if(pilih=='E'){
      	obatE();
      }
      else if(pilih=='F'){
      	info();
      }
      else if(pilih=='G'){
      	menu_awal();
      }
   	else{
   		gotoxy(104,34);cprintf("SALAH!!");Sleep(500);
         gotoxy(104,34);cprintf("       ");
         gotoxy(104,34);pilih=getche();
   	}
   }

}

////============================= Nama-Nama Obat ===========================////

void obatA(){
	kolomObat();
   textcolor(4);
   textbackground(0);
	gotoxy(10,16);cprintf("1");
   gotoxy(16,16);cprintf("P A N A D O L  A N A K");
   gotoxy(47,16);cprintf("%d",stock[0]);
   gotoxy(54,16);cprintf("Rp  %d",harga[0]);
   gotoxy(10,18);cprintf("2");
   gotoxy(16,18);cprintf("P Y R E X I N PARACETAMOL");
   gotoxy(47,18);cprintf("%d",stock[1]);
   gotoxy(54,18);cprintf("Rp  %d",harga[1]);
   gotoxy(10,20);cprintf("3");
   gotoxy(16,20);cprintf("T E R M O R E X DROPS");
   gotoxy(47,20);cprintf("%d",stock[2]);
   gotoxy(54,20);cprintf("Rp  %d",harga[2]);
   gotoxy(10,22);cprintf("4");
   gotoxy(16,22);cprintf("T E R M O R E X SYRUP");
   gotoxy(47,22);cprintf("%d",stock[3]);
   gotoxy(54,22);cprintf("Rp  %d",harga[3]);
   gotoxy(10,24);cprintf("5");
   gotoxy(16,24);cprintf("S A N M O L SYRUP");
   gotoxy(47,24);cprintf("%d",stock[4]);
   gotoxy(54,24);cprintf("Rp  %d",harga[4]);
   bingkai(48,5,7,29,9);
   bingkai(27,5,60,34,9);
   bingkai(27,5,89,34,9);
   gotoxy(62,36);cprintf("TEKAN 'S' UNTUK SELESAI");
   gotoxy(91,36);cprintf("TEKAN 'B' UNTUK KEMBALI");
   gotoxy(9,31);cprintf("Masukkan Kode Pilihan Anda :");
   gotoxy(38,31);pilih=getche();
   int x=0;
   int pilih_menu=0;
   while(pilih){

      if(pilih=='S'){
      	bukti();
      }
      else if(pilih=='B'){
      	utama();
      }
   	else if(pilih=='1'){
      	gotoxy(67,16);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[0]){
               jmlh=harga[0]*tamp;
         		stock[0]-=tamp;
         		gotoxy(47,16);printf("  ");
         		gotoxy(47,16);cprintf("%d",stock[0]);
               gotoxy(74,16);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,16);
            	gotoxy(67,16);gets(unit);
               tamp=atoi(unit);
         	}
         }
      }
      else if(pilih=='2'){
         gotoxy(67,18);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[1]){
               jmlh=harga[1]*tamp;
         		stock[1]-=tamp;
         		gotoxy(47,18);printf("  ");
         		gotoxy(47,18);cprintf("%d",stock[1]);
               gotoxy(74,18);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,18);
            	gotoxy(67,18);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='3'){
         gotoxy(67,20);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[2]){
               jmlh=harga[2]*tamp;
         		stock[2]-=tamp;
         		gotoxy(47,20);printf("  ");
         		gotoxy(47,20);cprintf("%d",stock[2]);
               gotoxy(74,20);cprintf("Rp  %d",jmlh);
   				total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,20);
            	gotoxy(67,20);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='4'){
         gotoxy(67,22);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[3]){
               jmlh=harga[3]*tamp;
         		stock[3]-=tamp;
         		gotoxy(47,22);printf("  ");
         		gotoxy(47,22);cprintf("%d",stock[3]);
               gotoxy(74,22);cprintf("Rp  %d",jmlh);
					total[pilih_menu]=jmlh;
               pilih_menu++;

               x++;
         	}
         	else{
         		clear(unit,67,22);
            	gotoxy(67,22);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='5'){
         gotoxy(67,24);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[4]){
               jmlh=harga[4]*tamp;
         		stock[4]-=tamp;
         		gotoxy(47,24);printf("  ");
         		gotoxy(47,24);cprintf("%d",stock[4]);
               gotoxy(74,24);cprintf("Rp  %d",jmlh);
					total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,24);
            	gotoxy(67,24);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else{
      	gotoxy(38,31);printf("Inputan Invalid");Sleep(500);
         gotoxy(38,31);printf("               ");

      }
      gotoxy(38,31);printf("  ");
      gotoxy(38,31);pilih=getche();
      x=NULL;
   }

}

void obatB(){
	kolomObat();
   textcolor(4);
   textbackground(0);
	gotoxy(10,16);cprintf("1");
   gotoxy(16,16);cprintf("O S K A D O N TAB STR 4'S");
   gotoxy(47,16);cprintf("%d",stock[5]);
   gotoxy(54,16);cprintf("Rp   %d",harga[5]);
   gotoxy(10,18);cprintf("2");
   gotoxy(16,18);cprintf("P A R A M E X TAB STR 4'S");
   gotoxy(47,18);cprintf("%d",stock[6]);
   gotoxy(54,18);cprintf("Rp   %d",harga[6]);
   gotoxy(10,20);cprintf("3");
   gotoxy(16,20);cprintf("I B U P R O F E N TABLET");
   gotoxy(47,20);cprintf("%d",stock[7]);
   gotoxy(54,20);cprintf("Rp   %d",harga[7]);
   gotoxy(10,22);cprintf("4");
   gotoxy(16,22);cprintf("PAMOL 500MG TAB 100'S/DOS");
   gotoxy(47,22);cprintf("%d",stock[8]);
   gotoxy(54,22);cprintf("Rp   %d",harga[5]);
   gotoxy(10,24);cprintf("5");
   gotoxy(16,24);cprintf("B O D R E X  M I G R A");
   gotoxy(47,24);cprintf("%d",stock[9]);
   gotoxy(54,24);cprintf("Rp   %d",harga[8]);
   bingkai(48,5,7,29,9);
   bingkai(27,5,60,34,9);
   bingkai(27,5,89,34,9);
   gotoxy(62,36);cprintf("TEKAN 'S' UNTUK SELESAI");
   gotoxy(91,36);cprintf("TEKAN 'B' UNTUK KEMBALI");
   gotoxy(9,31);cprintf("Masukkan Kode Pilihan Anda :");
   gotoxy(38,31);pilih=getche();
   int x=0;
   int pilih_menu=0;
   while(pilih){
      if(pilih=='S'){
      	bukti();
      }
      else if(pilih=='B'){
      	utama();
      }
      else if(pilih=='1'){
      	gotoxy(67,16);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[5]){
               jmlh=harga[5]*tamp;
         		stock[5]-=tamp;
         		gotoxy(47,16);printf("  ");
         		gotoxy(47,16);cprintf("%d",stock[5]);
               gotoxy(74,16);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,16);
            	gotoxy(67,16);gets(unit);
               tamp=atoi(unit);
         	}
         }
      }
      else if(pilih=='2'){
         gotoxy(67,18);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[6]){
               jmlh=harga[6]*tamp;
         		stock[6]-=tamp;
         		gotoxy(47,18);printf("  ");
         		gotoxy(47,18);cprintf("%d",stock[6]);
               gotoxy(74,18);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,18);
            	gotoxy(67,18);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='3'){
         gotoxy(67,20);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[7]){
               jmlh=harga[7]*tamp;
         		stock[7]-=tamp;
         		gotoxy(47,20);printf("  ");
         		gotoxy(47,20);cprintf("%d",stock[7]);
               gotoxy(74,20);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,20);
            	gotoxy(67,20);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='4'){
         gotoxy(67,22);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[8]){
               jmlh=harga[5]*tamp;
         		stock[8]-=tamp;
         		gotoxy(47,22);printf("  ");
         		gotoxy(47,22);cprintf("%d",stock[8]);
               gotoxy(74,22);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,22);
            	gotoxy(67,22);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='5'){
         gotoxy(67,24);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[9]){
               jmlh=harga[8]*tamp;
         		stock[9]-=tamp;
         		gotoxy(47,24);printf("  ");
         		gotoxy(47,24);cprintf("%d",stock[9]);
               gotoxy(74,24);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,24);
            	gotoxy(67,24);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else{
      	gotoxy(38,31);printf("Inputan Invalid");Sleep(500);
         gotoxy(38,31);printf("               ");

      }
      gotoxy(38,31);printf("  ");
      gotoxy(38,31);pilih=getche();
      x=NULL;
   }

}

void obatC(){
	kolomObat();
   textcolor(4);
   textbackground(0);
	gotoxy(10,16);cprintf("1");
   gotoxy(16,16);cprintf("C O L C H I C I N E");
   gotoxy(47,16);cprintf("%d",stock[10]);
   gotoxy(54,16);cprintf("Rp  %d",harga[9]);
   gotoxy(10,18);cprintf("2");
   gotoxy(16,18);cprintf("K O R T I K O S T E R O I D");
   gotoxy(47,18);cprintf("%d",stock[11]);
   gotoxy(54,18);cprintf("Rp  %d",harga[10]);
   gotoxy(10,20);cprintf("3");
   gotoxy(16,20);cprintf("P R O B E N E C I D");
   gotoxy(47,20);cprintf("%d",stock[12]);
   gotoxy(54,20);cprintf("Rp  %d",harga[11]);
   gotoxy(10,22);cprintf("4");
   gotoxy(16,22);cprintf("A L L O P U R I N O L");
   gotoxy(47,22);cprintf("%d",stock[13]);
   gotoxy(54,22);cprintf("Rp  %d",harga[11]);
   gotoxy(10,24);cprintf("5");
   gotoxy(16,24);cprintf("F E B U X O S T A T");
   gotoxy(47,24);cprintf("%d",stock[14]);
   gotoxy(54,24);cprintf("Rp %d",harga[12]);
   bingkai(48,5,7,29,9);
   bingkai(27,5,60,34,9);
   bingkai(27,5,89,34,9);
   gotoxy(62,36);cprintf("TEKAN 'S' UNTUK SELESAI");
   gotoxy(91,36);cprintf("TEKAN 'B' UNTUK KEMBALI");
   gotoxy(9,31);cprintf("Masukkan Kode Pilihan Anda :");
   gotoxy(38,31);pilih=getche();
   int x=0;
   int pilih_menu=0;
   while(pilih){
      if(pilih=='S'){
      	bukti();
      }
      else if(pilih=='B'){
      	utama();
      }
      else if(pilih=='1'){
      	gotoxy(67,16);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[10]){
               jmlh=harga[9]*tamp;
         		stock[10]-=tamp;
         		gotoxy(47,16);printf("  ");
         		gotoxy(47,16);cprintf("%d",stock[10]);
               gotoxy(74,16);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,16);
            	gotoxy(67,16);gets(unit);
               tamp=atoi(unit);
         	}
         }
      }
      else if(pilih=='2'){
         gotoxy(67,18);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[11]){
               jmlh=harga[10]*tamp;
         		stock[11]-=tamp;
         		gotoxy(47,18);printf("  ");
         		gotoxy(47,18);cprintf("%d",stock[11]);
               gotoxy(74,18);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,18);
            	gotoxy(67,18);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='3'){
         gotoxy(67,20);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[12]){
               jmlh=harga[11]*tamp;
         		stock[12]-=tamp;
         		gotoxy(47,20);printf("  ");
         		gotoxy(47,20);cprintf("%d",stock[12]);
               gotoxy(74,20);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,20);
            	gotoxy(67,20);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='4'){
         gotoxy(67,22);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[13]){
               jmlh=harga[11]*tamp;
         		stock[13]-=tamp;
         		gotoxy(47,22);printf("  ");
         		gotoxy(47,22);cprintf("%d",stock[13]);
               gotoxy(74,22);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,22);
            	gotoxy(67,22);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='5'){
         gotoxy(67,24);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock[14]){
               jmlh=harga[12]*tamp;
         		stock[14]-=tamp;
         		gotoxy(47,24);printf("  ");
         		gotoxy(47,24);cprintf("%d",stock[14]);
               gotoxy(74,24);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,24);
            	gotoxy(67,24);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else{
      	gotoxy(38,31);printf("Inputan Invalid");Sleep(500);
         gotoxy(38,31);printf("               ");

      }
      gotoxy(38,31);printf("  ");
      gotoxy(38,31);pilih=getche();
      x=NULL;
   }

}

void obatD(){
	kolomObat();
   textcolor(4);
   textbackground(0);
	gotoxy(10,16);cprintf("1");
   gotoxy(16,16);cprintf("P R O M A G");
   gotoxy(47,16);cprintf("%d",stock1[0]);
   gotoxy(54,16);cprintf("Rp   %d",harga1[0]);
   gotoxy(10,18);cprintf("2");
   gotoxy(16,18);cprintf("M Y L A N T A  150 ML");
   gotoxy(47,18);cprintf("%d",stock1[1]);
   gotoxy(54,18);cprintf("Rp  %d",harga1[1]);
   gotoxy(10,20);cprintf("3");
   gotoxy(16,20);cprintf("W A I S A N");
   gotoxy(47,20);cprintf("%d",stock1[2]);
   gotoxy(54,20);cprintf("Rp   %d",harga1[2]);
   gotoxy(10,22);cprintf("4");
   gotoxy(16,22);cprintf("P O L Y S I L A N E");
   gotoxy(47,22);cprintf("%d",stock1[3]);
   gotoxy(54,22);cprintf("Rp  %d",harga1[3]);
   gotoxy(10,24);cprintf("5");
   gotoxy(16,24);cprintf("A N T A S I D A  D O E N");
   gotoxy(47,24);cprintf("%d",stock1[4]);
   gotoxy(54,24);cprintf("Rp   %d",harga1[4]);
   bingkai(48,5,7,29,9);
   bingkai(27,5,60,34,9);
   bingkai(27,5,89,34,9);
   gotoxy(62,36);cprintf("TEKAN 'S' UNTUK SELESAI");
   gotoxy(91,36);cprintf("TEKAN 'B' UNTUK KEMBALI");
   gotoxy(9,31);cprintf("Masukkan Kode Pilihan Anda :");
   gotoxy(38,31);pilih=getche();
   int x=0;
   int pilih_menu=0;
   while(pilih){
      if(pilih=='S'){
      	bukti();
      }
      else if(pilih=='B'){
      	utama();
      }
      else if(pilih=='1'){
         //gotoxy(67,16);printf("  ");
      	gotoxy(67,16);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock1[0]){
               //gotoxy(74,16);printf("              ");
               jmlh=harga1[0]*tamp;
         		stock1[0]-=tamp;
         		gotoxy(47,16);printf("  ");
         		gotoxy(47,16);cprintf("%d",stock1[0]);
               gotoxy(74,16);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,16);
            	gotoxy(67,16);gets(unit);
               tamp=atoi(unit);
         	}
         }
      }
      else if(pilih=='2'){
         //gotoxy(67,16);printf("  ");
         gotoxy(67,18);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock1[1]){
               //gotoxy(74,16);printf("              ");
               jmlh=harga1[1]*tamp;
         		stock1[1]-=tamp;
         		gotoxy(47,18);printf("  ");
         		gotoxy(47,18);cprintf("%d",stock1[1]);
               gotoxy(74,18);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,18);
            	gotoxy(67,18);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='3'){
         //gotoxy(67,16);printf("  ");
         gotoxy(67,20);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock1[2]){
               //gotoxy(74,16);printf("              ");
               jmlh=harga1[2]*tamp;
         		stock1[2]-=tamp;
         		gotoxy(47,20);printf("  ");
         		gotoxy(47,20);cprintf("%d",stock1[2]);
               gotoxy(74,20);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,20);
            	gotoxy(67,20);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='4'){
      	//gotoxy(67,16);printf("  ");
         gotoxy(67,22);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock1[3]){
            	//gotoxy(74,16);printf("              ");
               jmlh=harga1[3]*tamp;
         		stock1[3]-=tamp;
         		gotoxy(47,22);printf("  ");
         		gotoxy(47,22);cprintf("%d",stock1[3]);
               gotoxy(74,22);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,22);
            	gotoxy(67,22);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='5'){
      	//gotoxy(67,16);printf("  ");
         gotoxy(67,24);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock1[4]){
            	//gotoxy(74,16);printf("              ");
               jmlh=harga1[4]*tamp;
         		stock1[4]-=tamp;
         		gotoxy(47,24);printf("  ");
         		gotoxy(47,24);cprintf("%d",stock1[4]);
               gotoxy(74,24);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,24);
            	gotoxy(67,24);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else{
      	gotoxy(38,31);printf("Inputan Invalid");Sleep(500);
         gotoxy(38,31);printf("               ");

      }
      gotoxy(38,31);printf("  ");
      gotoxy(38,31);pilih=getche();
      x=NULL;
   }

}

void obatE(){
	kolomObat();
   textcolor(4);
   textbackground(0);
	gotoxy(10,16);cprintf("1");
   gotoxy(16,16);cprintf("BISOLVON FLU SYR 160 Ml");
   gotoxy(47,16);cprintf("%d",stock1[5]);
   gotoxy(54,16);cprintf("Rp  %d",harga[0]);
   gotoxy(10,18);cprintf("2");
   gotoxy(16,18);cprintf("OBH COMBI DEWASA 100 ML");
   gotoxy(47,18);cprintf("%d",stock1[6]);
   gotoxy(54,18);cprintf("Rp  %d",harga1[5]);
   gotoxy(10,20);cprintf("3");
   gotoxy(16,20);cprintf("MIXAGRIP TAB STR 4'S");
   gotoxy(47,20);cprintf("%d",stock1[7]);
   gotoxy(54,20);cprintf("Rp   %d",harga1[2]);
   gotoxy(10,22);cprintf("4");
   gotoxy(16,22);cprintf("SANAFLU FORTE TAB STR 4'S");
   gotoxy(47,22);cprintf("%d",stock1[8]);
   gotoxy(54,22);cprintf("Rp   %d",harga[8]);
   gotoxy(10,24);cprintf("5");
   gotoxy(16,24);cprintf("F L U T A M O L  SYR");
   gotoxy(47,24);cprintf("%d",stock1[9]);
   gotoxy(54,24);cprintf("Rp  %d",harga1[6]);
   bingkai(48,5,7,29,9);
   bingkai(27,5,60,34,9);
   bingkai(27,5,89,34,9);
   gotoxy(62,36);cprintf("TEKAN 'S' UNTUK SELESAI");
   gotoxy(91,36);cprintf("TEKAN 'B' UNTUK KEMBALI");
   gotoxy(9,31);cprintf("Masukkan Kode Pilihan Anda :");
   gotoxy(38,31);pilih=getche();
   int x=0;
   int pilih_menu=0;
   while(pilih){
      if(pilih=='S'){
      	bukti();
      }
      else if(pilih=='B'){
      	utama();
      }
      else if(pilih=='1'){
      	//gotoxy(67,16);printf("  ");
      	gotoxy(67,16);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock1[5]){
               //gotoxy(74,16);printf("              ");
               jmlh=harga[0]*tamp;
               //stock1[5] = stock1[5];
               stock1[5]-=tamp;
         		gotoxy(47,16);printf("  ");
         		gotoxy(47,16);cprintf("%d",stock1[5]);
               gotoxy(74,16);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,16);
            	gotoxy(67,16);gets(unit);
               tamp=atoi(unit);
         	}
         }
      }
      else if(pilih=='2'){
      	//gotoxy(67,16);printf("  ");
         gotoxy(67,18);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock1[6]){
            	//gotoxy(74,16);printf("              ");
               jmlh=harga1[5]*tamp;
         		stock1[6]-=tamp;
         		gotoxy(47,18);printf("  ");
         		gotoxy(47,18);cprintf("%d",stock1[6]);
               gotoxy(74,18);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,18);
            	gotoxy(67,18);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='3'){
      	//gotoxy(67,16);printf("  ");
         gotoxy(67,20);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock1[7]){
            	//gotoxy(74,16);printf("              ");
               jmlh=harga1[2]*tamp;
         		stock1[7]-=tamp;
         		gotoxy(47,20);printf("  ");
         		gotoxy(47,20);cprintf("%d",stock1[7]);
               gotoxy(74,20);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,20);
            	gotoxy(67,20);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='4'){
         //gotoxy(67,16);printf("  ");
         gotoxy(67,22);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock1[8]){
               //gotoxy(74,16);printf("              ");
               jmlh=harga[8]*tamp;
         		stock1[8]-=tamp;
         		gotoxy(47,22);printf("  ");
         		gotoxy(47,22);cprintf("%d",stock1[8]);
               gotoxy(74,22);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,22);
            	gotoxy(67,22);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else if(pilih=='5'){
         //gotoxy(67,16);printf("  ");
         gotoxy(67,24);gets(unit);
         tamp=atoi(unit);
         while(x!=1){
         	if(tamp>0 && tamp<=stock1[9]){
            	//gotoxy(74,16);printf("              ");
               jmlh=harga1[6]*tamp;
         		stock1[9]-=tamp;
         		gotoxy(47,24);printf("  ");
         		gotoxy(47,24);cprintf("%d",stock1[9]);
               gotoxy(74,24);cprintf("Rp  %d",jmlh);
               total[pilih_menu]=jmlh;
               pilih_menu++;
               x++;
         	}
         	else{
         		clear(unit,67,24);
            	gotoxy(67,24);gets(unit);
         		tamp=atoi(unit);
         	}
      	}
      }
      else{
      	gotoxy(38,31);printf("Inputan Invalid");Sleep(500);
         gotoxy(38,31);printf("               ");

      }
      gotoxy(38,31);printf("  ");
      gotoxy(38,31);pilih=getche();
      x=NULL;
   }

}


////=============================== Update Harga ===========================////

void info(){

	layar();
   bingkai(114,1,4,7,0);
   bingkai(50,15,38,10,0);
   gotoxy(47,12);cprintf(" BAGAIMANA CARA MENGGUNAKAN : ");
   gotoxy(47,14);cprintf("Jumlah Langkah Tergantung Dari");
   gotoxy(52,15);cprintf("Masing-Masing Produk");
   gotoxy(46,17);cprintf("Jangan Mengkonsumsi Lebih Dari 4");
   gotoxy(46,18);cprintf("Dosis Dalam Jangka Waktu 24 Jam.");
   gotoxy(46,20);cprintf("Jangan Mengkonsumsi Lebih Dari 48");
   gotoxy(47,21);cprintf("Jam Berturut-Turut Kecuali Atas");
   gotoxy(55,22);cprintf("Petunjuk DOKTER");

   bingkai(50,8,38,26,0);
   gotoxy(59,28);cprintf(" DOSIS ");
   gotoxy(46,30);cprintf("Baca Aturan Pakai Di Kemasan Atau");
   gotoxy(52,31);cprintf("Ikuti Petujuk Dokter");
   gotoxy(48,35);cprintf("Tekan Backspace Untuk Kembali");
   pilih=getch();
   while(pilih){
   	if(pilih==8){
   		utama();
      }
   	else{
   		gotoxy(55,37);cprintf("Inputan Salah");Sleep(500);
      	gotoxy(55,37);cprintf("             ");
      	pilih=getch();
   	}
	}

   getch();
}
////========================================================================////

void bukti(){

   hps_menu();
   for(int x=1;x<=114;x++){
      textcolor(9);
   	gotoxy(x+3,7);cprintf("%c",219);
   }
   for(int a=0;a<total[a]!=NULL;a++){
      total_belanja+=total[a];
   }
   gotoxy(50,4);printf(" A P O T E K  J A Y A ");
   bingkai(50,22,35,13,9);
   gotoxy(52,15);cprintf("BUKTI  PEMBAYARAN");
   gotoxy(38,18);cprintf("N A M A       :");
   gotoxy(38,21);cprintf("A L A M A T   :");
   gotoxy(38,24);cprintf("TOTAL BELANJA :  Rp  %d,-",total_belanja);
   gotoxy(38,26);cprintf("UANG TUNAI    :  Rp");
   gotoxy(38,27);cprintf("--------------------------------------------");
   napem();

}

void napem(){

   gotoxy(55,18);gets(nama);
   if(valnam(nama)==0 && strlen(nama)<=27 && strlen(nama)!=0){
   	alamat();
   }
   else if(strlen(nama)>27){
   	textbackground(0);
       	clear(nama,55,18);
   	gotoxy(56,18);cprintf(" Maksimal 27 Huruf ");Sleep(500);
      	gotoxy(56,18);cprintf("                   ");
      napem();
   }
   else{
      textbackground(0);
		clear(nama,55,18);
      gotoxy(56,18);cprintf(" Inputan Tidak Valid ");Sleep(500);
      	gotoxy(56,18);cprintf("                      ");
      napem();
   }
}

void alamat(){

   int kembalian;
   gotoxy(55,21);gets(almt);
   if(valmat(almt)==0 && strlen(almt)<=27 && strlen(almt)!=0){
      bayar();
   }
   else if(strlen(almt)>27){
   	textbackground(0);
      	clear(almt,55,21);
   	gotoxy(56,21);cprintf(" Maksimal 27 Huruf ");Sleep(500);
      	gotoxy(56,21);cprintf("                    ");
      alamat();
   }
   else{
      textbackground(0);
      	clear(almt,55,21);
      gotoxy(56,21);cprintf(" Inputan Tidak Valid ");Sleep(500);
      	gotoxy(56,21);cprintf("                      ");
      alamat();
   }

}

void bayar(){

		int kembalian;
      clear(duit,59,26);
     	gotoxy(59,26);gets(duit);
      uang=atoi(duit);
	if(valuit(duit)==0 && strlen(duit)!=0){
      if(uang>=total_belanja){
      	kembalian=uang-total_belanja;
         gotoxy(38,28);cprintf("Kembalian Uang Anda  Rp  %d,-",kembalian);
         gotoxy(42,31);cprintf("TERIMA KASIH SUDAH BERBELANJA DISINI");
         gotoxy(49,32);cprintf("SEMOGA LEKAS SEMBUH....");
         gotoxy(40,36);cprintf("Ingin Transaksi Lagi (Y/N)??");

         ulang:
         	pilih=getch();
            if(pilih=='Y'){
               utama();
            }
            else if(pilih=='N'){
            	menu_awal();
            }
            else{
               gotoxy(50,37);cprintf("Inputan Salah!!!");Sleep(500);
               gotoxy(50,37);cprintf("                  ");
               goto ulang;
            }

      }
      else{
      textbackground(0);
      	kembalian=uang-total_belanja;
      	gotoxy(38,28);cprintf("Uang Anda Kurang  Rp  %d,-",kembalian);Sleep(1000);
         gotoxy(38,28);cprintf("                                    ");
         bayar();
      }
   }else{
   	clear(duit,59,26);
   	gotoxy(59,26);cprintf("Inputan tidak valid");Sleep(1000);
      gotoxy(59,26);cprintf("                    ");
      bayar();
   }

}

////========================================================================////

int valnam(char a[]){

	int x=0; int y=0; int z=0;
   	if(a[0]==' '||a[strlen(a)-1]==' '||a[0]=='-'||a[strlen(a)-1]=='-'){
      	x=1;
      	return x;
    	}
	for(int x=0;x<strlen(a);x++){
   	if(a[x]==' '||a[x-1]==' '){
      	z++;
         if(z>2){
          y++;
         }
 		}else if(!(a[x]>='a'&&a[x]<='z'||a[x]>='A'&&a[x]<='Z'||(a[x]==' '&&a[x+1]!=' ')||a[x]=='-'||a[x]=='\''||a[x]==' '&&a[x+1]!='-')){
    		y++;
  		}
	}
   return y;

}

int valmat(char a[]){

   int x=0;int y=0;
   if(a[0]==' '||a[strlen(a)-1]==' '||a[0]=='.'||a[0]==','||a[0]=='-' || strlen(a) < 6){
   	x=1;
      return x;
   }
	for(int i=0;i<strlen(a);i++){
 		if(!(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'||a[i]=='.'&&a[i+1]!='.'||a[i]>='0'&&a[i]<='9'||a[i]=='-'&&a[i+1]!='-'||a[i]==','&&a[i+1]!=','||a[i]==' '&&a[i+1]!=' '||(a[i]=='-'&&(!(a[i+1]>='0'&&a[i+1]<='9'))))){
    		y++;
 		}
	}
   return y;

}


int valuit(char a[]){

   int x=0;int y=0;
   if(a[0]==' ' || a[0] =='0'){
      y=1;
      return y;
   }

	for(int i=0;i<strlen(a);i++){
 		if(!(a[i]>='0'&&a[i]<='9')){
    		x++;
 		}
	}
   return x;

}



main(){

  menu_awal();

getch();
}

