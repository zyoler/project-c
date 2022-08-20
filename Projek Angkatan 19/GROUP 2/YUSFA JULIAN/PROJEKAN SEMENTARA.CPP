//===========================================================================\\
//            				       ATM SEDERHANA 	                             \\
//			   																                 \\
//          				      BY YUSFA JULIAN    	                          \\
//                                                                           \\
//            										                                   \\
//            					 					                                   \\
//===========================================================================\\
//==============================	LIBLARY ====================================\\
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

//==============================	 VOID   ====================================\\

void menu();                                 int validasisaldo(char saldo[]);
void loding();                               int validasinik(char nik[]);
void kotaktampilan();                        int validasipin(char pin[]);
void bingkaimenu();                          int validasibank(char bank);
void bingkaidaftar();                        int validasihuruf(char nama[]);
void bingkaipin();                           int validasialamat(char alamat[]);
void bingkaimenulogin();                     int validasinorek(char rekening[]);
void logo();                                 int validasiumur(char umur[]);
void warna();
void hapus();
void login();
void menulogin();
void daftar();
void pilihbahasa();
void penarikan();
void jumlahlain();
void uang();
void strukpenarikan(int a);
void inforek();
void infosaldo();
void transfer();
void transfer1();
void transfer2();
void transfer3();
void transfer4();
void pembayaran();
void struk();
void keluar();
void loding();
void tentang();

//==========================	 Variabel global   ============================\\

char nama[50];                                     int nominal=0;
char nama1[50];                                    int sald;
char alamat[50];                                   int tarik;
char nik[16];                                      int x=0;
char umur[2];                                      int sald1;
char bank[10];                                     int saldo0;
char bank1[50];
char bank2[50];
char pin[6];
char pin1[6];
char saldo[50];
char rekening[10];
char rekening1[10];
char rekening2[10];
char bayar[50];
char pilih;
char data[50][50][50];
char sld[50];
char rek[10];
char sld1[50];
char saldo00[50];
struct tm *waktu;

FILE *bebas;

FILE *data_add;


//============================================================================\\
//=============================	validasi nik ================================\\
//============================================================================\\

int validasinik(char nik[]){
    int cek,cek1;
	for(int x=0;nik[x]!=NULL;x++){
   	if(!(nik[x]>='0'&&nik[x]<='9')){
      	cek1 = 1;
      }
   }
      if(nik[0]==NULL||cek1==1){
      	cek = 1;
      }else if(strlen(nik)>=1&&strlen(nik)<=15||strlen(nik)>16||strlen(nik)<1){
      	cek =  0;
      }else{
      	if(strlen(nik)==16){
         	cek=4;
         }
      }
      return cek;
}

//============================================================================\\
//==============================	validasi nama ===============================\\
//============================================================================\\

int validasihuruf(char nama[]){
	int cek=0; int cek1=0;
   	if(nama[0]==' '||nama[strlen(nama)-1]==' '||nama[0]=='\''||nama[strlen(nama)-1]=='\''||nama[0]=='-'||nama[strlen(nama)-1]=='-'){
      	cek1 = 1;
      	return cek1;
    	}
      if(strlen(nama)<3||strlen(nama)>25){
      	cek1 =1;
         return cek1;
      }
	for(int x=0;x<strlen(nama);x++){
 		if(!(nama[x]>='a'&&nama[x]<='z'||nama[x]>='A'&&nama[x]<='Z'||nama[x]==' '&&nama[x+1]!=' '||nama[x]=='\''&&nama[x+1]!='\''&&nama[x-1]!=' '&&nama[x+1]!=' '||nama[x]=='-'&&nama[x+1]!='-'&&nama[x-1]!=' '&&nama[x+1]!=' ')){
    		cek = 1;
  		}
	}
   return cek;
}

//============================================================================\\
//==============================	validasi alamat =============================\\
//============================================================================\\

int validasialamat(char alamat[]){
   int cek=0,cek1=0;
   if(!(alamat[0]>='a'|| alamat[0]<='z'||alamat[0]>='A' || alamat[0]<='Z')){
   	cek1 = 0;
      return cek1;
   }
   if(strlen(alamat)<10){
   	cek = 0;
      return cek1;
   }
	for(int x=0;x<strlen(alamat);x++){
 		if(alamat[x]>='a'&&alamat[x]<='z'||alamat[x]>='A'&&alamat[x]<='Z'){
    		cek++;
 		}
      if(alamat[x]=='-'&&alamat[x+1]!='-'&&alamat[x-1]!=' '||alamat[x]==','&&alamat[x+1]!=','&&alamat[x-1]!=' '||alamat[x]==' '&&alamat[x+1]!=' '||alamat[x]=='.'&&alamat[x+1]!='.'&&alamat[x-1]!=' '){
      	cek++;
      }
      if(alamat[x]>='0'&&alamat[x]<='9'){
      	cek++;
      }
	}
   if(cek == strlen(alamat)){
   	cek = 1;
   	return cek;
   }else{
   	return cek;
   }

}

//============================================================================\\
//============================== validasi Umur 	==============================\\
//============================================================================\\

int validasiumur(char umur[]){
  int cek=0,cek1=0;
  for(int x=0;umur[x]!=NULL;x++){
  	if(!(umur[0]>='0'&&umur[0]<='9'&&umur[1]>='0'&&umur[1]<='9')){
   	cek1 = 1;                                                                                                                                                                                                                                                             

   }
  }
  if(cek1 == 1){
  	return cek1;
  }
  else{

  	if((umur[0]==48 && umur[1]==48)|| cek1==1 || umur[0]==NULL){
  		cek = 1;
  	}
  	if(umur[0]!='0'&&umur[1]!='0'){
  		cek = 0;
  	}
  	if(strlen(umur)>1&&strlen(umur)<2||strlen(umur)>2&&strlen(umur)<1){
  		cek = 0;
  	}
  	if(strlen(umur)==2 && umur[0]!= 48){
      	cek = 4;
  	}
  }
    return cek;

}

//============================================================================\\
//================================ validasi pin	==============================\\
//============================================================================\\

int validasipin(char pin[]){
  int cek,cek1;
	for(int x=0;pin[x]!=NULL;x++){
   	if(!(pin[x]>='0'&&pin[x]<='9')){
      	cek1 = 1;
   	}
   }
   if(pin[0]==NULL||cek1==1){
   	cek = 1;
   }else if(strlen(pin)>=1&&strlen(pin)<=5||strlen(pin)>6||strlen(pin)<0){
   	cek = 0;
   }else{
   	if(strlen(pin)==6){
      	cek = 4;
   	}
   }
   return cek;
}

//============================================================================\\
//================================ validasi norek	===========================\\
//============================================================================\\

int validasinorek(char rekening[]){
  int cek,cek1;
	for(int x=0;rekening[x]!=NULL;x++){
   	if(!(rekening[x]>='0'&&rekening[x]<='9')){
      	cek1 = 1;
   	}
   }
   if(rekening[0]==NULL||cek1==1){
   	cek = 1;
   }else if(strlen(rekening)>=1&&strlen(rekening)<=9||strlen(rekening)>10||strlen(rekening)<0){
   	cek = 0;
   }else{
   	if(strlen(rekening)==10){
      	cek = 4;
   	}
   }
   return cek;
}

//============================================================================\\
//==============================	validasi bank ===============================\\
//============================================================================\\

