#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
//////////////////////////BISMILLAHIRRAHMAANIRRAHIIM////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////                                                                        ////
////								FIRST PROJECT "ALIN ACCESORIES"                  ////
////                    					 BY                                  ////
////                    			  AREN KURNIA                              ////
////                       	D3 MANAJEMEN INFORMATIKA                      ////
////                                                                        ////
////   							  MULAI   : 7 DESEMBER 2020                      ////
////   							 SELESAI : 16 DESEMBER 2020                      ////
////                                                                        ////
////                                                                        ////
//// 									  SCREEN BUFFER SIZE                          ////
////   										WIDTH  :120                             ////
////  										 HEIGHT :40                             ////
////                                                                        ////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// PROTOTYPE /////////////////////////////////////
void bingkai();
void backabu();
void tampawal();
void hapus();
void hapus1();
void hapus2();
void menu();
void login();
void tabel();
void beli();
void langganan();
void tabelbeli();
void tabelinfo();
void informasi();
void info();
void struk();
void strukdiskon();
void kode();
void kembalian();
void kembaliandiskon();
void namap();
void alamatp();
void nomor();
int valhur(char a[]);
int valal(char a[]);
int valnomor(char a[]);
/////////////////////////////// VARIABEL GLOBAL ////////////////////////////////
int idx;
int u=0;
int a=0;
int b=0;
int ge=85000;
int gp=100000;
int ke=120000;
int kp=150000;
int ce=30000;
int cp=35000;
int t=30000;
int ges=85;
int gps=100;
int kes=120;
int kps=150;
int ces=300;
int cps=300;
int ts=300;
int stok=0;
int total=0;
int tot=0;
int tot2=0;
int totd=0;
char uang[20];
char pilih;
char barang[1];
char jumlah[5];
char nama[50];
char alamat[50];
char no[50];
char keluar;
char y;
char enter;
char enter2;
char enter3;
char enter4;
char enter5;
char enter6;
char enter7;
char enter8;
char enter9;
int enter10;
struct tm* waktu;
////////////////////////////////// BINGKAI /////////////////////////////////////
void bingkai(){
	textcolor(14);
	for(int a=1;a<=118;a++){
     	gotoxy(a+1,2);cprintf("%c",219);
      gotoxy(a+1,39);cprintf("%c",219);
   }
   for(int b=1;b<=38;b++){
     	gotoxy(2,b+1);cprintf("%c",219);
      gotoxy(3,b+1);cprintf("%c",219);
      gotoxy(118,b+1);cprintf("%c",219);
      gotoxy(119,b+1);cprintf("%c",219);
   }backabu();
}
///////////////////////////////////// Background  //////////////////////////////
void backabu(){
	for(int y=3;y<=38;y++){
   	for(int x=4;x<118;x++){
      	gotoxy(x,y);printf("%c",219);
      }
   }tampawal();
}
////////////////////////// Hapus Tampilan Awal /////////////////////////////////
void hapus(){
textcolor(7);
	for(int y=20;y<38;y++){
   	for(int x=4;x<118;x++){
      	gotoxy(x,y);printf("%c",219);
      }
   }
}
////////////////////////// Hapus Hampir Semua //////////////////////////////////
void hapus1(){
textcolor(7);
	for(int y=10;y<38;y++){
   	for(int x=4;x<118;x++){
      	gotoxy(x,y);printf("%c",219);
      }
   }
}
///////////////////////////////// Hapus Semua //////////////////////////////////

