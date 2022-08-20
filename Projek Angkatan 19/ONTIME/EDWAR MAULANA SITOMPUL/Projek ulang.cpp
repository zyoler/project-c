#include <stdio.h>
#include <conio.h>
#include <windows.h>

////////////////////////////////////////////////////////////////////////////////
//  ========================= VARIABEL GLOBAL =============================   //
////////////////////////////////////////////////////////////////////////////////
char pilih;
char namapemesan[100][25];
int x=1;
char hp[100][15];
char alamat[100][25];
char nik[100][20];
int cek = 0;
char tgl[100][20],bln[100][20],thn[100][20];
char tujuan[100][30],paket[100][30];
int total[100];
int harga_reguler[11]={1500000,7500000,5000000,1500000,1500000,1500000,2500000,1500000,750000,1500000,2000000};
int harga_vip[11]={2500000,10000000,7500000,2500000,2500000,3000000,3500000,2500000,1500000,2500000,3500000};


////////////////////////////////////////////////////////////////////////////////
//  =========================== PROTOTYPE =================================   //
////////////////////////////////////////////////////////////////////////////////
void bingkai();
void welcome();
void welcome2();
void menulogin();
void login();
void loading();
void bingkaimenu();
void deswisata();
void beach();
void hollywood();
void viphol();
void regulerhol();
void nihiwatu();
void vipnih();
void regulernih();
void pandawa();
void vippan();
void regulerpan();
void island();
void kalimantung();
void vipkali();
void regulerkali();
void mursala();
void vipmursala();
void regulermursala();
void poncan();
void vipponcan();
void regulerponcan();
void putri();
void vipputri();
void regulerputri();
void waterfall();
void duawarna();
void vipduawarna();
void regulerduawarna();
void bontar();
void vipbontar();
void regulerbontar();
void martolu();
void vipmartolu();
void regulermartolu();
void sipiso();
void vipsipiso();
void regulersipiso();
void about();
void hapuss();
void pemesanan();
void valnama();
void Valnohp();
void ValAlamat();
void ValNik();
void Pemesanan2();
void Tanggal();
void tujuandanpaket();
void pembayaran();
void datapengunjung();
void konfirmasi();
void laporankeuangan();
////////////////////////////////////////////////////////////////////////////////
// ============================ BINGKAI AWAL  =============================== //
////////////////////////////////////////////////////////////////////////////////
void bingkai(){
   system("color 79");
   for(int b=1;b<=39;b++){
   textcolor(9);
   	gotoxy(  1,b);cprintf("%c",219);Sleep(0.5);
      gotoxy(  2,b);cprintf("%c",219);Sleep(0.5);
      gotoxy(126,b);cprintf("%c",219);Sleep(0.5);
      gotoxy(127,b);cprintf("%c",219);Sleep(0.5);
 	}
   for(int a=1;a<=127;a++){
   	textcolor(9);
 		gotoxy(a, 1);cprintf("%c",219);Sleep(0.5);
      gotoxy(a, 2);cprintf("%c",219);Sleep(0.5);
      gotoxy(a,39);cprintf("%c",219);Sleep(0.5);
      gotoxy(a,40);cprintf("%c",219);Sleep(0.5);

   }
}
////////////////////////////////////////////////////////////////////////////////
// =========================== WELCOME ====================================== //
////////////////////////////////////////////////////////////////////////////////
void welcome(){
	bingkai();
	gotoxy(17,10);textcolor( 9); cprintf(" WW            WW   EEEEEEEE   LL          CCCCCCCCC     OOOOO       MM       MM    EEEEEEEEE ");Sleep(200);
	gotoxy(17,11);textcolor( 9); cprintf(" WW            WW   EEEEEEEE   LL         CCCCCCCCCC    OOOOOOO     MMMM     MMMM   EEEEEEEEE ");Sleep(200);
	gotoxy(17,12);textcolor( 9); cprintf(" WW            WW   EE         LL         CC           OO     OO   MMM  M   M  MMM  EE        ");Sleep(200);
	gotoxy(17,13);textcolor( 9); cprintf(" WW            WW   EEEEEEEE   LL         CC           OO     OO   MM    MMM    MM  EEEEEEEEE ");Sleep(200);
	gotoxy(17,14);textcolor( 9); cprintf("  WW    WW    WW    EE         LL         CC           OO     OO   MM     M     MM  EE        ");Sleep(200);
	gotoxy(17,15);textcolor( 9); cprintf("   WW  WWWW  WW     EEEEEEEE   LL         CCCCCCCCCC    OOOOOOO    MM           MM  EEEEEEEEE ");Sleep(200);
	gotoxy(17,16);textcolor( 9); cprintf("    WWW    WWW      EEEEEEEE   LLLLLLLLL   CCCCCCCCC     OOOOO     MM           MM  EEEEEEEEE ");Sleep(200);
   for(int bat=1;bat<=123;bat++){
   gotoxy(bat+2,20);textcolor(9);cprintf("%c",219);Sleep(0.2);
   }
   for(int x=1;x<=30;x++){
   gotoxy(10+x,25);textcolor(9); cprintf("       TTTTTTTTTTTT    OOOOO         ");Sleep(5);
	gotoxy(10+x,26);textcolor(9); cprintf("            TT        OOOOOOO        ");Sleep(5);
	gotoxy(10+x,27);textcolor(9); cprintf("            TT       OO     OO       ");Sleep(5);
	gotoxy(10+x,28);textcolor(9); cprintf("            TT       OO     OO       ");Sleep(5);
	gotoxy(10+x,29);textcolor(9); cprintf("            TT       OO     OO       ");Sleep(5);
	gotoxy(10+x,30);textcolor(9); cprintf("            TT        OOOOOOO        ");Sleep(5);
	gotoxy(10+x,31);textcolor(9); cprintf("            TT         OOOOO         ");Sleep(5);
   }
   clrscr();
   welcome2();
}
////////////////////////////////////////////////////////////////////////////////
// =========================== WELCOME 2 ==================================== //
////////////////////////////////////////////////////////////////////////////////
 void welcome2(){
 	textbackground(7);
	bingkai();
   for(int b=1;b<=127;b++){
   gotoxy(b+1,17);cprintf("%c",219);Sleep(20);
   }
   gotoxy(5,8);textcolor(1);  cprintf("         #          ##                   #          #########       #########       ####    ###      ##    ");Sleep(100);
	gotoxy(5,9);textcolor(1);  cprintf("        ###         ##                  ###         ##       ##     ##       ##      ##     ## #     ##    ");Sleep(100);
	gotoxy(5,10);textcolor(1); cprintf("       #####        ##                 #####        ##        ##    ##        ##     ##     ##  #    ##    ");Sleep(100);
	gotoxy(5,11);textcolor(1); cprintf("      ##   ##       ##                ##   ##       ##        ##    ##        ##     ##     ##   #   ##    ");Sleep(100);
	gotoxy(5,12);textcolor(1); cprintf("     #########      ##               #########      ##        ##    ##        ##     ##     ##    #  ##    ");Sleep(100);
	gotoxy(5,13);textcolor(1); cprintf("    ##       ##     ###########     ##       ##     ##       ##     ##       ##      ##     ##     # ##    ");Sleep(100);
	gotoxy(5,14);textcolor(1); cprintf("   ##         ##    ###########    ##         ##    #########       #########       ####    ##      ###    ");Sleep(100);


   gotoxy(25,20);textcolor(1); cprintf("    ##############   ##########          ##       ##           ##    ##########    ##             ");Sleep(100);
	gotoxy(25,21);textcolor(1); cprintf("    ##############   ##       ##        ####       ##         ##     ##########    ##             ");Sleep(100);
	gotoxy(25,22);textcolor(1); cprintf("          ##         ##       ##       ######       ##       ##      ##            ##             ");Sleep(100);
	gotoxy(25,23);textcolor(1); cprintf("          ##         ## #######       ##    ##       ##     ##       ######        ##             ");Sleep(100);
	gotoxy(25,24);textcolor(1); cprintf("          ##         ## ##           ##########       ##   ##        ##            ##             ");Sleep(100);
	gotoxy(25,25);textcolor(1); cprintf("          ##         ##   ##        ##        ##       #####         ##########    ###########    ");Sleep(100);
	gotoxy(25,26);textcolor(1); cprintf("         ####        ##     ##     ##          ##       ###          ##########    ###########    ");Sleep(100);
   loading();
   gotoxy (51,33);cprintf("Press any key to Continiue!!!");
   getch();
   clrscr();
   login();
}

////////////////////////////////////////////////////////////////////////////////
// ========================= MENU LOGIN ===================================== //
////////////////////////////////////////////////////////////////////////////////
void menulogin(){
  	bingkai();
   gotoxy(24,6 );textcolor(1);cprintf("   ##                 #####        ###########     ######     ###       ##      ");Sleep(100);
	gotoxy(24,7 );textcolor(1);cprintf("   ##                #######      ##        ##       ##       ## ##     ##      ");Sleep(100);
	gotoxy(24,8 );textcolor(1);cprintf("   ##               ##     ##     ##                 ##       ##  ##    ##      ");Sleep(100);
	gotoxy(24,9 );textcolor(1);cprintf("   ##               ##     ##     ##   #######       ##       ##   ##   ##      ");Sleep(100);
	gotoxy(24,10);textcolor(1);cprintf("   ##               ##     ##     ##   ##   ##       ##       ##    ##  ##      ");Sleep(100);
	gotoxy(24,11);textcolor(1);cprintf("   ############      #######      ##        ##       ##       ##     ## ##      ");Sleep(100);
	gotoxy(24,12);textcolor(1);cprintf("   ############       #####        ###########     ######     ##       ###      ");Sleep(100);
   for(int b=1;b<=123;b++){
   gotoxy(b+2,15);textcolor(9);cprintf("%c",219);
   }
}
////////////////////////////////////////////////////////////////////////////////
// ============================== LOADING =================================== //
////////////////////////////////////////////////////////////////////////////////
void loading(){
	textbackground(7);
	for(int load=0; load<=100; load++){
   gotoxy(60,33);textcolor(0);cprintf("Loading %d %",load);Sleep(30);
   	if(load%2==0){
   	gotoxy(40+load/2,35);textcolor(9);cprintf("%c",219); Sleep(30);
   	}
   }
}