int validasibank(char bank[]){
	int cek=0; int cek1=0;
   	if(bank[0]==' '||bank[strlen(bank)-1]==' '){
      	cek1 = 0;
    	}else if(strcmp(bank,"BRI")==0||strcmp(bank,"BNI")==0||strcmp(bank,"BCA")==0||strcmp(bank,"MANDIRI")==0){
         cek1 = 4;
      }
      return cek1;
	for(int x=0;x<strlen(bank);x++){
 		if(!(bank[x]>='A'&&bank[x]<='Z')){
    		cek = 4;
  		}
	}
   return cek;
}

//============================================================================\\
//==============================	validasi saldo ===============================\\
//============================================================================\\

int validasisaldo(char saldo[]){
	int cek=0;	int cek1=0;
	for(int x=0;saldo[x]!=NULL;x++){
 		if(!(saldo[x]>='0'&&saldo[x]<='9')||saldo[0] == 48){
    		cek1 = 1;
  		}
	}
   if(cek1 == 1){
   	return cek1;
   }
   else{
   	if(saldo[0]==NULL||cek1==1){
   		cek = 1;
   	}else if(strlen(saldo) >= 6){
   		cek = 0;
   	}else{
      	cek = 4;
   	}
   }
   return cek;
}

//============================================================================\\
//=================================	MENU UTAMA ===============================\\
//============================================================================\\

void menu(){
bingkaimenu();
system("COLOR 0");
textcolor(7);
	gotoxy(83,29);printf("  MENU  \a");
   gotoxy(25,32);printf("1. DAFTAR");
   gotoxy(83,38);printf("2. LOGIN");
   gotoxy(135,32);printf("3. TENTANG APK");
   gotoxy(82,31);cprintf(" CLIK ENTER ");
   gotoxy(85,32);cprintf(" UNTUK ");
   gotoxy(80,33);cprintf(" MATIKAN SYSTEM ");
   gotoxy(75,35);cprintf("  MASUKAN PILIHAN ANDA :  ");
   do{
   gotoxy(100,35);pilih=getche();Sleep(400);
      if(pilih=='1'){
      clrscr();
      	daftar();
      }else if(pilih=='2'){
      clrscr();
       	login();
      }else if(pilih=='3'){
      clrscr();
      	tentang();
      }else if(pilih==13){
       system("shutdown /p");
      }
	}while(true);
}

//============================================================================\\
//===================================	DAFTAR	==============================\\
//============================================================================\\

void daftar(){
hapus();
clrscr();
bingkaidaftar();
system("COLOR 0");
textcolor(8);

   gotoxy(80,5);printf("DAFTAR\a");
	gotoxy(25,10);printf("NAMA                                 :");
   gotoxy(25,13);printf("NIK                                  :");
   gotoxy(25,16);printf("ALAMAT                               :");
   gotoxy(25,19);printf("UMUR                                 :");
   gotoxy(25,22);printf("PILIH BANK ( BRI,BNI,BCA,MANDIRI )   :");
   gotoxy(25,25);printf("BUAT PIN                             :");
   gotoxy(25,28);printf("MASUKAN SALDO AWAL                   :  Rp.");
   gotoxy(25,31);printf("NO REKENING BANK ANDA                :");

   //NAMA
   do{
   gotoxy(65,10);gets(nama);
   	if(validasihuruf(nama)==0){
       gotoxy(65,10);printf("%s",nama);
		}else{
      	gotoxy(65,10);cprintf("NAMA TIDAK VALID\a");Sleep(700);
         gotoxy(65,10);cprintf("                                                                                       ");
   	}
   }while(validasihuruf(nama)==1);

   //NIK
   do{
   gotoxy(65,13);gets(nik);
   	if(validasinik(nik)==4){
         gotoxy(65,13);printf("%s",nik);
      }else if(validasinik(nik)==0){
         gotoxy(65,13);cprintf("HARUS 16 DIGIT \a");Sleep(700);
         gotoxy(65,13);cprintf("                   ");
      }else if(validasinik(nik)==1){
      	gotoxy(65,13);cprintf("MASUKAN DIGIT\a");Sleep(700);
         gotoxy(65,13);cprintf("                   ");
      }
   }while(validasinik(nik)==0||validasinik(nik)==1);

   //ALAMAT
   do{
   gotoxy(65,16);gets(alamat);
   	if(validasialamat(alamat)==1){
       gotoxy(65,16);printf("%s",alamat);
		}else{
      	gotoxy(65,16);cprintf("ALAMAT TIDAK VALID\a");Sleep(700);
         gotoxy(65,16);cprintf("                   ");
      }
   }while(validasialamat(alamat)!=1);

   //UMUR
   do{
   gotoxy(65,19);gets(umur);
   	if(validasiumur(umur)==4){
      	gotoxy(65,19);printf("%s",umur);
      }else if(validasiumur(umur)==1){
      	gotoxy(65,19);cprintf("MASUKAN DIGIT\a");Sleep(700);
         gotoxy(65,19);printf("                ");
      }else if(validasiumur(umur)==0){
         gotoxy(65,19);cprintf("MINIMAL 10 THN MAKSIMAL 99 THN\a");Sleep(700);
         gotoxy(65,19);printf("                                ");
      }
   }while(validasiumur(umur)!=4);

   //BANK
   do{
   gotoxy(65,22);gets(bank);
   if(validasibank(bank)==4){
   	gotoxy(65,22);printf("%s",bank);
   }else if(validasibank(bank)==0){
   	gotoxy(65,22);cprintf("BANK TIDAK TERDAPTAR !\a");Sleep(700);
      gotoxy(65,22);cprintf("                       ");
   }

   }while(validasibank(bank)==0);

	//PIN
   do{
   gotoxy(65,25);gets(pin);
   	if(validasipin(pin)==4){
          gotoxy(65,25);printf("%s",pin);
   	}else if(validasipin(pin)==0){
   		 gotoxy(65,25);cprintf("HARUS 6 DIGIT !\a");Sleep(700);
      	 gotoxy(65,25);printf("                    ");
   	}else if(validasipin(pin)==1){
   		 gotoxy(65,25);cprintf("MASUKAN DIGIT !\a");Sleep(700);
      	 gotoxy(65,25);printf("                 ");
   	}
	}while(validasipin(pin)!=4);

   //SALDO
    do{
   gotoxy(68,28);gets(saldo);
   	if(validasisaldo(saldo)==0){
          gotoxy(68,28);printf("%s",saldo);
   	}else if(validasisaldo(saldo)==4){
   		 gotoxy(68,28);cprintf("MINIIMAL Rp.100.000 !\a");Sleep(700);
      	 gotoxy(68,28);printf("                       ");
   	}else if(validasisaldo(saldo)==1){
   		 gotoxy(68,28);cprintf("MASUKAN NOMINAL !\a");Sleep(700);
      	 gotoxy(68,28);printf("                       ");
   	}
	}while(validasisaldo(saldo)!=0);

   //REKENING
   do{
   gotoxy(65,31);gets(rekening);
   	if(validasinorek(rekening)==4){
      	gotoxy(65,31);printf("%s",rekening);
      }else if(validasinorek(rekening)==1){
      	gotoxy(65,31);printf("MASUKAN DIGIT !\a");Sleep(700);
         gotoxy(65,31);printf("                ");
      }else if(validasinorek(rekening)==0){
      	gotoxy(65,31);printf("HARUS 10 DIGIT !\a");Sleep(700);
         gotoxy(65,31);printf("                    ");
      }
   }while(validasinorek(rekening)!=4);

gotoxy(33,34);printf("o MENYIMPAN=>>\a");
gotoxy(126,34);printf("<<= x KEMBALI\a");
do{
	gotoxy(85,34);char pilih=getche();
		if(pilih==111){
			// FUNGSI a+ UNTUK MEMBACA DAN MENULIS
   		bebas=fopen("data.txt","a+"); //MENYIMPAN DATA KE NOTPAD                                    // untuk membaca file
   		fprintf(bebas,"%s*%s*%s*%s*%s#\n",nama,rekening,pin,bank,saldo); // untuk menyimpan data
   		fclose(bebas);                                                   // untuk menutup file
      	gotoxy(85,34);loding();Sleep(20);
      	gotoxy(64,34);printf("             BERHASIL MENYIMPAN            \a");Sleep(1000);
      hapus();
      clrscr();
      menu();
   	}else if(pilih==120){
   	hapus();
      clrscr();
      menu();
   	}else{
      textcolor(4);
   		gotoxy(80,34);cprintf("PILIH LAGI!\a");Sleep(300);
      	gotoxy(80,34);cprintf("             ");Sleep(200);
	   }
}while(true);

hapus();
clrscr();
menu();
}

