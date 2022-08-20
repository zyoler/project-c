////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                  	      Project Toko Buku                                  //
//                   By Nushrotummillah Nurul 'Aini                           //
//                     D3 Manajemen Informatika                               //
//                                                                            //
//                                                                            //
//                                                                            //
//  Windows Size :     		   	   	      										  	//
//  Width	: 150			               				        						   //
//	 Height	: 40 		                   						  	                  //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//  	 									 LIBRARY                                     //
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<windows.h>

////////////////////////////////////////////////////////////////////////////////
//  	 									PROTOTYPE                                    //
////////////////////////////////////////////////////////////////////////////////

void Cek();
void Bingkai();
void Welcome();
void Username();
void Password();
void MenuUtama();
void PilihMenuUtama();
void Menu();
void PilihMenu();
void Informasi();
void Keluar();
void PilihBuku();
void Stok();
void Novel();
void Komik();
void Biografi();
void YTJualBeli();
void PilihJudul();
void JumlahItem();
void Novel1();
void Novel2();
void Novel3();
void Novel4();
void Novel5();
void Komik1();
void Komik2();
void Komik3();
void Komik4();
void Komik5();
void Bio1();
void Bio2();
void Bio3();
void Bio4();
void Bio5();
void InputUang();
void YTLagi();
void PilihBukuTanpaKembali();

int ValidasiAngka(char angka[100]);
int PilYT(char pil);
int PilJud(char pil);

////////////////////////////////////////////////////////////////////////////////
//  	 								VARIABLE GLOBAL                                 //
////////////////////////////////////////////////////////////////////////////////

int KesempatanLogin;
char user[50];
char pass[50];
int StokNovel[20]={20,20,20,20,20};
int StokKomik[20]={20,20,20,20,20};
int StokBio[20]={20,20,20,20,20};
int HargaNovel[20]={80000,135000,70000,80000,70000};
int HargaKomik[20]={70000,60000,65000,50000,70000};
int HargaBio[20]={80000,85000,80000,85000,90000};
char JudulNovel[20][100]={"Ayat Ayat Cinta by Habiburrahman El Shirazy","Bumi Manusia by Pramoedya Ananta Toer","Daun Yang jatuh Tak Pernah Membenci Angin by Tere Liye","Dilan by Pidi Baiq","Hujan by Tere Liye"};
char JudulKomik[20][100]={"Detektif Conan 94 by Aoyama Gosho","Hai, Miko!30-Reguler bonus Clear File by Ono Eriko","LC : Attack On Titan by Hajime Isayama","My Hero Academia 06 by Kohei Horikoshi","One Piece 84 by Eiichiro Oda"};
char JudulBio[20][100]={"Bung Karno Penyambung Lidah Rakyat Indonesia by Cindy Adams","Chairil by Hasan Aspahani","Jais Darga Namaku by Ahda Imran","Panggil Aku Kartini Saja by Pramoedya Ananta Toer","Rudy: Kisah Masa Muda Sang Visioner by Gina S.Noer"};
int JualBeli;
char PilBuku;
char JmlItem[20];
char uang[20];
int Harga=0;
char PilJudul;
int Kas=10000000;

////////////////////////////////	BINGKAI	//////////////////////////////////////

void Bingkai(){
   for(int a=1;a<=39;a++){
   	for(int b=1;b<=149;b++){
      	if(a==1||a==39||b==1||b==149){
         	textcolor(12);cprintf("%c",219);Sleep(3);
         }else{
         	printf(" ");
         }
      }printf("\n");
   }
}

////////////////////////////////	WELCOME	//////////////////////////////////////