void hapus2(){
textcolor(7);
	for(int y=4;y<38;y++){
   	for(int x=4;x<118;x++){
      	gotoxy(x,y);printf("%c",219);
      }
   }
}
//////////////////////////////// Void Beli /////////////////////////////////////
void beli(){
			hapus();
         tabel();
			textcolor(0);
      	textbackground(7);
         gotoxy(21,21);cprintf("NO");
   		gotoxy(27,21);cprintf("NAMA BARANG");
   		gotoxy(44,21);cprintf("JENIS");
   		gotoxy(58,21);cprintf("HARGA");
   		gotoxy(73,21);cprintf("STOK");
         gotoxy(85,21);cprintf("JUMLAH");
         gotoxy(100,21);cprintf("TOTAL");
         gotoxy(21,23);cprintf("1");
         gotoxy(27,23);cprintf(" GELANG ");
         gotoxy(21,24);cprintf("2");
         gotoxy(27,24);cprintf(" GELANG ");
         gotoxy(21,25);cprintf("3");
         gotoxy(27,25);cprintf(" KALUNG ");
         gotoxy(21,26);cprintf("4");
        	gotoxy(27,26);cprintf(" KALUNG ");
         gotoxy(21,27);cprintf("5");
         gotoxy(27,27);cprintf(" CINCIN ");
         gotoxy(21,28);cprintf("6");
         gotoxy(27,28);cprintf(" CINCIN ");
         gotoxy(21,29);cprintf("7");
         gotoxy(27,29);cprintf(" ANTING ");
         gotoxy(44,23);cprintf(" EMAS ");
         gotoxy(44,24);cprintf(" PUTIH ");
         gotoxy(44,25);cprintf(" EMAS ");
         gotoxy(44,26);cprintf(" PUTIH ");
         gotoxy(44,27);cprintf(" EMAS ");
         gotoxy(44,28);cprintf(" PUTIH ");
         gotoxy(44,29);cprintf(" PUTIH ");
         int ge=85000; int gp=100000; int ke=120000; int kp=150000; int ce=30000; int cp=35000; int t=40000;
         gotoxy(56,23);cprintf("RP  %d",ge);
         gotoxy(56,24);cprintf("RP %d",gp);
         gotoxy(56,25);cprintf("RP %d",ke);
         gotoxy(56,26);cprintf("RP %d",kp);
         gotoxy(56,27);cprintf("RP  %d",ce);
         gotoxy(56,28);cprintf("RP  %d",cp);
         gotoxy(56,29);cprintf("RP  %d",t);
         int ges=85; int gps=100; int kes=120; int kps=150; int ces=300; int cps=300; int ts=300;
         gotoxy(74,23);cprintf(" %d",ges);
         gotoxy(74,24);cprintf("%d",gps);
         gotoxy(74,25);cprintf("%d",kes);
         gotoxy(74,26);cprintf("%d",kps);
         gotoxy(74,27);cprintf("%d",ces);
         gotoxy(74,28);cprintf("%d",cps);
         gotoxy(74,29);cprintf("%d",ts);
         textcolor(12);
         gotoxy(48,31);cprintf("Masukan '0' Untuk Selesai ^_^");
         textcolor(0);
         gotoxy(31,32);cprintf("--------------------------------------------------------------");
      	gotoxy(31,33);cprintf("| Masukan Nomor Barang (Perhatikan Jenis)   :                |");
         gotoxy(31,34);cprintf("--------------------------------------------------------------");
         gotoxy(31,35);cprintf("| Masukan Jumlah Barang (Max Barang = Stok) :                |");
         gotoxy(31,36);cprintf("--------------------------------------------------------------");
         textcolor(0);
         textbackground(7);
			for(int a=1;a>0;a++){
            tot+=total;
            int b=0;
            gotoxy(76,33);barang[b]=getche();
   			while(barang[b]!=13){
   				if(barang[b]==1){
      				b--;
         			if(b<0){
                  	b=0;
         			}gotoxy(76+b,33);cprintf(" ");
      			}else{
      				gotoxy(76,33);cprintf("%c",barang[b]);
         			b++;
               }
               if(b>0){
      				b=1;gotoxy(79,33);cprintf(" ");
      			}gotoxy(76,33);barang[b]=getche();
            }barang[b]=NULL;
               gotoxy(76,35);char jumlah[3];gets(jumlah);
         		if(strcmp(barang,"1")==0){
                  if(atoi(jumlah)<=ges){
               		gotoxy(88,23);cprintf("   ");
         				gotoxy(88,23);cprintf("%s",jumlah);
                  	gotoxy(74,23);cprintf("   ");
                  	stok=ges-atoi(jumlah);
                  	gotoxy(74,23);cprintf("%d",stok);
                  	total=atoi(jumlah)*ge;
                  	gotoxy(98,23);cprintf("RP %d",total);
            			gotoxy(76,33);cprintf("    ");
                  	gotoxy(76,35);cprintf("    ");
                  }else if(atoi(jumlah)>ges){
                     gotoxy(76,33);cprintf("    ");
                     gotoxy(76,35);cprintf("Invalid !");Sleep(500);
                  	gotoxy(76,35);cprintf("                |                    ");
                  }else{
                  	gotoxy(76,33);cprintf("    ");
                     gotoxy(76,35);cprintf("Invalid !");Sleep(500);
                  	gotoxy(76,35);cprintf("                |                    ");
                  }
               }else if(strcmp(barang,"2")==0){
               	if(atoi(jumlah)<=gps){
                  	gotoxy(88,24);cprintf("   ");
         				gotoxy(88,24);cprintf("%s",jumlah);
                  	gotoxy(74,24);cprintf("   ");
                  	stok=gps-atoi(jumlah);
                  	gotoxy(74,24);cprintf("%d",stok);
                  	total=atoi(jumlah)*gp;
                  	gotoxy(98,24);cprintf("Rp %d",total);
            			gotoxy(76,33);cprintf("    ");
                  	gotoxy(76,35);cprintf("    ");
                  }else if(atoi(jumlah)>gps){
                     gotoxy(76,33);cprintf("    ");
                     gotoxy(76,35);cprintf("Invalid !");Sleep(500);
                  	gotoxy(76,35);cprintf("                |                    ");
                  }else{
                  	gotoxy(76,33);cprintf("    ");
                     gotoxy(76,35);cprintf("Invalid !");Sleep(500);
                  	gotoxy(76,35);cprintf("                |                    ");
                  }
            	}else if(strcmp(barang,"3")==0){
                  if(atoi(jumlah)<=kes){
               		gotoxy(88,25);cprintf("   ");
         				gotoxy(88,25);cprintf("%s",jumlah);
                  	gotoxy(74,25);cprintf("   ");
                  	stok=kes-atoi(jumlah);
                  	gotoxy(74,25);cprintf("%d",stok);
                  	total=atoi(jumlah)*ke;
                  	gotoxy(98,25);cprintf("Rp %d",total);
            			gotoxy(76,33);cprintf("    ");
                  	gotoxy(76,35);cprintf("     ");
                  }else if(atoi(jumlah)>kes){
                     gotoxy(76,33);cprintf("    ");
                     gotoxy(76,35);cprintf("Invalid !");Sleep(500);
                  	gotoxy(76,35);cprintf("                |                    ");
                  }else{
                  	gotoxy(76,33);cprintf("    ");
                     gotoxy(76,35);cprintf("Invalid !");Sleep(500);
                  	gotoxy(76,35);cprintf("                |                    ");
                  }
            	}else if(strcmp(barang,"4")==0){
               	if(atoi(jumlah)<=kps){
               		gotoxy(88,26);cprintf("   ");
         				gotoxy(88,26);cprintf("%s",jumlah);
                  	gotoxy(74,26);cprintf("   ");
                  	stok=kps-atoi(jumlah);
                  	gotoxy(74,26);cprintf("%d",stok);
                  	total=atoi(jumlah)*kp;
                  	gotoxy(98,26);cprintf("Rp %d",total);
            			gotoxy(76,33);cprintf("    ");
                  	gotoxy(76,35);cprintf("    ");
                  }else if(atoi(jumlah)>kps){
                     gotoxy(76,33);cprintf("    ");
                     gotoxy(76,35);cprintf("Invalid !");Sleep(500);
                  	gotoxy(76,35);cprintf("                |                    ");
                  }else{
                  	gotoxy(76,33);cprintf("    ");
                     gotoxy(76,35);cprintf("Invalid !");Sleep(500);
                  	gotoxy(76,35);cprintf("                |                    ");
                  }
            	}else if(strcmp(barang,"5")==0){
               	if(atoi(jumlah)<=ces){
               		gotoxy(88,27);cprintf("   ");
         				gotoxy(88,27);cprintf("%s",jumlah);
                  	gotoxy(74,27);cprintf("   ");
                  	stok=ces-atoi(jumlah);
                  	gotoxy(74,27);cprintf("%d",stok);
                  	total=atoi(jumlah)*ce;
                  	gotoxy(98,27);cprintf("Rp %d",total);
            			gotoxy(76,33);cprintf("    ");
                  	gotoxy(76,35);cprintf("    ");
                  }else if(atoi(jumlah)>ces){
                     gotoxy(76,33);cprintf("    ");
                     gotoxy(76,35);cprintf("Invalid !");Sleep(500);
                  	gotoxy(76,35);cprintf("                |                    ");
                  }else{
                  	gotoxy(76,33);cprintf("    ");
                     gotoxy(76,35);cprintf("Invalid !");Sleep(500);
                  	gotoxy(76,35);cprintf("                |                    ");
                  }
            	}else if(strcmp(barang,"6")==0){
               	if(atoi(jumlah)<=cps){
               		gotoxy(88,28);cprintf("   ");
         				gotoxy(88,28);cprintf("%s",jumlah);
                  	gotoxy(74,28);cprintf("   ");
                  	stok=cps-atoi(jumlah);
                  	gotoxy(74,28);cprintf("%d",stok);
                  	total=atoi(jumlah)*cp;
                  	gotoxy(98,28);cprintf("Rp %d",total);
            			gotoxy(76,33);cprintf("    ");
                  	gotoxy(76,35);cprintf("    ");
                  }else if(atoi(jumlah)>cps){
                     gotoxy(76,33);cprintf("    ");
                     gotoxy(76,35);cprintf("Invalid !");Sleep(500);
                  	gotoxy(76,35);cprintf("                |                    ");
                  }else{
                  	gotoxy(76,33);cprintf("    ");
                     gotoxy(76,35);cprintf("Invalid !");Sleep(500);
                  	gotoxy(76,35);cprintf("                |                    ");
                  }
               }else if(strcmp(barang,"7")==0){
               	if(atoi(jumlah)<=ts){
               		gotoxy(88,29);cprintf("   ");
         				gotoxy(88,29);cprintf("%s",jumlah);
                  	gotoxy(74,29);cprintf("   ");
                  	stok=ts-atoi(jumlah);
                  	gotoxy(74,29);cprintf("%d",stok);
                  	total=atoi(jumlah)*t;
                  	gotoxy(98,29);cprintf("Rp %d",total);
            			gotoxy(76,33);cprintf("    ");
                  	gotoxy(76,35);cprintf("    ");
                  }else if(atoi(jumlah)>ts){
                     gotoxy(76,33);cprintf("    ");
                     gotoxy(76,35);cprintf("Invalid !");Sleep(500);
                  	gotoxy(76,35);cprintf("                |                    ");
                  }else{
                  	gotoxy(76,33);cprintf("    ");
                     gotoxy(76,35);cprintf("Invalid !");Sleep(500);
                  	gotoxy(76,35);cprintf("                |                    ");
                  }
               }else if(strcmp(barang,"0")==0){
         			gotoxy(76,33);cprintf("    ");
                  gotoxy(76,35);cprintf("           ");
                  a=-5;
            	}else{
            		gotoxy(76,33);cprintf("Inputan Salah!");Sleep(1000);
            		gotoxy(76,33);cprintf("               ");
                  gotoxy(76,33);cprintf("                |                    ");
                  gotoxy(76,35);cprintf("                |                    ");
               }
         	}total=0;
}
/////////////////////////////// Void Langganan /////////////////////////////////
void langganan(){
      		textcolor(0);
            for(int a=30;a<35;a++){
            	for(int b=18;b<=102;b++){
               	gotoxy(b,a);cprintf("%c",219);
               }
            }

            textcolor(12);
            for(int a=30;a<35;a++){
            	for(int b=18;b<=102;b++){
                  if(a==30||a==34||b==18||b==102){
               		gotoxy(b,a);cprintf("%c",219);
                  }
            	}
            }
            textcolor(15);
            textbackground(0);
            gotoxy(25,32);cprintf("APAKAH ANDA SUDAH BERLANGGANAN ? (Y/N): ");
            textcolor(0);
            textbackground(7);
            gotoxy(7,25);cprintf("Tekan '0' Untuk Kembali");
      		gotoxy(86,25);cprintf("Tekan Enter Untuk Melanjutkan");
            gotoxy(53,25);cprintf("Pilih:");
   		do{
   			gotoxy(59,25);enter3=getche();
         	if(enter3==13){
            	textcolor(15);
               textbackground(0);
               do{
   				gotoxy(66,32);y=getche();
               if(y=='Y'){
      				hapus();
         			login();
         			tabelbeli();
                  total=0;
         			tot2=0;
         			info();
                  hapus();
                  strukdiskon();
         			total=0;
         			tot2=0;
      			}else if(y=='N'){
      				tabelbeli();
                  total=0;
         			tot=0;
         			info();
                  hapus();
                  struk();
         			total=0;
         			tot=0;
      			}else{
      				gotoxy(66,32);cprintf("invalid!");Sleep(200);
         			gotoxy(66,32);cprintf("        ");Sleep(200);
         			langganan();
               }
               }while(y!='Y'||y!='N');
   			}else if(enter3=='0'){
            	menu();
            }else{
            	textcolor(12);
   				gotoxy(59,25);cprintf("Invalid !");Sleep(500);
      			gotoxy(59,25);cprintf("           ");
   			}
   		}while(enter3!=13||enter3!='0');
   }