//============================================================================\\
//==================================  LOGIN ==================================\\
//============================================================================\\

void login(){
hapus();
clrscr();
bingkaipin();
system("COLOR 0");
textcolor(8);
	gotoxy(69,11);printf("M A S U K A N  N O R E K  D A N\a");
	gotoxy(69,12);printf("           P I N              ");

   gotoxy(67,27);printf("MASUKAN NOMOR REKENING DAN PIN ANDA");
   gotoxy(67,28);printf("          LALU TEKAN ENTER         ");
   gotoxy(67,29);printf("  TUTUPI JARI ANDA SAAT TEKAN PIN  ");
   gotoxy(67,30);printf("      UNTUK KEAMANAN TRANSAKSI     ");
   gotoxy(67,33);printf("  <<= ESC UNTUK KE MENU UTAMA =>>\a");

	bebas=fopen("data.txt","r"); //FUNGSI r UNTUK MEMBACA SAJA
    while(!feof(bebas)){                            //nama     // rekening       //pin         //bank       //saldo
     fscanf(bebas,"%[^*]*%[^*]*%[^*]*%[^*]*%[^#]", &data[x][0], &data[x][1], &data[x][2], &data[x][3] ,&data[x][4]);  //untuk membaca file yang di simpan dan memanggil

     x++;
    }
do{
   do{
   	for(int x=1;x<=2;x++){
      textcolor(4);
   		gotoxy(73,17);cprintf("MASUKAN REKENING ANDA\a");Sleep(500);
   		gotoxy(73,17);cprintf("                            ");Sleep(200);
   	}

      gotoxy(80,17);gets(rekening1);
   	if(validasinorek(rekening1)==4){
      	//gotoxy(80,17);printf("%s", rekening1);
		}else if(validasinorek(rekening1)==1){
      	gotoxy(80,17);cprintf("MASUKAN DIGIT !\a");Sleep(700);
         gotoxy(80,17);cprintf("                ");
      }else if(validasinorek(rekening1)==0){
      	gotoxy(80,17);cprintf("HARUS 10 DIGIT !\a");Sleep(700);
         gotoxy(80,17);cprintf("                    ");
      }
   }while(validasinorek(rekening1)!=4);

   do{
   	for(int x=1;x<=2;x++){
      textcolor(4);
   		gotoxy(75,19);cprintf("MASUKAN PIN ANDA\a");Sleep(500);
   		gotoxy(75,19);cprintf("                            ");Sleep(200);
   	}

   gotoxy(82,19);gets(pin1);
   	if(validasipin(pin1)==4){
      	// gotoxy(80,18);cprintf("%s", pin1);
   	}else if(validasipin(pin1)==0){
   		 gotoxy(78,19);cprintf("HARUS 6 DIGIT !\a");Sleep(700);
      	 gotoxy(78,19);cprintf("                                                      ");
   	}if(validasipin(pin1)==1){
   		 gotoxy(78,19);cprintf("MASUKAN DIGIT !\a");Sleep(700);
      	 gotoxy(78,19);cprintf("                                                      ");
   	}
	}while(validasipin(pin1)!=4);

   	for(int y=0;y<=x;y++){ //MEMBANDINGKAN YANG DI INPUT ADA TIDAK DI NOTPAD
   		if( strcmp(rekening1,data[y][1])==0 && strcmp(pin1,data[y][2])==0 ){  // membandingkan pin & no,rek yg di input dgn yang di daftarkan
         	strcpy(nama,data[y][0]);
         	strcpy(bank1,data[y][3]);
         hapus();
         menulogin();
      	}
   	}

      for(int x=1;x<=3;x++){
      	textcolor(4);
          gotoxy(73,17);printf("                                            ");
          gotoxy(78,19);printf("                                            ");
      	 gotoxy(74,20);cprintf("PIN ATAU NO.REK SALAH\a");Sleep(500);
          gotoxy(74,20);cprintf("                        ");Sleep(200);
      }
      gotoxy(83,33);pilih=getche();
      if(pilih==27){
      	clrscr();
      	menu();
      }
      gotoxy(83,33);printf(" ");
}while(true);

    fclose(bebas);
}
//============================================================================\\
//================================ TENTANG APK ===============================\\
//============================================================================\\
void tentang(){
hapus();
clrscr();

textcolor(7);
gotoxy(23,10);printf(" =========================================================================================================================== ");
gotoxy(23,11);printf(" ||                                                                                                                       || ");
gotoxy(23,12);printf(" ||     INFO APK                                                                                                          || ");
gotoxy(23,13);printf(" ||                                                                                                                       || ");
gotoxy(23,14);printf(" ||           NAMA PEMBUAT : YUSFA JULIAN                                                                                 || ");
gotoxy(23,15);printf(" ||                                                                                                                       || ");
gotoxy(23,16);printf(" ||           PRODI/JURUSAN : D3-MANAJEMEN INFORMATIKA                                                                    || ");
gotoxy(23,17);printf(" ||                                                                                                                       || ");
gotoxy(23,18);printf(" ||                UNIVERSITAS NASIONAL PASIM                                                                             || ");
gotoxy(23,19);printf(" ||                                                                                                                       || ");
gotoxy(23,20);printf(" ||           DIBUAT DARI TANGGAL 7 DESEMBER 2020                                                                         || ");
gotoxy(23,21);printf(" ||                                                                                                                       || ");
gotoxy(23,22);printf(" ||           SELESAI PADA TAMGGAL 14 DESEMBER 2020                                                                       || ");
gotoxy(23,23);printf(" ||                                                                                                                       || ");
gotoxy(23,24);printf(" ||                                                                                                                       || ");
gotoxy(23,25);printf(" ||           PROJEKAN INI DIBUAT UNTUK MEMENUHI PRAKTEK PROJEKAN PELATIHAN LOGIKA & ALGORITMA                            || ");
gotoxy(23,26);printf(" ||                                                                                                                       || ");
gotoxy(23,27);printf(" ||           KEGUNAAN APLIKASI INI DIBUAT UNTUK MEMPERMUDAH MENERANSFER UANG DAN MENGAMBIL UANG DARI REKENING            || ");
gotoxy(23,28);printf(" ||                                                                                                                       || ");
gotoxy(23,29);printf(" ||                                                                                                                       || ");
gotoxy(23,30);printf(" =========================================================================================================================== ");

 gotoxy(68,37);printf("<<= ENTER UNTUK KE MENU UTAMA =>>\a");
   do{
   gotoxy(85,37);char pilih=getch();
   if(pilih==13){
   clrscr();
	menu();
   }
   }while(true);

}

//============================================================================\\
//================================ MENU LOGIN ================================\\
//============================================================================\\