////////////////////////////////////////////////////////////////////////////////
// ============================ LOGIN ======================================= //
////////////////////////////////////////////////////////////////////////////////
void login(){
	menulogin();
   textcolor(0);
   for(int kotak=1;kotak<=30;kotak++){
   gotoxy(55+(kotak-5),25);textcolor(1);cprintf("%c",219);
   gotoxy(55+(kotak-5),30);textcolor(1);cprintf("%c",219);
      if(kotak==26 || kotak==27 || kotak==28 || kotak==29){
      gotoxy(51,kotak);cprintf("%c",219);
      gotoxy(80,kotak);cprintf("%c",219);
      }
   }
	char kode[20];
   int a=0;
   do{
   	gotoxy(56,27);printf(" Masukkan Password ");Sleep(500);
   		gotoxy(60,28);printf("Maks 8 Digit");Sleep(500);
      	gotoxy(60,28);printf("            ");
   	int x=0;
   	gotoxy(60,28);kode[x]=getch();
   	while(kode[x]!=13){
   		if(kode[x]==8){
      		x--;
         	if(x<0){
         		x=0;
         	}gotoxy(60+x,28);printf(" ");
      	}
      	else{
         	printf("*");
         	x++;
      	}
      	if(x>8){
      		x=8;gotoxy(68,28);printf(" ");
      	}
      	gotoxy(60+x,28);kode[x]=getch();

   	}kode[x]=NULL;
   	if((strlen(kode)<=8) && (strcmp(kode,"Tompul08")==0)){
   			loading();
            clrscr();
            bingkaimenu();
            break;
   	}
   	else{
      	gotoxy(60,28);printf("Wrong Code!!!");Sleep(1000);
      	gotoxy(60,28);printf("             ");
         a++;
         if(a==5){
      	gotoxy(47,33);textcolor(0);cprintf("Anda Terlalu Sering Memasukkan Password");Sleep(1000);
     		gotoxy(51,34);textcolor(0);cprintf(" Maaf Anda Kami Paksa Keluar !!!");Sleep(2000);
      	exit(0);
         }
   	}
   }while(a<=5);

}
////////////////////////////////////////////////////////////////////////////////
// ======================== BINGKAI	MENU  =================================== //
////////////////////////////////////////////////////////////////////////////////
void bingkaimenu(){
   textbackground(7);
	bingkai();
   for(int b=1;b<=123;b++){
   gotoxy(b+2,12);cprintf("%c",219);Sleep(20);
   }
   gotoxy(3,3);textcolor(1); cprintf("     ##      ##            ##      #######  #######  #### ###     ##                                                       ");Sleep(100);
	gotoxy(3,4);textcolor(1); cprintf("    ####     ##           ####     ##    ## ##    ##  ##  ## #    ##                                                       ");Sleep(100);
	gotoxy(3,5);textcolor(1); cprintf("   ##  ##    ##          ##  ##    ##    ## ##    ##  ##  ##  #   ##                                                       ");Sleep(100);
	gotoxy(3,6);textcolor(1); cprintf("  ########   ##         ########   ##    ## ##    ##  ##  ##   #  ##  ######## #######      ## ##        ## ####### ##     ");Sleep(100);
	gotoxy(3,7);textcolor(1); cprintf(" ##      ##  ########  ##      ##  ##    ## ##    ##  ##  ##    # ##  ######## ##    ##    #### ##      ##  ##      ##     ");Sleep(100);
	gotoxy(3,8);textcolor(1); cprintf("##        ## ######## ##        ## #######  #######  #### ##     ###     ##    ##    ##   ##  ## ##    ##   ####    ##     ");Sleep(100);
	gotoxy(3, 9);textcolor(1);cprintf("                                                                         ##    ## ####   ######## ##  ##    ####    ##     ");Sleep(100);
   gotoxy(3,10);textcolor(1);cprintf("                                                                         ##    ## ##    ##      ## ####     ##      #######");Sleep(100);
   gotoxy(3,11);textcolor(1);cprintf("                                                                        ####   ##   ## ##        ## ##      ####### #######");Sleep(100);

   for(int b=1; b<=26;b++){
   gotoxy(30,12+b);textcolor(9);cprintf("%c",219);
   gotoxy(29,12+b);textcolor(9);cprintf("%c",219);
   gotoxy(b+2,16);textcolor(9);cprintf("%c",219);
   gotoxy(b+2,20);textcolor(9);cprintf("%c",219);
   gotoxy(b+2,24);textcolor(9);cprintf("%c",219);
   gotoxy(b+2,28);textcolor(9);cprintf("%c",219);
   gotoxy(b+2,32);textcolor(9);cprintf("%c",219);
   gotoxy(b+2,36);textcolor(9);cprintf("%c",219);
   }
   gotoxy(11,14);textcolor(0);cprintf(" M E N U ");
   gotoxy(4, 18);textcolor(0);cprintf("1.    DESTINASI WISATA ");
   gotoxy(4, 22);textcolor(0);cprintf("2.    DATA PENGUNJUNG ");
   gotoxy(4, 26);textcolor(0);cprintf("3.    LAPORAN KEUANGAN ");
   gotoxy(4, 30);textcolor(0);cprintf("4.    A B O U T ");
   gotoxy(4, 34);textcolor(0);cprintf("5.    K E L U A R ");
   gotoxy(9, 38);textcolor(0);cprintf("P I L I H :  ");
   	gotoxy(20,38);pilih=getche();
      gotoxy(20,38);printf("     ");
   	if(pilih=='1'){
         deswisata();
      }else if(pilih=='2'){
      	datapengunjung();
      }else if(pilih=='3'){
      	laporankeuangan();
      }else if(pilih=='4'){
      	about();
      }else if(pilih=='5'){
      	char pilihan;
         gotoxy(62,36);textcolor(0);cprintf("APAKAH ANDA YAKIN INGIN KELUAR (Y/N): ");
         gotoxy(99,36);pilihan=getche();
         hapuss();
         if(pilihan=='n'){
         	bingkaimenu();
         }else{
         	char tulis[]={"TERIMA KASIH TELAH MENGGUNAKAN APLIKASI KAMI"};
            char tulis1[]={"SEMOGA HARIMU MENYENANGKAN ^_^"};
            for(int a=0;a<strlen(tulis);a++){
            	gotoxy(60+a,23);printf("%c",tulis[a]);Sleep(100);
            }
            for(int b=0;b<strlen(tulis1);b++){
            	gotoxy(62+b,25);printf("%c",tulis1[b]);Sleep(100);
            }
         }
      	Sleep(3000);exit(0);
      }else{
      	gotoxy(21,38);printf("!!!");Sleep(200);
         gotoxy(21,38);printf("   ");
         bingkaimenu();
      }
}
////////////////////////////////////////////////////////////////////////////////
// =========================== VOID HAPUS =================================== //
////////////////////////////////////////////////////////////////////////////////
void hapuss(){
	for(int hapus=1;hapus<=93;hapus++){
      	for(int x=0;x<=25;x++){
      	gotoxy(31+hapus,13+x);printf(" ");
         }
      }
}
////////////////////////////////////////////////////////////////////////////////
// ===================== DESTINASI WISATA =================================== //
////////////////////////////////////////////////////////////////////////////////
void deswisata(){
    for(int x=1;x<=25;x++){
    gotoxy(64+x,14);textcolor(1);cprintf("%c",219);
    gotoxy(64+x,18);textcolor(1);cprintf("%c",219);
    gotoxy(35+x,22);textcolor(1);cprintf("%c",219);
    gotoxy(35+x,26);textcolor(1);cprintf("%c",219);
    gotoxy(64+x,28);textcolor(1);cprintf("%c",219);
    gotoxy(64+x,32);textcolor(1);cprintf("%c",219);
    gotoxy(93+x,22);textcolor(1);cprintf("%c",219);
    gotoxy(93+x,26);textcolor(1);cprintf("%c",219);
     if(x==15 || x==16 || x==17){
     	gotoxy(65,x);textcolor(1);cprintf("%c",219);
      gotoxy(89,x);textcolor(1);cprintf("%c",219);
     }
    }
    for(int x=1;x<=35;x++){
    	if(x==23 || x==24 || x==25){
     		gotoxy(36,x);textcolor(1);cprintf("%c",219);
         gotoxy(60,x);textcolor(1);cprintf("%c",219);
         gotoxy(94,x);textcolor(1);cprintf("%c",219);
         gotoxy(118,x);textcolor(1);cprintf("%c",219);
      }else if(x==29 || x==30 || x==31){
      	gotoxy(65,x);textcolor(1);cprintf("%c",219);
         gotoxy(89,x);textcolor(1);cprintf("%c",219);
      }
    }
    gotoxy(68,16);textcolor(0);cprintf("DESTINASI WISATA");
    gotoxy(38,24);textcolor(0);cprintf("1. BEACH TOURISM");
    gotoxy(67,30);textcolor(0);cprintf("2. ISLAND TOURS");
    gotoxy(96,24);textcolor(0);cprintf("3. WATERFALL TOURS");
    	gotoxy(63,36);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU ");
    	gotoxy(21,38);pilih=getche();
  	 	gotoxy(21,38);printf("    ");
    if(pilih=='1'){
      hapuss();
      beach();
    }else if(pilih=='2'){
     	hapuss();
      island();
    }else if(pilih=='3'){
    	hapuss();
      waterfall();
    }else if(pilih=='0'){
      hapuss();
      bingkaimenu();
    }else{
    	gotoxy(21,38);printf("!!!");Sleep(200);
      gotoxy(21,38);printf("   ");
      deswisata();
    }
}
////////////////////////////////////////////////////////////////////////////////
// ========================== BEACH TOURISM ================================= //
////////////////////////////////////////////////////////////////////////////////
void beach(){
     for(int x=1;x<=25;x++){
    	gotoxy(64+x,14);textcolor(1);cprintf("%c",219);
    	gotoxy(64+x,18);textcolor(1);cprintf("%c",219);
      if(x==15 || x==16 || x==17){
      	gotoxy(65,x);textcolor(1);cprintf("%c",219);
         gotoxy(89,x);textcolor(1);cprintf("%c",219);
      }
     }
     for(int x=1;x<=40;x++){
      gotoxy(32+x,22);textcolor(1);cprintf("%c",219);
      gotoxy(32+x,26);textcolor(1);cprintf("%c",219);
      gotoxy(81+x,22);textcolor(1);cprintf("%c",219);
      gotoxy(81+x,26);textcolor(1);cprintf("%c",219);
      gotoxy(56+x,30);textcolor(1);cprintf("%c",219);
      gotoxy(56+x,34);textcolor(1);cprintf("%c",219);
      if(x==23 || x==24 || x==25){
      	gotoxy(33,x);textcolor(1);cprintf("%c",219);
         gotoxy(72,x);textcolor(1);cprintf("%c",219);
         gotoxy(82,x);textcolor(1);cprintf("%c",219);
         gotoxy(121,x);textcolor(1);cprintf("%c",219);
     	}else if(x==31 || x==32 || x==33){
      	gotoxy(57,x);textcolor(1);cprintf("%c",219);
         gotoxy(96,x);textcolor(1);cprintf("%c",219);
      }
     }
     gotoxy(68,16);textcolor(0);cprintf(" BEACH  TOURISM");
     gotoxy(36,24);textcolor(0);cprintf("1. HOLLYWOOD BEACH (SIBOLGA,SUMUT)");
     gotoxy(85,24);textcolor(0);cprintf("2. NIHIWATU BEACH (SUMBA,NTT)");
     gotoxy(61,32);textcolor(0);cprintf("3.     PANDAWA BEACH  (BALI)");
      gotoxy(62,37);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
      gotoxy(62,36);textcolor(0);cprintf("PILIH (9) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
    	gotoxy(21,38);pilih=getche();
  	 	gotoxy(21,38);printf("    ");
    if(pilih=='1'){
    	hapuss();
      hollywood();
    }else if(pilih=='2'){
      hapuss();
      nihiwatu();
    }else if(pilih=='3'){
      hapuss();
      pandawa();
    }else if(pilih=='0'){
      hapuss();
      bingkaimenu();
    }else if(pilih=='9'){
      hapuss();
      deswisata();
    }else{
		gotoxy(21,38);printf("!!!");Sleep(200);
      gotoxy(21,38);printf("   ");
      beach();
    }
}
////////////////////////////////////////////////////////////////////////////////
// ========================= HOLLYWOOD BEACH ================================ //
////////////////////////////////////////////////////////////////////////////////
void hollywood(){
      for(int x=1;x<=40;x++){
      	gotoxy(58+x,16);textcolor(1);cprintf("%c",219);
         gotoxy(58+x,20);textcolor(1);cprintf("%c",219);
         	if(x>=17 && x<=19){
         	gotoxy(59,x);textcolor(1);cprintf("%c",219);
            gotoxy(98,x);textcolor(1);cprintf("%c",219);
            }else if(x>=25 && x<=27){
            gotoxy(49,x);textcolor(1);cprintf("%c",219);
            gotoxy(73,x);textcolor(1);cprintf("%c",219);
            gotoxy(84,x);textcolor(1);cprintf("%c",219);
            gotoxy(108,x);textcolor(1);cprintf("%c",219);
         	}
     }
     for(int x=1;x<=25;x++){
    	gotoxy(48+x,24);textcolor(1);cprintf("%c",219);
    	gotoxy(48+x,28);textcolor(1);cprintf("%c",219);
      gotoxy(83+x,24);textcolor(1);cprintf("%c",219);
      gotoxy(83+x,28);textcolor(1);cprintf("%c",219);
     }
     gotoxy(63,18);textcolor(0);cprintf("HOLLYWOOD BEACH (SIBOLGA,SUMUT)");
     gotoxy(52,26);textcolor(0);cprintf("1. PAKET V I P ");
     gotoxy(87,26);textcolor(0);cprintf("2. PAKET REGULER");
     gotoxy(59,32);textcolor(0);cprintf("PILIH (9) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
     gotoxy(59,33);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
     gotoxy(21,38);pilih=getche();
     gotoxy(21,38);printf("    ");
      if(pilih=='1'){
      	hapuss();
         viphol();
      }else if(pilih=='2'){
         hapuss();
         regulerhol();
      }else if(pilih=='9'){
      	hapuss();
      	beach();
      }else if(pilih=='0'){
      	hapuss();
         bingkaimenu();
      }else{
         gotoxy(21,38);printf("!!!");Sleep(200);
         gotoxy(21,38);printf("   ");
         hollywood();
      }
}
////////////////////////////////////////////////////////////////////////////////
// ====================== PAKET VIP HOLLYWOOD =============================== //
////////////////////////////////////////////////////////////////////////////////
void viphol(){
		for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET V I P : ");
      gotoxy(57,18);textcolor(0);cprintf("    ~ TIKET MASUK : Rp.2.500.000/5-ORG    ");
      gotoxy(57,19);textcolor(0);cprintf("    ~ DOKUMENTASI                         ");
      gotoxy(57,20);textcolor(0);cprintf("    ~ GRATIS WAHANA : > BANANA BOAT       ");
      gotoxy(57,21);textcolor(0);cprintf("                      > JET SKY           ");
      gotoxy(57,22);textcolor(0);cprintf("                      > ROLLING DONAT     ");
      gotoxy(57,23);textcolor(0);cprintf("                      > SINGLE PARASILING ");
      gotoxy(57,24);textcolor(0);cprintf("    ~ SPOT FOTO + KACAMATA                ");
      gotoxy(57,25);textcolor(0);cprintf("    ~ MAKAN SIANG                         ");
      gotoxy(57,26);textcolor(0);cprintf("    ~ + SNACK & MINUMAN KELAPA MUDA       ");
       		gotoxy(60,30);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,32);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		hollywood();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                	gotoxy(21,38);printf("!!!");Sleep(200);
                  gotoxy(21,38);printf("   ");
                  viphol();
 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ========================== REGULER HOLLYWOOD ============================== //
////////////////////////////////////////////////////////////////////////////////
void regulerhol(){
       for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET REGULER : ");
      gotoxy(59,18);textcolor(0);cprintf("    ~ TIKET MASUK : Rp.1.500.000/5-ORG    ");
      gotoxy(59,19);textcolor(0);cprintf("    ~ DOKUMENTASI                         ");
      gotoxy(59,20);textcolor(0);cprintf("    ~ GRATIS WAHANA : > BANANA BOAT       ");
      gotoxy(59,21);textcolor(0);cprintf("                      > SINGLE PARASILING ");
      gotoxy(59,22);textcolor(0);cprintf("    ~ SPOT FOTO                           ");
      gotoxy(59,23);textcolor(0);cprintf("    ~ + SNACK & MINUMAN KELAPA MUDA       ");
       		gotoxy(60,30);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,32);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		hollywood();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   regulerhol();
 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ============================ NIHIWATU BEACH ============================== //
////////////////////////////////////////////////////////////////////////////////
void nihiwatu(){
		 for(int x=1;x<=40;x++){
      	gotoxy(58+x,16);textcolor(1);cprintf("%c",219);
         gotoxy(58+x,20);textcolor(1);cprintf("%c",219);
         if(x>=17 && x<=19){
          gotoxy(59,x);textcolor(1);cprintf("%c",219);
          gotoxy(98,x);textcolor(1);cprintf("%c",219);
         }else if(x>=25 && x<=27){
          gotoxy(49,x);textcolor(1);cprintf("%c",219);
          gotoxy(73,x);textcolor(1);cprintf("%c",219);
          gotoxy(84,x);textcolor(1);cprintf("%c",219);
          gotoxy(108,x);textcolor(1);cprintf("%c",219);
          }
       }
       for(int x=1;x<=25;x++){
    		gotoxy(48+x,24);textcolor(1);cprintf("%c",219);
    		gotoxy(48+x,28);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,24);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,28);textcolor(1);cprintf("%c",219);
       }
     gotoxy(65,18);textcolor(0);cprintf(" NIHIWATU BEACH (SUMBA,NTT)");
     gotoxy(52,26);textcolor(0);cprintf("1. PAKET V I P ");
     gotoxy(87,26);textcolor(0);cprintf("2. PAKET REGULER");
      gotoxy(59,32);textcolor(0);cprintf("PILIH (9) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
      gotoxy(59,33);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
    	gotoxy(21,38);pilih=getche();
  	 	gotoxy(21,38);printf("    ");
      if(pilih=='1'){
      	hapuss();
         vipnih();
      }else if(pilih=='2'){
         hapuss();
         regulernih();
      }else if(pilih=='9'){
      	 hapuss();
          beach();
      }else if(pilih=='0'){
      	 hapuss();
         bingkaimenu();
      }else{
         gotoxy(21,38);printf("!!!");Sleep(200);
         gotoxy(21,38);printf("   ");
         nihiwatu();
      }
}
////////////////////////////////////////////////////////////////////////////////
// ========================== VIP NIHIWATU ================================== //
////////////////////////////////////////////////////////////////////////////////
void vipnih(){
			for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,30);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=29){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET V I P : ");
      gotoxy(57,18);textcolor(0);cprintf("    ~ TIKET MASUK + PENGINAPAN: Rp.10.000.000/5-ORG    ");
      gotoxy(57,19);textcolor(0);cprintf("    ~ + TRANSPORTASI                                   ");
      gotoxy(57,20);textcolor(0);cprintf("    ~ PEMANDU WISATA                                   ");
      gotoxy(57,21);textcolor(0);cprintf("    ~ DOKUMENTASI                                      ");
      gotoxy(57,22);textcolor(0);cprintf("    ~ SPA SAFARI                                       ");
      gotoxy(57,23);textcolor(0);cprintf("    ~ GRATIS WAHANA : > JETSKY                         ");
      gotoxy(57,24);textcolor(0);cprintf("                      > FLYBOARD                       ");
      gotoxy(57,25);textcolor(0);cprintf("    ~ PETUALANG BERSAMA KERBAU                         ");
      gotoxy(57,26);textcolor(0);cprintf("    ~ SPOT EKSTRIM                                     ");
      gotoxy(57,27);textcolor(0);cprintf("    ~ SPOT FOTO + KACAMATA                             ");
      gotoxy(57,28);textcolor(0);cprintf("    ~ MAKAN SIANG DAN MAKAN MALAM                      ");
       		gotoxy(60,32);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,35);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		nihiwatu();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(93,30);printf("inputan invalid !!!");Sleep(200);
                   gotoxy(93,30);printf("                   ");
 	           }
}
////////////////////////////////////////////////////////////////////////////////
// =========================== REGULER NIHIWATU ============================= //
////////////////////////////////////////////////////////////////////////////////
void regulernih(){
			for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET REGULER : ");
      gotoxy(58,18);textcolor(0);cprintf("    ~ TIKET MASUK + PENGINAPAN: Rp.7.500.000/5-ORG  ");
      gotoxy(58,19);textcolor(0);cprintf("    ~ + TRANSPORTASI                                ");
      gotoxy(58,20);textcolor(0);cprintf("    ~ PEMANDU WISATA                                ");
      gotoxy(58,21);textcolor(0);cprintf("    ~ DOKUMENTASI                                   ");
      gotoxy(58,22);textcolor(0);cprintf("    ~ SPA SAFARI                                    ");
      gotoxy(58,23);textcolor(0);cprintf("    ~ GRATIS WAHANA : > JETSKY                      ");
      gotoxy(58,24);textcolor(0);cprintf("                      > BANANA BOAT                 ");
      gotoxy(58,25);textcolor(0);cprintf("    ~ SPOT FOTO + KACAMATA                          ");
      gotoxy(58,26);textcolor(0);cprintf("    ~ MAKAN MALAM                                   ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		nihiwatu();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   regulernih();
 	           }
}
////////////////////////////////////////////////////////////////////////////////
// =========================== PANDAWA BEACH ================================ //
////////////////////////////////////////////////////////////////////////////////
void pandawa(){
   	for(int x=1;x<=40;x++){
      	gotoxy(58+x,16);textcolor(1);cprintf("%c",219);
         gotoxy(58+x,20);textcolor(1);cprintf("%c",219);
         if(x>=17 && x<=19){
          gotoxy(59,x);textcolor(1);cprintf("%c",219);
          gotoxy(98,x);textcolor(1);cprintf("%c",219);
         }else if(x>=25 && x<=27){
          gotoxy(49,x);textcolor(1);cprintf("%c",219);
          gotoxy(73,x);textcolor(1);cprintf("%c",219);
          gotoxy(84,x);textcolor(1);cprintf("%c",219);
          gotoxy(108,x);textcolor(1);cprintf("%c",219);
          }
       }
       for(int x=1;x<=25;x++){
    		gotoxy(48+x,24);textcolor(1);cprintf("%c",219);
    		gotoxy(48+x,28);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,24);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,28);textcolor(1);cprintf("%c",219);
       }
     gotoxy(65,18);textcolor(0);cprintf("  PANDAWA BEACH (BALI)");
     gotoxy(52,26);textcolor(0);cprintf("1. PAKET V I P ");
     gotoxy(87,26);textcolor(0);cprintf("2. PAKET REGULER");
      gotoxy(59,32);textcolor(0);cprintf("PILIH (9) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
      gotoxy(59,33);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
    	gotoxy(21,38);pilih=getche();
  	 	gotoxy(21,38);printf("    ");
      if(pilih=='1'){
      	hapuss();
         vippan();
      }else if(pilih=='2'){
         hapuss();
         regulerpan();
      }else if(pilih=='9'){
      	 hapuss();
          beach();
      }else if(pilih=='0'){
      	hapuss();
         bingkaimenu();
      }else{
      	gotoxy(21,38);printf("!!!");Sleep(200);
         gotoxy(21,38);printf("   ");
         pandawa();
      }
}
////////////////////////////////////////////////////////////////////////////////
// ============================ VIP PANDAWA ================================= //
////////////////////////////////////////////////////////////////////////////////
void vippan(){
       	for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,30);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=29){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(46,17);textcolor(0);cprintf("PAKET V I P : ");
      gotoxy(54,18);textcolor(0);cprintf("    ~ TIKET MASUK  : Rp.7.500.000/5-ORG                   ");
      gotoxy(54,19);textcolor(0);cprintf("    ~ GRATIS PARKIR                                       ");
      gotoxy(54,20);textcolor(0);cprintf("    ~ PEMANDU WISATA                                      ");
      gotoxy(54,21);textcolor(0);cprintf("    ~ DOKUMENTASI                                         ");
      gotoxy(54,22);textcolor(0);cprintf("    ~ PIJAT TRADISIONAL                                   ");
      gotoxy(54,23);textcolor(0);cprintf("    ~ GRATIS WAHANA :> BERSELANCAR                        ");
      gotoxy(54,24);textcolor(0);cprintf("                     > BERMAIN PERAHU KANO                ");
      gotoxy(54,25);textcolor(0);cprintf("                     > BERMAIN PARAGLIDING DI BUKIT TIMBIS");
      gotoxy(54,26);textcolor(0);cprintf("    ~ MENGUNJUGI PATUNG KSATRIA PANDAWA                   ");
      gotoxy(54,27);textcolor(0);cprintf("    ~ SPOT FOTO + KACAMATA                                ");
      gotoxy(54,28);textcolor(0);cprintf("    ~ MAKAN SIANG                                         ");
       		gotoxy(60,32);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,35);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		pandawa();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   vippan();

 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ========================== REGULER PANDAWA =============================== //
