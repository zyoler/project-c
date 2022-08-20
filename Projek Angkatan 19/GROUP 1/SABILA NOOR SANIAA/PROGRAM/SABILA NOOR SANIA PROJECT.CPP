////////////////////////////////////////////////////////////////////////////////
//============================================================================//
//..............................SABILA'S PROJECT..............................//
//                                                                            //
//                       NAMA : SABILA NOOR SANIA                             //
//                       PRODI: D-3 MANAJEMEN INFORMATIKA                     //
//                                                                            //
//                             UKURAN : 120 X 30 cm                           //
//............................................................................//
//============================================================================//
////////////////////////////////////////////////////////////////////////////////


//............................................................................//
//=================================LIBRARY====================================//
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

//............................................................................//
//===============================PROTOTYPE====================================//
void tampilan();
void tampilan1();
void logo();
void logo2();
void logoinformasi();
void login();
void loading();
void daftar();
void menu1();
void menu2();
void informasi();
void menuzakatfitrah();
void menuzakatmal();
void zakatfitrah();
void uangfitrah();
void berasfitrah();
void niatzakatfitrahberas();
void niatzakatfitrahuang();
void zakatmal();
void zakatharta();
void uangmal();
void emasmal();
void perakmal();
void zakatpertanian();
void zakatperdagangan();
void zakatrikaz();
void niatzakatmal();
void notafitrahuang();
void notafitrahberas();
void notamal();
void keluar();

bool validasi_huruf(char arr[]);
bool validasi_angka(char arr[]);
bool cek=true;

//............................................................................//
//==============================VARIABEL GLOBAL===============================//

char username[100];
char password[100];
char pilih;
char telpon[13];
char nama[100];
char jumlahharta[50];
char pendapatan[50];
char kembali;
char hargamakanan[20];
char anggotakeluarga[10];

int tamp2;
int konversi;
int pindah;

float tampungan;
float tampungan2;


struct tm *waktu; //membaca jenis waktu(tahun,bulan,tanggal,hari,jam,menit,detik,menit)
//............................................................................//
//=============================== welcome=====================================//
//............................................................................//
                          //BISMILLAH DULU YA//

//============================================================================//
//..............................VALIDASI......................................//
bool validasi_huruf(char arr[]){
	if(arr[0]==' ' ||arr[strlen(arr)-1]==' '||arr[0]=='-'||arr[strlen(arr)-1]=='-'||arr[0]=='\''||arr[strlen(arr)-1]=='\''){
     return false;
   }if (strlen(arr)<3){
   	return false;
   }
	for(int a=0;arr[a]!=NULL;a++){
   	if(!(arr[a] >='A' && arr[a] <='Z' || arr[a]>='a' &&arr[a] <='z' ||arr[a] ==' '&&arr[a+1]!=' '||arr[a]=='-'&&arr[a+1]!='-'&&arr[a-1]!='-'&&arr[a-1]!=' '&&arr[a+1]!=' '||arr[a]=='\''&&arr[a+1]!='\''&&arr[a-1]!='\''&&arr[a-1]!=' '&&arr[a+1]!=' ')){
        return false;
      }
	}
   return true;
}

//............................................................................//
bool validasi_angka(char arr[]){
	if(arr[0]=='0'||arr[0]==' '||arr[strlen(arr)-1]==' '){
   return false;
	}
	for(int a=0;arr[a]!=NULL;a++){
   	if(!(arr[a] >='0' && arr[a] <='9')){
        return false;
      }
	}
   return true;
}



//............................................................................//
//============================================================================//

                             //KODINGAN-KODINGANKU//
//..............................==TAMPILAN==..................................//

void tampilan(){
	textcolor(2);
	for (int a=1; a<=120; a++){
		for (int b=1; b<=30; b++){
   		cprintf ("%c",219); Sleep(0);
		}
	}tampilan1();
}

//.............................==TAMPILAN 1==.................................//

void tampilan1(){
 	textcolor(7);
		 for (int a=1; a<=120; a++){
 			gotoxy(a,1); cprintf ("%c",219); Sleep(2);
 		}
 		for (int b=1; b<=120; b++){
 			gotoxy(b,30); cprintf ("%c",219); Sleep(2);
 		}
 		for (int c=1; c<=30; c++){
 			gotoxy(1,c); cprintf ("%c",219); Sleep(2);
         gotoxy(2,c); cprintf ("%c",219); Sleep(2);
 		}
 		for (int d=1; d<=30; d++){
 			gotoxy(120,d); cprintf ("%c",219); Sleep(2);
   		gotoxy(119,d); cprintf ("%c",219); Sleep(2);
 		}
}

//.................................==LOGO==...................................//