void menulogin(){
clrscr();
bingkaimenulogin();
	gotoxy(74,5);printf("PILIH TRANSAKSI YANG \a");
   gotoxy(74,6);printf("   ANDA INGINKAN ");
	gotoxy(30,12);printf("1 => TARIK TUNAI     ");
   gotoxy(31,19);printf("2 => INFO SALDO      ");
   gotoxy(128,12);printf("3 => TRANSFER        ");
   gotoxy(125,19);printf("4 => INFO REKENING   ");
   gotoxy(81,24);printf("5 => KELUAR          ");
   gotoxy(74,29);cprintf("masukan pilihan anda :");
   do{
   gotoxy(97,29);pilih=getche();Sleep(400);
   	if(pilih=='1'){
      	hapus();
         clrscr();
   		penarikan();
   	}else if(pilih=='2'){
      	hapus();
         clrscr();
   		infosaldo();
   	}else if(pilih=='3'){
   		transfer();
   	}else if(pilih=='4'){
      	hapus();
         clrscr();
   		inforek();
      }else if(pilih=='5'){
      	hapus();
      	clrscr();
      	menu();
      }
   }while(true);
}

//============================================================================\\
//===============================  INFON SALDO	==============================\\
//============================================================================\\

void infosaldo(){
	kotaktampilan();
   bingkaipin();

   for(int x=1;x<=18;x++){
   	gotoxy(49+x,31);cprintf("%c",219);
      gotoxy(104+x,31);cprintf("%c",219);
   }

   	gotoxy(75,11);printf("I N F O  S A L D O\a");
		gotoxy(70,16);printf("SALDO REKENING ANDA SAAT INI\a");

	for(int y=0;y<=x;y++){
   	if( strcmp(rekening1,data[y][1])==0 && strcmp(pin1,data[y][2])==0 ){
      	//prin saldo dari notpade yg dari si pin & rek yg tadi di masukan
       	gotoxy(78,18);printf("Rp. %s,-",data[y][4]);
      }
   }

      gotoxy(70,25);printf("TRANSAKSI ANDA TELAH SELESAI\a");
      gotoxy(70,26);printf("APAKAN ANDA INGIN MELAKUKAN");
      gotoxy(70,27);printf("    TRANSAKSI LAINNYA ?    ");
      gotoxy(53,30);printf("x TIDAK =>\a");
      gotoxy(110,30);printf("<= o YA\a");
      do{
      gotoxy(83,30);pilih=getche();
      	if(pilih==111){
         	menulogin();
         }else if(pilih==120){
         hapus();
         clrscr();
         menu();
         }
      }while(true);
}

//============================================================================\\
//================================	PENARIKAN ================================\\
//============================================================================\\

void penarikan(){
bingkaimenulogin();
for(int x=1;x<=18;x++){
   	gotoxy(45+x,34);cprintf("%c",219);
      gotoxy(116+x,34);cprintf("%c",219);
   }
 for(int y=0;y<=x;y++){
   	if( strcmp(rekening1,data[y][1])==0 && strcmp(pin1,data[y][2])==0 ){ //
                                                                           //
         strcpy(sld,data[y][4]);                                           //
      }                                                                    // menyalin dari string ke int
   }                                                                       //
   sald=atoi(sld);                                                         //

	gotoxy(65,5);printf("SILAHKAN PILIH JUMLAH PENARIKAN\a");
   gotoxy(33,12);printf("1. 100.000");
   gotoxy(33,19);printf("2. 500.000");
   gotoxy(128,12);printf("3. 1000.000");
   gotoxy(126,19);printf("4. JUMLAH LAIN");
   gotoxy(73,27);printf("TEKAN o UNTUK KEMBALI DAN");
   gotoxy(73,28);printf("   TEKAN x UNTUK KELUAR  ");
   gotoxy(50,33);printf("x KELUAR =>\a");
   gotoxy(120,33);printf("<= o KEMBALI\a");

do{
   gotoxy(79,24);printf("PILIH JUMLAH : ");
	char pilih=getche();
   if(pilih=='1'){                                              //PILIHAN 1
   	if(sald<100000){
	      gotoxy(75,15);printf("SALDO ANDA KURANG GAYS\a");Sleep(1000);
         hapus();
   	}else{
      	sald = sald-100000;

   			clrscr();
				bingkaipin();
				system("COLOR 0");
				textcolor(8);
            for(int x=1;x<=18;x++){
   				gotoxy(49+x,31);cprintf("%c",219);
      			gotoxy(100+x,31);cprintf("%c",219);
   			}
   			gotoxy(75,11);printf("A T M  P E N A R I K A N\a");
   			gotoxy(76,12);printf("PILIH JENIS REKENING");
   			gotoxy(54,30);printf("o GIRO =>>");
   			gotoxy(103,30);printf("<<= x TABUNGAN");
  			do{
  				gotoxy(84,30); char pilih=getche();
   			if(pilih==111){
      			clrscr();
               strukpenarikan(100000);
      		}else if(pilih==120){
      			clrscr();
               strukpenarikan(100000);
      		}
   		}while(true);
   	}

   }else if(pilih=='2'){                                        //PILIHAN 2
   	if(sald<500000){
	      gotoxy(75,15);printf("SALDO ANDA KURANG GAYS\a");
         hapus;
   	}else{
      	sald-=500000;

   				clrscr();
				bingkaipin();
				system("COLOR 0");
				textcolor(8);
            for(int x=1;x<=18;x++){
   				gotoxy(49+x,31);cprintf("%c",219);
      			gotoxy(100+x,31);cprintf("%c",219);
   			}
   			gotoxy(75,11);printf("A T M  P E N A R I K A N\a");
   			gotoxy(76,12);printf("PILIH JENIS REKENING");
   			gotoxy(54,30);printf("o GIRO =>>");
   			gotoxy(103,30);printf("<<= x TABUNGAN");
  			do{
  				gotoxy(84,30);char pilih=getch();
   			if(pilih==111){
      			clrscr();
               strukpenarikan(500000);
      		}else if(pilih==120){
      			clrscr();
               strukpenarikan(500000);
      		}else{
      			clrscr();
      	 		penarikan();
      		}
   		}while(true);
   	}

   }else if(pilih=='3'){                                        //PILIHAN 3
   	if(sald<1000000){
   		gotoxy(75,15);printf("SALDO ANDA KURANG GAYS\a");
         hapus;
   	}else{
      	sald-=1000000;

   				clrscr();
				bingkaipin();
				system("COLOR 0");
				textcolor(8);
            for(int x=1;x<=18;x++){
   				gotoxy(49+x,31);cprintf("%c",219);
      			gotoxy(100+x,31);cprintf("%c",219);
   			}
   			gotoxy(75,11);printf("A T M  P E N A R I K A N\a");
   			gotoxy(76,12);printf("PILIH JENIS REKENING");
   			gotoxy(54,30);printf("o GIRO =>>");
   			gotoxy(103,30);printf("<<= x TABUNGAN");
  			do{
  				gotoxy(84,30);char pilih=getche();
   			if(pilih==111){
      			clrscr();
               strukpenarikan(1000000);
      		}else if(pilih==120){
      			clrscr();
               strukpenarikan(1000000);
      		}else{
      			clrscr();
      	 		penarikan();
      		}
   		}while(true);
   	}

   }else if(pilih=='4'){                                        //PILIHAN 4
   	jumlahlain();

   }else if(pilih==120){                                        //PILIHAN 5
   clrscr();
   	menu();
   }else if(pilih==111){
      menulogin();
   }
}while(true);

}