////////////////////////////////////////////////////////////////////////////////
void regulerpan(){
		for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET REGULER : ");
      gotoxy(58,18);textcolor(0);cprintf("    ~ TIKET MASUK : Rp.5.000.000/5-ORG       ");
      gotoxy(58,19);textcolor(0);cprintf("    ~ GRARTIS PARKIR                         ");
      gotoxy(58,20);textcolor(0);cprintf("    ~ PEMANDU WISATA                         ");
      gotoxy(58,21);textcolor(0);cprintf("    ~ DOKUMENTASI                            ");
      gotoxy(58,22);textcolor(0);cprintf("    ~ MENGUNJUNGI PATUNG KSATRIA PANDAWA     ");
      gotoxy(58,23);textcolor(0);cprintf("    ~ GRATIS WAHANA : > BERSELANCAR          ");
      gotoxy(58,24);textcolor(0);cprintf("                      > BERMAIN PERAHU KANO  ");
      gotoxy(58,25);textcolor(0);cprintf("    ~ SPOT FOTO                              ");
      gotoxy(58,26);textcolor(0);cprintf("    ~ MAKAN SIANG                            ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("     ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		pandawa();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   regulerpan();
 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ============================== ISLAND TOURS ============================== //
////////////////////////////////////////////////////////////////////////////////
void island(){
      for(int x=1;x<=25;x++){
    	gotoxy(64+x,14);textcolor(1);cprintf("%c",219);
    	gotoxy(64+x,18);textcolor(1);cprintf("%c",219);
      if(x==15 || x==16 || x==17){
      	gotoxy(65,x);textcolor(1);cprintf("%c",219);
         gotoxy(89,x);textcolor(1);cprintf("%c",219);
      }
     }
     for(int x=1;x<=40;x++){
      gotoxy(32+x,22);textcolor(1);cprintf("%c",219);
      gotoxy(32+x,26);textcolor(1);cprintf("%c",219);
      gotoxy(81+x,22);textcolor(1);cprintf("%c",219);
      gotoxy(81+x,26);textcolor(1);cprintf("%c",219);
      gotoxy(32+x,30);textcolor(1);cprintf("%c",219);
      gotoxy(32+x,34);textcolor(1);cprintf("%c",219);
      gotoxy(81+x,30);textcolor(1);cprintf("%c",219);
      gotoxy(81+x,34);textcolor(1);cprintf("%c",219);
      if(x==23 || x==24 || x==25){
      	gotoxy(33,x);textcolor(1);cprintf("%c",219);
         gotoxy(72,x);textcolor(1);cprintf("%c",219);
         gotoxy(82,x);textcolor(1);cprintf("%c",219);
         gotoxy(121,x);textcolor(1);cprintf("%c",219);
     	}else if(x==31 || x==32 || x==33){
      	gotoxy(33,x);textcolor(1);cprintf("%c",219);
         gotoxy(72,x);textcolor(1);cprintf("%c",219);
         gotoxy(82,x);textcolor(1);cprintf("%c",219);
         gotoxy(121,x);textcolor(1);cprintf("%c",219);
      }
     }
     gotoxy(68,16);textcolor(0);cprintf("  ISLAND  TOURS");
     gotoxy(35,24);textcolor(0);cprintf("1.KALIMANTUNG ISLAND (SIBOLGA,SUMUT)");
     gotoxy(85,24);textcolor(0);cprintf("2. MURSALA ISLAND (SIBOLGA,SUMUT)");
     gotoxy(35,32);textcolor(0);cprintf("3.  PONCAN ISLAND (SIBOLGA,SUMUT)");
     gotoxy(85,32);textcolor(0);cprintf("4.  PUTRI ISLAND (SIBOLGA,SUMUT)");
      gotoxy(61,37);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
      gotoxy(61,36);textcolor(0);cprintf("PILIH (9) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
    	gotoxy(21,38);pilih=getche();
  	 	gotoxy(21,38);printf("    ");
    if(pilih=='1'){
    	hapuss();
      kalimantung();
    }else if(pilih=='2'){
      hapuss();
      mursala();
    }else if(pilih=='3'){
      hapuss();
      poncan();
    }else if(pilih=='4'){
      hapuss();
      putri();
    }else if(pilih=='0'){
      hapuss();
      bingkaimenu();
    }else if(pilih=='9'){
      hapuss();
      deswisata();
    }else{
		gotoxy(21,38);printf("!!!");Sleep(200);
      gotoxy(21,38);printf("   ");
      island();
    }

}
////////////////////////////////////////////////////////////////////////////////
// ========================= KALIMANTUNG ISLAND ============================= //
////////////////////////////////////////////////////////////////////////////////
void kalimantung(){
		for(int x=1;x<=40;x++){
      	gotoxy(58+x,16);textcolor(1);cprintf("%c",219);
         gotoxy(58+x,20);textcolor(1);cprintf("%c",219);
         if(x>=17 && x<=19){
          gotoxy(59,x);textcolor(1);cprintf("%c",219);
          gotoxy(98,x);textcolor(1);cprintf("%c",219);
         }else if(x>=25 && x<=27){
          gotoxy(49,x);textcolor(1);cprintf("%c",219);
          gotoxy(73,x);textcolor(1);cprintf("%c",219);
          gotoxy(84,x);textcolor(1);cprintf("%c",219);
          gotoxy(108,x);textcolor(1);cprintf("%c",219);
          }
       }
       for(int x=1;x<=25;x++){
    		gotoxy(48+x,24);textcolor(1);cprintf("%c",219);
    		gotoxy(48+x,28);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,24);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,28);textcolor(1);cprintf("%c",219);
       }
     gotoxy(62,18);textcolor(0);cprintf("KALIMANTUNG ISLAND (SIBOLGA,SUMUT)");
     gotoxy(52,26);textcolor(0);cprintf("1. PAKET V I P ");
     gotoxy(87,26);textcolor(0);cprintf("2. PAKET REGULER");
      gotoxy(59,32);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
      gotoxy(59,33);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
    	gotoxy(21,38);pilih=getche();
  	 	gotoxy(21,38);printf("   ");
      if(pilih=='1'){
      	hapuss();
         vipkali();
      }else if(pilih=='2'){
         hapuss();
         regulerkali();
      }else if(pilih=='t' || pilih=='T'){
      	 hapuss();
          island();
      }else if(pilih=='0'){
      	hapuss();
         bingkaimenu();
      }else{
      	gotoxy(21,38);printf("!!!");Sleep(200);
         gotoxy(21,38);printf("   ");
         kalimantung();
      }
}
////////////////////////////////////////////////////////////////////////////////
// ======================== VIP KALIMANTUNG ================================= //
////////////////////////////////////////////////////////////////////////////////
void vipkali(){
		for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET V I P : ");
      gotoxy(57,18);textcolor(0);cprintf("    ~ ONGKOS KAPAL : Rp.2.500.000/5-ORG    ");
      gotoxy(57,19);textcolor(0);cprintf("    ~ DOKUMENTASI                          ");
      gotoxy(57,20);textcolor(0);cprintf("    ~ SAFETY FACILITY (PELAMPUNG + P3K)    ");
      gotoxy(57,21);textcolor(0);cprintf("    ~ SPOT FOTO + KACAMATA                 ");
      gotoxy(57,22);textcolor(0);cprintf("    ~ SNACK + MINUMAN KELAPA MUDA          ");
      gotoxy(57,23);textcolor(0);cprintf("    ~ + PONDOK                             ");
      gotoxy(57,24);textcolor(0);cprintf("    ~ + SPOT DIVING                        ");
      gotoxy(57,25);textcolor(0);cprintf("    ~ MAKAN SIANG                          ");
      gotoxy(57,26);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 2 JAM 30 MENIT      ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		kalimantung();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   vipkali();

 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ============================ REGULER KALIMANTUNG ========================= //
////////////////////////////////////////////////////////////////////////////////
void regulerkali(){
      for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET REGULER : ");
      gotoxy(57,18);textcolor(0);cprintf("    ~ ONGKOS KAPAL : Rp.1.500.000/5-ORG    ");
      gotoxy(57,19);textcolor(0);cprintf("    ~ DOKUMENTASI                          ");
      gotoxy(57,20);textcolor(0);cprintf("    ~ SAFETY FACILITY (PELAMPUNG      )    ");
      gotoxy(57,21);textcolor(0);cprintf("    ~ SPOT FOTO + KACAMATA                 ");
      gotoxy(57,22);textcolor(0);cprintf("    ~ SNACK + MINUMAN KELAPA MUDA          ");
      gotoxy(57,23);textcolor(0);cprintf("    ~ + TIKAR                              ");
      gotoxy(57,24);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 2 JAM 30 MENIT      ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("     ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		kalimantung();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   regulerkali();

 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ============================ MURSALA ISLAND ============================== //
////////////////////////////////////////////////////////////////////////////////
void mursala(){
      for(int x=1;x<=40;x++){
      	gotoxy(58+x,16);textcolor(1);cprintf("%c",219);
         gotoxy(58+x,20);textcolor(1);cprintf("%c",219);
         if(x>=17 && x<=19){
          gotoxy(59,x);textcolor(1);cprintf("%c",219);
          gotoxy(98,x);textcolor(1);cprintf("%c",219);
         }else if(x>=25 && x<=27){
          gotoxy(49,x);textcolor(1);cprintf("%c",219);
          gotoxy(73,x);textcolor(1);cprintf("%c",219);
          gotoxy(84,x);textcolor(1);cprintf("%c",219);
          gotoxy(108,x);textcolor(1);cprintf("%c",219);
          }
       }
       for(int x=1;x<=25;x++){
    		gotoxy(48+x,24);textcolor(1);cprintf("%c",219);
    		gotoxy(48+x,28);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,24);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,28);textcolor(1);cprintf("%c",219);
       }
     gotoxy(62,18);textcolor(0);cprintf("  MURSALA ISLAND (SIBOLGA,SUMUT)");
     gotoxy(52,26);textcolor(0);cprintf("1. PAKET V I P ");
     gotoxy(87,26);textcolor(0);cprintf("2. PAKET REGULER");
      gotoxy(59,32);textcolor(0);cprintf("PILIH (9) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
      gotoxy(59,33);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
    	gotoxy(21,38);pilih=getche();
  	 	gotoxy(21,38);printf("   ");
      if(pilih=='1'){
      	hapuss();
         vipmursala();
      }else if(pilih=='2'){
         hapuss();
         regulermursala();
      }else if(pilih=='9'){
      	 hapuss();
          island();
      }else if(pilih=='0'){
      	 hapuss();
         bingkaimenu();
      }else{
      	gotoxy(21,38);printf("!!!");Sleep(200);
         gotoxy(21,38);printf("   ");
         mursala();
      }
}
////////////////////////////////////////////////////////////////////////////////
// =========================== VIP MURSALA ================================== //
////////////////////////////////////////////////////////////////////////////////
void vipmursala(){
      for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET V I P : ");
      gotoxy(57,18);textcolor(0);cprintf("    ~ ONGKOS KAPAL : Rp.2.500.000/5-ORG    ");
      gotoxy(57,19);textcolor(0);cprintf("    ~ DOKUMENTASI                          ");
      gotoxy(57,20);textcolor(0);cprintf("    ~ SAFETY FACILITY (PELAMPUNG + P3K)    ");
      gotoxy(57,21);textcolor(0);cprintf("    ~ SPOT FOTO                            ");
      gotoxy(57,22);textcolor(0);cprintf("    ~ SNACK + MINUMAN                      ");
      gotoxy(57,23);textcolor(0);cprintf("    ~ + SPOT DIVING                        ");
      gotoxy(57,24);textcolor(0);cprintf("    ~ MAKAN SIANG                          ");
      gotoxy(57,25);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 2 JAM 45 MENIT      ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		mursala();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   vipmursala();

 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ============================ REGULER MURSALA ============================= //
////////////////////////////////////////////////////////////////////////////////
void regulermursala(){
		for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET REGULER : ");
      gotoxy(57,19);textcolor(0);cprintf("    ~ ONGKOS KAPAL : Rp.1.500.000/5-ORG    ");
      gotoxy(57,20);textcolor(0);cprintf("    ~ DOKUMENTASI                          ");
      gotoxy(57,21);textcolor(0);cprintf("    ~ SAFETY FACILITY (PELAMPUNG + P3K)    ");
      gotoxy(57,22);textcolor(0);cprintf("    ~ SPOT DIVING                          ");
      gotoxy(57,23);textcolor(0);cprintf("    ~ SNACK DAN MINUMAN                    ");
      gotoxy(57,24);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 2 JAM 45 MENIT      ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("     ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		mursala();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   regulermursala();

 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ============================ PONCAN ISLAND =============================== //
////////////////////////////////////////////////////////////////////////////////
void poncan(){
      for(int x=1;x<=40;x++){
      	gotoxy(58+x,16);textcolor(1);cprintf("%c",219);
         gotoxy(58+x,20);textcolor(1);cprintf("%c",219);
         if(x>=17 && x<=19){
          gotoxy(59,x);textcolor(1);cprintf("%c",219);
          gotoxy(98,x);textcolor(1);cprintf("%c",219);
         }else if(x>=25 && x<=27){
          gotoxy(49,x);textcolor(1);cprintf("%c",219);
          gotoxy(73,x);textcolor(1);cprintf("%c",219);
          gotoxy(84,x);textcolor(1);cprintf("%c",219);
          gotoxy(108,x);textcolor(1);cprintf("%c",219);
          }
       }
       for(int x=1;x<=25;x++){
    		gotoxy(48+x,24);textcolor(1);cprintf("%c",219);
    		gotoxy(48+x,28);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,24);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,28);textcolor(1);cprintf("%c",219);
       }
     gotoxy(62,18);textcolor(0);cprintf("   PONCAN ISLAND (SIBOLGA,SUMUT)");
     gotoxy(52,26);textcolor(0);cprintf("1. PAKET V I P ");
     gotoxy(87,26);textcolor(0);cprintf("2. PAKET REGULER");
      gotoxy(59,32);textcolor(0);cprintf("PILIH (9) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
      gotoxy(59,33);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
    	gotoxy(21,38);pilih=getche();
  	 	gotoxy(21,38);printf("   ");
      if(pilih=='1'){
      	hapuss();
         vipponcan();
      }else if(pilih=='2'){
         hapuss();
         regulerponcan();
      }else if(pilih=='9'){
      	 hapuss();
          island();
      }else if(pilih=='0'){
      	 hapuss();
         bingkaimenu();
      }else{
      	gotoxy(21,38);printf("!!!");Sleep(200);
         gotoxy(21,38);printf("   ");
         poncan();
      }
}
////////////////////////////////////////////////////////////////////////////////
// ============================= VIP PONCAN ================================= //
////////////////////////////////////////////////////////////////////////////////
void vipponcan(){
       for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET V I P : ");
      gotoxy(57,18);textcolor(0);cprintf("    ~ ONGKOS KAPAL : Rp.3.000.000/5-ORG    ");
      gotoxy(57,19);textcolor(0);cprintf("    ~ + PENGINAPAN DI HOTEL                ");
      gotoxy(57,20);textcolor(0);cprintf("    ~ DOKUMENTASI                          ");
      gotoxy(57,21);textcolor(0);cprintf("    ~ SAFETY FACILITY (PELAMPUNG + P3K)    ");
      gotoxy(57,22);textcolor(0);cprintf("    ~ SPOT FOTO                            ");
      gotoxy(57,23);textcolor(0);cprintf("    ~ + MINUMAN KELAPA MUDA                ");
      gotoxy(57,24);textcolor(0);cprintf("    ~ MAKAN SIANG DAN MAKAN MALAM          ");
      gotoxy(57,25);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 45 MENIT            ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		poncan();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   vipponcan();

 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ============================= REGULER PONCAN ============================= //
////////////////////////////////////////////////////////////////////////////////
void regulerponcan(){
       for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET REGULER : ");
      gotoxy(58,18);textcolor(0);cprintf("    ~ ONGKOS KAPAL : Rp.1.500.000/5-ORG    ");
      gotoxy(58,19);textcolor(0);cprintf("    ~ DOKUMENTASI                          ");
      gotoxy(58,20);textcolor(0);cprintf("    ~ SAFETY FACILITY (PELAMPUNG + P3K)    ");
      gotoxy(58,21);textcolor(0);cprintf("    ~ SPOT FOTO                            ");
      gotoxy(58,22);textcolor(0);cprintf("    ~ + MINUMAN KELAPA MUDA                ");
      gotoxy(58,23);textcolor(0);cprintf("    ~ MAKAN SIANG                          ");
      gotoxy(58,24);textcolor(0);cprintf("    ~ WAKTU PERJALANA 45 MENIT             ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		poncan();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   regulerponcan();
 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ============================== PUTRI ISLAND ============================== //
////////////////////////////////////////////////////////////////////////////////
void putri(){
      for(int x=1;x<=40;x++){
      	gotoxy(58+x,16);textcolor(1);cprintf("%c",219);
         gotoxy(58+x,20);textcolor(1);cprintf("%c",219);
         if(x>=17 && x<=19){
          gotoxy(59,x);textcolor(1);cprintf("%c",219);
          gotoxy(98,x);textcolor(1);cprintf("%c",219);
         }else if(x>=25 && x<=27){
          gotoxy(49,x);textcolor(1);cprintf("%c",219);
          gotoxy(73,x);textcolor(1);cprintf("%c",219);
          gotoxy(84,x);textcolor(1);cprintf("%c",219);
          gotoxy(108,x);textcolor(1);cprintf("%c",219);
          }
       }
       for(int x=1;x<=25;x++){
    		gotoxy(48+x,24);textcolor(1);cprintf("%c",219);
    		gotoxy(48+x,28);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,24);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,28);textcolor(1);cprintf("%c",219);
       }
     gotoxy(62,18);textcolor(0);cprintf("   PUTRI ISLAND (SIBOLGA,SUMUT)");
     gotoxy(52,26);textcolor(0);cprintf("1. PAKET V I P ");
     gotoxy(87,26);textcolor(0);cprintf("2. PAKET REGULER");
      gotoxy(59,32);textcolor(0);cprintf("PILIH (9) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
      gotoxy(59,33);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
    	gotoxy(21,38);pilih=getche();
  	 	gotoxy(21,38);printf("   ");
      if(pilih=='1'){
      	hapuss();
         vipputri();
      }else if(pilih=='2'){
         hapuss();
         regulerputri();
      }else if(pilih=='9'){
      	 hapuss();
          island();
      }else if(pilih=='0'){
      	hapuss();
         bingkaimenu();
      }else{
      	gotoxy(21,38);printf("!!!");Sleep(200);
         gotoxy(21,38);printf("   ");
         putri();
      }
}
////////////////////////////////////////////////////////////////////////////////
// ============================== VIP PUTRI ================================= //
////////////////////////////////////////////////////////////////////////////////
void vipputri(){
       for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET V I P : ");
      gotoxy(57,18);textcolor(0);cprintf("    ~ ONGKOS KAPAL : Rp.3.500.000/5-ORG    ");
      gotoxy(57,19);textcolor(0);cprintf("    ~ SPOT DIVING                          ");
      gotoxy(57,20);textcolor(0);cprintf("    ~ DOKUMENTASI                          ");
      gotoxy(57,21);textcolor(0);cprintf("    ~ SAFETY FACILITY (PELAMPUNG + P3K)    ");
      gotoxy(57,22);textcolor(0);cprintf("    ~ SPOT FOTO + KACAMATA                 ");
      gotoxy(57,23);textcolor(0);cprintf("    ~ + SNACK DAN MINUMAN KELAPA MUDA      ");
      gotoxy(57,24);textcolor(0);cprintf("    ~ MAKAN SIANG                          ");
      gotoxy(57,25);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 2 JAM               ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		putri();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   vipputri();

 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ============================= REGULER PUTRI ============================== //
////////////////////////////////////////////////////////////////////////////////
void regulerputri(){
       for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET REGULER : ");
      gotoxy(58,18);textcolor(0);cprintf("    ~ ONGKOS KAPAL : Rp.2.500.000/5-ORG    ");
      gotoxy(58,19);textcolor(0);cprintf("    ~ DOKUMENTASI                          ");
      gotoxy(58,20);textcolor(0);cprintf("    ~ SAFETY FACILITY ( PELAMPUNG )        ");
      gotoxy(58,21);textcolor(0);cprintf("    ~ SPOT FOTO + KACAMATA                 ");
      gotoxy(58,22);textcolor(0);cprintf("    ~ + SNACK DAN MINUMAN KELAPA MUDA      ");
      gotoxy(58,23);textcolor(0);cprintf("    ~ SPOT DIVING                          ");
      gotoxy(58,24);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 2 JAM               ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		putri();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   regulerputri();

 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ============================ WATERFALL =================================== //
////////////////////////////////////////////////////////////////////////////////
void waterfall(){
      for(int x=1;x<=25;x++){
    	gotoxy(64+x,14);textcolor(1);cprintf("%c",219);
    	gotoxy(64+x,18);textcolor(1);cprintf("%c",219);
      if(x==15 || x==16 || x==17){
      	gotoxy(65,x);textcolor(1);cprintf("%c",219);
         gotoxy(89,x);textcolor(1);cprintf("%c",219);
      }
     }
     for(int x=1;x<=40;x++){
      gotoxy(32+x,22);textcolor(1);cprintf("%c",219);
      gotoxy(32+x,26);textcolor(1);cprintf("%c",219);
      gotoxy(81+x,22);textcolor(1);cprintf("%c",219);
      gotoxy(81+x,26);textcolor(1);cprintf("%c",219);
      gotoxy(32+x,30);textcolor(1);cprintf("%c",219);
      gotoxy(32+x,34);textcolor(1);cprintf("%c",219);
      gotoxy(81+x,30);textcolor(1);cprintf("%c",219);
      gotoxy(81+x,34);textcolor(1);cprintf("%c",219);
      if(x==23 || x==24 || x==25){
      	gotoxy(33,x);textcolor(1);cprintf("%c",219);
         gotoxy(72,x);textcolor(1);cprintf("%c",219);
         gotoxy(82,x);textcolor(1);cprintf("%c",219);
         gotoxy(121,x);textcolor(1);cprintf("%c",219);
     	}else if(x==31 || x==32 || x==33){
      	gotoxy(33,x);textcolor(1);cprintf("%c",219);
         gotoxy(72,x);textcolor(1);cprintf("%c",219);
         gotoxy(82,x);textcolor(1);cprintf("%c",219);
         gotoxy(121,x);textcolor(1);cprintf("%c",219);
      }
     }
     gotoxy(68,16);textcolor(0);cprintf("  WATERFALL TOURS");
     gotoxy(35,24);textcolor(0);cprintf("1.WATERFALL DUA WARNA (DELI SERDANG)");
     gotoxy(85,24);textcolor(0);cprintf("2. WATERFALL AEK BONTAR (HUTABALANG)");
     gotoxy(35,32);textcolor(0);cprintf("3.  WATERFALL AEK MARTOLU (TAPTENG)");
     gotoxy(85,32);textcolor(0);cprintf("4.WATERFALL SIPISO-PISO (TOBA,SUMUT)");
      gotoxy(61,37);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
      gotoxy(61,36);textcolor(0);cprintf("PILIH (9) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
    	gotoxy(21,38);pilih=getche();
  	 	gotoxy(21,38);printf("    ");
    if(pilih=='1'){
    	hapuss();
      duawarna();
    }else if(pilih=='2'){
      hapuss();
      bontar();
    }else if(pilih=='3'){
      hapuss();
      martolu();
    }else if(pilih=='4'){
      hapuss();
      sipiso();
    }else if(pilih=='0'){
      hapuss();
      bingkaimenu();
    }else if(pilih=='9'){
      hapuss();
      deswisata();
    }else{
		gotoxy(21,38);printf("!!!");Sleep(200);
      gotoxy(21,38);printf("   ");
      waterfall();
    }

}
////////////////////////////////////////////////////////////////////////////////
// ======================== WATERFALL DUA WARNA ============================= //
////////////////////////////////////////////////////////////////////////////////
void duawarna(){
		for(int x=1;x<=40;x++){
      	gotoxy(58+x,16);textcolor(1);cprintf("%c",219);
         gotoxy(58+x,20);textcolor(1);cprintf("%c",219);
         if(x>=17 && x<=19){
          gotoxy(59,x);textcolor(1);cprintf("%c",219);
          gotoxy(98,x);textcolor(1);cprintf("%c",219);
         }else if(x>=25 && x<=27){
          gotoxy(49,x);textcolor(1);cprintf("%c",219);
          gotoxy(73,x);textcolor(1);cprintf("%c",219);
          gotoxy(84,x);textcolor(1);cprintf("%c",219);
          gotoxy(108,x);textcolor(1);cprintf("%c",219);
          }
       }
       for(int x=1;x<=25;x++){
    		gotoxy(48+x,24);textcolor(1);cprintf("%c",219);
    		gotoxy(48+x,28);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,24);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,28);textcolor(1);cprintf("%c",219);
       }
     gotoxy(62,18);textcolor(0);cprintf(" WATERFALL DUA WARNA (DELI SERDANG)");
     gotoxy(52,26);textcolor(0);cprintf("1. PAKET V I P ");
     gotoxy(87,26);textcolor(0);cprintf("2. PAKET REGULER");
      gotoxy(59,32);textcolor(0);cprintf("PILIH (9) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
      gotoxy(59,33);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
    	gotoxy(21,38);pilih=getche();
  	 	gotoxy(21,38);printf("   ");
      if(pilih=='1'){
      	hapuss();
         vipduawarna();
      }else if(pilih=='2'){
         hapuss();
         regulerduawarna();
      }else if(pilih=='9'){
      	 hapuss();
          waterfall();
      }else if(pilih=='0'){
      	 hapuss();
         bingkaimenu();
      }else{
      	gotoxy(21,38);printf("!!!");Sleep(200);
         gotoxy(21,38);printf("   ");
         duawarna();
      }
}
////////////////////////////////////////////////////////////////////////////////
// ============================ VIP DUA WARNA =============================== //
////////////////////////////////////////////////////////////////////////////////
void vipduawarna(){
       for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET V I P : ");
      gotoxy(57,18);textcolor(0);cprintf("    ~ TIKET MASUK + TRANSPORTASI : Rp.2.500.000/5-ORG");
      gotoxy(57,19);textcolor(0);cprintf("    ~ PEMANDU JALAN DAN WISATA                       ");
      gotoxy(57,20);textcolor(0);cprintf("    ~ DOKUMENTASI                                    ");
      gotoxy(57,21);textcolor(0);cprintf("    ~ SAFETY FACILITY (KOTAK P3K + DLL)              ");
      gotoxy(57,22);textcolor(0);cprintf("    ~ SPOT FOTO                                      ");
      gotoxy(57,23);textcolor(0);cprintf("    ~ + SNACK DAN COCACOLA                           ");
      gotoxy(57,24);textcolor(0);cprintf("    ~ MAKAN SIANG                                    ");
      gotoxy(57,25);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 2 JAM                         ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		duawarna();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   vipduawarna();
 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ========================= REGULER DUA WARNA ============================== //
////////////////////////////////////////////////////////////////////////////////
void regulerduawarna(){
       for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET REGULER : ");
      gotoxy(58,18);textcolor(0);cprintf("    ~ TIKET MASUK + TRANSPORTASI : Rp.1.500.000/5-ORG");
      gotoxy(58,19);textcolor(0);cprintf("    ~ PEMANDU JALAN DAN WISATA                       ");
      gotoxy(58,20);textcolor(0);cprintf("    ~ DOKUMENTASI                                    ");
      gotoxy(58,21);textcolor(0);cprintf("    ~ SAFETY FACILITY (KOTAK P3K)                    ");
      gotoxy(58,22);textcolor(0);cprintf("    ~ SPOT FOTO                                      ");
      gotoxy(58,23);textcolor(0);cprintf("    ~ + COCACOLA                                     ");
      gotoxy(58,24);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 2 JAM                         ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		duawarna();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   regulerduawarna();
 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ========================== WATERFALL AEK BONTAR ========================== //
////////////////////////////////////////////////////////////////////////////////
void bontar(){
		for(int x=1;x<=40;x++){
      	gotoxy(58+x,16);textcolor(1);cprintf("%c",219);
         gotoxy(58+x,20);textcolor(1);cprintf("%c",219);
         if(x>=17 && x<=19){
          gotoxy(59,x);textcolor(1);cprintf("%c",219);
          gotoxy(98,x);textcolor(1);cprintf("%c",219);
         }else if(x>=25 && x<=27){
          gotoxy(49,x);textcolor(1);cprintf("%c",219);
          gotoxy(73,x);textcolor(1);cprintf("%c",219);
          gotoxy(84,x);textcolor(1);cprintf("%c",219);
          gotoxy(108,x);textcolor(1);cprintf("%c",219);
          }
       }
       for(int x=1;x<=25;x++){
    		gotoxy(48+x,24);textcolor(1);cprintf("%c",219);
    		gotoxy(48+x,28);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,24);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,28);textcolor(1);cprintf("%c",219);
       }
     gotoxy(62,18);textcolor(0);cprintf("WATERFALL AEK BONTAR (HUTABALANG)");
     gotoxy(52,26);textcolor(0);cprintf("1. PAKET V I P ");
     gotoxy(87,26);textcolor(0);cprintf("2. PAKET REGULER");
      gotoxy(59,32);textcolor(0);cprintf("PILIH (9) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
      gotoxy(59,33);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
    	gotoxy(21,38);pilih=getche();
  	 	gotoxy(21,38);printf("   ");
      if(pilih=='1'){
      	hapuss();
         vipbontar();
      }else if(pilih=='2'){
         hapuss();
         regulerbontar();
      }else if(pilih=='9'){
      	 hapuss();
          waterfall();
      }else if(pilih=='0'){
      	 hapuss();
         bingkaimenu();
      }else{
      	gotoxy(21,38);printf("!!!");Sleep(200);
         gotoxy(21,38);printf("   ");
         bontar();
      }
}
////////////////////////////////////////////////////////////////////////////////
// ============================= VIP AEK BONTAR ============================= //
////////////////////////////////////////////////////////////////////////////////
void vipbontar(){
       for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET V I P : ");
      gotoxy(57,18);textcolor(0);cprintf("    ~ TIKET MASUK + TRANSPORTASI : Rp.1.500.000/5-ORG");
      gotoxy(57,19);textcolor(0);cprintf("    ~ PEMANDU JALAN DAN WISATA                       ");
      gotoxy(57,20);textcolor(0);cprintf("    ~ DOKUMENTASI                                    ");
      gotoxy(57,21);textcolor(0);cprintf("    ~ SAFETY FACILITY (BAN/PELAMPUNG + KOTAK P3K)    ");
      gotoxy(57,22);textcolor(0);cprintf("    ~ SPOT FOTO                                      ");
      gotoxy(57,23);textcolor(0);cprintf("    ~ SNACK + COCACOLA                               ");
      gotoxy(57,24);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 1 JAM                         ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		bontar();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   vipbontar();
 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ======================= REGULER AER BONTAR =============================== //
////////////////////////////////////////////////////////////////////////////////
void regulerbontar(){
       for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET REGULER : ");
      gotoxy(58,19);textcolor(0);cprintf("    ~ TIKET MASUK + TRANSPORTASI : Rp.750.000/5-ORG ");
      gotoxy(58,20);textcolor(0);cprintf("    ~ PEMANDU JALAN DAN WISATA                      ");
      gotoxy(58,21);textcolor(0);cprintf("    ~ DOKUMENTASI                                   ");
      gotoxy(58,22);textcolor(0);cprintf("    ~ SAFETY FACILITY (KOTAK P3K)                   ");
      gotoxy(58,23);textcolor(0);cprintf("    ~ + COCACOLA                                    ");
      gotoxy(58,24);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 1 JAM                        ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		bontar();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   regulerbontar();
 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ========================= WATERFALL AEK MARTOLU ========================== //
////////////////////////////////////////////////////////////////////////////////
void martolu(){
      for(int x=1;x<=40;x++){
      	gotoxy(58+x,16);textcolor(1);cprintf("%c",219);
         gotoxy(58+x,20);textcolor(1);cprintf("%c",219);
         if(x>=17 && x<=19){
          gotoxy(59,x);textcolor(1);cprintf("%c",219);
          gotoxy(98,x);textcolor(1);cprintf("%c",219);
         }else if(x>=25 && x<=27){
          gotoxy(49,x);textcolor(1);cprintf("%c",219);
          gotoxy(73,x);textcolor(1);cprintf("%c",219);
          gotoxy(84,x);textcolor(1);cprintf("%c",219);
          gotoxy(108,x);textcolor(1);cprintf("%c",219);
          }
       }
       for(int x=1;x<=25;x++){
    		gotoxy(48+x,24);textcolor(1);cprintf("%c",219);
    		gotoxy(48+x,28);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,24);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,28);textcolor(1);cprintf("%c",219);
       }
     gotoxy(62,18);textcolor(0);cprintf(" WATERFALL AEK MARTOLU (TAPTENG)");
     gotoxy(52,26);textcolor(0);cprintf("1. PAKET V I P ");
     gotoxy(87,26);textcolor(0);cprintf("2. PAKET REGULER");
      gotoxy(59,32);textcolor(0);cprintf("PILIH (9) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
      gotoxy(59,33);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
    	gotoxy(21,38);pilih=getche();
  	 	gotoxy(21,38);printf("   ");
      if(pilih=='1'){
      	hapuss();
         vipmartolu();
      }else if(pilih=='2'){
         hapuss();
         regulermartolu();
      }else if(pilih=='9'){
      	 hapuss();
          waterfall();
      }else if(pilih=='0'){
      	 hapuss();
         bingkaimenu();
      }else{
      	gotoxy(21,38);printf("!!!");Sleep(200);
         gotoxy(21,38);printf("   ");
         martolu();
      }
}
////////////////////////////////////////////////////////////////////////////////
// ============================== VIP AEK MARTOLU =========================== //
////////////////////////////////////////////////////////////////////////////////
void vipmartolu(){
       for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET V I P : ");
      gotoxy(57,18);textcolor(0);cprintf("    ~ TIKET MASUK + TRANSPORTASI : Rp.2.500.000/5-ORG");
      gotoxy(57,19);textcolor(0);cprintf("    ~ PEMANDU JALAN DAN WISATA                       ");
      gotoxy(57,20);textcolor(0);cprintf("    ~ DOKUMENTASI                                    ");
      gotoxy(57,21);textcolor(0);cprintf("    ~ SAFETY FACILITY (BAN/PELAMPUNG + KOTAK P3K)    ");
      gotoxy(57,22);textcolor(0);cprintf("    ~ SPOT FOTO                                      ");
      gotoxy(57,23);textcolor(0);cprintf("    ~ SNACK + COCACOLA                               ");
      gotoxy(57,24);textcolor(0);cprintf("    ~ MUSHOLLA DAN RUANG GANTI                       ");
      gotoxy(57,25);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 1 JAM                         ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		martolu();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   vipmartolu();
 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ============================ REGULER AEK MARTOLU ========================= //
////////////////////////////////////////////////////////////////////////////////
void regulermartolu(){
       for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET REGULER : ");
      gotoxy(58,18);textcolor(0);cprintf("    ~ TIKET MASUK + TRANSPORTASI : Rp.1.500.000/5-ORG");
      gotoxy(58,19);textcolor(0);cprintf("    ~ PEMANDU JALAN DAN WISATA                       ");
      gotoxy(58,20);textcolor(0);cprintf("    ~ DOKUMENTASI                                    ");
      gotoxy(58,21);textcolor(0);cprintf("    ~ SAFETY FACILITY (BAN/PELAMPUNG)                ");
      gotoxy(58,22);textcolor(0);cprintf("    ~ + COCACOLA                                     ");
      gotoxy(58,23);textcolor(0);cprintf("    ~ MUSHOLLA DAN RUANG GANTI                       ");
      gotoxy(58,24);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 1 JAM                         ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
            		hapuss();
                  pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		martolu();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   regulermartolu();
 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ======================= WATERFALL SIPISO-PISO ============================ //
////////////////////////////////////////////////////////////////////////////////
void sipiso(){
      for(int x=1;x<=40;x++){
      	gotoxy(58+x,16);textcolor(1);cprintf("%c",219);
         gotoxy(58+x,20);textcolor(1);cprintf("%c",219);
         if(x>=17 && x<=19){
          gotoxy(59,x);textcolor(1);cprintf("%c",219);
          gotoxy(98,x);textcolor(1);cprintf("%c",219);
         }else if(x>=25 && x<=27){
          gotoxy(49,x);textcolor(1);cprintf("%c",219);
          gotoxy(73,x);textcolor(1);cprintf("%c",219);
          gotoxy(84,x);textcolor(1);cprintf("%c",219);
          gotoxy(108,x);textcolor(1);cprintf("%c",219);
          }
       }
       for(int x=1;x<=25;x++){
    		gotoxy(48+x,24);textcolor(1);cprintf("%c",219);
    		gotoxy(48+x,28);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,24);textcolor(1);cprintf("%c",219);
      	gotoxy(83+x,28);textcolor(1);cprintf("%c",219);
       }
     gotoxy(61,18);textcolor(0);cprintf(" WATERFALL SIPISO-PISO(TOBA,SUMUT)");
     gotoxy(52,26);textcolor(0);cprintf("1. PAKET V I P ");
     gotoxy(87,26);textcolor(0);cprintf("2. PAKET REGULER");
      gotoxy(59,32);textcolor(0);cprintf("PILIH (9) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
      gotoxy(59,33);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
    	gotoxy(21,38);pilih=getche();
  	 	gotoxy(21,38);printf("   ");
      if(pilih=='1'){
      	hapuss();
         vipsipiso();
      }else if(pilih=='2'){
         hapuss();
         regulersipiso();
      }else if(pilih=='9'){
      	 hapuss();
          waterfall();
      }else if(pilih=='0'){
      	 hapuss();
         bingkaimenu();
      }else{
      	gotoxy(21,38);printf("!!!");Sleep(200);
         gotoxy(21,38);printf("   ");
         sipiso();
      }
}
////////////////////////////////////////////////////////////////////////////////
// ============================ VIP SIPISO-PISO ============================= //
////////////////////////////////////////////////////////////////////////////////
void vipsipiso(){
       for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET V I P : ");
      gotoxy(57,18);textcolor(0);cprintf("    ~ TIKET MASUK + TRANSPORTASI : Rp.3.500.000/5-ORG");
      gotoxy(57,19);textcolor(0);cprintf("    ~ PEMANDU JALAN DAN WISATA                       ");
      gotoxy(57,20);textcolor(0);cprintf("    ~ DOKUMENTASI                                    ");
      gotoxy(57,21);textcolor(0);cprintf("    ~ SAFETY FACILITY (KOTAK P3K)                    ");
      gotoxy(57,22);textcolor(0);cprintf("    ~ SPOT FOTO                                      ");
      gotoxy(57,23);textcolor(0);cprintf("    ~ + MAKANAN & SUVENIR KHAS TOBA                  ");
      gotoxy(57,24);textcolor(0);cprintf("    ~ SNACK + COCACOLA                               ");
      gotoxy(57,25);textcolor(0);cprintf("    ~ MUSHOLLA DAN RUANG GANTI                       ");
      gotoxy(57,26);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 2 JAM                         ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
               	hapuss();
            		pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		sipiso();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   vipsipiso();
 	           }
}
////////////////////////////////////////////////////////////////////////////////
// =========================== REGULER SIPISO-PISO ========================== //
////////////////////////////////////////////////////////////////////////////////
void regulersipiso(){
       for(int x=1;x<=70;x++){
      	gotoxy(42+x,14);textcolor(9);cprintf("%c",177);
         gotoxy(42+x,28);textcolor(9);cprintf("%c",177);
         if(x>=15 && x<=27){
         	gotoxy(43,x);textcolor(9);cprintf("%c",177);
            gotoxy(112,x);textcolor(9);cprintf("%c",177);
         }
      }
      gotoxy(68,15);textcolor(0);cprintf("FASILITAS DAN HARGA");
      gotoxy(48,17);textcolor(0);cprintf("PAKET REGULER : ");
      gotoxy(57,18);textcolor(0);cprintf("    ~ TIKET MASUK + TRANSPORTASI : Rp.2.000.000/5-ORG");
      gotoxy(57,19);textcolor(0);cprintf("    ~ PEMANDU JALAN DAN WISATA                       ");
      gotoxy(57,20);textcolor(0);cprintf("    ~ DOKUMENTASI                                    ");
      gotoxy(57,21);textcolor(0);cprintf("    ~ SAFETY FACILITY (KOTAK P3K)                    ");
      gotoxy(57,22);textcolor(0);cprintf("    ~ SPOT FOTO                                      ");
      gotoxy(57,23);textcolor(0);cprintf("    ~ + SUVENIR KHAS TOBA                            ");
      gotoxy(57,24);textcolor(0);cprintf("    ~ MUSHOLLA DAN RUANG GANTI                       ");
      gotoxy(57,25);textcolor(0);cprintf("    ~ WAKTU PERJALANAN 2 JAM                         ");
       		gotoxy(60,31);textcolor(0);cprintf(" APAKAH ANDA INGIN MEMESAN (Y/T) ");
            gotoxy(59,33);textcolor(0);cprintf("PILIH (T) UNTUK KEMBALI KE HALAMAN SEBELUMNYA ");
            gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
            gotoxy(21,38);pilih=getche();
            gotoxy(21,38);printf("    ");
            	if(pilih=='y' || pilih=='Y'){
               	hapuss();
            		pemesanan();
            	}else if(pilih=='t' || pilih=='T'){
            		hapuss();
            		sipiso();
            	}else if(pilih=='0'){
               	hapuss();
            		bingkaimenu();
            	}else{
                   gotoxy(21,38);printf("!!!");Sleep(200);
                   gotoxy(21,38);printf("   ");
                   regulersipiso();
 	           }
}
////////////////////////////////////////////////////////////////////////////////
// ============================== ABOUT APK ================================= //
////////////////////////////////////////////////////////////////////////////////
void about(){
      for(int x=1;x<=40;x++){
      	gotoxy(58+x,14);textcolor(1);cprintf("%c",219);
         gotoxy(58+x,18);textcolor(1);cprintf("%c",219);
         for(int y=1;y<=47;y++){
         gotoxy(33+y+x,20);textcolor(1);cprintf("%c",205);
         gotoxy(33+y+x,22);textcolor(1);cprintf("%c",205);
         gotoxy(33+y+x,24);textcolor(1);cprintf("%c",205);
         gotoxy(33+y+x,26);textcolor(1);cprintf("%c",205);
         gotoxy(33+y+x,28);textcolor(1);cprintf("%c",205);
         gotoxy(33+y+x,30);textcolor(1);cprintf("%c",205);
         gotoxy(33+y+x,32);textcolor(1);cprintf("%c",205);
      	}
         if(x>=15 && x<=17){
          	gotoxy(59,x);textcolor(1);cprintf("%c",219);
          	gotoxy(98,x);textcolor(1);cprintf("%c",219);
      	}else if(x>=20 && x<=32){
         	gotoxy(34,x);textcolor(1);cprintf("%c",186);
            gotoxy(121,x);textcolor(1);cprintf("%c",186);
         }
      }
      gotoxy(65,16);textcolor(0);cprintf("A L A D D I N - T R A V E L");
      char t[]={"Aladdin Travel adalah sebuah aplikasi yang menyediakan berbagai tempat wisata"};
      	for(int a=0;a<strlen(t);a++){
         gotoxy(40+a,21);textcolor(0);cprintf("%c",t[a]);Sleep(3);
         }
      char u[]={"yang menarik kepada para traveller yang ingin berpergian menjelajahi berbagai"};
      	for(int a=0;a<strlen(u);a++){
         gotoxy(36+a,23);textcolor(0);cprintf("%c",u[a]);Sleep(3);
         }
      char l[]={"macam wisata yang unik dan menakjubkan bersama keluarga dan teman-teman. Aladdin"};
      	for(int a=0;a<strlen(l);a++){
         gotoxy(36+a,25);textcolor(0);cprintf("%c",l[a]);Sleep(3);
         }
      char i[]={"Travel berdiri sejak tahun 2020, dan mulai berekspensi ke sejumlah wilayah di "};
      	for(int a=0;a<strlen(i);a++){
         gotoxy(36+a,27);textcolor(0);cprintf("%c",i[a]);Sleep(3);
         }
      char s[]={"Indonesia untuk membantu para traveller yang ingin berpergian liburan ke beberapa"};
      	for(int a=0;a<strlen(s);a++){
         gotoxy(36+a,29);textcolor(0);cprintf("%c",s[a]);Sleep(3);
         }
      char y[]={"daerah yang sudah di sediakan oleh Aladdin Travel."};
      	for(int a=0;a<strlen(y);a++){
         gotoxy(36+a,31);textcolor(0);cprintf("%c",y[a]);Sleep(3);
         }
         gotoxy(59,34);textcolor(0);cprintf("PILIH (0) UNTUK KEMBALI KE MENU UTAMA ");
         gotoxy(21,38);pilih=getche();
         gotoxy(21,38);printf("    ");
         	if(pilih=='0'){
               	hapuss();
                  bingkaimenu();
            }else{
            	gotoxy(21,38);printf("!!!");Sleep(200);
               gotoxy(21,38);printf("   ");
                   about();
            }

}
////////////////////////////////////////////////////////////////////////////////
// ======================= PEMESANAN ======================================== //
////////////////////////////////////////////////////////////////////////////////
void pemesanan(){
	for(int x=1;x<=25;x++){
   	gotoxy(44+x,14);textcolor(9);cprintf("%c",205);
      gotoxy(44+x,17);textcolor(9);cprintf("%c",205);
      gotoxy(44+x,20);textcolor(9);cprintf("%c",205);
      gotoxy(44+x,23);textcolor(9);cprintf("%c",205);
      gotoxy(44+x,26);textcolor(9);cprintf("%c",205);
      gotoxy(44+x,29);textcolor(9);cprintf("%c",205);
      gotoxy(44+x,32);textcolor(9);cprintf("%c",205);
      gotoxy(44+x,35);textcolor(9);cprintf("%c",205);
   }
   for(int x=1;x<40;x++){
   	gotoxy(74+x,14);textcolor(9);cprintf("%c",205);
      gotoxy(74+x,17);textcolor(9);cprintf("%c",205);
      gotoxy(74+x,20);textcolor(9);cprintf("%c",205);
      gotoxy(74+x,23);textcolor(9);cprintf("%c",205);
      gotoxy(74+x,26);textcolor(9);cprintf("%c",205);
      gotoxy(74+x,29);textcolor(9);cprintf("%c",205);
      gotoxy(74+x,32);textcolor(9);cprintf("%c",205);
      gotoxy(74+x,35);textcolor(9);cprintf("%c",205);
      gotoxy(72,15);textcolor(9);cprintf("%c",205);
      gotoxy(72,18);textcolor(9);cprintf("%c",205);
      gotoxy(72,21);textcolor(9);cprintf("%c",205);
      gotoxy(72,24);textcolor(9);cprintf("%c",205);
      gotoxy(72,27);textcolor(9);cprintf("%c",205);
      gotoxy(72,30);textcolor(9);cprintf("%c",205);
      gotoxy(72,33);textcolor(9);cprintf("%c",205);
      if(x>14 && x<17 || x>17 && x<20 || x>20 && x<23 || x>23 && x<26){
      gotoxy(44,x);textcolor(9);cprintf("%c",186);
      gotoxy(70,x);textcolor(9);cprintf("%c",186);
      gotoxy(74,x);textcolor(9);cprintf("%c",186);
      gotoxy(114,x);textcolor(9);cprintf("%c",186);
   	}else if(x>26 && x<29 || x>29 && x<32 || x>32 && x<35){
      gotoxy(44,x);textcolor(9);cprintf("%c",186);
      gotoxy(70,x);textcolor(9);cprintf("%c",186);
      gotoxy(74,x);textcolor(9);cprintf("%c",186);
      gotoxy(114,x);textcolor(9);cprintf("%c",186);
   	}
   }
   	Pemesanan2();
}

void Pemesanan2(){
       gotoxy(48,16);textcolor(0);cprintf("NAMA PEMESAN");
       gotoxy(48,19);textcolor(0);cprintf("NO HANDPHONE");
       gotoxy(48,22);textcolor(0);cprintf("ALAMAT ");
       gotoxy(48,25);textcolor(0);cprintf("NO IDENTITAS");
       gotoxy(48,28);textcolor(0);cprintf("TANGGAL PEMESANAN");
       gotoxy(48,31);textcolor(0);cprintf("TUJUAN WISATA");
       gotoxy(48,34);textcolor(0);cprintf("PAKET");
       valnama();
       Valnohp();
       ValAlamat();
       ValNik();
       Tanggal();
       tujuandanpaket();
}
////////////////////////////////////////////////////////////////////////////////
// ============================ PENGECEKAN ================================== //
////////////////////////////////////////////////////////////////////////////////
void konfirmasi(){
   char a;
	gotoxy(66,36);textcolor(0);cprintf("PRESS (Y) IF YOU FINISH ");
   gotoxy(93,36);a=getche();
   if(a == 'y' || a == 'Y'){
   	cek++;
      hapuss();
      bingkaimenu();
   }else if(a=='n' || a=='N'){
   	hapuss();
      bingkaimenu();
   }else{
      konfirmasi();
   }
}
////////////////////////////////////////////////////////////////////////////////
// ========================== TUJUAN DAN PAKET WISATA ======================= //
////////////////////////////////////////////////////////////////////////////////
void tujuandanpaket(){
       long uang,kembalian;
       gotoxy(76,31);gets(tujuan[cek]);
       gotoxy(76,31);textcolor(0);cprintf("%s",strupr(tujuan[cek]));
       gotoxy(76,34);gets(paket[cek]);
       gotoxy(76,34);textcolor(0);cprintf("%s",strupr(paket[cek]));
        	if(strcmp(tujuan[cek],"HOLLYWOOD BEACH")==0 && strcmp(paket[cek],"VIP")==0){
            hapuss();
          	pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_vip[0]);
            total[cek] = harga_vip[0];
         }else if(strcmp(tujuan[cek],"HOLLYWOOD BEACH")==0 && strcmp(paket[cek],"REGULER")==0){
         	hapuss();
            pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_reguler[0]);
            total[cek] = harga_reguler[0];
         }else if(strcmp(tujuan[cek],"NIHIWATU BEACH")==0 && strcmp(paket[cek],"VIP")==0){
         	hapuss();
            pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_vip[1]);
            total[cek] = harga_vip[1];
         }else if(strcmp(tujuan[cek],"NIHIWATU BEACH")==0 && strcmp(paket[cek],"REGULER")==0){
         	hapuss();
            pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_reguler[1]);
            total[cek] = harga_reguler[1];
         }else if(strcmp(tujuan[cek],"PANDAWA BEACH")==0 && strcmp(paket[cek],"VIP")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_vip[2]);
            total[cek] = harga_vip[2];
         }else if(strcmp(tujuan[cek],"PANDAWA BEACH")==0 && strcmp(paket[cek],"REGULER")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_reguler[2]);
            total[cek] = harga_reguler[2];
         }else if(strcmp(tujuan[cek],"KALIMANTUNG ISLAND")==0 && strcmp(paket[cek],"VIP")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_vip[3]);
            total[cek] = harga_vip[3];
         }else if(strcmp(tujuan[cek],"KALIMANTUNG ISLAND")==0 && strcmp(paket[cek],"REGULER")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_reguler[3]);
            total[cek] = harga_reguler[3];
         }else if(strcmp(tujuan[cek],"MURSALA ISLAND")==0 && strcmp(paket[cek],"VIP")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_vip[4]);
            total[cek] = harga_vip[4];
         }else if(strcmp(tujuan[cek],"MURSALA ISLAND")==0 && strcmp(paket[cek],"REGULER")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_reguler[4]);
            total[cek] = harga_reguler[4];
         }else if(strcmp(tujuan[cek],"PONCAN ISLAND")==0 && strcmp(paket[cek],"VIP")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_vip[5]);
            total[cek] = harga_vip[5];
         }else if(strcmp(tujuan[cek],"PONCAN ISLAND")==0 && strcmp(paket[cek],"REGULER")==0){
            hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_reguler[5]);
            total[cek] = harga_reguler[5];
         }else if(strcmp(tujuan[cek],"PUTRI ISLAND")==0 && strcmp(paket[cek],"VIP")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_vip[6]);
            total[cek] = harga_vip[6];
         }else if(strcmp(tujuan[cek],"PUTRI ISLAND")==0 && strcmp(paket[cek],"REGULER")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_reguler[6]);
            total[cek] = harga_reguler[6];
         }else if(strcmp(tujuan[cek],"WATERFALL DUA WARNA")==0 && strcmp(paket[cek],"VIP")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_vip[7]);
            total[cek] = harga_vip[7];
         }else if(strcmp(tujuan[cek],"WATERFALL DUA WARNA")==0 && strcmp(paket[cek],"REGULER")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_reguler[7]);
            total[cek] = harga_reguler[7];
         }else if(strcmp(tujuan[cek],"WATERFALL AEK BONTAR")==0 && strcmp(paket[cek],"VIP")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_vip[8]);
            total[cek] = harga_vip[8];
         }else if(strcmp(tujuan[cek],"WATERFALL AEK BONTAR")==0 && strcmp(paket[cek],"REGULER")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_reguler[8]);
            total[cek] = harga_reguler[8];
         }else if(strcmp(tujuan[cek],"WATERFALL AEK MARTOLU")==0 && strcmp(paket[cek],"VIP")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_vip[9]);
            total[cek] = harga_vip[9];
         }else if(strcmp(tujuan[cek],"WATERFALL AEK MARTOLU")==0 && strcmp(paket[cek],"REGULER")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_reguler[9]);
            total[cek] = harga_reguler[9];
         }else if(strcmp(tujuan[cek],"WATERFALL SIPISO PISO")==0 && strcmp(paket[cek],"VIP")==0){
         	hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_vip[10]);
            total[cek] = harga_vip[10];
         }else if(strcmp(tujuan[cek],"WATERFALL SIPISO PISO")==0 && strcmp(paket[cek],"REGULER")==0){
            hapuss();pembayaran();
            gotoxy(83,23);textcolor(0);cprintf("%ld",harga_reguler[10]);
            total[cek] = harga_reguler[10];
         }else{
         	gotoxy(76,31);printf("                       ");
            gotoxy(76,34);printf("                       ");
         	tujuandanpaket();
         }
         bool c=true;
         do{
       	gotoxy(83,25);cscanf("%d",&uang);
         	if(uang > total[cek]){
         		kembalian=uang-total[cek];
   				gotoxy(83,27);cprintf("%d",kembalian);
               c = false;
         	}else if(uang == total[cek]){
            	gotoxy(83,27);cprintf("Uang Anda Pas");
            	c = false;
         	}else{
            	gotoxy(83,27);cprintf("Uang Tidak Cukup");
               gotoxy(83,27);cprintf("                   ");
               gotoxy(83,25);cprintf("                   ");
               c = true;
         	}
         }while(c);
         konfirmasi();
}
////////////////////////////////////////////////////////////////////////////////
// ============================= VOID PEMBAYARAN ============================ //
////////////////////////////////////////////////////////////////////////////////
void pembayaran(){
    for(int a=1;a<=70;a++){
	gotoxy(42+a,17);textcolor(1);cprintf("%c",177);
   gotoxy(42+a,21);textcolor(1);cprintf("%c",177);
   gotoxy(42+a,30);textcolor(1);cprintf("%c",177);
   	if(a>17 && a<30){
      gotoxy(43,a);textcolor(1);cprintf("%c",177);
      gotoxy(112,a);textcolor(1);cprintf("%c",177);
      }
   }

   gotoxy(45,19);textcolor(0);cprintf("                       TRANSAKSI PEMBAYARAN                    ");Sleep(50);
   gotoxy(48,23);textcolor(0);cprintf("  +TOTAL YANG HARUS DI BAYAR  : Rp.                            ");Sleep(50);
   gotoxy(48,25);textcolor(0);cprintf("  +MASUKKAN UANG ANDA         : Rp.                            ");Sleep(50);
   gotoxy(48,27);textcolor(0);cprintf("  +KEMBALIAN ANDA             : Rp.                            ");Sleep(50);
}
////////////////////////////////////////////////////////////////////////////////
// ========================= VALIDASI NAMA ================================== //
////////////////////////////////////////////////////////////////////////////////
int validasiNama(char a[]){
	int valid;
   if(!(a[0] >= 'a' && a[0] <= 'z' || a[0] >= 'A' && a[0] <= 'Z')){
   	valid=0;
      return valid;
   }
	for (int i=0; i<strlen(a); i++){
   	if(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z'){
      	valid = 1;
      }else if(a[strlen(a)-1] == ' ' || a[strlen(a)-1] == '\'' || a[strlen(a)-1] == '-'){
   		valid = 0;
      	break;
      }else if(a[i] == ' ' && a[i+1] != ' ' || a[i+1] == '\'' && a[i+1] != '\'' || a[i] == '-' && a[i+1] != '-'){
      	valid = 1;
      }else{
      	valid = 0;
      	break;
      }
	}
	return valid;
}

