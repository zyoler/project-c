//===========================================================================================================================//
//===========================================================================================================================//
//                                                                              															  //
//                                                                              															  //
//                                                   	  EFTUJ PROJECT                                                        //
//																Muhammad Resha Ansori, 10'03'99,                                             //
//																	weidth: 166, Height: 60,                                                  //
//                                                        tengah=78                                                          //
//                                                                                    												     //
//                                                                                    												     //
//===========================================================================================================================//
//=============================================================================================================================
//
//
//
//
//=============================================================================================================================
//                                               LIBRARY
//=============================================================================================================================

#include <conio.h>
#include <stdio.h>
#include <windows.h>

//=============================================================================================================================
//                                       VARIABLE GLOBAL & PROTOTYPE
//=============================================================================================================================
void mugiwara(),loading(),welcome(),awal(),Pilihan(),pilihan_bayar(),login(),sign_up(),menu(),daftar(),pesanan(),Bayar(),Bayar1(),end(),tabel();
void garis_tepi(int aa),bingkai(int x,int y),bingkai2(int x,int y),kotakpendek(int a,int b),notice(char v[],int x,int w,int b),kotakpanjang(int w);
int valangka(char v[]),valhuruf(char v[]),valpass(char v[]),valnama(char v[]),valpsn(char v[]);

char dmenu[15][50]={{"Ayam Geprek Mugiwara no Luffy"},{"Nasi Goreng Hijau Marimo Zoro"},{"Mie Ayam Sanji Si Koki Mimisan"},{"Ketoprak 10.000 cabai \"God Usopp\""},{"Burger \"Suuuper Franky\""},{"Cumi Bakar \"Kaikyo no Jinbe\""},{"Seblak Ceker \"Soul King Brook\""},{"Cotton Candy from Chopper"},{"Jus Jeruk \"Nami\""},{"Jus Manggis \"Nico Robin\""},{"All Blue's drink"},{"North Blue's drink"},{"South Blue's drink"},{"East Blue's drink"},{"West Blue's drink"}};
char iklan1[100]={"Selamat Datang Di Restoran Kami, Apa Yang Anda Inginkan?"};
char iklan2[100]={"Jadilah Nakama Untuk Mendapat Berbagai Promo & Event Menarik Dari Kami (Rp. 20.000/akun)"};
char invalid[100]={">> Mohon Masukan Inputan Dengan Tepat <<"};
char invalid2[100]={">> Minimal Inputan (5) Karakter & Maksimal (10) Karakter <<"};
char terimakasih[100]={">> ^_^ Terimakasih Telah Berkunjung ^_^ <<"};
char invalid4[100]={">> Username atau Password Salah <<"};
char invalid5[100]={">> Tidak Boleh Ada Angka, Tanda Baca Tertentu, Atau Spasi <<"};
char pas[100]={">> Uang Pendaftaran Anda Pas. Silahkan Buat Akun Anda <<"};
char kurang[100]={">> Uang Yang Anda Inputkan Masih Kurang <<"};
char me[100]={"Created by: Muhammad Resha Ansori"};
char thx[100]={">> Mohon Tunggu Selagi Hidangan Disiapkan <<"};
char belumdaftar[100]={">> Akun Tidak Terdaftar <<"};
char sukseshapus[100]={">> Daftar Pesanan Anda Berhasil Dihapus. Anda Diarahkan Ke Menu Utama <<"};
char pase[100]={">> Tidak boleh ada spasi dan tanda baca lainnya <<"};

char un[5][100],pass[5][50],uang_daftar[100],pilih[10][5],pesan[50][50]={"0"},pesanLagi[5],porsi2[10],pembayaran[10],pil[5][10];
long harga[5]={20000,15000,10000,8000,5000},Tharga[50]={0},porsi[50],tamp[50];
long xx=1,xy=0,uang,yangharusdibayar=0,bayar,pemb,disc,hargaakhir,kembali,tamp2,angka;