void jumlahlain(){
hapus();
clrscr();
bingkaipin();
system("COLOR 0");
textcolor(8);
	gotoxy(71,11);printf("M A S U K A N  N O M I N A L\a");
   gotoxy(80,17);scanf("%d",&tarik);
   if(sald<tarik){
   		gotoxy(75,15);printf("SALDO ANDA KURANG GAYS\a");Sleep(1000);
         hapus();
         clrscr();
         penarikan();
   	}else{
      	sald-=tarik;

      		clrscr();
				bingkaipin();
				system("COLOR 0");
				textcolor(8);
         	   for(int x=1;x<=18;x++){
   					gotoxy(45+x,31);cprintf("%c",219);
      				gotoxy(99+x,31);cprintf("%c",219);
               }
   			gotoxy(75,11);printf("A T M  P E N A R I K A N\a");
   			gotoxy(76,12);printf("PILIH JENIS REKENING");
   			gotoxy(50,30);printf("o GIRO =>>\a");
   			gotoxy(102,30);printf("<<= x TABUNGAN\a");
  			do{
  				gotoxy(84,30);char pilih=getche();
   			if(pilih==111){
      			clrscr();
               strukpenarikan(tarik);
      		}else if(pilih==120){
      			clrscr();
               strukpenarikan(tarik);
      		}else{
      			clrscr();
      	 		penarikan();
      		}
   		}while(true);
      }
}

void strukpenarikan(int a){
textcolor(7);
	int tamp=a;
   uang();
   clrscr();

   for(int x=1;x<=18;x++){
   	gotoxy(49+x,31);cprintf("%c",219);
      gotoxy(104+x,31);cprintf("%c",219);
   }

   gotoxy(56,10);cprintf(" ====================================================== ");
   gotoxy(56,11);cprintf(" =                                                    = ");
   gotoxy(56,12);cprintf(" =   TANGGAL        WAKTU                             = ");
   gotoxy(56,13);cprintf(" =                                                    = ");
   gotoxy(56,14);cprintf(" =                                                    = ");
   gotoxy(56,15);cprintf(" =   LOKASI     BDG DEATH METAL                       = ");
   gotoxy(56,16);cprintf(" =                                                    = ");
   gotoxy(56,17);cprintf(" =   NO.RECORD  6879                                  = ");
   gotoxy(56,18);cprintf(" =   PENARIKAN           Rp.                          = ");
   gotoxy(56,19);cprintf(" =                                                    = ");
   gotoxy(56,20);cprintf(" =                                                    = ");
   gotoxy(56,21);cprintf(" =   SALDO REK   Rp.                                  = ");
   gotoxy(56,22);cprintf(" =                                                    = ");
   gotoxy(56,23);cprintf(" =                                                    = ");
   gotoxy(56,24);cprintf(" ====================================================== ");
   gotoxy(79,18);cprintf("%d,-",tamp);
   gotoxy(71,21);cprintf("%d,-",sald);
   gotoxy(63,13);cprintf("%s",asctime(waktu));
   gotoxy(60,13);cprintf("%d/%d/%d   ",waktu->tm_mday,waktu->tm_mon+1,1900+waktu->tm_year);
   gotoxy(83,13);cprintf("        ");

   char pindah[50];
   itoa(sald,pindah,10); //MENYALIN DARI INT KE STRING
	bebas=fopen("data.txt","r+"); // FUNGSI r+ UNTUK MEMBACA DAN MENULIS DI FILE YANG SUDAH ADA

	int y=0;

    for(int y=0;y<x;y++){

   	  	if( strcmp(rekening1,data[y][1])==0 && strcmp(pin1,data[y][2])==0 ){
         	strcpy(data[y][4],pindah);

         }

         if(data[y][0] != NULL){

                 //printf("%s*%s*%s*%s*%s#\n",data[y][0],data[y][1],data[y][2],data[y][3],data[y][4]); // untuk menyimpan data

        	     fprintf(bebas,"%s*%s*%s*%s*%s#\n",data[y][0],data[y][1],data[y][2],data[y][3],data[y][4]); // untuk menyimpan data

         }

    	}
       fclose(bebas);

      gotoxy(70,25);printf("TRANSAKSI ANDA TELAH SELESAI\a");
      gotoxy(70,26);printf("APAKAN ANDA INGIN MELAKUKAN");
      gotoxy(70,27);printf("    TRANSAKSI LAINNYA ?    ");
		gotoxy(53,30);printf("x TIDAK =>\a");
      gotoxy(110,30);printf("<= o YA\a");
    do{
      gotoxy(86,30);pilih=getche();Sleep(400);
      	if(pilih==111){
         	hapus();
        		menulogin();
         }else if(pilih==120){
         	hapus();
         	clrscr();
         	menu();
         }
    }while(true);
}

//============================================================================\\
//=============================	TRANSFER	 ===================================\\
//============================================================================\\

void transfer(){
hapus();
clrscr();
bingkaipin();
system("COLOR 0");
textcolor(8);

	for(int y=0;y<=x;y++){
   	if( strcmp(rekening1,data[y][1])==0 && strcmp(pin1,data[y][2])==0 ){

         strcpy(sld1,data[y][4]);

      }
   }
   sald1=atoi(sld1);


  	bebas=fopen("data.txt","r"); //MEMBUKA FILE DAN DI BACA"FUNGSI r UNTUK MEMBACA
    while(!feof(bebas)){                            //nama     // rekening       //pin         //bank       //saldo
     fscanf(bebas,"%[^*]*%[^*]*%[^*]*%[^*]*%[^#]", &data[x][0], &data[x][1], &data[x][2], &data[x][3] ,&data[x][4]);  //untuk membaca file yang di simpan dan memanggil

     x++;
    }

	gotoxy(75,11);printf("A T M   T R A N S F E R\a");
	gotoxy(74,12);printf(" MASUKAN REKENING TUJUAN");
    int cek=0;
do{
   gotoxy(74,17);printf("                                                         ");
   do{
   gotoxy(80,17);gets(rekening2);
   if(validasinorek(rekening2)==4){
       //	gotoxy(80,17);printf("%s",rekening2);
      }else if(validasinorek(rekening2)==1){
      	gotoxy(80,17);printf("NO REKENING TIDAK TERDAFTAR!\a");Sleep(700);
         gotoxy(80,17);printf("                                              ");
      }else if(validasinorek(rekening2)==0){
      	gotoxy(80,17);printf("HARUS 10 DIGIT !\a");Sleep(700);
         gotoxy(80,17);printf("                                              ");
      }
   }while(validasinorek(rekening2)!=4);

   for(int y=0;y<=x;y++){         // CEK REKENNING TUJUAN ADA TI NOTPAD TIDAK
   	if( strcmp(rekening2,data[y][1])==0){  // membandingkan no rek yg di input dgn yang di daftarkan
         strcpy(nama1,data[y][0]);
         strcpy(bank2,data[y][3]);
         strcpy(saldo00,data[y][4]);
        cek++;
      }
   }
    saldo0=atoi(saldo00); //MENGUBAH STRING KE INT
    if(cek==0){
   	gotoxy(74,17);printf("REKENING TIDAK TERDAFTAR\a");Sleep(500);
   }

}while(cek==0);

   fclose(bebas);

   gotoxy(50,30);printf("o UNTUK BENAR =>>");
   gotoxy(102,30);printf("<<= x UNTUK SALAH");
   do{
   gotoxy(84,30);char pilih=getch();
   	if(pilih== 111 ){
      	clrscr();
         	transfer1();
      }else if(pilih== 120 ){
      	clrscr();
         menulogin();
      }else{
      	clrscr();
      	 transfer();
      }
   }while(true);
}