void valnama(){
	do{
      	gotoxy(76,16);cprintf("Inputan Harus Berupa Karakter Huruf!!");Sleep(1000);
      	gotoxy(76,16);printf("                                      ");
			gotoxy(76,16);gets(namapemesan[cek]);Sleep(50);
        		if(validasiNama(namapemesan[cek])==0){
            	gotoxy(76,16);textcolor(0);cprintf("YANG ANDA INPUTKAN SALAH");Sleep(800);
      		}
   	}while(validasiNama(namapemesan[cek])==0);
      	gotoxy(76,16);textcolor(0);cprintf("%s",strupr(namapemesan[cek]));


}
////////////////////////////////////////////////////////////////////////////////
// ========================= VALIDASI NO HP ================================= //
////////////////////////////////////////////////////////////////////////////////
bool ValHp(char hp[]){
int test = 0;
	if(!(strlen(hp) >= 11 && strlen(hp) <= 13)){
   	test++;
   }
	for(int i = 0; i<strlen(hp); i++){
   	if(!(hp[i] >= '0' && hp[i] <= '9') || hp[0] != '0' || hp[1] != '8'){
      	test++;
      }
   }
   if(test > 0){
   	return false;
   }else{
   	return true;
   }
}

void Valnohp(){
		do{
       	gotoxy(76,19);textcolor(0);cprintf("The Number Call to (11-13 digit)");Sleep(1000);
         gotoxy(76,19);printf("                                ");
         gotoxy(76,19);gets(hp[cek]);
         if(ValHp(hp[cek])==true){
         	gotoxy(76,19);textcolor(0);cprintf("%s",hp[cek]);
   		}else{
         	gotoxy(76,19);printf("                    ");
   		}
	}while(ValHp(hp[cek])!= true);

}
////////////////////////////////////////////////////////////////////////////////
// ============================ VALIDASI ALAMAT ============================= //
////////////////////////////////////////////////////////////////////////////////
int validasiAlamat(char alamat[]){
	int cek1 = 0;
   if(strlen(alamat)==0){
   	cek1=1;
   }
   for(int a=0;a<strlen(alamat);a++){
   	if(alamat[a]>='a' && alamat[a]<='z' || alamat[a]>='A' && alamat[a]<='Z'|| alamat[a]>='0' && alamat[a]<='9'){
          continue;
      }
      if(alamat[strlen(alamat)-1]==' ' || alamat[strlen(alamat)-1]==',' || alamat[strlen(alamat)-1]=='.' || alamat[strlen(alamat)-1]=='/' ){
      	cek1++;
      }
      if(alamat[a]=='/' && alamat[a+1]!='/' ||alamat[a]==' ' && alamat[a+1]!=' ' || alamat[a]=='.' && alamat[a+1]!='.' || alamat[a]==',' && alamat[a+1]!=','){
      	continue;
      }
          cek1++;
   }
      return cek1;
}