void logo(){
	tampilan();
  	textbackground(2);
	for (int a=1; a<=14; a++){
     textcolor(a);
		gotoxy(a+29,3);cprintf ("         %c%c                  %c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(a+29,4);cprintf ("   %c %c   %c%c  %c%c%c%c%c%c           %c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(a+29,5);cprintf ("         %c%c  %c%c              %c%c   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(a+29,6);cprintf ("  %c%c%c%c%c  %c%c   %c%c            %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(a+29,7);cprintf (" %c%c   %c%c %c%c    %c%c   %c      %c%c     ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(a+29,8);cprintf (" %c%c%c%c%c%c%c %c%c     %c%c  %c%c%c%c%c%c%c%c      ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(a+29,9);cprintf ("  %c%c%c%c%c  %c%c%c%c%c%c%c%c    %c%c%c%c%c%c       ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
      Sleep(100);
  }
  		gotoxy(40,11); cprintf ("== \"Bersihkan Hartamu dengan Zakat\" ==");
}

//.................................==LOGO2==..................................//

void logo2(){

 textbackground(2);
		gotoxy(5,3);cprintf ("         %c%c                  %c   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(5,4);cprintf ("   %c %c   %c%c  %c%c%c%c%c%c           %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(5,5);cprintf ("         %c%c  %c%c              %c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(5,6);cprintf ("  %c%c%c%c%c  %c%c   %c%c            %c%c   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(5,7);cprintf (" %c%c   %c%c %c%c    %c%c   %c      %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(5,8);cprintf (" %c%c%c%c%c%c%c %c%c     %c%c  %c%c%c%c%c%c%c%c     ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		gotoxy(5,9);cprintf ("  %c%c%c%c%c  %c%c%c%c%c%c%c%c    %c%c%c%c%c%c      ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);

 }

//............................==LOGO INFORMASI==..............................//

void logoinformasi(){
	textbackground(2);
	textcolor(14);
	for(int a=2; a<=23; a++){
   	gotoxy(a,3); cprintf(" %c%c%c%c %c%c%c    %c%c %c%c%c%c%c%c%c  %c%c%c%c  %c%c%c%c%c  %c%c        %c%c     %c%c      %c%c%c%c  %c%c%c%c",35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35);
		gotoxy(a,4); cprintf(" %c%c%c%c %c%c%c%c   %c%c %c%c      %c%c%c%c%c%c %c%c  %c%c %c%c%c      %c%c%c    %c%c%c%c    %c%c     %c%c%c%c",35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35);
 		gotoxy(a,5); cprintf("  %c%c  %c%c %c%c  %c%c %c%c%c%c%c%c%c %c%c  %c%c %c%c  %c%c %c%c%c%c    %c%c%c%c   %c%c  %c%c   %c%c      %c%c",35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35);
 		gotoxy(a,6); cprintf("  %c%c  %c%c  %c%c %c%c %c%c      %c%c  %c%c %c%c%c%c%c  %c%c %c%c  %c%c %c%c  %c%c%c%c%c%c%c%c   %c%c%c%c   %c%c",35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35);
		gotoxy(a,7); cprintf(" %c%c%c%c %c%c   %c%c%c%c %c%c      %c%c%c%c%c%c %c%c %c%c  %c%c  %c%c%c%c  %c%c %c%c%c%c%c%c%c%c%c%c    %c%c  %c%c%c%c",35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35);
		gotoxy(a,8); cprintf(" %c%c%c%c %c%c    %c%c%c %c%c       %c%c%c%c  %c%c  %c%c %c%c   %c%c   %c%c %c%c      %c%c %c%c%c%c   %c%c%c%c",35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35);
   	Sleep(100);
   }
}

//.................................==LOGIN==..................................//

void login(){
 logo();
	for (int a=80; a<=105; a++){
		for (int b=20; b<=24; b++){
   		textcolor(7);
   		gotoxy(a,b);cprintf ("%c",219);
   	}
	}
   gotoxy(83,21); cprintf ("USERNAME:"); gets(username);
   gotoxy (83,23);cprintf ("PASSWORD:"); gets(password);
   	if (strcmp(username,"Saniaa")==0&&strcmp(password,"15122002")==0){
         loading();
          menu1();
      }else{
         for(int a=1; a<=5; a++){
           textbackground(2);	textcolor(4);
         	gotoxy(85,26);cprintf ("Username salah!");Sleep(200);gotoxy(85,26);cprintf ("                        ");}
         	clrscr();
         	login();
         }
}

//............................................................................//

void loading(){
   int tamp=0;
   for(int a=1;a<=51;a++){
   	textcolor(14);Sleep(50);
      gotoxy(85,26);cprintf("Loading ... %d %",tamp);
   	tamp+=2;
   }
}

//............................................................................//
   void daftar(){
  	tampilan(); logo();
   textcolor(14);
   for (int a=35; a<=85; a++){
    for (int b=16; b<=22; b++){
     if (a==35||a==85||b==16||b==22){
      gotoxy(a,b); cprintf ("%c",219);
     }
    }
   }
   gotoxy(37,18);cprintf ("     Masukan Nama Anda Sebelum Hitung Zakat");
   gotoxy(37,20);cprintf (" NAMA               : ");
   bool cek=true;
   while(cek){
		gotoxy(60,20); gets(nama);
      if(validasi_huruf(nama)==false){
        	gotoxy(60,20);cprintf("                       ");
      }else{
      	cek=false;
      }
   }

   do{
   gotoxy(50,25);cprintf ("Apakah Anda Yakin Ingin Lanjut? (y/t)");   pilih=getche();
   	if	 (pilih=='y'){
        clrscr(); menu2();
      }else if (pilih=='t'){
       	clrscr(); menu1();
      }
   }while(pilih!='y'||pilih!='t');

}

//............................................................................//

void menu1(){
  clrscr();
  logo();
  textbackground(2);
 		for(int a=31; a<91; a++){
			for (int b=16; b<23; b++){
   			textcolor(14);
   				if (a==31||a==90||b==16||b==22||a==50||a==70){
   					gotoxy(a,b);cprintf ("%c",219);
     				 }
 			}
 		}
		gotoxy(35,19); cprintf ("1. INFORMASI");
		gotoxy(53,19); cprintf ("2. BAYAR ZAKAT");
		gotoxy(74,19); cprintf ("3. KELUAR");

 		for (int a=80; a<=115; a++){
 			textcolor(14);
 				gotoxy(a,26); cprintf ("%c",219); Sleep(2);
   			gotoxy(a,27); cprintf ("%c",219); Sleep(2);
   			gotoxy(a,28); cprintf ("%c",219); Sleep(2);
 		}
 	textbackground(15);
 	textcolor(0);
 		gotoxy(83,27); cprintf("Masukan Pilihan Anda : "); pilih=getche();
 			if (pilih=='1'){
   			clrscr();
            informasi();
      	}else if(pilih=='2'){
   			clrscr();
           // menu2();
            daftar();
   		}else if(pilih=='3'){
    			clrscr();keluar();
   		}else{
    	  		clrscr();menu1();
   		}
}

//............................................................................//

 void informasi(){
        tampilan(); logoinformasi(); textbackground(2);
    gotoxy(25,10);   cprintf ("===================================================================");
    gotoxy(25,11);   cprintf ("===================================================================");
    gotoxy(25,12);  cprintf ("|                                                                 |");
    gotoxy(25,13);  cprintf ("| UNDANG-UNDANG NOMOR 23 TAHUN 2011 TENTANG PENGELOLAAN ZAKAT     |");
    gotoxy(25,14);  cprintf ("|                                                                 |");
    gotoxy(25,15);  cprintf ("| DITEMPATKAN PADA LEMBARAN NEGARA REPUBLIK INDONESIA TAHUN 2011  |");
    gotoxy(25,16);  cprintf ("|                                                                 |");
    gotoxy(25,17);  cprintf ("| NOMOR 115. PENJELASAN UNDANG-UNDANG NOMOR 23 TAHUN 2011 TENTANG |");
    gotoxy(25,18);  cprintf ("|                                                                 |");
    gotoxy(25,19);  cprintf ("| PENGELOLAAN ZAKAT DITEMPATKAN DALAM TAMBAHAN LEMBARAN           |");
    gotoxy(25,20);  cprintf ("|                                                                 |");
    gotoxy(25,21);  cprintf ("| NEGARA REPUBLIK INDONESIA NOMOR 5255.                           |");
    gotoxy(25,22);  cprintf ("|                                                                 |");
    gotoxy(25,23);  cprintf ("===================================================================");
    gotoxy(25,24);  cprintf ("===================================================================");

 		do{
      gotoxy(59,26);cprintf ("Tekan 0 untuk kembali 1 untuk keluar"); pilih=getche();
 			if (pilih=='0'){
 				clrscr();menu1();
         }else if (pilih=='1'){
          	clrscr(); keluar();
         }else {
         gotoxy(59,26);cprintf ("                                                            ");
			}
     }while(pilih!='0'||pilih!='1');

 }

 //...........................................................................//

 void menu2(){
 	clrscr();
 	tampilan();
 	logo2();
 	textbackground(2);
 	textcolor(7);
  		for (int a=1;a<=45; a++){
   		for (int b=1; b<=30; b++){
   		 if(a==1||a==45||b==11||b==30||b==16||b==21||b==26){
    			gotoxy(a,b);cprintf ("%c",219);
    		}
        }
  		}
	gotoxy(5,13);cprintf ("1. ZAKAT FITRAH");
	gotoxy(5,18); cprintf ("2. ZAKAT MAL");
	gotoxy(5,23); cprintf ("3. KEMBALI");


 	textbackground(15);
 	textcolor(0);
 		gotoxy(10,28); cprintf("Masukan Pilihan Anda : "); pilih=getche();
 			if (pilih=='1'){
   			clrscr();
       		zakatfitrah();
   		}else if(pilih=='2'){
   			clrscr();zakatmal();
   		}else if(pilih=='3'){
    			clrscr();menu1();
   		}else{
   			clrscr(); menu2();
   		}

 }
//............................................................................//

   void zakatfitrah(){
 // daftar(); clrscr();
  tampilan();
 textbackground(2);
 textcolor(7);
  for (int a=1;a<=45; a++){
   for (int b=1; b<=30; b++){
    if(a==1||a==45||b==11||b==30||b==16||b==21||b==26){
    gotoxy(a,b);cprintf ("%c",219);
    }
   }
  }
  logo2();
  gotoxy(5,13); cprintf ("1. UANG");
  gotoxy(5,18); cprintf ("2. BERAS");
  gotoxy(5,23); cprintf ("3. KEMBALI");
  gotoxy(10,28); cprintf ("Masukan Pilihan Anda : "); pilih=getche();
 		if (pilih=='1'){
 			uangfitrah();
 		}else if(pilih=='2'){
 			berasfitrah();
 		}else if(pilih=='3'){
         clrscr();menu2();
      }else{
         clrscr(); zakatfitrah();
 		}

}

//............................................................................//

void uangfitrah(){
//int pilih;
        textbackground(2);
		textcolor(14);
     for (int a=50; a<=113; a++){
      for (int b=4; b<=27; b++){
       if (a==50|| a==113|| b==4||b==27||b==8){
       gotoxy(a,b);cprintf ("%c",219);
       }
      }
     }
	 gotoxy (70,6);cprintf ("===== ZAKAT FITRAH =====");
    gotoxy(53,10);cprintf (" ===================================== ");
    gotoxy(53,11);cprintf ("    \"Harga Beras di Daerah Anda\"    ");
    gotoxy(53,12);cprintf ("  1. 1 Kg = Rp 10.000                 ");
    gotoxy(53,13);cprintf ("  2. 1 Kg = Rp 11.000                 ");
    gotoxy(53,14);cprintf ("  3. 1 Kg = Rp 12.000                 ");
    gotoxy(53,15);cprintf (" ===================================== ");

    bool cek=true;
    while(cek){
      gotoxy(53,16);cprintf ("Jumlah yang Membayar Zakat : ");
      gotoxy(82,16);gets(anggotakeluarga);
   	if(validasi_angka(anggotakeluarga)==false){
      	gotoxy(53,16); cprintf("                                    ");
      }else{
      	cek=false;
      }
   }
    gotoxy(53,17);cprintf ("Masukan Pilihan Harga Beras : "); pilih=getche();
    konversi=atoi(anggotakeluarga);
 		  if (pilih=='1'){
  			 tampungan=10000*2.5*konversi;
        }else if(pilih=='2'){
          tampungan=11000*2.5*konversi;
        }else if(pilih=='3'){
          tampungan=11000*2.5*konversi;
        }else {
         gotoxy(53,16);cprintf("                                      ");
         gotoxy(53,17);cprintf("                                          ");
         uangfitrah();
        }



  	gotoxy(60,20);cprintf ("==================================================");
  	gotoxy(60,21);cprintf ("      Zakat yang Harus Anda Bayar   : Rp %.f", tampungan);
  	gotoxy(60,22);cprintf ("==================================================");

     do{
      	gotoxy(55,25);cprintf ("Apakah Anda Yakin Ingin Membayar Zakat (y/t)?");    pilih=getche();
      	if (pilih=='y'){
            niatzakatfitrahuang();
         }else if (pilih=='t'){
          	clrscr(); menu1();
         }else {
         gotoxy(55,25);cprintf ("                                                            ");
         }
         }while(pilih!='y'||pilih!='t');
}

//............................................................................//

void berasfitrah(){
		textbackground(2);
		textcolor(14);
     for (int a=50; a<=113; a++){
      for (int b=4; b<=27; b++){
       if (a==50|| a==113|| b==4||b==27||b==8){
       gotoxy(a,b);cprintf ("%c",219);
       }
      }

     }

  gotoxy (70,6);cprintf ("===== ZAKAT FITRAH =====");
  bool cek=true;
    while(cek){
      gotoxy(53,9);cprintf ("Jumlah yang Membayar Zakat : ");
      gotoxy(82,9);gets(anggotakeluarga);
   	if(validasi_angka(anggotakeluarga)==false){
      	gotoxy(53,9); cprintf("                                                  ");
      }else{
      	cek=false;
      }
    }
   konversi=atoi(anggotakeluarga);
   tampungan=2.7*konversi;
   tampungan2=3.7*konversi;
  gotoxy(56,20); cprintf ("==================================================");
  gotoxy(56,21); cprintf ("       Zakat yang Harus Anda Bayar : " );
  gotoxy(56,22); cprintf ("    %.2f kg beras atau %.2f liter beras", tampungan,tampungan2);
  gotoxy(56,23); cprintf ("==================================================");


  do{
      	gotoxy(55,25);cprintf ("Apakah Anda Yakin Ingin Membayar Zakat (y/t)?");    pilih=getche();
      	if (pilih=='y'){
            niatzakatfitrahberas();
         }else if (pilih=='t'){
          	clrscr(); menu1();
         }else {
           gotoxy(55,25);cprintf("                                                    ");
         }
  }while(pilih!='y'||pilih!='t');
}

//............................................................................//

void niatzakatfitrahuang(){
clrscr();
	tampilan();
		for (int a=3; a<=60; a++){
			textcolor(6);
   		gotoxy(a,3);cprintf("%c",219);
		}
		for (int a=50; a<=118; a++){
			textcolor(6);
         gotoxy(a,28);cprintf("%c",219);
		}

	textcolor(14);
    	gotoxy(7,6);cprintf  ("NIAT ZAKAT FITRAH UNTUK DIRI SENDIRI");
    	gotoxy(7,7);cprintf  ("------------------------------------");
    	gotoxy(7,8);cprintf ("Nawaytu an ukhrija zakaata al-fitri 'an nafsi fardha lillahi ta'ala");
    	gotoxy(7,9);cprintf  ("NIAT ZAKAT FITRAH UNTUK ISTRI");
    	gotoxy(7,10);cprintf ("----------------------------");
    	gotoxy(7,11);cprintf("Nawaytu an ukhrija zakaata al-fitri ‘an zaujati fardha lillahi ta’ala");
    	gotoxy(7,12);cprintf ("NIAT ZAKAT FITRAH UNTUK ANAK LAKI-LAKI");
    	gotoxy(7,13);cprintf ("--------------------------------------");
    	gotoxy(7,14);cprintf("Nawaytu an ukhrija zakaata al-fitri 'an waladi (sebutkan nama spesifik) fardha lillahi ta'ala ");
    	gotoxy(7,15);cprintf ("NIAT ZAKAT FITRAH UNTUK ANAK PEREMPUAN");
    	gotoxy(7,16);cprintf ("--------------------------------------");
    	gotoxy(7,17);cprintf("Nawaytu an ukhrija zakaata al-fitri 'an bint (sebutkan nama spesifik) fardha lillahi ta'ala");
    	gotoxy(7,18);cprintf ("NIAT ZAKAT FITRAH UNTUK DIRI SENDIRI DAN KELUARGA");
    	gotoxy(7,19);cprintf ("-------------------------------------------------");
    	gotoxy(7,20);cprintf("Nawaytu an ukhrija zakaata al-fitri anni wa an jami'i ma yalzimuniy nafaqatuhum syar'an fardha lillahi ta'ala");
    	gotoxy(7,21);cprintf ("NIAT ZAKAT FITRAH UNTUK ORANG YANG DIWAKILKAN");
    	gotoxy(7,22);cprintf ("---------------------------------------------");
    	gotoxy(7,23);cprintf("Nawaytu an ukhrija zakaata al-fitri'an (sebutkan nama spesifik) fardha lillahi ta'ala");


      do{
      textcolor(0);
      	gotoxy(60,27);cprintf ("apakah ingin tetap lanjut (y/t)?"); pilih=getche();
         	if (pilih=='y'){
            	clrscr();notafitrahuang();
            }else if (pilih=='t'){
            	clrscr(); zakatfitrah();
            }else {
            gotoxy(60,27);cprintf ("                                                            ");
            }
   	}while(pilih!='0'||pilih!='1');
}

//............................................................................//

//............................................................................//

void niatzakatfitrahberas(){
clrscr();
	tampilan();
		for (int a=3; a<=60; a++){
			textcolor(6);
   		gotoxy(a,3);cprintf("%c",219);
		}
		for (int a=50; a<=118; a++){
			textcolor(6);
         gotoxy(a,28);cprintf("%c",219);
		}

	textcolor(14);
    	gotoxy(7,6);cprintf  ("NIAT ZAKAT FITRAH UNTUK DIRI SENDIRI");
    	gotoxy(7,7);cprintf  ("------------------------------------");
    	gotoxy(7,8);cprintf ("Nawaytu an ukhrija zakaata al-fitri 'an nafsi fardha lillahi ta'ala");
    	gotoxy(7,9);cprintf  ("NIAT ZAKAT FITRAH UNTUK ISTRI");
    	gotoxy(7,10);cprintf ("----------------------------");
    	gotoxy(7,11);cprintf("Nawaytu an ukhrija zakaata al-fitri ‘an zaujati fardha lillahi ta’ala");
    	gotoxy(7,12);cprintf ("NIAT ZAKAT FITRAH UNTUK ANAK LAKI-LAKI");
    	gotoxy(7,13);cprintf ("--------------------------------------");
    	gotoxy(7,14);cprintf("Nawaytu an ukhrija zakaata al-fitri 'an waladi (sebutkan nama spesifik) fardha lillahi ta'ala ");
    	gotoxy(7,15);cprintf ("NIAT ZAKAT FITRAH UNTUK ANAK PEREMPUAN");
    	gotoxy(7,16);cprintf ("--------------------------------------");
    	gotoxy(7,17);cprintf("Nawaytu an ukhrija zakaata al-fitri 'an bint (sebutkan nama spesifik) fardha lillahi ta'ala");
    	gotoxy(7,18);cprintf ("NIAT ZAKAT FITRAH UNTUK DIRI SENDIRI DAN KELUARGA");
    	gotoxy(7,19);cprintf ("-------------------------------------------------");
    	gotoxy(7,20);cprintf("Nawaytu an ukhrija zakaata al-fitri anni wa an jami'i ma yalzimuniy nafaqatuhum syar'an fardha lillahi ta'ala");
    	gotoxy(7,21);cprintf ("NIAT ZAKAT FITRAH UNTUK ORANG YANG DIWAKILKAN");
    	gotoxy(7,22);cprintf ("---------------------------------------------");
    	gotoxy(7,23);cprintf("Nawaytu an ukhrija zakaata al-fitri'an (sebutkan nama spesifik) fardha lillahi ta'ala");


      do{
      textcolor(0);
      	gotoxy(60,27);cprintf ("apakah ingin tetap lanjut (y/t)?"); pilih=getche();
         	if (pilih=='y'){
            	clrscr();notafitrahberas();
            }else if (pilih=='t'){
            	clrscr(); zakatfitrah();
            }else {
            gotoxy(60,27);cprintf ("                                                            ");
            }
   	}while(pilih!='0'||pilih!='1');
}

//............................................................................//

void zakatmal(){
 clrscr();
 tampilan();
 textbackground(2);
 textcolor(7);
  for (int a=1;a<=45; a++){
   for (int b=1; b<=30; b++){
    if(a==1||a==45||b==11||b==30||b==16||b==21||b==26){
    gotoxy(a,b);cprintf ("%c",219);
    }
   }
  }
  for (int c=11; c<=21; c++){
    gotoxy(23,c); cprintf ("%c",219);
  }
  	logo2();
  gotoxy(3,13);cprintf ("1. Zakat Harta");
  gotoxy(27,13);cprintf ("2. Zakat");
  gotoxy(29,14); cprintf(" Pertanian");
  gotoxy(3,18);cprintf ("3. Zakat");
  gotoxy(5,19); cprintf(" Perdagangan");
  gotoxy(27,18);cprintf ("4. Zakat Rikaz");
  gotoxy(5,23); cprintf ("5. Keluar");
  gotoxy(10,28);cprintf ("Masukan Pilihan Anda : "); pilih=getche();
  	if (pilih=='1'){
    clrscr();zakatharta();
   }else if (pilih=='2'){
    zakatpertanian();
   }else if (pilih=='3'){
    zakatperdagangan();
   }else if (pilih=='4'){
    zakatrikaz();
   }else if(pilih=='5'){
   	menu2();
   }else {
    clrscr();zakatmal();
   }



}

////////////////////////////////////////////////////////////////////
void zakatharta(){
textbackground(2);
 textcolor(7);
  for (int a=1;a<=45; a++){
   for (int b=1; b<=30; b++){
    if(a==1||a==45||b==11||b==30||b==16||b==21||b==26){
    gotoxy(a,b);cprintf ("%c",219);
    }
   }
  }
  logo2();
 //printf ("Zakat Dapat Berupa?\n");
 gotoxy(5,13);cprintf ("1. Uang\n");
 gotoxy(5,18);cprintf ("2. Emas\n");
 gotoxy(5,23);cprintf ("3. Perak\n");
 gotoxy(10,28);cprintf ("Masukan Pilihan Anda : "); pilih=getche();
      if(pilih=='1'){
        uangmal();
      }else if(pilih=='2'){
      	emasmal();
      }else if(pilih=='3'){
         perakmal();
      }else{
       clrscr(); zakatharta();
      }
}
////////////////////////////////////////////////////////////
void uangmal(){
		textbackground(2);
		textcolor(14);
     for (int a=50; a<=113; a++){
      for (int b=4; b<=27; b++){
       if (a==50|| a==113|| b==4||b==27||b==8){
       gotoxy(a,b);cprintf ("%c",219);
       }
      }
     }
	 gotoxy (70,6);cprintf ("===== ZAKAT MAL =====");
    bool cek=true;
    while(cek){
      gotoxy(53,16);cprintf ("Masukan Jumlah Harta Yang Anda Miliki: Rp ");
      gotoxy(95,16);gets(jumlahharta);
   	if(validasi_angka(jumlahharta)==false){
      	gotoxy(53,16); cprintf("                                             ");
      }else{
      	cek=false;
    	}
    }
        konversi=atoi(jumlahharta);
        if(konversi<51000000){
        		  textcolor(14);
              gotoxy(53,13);	 cprintf ("=========================================================");
              gotoxy(53,15);	 cprintf ("=========================================================");
              gotoxy(53,14);	cprintf ("     Jumlah Harta yang anda miliki belum wajib Zakat"); Sleep(500);
              	do{
      				gotoxy(55,26);cprintf ("Tekan 0 untuk kembali 1 untuk keluar"); pilih=getche();
 							if (pilih=='0'){
 								clrscr();zakatmal();
         				}else if (pilih=='1'){
          					clrscr(); keluar();
         				}else {
           					gotoxy(50,26);cprintf ("                                                    ");
         				}
     				}while(pilih!='0'||pilih!='1');
			}else{
              tampungan=2.5*konversi/100;
              gotoxy(53,18);cprintf ("=========================================================");
              gotoxy(53,23);cprintf ("=========================================================");
              gotoxy(53,20);cprintf ("              Zakat Yang Harus Anda Bayar");
              gotoxy(53,21);cprintf ("                       Rp %.f",tampungan);

            		do{
      					gotoxy(53,26);cprintf ("Apakah Anda Yakin Ingin Membayar Zakat (y/t)?");    pilih=getche();
      						if (pilih=='y'){
             					clrscr(); niatzakatmal();
         					}else if (pilih=='t'){
          						clrscr(); menu1();
         					}else {
           					gotoxy(53,26);cprintf ("                                                      ");
         				}
         			}while(pilih!='y'||pilih!='t');
      		}
}
////////////////////////////////////////////////////////////////
 void emasmal(){
 textbackground(2);
		textcolor(14);
     for (int a=50; a<=113; a++){
      for (int b=4; b<=27; b++){
       if (a==50|| a==113|| b==4||b==27||b==8){
       gotoxy(a,b);cprintf ("%c",219);
       }
      }
     }
	 gotoxy (70,6);cprintf ("===== ZAKAT MAL =====");
    bool cek=true;
    while(cek){
      gotoxy(53,16);cprintf ("Masukan Jumlah Emas Yang Anda Miliki:            gram ");
      gotoxy(93,16);gets(jumlahharta);
   	if(validasi_angka(jumlahharta)==false){
      	gotoxy(53,16); cprintf("                                              ");
      }else{
      	cek=false;
    	}
 	}
  	  	konversi=atoi(jumlahharta);
   	if(konversi<85){
      	textcolor(14);
              gotoxy(53,15);cprintf ("=========================================================");
              gotoxy(53,17);cprintf ("=========================================================");
              gotoxy(53,16);cprintf("    Jumlah Emas yang anda miliki belum wajib Zakat        "); Sleep(500);
         do{
      		gotoxy(55,26);cprintf ("Tekan 0 untuk kembali 1 untuk keluar"); pilih=getche();
 					if (pilih=='0'){
 						clrscr();zakatmal();
         		}else if (pilih=='1'){
          			clrscr(); keluar();
         		}else {
               gotoxy(50,26);cprintf ("                                                            ");
               }
         }while(pilih!='0'||pilih!='1');

      }else{
      	tampungan=600000*2.5*konversi/100;
              gotoxy(53,18);cprintf ("=========================================================");
              gotoxy(53,23);cprintf ("=========================================================");
              gotoxy(53,20);cprintf ("              Zakat Yang Harus Anda Bayar                ");
              gotoxy(53,21);cprintf ("                       Rp %.f",tampungan);

         do{
      	gotoxy(53,26);cprintf ("Apakah Anda Yakin Ingin Membayar Zakat (y/t)?");    pilih=getche();
      	if (pilih=='y'){
             clrscr(); niatzakatmal();
         }else if (pilih=='t'){
          	clrscr(); menu1();
         }else {
         gotoxy(53,26);cprintf ("                                                            ");
         }
         }while(pilih!='y'||pilih!='t');
      }
 }
 ////////////////////////////////////////////////////////////////////////
 void perakmal(){
   textbackground(2);
  textcolor(14);
     for (int a=50; a<=113; a++){
      for (int b=4; b<=27; b++){
       if (a==50|| a==113|| b==4||b==27||b==8){
       gotoxy(a,b);cprintf ("%c",219);
       }
      }
     }
	 gotoxy (70,6);cprintf ("===== ZAKAT MAL =====");
  bool cek=true;
    while(cek){
      gotoxy(53,16);cprintf ("Masukan Jumlah Perak Yang Anda Miliki:             gram ");
      gotoxy(93,16);gets(jumlahharta);
   	if(validasi_angka(jumlahharta)==false){
      	gotoxy(53,16); cprintf("                                              ");
      }else{
      	cek=false;
    	}
    }
  	 konversi=atoi(jumlahharta);
   	if(konversi<595){
      	textcolor(14);
              gotoxy(53,15);cprintf ("=========================================================");
              gotoxy(53,17);cprintf ("=========================================================");
              gotoxy(53,16);cprintf("    Jumlah Perak yang anda miliki belum wajib jakat       "); Sleep(500);
              //gotoxy(53,16);printf ("                                                              ");
         do{
      		gotoxy(55,26);cprintf ("Tekan 0 untuk kembali 1 untuk keluar"); pilih=getche();
 					if (pilih=='0'){
 						clrscr();zakatmal();
         		}else if (pilih=='1'){
          			clrscr(); keluar();
         		}else {
               gotoxy(50,26);cprintf ("                                                            ");
               }
     		}while(pilih!='0'||pilih!='1');

      }else{
      	tampungan=200000*2.5*konversi/100;
         gotoxy(53,18);cprintf ("=========================================================");
         gotoxy(53,23);cprintf ("=========================================================");
         gotoxy(53,20);cprintf ("              Zakat Yang Harus Anda Bayar");
         gotoxy(53,21);cprintf ("                       Rp %.f",tampungan);
      }
         do{
      	gotoxy(53,26);cprintf ("Apakah Anda Yakin Ingin Membayar Zakat (y/t)?");    pilih=getche();
      	if (pilih=='y'){
             clrscr(); niatzakatmal();
         }else if (pilih=='t'){
          	clrscr(); menu1();
         }else {
         gotoxy(53,26);cprintf ("                                                            ");
         }
         }while(pilih!='y'||pilih!='t');


 }


 ////////////////////////////zakat Pertanian////////////////////////////////
 //=======================================================================//
  void zakatpertanian(){
  textbackground(2);
		textcolor(14);
     for (int a=50; a<=113; a++){
      for (int b=4; b<=27; b++){
       if (a==50|| a==113|| b==4||b==27||b==8){
       gotoxy(a,b);cprintf ("%c",219);
       }
      }
     }
	 gotoxy (70,6);cprintf ("===== ZAKAT MAL =====");

    gotoxy(53,10);cprintf ("===================================================");
    gotoxy(53,11);cprintf ("| 1. menggunakan air irigasi                      |");
    gotoxy(53,12);cprintf ("| 2. menggunakan air hujan/sungai dan sejenisnya  |");
    gotoxy(53,13);cprintf ("===================================================");
    gotoxy(53,15); cprintf ("Masukan Pilihan Anda:");  pilih=getche();
     	if (pilih=='1'){

      bool cek=true;
     while(cek){
      gotoxy(53,16);cprintf ("Total Pendapatan Bersih: ");
      gotoxy(78,16);gets(pendapatan);
   	if(validasi_angka(pendapatan)==false){
      	gotoxy(53,16); cprintf("                                 ");
      }else{
      	cek=false;
      }
     }

     cek=true;
     while(cek){
      gotoxy(53,17);cprintf ("Harga Hasil Panen (Kg) : ");
      gotoxy(78,17);gets(hargamakanan);
   	if(validasi_angka(hargamakanan)==false){
      	gotoxy(53,16); cprintf("                                 ");
      }else{
      	cek=false;
      }
     }
            konversi=atoi(pendapatan);
            pindah=atoi(hargamakanan);
          	tamp2=653*pindah;
          if(konversi>tamp2){
           tampungan=0.05*konversi;
           	gotoxy(53,18);cprintf ("=========================================================");
            gotoxy(53,23);cprintf ("=========================================================");
         	gotoxy(53,20);cprintf ("              Zakat Yang Harus Anda Bayar");
         	gotoxy(53,21);cprintf ("                       Rp %.f",tampungan);

               do{
      				gotoxy(55,25);cprintf ("Apakah Anda Yakin Ingin Membayar Zakat (y/t)?");    pilih=getche();
      					if (pilih=='y'){
           				 	clrscr(); niatzakatmal();
         				}else if (pilih=='t'){
          					clrscr(); menu1();
         				}else {
           					gotoxy(55,25);cprintf ("                                                            ");
         				}
         		}while(pilih!='y'||pilih!='t');

          }else{
          gotoxy(53,15);cprintf ("=========================================================");
          gotoxy(53,17);cprintf ("=========================================================");
          gotoxy(53,16);cprintf ("                  Anda Belum Wajib Zakat                 ");

            do{
      		gotoxy(50,25);cprintf ("Tekan 0 untuk kembali 1 untuk keluar"); pilih=getche();
 					if (pilih=='0'){
 						clrscr();zakatmal();
         		}else if (pilih=='1'){
          			clrscr(); keluar();
         		}
     			}while(pilih!='0'||pilih!='1');

          }
      } else if (pilih=='2'){
          bool cek=true;
     			while(cek){
      			gotoxy(53,16);cprintf ("Total Pendapatan Bersih: ");
      			gotoxy(78,16);gets(pendapatan);
   					if(validasi_angka(pendapatan)==false){
      				gotoxy(53,16); cprintf("                                    ");
      				}else{
      				cek=false;
    					}
      }
      cek=true;
     	while(cek){
      gotoxy(53,17);cprintf ("Harga Hasil Panen (Kg) : ");
      gotoxy(78,17);gets(hargamakanan);
   	if(validasi_angka(hargamakanan)==false){
      	gotoxy(53,16); cprintf("                                 ");
      }else{
      	cek=false;
      }
     }
         konversi=atoi(pendapatan);
         pindah=atoi(hargamakanan);
          tamp2=653*pindah;
          if(konversi>tamp2){
           tampungan=0.10*konversi;
            gotoxy(53,18);cprintf ("=========================================================");
            gotoxy(53,23);cprintf ("=========================================================");
         	gotoxy(53,20);cprintf ("              Zakat Yang Harus Anda Bayar");
         	gotoxy(53,21);cprintf ("                       Rp %.f",tampungan);
                do{
      				gotoxy(55,25);cprintf ("Apakah Anda Yakin Ingin Membayar Zakat (y/t)?");    pilih=getche();
      					if (pilih=='y'){
                     	clrscr(); niatzakatmal();
         				}else if (pilih=='t'){
          					clrscr(); menu1();
         				}else {
           					gotoxy(55,25);cprintf ("                                                            ");
         				}
         		}while(pilih!='y'||pilih!='t');

          }else{
           gotoxy(53,15);cprintf ("=========================================================");
           gotoxy(53,17);cprintf ("=========================================================");
           gotoxy(53,16);cprintf ("                  Anda Belum Wajib Zakat                 ");
              do{
      				gotoxy(50,25);cprintf ("Tekan 0 untuk kembali 1 untuk keluar"); pilih=getche();
 							if (pilih=='0'){
 								clrscr();zakatmal();
         				}else if (pilih=='1'){
          					clrscr(); keluar();
         				}else {
           					gotoxy(50,25);cprintf ("                                                            ");
         				}
     			}while(pilih!='0'||pilih!='1');
          }
      }else{
      gotoxy(53,15); printf ("                                                           ");
        zakatpertanian();
      }

  }
////////////////////////////////////////////////////////////////////////////////
//===============================Void Zakat Perdagangan=======================//
void zakatperdagangan(){
   textbackground(2);
   textcolor(14);
     for (int a=50; a<=113; a++){
      for (int b=4; b<=27; b++){
       if (a==50|| a==113|| b==4||b==27||b==8){
       gotoxy(a,b);cprintf ("%c",219);
       }
      }
     }
	 gotoxy (70,6);cprintf ("===== ZAKAT MAL =====");
    cek=true;
     while(cek){
      gotoxy(53,16);cprintf ("Pendapatan Bersih : ");
      gotoxy(73,16);gets(pendapatan);
   	if(validasi_angka(pendapatan)==false){
      	gotoxy(53,16); cprintf("                                 ");
      }else{
      	cek=false;
      }
     }
      tamp2=85*600000;
         konversi=atoi(pendapatan);
          if(konversi>tamp2){
           tampungan=0.02575*konversi;
            gotoxy(53,18);cprintf ("=========================================================");
            gotoxy(53,23);cprintf ("=========================================================");
         	gotoxy(53,20);cprintf ("              Zakat Yang Harus Anda Bayar");
         	gotoxy(53,21);cprintf ("                       Rp %.f",tampungan);
               do{
      				gotoxy(55,25);cprintf ("Apakah Anda Yakin Ingin Membayar Zakat (y/t)?");    pilih=getche();
      					if (pilih=='y'){
             				clrscr(); niatzakatmal();
         				}else if (pilih=='t'){
          					clrscr(); menu1();
         				}else {
           					gotoxy(55,25);cprintf ("                                                            ");
         				}
         		}while(pilih!='y'||pilih!='t');



          }else{
           gotoxy(53,15);cprintf ("=========================================================");
           gotoxy(53,17);cprintf ("=========================================================");
           gotoxy(53,16);cprintf ("                  Anda Belum Wajib Zakat                 ");
               do{
      				gotoxy(50,25);cprintf ("Tekan 0 untuk kembali 1 untuk keluar"); pilih=getche();
 							if (pilih=='0'){
 								clrscr();zakatmal();
         				}else if (pilih=='1'){
          					clrscr(); keluar();
         				}else {
           					gotoxy(50,25);cprintf ("                                                            ");
         				}
     				}while(pilih!='0'||pilih!='1');


          }
}

////////////////////////////////////////////////////////////////////////////////
//============================zakat Rikaz=====================================//

void zakatrikaz(){
textbackground(2);
		textcolor(14);
     for (int a=50; a<=113; a++){
      for (int b=4; b<=27; b++){
       if (a==50|| a==113|| b==4||b==27||b==8){
       gotoxy(a,b);cprintf ("%c",219);
       }
      }
     }
	 gotoxy (70,6);cprintf ("===== ZAKAT MAL =====");
	 int tamp2;
     while(cek){
      gotoxy(53,16);cprintf ("Harga Rikaz : ");
      gotoxy(71,16);gets(pendapatan);
   	if(validasi_angka(pendapatan)==false){
      	gotoxy(53,16); cprintf("                                 ");
      }else{
      	cek=false;
      }
     }
   tamp2=85*600000;
         konversi=atoi(pendapatan);
          if(konversi>tamp2){
           tampungan=0.2*konversi;
            gotoxy(53,18);cprintf ("=========================================================");
            gotoxy(53,23);cprintf ("=========================================================");
         	gotoxy(53,20);cprintf ("              Zakat Yang Harus Anda Bayar");
         	gotoxy(53,21);cprintf ("                       Rp %.f",tampungan);

               do{
      				gotoxy(55,25);cprintf ("Apakah Anda Yakin Ingin Membayar Zakat (y/t)?");    pilih=getche();
      					if (pilih=='y'){
            				 clrscr(); niatzakatmal();
         				}else if (pilih=='t'){
          					 clrscr(); menu1();
         				}else {
           					gotoxy(55,25);cprintf ("                                                            ");
         				}
         		}while(pilih!='y'||pilih!='t');


          }else{
            gotoxy(53,15);cprintf ("=========================================================");
            gotoxy(53,17);cprintf ("=========================================================");
            gotoxy(53,16);cprintf ("                  Anda Belum Wajib Zakat                 ");
               do{
      				gotoxy(50,25);cprintf ("Tekan 0 untuk kembali 1 untuk keluar"); pilih=getche();
 							if (pilih=='0'){
 								clrscr();zakatmal();
                     }else if (pilih=='1'){
          					clrscr(); keluar();
         				}else {
           					gotoxy(50,25);cprintf ("                                                            ");
         				}
     				}while(pilih!='0'||pilih!='1');


          }
}

//............................................................................//

void niatzakatmal(){
    tampilan();
		for (int a=3; a<=60; a++){
			textcolor(6);
   		gotoxy(a,10);cprintf("%c",219);
		}
		for (int a=50; a<=118; a++){
			textcolor(6);
   		gotoxy(a,20);cprintf("%c",219);
		}

      textcolor(14);
      gotoxy(50,14); cprintf("=====NIAT ZAKAT MAL=====");
      gotoxy(35,16); cprintf(" Nawaytu an ukhrija zakaata maali fardha lillahi ta'ala");

      do{
      textcolor(0);
      	gotoxy(60,27);cprintf ("apakah ingin tetap lanjut (y/t)?"); pilih=getche();
         	if (pilih=='y'){
            	clrscr();notamal();
            }else if (pilih=='t'){
            	clrscr(); zakatfitrah();
            }else {
            gotoxy(60,27);cprintf ("                                                            ");
            }
   	}while(pilih!='0'||pilih!='1');


 }

//............................................................................//

//==========================================
void notamal(){
 	textcolor(7);
 for (int a=17; a<=103; a++){
 	gotoxy(a,4); cprintf ("%c",219);
 }
 for (int b=17; b<=103; b++){
 	gotoxy(b,26); cprintf ("%c",219);
 }
 for (int c=4; c<=26; c++){
 	gotoxy(17,c); cprintf ("%c",219);
   gotoxy(18,c); cprintf ("%c",219);
 }
 for (int d=4; d<=26; d++){
 	gotoxy(102,d); cprintf ("%c",219);
   gotoxy(103,d); cprintf ("%c",219);
 }
   textcolor(14);
   gotoxy(30,6); cprintf ("============================================================");
   gotoxy(59,7); cprintf ("^^^");
   gotoxy(50,8); cprintf ("NOTA PEMBAYARAN ZAKAT");
   gotoxy(30,9); cprintf ("============================================================");
   gotoxy(30,11);cprintf ("Tanggal           : %d/%d/%d",waktu->tm_mday,waktu->tm_mon+1,1900+waktu->tm_year);
   gotoxy(30,12);cprintf ("Nama              : %s", nama);
   gotoxy(30,13);cprintf ("Jenis Zakat       : Zakat Mal");
   gotoxy(30,14);cprintf ("Total Bayar       : ");
   gotoxy(64,17);cprintf ("-------------------------");
   gotoxy(64,18);cprintf ("Rp %.f", tampungan);
   gotoxy(64,19);cprintf ("-------------------------");
   gotoxy(30,24);cprintf ("============================================================");


   do{
      textcolor(14);
      	gotoxy(40,25);cprintf ("apakah ingin Membayar Zakat Lagi (y/t)?"); pilih=getche();
         	if (pilih=='y'){
            	clrscr();menu2();
            }else if (pilih=='t'){
            	clrscr(); menu1();
            }else {
            gotoxy(50,25);cprintf ("                                                            ");
            }
   	}while(pilih!='0'||pilih!='1');
}

//............................................................................//


void notafitrahuang(){
 	textcolor(7);
 for (int a=17; a<=103; a++){
 	gotoxy(a,4); cprintf ("%c",219);
 }
 for (int b=17; b<=103; b++){
 	gotoxy(b,26); cprintf ("%c",219);
 }
 for (int c=4; c<=26; c++){
 	gotoxy(17,c); cprintf ("%c",219);
   gotoxy(18,c); cprintf ("%c",219);
 }
 for (int d=4; d<=26; d++){
 	gotoxy(102,d); cprintf ("%c",219);
   gotoxy(103,d); cprintf ("%c",219);
 }
   textcolor(14);
   gotoxy(30,6); cprintf ("============================================================");
   gotoxy(59,7); cprintf ("^^^");
   gotoxy(50,8); cprintf ("NOTA PEMBAYARAN ZAKAT");
   gotoxy(30,9); cprintf ("============================================================");
   gotoxy(30,11);cprintf ("Tanggal           : %d/%d/%d",waktu->tm_mday,waktu->tm_mon+1,1900+waktu->tm_year);
   gotoxy(30,12);cprintf ("Nama              : %s", nama);
   gotoxy(30,13);cprintf ("Jenis Zakat       : Zakat Fitrah");
   gotoxy(30,14);cprintf ("Total Bayar       : ");
   gotoxy(64,17);cprintf ("-------------------------");
   gotoxy(64,18);cprintf ("Rp %.f", tampungan);
   gotoxy(64,19);cprintf ("-------------------------");
   gotoxy(30,24);cprintf ("============================================================");


   do{
      textcolor(14);
      	gotoxy(40,25);cprintf ("apakah ingin Membayar Zakat Lagi (y/t)?"); pilih=getche();
         	if (pilih=='y'){
            	clrscr();menu2();
            }else if (pilih=='t'){
            	clrscr(); menu1();
            }else {
            gotoxy(50,25);cprintf ("                                                            ");
            }
   	}while(pilih!='0'||pilih!='1');
}

//............................................................................//

void notafitrahberas(){
 	textcolor(7);
 for (int a=17; a<=103; a++){
 	gotoxy(a,4); cprintf ("%c",219);
 }
 for (int b=17; b<=103; b++){
 	gotoxy(b,26); cprintf ("%c",219);
 }
 for (int c=4; c<=26; c++){
 	gotoxy(17,c); cprintf ("%c",219);
   gotoxy(18,c); cprintf ("%c",219);
 }
 for (int d=4; d<=26; d++){
 	gotoxy(102,d); cprintf ("%c",219);
   gotoxy(103,d); cprintf ("%c",219);
 }
   textcolor(14);
   gotoxy(30,6); cprintf ("============================================================");
   gotoxy(59,7); cprintf ("^^^");
   gotoxy(50,8); cprintf ("NOTA PEMBAYARAN ZAKAT");
   gotoxy(30,9); cprintf ("============================================================");
   gotoxy(30,11);cprintf ("Tanggal           : %d/%d/%d",waktu->tm_mday,waktu->tm_mon+1,1900+waktu->tm_year);
   gotoxy(30,12);cprintf ("Nama              : %s", nama);
   gotoxy(30,13);cprintf ("Jenis Zakat       : Zakat Fitrah");
   gotoxy(30,14);cprintf ("Total Bayar       : ");
   gotoxy(59,17);cprintf ("----------------------------");
   gotoxy(40,18); cprintf ("Jumlah  :");
   gotoxy(59,18);cprintf (" %.2f Kg atau %.2f liter", tampungan,tampungan2);
   gotoxy(59,19);cprintf ("----------------------------");
   gotoxy(30,24);cprintf ("============================================================");


   do{
      textcolor(14);
      	gotoxy(40,25);cprintf ("apakah ingin Membayar Zakat Lagi (y/t)?"); pilih=getche();
         	if (pilih=='y'){
            	clrscr();menu2();
            }else if (pilih=='t'){
            	clrscr(); menu1();
            }else {
            gotoxy(50,25);cprintf ("                                                            ");
            }
   	}while(pilih!='0'||pilih!='1');
}

//............................................................................//

void keluar(){
 tampilan();
	textcolor(14); textbackground(2);
   gotoxy(44,13); cprintf ("                  ^^^                   ");
   gotoxy(44,14); cprintf ("======================================");
   gotoxy(44,15); cprintf ("   \"BERSIHKAN HARTAMU DENGAN ZAKAT\"   ");
   gotoxy(44,16); cprintf ("======================================");
   gotoxy(47,28); cprintf ("copyright by Sabila Noor Sania");
   getch();
   clrscr();
     tampilan();
   gotoxy(47,14); cprintf ("Menutup Program..");  Sleep(500);
   gotoxy(47,14); cprintf ("Menutup Program...");  Sleep(500);
   gotoxy(47,14); cprintf ("Menutup Program....");  Sleep(500);
   gotoxy(47,14); cprintf ("Menutup Program.....");  Sleep(500);
    login();
}



//............................................................................//
//================================MENU MAIN===================================//
//............................................................................//

int main(){
time_t saatini;  //untuk mendapatkan jenis waktu sejak zaman //saatini sebagai variabel
saatini=time(NULL); //untuk mendapatkan semua waktu
waktu= localtime(&saatini); //mendapatkan waktu di komputer


login();


getch();
}