void Welcome(){
	Bingkai();
	for(int a=5;a<=7;a++){
		textcolor(a);
      gotoxy(5,3);cprintf(" %c%c      %c%c  %c%c%c%c%c %c%c     %c%c%c%c  %c%c%c%c   %c%c   %c%c   %c%c%c%c ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(5,4);cprintf(" %c%c      %c%c %c%c%c%c%c%c %c%c    %c%c%c%c%c %c%c%c%c%c%c %c%c%c%c %c%c%c%c %c%c%c%c%c ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(5,5);cprintf(" %c%c      %c%c %c%c     %c%c    %c%c    %c%c  %c%c %c%c %c%c%c %c%c %c%c    ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(5,6);cprintf(" %c%c      %c%c %c%c%c%c%c%c %c%c    %c%c    %c%c  %c%c %c%c  %c  %c%c %c%c%c%c%c ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(5,7);cprintf(" %c%c  %c%c  %c%c %c%c%c%c%c%c %c%c    %c%c    %c%c  %c%c %c%c     %c%c %c%c%c%c%c ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(5,8);cprintf(" %c%c %c%c%c%c %c%c %c%c     %c%c    %c%c    %c%c  %c%c %c%c     %c%c %c%c    ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(5,9);cprintf("  %c%c%c  %c%c%c  %c%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c %c%c%c%c%c%c %c%c     %c%c %c%c%c%c%c ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(5,10);cprintf("   %c    %c    %c%c%c%c%c  %c%c%c%c  %c%c%c%c  %c%c%c%c  %c%c     %c%c  %c%c%c%c ",232,232,232,232,232,232,232,32,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);

		gotoxy(55,14);cprintf(" %c%c%c%c%c%c%c%c  %c%c%c%c  ",232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(55,15);cprintf(" %c%c%c%c%c%c%c%c %c%c%c%c%c%c ",232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(55,16);cprintf("    %c%c    %c%c  %c%c ",232,232,232,232,232,232);Sleep(50);
		gotoxy(55,17);cprintf("    %c%c    %c%c  %c%c ",232,232,232,232,232,232);Sleep(50);
		gotoxy(55,18);cprintf("    %c%c    %c%c  %c%c ",232,232,232,232,232,232);Sleep(50);
  		gotoxy(55,19);cprintf("    %c%c    %c%c  %c%c ",232,232,232,232,232,232);Sleep(50);
		gotoxy(55,20);cprintf("    %c%c    %c%c%c%c%c%c ",232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(55,21);cprintf("    %c%c     %c%c%c%c  ",232,232,232,232,232,232);Sleep(50);

   	gotoxy(70,25); cprintf(" %c%c     %c%c            %c%c%c%c%c%c%c   %c%c%c%c   %c%c%c%c  %c%c   %c%c                        ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(70,26); cprintf(" %c%c%c   %c%c%c            %c%c%c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c  %c%c                         ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(70,27); cprintf(" %c%c%c%c %c%c%c%c            %c%c   %c%c  %c%c  %c%c %c%c  %c%c %c%c %c%c      %c%c%c%c%c  %c%c%c  %c%c   %c%c ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(70,28); cprintf(" %c%c %c%c%c %c%c            %c%c  %c%c   %c%c  %c%c %c%c  %c%c %c%c%c%c       %c%c%c%c%c %c%c%c%c%c %c%c%c %c%c%c ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(70,29); cprintf(" %c%c  %c  %c%c %c%c     %c%c  %c%c  %c%c   %c%c  %c%c %c%c  %c%c %c%c%c%c       %c%c    %c%c %c%c %c%c%c%c%c%c%c ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(70,30); cprintf(" %c%c     %c%c %c%c     %c%c  %c%c   %c%c  %c%c  %c%c %c%c  %c%c %c%c %c%c      %c%c    %c%c %c%c %c%c %c %c%c ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(70,31); cprintf(" %c%c     %c%c  %c%c   %c%c   %c%c%c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c  %c%c  %c%c %c%c%c%c%c %c%c%c%c%c %c%c   %c%c ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(70,32); cprintf(" %c%c     %c%c   %c%c %c%c    %c%c%c%c%c%c%c   %c%c%c%c   %c%c%c%c  %c%c   %c%c %c%c %c%c%c%c%c  %c%c%c  %c%c   %c%c ",232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232);Sleep(50);
		gotoxy(70,33); cprintf("              %c%c%c                                                           ",232,232,232);Sleep(50);
		gotoxy(70,34); cprintf("              %c%c                                                            ",232,232);Sleep(50);
 		gotoxy(70,35); cprintf("             %c%c                                                             ",232,232);Sleep(50);
		gotoxy(70,36); cprintf("            %c%c                                                              ",232,232);Sleep(50);
	}clrscr();
   Bingkai();
   Username();
}

////////////////////////////////	LOGIN	/////////////////////////////////////////
void Username(){
   for(int a=58;a<=93;a++){
   	textcolor(7);
      gotoxy(a,13);cprintf("%c",219);
      gotoxy(a,24);cprintf("%c",219);
      gotoxy(a,17);cprintf("%c",219);
   }
   for(int b=13;b<=24;b++){
   	textcolor(7);
      gotoxy(58,b);cprintf("%c",219);
      gotoxy(93,b);cprintf("%C",219);
   }
	gotoxy(71,15);printf("LOGIN");
   int u=0,x=0;
   	gotoxy(60,19);printf("Masukkan Username : ");user[u]=getch();
   	while(user[u]!=13){
      	if(user[u]==8){
      		u--;
      		if(u<0)
      			u=0;
         	gotoxy(80+u,19);printf(" ");
      	}else{
      		printf("%c",user[u]);
      		u++;
      	}if(u>8){
      		u=8;gotoxy(88,19);printf(" ");
      	}gotoxy(80+u,19);user[u]=getch();
   	}user[u]=NULL;

      for(int a=0;a<strlen(user);a++){
      	if(user[a]==' '){
         	x++;
         }
      }
      if(x==strlen(user)){
      	gotoxy(80,19);printf("Isi Username");Sleep(1000);
         gotoxy(80,19);printf("            ");
         //gotoxy(80,19);user[u]=getch();
         Username();
      }else if(x!=0){
      	gotoxy(80,19);printf("Isi Username");Sleep(1000);
         gotoxy(80,19);printf("            ");
         //gotoxy(80,19);user[u]=getch();
         Username();
      }else{
      Password(); }
}
////////////////////////////////////////////////////////////////////////////////
void Password(){
		int p=0,y=0;
   	//char pass[50];
   	gotoxy(60,20);printf("Masukkan Password : ");pass[p]=getch();

   	while(pass[p]!=13){
      	if(pass[p]==8){
      		p--;
      		if(p<0)
      			p=0;
         	gotoxy(80+p,20);printf(" ");
      	}else{
      		printf("*");
      		p++;
      	}if(p>8){
      		p=8;gotoxy(88,20);printf(" ");
      	}gotoxy(80+p,20);pass[p]=getch();
   	}pass[p]=NULL;

      for(int a=0;a<=strlen(pass);a++){
      	if(pass[a]==' '){
         	y++;
         }
      }
      if(y==strlen(pass)){
      	gotoxy(80,20);printf("Isi Password");Sleep(1000);
         gotoxy(80,20);printf("            ");
         //gotoxy(80,19);user[u]=getch();
         Password();
      }else if(y!=0){
      	gotoxy(80,20);printf("Isi Password");Sleep(1000);
         gotoxy(80,20);printf("            ");
         //gotoxy(80,19);user[u]=getch();
         Password();
      }else Cek();
}
void Cek(){
   	if((strcmp(user,"SayaUser")==0)&&(strcmp(pass,"123gatau")==0)){
   		gotoxy(60,22);printf("Login berhasil...");
         clrscr();
         MenuUtama();
   	}else{
   		gotoxy(60,22);printf("Username atau Password Salah!!!");Sleep(1000);
         gotoxy(60,22);printf("                               ");
         gotoxy(80,19);printf("            ");
      	gotoxy(80,20);printf("            ");
         KesempatanLogin++;
         if(KesempatanLogin<=9){
            if(KesempatanLogin%3==0){
               for(int x=30;x>=1;x--){
               	gotoxy(51,26);printf("Anda Telah 3x Salah Memasukkan Username atau Password");
               	gotoxy(64,27);printf("Coba Lagi dalam %d Detik",x);Sleep(500);
               }gotoxy(64,27);printf("                        ");
               gotoxy(51,26);printf("                                                      ");
            }Username();
         }else{
         	exit(0);
         }
   	}
}
///////////////////////////////	MENU UTAMA	///////////////////////////////////

void MenuUtama(){
	Bingkai();
   textcolor(7);
   char pil;
   gotoxy(25,5);printf("     **     **  *****  **    **  **   **    **  **  ******     *     **     **     * ");
	gotoxy(25,6);printf("     ***   ***  *****  **    **  **   **    **  **  ******    ***    ***   ***    ***");
	gotoxy(25,7);printf("    **** ****  **     ***   **  **   **    **  **  ******    ***    ***   ***    *** ");
	gotoxy(25,8);printf("   ** *** **  *****  ****  **  **   **    **  **    **    **   **  ** *** **  **   **");
	gotoxy(25,9);printf("  **  *  **  *****  ** ** **  **   **    **  **    **    *******  **  *  **  ******* ");
	gotoxy(25,10);printf(" **     **  **     **  ****  **   **    **  **    **    *******  **     **  *******  ");
	gotoxy(25,11);printf("**     **  *****  **   ***  *******    ******    **    **   **  **     **  **   **   ");
	gotoxy(25,12);printf("**     **  *****  **    **  *******    ******    **    **   **  **     **  **   **   ");

	for(int a=40;a<=100;a++){
   	gotoxy(a,14);cprintf("%c",219);
   	gotoxy(a,30);cprintf("%c",219);
      gotoxy(a,18);cprintf("%c",219);
      gotoxy(a,22);cprintf("%c",219);
      gotoxy(a,26);cprintf("%c",219);

      gotoxy(45,16);printf("1. Menu");
      gotoxy(45,20);printf("2. Informasi");
      gotoxy(45,24);printf("3. Keluar");
	}
   for(int b=14;b<=30;b++){
		gotoxy(40,b);cprintf("%c",219);
   	gotoxy(100,b);cprintf("%c",219);
	}PilihMenuUtama();
}

void PilihMenuUtama(){
	char pil;
	gotoxy(45,28);printf("Masukkan Pilihan (1-3): ");gotoxy(69,28);pil=getche();
   if(pil=='1'){
      clrscr();
      Bingkai();
   	Menu();
   }else if(pil=='2'){
      clrscr();
      Bingkai();
      Informasi();
   }else if(pil=='3'){
   	clrscr();
      Bingkai();
      Keluar();
   }else{
   	gotoxy(45,31);printf("Silakan masukkan angka 1-3");Sleep(1000);
      gotoxy(45,31);printf("                          ");
      gotoxy(69,28);printf(" ");
      PilihMenuUtama();
   }
}

//////////////////////////////////	MENU	//////////////////////////////////////

void Menu(){
   textcolor(7);
   gotoxy(5,3);printf("     **     **  *****  **    **  **   **");
	gotoxy(5,4);printf("     ***   ***  *****  **    **  **   **");
	gotoxy(5,5);printf("    **** ****  **     ***   **  **   **");
	gotoxy(5,6);printf("   ** *** **  *****  ****  **  **   **");
	gotoxy(5,7);printf("  **  *  **  *****  ** ** **  **   **");
	gotoxy(5,8);printf(" **     **  **     **  ****  **   **");
	gotoxy(5,9);printf("**     **  *****  **   ***  *******");
	gotoxy(5,10);printf("**     **  *****  **    **  *******");
   for(int a=40;a<=100;a++){
   	gotoxy(a,14);cprintf("%c",219);
      gotoxy(a,18);cprintf("%c",219);
      gotoxy(a,22);cprintf("%c",219);
      gotoxy(a,26);cprintf("%c",219);
   }for(int b=14;b<=26;b++){
		gotoxy(40,b);cprintf("%c",219);
   	gotoxy(100,b);cprintf("%c",219);
	}
   gotoxy(67,16);printf("1. Jual");
   gotoxy(67,20);printf("2. Beli");
   gotoxy(67,24);printf("3. Stok");
   PilihMenu();
}

void PilihMenu(){
	char PilMenu;
   textcolor(7);
	gotoxy(50,28);printf("Masukkan pilihan (1-3)(0 untuk kembali) : ");PilMenu=getche();
   if(PilMenu=='0'){
   	clrscr();
   	MenuUtama();
   }else if(PilMenu=='1'){
   	JualBeli=0;
   	clrscr();
      Bingkai();
   	PilihBuku();
   }else if(PilMenu=='2'){
      JualBeli=1;
   	clrscr();
      Bingkai();
   	PilihBuku();
   }else if(PilMenu=='3'){
   	clrscr();
      Bingkai();
   	Stok();
   }else{
   	gotoxy(54,29);printf("Silakan Masukkan angka (1-3 atau 0)");Sleep(1000);
      gotoxy(54,29);printf("                                   ");
      gotoxy(92,28);printf(" ");
      PilihMenu();
   }
}

////////////////////////////////	INFORMASI	///////////////////////////////////

void Informasi(){
	textcolor(7);
   gotoxy(33,5);printf("     ****  **    **  ******  ******  *****     **     **     *      *******  ****");
	gotoxy(33,6);printf("     ****  ***   **  ******  ******  ******    ***   ***    ***    ********  ****");
	gotoxy(33,7);printf("     **   ****  **  **      **  **  **   **   **** ****   ** **   **         **  ");
	gotoxy(33,8);printf("    **   ** ** **  ******  **  **  **   **   ** *** **  **   **  ********   **   ");
 	gotoxy(33,9);printf("   **   **  ****  ******  **  **  ******    **  *  **  *******  ********   **    ");
	gotoxy(33,10);printf("  **   **   ***  **      **  **  ******    **     **  *******        **   **     ");
	gotoxy(33,11);printf("****  **    **  **      ******  **   **   **     **  **   **  ********  ****     ");
	gotoxy(33,12);printf("****  **    **  **      ******  **    **  **     **  **   **  ********  ****     ");

   gotoxy(25,20);printf("              Program ini dibuat untuk memenuhi tugas pelatihan logika dan algoritma. \n");
   gotoxy(25,21);printf("                 Oleh Nushrotummillah Nurul 'Aini dari D3 Manajemen Informatika \n");
   gotoxy(25,22);printf("        Program ini dapat digunakan untuk mempermudah admin dalam mengelola sebuah toko buku. \n");
   gotoxy(25,23);printf("Admin dapat menambah stok dengan membeli buku dan stok akan berkurang ketika ada barang yang terjual.");
   gotoxy(25,24);printf("          Mohon maaf apabila terdapat banyak kesalahan, karena saya juga masih belajar.");
   gotoxy(25,25);printf("                                         Terima kasih... \n");
   gotoxy(72,26);cprintf("%c",1);
   gotoxy(53,30);printf("Tekan 0 untuk kembali ke menu utama...");
   char pil=getch();
   if(pil=='0'){
   	clrscr();
		MenuUtama();
   }else{
   	gotoxy(47,32);printf("Input tidak valid. Harap tekan 0 uuntuk kembali");Sleep(1000);
      gotoxy(47,32);printf("                                               ");
      Informasi();
   }
}

void Keluar(){
	char yt;
   textcolor(7);
	gotoxy(95,5);printf("     **   **  *****  **    **  **     *     ******  ");
 	gotoxy(95,6);printf("     **  **   *****  **    **  **    ***    ******* ");
 	gotoxy(95,7);printf("    ** **    **     **    **  **   ** **   **   *** ");
 	gotoxy(95,8);printf("   ****     *****  **    **  **  **   **  **   ***  ");
 	gotoxy(95,9);printf("  ****     *****  **    **  **  *******  *******    ");
 	gotoxy(95,10);printf(" ** **    **     **    **  **  *******  ******      ");
 	gotoxy(95,11);printf("**  **   *****  ***** ******  **   **  **   **      ");
 	gotoxy(95,12);printf("**   **  *****  ***** ******  **   **  **    **     ");

  	gotoxy(58,25);printf("Anda Yakin Ingin Keluar? (y/t): ");yt=getche();
   	if(yt=='y' || yt=='Y'){
      	exit(0);
      }else if(yt=='t' || yt=='T'){
         clrscr();
      	MenuUtama();
      }else{
   		gotoxy(54,27);printf("Input salah, harap masukkan dengan benar!");Sleep(1000);
         gotoxy(54,27);printf("                                         ");
         gotoxy(90,25);printf(" ");
         Keluar();
      }
}

void PilihBuku(){
   textcolor(7);
   for(int a=32;a<=115;a++){
   	gotoxy(a,8);printf("%c",219);
      gotoxy(a,12);printf("%c",219);
      gotoxy(a,16);printf("%c",219);
      gotoxy(a,20);printf("%c",219);
   }for(int a=8;a<=20;a++){
   	gotoxy(32,a);printf("%c",219);
      gotoxy(115,a);printf("%c",219);
   }
	gotoxy(72,10);printf("Jenis Buku \n");
   gotoxy(35,14);printf("1. Novel \n");
   gotoxy(72,14);printf("2. Komik \n");
   gotoxy(102,14);printf("3. Biografi \n");
   gotoxy(35,18);printf("Masukkan Pilihan Jenis Buku (0 untuk kembali ke menu): ");PilBuku=getche();
   	if(PilBuku=='0'){
   		clrscr();
         Bingkai();
      	Menu();
   	}else if(PilBuku=='1'){
   		clrscr();
      	Bingkai();
         Novel();
      }else if(PilBuku=='2'){
      	clrscr();
         Bingkai();
      	Komik();
      }else if(PilBuku=='3'){
      	clrscr();
         Bingkai();
      	Biografi();
   	}else{
   		gotoxy(35,22);printf("Input tidak valid. Silakan masukkan angka 1-3 atau 0");Sleep(1000);
      	gotoxy(35,22);printf("                                                    ");
      	gotoxy(90,18);printf(" ");
         PilihBuku();
   	}
}

void PilihBukuTanpaKembali(){
   textcolor(7);
   for(int a=32;a<=115;a++){
   	gotoxy(a,8);printf("%c",219);
      gotoxy(a,12);printf("%c",219);
      gotoxy(a,16);printf("%c",219);
      gotoxy(a,20);printf("%c",219);
   }for(int a=8;a<=20;a++){
   	gotoxy(32,a);printf("%c",219);
      gotoxy(115,a);printf("%c",219);
   }
	gotoxy(72,10);printf("Jenis Buku \n");
   gotoxy(35,14);printf("1. Novel \n");
   gotoxy(72,14);printf("2. Komik \n");
   gotoxy(102,14);printf("3. Biografi \n");
   gotoxy(35,18);printf("Masukkan Pilihan Jenis Buku : ");PilBuku=getche();
		if(PilBuku=='1'){
   		clrscr();
      	Bingkai();
         Novel();
      }else if(PilBuku=='2'){
      	clrscr();
         Bingkai();
      	Komik();
      }else if(PilBuku=='3'){
      	clrscr();
         Bingkai();
      	Biografi();
   	}else{
   		gotoxy(35,22);printf("Input tidak valid. Silakan masukkan angka 1-3");Sleep(1000);
      	gotoxy(35,22);printf("                                                    ");
      	gotoxy(65,18);printf(" ");
         PilihBukuTanpaKembali();
   	}
}

void Stok(){
	gotoxy(35,3);printf("Stok My Book.com");
   gotoxy(35,5);printf("Judul Buku                                                        Harga     Stok");
   gotoxy(35,7);printf("Novel");
   gotoxy(35,9);printf("1. %s                    %ld \t %d",JudulNovel[0],HargaNovel[0],StokNovel[0]);
   gotoxy(35,10);printf("2. %s                          %ld \t %d",JudulNovel[1],HargaNovel[1],StokNovel[1]);
   gotoxy(35,11);printf("3. %s         %ld \t %d",JudulNovel[2],HargaNovel[2],StokNovel[2]);
   gotoxy(35,12);printf("4. %s                                             %ld \t %d",JudulNovel[3],HargaNovel[3],StokNovel[3]);
   gotoxy(35,13);printf("5. %s                                             %ld \t %d",JudulNovel[4],HargaNovel[4],StokNovel[4]);
   gotoxy(35,15);printf("Komik");
   gotoxy(35,17);printf("1. %s                              %ld \t %d",JudulKomik[0],HargaKomik[0],StokKomik[0]);
   gotoxy(35,18);printf("2. %s             %ld \t %d",JudulKomik[1],HargaKomik[1],StokKomik[1]);
   gotoxy(35,19);printf("3. %s                         %ld \t %d",JudulKomik[2],HargaKomik[2],StokKomik[2]);
   gotoxy(35,20);printf("4. %s                         %ld \t %d",JudulKomik[3],HargaKomik[3],StokKomik[3]);
   gotoxy(35,21);printf("5. %s                                   %ld \t %d",JudulKomik[4],HargaKomik[4],StokKomik[4]);
   gotoxy(35,23);printf("Biografi");
   gotoxy(35,25);printf("1. %s    %ld \t %d",JudulBio[0],HargaBio[0],StokBio[0]);
   gotoxy(35,26);printf("2. %s                                      %ld \t %d",JudulBio[1],HargaBio[1],StokBio[1]);
   gotoxy(35,27);printf("3. %s                                %ld \t %d",JudulBio[2],HargaBio[2],StokBio[2]);
   gotoxy(35,28);printf("4. %s              %ld \t %d",JudulBio[3],HargaBio[3],StokBio[3]);
   gotoxy(35,29);printf("5. %s             %ld \t %d",JudulBio[4],HargaBio[4],StokBio[4]);
   gotoxy(35,31);printf("Kas My Book.com = %d",Kas);

   gotoxy(35,35);printf("Tekan 0 untuk kembali...");
  	char pil;
   do{
   	pil=getch();
   	if(pil=='0'){
   		clrscr();
   		Bingkai();
   		Menu();
      }else{
   		gotoxy(5,36);printf("Input tidak valid, masukkan 0 untuk kembali!");Sleep(1000);
      	gotoxy(5,36);printf("                                            ");
   	}
   }while(pil!='0');
}

void Novel(){
	gotoxy(40,5);printf("Judul Buku");
   gotoxy(20,9);printf("1. %s",JudulNovel[0]);
   gotoxy(20,13);printf("2. %s",JudulNovel[1]);
   gotoxy(20,17);printf("3. %s",JudulNovel[2]);
   gotoxy(20,21);printf("4. %s",JudulNovel[3]);
   gotoxy(20,25);printf("5. %s",JudulNovel[4]);

   gotoxy(102,5);printf("Harga");
   gotoxy(97,9);printf("Rp. %d",HargaNovel[0]);
   gotoxy(97,13);printf("Rp. %d",HargaNovel[1]);
   gotoxy(97,17);printf("Rp. %d",HargaNovel[2]);
   gotoxy(97,21);printf("Rp. %d",HargaNovel[3]);
   gotoxy(97,25);printf("Rp. %d",HargaNovel[4]);

	gotoxy(130,5);printf("Stok");
   gotoxy(130,9);printf("%d",StokNovel[0]);
   gotoxy(130,13);printf("%d",StokNovel[1]);
   gotoxy(130,17);printf("%d",StokNovel[2]);
   gotoxy(130,21);printf("%d",StokNovel[3]);
   gotoxy(130,25);printf("%d",StokNovel[4]);

   YTJualBeli();
}

void Komik(){
	gotoxy(40,5);printf("Judul Buku");
   gotoxy(20,9);printf("1. %s",JudulKomik[0]);
   gotoxy(20,13);printf("2. %s",JudulKomik[1]);
   gotoxy(20,17);printf("3. %s",JudulKomik[2]);
   gotoxy(20,21);printf("4. %s",JudulKomik[3]);
   gotoxy(20,25);printf("5. %s",JudulKomik[4]);

   gotoxy(102,5);printf("Harga");
   gotoxy(97,9);printf("Rp. %d",HargaKomik[0]);
   gotoxy(97,13);printf("Rp. %d",HargaKomik[1]);
   gotoxy(97,17);printf("Rp. %d",HargaKomik[2]);
   gotoxy(97,21);printf("Rp. %d",HargaKomik[3]);
   gotoxy(97,25);printf("Rp. %d",HargaKomik[4]);

	gotoxy(130,5);printf("Stok");
   gotoxy(130,9);printf("%d",StokKomik[0]);
   gotoxy(130,13);printf("%d",StokKomik[1]);
   gotoxy(130,17);printf("%d",StokKomik[2]);
   gotoxy(130,21);printf("%d",StokKomik[3]);
   gotoxy(130,25);printf("%d",StokKomik[4]);

   YTJualBeli();
}

void Biografi(){
	gotoxy(40,5);printf("Judul Buku");
   gotoxy(20,9);printf("1. %s",JudulBio[0]);
   gotoxy(20,13);printf("2. %s",JudulBio[1]);
   gotoxy(20,17);printf("3. %s",JudulBio[2]);
   gotoxy(20,21);printf("4. %s",JudulBio[3]);
   gotoxy(20,25);printf("5. %s",JudulBio[4]);

   gotoxy(102,5);printf("Harga");
   gotoxy(97,9);printf("Rp. %d",HargaBio[0]);
   gotoxy(97,13);printf("Rp. %d",HargaBio[1]);
   gotoxy(97,17);printf("Rp. %d",HargaBio[2]);
   gotoxy(97,21);printf("Rp. %d",HargaBio[3]);
   gotoxy(97,25);printf("Rp. %d",HargaBio[4]);

	gotoxy(130,5);printf("Stok");
   gotoxy(130,9);printf("%d",StokBio[0]);
   gotoxy(130,13);printf("%d",StokBio[1]);
   gotoxy(130,17);printf("%d",StokBio[2]);
   gotoxy(130,21);printf("%d",StokBio[3]);
   gotoxy(130,25);printf("%d",StokBio[4]);

   YTJualBeli();
}

void YTJualBeli(){
	textcolor(7);
	char pil;
	gotoxy(20,30);printf("Anda yakin ingin melakukan transaksi?(y/t) : ");pil=getche();
   if(PilYT(pil)==0){
      PilihJudul();
   }else if(PilYT(pil)==1){
   	clrscr();
      Bingkai();
      PilihBuku();
   }else{
   	gotoxy(20,31);printf("Input tidak valid. Harap masukkan pilihan (y/t)!");Sleep(1000);
      gotoxy(20,31);printf("                                                ");
      gotoxy(64,30);printf("  ");
      YTJualBeli();
   }
}

void PilihJudul(){
	gotoxy(20,31);printf("Masukkan pilihan judul (1-5): ");PilJudul=getche();
   if(PilJud(PilJudul)==0){
   	JumlahItem();
   }else if(PilJud(PilJudul)==1){
      gotoxy(20,32);printf("Pilihan tidak tersedia. Harap masukkan pilihan (1-5)!");Sleep(1000);
      gotoxy(20,32);printf("                                                     ");
      gotoxy(50,31);printf(" ");
      PilihJudul();
   }else{
   	gotoxy(20,32);printf("Input tidak valid. Harap masukkan pilihan (1-5)!");Sleep(1000);
      gotoxy(20,32);printf("                                                ");
      gotoxy(50,31);printf(" ");
      PilihJudul();
   }
}

void JumlahItem(){
	gotoxy(20,32);printf("Jumlah Item : ");gets(JmlItem);
   if(ValidasiAngka(JmlItem)==0){
   	gotoxy(20,33);printf("Input tidak valid. Harap masukkan angka dengan benar!");Sleep(1000);
		gotoxy(20,33);printf("                                                     ");
      gotoxy(34,32);printf(" ");
      JumlahItem();
   }else{
   	if(PilBuku=='1'){
      	if(PilJudul=='1'){
      		Novel1();
         }else if(PilJudul=='2'){
         	Novel2();
         }else if(PilJudul=='3'){
         	Novel3();
         }else if(PilJudul=='4'){
         	Novel4();
         }else if(PilJudul=='5'){
         	Novel5();
         }
      }else if(PilBuku=='2'){
      	if(PilJudul=='1'){
      		Komik1();
         }else if(PilJudul=='2'){
         	Komik2();
         }else if(PilJudul=='3'){
         	Komik3();
         }else if(PilJudul=='4'){
         	Komik4();
         }else if(PilJudul=='5'){
         	Komik5();
         }
      }else if(PilBuku=='3'){
      	if(PilJudul=='1'){
      		Bio1();
         }else if(PilJudul=='2'){
         	Bio2();
         }else if(PilJudul=='3'){
         	Bio3();
         }else if(PilJudul=='4'){
         	Bio4();
         }else if(PilJudul=='5'){
         	Bio5();
         }
      }
   }
}

void Novel1(){
	textcolor(7);
	int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokNovel[0]){
   	int HargaSatuan=HargaNovel[0]*Jumlah;
      Harga+=HargaNovel[0]*Jumlah;
      if(JualBeli==0){
      	StokNovel[0]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokNovel[0]+=Jumlah;
         Kas-=Harga;
      }
      gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
      gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void Novel2(){
textcolor(7);
int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokNovel[1]){
   	int HargaSatuan=HargaNovel[1]*Jumlah;
		Harga+=HargaNovel[1]*Jumlah ;
      if(JualBeli==0){
      	StokNovel[1]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokNovel[1]+=Jumlah;
         Kas-=Harga;
      }
		gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
   	gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void Novel3(){
textcolor(7);
int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokNovel[2]){
   	int HargaSatuan=HargaNovel[2]*Jumlah;
		Harga+=HargaNovel[2]*Jumlah ;
      if(JualBeli==0){
      	StokNovel[2]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokNovel[2]+=Jumlah;
         Kas-=Harga;
      }
		gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
   	gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void Novel4(){
textcolor(7);
int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokNovel[3]){
      int HargaSatuan=HargaNovel[3]*Jumlah;
		Harga+=HargaNovel[3]*Jumlah ;
      if(JualBeli==0){
      	StokNovel[3]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokNovel[3]+=Jumlah;
         Kas-=Harga;
      }
		gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
   	gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void Novel5(){
textcolor(7);
int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokNovel[4]){
   	int HargaSatuan=HargaNovel[2]*Jumlah;
		Harga+=HargaNovel[4]*Jumlah ;
      if(JualBeli==0){
      	StokNovel[4]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokNovel[4]+=Jumlah;
         Kas-=Harga;
      }
		gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
   	gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void Komik1(){
	textcolor(7);
	int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokKomik[0]){
   	int HargaSatuan=HargaKomik[0]*Jumlah;
		Harga+=HargaSatuan;
      if(JualBeli==0){
   		StokKomik[0]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokKomik[0]+=Jumlah;
         Kas-=Harga;
      }
		gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
   	gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void Komik2(){
	textcolor(7);
	int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokKomik[1]){
   	int HargaSatuan=HargaKomik[1]*Jumlah;
		Harga+=HargaSatuan;
   	if(JualBeli==0){
   		StokKomik[1]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokKomik[1]+=Jumlah;
         Kas-=Harga;
      }
		gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
   	gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void Komik3(){
	textcolor(7);
	int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokKomik[2]){
   	int HargaSatuan=HargaKomik[2]*Jumlah;
		Harga+=HargaSatuan;
      if(JualBeli==0){
   		StokKomik[2]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokKomik[2]+=Jumlah;
         Kas-=Harga;
      }
		gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
   	gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void Komik4(){
	textcolor(7);
	int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokKomik[3]){
   	int HargaSatuan=HargaKomik[3]*Jumlah;
		Harga+=HargaSatuan;
   	if(JualBeli==0){
   		StokKomik[3]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokKomik[3]+=Jumlah;
         Kas-=Harga;
      }
		gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
   	gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void Komik5(){
	textcolor(7);
	int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokKomik[4]){
   	int HargaSatuan=HargaKomik[4]*Jumlah;
		Harga+=HargaSatuan;
   	if(JualBeli==0){
   		StokKomik[4]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokKomik[4]+=Jumlah;
         Kas-=Harga;
      }
		gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
   	gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void Bio1(){
	textcolor(7);
	int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokBio[0]){
   	int HargaSatuan=HargaBio[0]*Jumlah;
		Harga+=HargaSatuan;
      if(JualBeli==0){
      	StokBio[0]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokBio[0]+=Jumlah;
         Kas-=Harga;
      }
		gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
   	gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void Bio2(){
	textcolor(7);
	int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokBio[1]){
   	int HargaSatuan=HargaBio[1]*Jumlah;
		Harga+=HargaSatuan;
   	if(JualBeli==0){
      	StokBio[1]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokBio[1]+=Jumlah;
         Kas-=Harga;
      }
		gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
   	gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void Bio3(){
	textcolor(7);
	int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokBio[2]){
   	int HargaSatuan=HargaBio[2]*Jumlah;
		Harga+=HargaSatuan;
   	if(JualBeli==0){
      	StokBio[2]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokBio[2]+=Jumlah;
         Kas-=Harga;
      }
		gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
   	gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void Bio4(){
	textcolor(7);
	int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokBio[3]){
   	int HargaSatuan=HargaBio[3]*Jumlah;
		Harga+=HargaSatuan;
   	if(JualBeli==0){
      	StokBio[3]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokBio[3]+=Jumlah;
         Kas-=Harga;
      }
		gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
   	gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void Bio5(){
	textcolor(7);
	int Jumlah=atoi(JmlItem);
	if(Jumlah<=StokBio[4]){
   	int HargaSatuan=HargaBio[4]*Jumlah;
		Harga+=HargaSatuan;
   	if(JualBeli==0){
      	StokBio[4]-=Jumlah;
         Kas+=Harga;
      }else{
      	StokBio[4]+=Jumlah;
         Kas-=Harga;
      }
		gotoxy(20,33);printf("Harga = Rp. %d",HargaSatuan);
   	gotoxy(20,34);printf("Total Harga = %d",Harga);
   	YTLagi();
   	InputUang();
   }else{
   	gotoxy(20,33);printf("Stok tidak mencukupi. Kurangi jumlah item!");Sleep(1000);
      gotoxy(20,33);printf("                                           ");
      gotoxy(34,32);printf("  ");
      JumlahItem();
   }
}

void InputUang(){
	textcolor(7);
   gotoxy(20,37);printf("                                                           ");
	gotoxy(20,35);printf("Masukkan uang anda : Rp. ");gets(uang);
   if(ValidasiAngka(uang)==0){
   	gotoxy(20,36);printf("Input tidak valid. Harap masukkan uang dengan benar!");Sleep(1000);
      gotoxy(20,36);printf("                                                    ");
      gotoxy(45,35);printf("                                                                                               ");
      InputUang();
   }else{
      if(atoi(uang)>Harga){
      	gotoxy(20,36);printf("Kembalian : %d",atoi(uang)-Harga);
      }else if(atoi(uang)<Harga){
      	gotoxy(20,36);printf("Uang kurang %d. Silakan ulangi input uang!",Harga-atoi(uang));Sleep(1000);
         gotoxy(20,36);printf("                                                                                 ");
         gotoxy(45,35);printf("                                                                                               ");
         InputUang();
      }else{
         gotoxy(20,36);printf("Uang pas.");
      }Harga=0;
   }
   char done;
   do{
   gotoxy(20,37);printf("Tekan 0 untuk kembali ke menu utama..");gotoxy(57,37);done=getch();
   if(done=='0'){
   	clrscr();
   	MenuUtama();
   }else{
   	gotoxy(20,38);printf("Input salah. Tekan 0 untuk kembali ke menu utama!");Sleep(1000);
      gotoxy(20,38);printf("                                                  ");
      gotoxy(57,37);done=getch();
   }
   }while(done!=0);
}

void YTLagi(){
	textcolor(7);
	gotoxy(20,37);printf("Ingin melakukan transaksi lagi?(y/t): ");char pil=getche();
   if(PilYT(pil)==0){
   	clrscr();
      Bingkai();
   	PilihBukuTanpaKembali();
   }else if(PilYT(pil)==1){
      InputUang();
   }else{
   	gotoxy(20,38);printf("Input tidak valid. Harap masukkan (y/t)!");
   	gotoxy(20,38);printf("                                         ");
      gotoxy(58,37);printf(" ");
      YTLagi();
   }
}

/////////////////////////////	VALIDASI ANGKA	///////////////////////////////////

int ValidasiAngka(char angka[100]){
	for(int a=0;a<strlen(angka);a++){
   	if(!(angka[a]>='0' && angka[a]<='9')){
      	return 0;
      }
   }return 1;
}

////////////////////////////////////////////////////////////////////////////////

int PilYT(char pil){
   if(pil=='y' || pil=='Y'){
   	return 0;
   }else if(pil=='t' || pil=='T'){
   	return 1;
   }else{
   	return 2;
   }
}

int PilJud(char pil){
	if(pil>='1' && pil<='5'){
   	return 0;
   }else if(pil>='5'){
   	return 1;
   }else{
   	return 3;
   }
}

///////////////////////////////////	MAIN	//////////////////////////////////////

main(){
	Welcome();
   getch();
}