void ValAlamat(){
	do{
   	gotoxy(76,22);cprintf("Input Symbol Only From (. , /)");Sleep(1000);
      gotoxy(76,22);printf("                               ");
      gotoxy(76,22);gets(alamat[cek]);Sleep(50);
   	}while(validasiAlamat(alamat[cek])!=0);
      gotoxy(76,22);textcolor(0);cprintf("%s",alamat[cek]);
}
////////////////////////////////////////////////////////////////////////////////
// ========================== VALIDASI NIK ================================== //
////////////////////////////////////////////////////////////////////////////////

int valnik(char nik[]){
    int test=0;
   if(!(strlen(nik)==16)){
   	test++;
   }
	for(int i = 0; i<strlen(nik); i++){
   	if(!(nik[i] >= '0' && nik[i] <= '9')){
      	test++;
      }
   }
   if(test > 0){
   	return false;
   }else{
   	return true;
   }
}
void ValNik(){
        do{
      	gotoxy(76,25);cprintf("The Number call Must 16 digit");Sleep(1000);
      	gotoxy(76,25);printf("                                 ");
      	gotoxy(76,25);gets(nik[cek]);Sleep(50);
         int cek2=0;
         for(int i=0; i<cek; i++){
         	if(strcmp(nik[cek],nik[cek+1])==0 || strcmp(nik[cek],nik[cek-1])==0){
            	cek2++;
            }
         }

         if(valnik(nik[cek])==true){
         	if(cek2 == 0){
            	gotoxy(76,25);textcolor(0);cprintf("%s",nik[cek]);
            }else{
            	ValNik();
            }
         }else{
         	gotoxy(76,25);printf("                     ");
         }
         }while(valnik(nik[cek]) != true);
}
////////////////////////////////////////////////////////////////////////////////
// ========================== VALIDASI TANGGAL ============================== //
////////////////////////////////////////////////////////////////////////////////
bool ValTanggal(char tgl[],char bln[],char thn[]){
	int tanggal,bulan,tahun;
   int test = 0;

   for(int i =0; i<strlen(tgl); i++){
   	if(!(tgl[i] >= '0' && tgl[i] <= '9')){
      	test++;
      }
   }
   for(int i =0; i<strlen(bln); i++){
   	if(!(bln[i] >= '0' && bln[i] <= '9')){
      	test++;
      }
   }
   for(int i =0; i<strlen(thn); i++){
       if(!(thn[i] >= '0' && thn[i] <= '9')){
      	test++;
      }
   }

   	tanggal=atoi(tgl);
      bulan=atoi(bln);
      tahun=atoi(thn);

   if(tahun == 0 || tahun <= 2019){
   	test++;
   }

   if((tahun % 400 == 0 || tahun % 4 == 0) && tahun % 100 != 0){
   	if(bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12){
      	if(!(tanggal >= 1 && tanggal <= 31)){
         	test++;
         }
      }else if(bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11){
         if(!(tanggal >= 1 && tanggal <= 30)){
         	test++;
         }
      }else if(bulan == 2){
         if(!(tanggal >= 1 && tanggal <= 29)){
         	test++;
         }
      }else{
      	test++;
      }
   }else if(!((tahun % 400 == 0 || tahun % 4 == 0) && tahun % 100 != 0)){
      if(bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12){
      	if(!(tanggal >= 1 && tanggal <= 31)){
         	test++;
         }
      }else if(bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11){
         if(!(tanggal >= 1 && tanggal <= 30)){
         	test++;
         }
      }else if(bulan == 2){
         if(!(tanggal >= 1 && tanggal <= 28)){
         	test++;
         }
      }else{
      	test++;
      }
   }else {
   	test++;
   }
   if(test > 0){
   	return false;
   }else{
   	return true;
   }

}