void transfer1(){
hapus();
clrscr();
bingkaipin();
system("COLOR 0");
textcolor(8);
bebas=fopen("data.txt","r");

  // int cek=sald1;
   gotoxy(74,11);printf("A T M   T R A N S F E R\a");
   gotoxy(68,12);printf("MASUKAN NOMINAL YANG AKAN DI TRANSFER");
   gotoxy(82,17);scanf("%d",&nominal);

   if(sald1>nominal){
      sald1-=nominal;
      saldo0+=nominal;
   	gotoxy(50,30);printf("o UNTUK BENAR =>>");
   	gotoxy(102,30);printf("<<= x UNTUK SALAH");

		do{
   		gotoxy(84,30);char pilih=getche();
   		if(pilih==111){
      		clrscr();
         	 	transfer2();
      		}else if(pilih==120){
        			clrscr();
        			menulogin();
      		}else{
      		clrscr();
      		 	transfer1();
   	  		}
      }while(true);
   }else{
         gotoxy(79,17);printf("SALDO ANDA KURANG GAYS\a");Sleep(300);
      gotoxy(79,17);printf("                            ");Sleep(100);
      nominal=0;
      transfer1();
  	}


}
void transfer2(){
hapus();
clrscr();
bingkaipin();
system("COLOR 0");
textcolor(8);

   gotoxy(74,11);printf("A T M   T R A N S F E R\a");
  	gotoxy(71,16);printf("NAMA PENGIRIM : %s",nama);
   gotoxy(71,22);printf("REK TUJUAN    : %s",rekening2);
   gotoxy(71,20);printf("DARI BANK     : %s",bank1);
   gotoxy(71,24);printf("JUMLAH        : Rp. %d,-",nominal);
   if(strlen(rekening1)>10){
		int i=0;
    	for(int z=10; z<=20; z++){
      	rek[i]=rekening1[z];
         rekening1[z]=NULL;
         i++;
      }
      gotoxy(71,18);printf("DARI REK      : %s",rekening1);

   }
   gotoxy(71,26);printf("BIAYA ADMIN   : Rp. 00,-");
   gotoxy(71,28);printf("TOTAL         : Rp. %d,-",nominal);


   /////UNTUK MENGUBAN ISI NOTEPAD///////////////////////////////////

//////AKUN PENERANSFER
char pindah1[50];
   itoa(sald1,pindah1,10); // MENYALIN INT KE STRING
	bebas=fopen("data.txt","r+"); //MEMBUKA FILE YG SUDAH ADA DAN DI BACA DAPAT JUGA DUTULIS ISINYA

	int y=0;
    for(int y=0;y<x;y++){

   	  	if( strcmp(rekening1,data[y][1])==0 && strcmp(pin1,data[y][2])==0 ){
         	strcpy(data[y][4],pindah1); //MENYALIN STRING

         }

         if(data[y][0] != NULL){

                 //printf("%s*%s*%s*%s*%s#\n",data[y][0],data[y][1],data[y][2],data[y][3],data[y][4]); // untuk menyimpan data

        	     fprintf(bebas,"%s*%s*%s*%s*%s#\n",data[y][0],data[y][1],data[y][2],data[y][3],data[y][4]); // untuk menyimpan data

         }

    	}
       fclose(bebas);

///////AKUN PENERIMA TRANSFERAN
   char naon[50];

   itoa(saldo0,naon,10); // MENGUBAH INT KE STRING
	bebas=fopen("data.txt","r+");

    for(int y=0;y<x;y++){

   	  	if( strcmp(rekening2,data[y][1])==0){
         	strcpy(data[y][4],naon);  //MENYALIN STRING

         }

         if(data[y][0] != NULL){

                // printf("%s*%s*%s*%s*%s#\n",data[y][0],data[y][1],data[y][2],data[y][3],data[y][4]);

        	     fprintf(bebas,"%s*%s*%s*%s*%s#\n",data[y][0],data[y][1],data[y][2],data[y][3],data[y][4]); // untuk menyimpan data YANG SUDAH DI EDIT KE NOTPAD

         }

    	}
       fclose(bebas);

   gotoxy(53,33);printf("o UNTUK BENAR =>>");
   gotoxy(100,33);printf("<<= x UNTUK SALAH");
   do{
   gotoxy(84,30);char pilih=getch();
   	if(pilih==111){
      	clrscr();
         	transfer3();
      }else if(pilih==120){
      	clrscr();
         menulogin();
      }else{
      	clrscr();
      	 transfer2();
      }
   }while(true);
}
void transfer3(){
hapus();
clrscr();
bingkaipin();
system("COLOR 0");
textcolor(8);
   gotoxy(74,11);printf("A T M   T R A N S F E R\a");
   gotoxy(76,12);printf("PILIH JENIS REKENING");
   gotoxy(53,30);printf("o GIRO =>>");
   gotoxy(101,30);printf("<<= x TABUNGAN");
  do{
  	gotoxy(84,30);char pilih=getch();
   	if(pilih==111){
      	clrscr();
         	transfer4();
      }else if(pilih==120){
      	clrscr();
         	transfer4();
      }else{
      	clrscr();
      	 transfer3();
      }
   }while(true);
}

void transfer4(){
hapus();
clrscr();
bingkaipin();
system("COLOR 0");

   gotoxy(70,11);printf("T R A N S A K S I  S E L E S A I\a");
    	gotoxy(70,25);printf("TRANSAKSI ANDA TELAH SELESAI\a");
      gotoxy(70,26);printf("APAKAN ANDA INGIN MELAKUKAN");
      gotoxy(70,27);printf("    TRANSAKSI LAINNYA ?    ");
		gotoxy(53,30);printf("x TIDAK =>\a");
      gotoxy(110,30);printf("<= o YA\a");
   do{
   gotoxy (84,30); char pilih=getch();
   	if(pilih==111){
      	clrscr();
         	menulogin();
      }else if(pilih==120){
      	clrscr();
         	struk();
      }
   }while(true);
}