//=============================================================================================================================
//                                                FUNGSI MAIN
//=============================================================================================================================
main(){
awal();
getch();
}
//=============================================================================================================================
//                                                  TAMPILAN
//=============================================================================================================================
void mugiwara(){
	int n=64;
   				  gotoxy(n,19);cprintf("                             ");printf(" xxx "); printf("\n");
	textcolor(14);gotoxy(n,20);cprintf("                 xxxxx       ");printf("xxxx  "); printf("\n");
	textcolor(14);gotoxy(n,21);cprintf("               xxxxxxxxx     ");printf("x xxxxx "); printf("\n");
	textcolor(14);gotoxy(n,22);cprintf("             xxxxxxxxxxxxx   ");printf("  xxxxxx "); printf("\n");
	textcolor(14);gotoxy(n,23);cprintf("            xxxxxxxxxxxxxxx  ");printf(" xxx xx "); printf("\n");
	textcolor(12);gotoxy(n,24);cprintf("           xxxxxxxxxxxxxxxxx ");printf("xxx "); printf("\n");
	textcolor(12);gotoxy(n,25);cprintf("           xxxxxxxxxxxxxxxxx ");printf("xx "); printf("\n");
	textcolor(14);gotoxy(n,26);cprintf("     xxxxxxxxxxxxxxxxxxxxxxxxxxxxx");gotoxy(n,19);printf("      xxx ");
	textcolor(14);gotoxy(n,27);cprintf("     \\xxxxxxxxxxxxxxxxxxxxxxxxxxx/");gotoxy(n,20);printf("      xxxx  ");
						gotoxy(n,28);printf("           xxxxxxxxxxxxxxxxx\n");gotoxy(n,21);printf("   xxxxx x  ");
						gotoxy(n,29);printf("           xxx   xxxxx   xxx\n");gotoxy(n,22);printf("  xxxxxx  ");
						gotoxy(n,30);printf("           xxxxxxxxxxxxxxxxx\n");gotoxy(n,23);printf("   xx xxx ");
						gotoxy(n,31);printf("            xxxxxxx xxxxxxx\n");gotoxy(n,24);printf("       xxx ");
						gotoxy(n,32);printf("             xxxxxxxxxxxxx\n");gotoxy(n,25);printf("        xx");
						gotoxy(n,33);printf("           x x_|_|_|_|_|_x x\n");
						gotoxy(n,34);printf("          xx x\\_|_|_|_|_/x xx\n");
						gotoxy(n,35);printf("     xx  xxx  xxxxxxxxxxx  xxx  xx\n");
						gotoxy(n,36);printf("    xxxxxxx    xxxxxxxxx    xxxxxxx\n");
						gotoxy(n,37);printf("    xxxxxxx x    xxxxx    x xxxxxxx\n");
						gotoxy(n,38);printf("       xxxxx               xxxxx\n");
						gotoxy(n,39);printf("        xxx                 xxx\n");
}
//==============================================================================
void awal(){
	clrscr();
   mugiwara();
	loading();
   welcome();
   garis_tepi(1);
}
//==============================================================================
void loading(){
   int a=75;
	gotoxy(a,45);printf("%c--------------%c",218,191);
	gotoxy(a,46);printf("|  Loading");
	gotoxy(a,47);printf("%c--------------%c",192,217);
	for(int b=1;b<5;b++){
		for(int c=1;c<2;c++){
   		gotoxy(a+10,46);printf(".    |");Sleep(300);
		}for(int d=1;d<2;d++){
   		gotoxy(a+10,46);printf("..   |");Sleep(300);
		}for(int e=1;e<2;e++){
   		gotoxy(a+10,46);printf("...  |");Sleep(300);
		}
   }clrscr();
}
//==============================================================================
void welcome(){
	for(int a=1;a<10;a++){
		textcolor(14);Sleep(20);gotoxy(45,20);cprintf(" x       x  xxxxx  x      xxxxx    xxxx   xx     xx  xxxxx        xxxxxxx   xxxx                    \n");
		textcolor(14);Sleep(20);gotoxy(45,21);cprintf(" x   x   x  x      x     x     x  x    x  x x   x x  x               x     x    x                   \n");
		textcolor(12);Sleep(20);gotoxy(45,22);cprintf(" x   x   x  xxxx   x     x        x    x  x  x x  x  xxx             x     x    x                   \n");
		textcolor(12);Sleep(20);gotoxy(45,23);cprintf(" x   x   x  x      x     x        x    x  x   x   x  x               x     x    x                   \n");
		textcolor(14);Sleep(20);gotoxy(45,24);cprintf("  x x x x   x      x     x     x  x    x  x       x  x               x     x    x                   \n");
		textcolor(14);Sleep(20);gotoxy(45,25);cprintf("   x   x    xxxxx  xxxxx  xxxxx    xxxx   x       x  xxxxx           x      xxxx                    \n");
		if(a==9)clrscr();
	}for(int a=1;a<10;a++){
		textcolor(14);Sleep(20);gotoxy(45,20);cprintf("         xx     xx  x     x   xxxxx   xxx  x       x   xxxx   xxxxx    xxxx                         \n");
		textcolor(14);Sleep(20);gotoxy(45,21);cprintf("         x x   x x  x     x  x         x   x   x   x  x    x  x    x  x    x                        \n");
		textcolor(12);Sleep(20);gotoxy(45,22);cprintf("         x  x x  x  x     x  x         x   x   x   x  xxxxxx  xxxxx   xxxxxx                        \n");
		textcolor(12);Sleep(20);gotoxy(45,23);cprintf("         x   x   x  x     x  x  xxxx   x   x   x   x  x    x  x  x    x    x                        \n");
		textcolor(14);Sleep(20);gotoxy(45,24);cprintf("         x       x  x     x  x     x   x    x x x x   x    x  x   x   x    x                        \n");
		textcolor(14);Sleep(20);gotoxy(45,25);cprintf("         x       x   xxxxx    xxxxx   xxx    x   x    x    x  x    x  x    x                        \n");
		if(a==9)clrscr();
	}for(int a=1;a<10;a++){
		textcolor(14);Sleep(20);gotoxy(45,20);cprintf(" xxxxx   xxxxx   xxxx   xxxxxxx   xxxx   x     x  xxxxx    xxxx   xx     x  xxxxxxx                 \n");
		textcolor(14);Sleep(20);gotoxy(45,21);cprintf(" x    x  x      x    x     x     x    x  x     x  x    x  x    x  x x    x     x                    \n");
		textcolor(12);Sleep(20);gotoxy(45,22);cprintf(" xxxxx   xxxx    x         x     xxxxxx  x     x  xxxxx   xxxxxx  x  x   x     x                    \n");
		textcolor(12);Sleep(20);gotoxy(45,23);cprintf(" x  x    x         x       x     x    x  x     x  x  x    x    x  x   x  x     x                    \n");
		textcolor(14);Sleep(20);gotoxy(45,24);cprintf(" x   x   x      x    x     x     x    x  x     x  x   x   x    x  x    x x     x                    \n");
		textcolor(14);Sleep(20);gotoxy(45,25);cprintf(" x    x  xxxxx   xxxx      x     x    x   xxxxx   x    x  x    x  x     xx     x                    \n");
		if(a==9)clrscr();
	}
}
//==============================================================================
void garis_tepi(int aa){
	for(int x=0;x<166;x++){
		textcolor(15);gotoxy((166-x-1),6);cprintf("%c",219);
		gotoxy(x,55);cprintf("%c",219);Sleep(2);
		if(x<155){
      	gotoxy(x+6,54);cprintf("%c",219);
			gotoxy(x+6,53);cprintf("%c",219);
      	gotoxy(x+6,52);cprintf("%c",219);
      	gotoxy(x+6,51);cprintf("%c",219);
   	}
   }for(int y=0;y<60;y++){
      gotoxy(6,(60-y));cprintf("%c",219);
      textcolor(0);gotoxy(5,(60-y));cprintf("%c",219);
      textcolor(15);gotoxy(4,(60-y));cprintf("%c",219);
      gotoxy(158,y);cprintf("%c",219);
      textcolor(0);gotoxy(159,y);cprintf("%c",219);
      textcolor(15);gotoxy(160,y);cprintf("%c",219);
   }if(aa==0);
   else if(aa==1){
    	Pilihan();
   }else if(aa==2){
    	daftar();
   }else if(aa==3){
		menu();
   }else if(aa==4){
     	sign_up();
   }else if(aa==5){
     	pesanan();
   }else if(aa==6){
     	login();
   }else if(aa==7){
     	Bayar();
   }else if(aa==8){
     	Bayar1();
   }else if(aa==9){
		end();
   }
}
//=============================================================================================================================
void bingkai(int x,int y){
	for(int a=x;a<x+151;a++){
		for(int b=y;b<=y+43;b++){
			textcolor(3);gotoxy(a,b);cprintf("%c",219);
  		}
	}
}
//=============================================================================================================================
void bingkai2(int x,int y){
	for(int a=x;a<x+65;a++){
		for(int b=y;b<=y+20;b++){
			textcolor(15);gotoxy(a,b);cprintf("%c",219);
		}
	}
}
//=============================================================================================================================
void kotakpanjang(int w){
textcolor(w);
textbackground(w);
	gotoxy(7,52);cprintf("                                                                                                                                                       ");
	gotoxy(7,53);cprintf("                                                                                                                                                       ");
	gotoxy(7,54);cprintf("                                                                                                                                                       ");
}
//=============================================================================================================================
void kotakpendek(int a,int b){
   gotoxy(a,b);printf("                                ");
	gotoxy(a,b+1);printf("                                ");
	gotoxy(a,b+2);printf("                                ");
}
//=============================================================================================================================
void kotakirit(int a,int b){
   gotoxy(a,b);printf("                     ");
	gotoxy(a,b+1);printf("                     ");
	gotoxy(a,b+2);printf("                     ");
}
//=============================================================================================================================
void notice(char v[],int x,int w,int b){
	int a=2;
	kotakpanjang(b);
	gotoxy(x,53);textcolor(w);textbackground(b);cprintf("%s",v);Sleep(800);
	for(int x=1;x<152;x++){
   	textcolor(15);
      gotoxy(x+6,54);cprintf("%c",219);Sleep(a);
		gotoxy(x+6,53);cprintf("%c",219);Sleep(a);
      gotoxy(x+6,52);cprintf("%c",219);Sleep(a);
      gotoxy(x+6,51);cprintf("%c",219);Sleep(a);
      gotoxy(x+6,55);cprintf("%c",219);Sleep(a);
   }
}
//=============================================================================================================================
void tabel(){
int d=51;
textbackground(7);
textcolor(0);
   gotoxy(d,20);cprintf("%c---------------------------------------------------------------%c",218,191);
   gotoxy(d,21);cprintf("|---------------------------------------------------------------|");
textcolor(1);
 	gotoxy(d+1,21);cprintf("                    >> P E M B A Y A R A N <<                  ");
textcolor(0);
   gotoxy(d,22);cprintf("|---------------------------------------------------------------|");
	for(int x=0;x<16;x++){
   	gotoxy(d,23+x);cprintf("|                                                               |");
      gotoxy(d,38);cprintf("|---------------------------------------------------------------|");
   }
   gotoxy(d,39);cprintf("|                                                               |");
textcolor(1);
   gotoxy(d+1,39);cprintf(" Kembalian                            :                        ");
textcolor(0);
   gotoxy(d,40);cprintf("%c---------------------------------------------------------------%c",192,217);
   gotoxy(d+2,23);cprintf("Total harga pesanan                  :                        |");
   gotoxy(d+2,25);cprintf("Potongan harga member (25%)          :        -               |");
   gotoxy(d+2,27);cprintf("Potongan/promo lainnya               :        -               |");
   gotoxy(d+2,28);cprintf("                                      _________________ -     |");
   gotoxy(d+2,30);cprintf("Total yang harus dibayar             :                        |");
	gotoxy(d+2,32);cprintf("Uang pembayaran anda                 :                        |");
	gotoxy(d+2,33);cprintf("                                      _________________ -     |");
}
//=============================================================================================================================
//                                  ISI PROGRAM
//=============================================================================================================================
void Pilihan(){
	mugiwara();
   for(int x=0;x<strlen(iklan2);x++){
		gotoxy(57+x,41);printf("%c",iklan1[x]);Sleep(50);
		gotoxy(42+x,43);printf("%c",iklan2[x]);
	}
   lagi:
   if (xx>1){
textcolor(15);
textbackground(12);
   	gotoxy(62,49);cprintf("  !! Anda Punya pesanan yang belum dibayar !!  ");
textbackground(0);
   }else;
   kotakpendek(20,52);kotakpendek(50,52);kotakpendek(65,52);
   gotoxy(25,53);printf("|  1.Daftar jadi Nakama   |  2.Saya pembeli biasa  |  3.Keluar  |");
	kotakpendek(115,52);
   gotoxy(120,53);printf("  Pilihan anda:    ");
   gotoxy(138,53);gets(pilih[0]);
textcolor(14);
	if(valangka(pilih[0])==0){
	  	if(strcmp(pilih[0],"1")==0){
			gotoxy(28,53);cprintf("1.Daftar jadi Nakama");
	     	loading();
		   garis_tepi(2);
	   }else if(strcmp(pilih[0],"2")==0){
			gotoxy(54,53);cprintf("2.Saya pembeli biasa");
      	loading();
			garis_tepi(3);
      }else if(strcmp(pilih[0],"3")==0){
			gotoxy(74,53);cprintf("3.Keluar");
         notice(terimakasih,62,15,10);
textcolor(15);
textbackground(0);
			loading();
      	end();
	   }else{
   	  	notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
      	goto lagi;
		}
   }else{
  	  	notice(invalid,64,15,28);
textcolor(15);
textbackground(0);
     	goto lagi;
	}
}
//==============================================================================
void daftar(){
textbackground(0);
   mugiwara();
   for(int x=0;x<strlen(iklan2);x++){
		gotoxy(40+x,42);printf("%c",iklan2[x]);Sleep(50);
   }
textcolor(14);
   gotoxy(65,44);cprintf(">> 00 untuk kembali ke menu utama <<");
textcolor(0);
   lagi:
   kotakpendek(61,52);kotakpendek(73,52);
   gotoxy(64,53);printf("Uang setoran pendaftaran anda Rp.");
   gotoxy(98,53);gets(uang_daftar);
	int q=0;
	for(int x=0;strlen(uang_daftar)>x;x++){
		if(uang_daftar[0]=='0'){
      	q++;
	   }
	}
	if(q==0){
	   if(strcmp(uang_daftar,"")==0){
			notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
      	goto lagi;
	   }else if(valangka(uang_daftar)==0){
			uang=atoi(uang_daftar);
  			if(uang>20000){
   			uang-=20000;
				kotakpanjang(10);
textcolor(15);
				gotoxy(52,53);cprintf(">> kembalian anda Rp.%d,- Tekan Sembarang Untuk Melanjutkan <<",uang);
textbackground(0);
				getch();
  	   	   loading();
				garis_tepi(4);
   		}else if(uang==20000){
				notice(pas,55,15,10);
textcolor(15);
textbackground(0);
      	   loading();
				garis_tepi(4);
   		}else if(uang<20000){
textcolor(15);
textbackground(14);
				notice(kurang,63,15,14);
textcolor(15);
textbackground(0);
				goto lagi;
   		}else{
  	  			notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
	   	   goto lagi;
			}
		}else{
  	  		notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
	   	goto lagi;
		}
	}else{
		if(strcmp(uang_daftar,"00")==0){
	   	if(xx>1){
				for(int x=0;x<10;x++){
textbackground(0);
textcolor(0);
					gotoxy(61,48);cprintf("                                            ");
					gotoxy(61,49);cprintf(" !! Anda Punya pesanan yang belum dibayar !!");
					gotoxy(61,50);cprintf("                                            ");Sleep(100);
textbackground(12);
textcolor(15);
					gotoxy(62,48);cprintf("                                           ");
					gotoxy(62,49);cprintf("!! Anda Punya pesanan yang belum dibayar !!");
					gotoxy(62,50);cprintf("                                           ");Sleep(100);
				}
textbackground(0);
	   		kotakpendek(61,52);kotakpendek(73,52);
		   	gotoxy(61,53);printf("  1.daftar  |  2.bayar  |  3.hapus pesanan  ");
				kotakpendek(115,52);
		   	gotoxy(120,53);printf("  Pilihan anda:    ");
	      	gotoxy(138,53);gets(pilih[4]);
textcolor(14);
				if(strcmp(pilih[4],"1")==0){
      	   	clrscr();
         	   garis_tepi(2);
		      }else if(strcmp(pilih[4],"2")==0){
   	      	gotoxy(76,53);cprintf("2.bayar");
					kotakpendek(45,52);kotakpendek(58,52);kotakpendek(58,52);
   				gotoxy(45,53);printf(" Bayar sebagai : (1)Nakama | (2)Pembeli Biasa | (3)kembali ");
					kotakpendek(115,52);
				   gotoxy(120,53);printf("  Pilihan anda:    ");
   	   		gotoxy(138,53);gets(pilih[5]);
			  		if(strcmp(pilih[5],"1")==0){
						gotoxy(62,53);cprintf("(1)Nakama");
      			   loading();
   	  				garis_tepi(6);
				   }else if(strcmp(pilih[5],"2")==0){
						gotoxy(74,53);cprintf("(2)Pembeli Biasa");
      			   loading();
   	   			garis_tepi(8);
			   	}else if(strcmp(pilih[5],"3")==0){
   	       		clrscr();
	   		   	garis_tepi(2);
		         }else{
						notice(invalid,64,15,28);
textcolor(15);
textbackground(0);
      				goto lagi;
	            }
   	      }else if(strcmp(pilih[4],"3")==0){
      	   	gotoxy(88,53);cprintf("3.hapus pesanan");
				   kotakpendek(61,52);kotakpendek(73,52);
         		gotoxy(62,53);printf("Anda yakin ingin menghapus pesanan?? (Y/N)");
					kotakpendek(115,52);
				   gotoxy(120,53);printf("  Pilihan anda:    ");
      			gotoxy(138,53);gets(pilih[6]);
					if(strcmp(pilih[6],"y")==0 || strcmp(pilih[6],"Y")==0){
	     				xx=1;
		         	xy=0;
		   	      for(int p=1;p<50;p++){
   		   	   	strcpy(pesan[p],"");
      		   		strcpy(porsi2,"");
      	   			porsi[p]=NULL;
		      	   	Tharga[p]=NULL;
   		      		tamp[p]=NULL;
      		   		yangharusdibayar=NULL;
	         		}
						notice(sukseshapus,49,15,10);
textcolor(15);
textbackground(0);
	   	         loading();
						garis_tepi(1);
			   	}else if(strcmp(pilih[6],"n")==0 || strcmp(pilih[6],"N")==0){
            		goto lagi;
		         }else{
						notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
      				goto lagi;
         		}
				}else{
					notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
      			goto lagi;
				}
		   }else{
				loading();
				clrscr();
				garis_tepi(1);
	   	}
	   }else{

   		notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
	   	goto lagi;
		}
	}
}
//==============================================================================
void sign_up(){
	ulangi:
	bingkai(7,7);
   bingkai2(53,20);
textcolor(6);
	kotakpendek(68,18);
	gotoxy(78,19);cprintf(">> SIGN UP <<");
   gotoxy(68,22);cprintf("                                ");
	for(int x=0;x<5;x++){
		gotoxy(68,24+x);cprintf("                                ");
   }
   gotoxy(68,30);cprintf("                                ");
textcolor(15);
   gotoxy(70,25);cprintf("Nickname:");
	gotoxy(70,27);cprintf("Password:");
	gotoxy(80,25);gets(un[0]);
	int q=0;
	for(int x=0;strlen(un[0])>x;x++){
		if(un[0][x]==' '){
      	q++;
	   }
	}
	if(q==0){
		if(valnama(un[0])==0){
			if(strlen(un[0])>=5 && strlen(un[0])<=10){
	   		gotoxy(80,27);gets(pass[0]);
				if(valpass(pass[0])==0){
					if(strlen(pass[0])>=5 && strlen(pass[0])<=10 && strcmp(pass[0]," ")!=0){
						kotakpendek(68,32);
						gotoxy(69,33);cprintf("Selamat Datang Di Club, %s! ",un[0]);
						kotakpanjang(10);
textcolor(15);
						gotoxy(65,53);cprintf(">> Tekan Sembarang Untuk Melanjutkan <<");
textbackground(0);
						getch();
			         loading();
						garis_tepi(3);
	         	}else{
   	   			notice(invalid2,55,15,28);
textcolor(15);
textbackground(0);
	      	   	goto ulangi;
   	   		}
      	   }else{
					notice(pase,59,15,28);
textcolor(15);
textbackground(0);
	         	goto ulangi;
   	      }
      	}else{
      		notice(invalid2,55,15,28);
textcolor(15);
textbackground(0);
	         goto ulangi;
   	   }
	   }else{
   	  	notice(invalid5,54,15,28);
textcolor(15);
textbackground(0);
      	goto ulangi;
	   }
	}else{
  		notice(invalid5,54,15,28);
textcolor(15);
textbackground(0);
	   goto ulangi;
	}
}
//==============================================================================
void menu(){
	int a=22;
	bingkai(7,7);
	bingkai2(52,12);
textbackground(11);
   gotoxy(65,15);cprintf("                                     ");
textbackground(0);
	bingkai2(52,25);
textcolor(0);
textbackground(15);
   gotoxy(a,20);cprintf("%c------------------------------------------------------%c",218,191);
   gotoxy(a,21);cprintf("|------------------------------------------------------|");
textcolor(1);
   gotoxy(a+1,21);cprintf("                    >> M E N U <<                     ");
textcolor(0);
textbackground(15);
   gotoxy(a,22);cprintf("|------------------------------------------------------|");
	for(int x=0;x<16;x++){
	   gotoxy(a,23+x);cprintf("|                                                      |");
		gotoxy(a+2,23+x);cprintf("%d.%s",x+1,dmenu[x]);
      gotoxy(a,38);cprintf("%c------------------------------------------------------%c",192,217);
      if(x==1||x==5||x==6){
      	gotoxy(a+44,23+x-1);cprintf("Rp.%d,-",harga[0]);
	   }else if(x==2||x==3){
      	gotoxy(a+44,23+x-1);cprintf("Rp.%d,-",harga[1]);
	   }else if(x==4||x==11){
      	gotoxy(a+44,23+x-1);cprintf("Rp.%d,-",harga[2]);
   	}else if(x==7||x==9||x==10){
      	gotoxy(a+44,23+x-1);cprintf("Rp.%d,-",harga[3]);
	   }else if(x==8||x==12||x==13||x==14||x==15){
      	gotoxy(a+44,23+x-1);cprintf("Rp.%d,-",harga[4]);
	   }
   }
   pesanan();
}
//==============================================================================
void pesanan(){
	int d=78;
   gotoxy(d,20);cprintf("%c---------------------------------------------------------------%c",218,191);
   gotoxy(d,21);cprintf("|---------------------------------------------------------------|");
textcolor(1);
   gotoxy(d+1,21);cprintf("           >>  D A F T A R   P E S A N A N   A N D A <<        ");
textcolor(0);
   gotoxy(d,22);cprintf("|---------------------------------------------------------------|");
	for(int xx=0;xx<16;xx++){
   	gotoxy(d,23+xx);cprintf("|                                                               |");
      gotoxy(d,38);cprintf("|---------------------------------------------------------------|");
   }
   gotoxy(d,39);cprintf("|                                                               |");
textcolor(1);
   gotoxy(d+1,39);cprintf(" Total Harga                                                   ");
textcolor(0);
   gotoxy(d,40);cprintf("%c---------------------------------------------------------------%c",192,217);
	kehabisanvariabel:
   kotakpendek(20,52);kotakpendek(50,52);
	gotoxy(35,53);printf("|  1.Pesan  |  2.Bayar  |");

textcolor(15);
textbackground(11);
   gotoxy(65,43);cprintf(">> 00 untuk kembali ke menu utama <<");
textcolor(15);
textbackground(0);

	kotakpendek(95,52);
 	gotoxy(100,53);printf("  Pilihan anda:    ");
   gotoxy(118,53);gets(pilih[7]);
   if(strcmp(pilih[7],"00")==0){
		loading();
		clrscr();
		garis_tepi(1);
	}
   if(strcmp(pilih[7],"1")==0){
textbackground(11);
	   gotoxy(65,43);cprintf("                                     ");
textbackground(0);
   }else if(strcmp(pilih[7],"2")==0){
		cobaan:
textcolor(15);
textbackground(11);
   gotoxy(65,43);cprintf(">> 00 untuk kembali ke menu utama <<");
textcolor(14);
textbackground(0);
		kotakpendek(45,52);kotakpendek(58,52);kotakpendek(58,52);
   	gotoxy(30,53);printf(" Bayar sebagai :  (1)Nakama  |  (2)Pembeli Biasa  |");
		kotakpendek(95,52);
     	gotoxy(100,53);printf("  Pilihan anda:    ");
   	gotoxy(118,53);gets(pilih[5]);
	   if(strcmp(pilih[5],"00")==0){
			loading();
			clrscr();
			garis_tepi(1);
		}
		if(strcmp(pilih[5],"1")==0){
			gotoxy(48,53);cprintf("(1)Nakama");
  		   loading();
  			garis_tepi(6);
	   }else if(strcmp(pilih[5],"2")==0){
			gotoxy(62,53);cprintf("(2)Pembeli Biasa");
  		   loading();
   		garis_tepi(8);
	   }else{
			notice(invalid,64,15,28);
textcolor(15);
textbackground(0);
  			goto cobaan;
      }
   }else{
		notice(invalid,64,15,28);
textcolor(15);
textbackground(0);
  		goto kehabisanvariabel;
   }
	pesan:
textbackground(0);
   kotakpendek(20,52);kotakpendek(50,52);
	gotoxy(35,53);printf("Silahkan Memesan Menu Yang Tersedia");
	kotakpendek(95,52);
 	gotoxy(100,53);printf("  Pilihan anda:    ");
   gotoxy(118,53);gets(pesan[xx]);
	int q=0;
	for(int x=0;strlen(pesan[xx])>x;x++){
		if(pesan[xx][0]=='0'){
	      q++;
	   }
	}
   tamp2=atoi(pesan[xx]);
	if(q==0){
textcolor(0);
   	if(valangka(pesan[xx])==0 && tamp2>0 && tamp2<16){
			porsi:
		   kotakpendek(20,52);kotakpendek(50,52);
		   gotoxy(43,53);printf("Berapa porsi?                  ");
			kotakpendek(95,52);
	   	gotoxy(100,53);printf("  Pilihan anda:    ");
		   gotoxy(118,53);gets(porsi2);
textbackground(15);
textcolor(0);
		   	if(valangka(porsi2)==0 && porsi2[0]!='0'){
		  			porsi[xx]=atoi(porsi2);
   				if(strcmp(pesan[xx],"1")==0 ){
      	 			if(strcmp(pesan[xx-1],pesan[xx])==0){
	 						Tharga[xx]=porsi[xx]*harga[0];
 			         	tamp[xx]=porsi[xx]+porsi[xx-1];
	   	  				tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
 				   	   gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[0]);
 					   	gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
         	   	   xy--;
	 					}else{
  		   				Tharga[xx]=porsi[xx]*harga[0];
	 						gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[0]);
 							gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
 						}
		 		   }else if(strcmp(pesan[xx],"2")==0 && strcmp(porsi2,"0")!=0){
   		    		if(strcmp(pesan[xx-1],pesan[xx])==0){
 							Tharga[xx]=porsi[xx]*harga[1];
 		   		      tamp[xx]=porsi[xx]+porsi[xx-1];
     						tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
  		   	   		gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[1]);
	 			   		gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
	   	            xy--;
 						}else{
	  	   				Tharga[xx]=porsi[xx]*harga[1];
 							gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[1]);
 							gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
	 					}
	 			   }else if(strcmp(pesan[xx],"3")==0 && strcmp(porsi2,"0")!=0){
  		   			if(strcmp(pesan[xx-1],pesan[xx])==0){
 							Tharga[xx]=porsi[xx]*harga[1];
 	   		   	   tamp[xx]=porsi[xx]+porsi[xx-1];
     						tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
	 		      		gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[2]);
 					   	gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
	      	         xy--;
 			   	   }else{
 							Tharga[xx]=porsi[xx]*harga[1];
 		   	   		gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[2]);
	 	   				gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
 			   		}
	 	   		}else if(strcmp(pesan[xx],"4")==0 && strcmp(porsi2,"0")!=0){
   	  				if(strcmp(pesan[xx-1],pesan[xx])==0){
 							Tharga[xx]=porsi[xx]*harga[2];
       			   	tamp[xx]=porsi[xx]+porsi[xx-1];
	 	   		   	tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
 				   	   gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[3]);
 					   	gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
	         	      xy--;
 		      		}else{
 							Tharga[xx]=porsi[xx]*harga[2];
	 			      	gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[3]);
 		   				gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
 			   		}
	 	   		}else if(strcmp(pesan[xx],"5")==0 && strcmp(porsi2,"0")!=0){
   	  				if(strcmp(pesan[xx-1],pesan[xx])==0){
	 						Tharga[xx]=porsi[xx]*harga[0];
   	   	 		   tamp[xx]=porsi[xx]+porsi[xx-1];
 			   	   	tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
    					   gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[4]);
 					   	gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
	               	xy--;
		     			}else{
 							Tharga[xx]=porsi[xx]*harga[0];
      		 			gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[4]);
 					   	gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
	 		   		}
		 	   	}else if(strcmp(pesan[xx],"6")==0 && strcmp(porsi2,"0")!=0){
   		  			if(strcmp(pesan[xx-1],pesan[xx])==0){
 							Tharga[xx]=porsi[xx]*harga[0];
       				   tamp[xx]=porsi[xx]+porsi[xx-1];
 		      			tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
    			   		gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[5]);
		 				   gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
   		            xy--;
     					}else{
 							Tharga[xx]=porsi[xx]*harga[0];
       					gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[5]);
 			   			gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
		  				}
	 		   	}else if(strcmp(pesan[xx],"7")==0 && strcmp(porsi2,"0")!=0){
   	  				if(strcmp(pesan[xx-1],pesan[xx])==0){
 							Tharga[xx]=porsi[xx]*harga[3];
       				   tamp[xx]=porsi[xx]+porsi[xx-1];
 		      			tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
	    				   gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[6]);
 					   	gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
	      	         xy--;
   	  				}else{
 							Tharga[xx]=porsi[xx]*harga[3];
       					gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[6]);
 					   	gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
	  					}
		 	   	}else if(strcmp(pesan[xx],"8")==0 && strcmp(porsi2,"0")!=0){
   		  			if(strcmp(pesan[xx-1],pesan[xx])==0){
 							Tharga[xx]=porsi[xx]*harga[4];
       				   tamp[xx]=porsi[xx]+porsi[xx-1];
 		      			tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
    			   		gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[7]);
	 				   	gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
	   	            xy--;
   	  				}else{
 							Tharga[xx]=porsi[xx]*harga[4];
       					gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[7]);
 			   			gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
	  					}
	 		   	}else if(strcmp(pesan[xx],"9")==0 && strcmp(porsi2,"0")!=0){
 		   	   	if(strcmp(pesan[xx-1],pesan[xx])==0){
 							Tharga[xx]=porsi[xx]*harga[3];
 		   	   	   tamp[xx]=porsi[xx]+porsi[xx-1];
  	   					tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
	 			   	   gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[8]);
 					   	gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
	      	         xy--;
 		      		}else{
 							Tharga[xx]=porsi[xx]*harga[3];
 		   	   		gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[8]);
	 	   				gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
 			     		}
	 	   		}else if(strcmp(pesan[xx],"10")==0 && strcmp(porsi2,"0")!=0){
   	  				if(strcmp(pesan[xx-1],pesan[xx])==0){
 							Tharga[xx]=porsi[xx]*harga[3];
       			   	tamp[xx]=porsi[xx]+porsi[xx-1];
	 		   	   	tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
   	 				   gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[9]);
 					   	gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
	         	      xy--;
   	  				}else{
	 						Tharga[xx]=porsi[xx]*harga[3];
  		   				gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[9]);
 					   	gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
  						}
		 		   }else if(strcmp(pesan[xx],"11")==0 && strcmp(porsi2,"0")!=0){
  			   		if(strcmp(pesan[xx-1],pesan[xx])==0){
 							Tharga[xx]=porsi[xx]*harga[2];
 	   			      tamp[xx]=porsi[xx]+porsi[xx-1];
 	      				tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
 		      			gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[10]);
	 				   	gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
	   	            xy--;
 				      }else{
 							Tharga[xx]=porsi[xx]*harga[2];
 		   	   		gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[10]);
 	   					gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
	 		   		}
	 		   	}else if(strcmp(pesan[xx],"12")==0 && strcmp(porsi2,"0")!=0){
   	  				if(strcmp(pesan[xx-1],pesan[xx])==0){
 							Tharga[xx]=porsi[xx]*harga[4];
       				   tamp[xx]=porsi[xx]+porsi[xx-1];
 		      			tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
	    				   gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[11]);
 					   	gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
	      	         xy--;
 		      		}else{
 							Tharga[xx]=porsi[xx]*harga[4];
       					gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[11]);
	 				   	gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
 			   		}
	 	   		}else if(strcmp(pesan[xx],"13")==0 && strcmp(porsi2,"0")!=0){
 		      		if(strcmp(pesan[xx-1],pesan[xx])==0){
 							Tharga[xx]=porsi[xx]*harga[4];
 		   	      	tamp[xx]=porsi[xx]+porsi[xx-1];
	  	   				tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
 				   	   gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[12]);
 					   	gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
	         	      xy--;
 		      		}else{
	 						Tharga[xx]=porsi[xx]*harga[4];
 				      	gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[12]);
 	   					gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
 		   			}
		 	   	}else if(strcmp(pesan[xx],"14")==0 && strcmp(porsi2,"0")!=0){
 			      	if(strcmp(pesan[xx-1],pesan[xx])==0){
 							Tharga[xx]=porsi[xx]*harga[4];
 		   		      tamp[xx]=porsi[xx]+porsi[xx-1];
  	   					tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
 			      		gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[13]);
	 					   gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
	   	            xy--;
   	  				}else{
 							Tharga[xx]=porsi[xx]*harga[4];
       					gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[13]);
 			   			gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
	  					}
	 		   	}else if(strcmp(pesan[xx],"15")==0 && strcmp(porsi2,"0")!=0){
   	  				if(strcmp(pesan[xx-1],pesan[xx])==0){
 							Tharga[xx]=porsi[xx]*harga[4];
       				   tamp[xx]=porsi[xx]+porsi[xx-1];
 		      			tamp[xx+1]=Tharga[xx]+Tharga[xx-1];
	    				   gotoxy(d+2,23+xy-1);cprintf("%d. %s",xy,dmenu[14]);
 					   	gotoxy(d+40,23+xy-1);cprintf(" %d      |  Rp.%d",tamp[xx],tamp[xx+1]);
	      	         xy--;
   	  				}else{
 							Tharga[xx]=porsi[xx]*harga[4];
       					gotoxy(d+2,23+xy);cprintf("%d. %s",xy+1,dmenu[14]);
	 				   	gotoxy(d+40,23+xy);cprintf(" %d      |  Rp.%d",porsi[xx],Tharga[xx]);
 			   		}
	 	   		}else{
						notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
			   		goto porsi;
		         }
   		   }else{
					notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
			   	goto porsi;
	   	   }
   	   }else{
				notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
		   	goto pesan;
	      }
   	}else{
			notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
			goto pesan;
   	}
   lagi:
textbackground(0);
   kotakpendek(20,52);kotakpendek(50,52);
	gotoxy(40,53);printf("Ingin Pesan Lagi? (Y/N) :        ");
	kotakpendek(95,52);
   gotoxy(100,53);printf("  Pilihan anda:    ");
   gotoxy(118,53);gets(pesanLagi);
	if(strcmp(pesanLagi,"y")==0 || strcmp(pesanLagi,"Y")==0){
		xx++;
   	xy++;
		gotoxy(54,53);cprintf("Y");
   	goto pesan;
   }else if(strcmp(pesanLagi,"n")==0 || strcmp(pesanLagi,"N")==0){
		xx++;
   	xy++;
		gotoxy(56,53);cprintf("N");
		for(int xx=0;xx<15;xx++){
  	   	yangharusdibayar+=Tharga[xx];
	  	}
textcolor(0);
textbackground(7);
      gotoxy(127,39);cprintf(":  Rp.%d,-",yangharusdibayar);
textcolor(14);
textbackground(0);
   kotakpendek(20,52);kotakpendek(50,52);
	gotoxy(35,53);printf("  |  1.bayar  |  2.hapus pesanan  |  ");
			kotakpendek(95,52);
         gotoxy(100,53);printf("  Pilihan anda:    ");
      	gotoxy(118,53);gets(pilih[4]);
			if(strcmp(pilih[4],"1")==0){
				kotakpendek(45,52);kotakpendek(58,52);kotakpendek(58,52);
   			gotoxy(30,53);printf(" Bayar sebagai :  (1)Nakama  |  (2)Pembeli Biasa  |");
				kotakpendek(95,52);
         	gotoxy(100,53);printf("  Pilihan anda:    ");
      		gotoxy(118,53);gets(pilih[5]);
		  		if(strcmp(pilih[5],"1")==0){
					gotoxy(48,53);cprintf("(1)Nakama");
      		   loading();
   	  			garis_tepi(6);
			   }else if(strcmp(pilih[5],"2")==0){
					gotoxy(62,53);cprintf("(2)Pembeli Biasa");
      		   loading();
   	   		garis_tepi(8);
			   }else{
					notice(invalid,64,15,28);
textcolor(15);
textbackground(0);
      			goto lagi;
            }
         }else if(strcmp(pilih[4],"2")==0){
			   kotakpendek(20,52);kotakpendek(50,52);
				gotoxy(35,53);printf("Anda yakin ingin menghapus pesanan?? (Y/N)");
				kotakpendek(95,52);
         	gotoxy(100,53);printf("  Pilihan anda:    ");
      		gotoxy(118,53);gets(pilih[6]);
            xx--;
            xy--;
				if(strcmp(pilih[6],"y")==0 || strcmp(pilih[6],"Y")==0){
	     			xx=1;
		         xy=0;
	   	      for(int p=1;p<50;p++){
   	   	   	strcpy(pesan[p],"");
      	   		strcpy(porsi2,"");
         			porsi[p]=NULL;
		         	Tharga[p]=NULL;
   		      	tamp[p]=NULL;
      		   	yangharusdibayar=NULL;
         		}
					notice(sukseshapus,49,15,10);
textcolor(15);
textbackground(0);
	            loading();
					garis_tepi(1);
			   }else if(strcmp(pilih[6],"n")==0 || strcmp(pilih[6],"N")==0){
            	goto lagi;
	         }else{
					notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
      			goto lagi;
         	}
			}else{
					notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
      			goto lagi;
			}
	}else{
		notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
     	goto lagi;
   }
}
//==============================================================================
void login(){
   ulangi:
   bingkai(7,7);
   bingkai2(53,20);
	kotakpendek(68,18);
	for(int x=0;x<5;x++){
     	gotoxy(68,19);printf("                                ");
   	gotoxy(68,22);printf("                                ");
      gotoxy(68,24+x);printf("                                ");
      gotoxy(68,30);printf("                                ");
   }
textcolor(6);
textbackground(0);
   gotoxy(78,19);cprintf(">> LOGIN <<");
	gotoxy(70,25);printf("Nickname :  ");
   gotoxy(70,27);printf("Password :  ");
   gotoxy(81,25);gets(un[1]);

	int q=0;
	for(int x=0;strlen(un[1])>x;x++){
		if(un[1][0]==' '){
      	q++;
	   }
	}
	if(q==0){
   	if(valnama(un[1])==0){
			if(strlen(un[1])>=5 && strlen(un[1])<=10){
	  			gotoxy(81,27);gets(pass[1]);
				if(strlen(pass[1])>=5 && strlen(pass[1])<=10){
   	         if(strcmp(un[0],un[1])==0 && strcmp(pass[0],pass[1])==0){
			         loading();
						garis_tepi(7);
	         	}else{
						notice(belumdaftar,72,15,28);
textcolor(15);
textbackground(0);
						kotakpendek(68,32);
						kotakpendek(53,52);kotakpendek(62,52);
						gotoxy(73,33);cprintf("Belum menjadi Nakama??");
textcolor(15);
textbackground(0);
						gotoxy(54,53);cprintf("        | 1.Login | 2.Daftar |        ");
						kotakirit(97,52);
					   gotoxy(99,53);printf("Pilihan anda :   ");
					   gotoxy(114,53);gets(pil[0]);
					   if(strcmp(pil[0],"1")==0){
textcolor(14);
		   				gotoxy(64,53);cprintf("1.Login");
							goto ulangi;
			         }else if(strcmp(pil[0],"2")==0){
textcolor(14);
		 			  	   gotoxy(74,53);cprintf("2.Daftar");
				     	   loading();
					  		clrscr();
					  		garis_tepi(2);
				   	}else{
				  	  		notice(invalid,53,15,28);
textcolor(15);
textbackground(0);
				     	   goto ulangi;
					  	}
					}
	      	}else{
	   	   	notice(invalid2,55,15,28);
textcolor(15);
textbackground(0);
   	   	   goto ulangi;
	   	   }
	   	}else{
		     	notice(invalid2,55,15,28);
textcolor(15);
textbackground(0);
  			   goto ulangi;
		   }
  		}else{
     		notice(invalid5,54,15,28);
textcolor(15);
textbackground(0);
		   goto ulangi;
   	}
  	}else{
     	notice(invalid5,54,15,28);
textcolor(15);
textbackground(0);
	   goto ulangi;
   }
}
//==============================================================================
void Bayar(){
	int d=51;
	bingkai(7,7);
   bingkai2(25,25);bingkai2(75,25);
   disc=(yangharusdibayar*25)/100;
   hargaakhir=yangharusdibayar-disc;
	tabel();
   gotoxy(d+45,23);cprintf("Rp. %d,-",yangharusdibayar);
   gotoxy(d+45,25);cprintf("Rp. %d,-",disc);
   gotoxy(d+45,30);cprintf("Rp. %d,-",hargaakhir);
	bayarlagi:
   kotakpendek(d,52);kotakpendek(d+3,52);kotakpendek(d+33,52);
	gotoxy(d+17,53);printf("Uang pembayaran anda : Rp.         ");
	gotoxy(95,53);gets(pembayaran);
	int q=0;
	for(int x=0;strlen(pembayaran)>x;x++){
		if(pembayaran[0]=='0'){
      	q++;
	   }
	}
	if(q==0){
		if(valangka(pembayaran)==0){
			angka=atoi(pembayaran);
      	if(angka>=hargaakhir){
	   		kembali=angka-hargaakhir;
textbackground(7);
textcolor(0);
			   gotoxy(d+45,32);cprintf("Rp. %d,-",angka);
				gotoxy(d+45,39);cprintf("Rp. %d,-",kembali);
textbackground(0);
textcolor(15);
				xx=1;
         	xy=0;
textbackground(0);
				notice(thx,62,15,10);
textcolor(15);
textbackground(0);
				clrscr();
      	   for(int p=0;p<50;p++){
         		strcpy(pesan[p],"");
         		strcpy(porsi2,"");
	         	porsi[p]=NULL;
   	      	Tharga[p]=NULL;
      	   	tamp[p]=NULL;
         		yangharusdibayar=NULL;
	         }
   	      garis_tepi(1);
   		}else{
textbackground(0);
      	   notice(kurang,63,15,28);
textcolor(15);
textbackground(0);
   	      goto bayarlagi;
	      }
		}else{
textbackground(0);
			notice(invalid,63,15,12);
textcolor(15);
textbackground(0);
	      goto bayarlagi;
   	}
	}else{
textbackground(0);
		notice(invalid,63,15,12);
textcolor(15);
textbackground(0);
	   goto bayarlagi;
	}
}
//==============================================================================
void Bayar1(){
	int d=48;
	bingkai(7,7);
   bingkai2(25,25);bingkai2(75,25);
	tabel();
   gotoxy(d+45,23);cprintf("Rp. %d,-",yangharusdibayar);
   gotoxy(d+45,30);cprintf("Rp. %d,-",yangharusdibayar);
	bayarlagi:
   kotakpendek(d,52);kotakpendek(d+3,52);kotakpendek(d+33,52);
	gotoxy(d+20,53);printf("Uang pembayaran anda : Rp.         ");
	gotoxy(95,53);gets(pembayaran);
	int q=0;
	for(int x=0;strlen(pembayaran)>x;x++){
		if(pembayaran[0]=='0'){
      	q++;
	   }
	}
	if(q==0){
		if(valangka(pembayaran)==0){
			angka=atoi(pembayaran);
	      if(angka>=yangharusdibayar && angka>0){
		   	kembali=angka-yangharusdibayar;
textbackground(7);
textcolor(0);
			   gotoxy(d+45,32);cprintf("Rp. %d,-",angka);
				gotoxy(d+45,39);cprintf("Rp. %d,-",kembali);
textbackground(0);
textcolor(15);
				notice(thx,62,15,10);
textcolor(15);
textbackground(0);
				xx=1;
      	   xy=0;
         	clrscr();
	         for(int p=0;p<50;p++){
   	      	strcpy(pesan[p],"");
      	   	strcpy(porsi2,"");
         		porsi[p]=NULL;
         		Tharga[p]=NULL;
	         	tamp[p]=NULL;
   	      	yangharusdibayar=NULL;
      	   }
         	garis_tepi(1);
	   	}else{
textcolor(15);
textbackground(14);
   	      notice(kurang,63,15,28);
textcolor(15);
textbackground(0);
      	   goto bayarlagi;
	      }
		}else{
textbackground(0);
      	notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
	      goto bayarlagi;
   	}
	}else{
textbackground(0);
      notice(invalid,63,15,28);
textcolor(15);
textbackground(0);
      goto bayarlagi;
   }
}
//==============================================================================
void end(){
	int q=20;
	for(int a=1;a<10;a++){
		textcolor(14);Sleep(20);gotoxy(45,20);cprintf(" xxxxxxx  xxxxx  xxxxx   x  xx     xx   xxxx   x   xx   xxxx    xxxx   x  x    x                   \n");
		textcolor(14);Sleep(20);gotoxy(45,21);cprintf("    x     x      x    x  x  x x   x x  x    x  x  xx   x    x  x    x  x  x    x                   \n");
		textcolor(12);Sleep(20);gotoxy(45,22);cprintf("    x     xxx    xxxxx   x  x  x x  x  xxxxxx  xxx     xxxxxx   x      x  xxxxxx                   \n");
		textcolor(12);Sleep(20);gotoxy(45,23);cprintf("    x     x      x  x    x  x   x   x  x    x  x xx    x    x     x    x  x    x                   \n");
		textcolor(14);Sleep(20);gotoxy(45,24);cprintf("    x     x      x   x   x  x       x  x    x  x  xx   x    x  x    x  x  x    x                   \n");
		textcolor(14);Sleep(20);gotoxy(45,25);cprintf("    x     xxxxx  x    x  x  x       x  x    x  x   xx  x    x   xxxx   x  x    x                   \n");
		if(a==9)clrscr();
	}for(int a=1;a<10;a++){
		textcolor(14);Sleep(20);gotoxy(q,20);cprintf("xxxxxxx  xxxxx  x        xxxx   x    x      xxxxx    xxxxx  xxxxx   x   xx  x     x  xx     x   xxxxx   x     x  xx     x   xxxxx               \n");
		textcolor(14);Sleep(20);gotoxy(q,21);cprintf("   x     x      x       x    x  x    x      x    x   x      x    x  x  xx   x     x  x x    x        x  x     x  x x    x  x     x              \n");
		textcolor(12);Sleep(20);gotoxy(q,22);cprintf("   x     xxxx   x       xxxxxx  xxxxxx      xxxxx    xxxx   xxxxx   xxx     x     x  x  x   x        x  x     x  x  x   x  x                    \n");
		textcolor(12);Sleep(20);gotoxy(q,23);cprintf("   x     x      x       x    x  x    x      x    x   x      x  x    x xx    x     x  x   x  x        x  x     x  x   x  x  x  xxx               \n");
		textcolor(14);Sleep(20);gotoxy(q,24);cprintf("   x     x      x       x    x  x    x      x     x  x      x   x   x  xx   x     x  x    x x  x     x  x     x  x    x x  x     x              \n");
		textcolor(14);Sleep(20);gotoxy(q,25);cprintf("   x     xxxxx  xxxxxx  x    x  x    x      xxxxxx   xxxxx  x    x  x   xx   xxxxx   x     xx   xxxxx    xxxxx   x     xx   xxxxx               \n");
		if(a==9)clrscr();
	}for(int a=1;a<10;a++){
		textcolor(14);Sleep(20);gotoxy(q+25,20);cprintf("x   xx   xxxxx     xxxxx   xxxxx   xxxx   xxxxxxx   xxxx   x     x  xxxxx    xxxx   xx     x  xxxxxxx      \n");
		textcolor(14);Sleep(20);gotoxy(q+25,21);cprintf("x  xx    x         x    x  x      x    x     x     x    x  x     x  x    x  x    x  x x    x     x         \n");
		textcolor(12);Sleep(20);gotoxy(q+25,22);cprintf("xxx      xxxx      xxxxx   xxxx    x         x     xxxxxx  x     x  xxxxx   xxxxxx  x  x   x     x         \n");
		textcolor(12);Sleep(20);gotoxy(q+25,23);cprintf("x  xx    x         x  x    x         x       x     x    x  x     x  x  x    x    x  x   x  x     x         \n");
		textcolor(14);Sleep(20);gotoxy(q+25,24);cprintf("x   xx   x         x   x   x      x    x     x     x    x  x     x  x   x   x    x  x    x x     x         \n");
		textcolor(14);Sleep(20);gotoxy(q+25,25);cprintf("x    xx  xxxxx     x    x  xxxxx   xxxx      x     x    x   xxxxx   x    x  x    x  x     xx     x         \n");
		if(a==9)clrscr();
	}for(int a=1;a<10;a++){
		textcolor(14);Sleep(20);gotoxy(45,20);cprintf("         xx     xx  x     x   xxxxx   xxx  x       x   xxxx   xxxxx    xxxx                         \n");
		textcolor(14);Sleep(20);gotoxy(45,21);cprintf("         x x   x x  x     x  x         x   x   x   x  x    x  x    x  x    x                        \n");
		textcolor(12);Sleep(20);gotoxy(45,22);cprintf("         x  x x  x  x     x  x         x   x   x   x  xxxxxx  xxxxx   xxxxxx                        \n");
		textcolor(12);Sleep(20);gotoxy(45,23);cprintf("         x   x   x  x     x  x  xxxx   x   x   x   x  x    x  x  x    x    x                        \n");
		textcolor(14);Sleep(20);gotoxy(45,24);cprintf("         x       x  x     x  x     x   x    x x x x   x    x  x   x   x    x                        \n");
		textcolor(14);Sleep(20);gotoxy(45,25);cprintf("         x       x   xxxxx    xxxxx   xxx    x   x    x    x  x    x  x    x                        \n");
		if(a==9)clrscr();
	}mugiwara();
   for(int x=0;x<strlen(me);x++){
		gotoxy(68+x,42);printf("%c",me[x]);Sleep(100);
	}for(int x=0;x<10;x++){
	  textcolor(0);gotoxy(68,42);cprintf("%s",me);Sleep(1000);
	  textcolor(15);gotoxy(68,42);cprintf("%s",me);Sleep(1000);
	}
}
//==============================================================================
//                                   VALIDASI
//==============================================================================
int valangka(char v[]){
	int x=0;
	for(int q=0;q<strlen(v);q++){
		if(v[q]>'9' || v[q]<'0'){
			x++;
      }
   }return x;
}
//=============================================================================================================================
int valpsn(char v[]){
	int x=0;
	for(int q=0;q<strlen(v);q++){
		if(v[q]>'9' || v[q]<='0'){
			x++;
      }
   }return x;
}
//=============================================================================================================================
int valhuruf(char v[]){
	int x=0;
  	for(int q=0;v[q]!=NULL;q++){
		if(!(v[q]>='A' && v[q]<='Z' || v[q]>='a' && v[q]<='z')){
			x++;
      }
   }return x;
}
//=============================================================================================================================
int valpass(char v[]){
	int x=0;
  	for(int q=0;v[q]!=NULL;q++){
		if(!(v[q]>='A' && v[q]<='Z' || v[q]>='a' && v[q]<='z' || v[q]<='9' && v[q]>='0')){
			x++;
      }
   }return x;
}
//=============================================================================================================================
int valnama(char v[]){
	int x=0;
  	for(int q=0;v[q]!=NULL;q++){
		if(!(v[q]>='A' && v[q]<='Z' || v[q]>='a' && v[q]<='z' || v[q]<='9' && v[q]>='0' || v[q]=='\'' && v[q+1]!='\'' && v[q+2]!='\'' && v[q+3]!='\'' && v[q+4]!='\'' && v[q+6]!='\'')){
			x++;
      }
   }return x;
}
//=============================================================================================================================