void Tanggal(){
	do{
       	gotoxy(76,28);gets(tgl[cek]);
   		gotoxy(81,28);gets(bln[cek]);
   		gotoxy(86,28);gets(thn[cek]);
		if(ValTanggal(tgl[cek],bln[cek],thn[cek]) ==  true && strlen(tgl[cek]) <= 2 && strlen(bln[cek]) <= 2 && strlen(thn[cek]) == 4){
         gotoxy(76,28);textcolor(0);cprintf("%s",tgl[cek]);
   		gotoxy(81,28);textcolor(0);cprintf("%s",bln[cek]);
   		gotoxy(86,28);textcolor(0);cprintf("%s",thn[cek]);
      }else{
         gotoxy(76,28);printf("                       ");
		}
	}while(ValTanggal(tgl[cek],bln[cek],thn[cek]) !=  true);
}
////////////////////////////////////////////////////////////////////////////////
// ============================== DATA PENGUNJUNG =========================== //
////////////////////////////////////////////////////////////////////////////////
void datapengunjung(){
		for(int a=1;a<=80;a++){
      	gotoxy(39+a,14);textcolor(1);cprintf("%c",205);
         gotoxy(39+a,17);textcolor(1);cprintf("%c",205);
         gotoxy(39+a,35);textcolor(1);cprintf("%c",205);
         if(a>14 && a<35){
         gotoxy(40,a);textcolor(1);cprintf("%c",186);
         gotoxy(52,a);textcolor(1);cprintf("%c",186);
         gotoxy(119,a);textcolor(1);cprintf("%c",186);
         }
      }
       gotoxy(43,16);textcolor(0);cprintf("TANGGAL");
       gotoxy(74,16);textcolor(0);cprintf("DATA PENGUNJUNG");

      int b=8;
      for(int i = 0; i<cek; i++){
      	gotoxy(41,10+b);textcolor(0);cprintf("%s/%s/%s",tgl[i], bln[i], thn[i] );
         gotoxy(54,10+b);textcolor(0);cprintf("NAMA          : %s",namapemesan[i]);
       	gotoxy(54,11+b);textcolor(0);cprintf("ALAMAT        : %s",alamat[i]);
       	gotoxy(54,12+b);textcolor(0);cprintf("NO HP         : %s",hp[i]);
       	gotoxy(54,13+b);textcolor(0);cprintf("NO IDENTITAS  : %s",nik[i]);
       	gotoxy(54,14+b);textcolor(0);cprintf("TUJUAN WISATA : %s",tujuan[i]);
       	gotoxy(54,15+b);textcolor(0);cprintf("PAKET         : %s",paket[i]);
         b *= 2;
   	}
      gotoxy(66,37);textcolor(0);cprintf("PRESS ANY KEY FOR MENU !!!");
      gotoxy(93,37);pilih=getche();
     	hapuss();
     	bingkaimenu();

}
////////////////////////////////////////////////////////////////////////////////
// ================================ LAPORAN KEUANGAN ======================== //
////////////////////////////////////////////////////////////////////////////////
void laporankeuangan(){
       for(int a=1;a<=80;a++){
      	gotoxy(39+a,14);textcolor(1);cprintf("%c",205);
         gotoxy(39+a,17);textcolor(1);cprintf("%c",205);
         gotoxy(39+a,32);textcolor(1);cprintf("%c",205);
         gotoxy(39+a,35);textcolor(1);cprintf("%c",205);
         if(a>14 && a<35){
         gotoxy(40,a);textcolor(1);cprintf("%c",186);
         gotoxy(52,a);textcolor(1);cprintf("%c",186);
         gotoxy(119,a);textcolor(1);cprintf("%c",186);
         }
      }
      int total_keseluruhan=0;
       int b=2;
       gotoxy(43,16);textcolor(0);cprintf("TANGGAL");
       gotoxy(74,16);textcolor(0);cprintf("LAPORAN KEUANGAN");
       for(int i=0; i<cek; i++){
         if(i == cek-1){
         	gotoxy(42,16+b);textcolor(0);cprintf("%s/%s/%s",tgl[i],bln[i],thn[i]);
         	gotoxy(55,16+b);textcolor(0);cprintf("Rp. %d",total[i]);
         	b += 2;
         	total_keseluruhan += total[i];
            gotoxy(55,34);textcolor(0);cprintf("Total Pendapatan : Rp. %d",total_keseluruhan);
         }else{
         	total_keseluruhan += total[i];
         	gotoxy(42,16+b);textcolor(0);cprintf("%s/%s/%s",tgl[i],bln[i],thn[i]);
         	gotoxy(55,16+b);textcolor(0);cprintf("Rp. %d",total[i]);
         	b += 2;
         }
       }
          gotoxy(66,37);textcolor(0);cprintf("PRESS ANY KEY FOR MENU !!!");
          gotoxy(93,37);pilih=getche();
       		hapuss();
       		bingkaimenu();
}
main(){
  welcome();
getch();
}