void struk(){
hapus();
clrscr();
kotaktampilan();
textcolor(7);
	 gotoxy(74,4);printf(" S T R U K  A N D A \a");
    	for(int x=64;x<=104;x++){
    		gotoxy(x,5);printf("%c",219);
      }
	 gotoxy(50,7);cprintf(" ================================================================== ");
    gotoxy(50,8);cprintf(" =                                                        LINK    = ");
    gotoxy(50,9);cprintf(" =                                                                = ");
   gotoxy(50,10);cprintf(" =     TANGGAL    :                                               = ");
   gotoxy(50,11);cprintf(" =     ATM ID     : 9673                                          = ");
   gotoxy(50,12);cprintf(" =     LOKASI     : SUNDA EMFIRE                                  = ");
   gotoxy(50,13);cprintf(" =                                                                = ");
   gotoxy(50,14);cprintf(" =                         A T M  T R A N S F E R                 = ");
   gotoxy(50,15);cprintf(" =                                                                = ");
   gotoxy(50,16);cprintf(" =     DARI                                                       = ");
   gotoxy(50,17);cprintf(" =     NAMA       :                                               = ");
   gotoxy(50,18);cprintf(" =     BANK       :                                               = ");
   gotoxy(50,19);cprintf(" =     REKENING   :                                               = ");
   gotoxy(50,20);cprintf(" =                                                                = ");
   gotoxy(50,21);cprintf(" =     KEPADA                                                     = ");
   gotoxy(50,22);cprintf(" =     NAMA       :                                               = ");
   gotoxy(50,23);cprintf(" =     BANK       :                                               = ");
   gotoxy(50,24);cprintf(" =     REKENING   :                                               = ");
   gotoxy(50,25);cprintf(" =                                                                = ");
   gotoxy(50,26);cprintf(" =     JUMLAH     :                                               = ");
   gotoxy(50,27);cprintf(" =     ADMIN BANK :                                               = ");
   gotoxy(50,28);cprintf(" =     TOTAL      :                                               = ");
   gotoxy(50,29);cprintf(" =                                                                = ");
   gotoxy(50,30);cprintf(" ================================================================== ");
   gotoxy(50,31);cprintf(" =             KARTU REKENING DAPAT DIGUNAKAN BELANJA             = ");
   gotoxy(50,32);cprintf(" =                   DI TEMPAT BERLOGO MAESTRO                    = ");
   gotoxy(50,33);cprintf(" =             DAN TARIK TUNAI DI ATM BERLOGO CIRRUS              = ");

   gotoxy(70,10);cprintf("%s",asctime(waktu));
   gotoxy(70,10);cprintf("%d/%d/%d",waktu->tm_mday,waktu->tm_mon+1,1900+waktu->tm_year);
   gotoxy(90,10);cprintf("    ");

   gotoxy(70,17);cprintf("%s",nama);
   gotoxy(70,18);cprintf("%s",bank1);
   gotoxy(70,19);cprintf("%s",rekening1);

   gotoxy(69,21);cprintf("%s",nama1);
   gotoxy(70,23);cprintf("%s",bank2);
   gotoxy(70,24);cprintf("%s",rek);
   gotoxy(69,21);cprintf("  ");

   gotoxy(69,26);cprintf(" Rp. %d,-",nominal);
   gotoxy(69,27);cprintf(" Rp. 00,-");
   gotoxy(69,28);cprintf(" Rp. %d,-",nominal);

   gotoxy(68,37);printf("<<= ENTER UNTUK KE MENU TRANSAKSI =>\a");
   do{
   gotoxy(85,37);char pilih=getch();
   if(pilih==13){
   clrscr();
	menulogin();
   }
   }while(true);
}

//============================================================================\\
//==============================	Info rekening ===============================\\
//============================================================================\\

void inforek(){
hapus();
clrscr();

textcolor(7);
gotoxy(23,10);printf(" =========================================================================================================================== ");
gotoxy(23,11);printf(" ||                                                                                                                       || ");
gotoxy(23,12);printf(" ||     INFO REKENING                                                                                                     || ");
gotoxy(23,13);printf(" ||                                                                                                                       || ");
gotoxy(23,14);printf(" ||           NO REKENING ANDA                                                                                            || ");
gotoxy(23,15);printf(" ||                                                                                                                       || ");
gotoxy(23,16);printf(" ||           ANDA MENGGUNAKAN BANK                                                                                       || ");
gotoxy(23,17);printf(" ||                                                                                                                       || ");
gotoxy(23,18);printf(" ||           SALDO TRAKHIR ANDA SEBESAR Rp.                                                                              || ");
gotoxy(23,19);printf(" ||                                                                                                                       || ");
gotoxy(23,20);printf(" ||           PIN ANDA                                                                                                    || ");
gotoxy(23,21);printf(" ||                                                                                                                       || ");
gotoxy(23,22);printf(" ||                                                                                                                       || ");
gotoxy(23,23);printf(" ||                   JAGALAH KEAMANAN AKUN ANDA KARNA JIKA AKUN ANDA BOCOR ATAU DIKETAHUI ORANG LAIN                     || ");
gotoxy(23,24);printf(" ||                                  BISA MERUGIKAN DIRI ANDA SENDIRI MAKA DARI ITU                                       || ");
gotoxy(23,25);printf(" ||                            JANGAN BERIKAN INFO TENTANG REKENING ANDA KEPADA SIAPAPUN                                  || ");
gotoxy(23,26);printf(" ||                                                                                                                       || ");
gotoxy(23,27);printf(" ||                                                                                                                       || ");
gotoxy(23,28);printf(" ||                                                                                                                       || ");
gotoxy(23,29);printf(" ||                                                                                                                       || ");
gotoxy(23,30);printf(" =========================================================================================================================== ");

gotoxy(53,14);cprintf(" %s",rekening1);
gotoxy(58,16);cprintf(" %s",bank1);
for(int y=0;y<=x;y++){
   	if( strcmp(rekening1,data[y][1])==0 && strcmp(pin1,data[y][2])==0 ){

       	gotoxy(67,18);cprintf(" %s,-",data[y][4]); //prin saldo dari notpade yg dari si pin & rek yg tadi di masukan
      }
   }
gotoxy(45,20);cprintf(" %s",pin1);

	gotoxy(33,33);printf("ENTER UNTUK TRANSAKSI LAGI =>>\a");
   gotoxy(112,33);printf("<<= ESC UNTUK KE MENU UTAMA\a");
   gotoxy(85,33);char pilih=getch();
   if(pilih==27){
   	clrscr();
      menu();
   }else if(pilih==13){
   menulogin();
   }else{
   	inforek();
   }


}
//========================== BINGKAI BINGKAI ================================//

void kotaktampilan(){
system("COLOR 6");
textcolor(8);
	for(int x=1; x<=171; x++){
		gotoxy(x,1);cprintf("%c",219);
   	gotoxy(x,40);cprintf("%c",219);
   	Sleep(5);
   }
   for(int x=1; x<=40; x++){
   	gotoxy(1,x);cprintf("%c",219);
   	gotoxy(171,x);cprintf("%c",219);
      gotoxy(170,x);cprintf("%c",219);
			Sleep(5);
	}
}

void bingkaimenu(){
logo();
kotaktampilan();
textcolor(8);
   for(int x=1;x<=11;x++){
   	for(int y=1;y<=170;y++){
       	if(x==1||x==2){
         	gotoxy(0+y,28);cprintf("%c",219);
         	gotoxy(0+y,29);cprintf("%c",219);
  	 			gotoxy(0+y,30);cprintf("%c",219);
            gotoxy(0+y,34);cprintf("%c",219);
         	gotoxy(0+y,35);cprintf("%c",219);
            gotoxy(0+y,36);cprintf("%c",219);
            gotoxy(0+y,40);cprintf("%c",219);
            Sleep(2);
         }
   	}
	}
   for(int x=1;x<=9;x++){
            gotoxy(55,30+x);cprintf("%c",219);
            gotoxy(54,30+x);cprintf("%c",219);
            gotoxy(115,30+x);cprintf("%c",219);
            gotoxy(116,30+x);cprintf("%c",219);
            Sleep(2);
   }
}

void bingkaidaftar(){
system("COLOR 0");
textcolor(8);
	for(int x=1;x<=33;x++){
   	for(int y=1;y<=126;y++){
      	if(x==3||x==7||x==8||x==9||x==11||x==12||x==14||x==15||x==17||x==18||x==20||x==21||x==23||x==24||x==26||x==27||x==29||x==30||x==32){
				gotoxy(22+y,x);cprintf("%c",219);
            gotoxy(22+y,36);cprintf("%c",219);

         }else{
         	gotoxy(148,3+x);cprintf("%c",219);
            gotoxy(148,3+x);cprintf("%c",219);
            gotoxy(148,6);cprintf("%c",219);
            gotoxy(148,10);cprintf("%c",219);

            gotoxy(23,3+x);cprintf("%c",219);
            gotoxy(23,3+x);cprintf("%c",219);
            gotoxy(23,6);cprintf("%c",219);
            gotoxy(23,10);cprintf("%c",219);
         }
      }Sleep(2);
      printf("\n");
   }
   gotoxy(148,35);cprintf("%c",219);
   gotoxy(23,35);cprintf("%c",219);
   gotoxy(148,33);cprintf("%c",219);
   gotoxy(23,33);cprintf("%c",219);
}