/////////////////////////////// TAMPILAN AWAL //////////////////////////////////
void tampawal(){
	for(int a=1;a<=17;a++){
   	textbackground(7);
   	textcolor(a);
		gotoxy(50,7);cprintf("W  E  L  C  O  M  E"); Sleep(5);
      gotoxy(7,10);cprintf("____________________________________________________________________________________________________________"); Sleep(5);
      gotoxy(7,11);cprintf("____________________________________________________________________________________________________________"); Sleep(5);
   	gotoxy(10,13);cprintf("   %c%c%c%c      %c%c%c        %c%c%c  %c%c%c%c      %c%c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(5);
   	gotoxy(10,14);cprintf("  %c%c%c%c%c%c     %c%c%c        %c%c%c  %c%c%c%c      %c%c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(5);
   	gotoxy(10,15);cprintf(" %c%c%c  %c%c%c    %c%c%c        %c%c%c  %c%c%c%c%c     %c%c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(5);
   	gotoxy(10,16);cprintf("%c%c%c    %c%c%c   %c%c%c        %c%c%c  %c%c%c %c%c    %c%c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(5);
   	gotoxy(10,17);cprintf("%c%c%c%c%c%c%c%c%c%c%c  %c%c%c        %c%c%c  %c%c%c  %c%c   %c%c%c    %c%c   %c%c   %c %c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c  %c%c%c%c  %c%c%c%c%c%c  %c%c %c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(5);
   	gotoxy(10,18);cprintf("%c%c%c%c%c%c%c%c%c%c%c  %c%c%c        %c%c%c  %c%c%c   %c%c  %c%c%c   %c  %c  %c%c  %c  %c%c     %c%c     %c%c     %c%c  %c%c %c%c  %c%c  %c%c %c%c     ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(5);
   	gotoxy(10,19);cprintf("%c%c%c     %c%c%c  %c%c%c        %c%c%c  %c%c%c    %c%c %c%c%c  %c%c%c%c%c%c %c%c%c%c   %c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c %c%c  %c%c %c%c%c%c%c   %c%c %c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(5);
   	gotoxy(10,20);cprintf("%c%c%c     %c%c%c  %c%c%c%c%c%c%c%c%c%c %c%c%c  %c%c%c     %c%c%c%c%c  %c%c  %c%c %c%c  %c      %c%c %c%c         %c%c %c%c  %c%c %c%c  %c%c  %c%c     %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(5);
   	gotoxy(10,21);cprintf("%c%c%c     %c%c%c  %c%c%c%c%c%c%c%c%c%c %c%c%c  %c%c%c      %c%c%c%c  %c%c  %c%c %c%c   %c %c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c%c  %c%c%c%c  %c%c   %c%c %c%c %c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(5);
      gotoxy(7,22);cprintf("____________________________________________________________________________________________________________"); Sleep(5);
      gotoxy(7,23);cprintf("____________________________________________________________________________________________________________"); Sleep(5);
   	gotoxy(52,30);cprintf("BY: ALIN COLLECTIONS"); Sleep(5);
	}
	Sleep(700);
   gotoxy(59,37);cprintf("Tekan Enter Untuk Melanjutkan Ke Menu Utama =>>>");
   do{
   gotoxy(107,37);enter2=getche();
   if(enter2==13){
   	menu();
   }else{
   	textcolor(12);
   	gotoxy(107,37);cprintf("Invalid !");Sleep(500);
      gotoxy(107,37);cprintf("           ");
   }
   }while(enter2!=13);
}
////////////////////////////////// Menu AWAL ///////////////////////////////////
void menu(){
   hapus2();
   textcolor(14);
	for(int x=1;x<=118;x++){
   	gotoxy(x+1,14);cprintf("%c",219);
      gotoxy(x+1,18);cprintf("%c",219);
   }
   for(int y=9;y<=11;y++){
      	gotoxy(25,y+6);cprintf("%c",219);
         gotoxy(48,y+6);cprintf("%c",219);
         gotoxy(71,y+6);cprintf("%c",219);
         gotoxy(94,y+6);cprintf("%c",219);
   }

	textcolor(7);
	for(int y=5;y<=11;y++){
   	for(int x=4;x<118;x++){
      	gotoxy(x,y);printf("%c",219);
      }
   }
   for(int a=1;a<=17;a++){
   textcolor(a);
   gotoxy(47,4);cprintf("-      W  E  L  C  O  M  E     -"); Sleep(5);
   gotoxy(24,6);cprintf("   %c   %c%c    %c%c %c%c   %c%c     %c   %c%c  %c %c%c%c%c%c %c%c%c%c%c %c%c%c%c%c  %c%c%c  %c%c%c%c%c %c%c %c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(20);
	gotoxy(24,7);cprintf("  %c %c  %c%c    %c%c %c%c%c  %c%c    %c %c  %c%c %c  %c%c    %c%c    %c%c    %c%c %c%c %c%c %c%c %c%c %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(20);
	gotoxy(24,8);cprintf(" %c%c%c%c%c %c%c    %c%c %c%c %c %c%c   %c%c%c%c%c %c%c%c   %c%c%c%c%c %c%c%c%c%c %c%c%c%c%c %c%c %c%c %c%c%c%c  %c%c %c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(20);
	gotoxy(24,9);cprintf(" %c%c %c%c %c%c    %c%c %c%c  %c%c%c   %c%c %c%c %c%c %c     %c%c %c%c       %c%c %c%c %c%c %c%c %c%c %c%c    %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(20);
	gotoxy(24,10);cprintf(" %c%c %c%c %c%c%c%c%c %c%c %c%c   %c%c   %c%c %c%c %c%c  %c %c%c%c%c%c %c%c%c%c%c %c%c%c%c%c  %c%c%c  %c%c %c%c %c%c %c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); Sleep(20);
   gotoxy(78,12);cprintf("BY ALIN COLLECTIONS");Sleep(5);
   }Sleep(100);
   	textcolor(0);
   	textbackground(7);
   	gotoxy(5,16);cprintf("1. INFORMASI BARANG");Sleep(5);
   	gotoxy(33,16);cprintf("2. BELI");Sleep(5);
   	gotoxy(52,16);cprintf("3. JADI LANGGANAN");Sleep(5);
   	gotoxy(78,16);cprintf("4. KELUAR");Sleep(5);
   	gotoxy(97,16);cprintf("PILIHAN :");Sleep(5);
   	gotoxy(55,24);cprintf(">>  PROMO !  <<");Sleep(500);
   	gotoxy(20,27);cprintf("Jika kamu memilih >> 3. JADI LANGGANAN <<  kamu bisa mendapatkan diskon 10% !!!");Sleep(500);
   	gotoxy(20,28);cprintf("-------------------------------------------------------------------------------");Sleep(500);
   	gotoxy(20,29);cprintf("Tapi kamu juga bisa langsung memilih >> 2. BELI << dan tidak mendapatkan diskon.");Sleep(500);
   	gotoxy(20,30);cprintf("--------------------------------------------------------------------------------");Sleep(500);
   	gotoxy(50,32);cprintf("SELAMAT BELANJA ! ^_^ ");Sleep(500);
      textcolor(12);
      gotoxy(50,34);cprintf("           %c          ",3);Sleep(500);
	do{
   	textcolor(0);
		gotoxy(111,16);char pilih; pilih=getche();
   if(pilih=='1'){
   	textcolor(12);
      textbackground(7);
      gotoxy(5,16);cprintf("1. INFORMASI BARANG");
		hapus();
      textcolor(0);
      textbackground(7);
      gotoxy(50,20);cprintf(">> INFORMASI BARANG <<");Sleep(5);
      gotoxy(50,21);cprintf("______________________");Sleep(5);
      gotoxy(20,22);cprintf("ALIN ACCESORIES adalah tempat belanja online AKSESORIS yang Murah dan Terjamin Kualitasnya");Sleep(5);
      gotoxy(20,23);cprintf("Dengan harganya yang murah, tapi kualitasnya tidak bisa diragukan dan tahan lama.");Sleep(5);
      gotoxy(20,24);cprintf("Karena ALIN COLLECTIONS menyediakan berbagai macam aksesoris berbahan Titanium.");Sleep(5);
      gotoxy(20,25);cprintf("Bahan Titanium adalah logam transisi yang ringan,kuat,berkilau dan tahan korosi");Sleep(5);
      gotoxy(20,26);cprintf("(termasuk tahan terhadap air laut, aqua regia,dan klorin).");Sleep(5);
      gotoxy(20,27);cprintf("__________________________________________________________________________________________");Sleep(5);
      gotoxy(20,28);cprintf("Jika ingin berlangganan,membeli, ataupun tanya-tanya tentang ALIN AKSESORIS bisa langsung ");Sleep(5);
      gotoxy(20,29);cprintf("Datang ke Toko Kami ataupun lewat website ini/Bisa juga hubungi kontak person dibawah ini:");Sleep(5);
      gotoxy(70,30);cprintf("Alin Collections : 085887866742");Sleep(5);
      gotoxy(20,31);cprintf("__________________________________________________________________________________________");Sleep(5);
      gotoxy(60,33);cprintf("BY ALIN COLLECTIONS");Sleep(5);
      gotoxy(60,34);cprintf("___________________");Sleep(5);
      gotoxy(58,37);cprintf("Tekan Enter Untuk Melihat Data Harga Dan Stok=>>");
      do{
      	gotoxy(107,37);enter10=getche();
   		if(enter10==13){
   			informasi();
   		}else{
   			textcolor(12);
   			gotoxy(107,37);cprintf("Invalid !");Sleep(500);
      		gotoxy(107,37);cprintf("           ");
   		}
   	}while(enter10!=13);
      gotoxy(63,37);cprintf("Tekan Enter Untuk Kembali Ke Menu Utama =>>");
      do{
      	gotoxy(107,37);enter2=getche();
   		if(enter2==13){
   			menu();
   		}else{
   			textcolor(12);
   			gotoxy(107,37);cprintf("Invalid !");Sleep(500);
      		gotoxy(107,37);cprintf("           ");
   		}
   	}while(enter2!=13);
   }else if(pilih=='2'){
   	textcolor(14);
      textbackground(7);
      gotoxy(33,16);cprintf("2. BELI");
   	hapus();
      total=0;
      tot=0;
      tot2=0;
      langganan();
   }else if(pilih=='3'){
   	textcolor(3);
      textbackground(7);
      gotoxy(52,16);cprintf("3. JADI LANGGANAN");
   	hapus();
      tabelbeli();
      total=0;
      tot2=0;
      info();
      hapus();
      tabelbeli();
      kode();
   }else if(pilih=='4'){
   	textcolor(9);
   	gotoxy(78,16);cprintf("4. KELUAR");
   	hapus();
		textcolor(0);
   	textbackground(7);
   	gotoxy(47,30);cprintf("Anda Yakin Ingin Keluar?(Y/N):       ");
   	gotoxy(78,30);keluar=getche();
   	if(keluar=='Y'){
   		hapus2();
         textcolor(13);
         gotoxy(46,15);cprintf("-THE PROJECT BY AREN KURNIA-");Sleep(100);
      	gotoxy(46,16);cprintf(" -D3 MANAJEMEN INFORMATIKA-");Sleep(500);
      	for(int a=1;a<=17;a++){
      		textcolor(a);
      		textbackground(7);
      		gotoxy(24,20);cprintf("--------------------------------------------------------------------------");Sleep(10);
      		gotoxy(24,21);cprintf("%c%c%c%c%c%c%c  %c%c%c%c%c  %c%c%c%c   %c  %c     %c   %c%c%c   %c   %c   %c%c%c    %c%c%c%c   %c  %c   %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(10);
      		gotoxy(24,22);cprintf("   %c     %c      %c   %c  %c  %c%c   %c%c  %c   %c  %c  %c   %c   %c  %c       %c  %c   %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(10);
      		gotoxy(24,23);cprintf("   %c     %c%c%c%c   %c%c%c%c   %c  %c %c %c %c  %c%c%c%c%c  %c%c%c    %c%c%c%c%c   %c%c%c%c   %c  %c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(10);
      		gotoxy(24,24);cprintf("   %c     %c      %c  %c   %c  %c  %c  %c  %c   %c  %c  %c   %c   %c       %c  %c  %c   %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(10);
      		gotoxy(24,25);cprintf("   %c     %c%c%c%c%c  %c   %c  %c  %c     %c  %c   %c  %c   %c  %c   %c  %c%c%c%c%c   %c  %c   %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(10);
      		gotoxy(24,26);cprintf("--------------------------------------------------------------------------");Sleep(10);
            gotoxy(4,26);cprintf("    %c%c%c%c      %c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(4,27);cprintf("  %c%c%c%c%c%c%c    %c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(4,28);cprintf(" %c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(4,29);cprintf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(4,30);cprintf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(4,31);cprintf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(4,32);cprintf("    %c%c%c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(4,33);cprintf("     %c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(4,34);cprintf("      %c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(4,35);cprintf("       %c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(4,36);cprintf("      %c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(4,37);cprintf("    %c%c%c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
            gotoxy(4,38);cprintf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
            gotoxy(94,26);cprintf("    %c%c%c%c      %c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(94,27);cprintf("  %c%c%c%c%c%c%c    %c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(94,28);cprintf(" %c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(94,29);cprintf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(94,30);cprintf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(94,31);cprintf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(94,32);cprintf("    %c%c%c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(94,33);cprintf("     %c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(94,34);cprintf("      %c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(94,35);cprintf("       %c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(94,36);cprintf("      %c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
				gotoxy(94,37);cprintf("    %c%c%c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
            gotoxy(94,38);cprintf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);Sleep(5);
      	}
      	for(int a=1,b=1;a<=100;a++){
      		textcolor(5);
      		textbackground(7);
      		gotoxy(54,33);cprintf("Loading %d%",a);Sleep(20);
      		if(a%2==0){
         		textcolor(14);
         		gotoxy(b+35,35);cprintf("%c",219);b++; Sleep(30);
         	}
			}
      	exit(200);
   	}else if(keluar=='N'){
   		hapus2();
      	tampawal();
   	}else{
			gotoxy(78,30); textcolor(12);cprintf("Invalid !");Sleep(500);
      	gotoxy(78,30); cprintf("           ");
         menu();
      }
	}else{
   		gotoxy(106,16);textcolor(12);cprintf("Invalid !");Sleep(500);
      	gotoxy(106,16); cprintf("          ");Sleep(100);

	}
   }while(pilih!='1'||pilih!='2'||pilih!='3'||pilih!='4');
}

/////////////////////////////====== LOGIN =====/////////////////////////////////
void login(){
	char user[25];
	char pass[25];
   textcolor(0);
   textbackground(7);
   gotoxy(57,20);cprintf("L O G I N");
   textcolor(7);
   for(int a=1;a<=6;a++){
   	for(int b=1;b<=35;b++){
      	gotoxy(b+43,a+22);cprintf("%c",219);
      }
   }
   textcolor(13);
   for(int a=0;a<=6;a++){
   	for(int b=1;b<=35;b++){
         if(a==0||b==1||b==35){
      		gotoxy(b+43,a+22);cprintf("%c",219);
         }
      }
   }
   for(int a=1;a<=5;a++){
   	for(int b=1;b<=35;b++){
         if(a==1||b==1||a==5||b==35){
      		gotoxy(b+43,a+25);cprintf("%c",219);
         }
      }
   }
   textbackground(7);
   textcolor(0);
   gotoxy(46,24);cprintf("Username:");
   gotoxy(46,28);cprintf("Password:");
   gotoxy(58,24);cprintf("Masukan Username");Sleep(500);
   gotoxy(58,24);cprintf("                 ");
   int u=0;
   gotoxy(58,24);user[u]=getche();;
   while(user[u]!=13){
   	if(user[u]==10){
      	u--;
         if(u<0){
         	u=0;
         }gotoxy(58+u,24);cprintf(" ");
      }else{
      	gotoxy(58+u,24);cprintf("%c",user[u]);
         u++;
      }
      if(u>11){
      	u=11;gotoxy(68,24);cprintf(" ");
      }gotoxy(58+u,24);user[u]=getche();
   }user[u]=NULL;
   if((strlen(user)<=10) && (strcmp(user,"arenkurnia")==0)){
   	gotoxy(58,28);cprintf("Masukan password");Sleep(500);
   	gotoxy(58,28);cprintf("                ");Sleep(500);
   	gotoxy(58,28);cprintf("Password 8 digit");Sleep(500);
   	gotoxy(58,28);cprintf("                ");
   	gotoxy(58,28);pass[a]=getch();
   	int a=0;
   	while(pass[a]!=13){
      	if(pass[a]==8){
      		a--;
      		if(a<0){
      			a=0;
      		}gotoxy(58+a,19);cprintf(" ");
      	}else{
         	textbackground(7);
         	gotoxy(58+a,28);cprintf("*");
      		a++;
      	}if(a>9){
      		a=9;gotoxy(66,28);cprintf(" ");
         }gotoxy(58+a,28);pass[a]=getch();
   	}pass[a]=NULL;
   }
   if(strcmp(user,"arenkurnia")==0&&strcmp(pass,"alinalin")==0){
      textcolor(12);
   	gotoxy(53,33);cprintf("LOGIN BERHASIL !");
   	for(int a=1,b=1;a<=100;a++){
      	textcolor(5);
      	textbackground(7);
			gotoxy(54,35);cprintf("Loading %d%",a);Sleep(20);
      	if(a%2==0){
      		textcolor(14);
      		gotoxy(b+35,36);cprintf("%c",219);b++; Sleep(30);
      	}
      }
   }else if(strcmp(user,"arenkurnia")==0){
   	gotoxy(58,24);cprintf("%s",user);
      textcolor(12);
   	gotoxy(45,28);cprintf("Password Yang Anda Masukan Salah");Sleep(1500);
      gotoxy(45,28);cprintf("                                ");
      login();
   }else if(strcmp(pass,"alinalin")==0){
   	gotoxy(58,28);cprintf("%s",pass);
      textcolor(12);
   	gotoxy(45,24);cprintf("Username Yang Anda Masukan Salah"); Sleep(1500);
      gotoxy(45,24);cprintf("                                ");
      login();
   }else{
   	textcolor(12);
      gotoxy(38,32);cprintf("Username Dan Password Yang Anda Masukan Salah");Sleep(2000);
      gotoxy(38,32);cprintf("                                             ");
      login();
   }
	Sleep(10);
}
//////////////////////////////// TABEL /////////////////////////////////////////
void tabel(){
		hapus();
			textcolor(10);
    		int idx=5;
	 		for(int y=1;y<=idx+5;y++){
            gotoxy(18,y+20);cprintf("%c",219);Sleep(1);
   			gotoxy(25,y+20);cprintf("%c",219);Sleep(1);
      		gotoxy(39,y+20);cprintf("%c",219);Sleep(1);
      		gotoxy(53,y+20);cprintf("%c",219);Sleep(1);
      		gotoxy(67,y+20);cprintf("%c",219);Sleep(1);
      		gotoxy(81,y+20);cprintf("%c",219);Sleep(1);
            gotoxy(95,y+20);cprintf("%c",219);Sleep(1);
            gotoxy(109,y+20);cprintf("%c",219);Sleep(1);
    		}
    		for(int x=0;x<=91;x++){
   			gotoxy(x+18,20);cprintf("%c",219);Sleep(1);
      		gotoxy(x+18,22);cprintf("%c",219);Sleep(1);
      		gotoxy(x+18,idx+25);cprintf("%c",219);Sleep(1);
    		}
}
//////////////////////////////// Tabel Informasi ///////////////////////////////
void tabelinfo(){
			hapus();
			textcolor(10);
    		int idx=5;
	 		for(int y=1;y<=idx+5;y++){
            gotoxy(31,y+25);cprintf("%c",219);Sleep(1);
   			gotoxy(38,y+25);cprintf("%c",219);Sleep(1);
      		gotoxy(52,y+25);cprintf("%c",219);Sleep(1);
      		gotoxy(66,y+25);cprintf("%c",219);Sleep(1);
      		gotoxy(80,y+25);cprintf("%c",219);Sleep(1);
      		gotoxy(94,y+25);cprintf("%c",219);Sleep(1);
    		}
    		for(int x=0;x<=63;x++){
   			gotoxy(x+31,25);cprintf("%c",219);Sleep(1);
      		gotoxy(x+31,27);cprintf("%c",219);Sleep(1);
      		gotoxy(x+31,idx+30);cprintf("%c",219);Sleep(1);
    		}
}
////////////////////////////// Void Informasi //////////////////////////////////
void informasi(){
			hapus();
         tabelinfo();
			textcolor(0);
      	textbackground(7);
         gotoxy(45,23);cprintf(">> INFORMASI DATA HARGA DAN STOK <<");
         gotoxy(34,26);cprintf("NO");
   		gotoxy(40,26);cprintf("NAMA BARANG");
   		gotoxy(57,26);cprintf("JENIS");
   		gotoxy(71,26);cprintf("HARGA");
   		gotoxy(86,26);cprintf("STOK");
         gotoxy(34,28);cprintf("1");
         gotoxy(40,28);cprintf(" GELANG ");
         gotoxy(34,29);cprintf("2");
         gotoxy(40,29);cprintf(" GELANG ");
         gotoxy(34,30);cprintf("3");
         gotoxy(40,30);cprintf(" KALUNG ");
         gotoxy(34,31);cprintf("4");
        	gotoxy(40,31);cprintf(" KALUNG ");
         gotoxy(34,32);cprintf("5");
         gotoxy(40,32);cprintf(" CINCIN ");
         gotoxy(34,33);cprintf("6");
         gotoxy(40,33);cprintf(" CINCIN ");
         gotoxy(34,34);cprintf("7");
         gotoxy(40,34);cprintf(" ANTING ");
         gotoxy(57,28);cprintf(" EMAS ");
         gotoxy(57,29);cprintf(" PUTIH ");
         gotoxy(57,30);cprintf(" EMAS ");
         gotoxy(57,31);cprintf(" PUTIH ");
         gotoxy(57,32);cprintf(" EMAS ");
         gotoxy(57,33);cprintf(" PUTIH ");
         gotoxy(57,34);cprintf(" PUTIH ");
         int ge=85000; int gp=100000; int ke=120000; int kp=150000; int ce=30000; int cp=35000; int t=40000;
         gotoxy(69,28);cprintf("RP  %d",ge);
         gotoxy(69,29);cprintf("RP %d",gp);
         gotoxy(69,30);cprintf("RP %d",ke);
         gotoxy(69,31);cprintf("RP %d",kp);
         gotoxy(69,32);cprintf("RP  %d",ce);
         gotoxy(69,33);cprintf("RP  %d",cp);
         gotoxy(69,34);cprintf("RP  %d",t);
         int ges=85; int gps=100; int kes=120; int kps=150; int ces=300; int cps=300; int ts=300;
         gotoxy(87,28);cprintf(" %d",ges);
         gotoxy(87,29);cprintf("%d",gps);
         gotoxy(87,30);cprintf("%d",kes);
         gotoxy(87,31);cprintf("%d",kps);
         gotoxy(87,32);cprintf("%d",ces);
         gotoxy(87,33);cprintf("%d",cps);
         gotoxy(87,34);cprintf("%d",ts);
}
/////////////////////////////// Tabel Pembeli //////////////////////////////////
void tabelbeli(){
		hapus();
		textcolor(0);
      textbackground(7);
    		int idx=5;
	 		for(int y=1;y<=idx+10;y++){
   			gotoxy(18,y+20);cprintf("%c",219);Sleep(1);
            gotoxy(102,y+20);cprintf("%c",219);Sleep(1);
    		}
    		for(int x=0;x<=84;x++){
   			gotoxy(x+18,20);cprintf("%c",219);Sleep(1);
      		gotoxy(x+18,idx+30);cprintf("%c",219);Sleep(1);
    		}
}
//////////////////////////// Informasi Pembeli /////////////////////////////////
void info(){
		textcolor(0);
      textbackground(7);
      gotoxy(50,21);cprintf(">> INFORMASI PEMBELI <<");
      gotoxy(53,22);cprintf(" Periode %d / %d",waktu->tm_mon+1,1900+waktu->tm_year);
      gotoxy(20,23);cprintf("TANGGAL : %d/%d/%d",waktu->tm_mday,waktu->tm_mon+1,1900+waktu->tm_year);
      gotoxy(20,25);cprintf("NAMA    :                                           ");
      gotoxy(20,27);cprintf("ALAMAT  :                                           ");
      gotoxy(20,29);cprintf("No. HP  :                                           ");
      gotoxy(7,37);cprintf("Tekan '0' Untuk Kembali Ke Menu");
      gotoxy(86,37);cprintf("Tekan Enter Untuk Melanjutkan");
      gotoxy(53,37);cprintf("Pilih:");
      bool status;
      status=true;
      do{
      	gotoxy(60,37);enter9=getche();
      	if(enter9==13){
				namap();
            status=false;
      	}else if(enter9=='0'){
      		menu();
            status=false;
      	}else{
      		textcolor(12);
         	gotoxy(60,37);cprintf("Invalid !");Sleep(500);
         	gotoxy(60,37);cprintf("           ");
      	}
      }while(status);
}
/////////////////////////////////// void Nama //////////////////////////////////
void namap(){
	textcolor(0);
	textbackground(7);
	do{
      gotoxy(30,25);cprintf("Masukan Nama");Sleep(500);
   	gotoxy(30,25);cprintf("               ");
   	gotoxy(30,25);gets(nama);
      gotoxy(30,25);cprintf("%s      ",nama);
   }while(strcmp(nama,"")==0);
	if(valhur(nama)==0&&strlen(nama)<=25&&strlen(nama)!=0){
   	alamatp();
   }else if(strlen(nama)>25){
      gotoxy(30,25);cprintf("                                                                        %c               ",219);
		gotoxy(30,25);cprintf("Maksimal 25 digit");Sleep(1000);
      gotoxy(30,25);cprintf("                                                                        %c               ",219);
      namap();
   }else{
      gotoxy(30,25);cprintf("                                                                        %c               ",219);
   	gotoxy(30,25);cprintf("Inputan tidak valid");Sleep(1000);
      gotoxy(30,25);cprintf("                                                                        %c               ",219);
      namap();
   }

}
/////////////////////////////// Validasi Nama /////////////////////////////////
int valhur(char a[]){
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

/////////////////////////////////// Void Alamat ////////////////////////////////
void alamatp(){
	textcolor(0);
   textbackground(7);
   do{
      gotoxy(30,27);cprintf("Masukan Alamat");Sleep(500);
   	gotoxy(30,27);cprintf("                ");
   	gotoxy(30,27);gets(alamat);
      gotoxy(30,27);cprintf("%s    ",alamat);
   }while(strcmp(alamat,"")==0);
   if(!(valal(alamat)==0&&strlen(alamat)<=35&&strlen(alamat)!=0)){
      gotoxy(30,27);cprintf("                                                                        %c               ",219);
   	gotoxy(30,27);cprintf("Inputan tidak valid");Sleep(1000);
      gotoxy(30,27);cprintf("                                                                        %c               ",219);
      alamatp();
   }else if(strlen(alamat)>35){
      gotoxy(30,27);cprintf("                                                                        %c               ",219);
		gotoxy(30,27);cprintf("Maksimal 35 digit");Sleep(1000);
      gotoxy(30,27);cprintf("                                                                        %c               ",219);
      alamatp();
   }else{
   	nomor();
   }
}
//////////////////////////////// Validasi Alamat ///////////////////////////////
int valal(char a[]){
   int x=0;int y=0;
   if(a[0]==' '||a[strlen(a)-1]==' '||a[0]=='.'||a[0]==','||a[0]=='-'){
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
//////////////////////////////// Void Nomor HP /////////////////////////////////
void nomor(){
	textcolor(0);
   textbackground(7);
   do{
      gotoxy(30,29);cprintf("Masukan Nomor HP");Sleep(500);
   	gotoxy(30,29);cprintf("                  ");
   	gotoxy(30,29);gets(no);
      gotoxy(30,29);cprintf("%s      ",no);
   }while(strcmp(no,"")==0);
   if(valnomor(no)==0&&strlen(no)>=11&&strlen(no)<=13&&strlen(no)!=0){
      textcolor(0);
      textbackground(7);
      gotoxy(40,33); cprintf("Tekan Enter=>>");
      do{
      	gotoxy(55,33);enter=getche();
      	if(enter==13){
            beli();
         }else{
         	textcolor(12);
         	gotoxy(55,33);cprintf("Invalid !");Sleep(500);
            gotoxy(55,33);cprintf("          ");
      	}
      }while(enter!=13);
   }else if(strlen(no)>=13&&strlen(no)<=11){
      gotoxy(30,29);cprintf("                                                                        %c               ",219);
		gotoxy(30,29);cprintf("Input 11-13 digit!!");Sleep(1000);
      gotoxy(30,29);cprintf("                                                                        %c               ",219);
      nomor();
   }else{
   	gotoxy(30,29);cprintf("                                                                        %c               ",219);
   	gotoxy(30,29);cprintf("Inputan tidak valid");Sleep(1000);
      gotoxy(30,29);cprintf("                                                                        %c               ",219);
      nomor();
   }
}
//////////////////////////////// Validasi Nomor HP /////////////////////////////
int valnomor(char a[]){
   int x=0;int y=0;
   if(a[0]==' '){
      y=1;
      return y;
   }else if(a[0]!='0'||a[1]!='8'||a[2]=='0'||a[2]=='4'||a[2]=='6'){
   	y=1;
      return y;
	}for(int i=0;i<strlen(a);i++){
 		if(!(a[i]>='0'&&a[i]<='9')){
    		x++;
 		}
	}
   return x;
}

////////////////////////////////Struk Pembelian ////////////////////////////////
void struk(){
		tabelbeli();
      textcolor(0);
      textbackground(7);
      gotoxy(43,21);cprintf(">> STRUK PEMBELIAN (ALIN AKSESORIS) <<");
      gotoxy(53,22);cprintf(" Periode %d / %d",waktu->tm_mon+1,1900+waktu->tm_year);
      gotoxy(20,24);cprintf("TANGGAL :   /    /      ");
      gotoxy(20,26);cprintf("NAMA    :               ");
      gotoxy(20,28);cprintf("ALAMAT  :               ");
      gotoxy(20,30);cprintf("No. HP  :               ");
      gotoxy(30,24);cprintf("%d",waktu->tm_mday);
      gotoxy(35,24);cprintf("%d",waktu->tm_mon+1);
      gotoxy(40,24);cprintf("%d",1900+waktu->tm_year);
      gotoxy(30,26);cprintf("%s  ",nama);
      gotoxy(30,28);cprintf("%s",&alamat);
      gotoxy(30,30);cprintf("%s",&no);
      gotoxy(60,24);cprintf("Total Pembelian : Rp %d",tot);
      kembalian();
}
///////////////////////////// Struk Diskon /////////////////////////////////////
void strukdiskon(){
		tabelbeli();
      textcolor(0);
      textbackground(7);
      gotoxy(43,21);cprintf(">> STRUK PEMBELIAN (ALIN AKSESORIS) <<");
      gotoxy(52,22);cprintf(" Periode %d / %d",waktu->tm_mon+1,1900+waktu->tm_year);
      gotoxy(20,24);cprintf("TANGGAL :     /    /       ");
      gotoxy(20,26);cprintf("NAMA    :                 ");
      gotoxy(20,28);cprintf("ALAMAT  :                 ");
      gotoxy(20,30);cprintf("No. HP  :                 ");
      gotoxy(30,24);cprintf("%d",waktu->tm_mday);
      gotoxy(35,24);cprintf("%d",waktu->tm_mon+1);
      gotoxy(40,24);cprintf("%d",1900+waktu->tm_year);
      gotoxy(30,26);cprintf("%s",nama);
      gotoxy(30,28);cprintf("%s",&alamat);
      gotoxy(30,30);cprintf("%s",&no);
      gotoxy(55,24);cprintf("Total Pembelian : Rp %d",tot);
      totd=tot*0.1;
      gotoxy(55,26);cprintf("Total Diskon    : Rp %d",totd);
      gotoxy(55,27);cprintf("_____________________________ -");
      tot2=tot-totd;
      gotoxy(55,28);cprintf("Total DiBayar   : Rp %d",tot2);
      kembaliandiskon();
}
////////////////////////////// Kembalian Diskon ////////////////////////////////
void kembaliandiskon(){
      textcolor(0);
      textbackground(7);
      gotoxy(55,30);cprintf("Masukan Uang    : Rp ");char uang[20];gets(uang);
      gotoxy(55,30);cprintf("Uang Anda       : Rp %s   ",uang);
      if(atoi(uang)>=tot2){
         gotoxy(55,31);cprintf("______________________________ -");
      	gotoxy(55,32);cprintf("Kembalian Anda  : Rp %d   ",atoi(uang)-tot2);
         gotoxy(100,37);cprintf("Enter=>>");
         do{
         	gotoxy(108,37);enter7=getche();
            if(enter7==13){
					hapus();
         		tabelbeli();
               gotoxy(52,25);cprintf(">> TERIMAKASIH <<");Sleep(500);
               gotoxy(51,26);cprintf(">> SUDAH BELANJA <<");Sleep(500);
               gotoxy(49,27);cprintf(">> DAN BERLANGGANAN <<");Sleep(500);
         		gotoxy(52,28);cprintf(">> DITOKO ALIN <<");Sleep(500);
         		gotoxy(52,29);cprintf("        %c       ",3);Sleep(500);
            }else{
            	textcolor(12);
               gotoxy(108,37);cprintf("invalid!");Sleep(500);
               gotoxy(108,37);cprintf("         ");
            }
         }while(enter7!=13);
      }else{
      	gotoxy(55,32);cprintf("Uang Anda Kurang: Rp %d   ",tot2-atoi(uang)); Sleep(2000);
         gotoxy(55,32);cprintf("                                       ");
         gotoxy(76,30);cprintf("(Masukan Kembali Uang)"); Sleep(2000);
         gotoxy(76,30);cprintf("                       ");
      	kembaliandiskon();
      }
      gotoxy(63,37);cprintf("Tekan Enter Untuk Kembali Ke Menu Utama=>>");
      do{
      	gotoxy(107,37);enter5=getche();
      	if(enter5==13){
         	total=0;
      		tot2=0;
         	menu();
      	}else{
         	textcolor(12);
          	gotoxy(107,37);cprintf("Invalid !");Sleep(500);
            gotoxy(107,37);cprintf("          ");
      	}
      }while(enter5!=13);
}
////////////////////////////// Kembalian ///////////////////////////////////////
void kembalian(){
      textcolor(0);
      textbackground(7);
      gotoxy(60,26);cprintf("Masukan Uang    : Rp ");char uang[20];gets(uang);
      gotoxy(60,26);cprintf("Uang Anda       : Rp %s   ",uang);
      if(atoi(uang)>=tot){
         gotoxy(60,27);cprintf("______________________________ -",uang);
      	gotoxy(60,28);cprintf("Kembalian Anda  : Rp %d   ",atoi(uang)-tot);
         gotoxy(100,37);cprintf("Enter=>>");
         do{
         	gotoxy(108,37);enter8=getche();
            if(enter8==13){
					hapus();
         		tabelbeli();
               gotoxy(52,25);cprintf(">> TERIMAKASIH <<");Sleep(500);
               gotoxy(51,26);cprintf(">> SUDAH BELANJA <<");Sleep(500);
         		gotoxy(52,27);cprintf(">> DITOKO ALIN <<");Sleep(500);
         		gotoxy(52,28);cprintf("        %c       ",3);Sleep(500);
            }else{
            	textcolor(12);
               gotoxy(108,37);cprintf("invalid!");Sleep(500);
               gotoxy(108,37);cprintf("         ");
            }
         }while(enter8!=13);
      }else{
      	gotoxy(60,28);cprintf("Uang Anda Kurang: Rp %d   ",tot-atoi(uang)); Sleep(2000);
         gotoxy(60,28);cprintf("                                       ");
         gotoxy(78,26);cprintf("(Masukan Kembali Uang)"); Sleep(2000);
         gotoxy(78,26);cprintf("                       ");
      	kembalian();
      }
      gotoxy(63,37);cprintf("Tekan Enter Untuk Kembali Ke Menu Utama=>>");
      do{
      	gotoxy(107,37);enter4=getche();
      	if(enter4==13){
         	total=0;
      		tot=0;
         	menu();
      	}else{
         	textcolor(12);
          	gotoxy(107,37);cprintf("Invalid !");Sleep(500);
            gotoxy(107,37);cprintf("         ");
      	}
		}while(enter4!=13);
}
//////////////////////////////// void kode /////////////////////////////////////
void kode(){
      textcolor(0);
      textbackground(7);
		gotoxy(37,23);cprintf("Masukan Username Dan Password Ini Ketika LOGIN");
      gotoxy(43,24);cprintf("Untuk Mendapatkan Diskon 10% ! ^_^");
		gotoxy(42,25);cprintf("___________________________________");
      gotoxy(42,26);cprintf("|Username : arenkurnia            |");
      gotoxy(42,27);cprintf("|Password : alinalin              |");
      gotoxy(42,28);cprintf("|_________________________________|");
      gotoxy(49,30);cprintf("Sudah Ingat Kode nya ???");
      gotoxy(53,31);cprintf("Tekan Enter=>>");
      do{
      	gotoxy(67,31);enter6=getche();
      	if(enter6==13){
         	hapus();
            login();
            strukdiskon();
            total=0;
      		tot2=0;
      	}else{
         	textcolor(12);
          	gotoxy(67,31);cprintf("Invalid !");Sleep(500);
            gotoxy(67,31);cprintf("         ");
      	}
		}while(enter6!=13);
}
////////////////////////////////////////////////////////////////////////////////
main(){
time_t sekarang;
sekarang = time(NULL); //untuk mendapatkan semua waktu
waktu = localtime(&sekarang); /* Untuk mendapatkan waktu lokal komputer */
bingkai();

getch();
}