void logo(){
system("COLOR 0");
textcolor(3);
   for(int x=1;x<=11;x++){
   gotoxy(73+x,3);printf("by.YUSFA JULIAN");Sleep(10);
   gotoxy(1+x,3);cprintf("           %c%c%c%c           %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c            %c%c%c  ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
	gotoxy(1+x,4);cprintf("          %c%c%c%c%c%c          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c            %c%c%c  ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(1+x,5);cprintf("         %c%c    %c%c                  %c%c%c%c%c%c           %c%c%c%c          %c%c%c%c  ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(1+x,6);cprintf("        %c%c      %c%c                 %c%c%c%c%c%c           %c%c %c%c        %c%c %c%c  ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(1+x,7);cprintf("       %c%c        %c%c                %c%c%c%c%c%c           %c%c  %c%c      %c%c  %c%c  ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(1+x,8);cprintf("      %c%c%c%c%c%c%c%c%c%c%c%c%c%c               %c%c%c%c%c%c           %c%c   %c%c    %c%c   %c%c  ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(1+x,9);cprintf("     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              %c%c%c%c%c%c           %c%c    %c%c  %c%c    %c%c  ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(1+x,10);cprintf("    %c%c              %c%c             %c%c%c%c%c%c           %c%c     %c%c%c%c     %c%c  ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
  	gotoxy(1+x,11);cprintf("   %c%c                %c%c            %c%c%c%c%c%c           %c%c    %c%c%c%c%c%c    %c%c  ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
  	gotoxy(1+x,12);cprintf("  %c%c                  %c%c           %c%c%c%c%c%c           %c%c              %c%c  ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
  	gotoxy(1+x,13);cprintf(" %c%c%c%c                %c%c%c%c          %c%c%c%c%c%c          %c%c%c%c            %c%c%c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
  	gotoxy(1+x,14);cprintf(" %c%c%c%c                %c%c%c%c          %c%c%c%c%c%c          %c%c%c%c            %c%c%c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);

	gotoxy(51-x,16);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c        %c%c          %c%c  %c%c%c%c%c%c%c%c%c  %c%c          %c%c  %c%c%c%c%c%c%c%c%c  ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(51-x,17);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c      %c%c          %c%c %c%c%c%c%c%c%c%c%c%c%c %c%c%c         %c%c %c%c%c%c%c%c%c%c%c%c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(51-x,18);cprintf("%c%c          %c%c %c%c            %c%c   %c%c   %c%c           %c%c    %c%c      %c%c          %c%c %c%c       %c%c %c%c%c%c        %c%c %c%c       %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(51-x,19);cprintf("%c%c             %c%c            %c%c    %c%c  %c%c           %c%c     %c%c     %c%c          %c%c %c%c       %c%c %c%c %c%c       %c%c %c%c       %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(51-x,20);cprintf("%c%c             %c%c            %c%c     %c%c %c%c           %c%c    %c%c      %c%c          %c%c %c%c       %c%c %c%c  %c%c      %c%c %c%c       %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(51-x,21);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c %c%c     %c%c %c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c      %c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c %c%c   %c%c     %c%c %c%c%c%c%c%c%c%c%c%c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(51-x,22);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c %c%c     %c%c %c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c      %c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c %c%c    %c%c    %c%c %c%c%c%c%c%c%c%c%c%c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(51-x,23);cprintf("            %c%c %c%c            %c%c     %c%c %c%c           %c%c     %c%c     %c%c          %c%c %c%c       %c%c %c%c     %c%c   %c%c %c%c       %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(51-x,24);cprintf("            %c%c %c%c            %c%c    %c%c  %c%c           %c%c      %c%c    %c%c          %c%c %c%c       %c%c %c%c      %c%c  %c%c %c%c       %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(51-x,25);cprintf("%c%c          %c%c %c%c            %c%c   %c%c   %c%c           %c%c       %c%c   %c%c          %c%c %c%c       %c%c %c%c       %c%c %c%c %c%c       %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(51-x,26);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c %c%c        %c%c  %c%c          %c%c %c%c       %c%c %c%c        %c%c%c%c %c%c       %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   gotoxy(51-x,27);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c %c%c         %c%c %c%c          %c%c %c%c       %c%c %c%c         %c%c%c %c%c       %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);
   }
}

void hapus(){
system("COLOR 6");
	for(int x=1;x<=41;x++){
   	for(int y=1;y<=171;y++){
      	gotoxy(0+y,0+x);printf("%c",219);Sleep(0);
      }
   printf("\n");
   }
}

void bingkaipin(){
system("COLOR 6");
kotaktampilan();
textcolor(8);
	for(int x=1;x<=6;x++){
   	for(int y=1;y<=23;y++){
      	if(x==3||x==4){

         }else{
         	gotoxy(49+y,8+x);cprintf("%c",219);
            gotoxy(72+y,8+x);cprintf("%c",219);
            gotoxy(95+y,8+x);cprintf("%c",219);
            Sleep(3);
         }
      }
   }

}

void bingkaimenulogin(){
system("COLOR 6");
textcolor(8);
kotaktampilan();
	for(int x=0;x<=27;x++){
   	for(int y=0;y<=29;y++){
      	if(x==11||x==13||x==18||x==20){
         	gotoxy(23+y,x);cprintf("%c",219);
            gotoxy(119+y,x);cprintf("%c",219);
         }else if(x==23||x==25){
             gotoxy(71+y,x);cprintf("%c",219);
         }else{
         	gotoxy(23,x);printf("  ");
         }
      }
      Sleep(1);
   }
   for(int x=0;x<=7;x++){
   	for(int y=23;y<=148;y++){
      	if(x==3||x==4||x==7){
         	gotoxy(y,x);cprintf("%c",219);
         }else{
            gotoxy(20,x);printf("");
         }
      }
      Sleep(1);
   }
}

void loding(){
	for(int x=1;x<=100;x++){
   gotoxy(72,34);printf("Loading . . . %d%",x);Sleep(50);
   }

}

void uang(){
	for(int x=30;x<=100;x++){
	gotoxy(x,15);cprintf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);
	gotoxy(x,16);cprintf(" %c%c                                                                    %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);
	gotoxy(x,17);cprintf(" %c%c %c%c  %c%c%c%c   %c%c%c%c   %c%c%c%c   %c%c%c%c   %c%c%c%c    B A N K  I N D O N E S I A %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);
   gotoxy(x,18);cprintf(" %c%c %c%c %c%c  %c%c %c%c  %c%c %c%c  %c%c %c%c  %c%c %c%c  %c%c                              %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);
   gotoxy(x,19);cprintf(" %c%c %c%c %c%c  %c%c %c%c  %c%c %c%c  %c%c %c%c  %c%c %c%c  %c%c                              %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);
   gotoxy(x,20);cprintf(" %c%c %c%c  %c%c%c%c   %c%c%c%c   %c%c%c%c   %c%c%c%c   %c%c%c%c                               %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);
   gotoxy(x,21);cprintf(" %c%c                                                                    %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);
   gotoxy(x,22);cprintf(" %c%c B A N K  I N D O N E S I A                                         %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);
   gotoxy(x,23);cprintf(" %c%c S E R A T U S  R I B U  R U P I A H                    1 0 0 0 0 0 %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);
   gotoxy(x,24);cprintf(" %c%c                                                                    %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);
   gotoxy(x,25);cprintf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);
   Sleep(50);
   }

}


//=================================	 MAIN 	=================================//
main(){
	time_t sekarang;
   sekarang = time(NULL); //untuk mendapatkan semua waktu
   waktu = localtime(&sekarang); // Untuk mendapatkan waktu lokal komputer

  	menu();

getch();
}

