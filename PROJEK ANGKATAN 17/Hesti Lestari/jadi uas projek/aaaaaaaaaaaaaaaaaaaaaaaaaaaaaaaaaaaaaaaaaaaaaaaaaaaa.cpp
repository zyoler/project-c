#include <conio.h>
#include <stdio.h>
#include <windows.h>
////////////////////////////////prototype////////////////////////////////////////
void bingkai();
void bingkai2();
void bingkai3();
void kotak();
void tabel();
void login();
void admin();
void daftar();
void tambahstok1();
void loginkonsumen();
void konsumen();
void pengguna();
void databarang();
void welcome();
void daftarnama1();
void daftarnama2();
void daftarjual1();
void daftarjual2();
void pesan();
void pesan2();
void beli();
void beli2();
void trmksh();
void info();
void sorry();
void kembali();
void unggul();
void user();
void nota();
void stok1();
void tambahstok();
void logout();
void akun();
void valnama();
int valAngka(char angka[]);
int valHuruf(char huruf[]);
int valAlamat(char huruf[]);
int valangka1(char h[]);
int valnopil(char hi[]);
int valnopil2(char hi[]);
int validasiNumber(char c[100]);
/////////////////////////////variabel global///////////////////////////////////
char kode,nohp[30],umur[10],alamat[50],nocanon[10],nabar[30],merk[50],nonikon[10],nokam;
int harga,jumlah,total,kurang,nomor,tekor;
int a,b,c;
char jeniskel[30];
char nama[300];
char name[200];
char pass[200];
char adminname[20]="hestichan";
char password[20]="arigatou";
char userr[200];
char username[200];
char pas[200];
char tambah[2][3];
int stok[6]={10};
char ya[20]="ya";
char tidak[20]="tidak";
char ubay[10];
char z[5];
int error = 0;
/////////////////////////////////kodingan///////////////////////////////////////
void bingkai(){
	for(int a=2; a<=50; a++){
   	for(int b=2; b<=100; b++){
			if(a==2 ||a==50||b==2||b==3||b==99||b==100){
         	textcolor(14);
            gotoxy(b,a);cprintf("%c",219);
         }else{
         	textbackground(2);cprintf(" ");
         }
      }
   }
}
void bingkai2(){
	for(int a=5; a<=30; a++){
   	for(int b=5; b<=70; b++){
			if(a==5 ||a==30||b==5||b==6||b==69||b==70){
         	textcolor(14);
            gotoxy(b,a);cprintf("%c",219);
         }else{
         	textbackground(2);cprintf(" ");
         }
      }
   }
}
void bingkai3(){
	for(int a=2; a<=50; a++){
   	for(int b=2; b<=100; b++){
			if(a==2 ||a==50||b==2||b==3||b==80||b==90||b==99||b==100){
         	textcolor(14);
            gotoxy(b,a);cprintf("%c",219);
         }else{
         	textbackground(2);cprintf(" ");
         }
      }
   }
}

/////////////////////////////////////L O G I N///////////////////////////////////////
void login(){
	clrscr();
	bingkai();
   gotoxy(35,20);textcolor(14);cprintf("LL      ooo    GGGG   II  NN   NN");
   gotoxy(35,21);textcolor(14);cprintf("LL     o   o  GG      II  NNN  NN");
   gotoxy(35,22);textcolor(14);cprintf("LL     o   o  GG GGG  II  NNNNNNN");
   gotoxy(35,23);textcolor(14);cprintf("LLLLLL  ooo    GGGG   II  NN   NN");
   gotoxy(30,30);textcolor(14);cprintf("1. ADMIN");
   gotoxy(60,30);textcolor(14);cprintf("2. USER");
   char a;
   gotoxy(40,35); cprintf("MASUKKAN ANGKA: ");
   do{
   	gotoxy(56,35);cprintf(" ");
      gotoxy(56,35);a=getche();
      if(a!='1' && a!='2'){
         textcolor(12);
      	gotoxy(56,35);cprintf("INPUTAN SALAH!");Sleep(100);
         gotoxy(56,35);cprintf("              ");
      }
   }
   while(a!='1' && a!='2');
   if(a=='1'){
   	clrscr(); admin();
   }
   else{
   	clrscr(); daftar();
   }
 }

void daftar(){
	bingkai();
   	gotoxy(20,20);textcolor(14);cprintf("kk kk   ooo   N    NN   SSSS  UU  UU  M     M  EEEEE  N    NN");
   	gotoxy(20,21);textcolor(14);cprintf("kk k   o   o  NNN  NN  SS     UU  UU  MM   MM  EE     NNN  NN");
   	gotoxy(20,22);textcolor(14);cprintf("kkk    o   o  NNNNNNN   SSSS  UU  UU  MMMMMMM  EEEEE  NNNNNNN");
   	gotoxy(20,23);textcolor(14);cprintf("kk kk   ooo   NN   NN  SSSSS   UUUU   MM M MM  EEEEE  NN   NN");
   	gotoxy(30,30);textcolor(14);cprintf("1. Daftar");
   	gotoxy(60,30);textcolor(14);cprintf("2. Login");
   	char a;
   		gotoxy(40,35); cprintf("MASUKKAN ANGKA: ");
   		do{
   			gotoxy(56,35);cprintf(" ");
      		gotoxy(56,35);a=getche();
      		if(a!='1' && a!='2'){
      		textcolor(12);
      		gotoxy(56,35);cprintf("INPUTAN SALAH!");Sleep(1000);
         	gotoxy(56,35);cprintf("              ");
     		 	}
   		}
   		while(a!='1' && a!='2');
   		if(a=='1'){
   			clrscr(); konsumen();
   		}
   		else{
   			clrscr(); loginkonsumen(); welcome();
   		}


}

void admin(){
clrscr(); bingkai3(); bingkai2();
   for(int x=1;x<=64;x++){
   	textcolor(14);
      gotoxy(6+x,13);cprintf("%c",219);

   }

   for(int a=6;a<=65;a++){
		if(a==6||a==65){
        	textcolor(14);
         while(true){
         	gotoxy(23,7);textcolor(14); cprintf("  A   DDDD  M     M II N    N");
         	gotoxy(23,8);textcolor(14); cprintf(" A A  DD  D MM   MM II NN  NN");
         	gotoxy(23,9);textcolor(14); cprintf("AAAAA DD  D MMMMMMM II NNNNNN");
         	gotoxy(23,10);textcolor(14);cprintf("AA AA DDDD  MM M MM II NN  NN");
   			gotoxy(20,16);textcolor(14);cprintf("Masukkan adminname: ");gets(nama);
   			gotoxy(20,20);textcolor(14);cprintf("Masukkan Password : ");gets(pass);
      		if(strcmp(adminname,nama)==0 && strcmp(password,pass)==0){
   				clrscr(); databarang(); pengguna(); stok1();
      		}
   			else{
   				gotoxy(10,35);textcolor(14);cprintf("Username dan Password anda salah");Sleep(1500);
         		gotoxy(10,35);cprintf("                                ");
         		gotoxy(40,16);cprintf("                       ");
               gotoxy(40,20);cprintf("                       ");
   			}
      	}
      }
   	else{
         	textbackground(2);cprintf(" ");
         }

     }
}
void loginkonsumen(){
clrscr(); bingkai3(); bingkai2();
   for(int x=1;x<=64;x++){
   	textcolor(14);
      gotoxy(6+x,13);cprintf("%c",219);

   }

   for(int a=6;a<=65;a++){
	  	if(a==6){
        	textcolor(14);
         gotoxy(8,8);textcolor(14);  cprintf("kk kk   ooo   N    NN   SSSS  UU  UU  M     M  EEEEE  N    NN");
   		gotoxy(8,9);textcolor(14);  cprintf("kk k   o   o  NNN  NN  SS     UU  UU  MM   MM  EE     NNN  NN");
         gotoxy(8,10);textcolor(14); cprintf("kkk    o   o  NNNNNNN   SSSS  UU  UU  MMMMMMM  EEEEE  NNNNNNN");
   		gotoxy(8,11);textcolor(14); cprintf("kk kk   ooo   NN   NN  SSSSS   UUUU   MM M MM  EEEEE  NN   NN");
   		gotoxy(20,16);textcolor(14);cprintf("Masukkan Username: ");gets(nama);
   		gotoxy(20,20);textcolor(14);cprintf("Masukkan Password: ");gets(pass);
      	if(strcmp(nama,userr)==0 && strcmp(pass,pas)==0){
   			clrscr(); welcome();
      	}else{
         	gotoxy(20,25);textcolor(14);cprintf("Anda Belum Terdaftar Mohon daftar Lebih Dahulu");
            loginkonsumen();
         }
      }
   	else{
         	textbackground(2);cprintf(" ");
         }

     }
}
void konsumen(){
   clrscr();bingkai3();bingkai2();
   for(int x=1;x<=64;x++){
   	textcolor(14);
      gotoxy(6+x,13);cprintf("%c",219);
   }
   gotoxy(8,8);textcolor(14);  cprintf("kk kk   ooo   N    NN   SSSS  UU  UU  M     M  EEEEE  N    NN");
   gotoxy(8,9);textcolor(14);  cprintf("kkkk   o   o  NNN  NN  SS     UU  UU  MM   MM  EE     NNN  NN");
   gotoxy(8,10);textcolor(14); cprintf("kkk    o   o  NNNNNNN   SSSS  UU  UU  MMMMMMM  EEEEE  NNNNNNN");
   gotoxy(8,11);textcolor(14); cprintf("kk kk   ooo   NN   NN  SSSSS   UUUU   MM M MM  EEEEE  NN   NN");
   do {
   	gotoxy(36,15); cprintf("                     ");
   	gotoxy(15,15); cprintf("Nama               : ");gets(nama);
   } while(valHuruf(nama)!=0 || nama[0]==NULL);
   do {
   	gotoxy(36,17); cprintf("                                ");
   	gotoxy(15,17); cprintf("No.HP              : +628");gets(nohp);
   } while(valAngka(nohp)!=0 || strlen(nohp)<10 || strlen(nohp)<11);
   do {
   	gotoxy(36,19); cprintf("                     ");
   	gotoxy(15,19); cprintf("Umur               : ");gets(umur);
   } while(valAngka(umur)!=0|| strlen(umur)>2);
   do{
   	gotoxy(36,21); cprintf("                     ");
   	gotoxy(15,21); cprintf("Jenis Kelamin (L/P): "); gets(jeniskel);
   } while(valHuruf(jeniskel)!=0 || strcmp(jeniskel,"L")!=0 && strcmp(jeniskel,"P")!=0);
   do {
   	gotoxy(36,23); cprintf("                                 ");
   	gotoxy(15,23); cprintf("Alamat             : ");gets(alamat);
   }while(valAlamat(alamat)!=0);
	do{
   	gotoxy(15,25); cprintf("                     ");
   	gotoxy(15,25); cprintf("Username           : ");gets(userr);
   }while(valHuruf(username)!=0);
   	gotoxy(15,27); cprintf("Password           : ");gets(pas);
   	gotoxy(15,35); cprintf("SELAMAT DATA BERHASIL TERSIMPAN!");Sleep(1500);
   clrscr(); akun(); 	welcome();
   }
void akun(){
	bingkai();bingkai3();bingkai2();
	textcolor(14);
      gotoxy(15,8); cprintf("SELAMAT DATA BERHASIL TERSIMPAN!");
      gotoxy(15,10); cprintf("Nama             : %s",nama);
      gotoxy(15,12); cprintf("No HP            : +628%s",nohp);
      gotoxy(15,14); cprintf("Umur             : %s",umur);
      gotoxy(15,16); cprintf("Jenis Kelamin    : %s",jeniskel);
      gotoxy(15,18); cprintf("Alamat           : %s",alamat);
      gotoxy(15,20); cprintf("Username         : %s",userr);
      gotoxy(15,22); cprintf("Password         : %s",pas);
      gotoxy(15,35); cprintf("Apakah anda ingin login ke Aplikasi LESTARI ON CAM?");
      gotoxy(15,37); cprintf("(ya/tidak)");
      gotoxy(26,37); cscanf("%s",&ya);
      while(true){
      	if(strcmp(ya,"ya")==0){
      		loginkonsumen(); welcome();
      	}
      	else if(strcmp(ya,"tidak")==0){
      		clrscr();bingkai();bingkai3();bingkai2();
      	   gotoxy(10,10); cprintf("Apakah anda ingin log out dari Aplikasi LESTARI ON CAM?");
         	gotoxy(10,12); cprintf("(ya/tidak)");
      		gotoxy(21,12); cscanf("%s",&ya);
            while(true){
      			if(strcmp(ya,"ya")==0){
      				login();
      			}
      			else if(strcmp(tidak,"tidak")==0){
      				akun();
      			}
         		else{
       				gotoxy(40,40);cprintf(" eroooorrr!");Sleep(1500);
         			gotoxy(40,40);cprintf("                      ");
         			gotoxy(21,12);cprintf("                      ");
            		gotoxy(21,12); cscanf("%s",&ya);
      			}
            }
      	}
      	else{
       		gotoxy(40,40);cprintf(" eroooorrr!!!!");Sleep(1500);
         	gotoxy(40,40);cprintf("                       ");
         	gotoxy(25,37);cprintf("                       ");
            gotoxy(26,37); cscanf("%s",&ya);
      	}
     }
}
void logout(){
clrscr(); bingkai(); bingkai3(); bingkai2();
   gotoxy(6,10);  cprintf(" apakah anda ingin logout?");
   gotoxy(6,13); cprintf("(ya/tidak)");
   gotoxy(16,17); cscanf("%s",&ya);
      if(strcmp(ya,"ya")==0){
      	login();
      }
      else if(strcmp(tidak,"tidak")==0){
      	stok1();
      }
      else{
       	textcolor(12);
         gotoxy(20,17);cprintf(" eroooorrr!!!!)");Sleep(1500);
         gotoxy(20,17);cprintf("                       ");
         gotoxy(16,17);cprintf("                       ");
         gotoxy(16,17); cscanf("%s",&ya);
      	}
}
/////////////////////////////data barang////////////////////////////
void databarang(){
	bingkai(); bingkai3(); bingkai2();
   textcolor(14);
		gotoxy(23,14);textcolor(14);cprintf("1. Kamera Canon");
   	gotoxy(23,20);textcolor(14);cprintf("2. Kamera Nikon");
  	char a;
   	gotoxy(23,24);textcolor(14);cprintf("Masukan nomor pilihan: ");
   do{
   	gotoxy(50,24);cprintf(" ");
      gotoxy(50,24);a=getche();
      if(a!='1' && a!='2'){
      	textcolor(12);
      	gotoxy(56,35);cprintf("INPUTAN SALAH!");Sleep(1000);
         gotoxy(56,35);cprintf("              ");
      }
   }
   while(a!='1' && a!='2');
   if(a=='1'){
   clrscr(); daftarjual1(); stok1();
   }
   else{
   clrscr(); daftarjual2(); stok1();
   }
   for(int a=5; a<=30; a++){
   	for(int b=5; b<=70; b++){
			if(a==5 ||a==30||b==5||b==6||b==69||b==70){
         	textcolor(14);
            gotoxy(b,a);cprintf("%c",219);
         }else{
         	textbackground(2);cprintf(" ");
         }
      }
   }

}
void daftarjual1(){
	 	bingkai();
      gotoxy(35,4);  cprintf("Daftar Nama KAMERA DSLR CANON\n\n");
      gotoxy(8,8);  cprintf(" No  Nama Kamera       Spesifikasi                                      Harga       ");
      gotoxy(8,12); cprintf("                    sensor CMOS Full Frame (36 x 24 mm)                             ");
      gotoxy(8,14); cprintf("                    ketajaman 30 MP                                                 ");
      gotoxy(8,16); cprintf(" 1 Canon EOS       processor gambar DIGIC 6+                         Rp 30.000.000  ");
      gotoxy(8,18); cprintf("    5D Mark IV      teknologi Digital Lensa Optimizer (DLO)                         ");
      gotoxy(8,20); cprintf("                    Dual Pixel RAW (DPRAW)                                          ");
      gotoxy(8,22); cprintf("                    BUILT-IN WIFI                                                   ");
      gotoxy(8,26); cprintf("                    sensor APS-C (22.3 x 14.9 mm)                                   ");
      gotoxy(8,28); cprintf("                    ketajaman 24 MP                                                 ");
      gotoxy(8,30); cprintf(" 2 Canon EOS 750D   shutter speed 1/4000 detik- min 30 detik         RP 7.000.000   ");
      gotoxy(8,32); cprintf("                    memiliki fitur Wi-Fi dan NFC                                    ");
      gotoxy(8,36); cprintf("                    22.1 MP CMOS Full frame 36.0 x 24.0 mm                          ");
      gotoxy(8,38); cprintf(" 3 Canon EOS 5D     kemampuan ISO hingga 25600 (102400 optional)                    ");
      gotoxy(8,39); cprintf("    Mark III 61                                                      Rp. 16.000.000 ");
      gotoxy(8,40); cprintf("                    Digic 5+ sensor                                                 ");
      gotoxy(8,42); cprintf("                    titik fokus                                                     ");
      for(int a=2;a<=50;a++){
   		for(int b=2;b<=100;b++){
      		if(a==6||a==10||a==24||a==34||a==44||((a>6 && a<44)&&(b==25||b==75))){
      			textcolor(14);
            	gotoxy(b,a);cprintf("%c",219);
      		}
      		else{
          	textbackground(2);
            }
 		 	}
    }
			 user();
        	clrscr();
}
void daftarjual2(){
      bingkai();
		textcolor(14);
      gotoxy(35,4);  cprintf("Daftar Nama KAMERA DSLR NIKON\n\n");
      gotoxy(5,8); cprintf(" No  Nama Kamera       Spesifikasi                                  Harga           ");
      gotoxy(5,12); cprintf("                    24 MP CMOS Expeed 4 Sensor                                      ");
      gotoxy(5,14); cprintf("                    ISO range hingga 25600 (Boost)                                  ");
      gotoxy(5,16); cprintf(" 1  Nikon D3300     Continous Shoot hingga 5 fps                   Rp. 5.000.000    ");
      gotoxy(5,18); cprintf("                    kemampuan recording video FullHD 60 fps                         ");
      gotoxy(5,22); cprintf("                    sensor 24 MP CMOS image processor XPEED 4                      ");
      gotoxy(5,24); cprintf("                    ISO sensitivity100-25.600                                      ");
      gotoxy(5,26); cprintf(" 2  Nikon D3400     5 fps continous shooting                       Rp. 7.000.000   ");
      gotoxy(5,28); cprintf("                    Full HD 60 fps video recording                                 ");
      gotoxy(5,30); cprintf("                    fitur Bluetooth Low Energy                                    ");
      gotoxy(5,34); cprintf("                    sensor APS-C (23.5 x 15.6 mm) bertipe CMOS                     ");
      gotoxy(5,36); cprintf("                    ukuran pixel 24 MP                                             ");
      gotoxy(5,38); cprintf(" 3  Nikon D5200     processor Expeed 3                             Rp. 6.000.000   ");
      gotoxy(5,40); cprintf("                    kemampuan Shutter speed 1/4000-30 detik                        ");
      gotoxy(5,42); cprintf("                    tersedia fitur Wi-Fi                                           ");
      for(int a=2;a<=50;a++){
   		for(int b=2;b<=100;b++){
      		if(a==6||a==10||a==24||a==34||a==44||((a>6 && a<44)&&(b==25||b==75))){
      			textcolor(14);
            	gotoxy(b,a);cprintf("%c",219);
      		}
      		else{
          	textbackground(2);
            }
 		 	}
    }
    user(); clrscr();
      }
void stok1(){
	 bingkai();
    gotoxy(20,4);  cprintf(" DAFTAR STOK KAMERA");
    gotoxy(4,8);  cprintf(" No     Nama Kamera                    merk/type                                 stok");
    gotoxy(4,13); cprintf(" 1      Kamera DSLR CANON             Canon EOS 5D Mark IV                        %d",stok[0]);
    gotoxy(4,17); cprintf("                                      Canon EOS 750D                              %d",stok[1]);
    gotoxy(4,20); cprintf("                                      Canon EOS 5D Mark III 61                    %d",stok[2]);
    gotoxy(4,27); cprintf(" 2      KAMERA DSLR NIKON             Nikon D3300                                 %d",stok[3]);
    gotoxy(4,30); cprintf("                                      Nikon D3400                                 %d",stok[4]);
    gotoxy(4,33); cprintf("                                      Nikon D5200                                 %d",stok[5]);
    char arr[1];
   	gotoxy(4,45);textcolor(14);cprintf(" Apakah anda ingin menambah stok? pilih kamera yang akan ditambah stoknya: ");
      gotoxy(4,47);textcolor(14);cprintf(" tekan 0 untuk kembali log in...");
      for(int a=2;a<=50;a++){
   		for(int b=2;b<=100;b++){
      		if(a==6||a==10||a==24||a==44||((a>6 && a<44)&&(b==8||b==35||b==70))){
      			textcolor(14);
            	gotoxy(b,a);cprintf("%c",219);
      		}
      		else{
          	textbackground(2);
            }
 		 	}
      }
  		while(true){
      gotoxy(85,45);gets(arr);
      	if(strcmp(arr,"1")==0||strcmp(arr,"2")==0){
   			clrscr(); tambahstok();
   		}else if(strcmp(arr,"0")==0){
         	clrscr();login();
         }else{
      		textcolor(12);
      		gotoxy(56,35);cprintf("INPUTAN SALAH!");Sleep(1000);
         	gotoxy(56,35);cprintf("              ");
            gotoxy(85,45);cprintf("           ");
      	}
  		}
}
void tambahstok(){
	bingkai();
   	gotoxy(4,4);  cprintf(" DAFTAR PENAMBAHAN STOK KAMERA CANON");
   	gotoxy(4,8);  cprintf(" No     Nama Kamera                    merk/type                   stok");
   	gotoxy(4,13); cprintf(" 1      Kamera DSLR CANON             Canon EOS 5D Mark IV        %d",stok[0]);
   	gotoxy(4,17); cprintf(" 2                                    Canon EOS 750D              %d",stok[1]);
   	gotoxy(4,20); cprintf(" 3                                    Canon EOS 5D Mark III 61    %d",stok[2]);
   	gotoxy(4,27);  cprintf(" Kamera mana yang akan ditambah?");
   	tabel();
   	a:
   	textcolor(14);
      gotoxy(50,27); cscanf("%d",&a);
   	if(a==1 || a==2 || a==3){
    	char pluss[100];
    	int plus;
    	char ya[5];
    	bingkai();
    		gotoxy(4,4);  cprintf(" DAFTAR PENAMBAHAN STOK KAMERA CANON");
    		gotoxy(4,8);  cprintf(" No     Nama Kamera                    merk/type                  stok          tambah stok");
    		if(a==1){
      		gotoxy(4,12); cprintf("  1      Kamera DSLR CANON       Canon EOS 5D Mark IV              %d   ",stok[0]);
      		tabel();
      		textbackground(2);
      		b:
      		gotoxy(90,12); cprintf("        ");
      		gotoxy(90,12); cscanf("%s",&pluss);
      	if(valAngka(pluss)!=0){
      		goto b;
      	} else {
      		plus = atoi(pluss);
    			gotoxy(4,30); cprintf(" simpan? (ya/tidak)");
      	while(true){
      		gotoxy(25,30); cscanf("%s",&ya);
      	if(strcmp(ya,"ya")==0){
      		stok[0]+=plus;clrscr(); tambahstok();
      	}
      	else if(strcmp(ya,"tidak")==0){
      		clrscr();stok1();
      	}
      	else{
       		gotoxy(4,35);cprintf(" eroooorrr!!!!)");Sleep(1500);
         	gotoxy(4,35);cprintf("               ");
         	gotoxy(25,30);cprintf("              ");
      	}
      }
     }
	}
    else if(a==2){
      gotoxy(4,12); cprintf("   2                               Canon EOS 750D                   %d   ",stok[1]);
      tabel();
      textbackground(2);
      c:
      gotoxy(90,12); cprintf("        ");
      gotoxy(90,12); cscanf("%s",&pluss);
      if(valAngka(pluss)!=0){
      	goto c;
      } else {
      	plus = atoi(pluss);
    		gotoxy(4,30); cprintf(" simpan? (ya/tidak)");
      	while(true){
      	gotoxy(25,30); cscanf("%s",&ya);
      	if(strcmp(ya,"ya")==0){
      		stok[1]+=plus;clrscr(); tambahstok();
      	}
      	else if(strcmp(ya,"tidak")==0){
      		clrscr();stok1();
      	}
      	else{
       		gotoxy(4,35);cprintf(" eroooorrr!!!!)");Sleep(1500);
         	gotoxy(4,35);cprintf("               ");
         	gotoxy(25,30);cprintf("              ");
      	}
      	}
      }
    }

    else if(a==3){

      gotoxy(4,12); cprintf("   3                                Canon EOS 5D Mark III 61        %d",stok[2]);
      tabel();
      textbackground(2);
      d:
      gotoxy(90,12); cprintf("        ");
      gotoxy(90,12); cscanf("%s",&pluss);
      if(valAngka(pluss)!=0){
      	goto d;
      } else {
      	plus = atoi(pluss);
    		gotoxy(4,30); cprintf(" simpan? (ya/tidak)");
      	while(true){
      	gotoxy(25,30); cscanf("%s",&ya);
      	if(strcmp(ya,"ya")==0){
      		stok[2]+=plus;clrscr(); tambahstok();
      	}
      	else if(strcmp(ya,"tidak")==0){
      		clrscr();stok1();
      	}
      	else{
       		gotoxy(4,35);cprintf(" eroooorrr!!!!)");Sleep(1500);
         	gotoxy(4,35);cprintf("               ");
         	gotoxy(25,30);cprintf("              ");
      	}
      	}
      }
    }

     }else{
         textcolor(12);
            gotoxy(50,32);cprintf(" INPUTAN SALAH!");Sleep(1500);
            gotoxy(50,32);cprintf("               ");
         	gotoxy(50,27);cprintf("              ");
            goto a;
	}
}
void tambahstok1(){
	bingkai();
   	gotoxy(4,4);  cprintf(" DAFTAR PENAMBAHAN STOK KAMERA NIKON");
    	gotoxy(4,8);  cprintf(" No     Nama Kamera                    merk/type                    stok");
    	gotoxy(4,13); cprintf(" 1      Kamera DSLR NIKON             Nikon D3300                 %d",stok[3]);
    	gotoxy(4,17); cprintf(" 2                                    Nikon D3400                 %d",stok[4]);
    	gotoxy(4,20); cprintf(" 3                                    Nikon D5200                 %d",stok[5]);
   	gotoxy(4,27);  cprintf(" Kamera mana yang akan ditambah?");
   	tabel();
   	e:
   	textcolor(14);
      gotoxy(50,27); cscanf("%d",&a);
   	if(a==1 || a==2 || a==3){
    	char pluss[100];
    	int plus;
    	char ya[5];
    	bingkai();
    		gotoxy(4,4);  cprintf(" DAFTAR PENAMBAHAN STOK KAMERA NIKON");
    		gotoxy(4,8);  cprintf(" No     Nama Kamera                       merk/type            stok           tambah stok");
    	if(a==1){
      	gotoxy(4,12); cprintf(" 1      Kamera DSLR NIKON              Nikon D3300               %d            ",stok[3]);
      	tabel();
      	textbackground(2);
      	f:
      	gotoxy(90,12); cprintf("        ");
      	gotoxy(90,12); cscanf("%s",&pluss);
      	if(valAngka(pluss)!=0){
      		goto f;
      	} else {
      		plus = atoi(pluss);
    			gotoxy(4,30); cprintf(" simpan? (ya/tidak)");
      	while(true){
      		gotoxy(25,30); cscanf("%s",&ya);
      		if(strcmp(ya,"ya")==0){
      			stok[3]+=plus;clrscr(); tambahstok();
      		}
      		else if(strcmp(ya,"tidak")==0){
      			clrscr();stok1();
      		}
      		else{
         	textcolor(12);
       		gotoxy(4,35);cprintf(" eroooorrr!!!!)");Sleep(1500);
         	gotoxy(4,35);cprintf("               ");
         	gotoxy(25,30);cprintf("              ");
      	}
      	}
      }
    }
    else if(a==2){
      gotoxy(4,12); cprintf(" 2                                        Nikon D3400            %d   ",stok[4]);
      tabel();
      textbackground(2);
      g:
      gotoxy(90,12); cprintf("        ");
      gotoxy(90,12); cscanf("%s",&pluss);
      if(valAngka(pluss)!=0){
      	goto g;
      } else {
      	plus = atoi(pluss);
    		gotoxy(4,30); cprintf(" simpan? (ya/tidak)");
      	while(true){
      	gotoxy(25,30); cscanf("%s",&ya);
      	if(strcmp(ya,"ya")==0){
      		stok[4]+=plus;clrscr(); tambahstok();
      	}
      	else if(strcmp(ya,"tidak")==0){
      		clrscr();stok1();
      	}
      	else{
       		gotoxy(4,35);cprintf(" eroooorrr!!!!)");Sleep(1500);
         	gotoxy(4,35);cprintf("               ");
         	gotoxy(25,30);cprintf("              ");
      	}
      	}
      }
    }

    else if(a==3){

      gotoxy(4,12); cprintf(" 3                                         Nikon D5200           %d",stok[5]);
      tabel();
      textbackground(2);
      h:
      gotoxy(90,12); cprintf("        ");
      gotoxy(90,12); cscanf("%s",&pluss);
      if(valAngka(pluss)!=0){
      	goto h;
      } else {
      	plus = atoi(pluss);
    		gotoxy(4,30); cprintf(" simpan? (ya/tidak)");
      	while(true){
      	gotoxy(25,30); cscanf("%s",&ya);
      	if(strcmp(ya,"ya")==0){
      		stok[5]+=plus;clrscr(); tambahstok();
      	}
      	else if(strcmp(ya,"tidak")==0){
      		clrscr();stok1();
      	}
      	else{
       		gotoxy(4,35);cprintf(" eroooorrr!!!!)");Sleep(1500);
         	gotoxy(4,35);cprintf("               ");
         	gotoxy(25,30);cprintf("              ");
            goto e;
      	}
      	}
      }
    }
   }
   clrscr(); stok1(); user(); logout();
}

void tabel(){
for(int a=2;a<=24;a++){
   		for(int b=2;b<=100;b++){
      		if(a==6||a==10||a==24||((a>6 && a<44)&&(b==8||b==35||b==65||b==78))){
      			textcolor(14);
            	gotoxy(b,a);cprintf("%c",219);
      		}
      		else{
          	textbackground(2);
            }
 		 	}
    }
}
void pengguna(){
	gotoxy(8,48); cprintf(""); scanf("%d",&nomor);
      		getch(); clrscr();
      		pesan();
}
void user(){
	char enter;
	gotoxy(8,46); cprintf("Enter untuk melanjutkan ");
   enter = getch();
   if(enter==13){
		clrscr();
   } else {
   	user();
   }
}

void user1(){
	gotoxy(8,46); cprintf("Enter untuk melanjutkan ");
            getch();

            clrscr();
}

void kotak(){
bingkai();
for(int a=2;a<=50;a++){
   	for(int b=2;b<=100;b++){
      	if(a==1||a==9||a==17||a==21||a==26||a==39){
         textcolor(14);
            gotoxy(b,a);cprintf("%c",219);

         }else{
          	textbackground(2);
         }
		}
	}
}

/////////////////////////////////welcome///////////////////////////////////////////////////////////////////
void welcome(){
	kotak();
   	gotoxy(15,11); cprintf("       * * * * * * *                                  * * * * * * *      ");
  		gotoxy(15,12); cprintf("         * *   * *            LESTARI ON CAM            * *   * *        ");
	  	gotoxy(15,13); cprintf("          *     *                                        *     *         ");
     	gotoxy(15,15); cprintf("              MENYEDIAKAN JENIS KAMERA DSLR CANON DAN NIKON              ");
     	gotoxy(15,19); cprintf(" Dsn.Ciranto RT/RW 07/02 Ds.Jadimulya Kec.Langkaplancar Kab.Pangandaran  ");
      gotoxy(15,23); cprintf("                      Selamat datang di HESTI ON CAM                     ");
     	gotoxy(15,24); cprintf("                      Kami disini siap melayani anda!                    ");
      gotoxy(15,28); cprintf("          Daftar Nama Barang :                                           ");
      gotoxy(15,30); cprintf("        1. KAMERA DSLR CANON                                             ");
      gotoxy(15,32); cprintf("        2. KAMERA DSLR NIKON                                             ");
     	gotoxy(15,34); cprintf("        3. INFO KAMERA                                                   ");
      gotoxy(15,36); cprintf("        0. KEMBALI                                                   ");
            char a;
   			gotoxy(40,38); cprintf("MASUKKAN ANGKA: ");
   			do{
   				gotoxy(56,40);cprintf(" ");
      			gotoxy(56,38);a=getche();
      			if(a!='1' && a!='2' && a!='3'){
         			textcolor(12);
      				gotoxy(56,35);cprintf("INPUTAN SALAH!");Sleep(1000);
               	gotoxy(56,35);cprintf("              ");
                  gotoxy(56,35);cprintf("                           ");
                  textcolor(14);
                  gotoxy(56,35);cscanf("%s",&a);
      			}
            }
            while(a!='1' && a!='2' && a!='3');
            if(a=='1'){
            	clrscr(); daftarnama1();
            }
            else if(a=='2'){
            	clrscr(); daftarnama2();
            }
            else if(a=='3'){
            	clrscr();info();
            }else if(a=='0'){
            	clrscr();login();
            }
   }
///////////////////////////////daftar nama kamera canon/////////////////////////////////////

void daftarnama1(){
	 	bingkai();
      gotoxy(35,4);  cprintf("Daftar Nama KAMERA DSLR CANON\n\n");
      		gotoxy(8,8);  cprintf(" No  Nama Kamera       Spesifikasi                                      Harga       ");
      		gotoxy(8,12); cprintf("                    sensor CMOS Full Frame (36 x 24 mm)                             ");
      		gotoxy(8,14); cprintf("                    ketajaman 30 MP                                                 ");
      		gotoxy(8,16); cprintf(" 1 Canon EOS        processor gambar DIGIC 6+                        Rp 30.000.000  ");
      		gotoxy(8,18); cprintf("    5D Mark IV      teknologi Digital Lensa Optimizer (DLO)                         ");
      		gotoxy(8,20); cprintf("                    Dual Pixel RAW (DPRAW)                                          ");
      		gotoxy(8,22); cprintf("                    BUILT-IN WIFI                                                   ");
      		gotoxy(8,26); cprintf("                    sensor APS-C (22.3 x 14.9 mm)                                   ");
      		gotoxy(8,28); cprintf("                    ketajaman 24 MP                                                 ");
      		gotoxy(8,30); cprintf(" 2 Canon EOS 750D   shutter speed 1/4000 detik- min 30 detik         RP 7.000.000   ");
         	gotoxy(8,32); cprintf("                    memiliki fitur Wi-Fi dan NFC                                    ");
      		gotoxy(8,36); cprintf("                    22.1 MP CMOS Full frame 36.0 x 24.0 mm                          ");
      		gotoxy(8,38); cprintf(" 3 Canon EOS 5D     kemampuan ISO hingga 25600 (102400 optional)                    ");
      		gotoxy(8,39); cprintf("    Mark III 61                                                      Rp. 16.000.000 ");
      		gotoxy(8,40); cprintf("                    Digic 5+ sensor                                                 ");
      		gotoxy(8,42); cprintf("                    titik fokus                                                     ");
      for(int a=2;a<=50;a++){
   		for(int b=2;b<=100;b++){
      		if(a==6||a==10||a==24||a==34||a==44||((a>6 && a<44)&&(b==25||b==75))){
      			textcolor(14);
            	gotoxy(b,a);cprintf("%c",219);
      		}
      		else{
          	textbackground(2);
            }
 		 	}
    }
      	 user();  pesan(); beli(); nota();
    	}



void daftarnama2(){
		bingkai();
		textcolor(14);
      gotoxy(35,4); cprintf("Daftar Nama KAMERA DSLR NIKON");
      gotoxy(8,8); cprintf(" No  Nama Kamera       Spesifikasi                                    Harga        ");
      gotoxy(8,12); cprintf("                    24 MP CMOS Expeed 4 Sensor                                     ");
      gotoxy(8,14); cprintf("                    ISO range hingga 25600 (Boost)                                 ");
      gotoxy(8,16); cprintf(" 1  Nikon D3300     Continous Shoot hingga 5 fps                     Rp. 5.000.000 ");
      gotoxy(8,18); cprintf("                    kemampuan recording video FullHD 60 fps                        ");
      gotoxy(8,20); cprintf("                    sensor 24 MP CMOS image processor XPEED 4                      ");
      gotoxy(8,22); cprintf("                    ISO sensitivity100-25.600                                      ");
      gotoxy(8,26); cprintf(" 2  Nikon D3400     5 fps continous shooting                         Rp. 7.000.000 ");
      gotoxy(8,28); cprintf("                    Full HD 60 fps video recording                                 ");
      gotoxy(8,30); cprintf("                    fitur Bluetooth Low Energy                                     ");
      gotoxy(8,32); cprintf("                    sensor APS-C (23.5 x 15.6 mm) bertipe CMOS                     ");
      gotoxy(8,34); cprintf("                    ukuran pixel 24 MP                                             ");
      gotoxy(8,36); cprintf(" 3  Nikon D5200     processor Expeed 3                               Rp. 6.000.000 ");
      gotoxy(8,38); cprintf("                    kemampuan Shutter speed 1/4000-30 detik                        ");
      gotoxy(8,39); cprintf("                    tersedia fitur Wi-Fi                                           ");
      for(int a=2;a<=50;a++){
   		for(int b=2;b<=100;b++){
      		if(a==6||a==10||a==24||a==34||a==44||((a>6 && a<44)&&(b==25||b==75))){
      			textcolor(14);
            	gotoxy(b,a);cprintf("%c",219);
      		}
      		else{
          	textbackground(2);
            }
 		 	}
    }
      user(); pesan2(); beli2(); nota();

      }
void daftarjuall2(){
		textcolor(14);
      gotoxy(15,4); cprintf("Daftar Nama KAMERA DSLR NIKON");
      gotoxy(15,8); cprintf("  No  Nama Kamera       Spesifikasi                                  Harga           ");
      gotoxy(15,12); cprintf("                    24 MP CMOS Expeed 4 Sensor                                      ");
      gotoxy(15,14); cprintf("                    ISO range hingga 25600 (Boost)                                  ");
      gotoxy(15,16); cprintf(" 1  Nikon D3300     Continous Shoot hingga 5 fps                   Rp. 5.000.000    ");
      gotoxy(15,18); cprintf("                    kemampuan recording video FullHD 60 fps                         ");
      gotoxy(15,22); cprintf("                    sensor 24 MP CMOS image processor XPEED 4                       ");
      gotoxy(15,24); cprintf("                    ISO sensitivity100-25.600                                       ");
      gotoxy(15,26); cprintf(" 2  Nikon D3400     5 fps continous shooting                       Rp. 7.000.000    ");
      gotoxy(15,28); cprintf("                    Full HD 60 fps video recording                                  ");
      gotoxy(15,30); cprintf("                    fitur Bluetooth Low Energy                                      ");
      gotoxy(15,34); cprintf("                    sensor APS-C (23.5 x 15.6 mm) bertipe CMOS                      ");
      gotoxy(15,36); cprintf("                    ukuran pixel 24 MP                                              ");
      gotoxy(15,38); cprintf(" 3  Nikon D5200     processor Expeed 3                             Rp. 6.000.000    ");
      gotoxy(15,40); cprintf("                    kemampuan Shutter speed 1/4000-30 detik                         ");
      gotoxy(15,42); cprintf("                    tersedia fitur Wi-Fi                                           ");
      for(int a=2;a<=50;a++){
   		for(int b=2;b<=100;b++){
      		if(a==6||a==10||a==24||a==34||a==44||((a>6 && a<44)&&(b==25||b==75))){
      			textcolor(14);
            	gotoxy(b,a);cprintf("%c",219);
      		}
      		else{
          	textbackground(2);
            }
			}
    }
}




void pesan(){
		bingkai();
		bingkai2();
      textcolor(14);
      do {
   	gotoxy(42,10); cprintf("                          ");
      gotoxy(15,10); cprintf("Masukkan Nama             : ");gets(nama);
   } while(valHuruf(nama)!=0 || nama[0]==NULL);
      textcolor(14);
   	do {
   	gotoxy(42,12); cprintf("                           ");
      gotoxy(15,12); cprintf("Masukkan no.Hp            : +628");gets(nohp);
   } while(valAngka(nohp)!=0 || strlen(nohp)<10 || strlen(nohp)>11);
      textcolor(14);
      gotoxy(15,14); cprintf("Masukkan no.pilihan Anda  : ");gets(nocanon);
      valnopil(nocanon);
      textcolor(14);
      gotoxy(15,16); cprintf("Masukkan Jumlah Beli      : ");gets(z);
      valangka1(z);



      int a=atoi(nocanon);
      textcolor(14);
      if(a==1){
      	textcolor(14);
         strcpy(nabar,"KAMERA DSLR CANON");
         strcpy(merk,"Canon EOS 5D Mark IV");
         gotoxy(15,18); cprintf("Nama KAMERA DSLR CANON    : Canon EOS 5D Mark IV");
         gotoxy(15,20); cprintf("Harga Barang              : Rp 30.000.000");
         harga=30000000;
         a=atoi(z);
      	total=a*harga;
      	gotoxy(15,22); cprintf("Jumlah Bayar              : Rp.%d ",total);
         beli();
      }
      else if(a==2){
         textcolor(14);
         strcpy(nabar,"KAMERA DSLR CANON");
         strcpy(merk,"Canon EOS 750D");
         gotoxy(15,18); cprintf("Nama KAMERA DSLR CANON    : Canon EOS 750D");
         gotoxy(15,20); cprintf("Harga Barang              : RP 7.000.000");
         harga=7000000;
         a=atoi(z);
      	total=a*harga;
      	gotoxy(15,22); cprintf("Jumlah Bayar              : Rp.%d ",total);
         beli();
      }
      else if(a==3){
      	textcolor(14);
         strcpy(nabar,"KAMERA DSLR CANON");
         strcpy(merk,"Canon EOS 5D Mark III");
         gotoxy(15,18); cprintf("Nama KAMERA DSLR CANON    : Canon EOS 5D Mark III");
         gotoxy(15,20); cprintf("Harga Barang              : Rp. 16.000.000");
         harga=16000000;
         a=atoi(z);
      	total=a*harga;
      	gotoxy(15,22); cprintf("Jumlah Bayar              : Rp.%d ",total);
         beli();
      }


    }

void pesan2(){
		bingkai();
		bingkai2();
      textcolor(14);
      do {
   	gotoxy(42,10); cprintf("                          ");
      gotoxy(15,10); cprintf("Masukkan Nama             : ");gets(nama);
   } while(valHuruf(nama)!=0 || nama[0]==NULL);
      textcolor(14);
   	do {
   	gotoxy(42,12); cprintf("                           ");
      gotoxy(15,12); cprintf("Masukkan no.Hp            : +628");gets(nohp);
   } while(valAngka(nohp)!=0 || strlen(nohp)<10 || strlen(nohp)>11);
      textcolor(14);
      gotoxy(15,14); cprintf("Masukkan no.pilihan Anda  : ");gets(nonikon);
      valnopil2(nonikon);
      textcolor(14);
      gotoxy(15,16); cprintf("Masukkan Jumlah Beli      : ");gets(z);
      valangka1(z);



      int a=atoi(nonikon);
      textcolor(14);
      if(a==1){
         strcpy(nabar,"KAMERA DSLR NIKON");
         strcpy(merk,"Nikon D3300");
         gotoxy(15,18); cprintf("Nama Kamera DSLR NIKON : Nikon D3300");
         gotoxy(15,20); cprintf("Harga Barang           : Rp. 5.000.000");
         harga=5000000;
         a=atoi(z);
      	total=a*harga;
      	gotoxy(15,22); cprintf("Jumlah Bayar              : Rp.%d ",total);
         beli2();
      }
      else if(a==2){
         strcpy(nabar,"KAMERA DSLR NIKON");
         strcpy(merk,"Nikon D3400");
         gotoxy(15,18); cprintf("Nama KAMERA DSLR NIKON : Nikon D3400");
         gotoxy(15,20); cprintf("Harga Barang           : Rp. 7.000.000");
         harga=7000000;
         a=atoi(z);
      	total=a*harga;
      	gotoxy(15,22); cprintf("Jumlah Bayar              : Rp.%d ",total);
         beli2();
      }
      else if(a==3){
      	strcpy(nabar,"KAMERA DSLR NIKON");
         strcpy(merk,"Nikon D5200");
         gotoxy(15,18); cprintf("Nama KAMERA DSLR NIKON : Nikon D5200");
         gotoxy(15,20); cprintf("Harga Barang           : Rp. 6.000.000");
         harga=6000000;
         a=atoi(z);
      	total=a*harga;
      	gotoxy(15,22); cprintf("Jumlah Bayar              : Rp.%d ",total);
         beli2();
      }
    }



void beli(){
      textcolor(14);
      gotoxy(15,24); cprintf("Uang Bayar                : Rp.");gets(ubay);
      int a=atoi(ubay);
      if(a==total){
      	textcolor(14);
      	gotoxy(15,26); cprintf("Uang Pas Tidak ada kembalian");
      	gotoxy(15,34); cprintf("SELAMAT TRANSAKSI BERHASIL!!!!");
      	clrscr(); nota();
      }
      else if(a>=total){
      	textcolor(14);
         kurang=a-total;
      	gotoxy(15,26); cprintf("Uang Kembalian              : Rp.%d ",kurang);

      }
      else if(a<=total){
      	gotoxy(15,26); cprintf("Uang Kurang!"); getch();
         gotoxy(15,26); cprintf("                 ");
         gotoxy(32,24); cprintf("                              ");
      	beli();
      }
      getch();
      clrscr();
      kembali();

      }

void beli2(){
      textcolor(14);
      gotoxy(15,24); cprintf("Uang Bayar                : Rp.");gets(ubay);
      int a=atoi(ubay);
      if(a==total){
      	textcolor(14);
      	gotoxy(15,26); cprintf("Uang Pas Tidak ada kembalian");
      	gotoxy(15,34); cprintf("SELAMAT TRANSAKSI BERHASIL!!!!");
      	clrscr(); nota();
      }
      else if(a>=total){
      	textcolor(14);
         kurang=a-total;
      	gotoxy(15,26); cprintf("Uang Kembalian              : Rp.%d ",kurang);

      }
      else if(a<=total){
      	gotoxy(15,26); cprintf("Uang Kurang!"); getch();
         gotoxy(15,26); cprintf("                 ");
         gotoxy(32,24); cprintf("                              ");
      	beli2();
      }
      getch();
      clrscr();
      kembali();

      }

void nota(){
      bingkai();
      bingkai3();
      bingkai2();
      textcolor(14);
      gotoxy(15,8); cprintf("Selamat transaksi anda berhasil!");
      gotoxy(15,10); cprintf("Nama             : %s",nama);
      gotoxy(15,12); cprintf("No HP            : +628%s",nohp);
      gotoxy(15,14); cprintf("Nama barang      : %s",merk);
      gotoxy(15,16); cprintf("Harga Barang     : %d",harga);
      gotoxy(15,35); cprintf("Apakah anda ingin melakukan transaksi lagi?");
      gotoxy(15,37); cprintf("(ya/tidak)");
      gotoxy(25,37); cscanf("%s",&ya);
      while(true){
      	gotoxy(25,37);cprintf("                          ");
      	gotoxy(25,37); cscanf("%s",&ya);
      	if(strcmp(ya,"ya")==0){
      		clrscr(); pesan();
      	}
      	else if(strcmp(ya,"tidak")==0){
      		clrscr();trmksh();
      	}
      	else{
         	textcolor(12);
       		gotoxy(25,40);cprintf(" eroooorrr!!!!)");Sleep(1500);
         	gotoxy(25,40);cprintf("               ");
         	gotoxy(25,37);cprintf("                          ");
      	}
      }
}
void trmksh(){
		clrscr(); bingkai();
      for(int a=2;a<=50;a++){
      if(a==10||a==24||a==44){
  			textcolor(14);
      	gotoxy(b,a);cprintf("%c",219);
      	gotoxy(15,15); cprintf("oooooooo ooooo ooooo  oo oo   oo   oo   oo  oo   oo    ooooo  oo oo  oo");
      	gotoxy(15,16); cprintf("   oo    oo    oo  oo oo ooo ooo  oooo  oo oo   oooo  oo      oo oo  oo");
      	gotoxy(15,17); cprintf("   oo    ooooo ooooo  oo ooooooo oo  oo oooo   oo  oo  ooooo  oo oooooo");
      	gotoxy(15,18); cprintf("   oo    oo    oo oo  oo oo o oo oooooo oo oo  oooooo      oo oo oo  oo");
      	gotoxy(15,19); cprintf("   oo    ooooo oo  oo oo oo   oo oo  oo oo  oo oo  oo  ooooo  oo oo  oo");
      	gotoxy(38,30); cprintf("jika ada kritik dan saran");
      	gotoxy(31,32); cprintf("silahkan kirim pesan anda di e-mail kami");
      	gotoxy(28,34); cprintf("hestilestari144@gmail.com atau WA: 085846898793");
      	gotoxy(28,37); cprintf("tekan 1 untuk kembali ke menu utama");
      	gotoxy(28,39); cprintf("tekan 2 untuk log out");
      char a;
   	gotoxy(40,41); cprintf("MASUKKAN ANGKA: ");
   	do{
   		gotoxy(56,41);cprintf(" ");
      	gotoxy(56,41);a=getche();
      	if(a!='1' && a!='2'){
         	textcolor(12);
      		gotoxy(60,41);cprintf("INPUTAN SALAH!");Sleep(1000);
         	gotoxy(60,41);cprintf("              ");
      	}
   	}
   	while(a!='1' && a!='2');
   		if(a=='1'){
   			clrscr(); welcome();
         }
   		else{
   			clrscr(); login();
   		}
   	}
       else{
      textbackground(2);
      }
   }
}
//////////////////////////////////kembali/////////////////////////////////////



void kembali(){
	bingkai(); bingkai3();bingkai2();
	textcolor(14);
	gotoxy(10,10); cprintf(" Tekan 1 untuk kembali");
   gotoxy(10,12); cprintf("masukkan angka: "); scanf("%d",&c);
      char a;
   gotoxy(40,35); cprintf("MASUKKAN ANGKA: ");
   do{
   	gotoxy(56,35);cprintf(" ");
      gotoxy(56,35);a=getche();
      if(a!='1' && a!='2'){
      	textcolor(12);
      	gotoxy(56,35);cprintf("INPUTAN SALAH!");Sleep(1000);
         gotoxy(56,35);cprintf("              ");
      }
   }
   while(a!='1' && a!='2');
   if(a=='1'){
   clrscr(); daftarnama1();
   }
   else{
   clrscr();bingkai();
      bingkai2();
      gotoxy(10,7);  cprintf("  OOOO    OOO    OOOO   OOOO    O    O  ");
      gotoxy(10,8);  cprintf(" O       O   O   O   O  O   O    O  O   ");
     	gotoxy(10,9);  cprintf("  OOOO  O     O  OOOO   OOOO      OO    ");
      gotoxy(10,10); cprintf("      O  O   O   O O    O O       OO    ");
      gotoxy(10,11); cprintf("  OOOO    OOO    O  O   O  O      OO    ");
      gotoxy(10,12); cprintf("                                        ");
      gotoxy(10,14); cprintf("Inputan Invalid. Tekan 1 untuk kembali ke daftar menu");
      gotoxy(10,16); cprintf("masukkan angka: "); scanf("%d",&c);
      if(c==1){
      clrscr(); daftarnama1();
      }
      else{
      gotoxy(10,18); cprintf(" erorr!!!"); clrscr(); welcome();
      }
   }
}
void sorry(){
	bingkai();
	textcolor(14);
   while(true){
	gotoxy(10,25); cprintf(" Tekan 1 untuk kembali ke menu info kamera");
   char ab[2];
      gotoxy(10,26); cprintf("masukkan angka: ");gotoxy(25,26);gets(ab);
      if(strcmp(ab,"1")==0){
      	clrscr(); info();
      }else{
      gotoxy(10,7);  cprintf("  OOOO    OOO    OOOO   OOOO    O    O  ");
      gotoxy(10,8);  cprintf(" O       O   O   O   O  O   O    O  O   ");
     	gotoxy(10,9);  cprintf("  OOOO  O     O  OOOO   OOOO      OO    ");
      gotoxy(10,10); cprintf("      O  O   O   O O    O O       OO    ");
      gotoxy(10,11); cprintf("  OOOO    OOO    O  O   O  O      OO    ");
      gotoxy(10,12); cprintf("                                        ");
      gotoxy(10,14); cprintf("Inputan Invalid. Tekan 1 untuk kembali ke daftar menu");Sleep(1000);
      gotoxy(10,7);  cprintf("                                        ");
      gotoxy(10,8);  cprintf("                                        ");
     	gotoxy(10,9);  cprintf("                                        ");
      gotoxy(10,10); cprintf("                                        ");
      gotoxy(10,11); cprintf("                                        ");
      gotoxy(10,12); cprintf("                                        ");
      gotoxy(10,14); cprintf("                                                     ");
      gotoxy(25,26); cprintf("                                                     ");

   }

   }
}


void exit(){
	bingkai();bingkai3();bingkai2();
   char c;
	textcolor(14);
	gotoxy(10,10); cprintf(" Tekan 1 untuk kembali");
   gotoxy(10,12); cprintf("masukkan angka: ");
   gotoxy(26,12);cscanf("%d",&c);

   do{
   	gotoxy(56,35);cprintf(" ");
      gotoxy(56,35);a=getche();
      if(a!='1'){
      	textcolor(12);
      	gotoxy(20,15);cprintf("INPUTAN SALAH!");Sleep(500);
         gotoxy(20,15);cprintf("                ");
      	gotoxy(25,12);cprintf("                           ");
         textcolor(14);
         gotoxy(26,12);cscanf("%d",&c);
      }
   }
   while(a=='1');
   if(a=='1'){
   clrscr(); info();
   }
}


void unggul(){
         clrscr();bingkai();
         gotoxy(7,5); cprintf("Keunggulan dan Kelemahan Kamera Canon dan Nikon : ");
         gotoxy(7,6); cprintf("-> DSLR Nikon DX bersensor APS-C sedangkan FX bersensor fullframe. Lensa Nikon pun ");
         gotoxy(7,7); cprintf("   demikian, ada versi DX & FX. Namun dengan body DX, semua jenis lensa tetap cocok ");
         gotoxy(7,8); cprintf("   digunakan.");
         gotoxy(7,9); cprintf("-> Sedangkan untuk body FX hanya bisa menggunakan lensa FX juga. Jika dipaksakan ");
         gotoxy(7,10); cprintf("   akan muncul vignet.");
         gotoxy(7,11); cprintf("-> Semua Digital SLR Nikon memiliki mounting jenis F , lensa Nikon di jaman negatif");
         gotoxy(7,12); cprintf("   film masih bisa digunakan.");
         gotoxy(7,13); cprintf("-> Kamera DSLR Nikon di segmen Pemula (seri d3xxx & d5xxx) tidak memiliki motor focus");
         gotoxy(7,14); cprintf("   dalam body-nya, sehingga hanya cocok untuk lensa AF-S. Ada 2 jenis motor lensa yang");
         gotoxy(7,15); cprintf("   dikenal di mounting Nikon. AF-S & AF-D");
         gotoxy(7,16); cprintf("-> Kamera DSLR Nikon di segmen Pemula (seri d3xxx & d5xxx) hanya memiliki 1 buah LCD, ");
         gotoxy(7,17); cprintf("   lainnya terdapat LCD monokrom tambahan di body bagian atas jumlah titik fokus pada");
         gotoxy(7,18); cprintf("   kamera, baik DSLR pemula sampai profesional,");
         gotoxy(7,19); cprintf("-> Nikon selalu menyediakan titik fokus yang lebih banyak dari Canon");
         gotoxy(7,20); cprintf("-> Kamera Nikon selain seri pemula (D7100, D600, D800 & D4) memiliki built in focus motor ");
         gotoxy(7,21); cprintf("   sehingga lensa jenis non-AF-S tetap bisa digunakan dengan fitur auto fokus yang tetap ");
         gotoxy(7,22); cprintf("   bisa dijalankan. ");
         gotoxy(7,23); cprintf("-> Body Nikon seri D4, D800 & D600 terbuat dari magnesium alloy, bukan plastik.");
         gotoxy(7,24); cprintf("-> Hanya seri D5xxx yang memiliki layar yang bisa dilipat");
         gotoxy(7,25); cprintf("-> Semua DSLR Nikon memiliki built-in flash kecuali Nikon seri Profesional (D4)");
         gotoxy(7,26); cprintf("-> Varian D800 memiliki 2 versi yaitu D800 & D800E");
         gotoxy(7,27); cprintf("-> Saat ini DSLR Nikon dengan resolusi terbesar adalah D800 & D800E dengan resolusi 36 MP");
         gotoxy(7,28); cprintf("-> Secara image quality nikon diatas canon, nikon lebih tajam, detail & dinamic rang tinggi");
         gotoxy(7,29); cprintf("-> (d7100 menang lawan 70d / 7d / 5d2 / 5d3)");
         gotoxy(7,30); cprintf("-> Secara funsional Canon diatas Nikon (karena kemampuan low light-nya dengan noise yang ");
         gotoxy(7,31); cprintf("   lebih minim).");
         gotoxy(10,33); cprintf(" Tekan 1 untuk kembali ke menu info kamera");
         gotoxy(10,35); cprintf("masukkan angka: "); scanf("%d",&c); getch();
         if(c==1){
   		clrscr(); info();
  	 		}
      	else{
   		bingkai(); bingkai3();
      	bingkai2();
      	gotoxy(10,7);  cprintf("  OOOO    OOO    OOOO   OOOO    O    O  ");
      	gotoxy(10,8);  cprintf(" O       O   O   O   O  O   O    O  O   ");
     		gotoxy(10,9);  cprintf("  OOOO  O     O  OOOO   OOOO      OO    ");
      	gotoxy(10,10); cprintf("      O  O   O   O O    O O       OO    ");
      	gotoxy(10,11); cprintf("  OOOO    OOO    O  O   O  O      OO    ");
      	gotoxy(10,12); cprintf("                                        ");
      	gotoxy(10,14); cprintf("Inputan Invalid. Tekan 1 untuk kembali ke menu info kamera");
      	gotoxy(10,16); cprintf("masukkan angka: "); scanf("%d",&c);
      	if(c==1){
      	clrscr(); info();
      	}
      	else{
      	gotoxy(10,18); cprintf(" erorr!!!"); clrscr(); welcome();
		}
    }
}

/////////////////////////////////INFO KAMERA////////////////////////////////////
void info(){
	clrscr();
     bingkai();bingkai3();bingkai2();
     textcolor(14);
     gotoxy(15,8); cprintf("                  INFO KAMERA                 ");
     gotoxy(15,10); cprintf("  1. KAMERA DSLR CANON                        ");
     gotoxy(15,12); cprintf("  2. KAMERA DSLR NIKON                        ");
     gotoxy(15,14); cprintf("  3. KEUNGGULAN KAMERA                        ");
     gotoxy(15,16); cprintf("   Masukkan no.pilihan Anda :                 ");
     gotoxy(45,16); cprintf(" ");scanf("%d",&nokam); clrscr();
     if(nokam==1){
     		bingkai();
     		textcolor(14);
         strcpy(nabar,"KAMERA DSLR CANON");
         gotoxy(15,10); cprintf("Canon pertama kali mengeluarkan kamera Digital SLR pada tahun 2000 yaitu dengan ");
         gotoxy(15,11); cprintf("seri D30. Barulah 2 tahun kemudian mengeluarkan digital SLR fullframe pertama   ");
         gotoxy(15,12); cprintf("dengan resolusi 11.1 Mega Pixel. Di tahun 2010 Canon memiliki market share 41%  ");
         gotoxy(15,13); cprintf("untuk pasar DSLR, terpaut cukup jauh dengan Nikon yang hanya 35%. Perlu diketahui");
         gotoxy(15,14); cprintf("juga bahwa penamaan kamera Canon tergantung pada daerah pemasarannya. Misalnya di");
         gotoxy(15,15); cprintf("Amerika disebut Rebel T5i, di Eropa disebut 700d namun di Jepang Kiss X7i. Kamera");
         gotoxy(15,16); cprintf("DSLR CANON terbagi menjadi beberapa kelas, sebagai berikut:                      ");
         gotoxy(15,18); cprintf("1. Kelas Pemula Entry Level                                                      ");
         gotoxy(15,20); cprintf("2. Kelas Pemula Mid Range                                                     ");
         gotoxy(15,22); cprintf("3. Kelas Semi Advanced                                                        ");
         gotoxy(15,24); cprintf("4. Kelas Advanced : EOS 6D-> (7D)                                             ");
         gotoxy(15,26); cprintf("5. Kelas Semi-Profesional : 5D Mark III -> (5D Mark II -> 5D)                 ");
         gotoxy(15,28); cprintf("6. Kelas Profesional                                                          ");
         gotoxy(15,30); cprintf(" Pilih angka untuk melanjutkan:                                               ");
         gotoxy(45,30); cprintf(" "); scanf("%d",&a); getch();
         if(a==1){
	         bingkai();
   	      gotoxy(15,8); cprintf("1. Kelas Pemula Entry Level: ");
      	   gotoxy(10,10); cprintf("-> 1000 D Rebel XS Kiss F");
         	gotoxy(10,12); cprintf("-> 1100 D Rebel T3 Kiss X50 ");
	         gotoxy(10,14); cprintf("-> 100 D Rebel SL1 Kiss X7");
				gotoxy(10,16); cprintf("Di kelas pemula Canon tidak terlalu berkembang, ini terbukti dari kamera di segmen");
      	   gotoxy(10,17); cprintf("pemula versi 1000d diperkenalkan tahun 2008 sedangkan 3 tahun kemudian Canon baru ");
         	gotoxy(10,18); cprintf("mengupgradenya dengan 1100d. Jika dibandingkan dengan Nikon, versi DSLR pemula Canon");
         	gotoxy(10,19); cprintf("memiliki build quality yang lebih buruk. Tapi menariknya Canon juga mengeluarkan versi");
         	gotoxy(10,20); cprintf("100d. Hal itu dibuat bukan untuk menggantikan pangsa pasar 1100d, namun malah membuat");
         	gotoxy(10,21); cprintf("pangsa pasar baru mengingat versi 100d adalah DSLR terkecil dan teringan di dunia. Yang");
         	gotoxy(10,22); cprintf("menarik dari Canon adalah semua DSLR sudah memiliki motor focus di bodynya termasuk seri");
         	gotoxy(10,23); cprintf("pemula."); getch();
         	exit();
         }
         else if(a==2){
         bingkai();
         	gotoxy(10,8); cprintf("2. Kelas Pemula Mid Range:");
         	gotoxy(10,10); cprintf("-> 700D Rebel T5i Kiss X7  ");
         	gotoxy(10,12); cprintf("-> 650 D Rebel T4i Kiss X6i");
         	gotoxy(10,14); cprintf("-> 600D Rebel T3i Kiss X5  ");
         	gotoxy(10,16); cprintf("-> 550D Rebel T2i Kiss X4  ");
         	gotoxy(10,18); cprintf("-> 450D Rebel XSi Kiss X2  ");
         	gotoxy(10,20); cprintf("-> 400D Digital Rebel XTi Kiss Digital X ");
         	gotoxy(10,22); cprintf("-> 500D Rebel T1i Kiss X3  ");
         	gotoxy(10,24); cprintf("-> 350D Digital Rebel XT Kiss Digital N ");
         	gotoxy(10,26); cprintf("-> 300D Digital Rebel Kiss Digital");
         	gotoxy(10,28); cprintf("Di jajaran segmen ini Canon memiliki layar yang bisa dilipat yaitu 600D, 650D hingga ");
         	gotoxy(10,29); cprintf("700D. Bahkan Canon juga membuat gebrakan fitur layar sentuh di body 650D & 700D. Layar ");
         	gotoxy(10,30); cprintf("sentuh bisa digunakan untuk menentukan daerah fokus saat mengambil foto ataupun video ");
         	gotoxy(10,31); cprintf("sekalipun di mode live view."); getch();
         	exit();
         }
         else if(a==3){
         bingkai();
         	gotoxy(10,8); cprintf("3. Kelas Semi Advanced :");
         	gotoxy(10,10); cprintf("-> 70D       ");
         	gotoxy(10,12); cprintf("-> 60D[a]  ");
         	gotoxy(10,14); cprintf("-> 50D    ");
         	gotoxy(10,16); cprintf("-> 40D     ");
         	gotoxy(10,18); cprintf("-> 30D    ");
         	gotoxy(10,20); cprintf("-> 20D[a] ");
         	gotoxy(10,22); cprintf("-> D60    ");
         	gotoxy(10,24); cprintf("-> D30    ");
         	gotoxy(10,26); cprintf("Canon memiliki fitur layar yang bisa dilipat pada seri 60D dan 70D. versi ini dtunjukan");
         	gotoxy(10,27); cprintf("untuk bidang astrography. Di body kelas semi Advanced Canon ini kita juga akan menemui");
         	gotoxy(10,28); cprintf("2LCD & tombol putar khas Canon, Quick Dial Button.");  getch();
         	exit();
         }
         else if(a==4){
          bingkai();
          	gotoxy(10,8); cprintf("4. Kelas Advanced : ");
          	gotoxy(10,10); cprintf("->  EOS 6D ");
          	gotoxy(10,12); cprintf("-> (7D)  ");
          	gotoxy(10,14); cprintf("semula diisi dengan Canos EOS 7D yang bersensor APS-C lalu digantikan dengan EOS 6D ");
          	gotoxy(10,15); cprintf("dengan sensor fullframe.Tapi yang membuat susah adalah Canon EOS 6D tidak memiliki ");
          	gotoxy(10,16); cprintf("built in flash jika kita lupa membawa Flash Gun, sehingga kita harus menggunakan ");
          	gotoxy(10,17); cprintf("flash eksternal/flash gun.  ");getch();
          	exit();
         }
         else if(a==5){
          bingkai();
          	gotoxy(10,12); cprintf("5. Kelas Semi-Profesional :  ");
          	gotoxy(10,14); cprintf("->5D Mark III   ");
          	gotoxy(10,15); cprintf("-> 5D Mark II  ");
          	gotoxy(10,16); cprintf("-> 5D Mark I ");
          	gotoxy(10,18); cprintf("resolusi DSLR terbesar dari Canon adalah 22.3MP yang terdapat pada tipe, 5D Mark III. ");
          	gotoxy(10,19); cprintf(" Canon juga membuat sejarah dengan memberikan 61 titik fokus dalam body 5D Mark III."); getch();
          	exit();
          }
         else if(a==6){
          bingkai();
          	gotoxy(10,12); cprintf("6. Kelas Profesional");
          	gotoxy(10,14); cprintf("Full frame :  ");
          	gotoxy(10,15); cprintf("-> 1DX  ");
          	gotoxy(10,16); cprintf("-> 1DS Mark III  ");
          	gotoxy(10,17); cprintf("-> 1DS Mark II  ");
          	gotoxy(10,18); cprintf("-> 1DS  ");
          	gotoxy(10,19); cprintf("APS-H :  ");
          	gotoxy(10,20); cprintf("-> 1D Mark IV  ");
          	gotoxy(10,21); cprintf("-> 1D Mark III  ");
          	gotoxy(10,22); cprintf("-> 1D Mark II N  ");
          	gotoxy(10,23); cprintf("-> 1D Mark II   ");
          	gotoxy(10,24); cprintf("-> 1D   ");
          	gotoxy(10,26); cprintf("Sensor fullframe sama besarnya dengan negatif film pra era digital fotografi, APS-C ");
          	gotoxy(10,27); cprintf("memiliki crop sensor 1.5x untuk Nikon & 1.6x untuk Canon. Kamera DSLR Canon memiliki 3");
          	gotoxy(10,28); cprintf("jenis ukuran sensor format. (APS-C, APS-H & full frame)Jika pada Nikon ada lensa DX & ");
          	gotoxy(10,29); cprintf("lensa FX, maka di Canon ada lensa EF (full frame) dan EF-S (APS-C). Semua body Canon");
          	gotoxy(10,30); cprintf("EOS DSLR memiliki built in motor focus. Canon 650D,700D&70D memiliki fitur layar sentuh,");
          	gotoxy(10,31); cprintf("WiFi, GPRS. Body Canon EOS seri profesional (1D & 5D) & 6D tidak memiliki built -in ");
          	gotoxy(10,32); cprintf("flash Versi 650D, 700D&70D memiliki layar yang bisa diputar. Lensa Canon biasanya lebih");
          	gotoxy(10,33); cprintf("murah dibanding Nikon. Canon juga memiliki varian yang lebih banyak dibanding Nikon."); getch();
          	exit();
          }
          else{
          sorry();
          }
      }
      else if(nokam==2){
      	bingkai();
         strcpy(nabar,"KAMERA DSLR NIKON");
         gotoxy(10,10); cprintf("2. KAMERA DSLR NIKON");
         gotoxy(10,11); cprintf("Nikon adalah merk paling konservatif dalam soal teknologi kamera, terbukti dengan lensa- ");
         gotoxy(10,12); cprintf("lensa tua di zaman negatif film yang masih bisa digunakan di kamera modern, Berkebalikan ");
         gotoxy(10,13); cprintf("dengan Canon, penamaan sistem kamera Nikon menggunakan huruf D yang berarti digital di   ");
         gotoxy(10,14); cprintf("bagian depan sebelum angka. Kamera DSLR Nikon juga dapat dibedakan dengan melihat tanda  ");
         gotoxy(10,15); cprintf("merah dibagian handgrip-nya. DSLR CANON terbagi menjadi beberapa kelas, sebagai berikut: ");
         gotoxy(10,17); cprintf("1. Kelas Pemula Entry Level");
         gotoxy(10,19); cprintf("2. Kelas Pemula Midrange");
         gotoxy(10,21); cprintf("3. Kelas Semi Advanced");
         gotoxy(10,23); cprintf("4. Kelas Advanced");
         gotoxy(10,25); cprintf("5. Kelas Semi Profesional");
         gotoxy(10,27); cprintf("6. Kelas Profesional");
         gotoxy(10,29); cprintf("masukkan angka: "); scanf("%d",&b); getch();
         if(b==1){
         	bingkai();
         	gotoxy(8,8); cprintf(" 1. Kelas Pemula Entry Level :    ");
         	gotoxy(8,10); cprintf("-> D3200 ");
         	gotoxy(8,12); cprintf("-> D3100  ");
         	gotoxy(8,14); cprintf("-> D3000  ");
         	gotoxy(8,16); cprintf("-> D40  ");
         	gotoxy(8,18); cprintf("Kamera Entry level Nikon bentuknya ringkas ,menguatamakan kemudahan pengoperasian & user");
         	gotoxy(8,19); cprintf("interface pada LCDnya mudah dimengerti. Dibandingkan Nikon atau Sony, kamera entry level");
         	gotoxy(8,20); cprintf("dari Nikon lebih sedikit kasar & lumayan nyaman untuk digenggam, tidak licin atau halus");
         	gotoxy(8,21); cprintf("seperti Canon .Sayangnya untuk kamera Entry Level & Midrange Nikon tidak memiliki motor");
         	gotoxy(8,22); cprintf("focus pada body-nya, sehingga hanya cocok untuk lensa dengan built-in motor, yaitu lensa");
         	gotoxy(8,23); cprintf("seri AF-S. Kamera di segmen pemula memiliki varian warna selain hitam. Misalnya kamera");
         	gotoxy(8,24); cprintf("DSLR dengan warna merah, silver ataupun coklat, sangat cocok untuk teman-teman yang ingin");
         	gotoxy(8,25); cprintf("menarik perhatian dengan kameranya.");  getch();
         	exit();
         }
         else if(b==2){
         bingkai();
         	gotoxy(7,8); cprintf("2. Kelas Pemula Midrange :   ");
         	gotoxy(7,10); cprintf("-> D5200 ");
         	gotoxy(7,12); cprintf("-> D5100 ");
         	gotoxy(7,14); cprintf("-> D5000 ");
         	gotoxy(7,16); cprintf("-> D60   ");
         	gotoxy(7,18); cprintf("-> D40x  ");
         	gotoxy(7,20); cprintf("-> D50   ");
         	gotoxy(7,22); cprintf("memiliki LCD yang dapat dilipat / Fliped out LCD (kecuali D60, D40x & D50 karena merupakan");
         	gotoxy(7,23); cprintf("jenis lama. Sayangnya Nikon hanya mengeluarkan kamera DSLR dengan LCD lipat hanya di varian");
         	gotoxy(7,24); cprintf("d5xxx ini. Kamera d5xxx tidak memiliki built in motor focus di body nya sehingga hanya cocok");
         	gotoxy(7,25); cprintf("untuk lensa AF-S.");   getch();
         	exit();
         }
         else if(b==3){
         bingkai();
         	gotoxy(7,8); cprintf("3. Kelas Semi Advanced :");
         	gotoxy(7,10); cprintf("-> D7100");
         	gotoxy(7,12); cprintf("-> D7000");
         	gotoxy(7,14); cprintf("-> D90");
         	gotoxy(7,16); cprintf("-> D80");
         	gotoxy(7,18); cprintf("-> D70s");
         	gotoxy(7,20); cprintf("-> D70");
         	gotoxy(7,22); cprintf("Ciri kamera di segmen ini ialah fitur perekaman video yang lebih mutakhir, sudah memiliki");
         	gotoxy(7,21); cprintf("built in motor sehingga bisa menggunakan lensa AF-D, kecepatan dalam mengambil foto, bentuk");
         	gotoxy(7,22); cprintf("body yang lebih besar serta adanya 2 LCD. Kamera DSLR kelas pemula hanya memiliki satu LCD");
         	gotoxy(7,23); cprintf("sedangkan kelas Advanced dan profesional 2 LCD. Satu berwarna dan satu lagi monokrom."); getch();
         	exit();
         }
         else if(b==4){
         bingkai();
         	gotoxy(7,8); cprintf("4. Kelas Advanced :");
         	gotoxy(7,10); cprintf("-> D600");
         	gotoxy(7,12); cprintf("-> D300s");
         	gotoxy(7,14); cprintf("-> D300");
         	gotoxy(7,16); cprintf("-> D200");
         	gotoxy(7,18); cprintf("-> D100");
         	gotoxy(7,20); cprintf("Semula segmen ini diisi Nikon dengan kamera DX (D300/D300S), namun sekarang berubah dengan");
         	gotoxy(7,21); cprintf("hadirnya seri D600 yang sudah fullframe & alternatif untuk kamera fullframe dengan harga");
         	gotoxy(7,22); cprintf("miring. Untuk fotografer olahraga profesional tak sedikit yang menggunakan Nikon D300 di");
         	gotoxy(7,23); cprintf("banding kamera fullframe. Mengapa? Karena focal length yang didapat lebih panjang dibanding");
         	gotoxy(7,24); cprintf("kamera fullframe. Selain itu D300 memiliki burst foto tercepat dibanding kamera DSLR APS-C");
         	gotoxy(7,25); cprintf("Nikon lainnya.");getch();
         	exit();
         }
         else if(b==5){
         bingkai();
         	gotoxy(7,8); cprintf("5. Kelas Semi Profesional : ");
         	gotoxy(7,10); cprintf("-> D800");
         	gotoxy(7,12); cprintf("-> D800E");
         	gotoxy(7,14); cprintf("-> D700");
         	gotoxy(7,16); cprintf("Di segmen ini Nikon membuat kamera DSLR dengan kualitas gambar terbaik di kelasnya.");
         	gotoxy(7,17); cprintf("Nikon membuat gebrakan baru dengan menggunakan sensor fullframe berkekuatan 36MP.");
         	gotoxy(7,18); cprintf("merupakan yang terbesar untuk ukuran DSLR.");  getch();
         	exit();
         }
         else if(b==6){
         bingkai();
         	gotoxy(7,8); cprintf("6. Kelas Profesional : ");
         	gotoxy(7,10); cprintf("-> D4");
         	gotoxy(7,12); cprintf("-> (D3, D3x, D3s)");
         	gotoxy(7,14); cprintf("-> (D1, D1x, D2x, D2xs)");
         	gotoxy(7,16); cprintf("-> (D1h, D2h, D2hs)");
         	gotoxy(7,18); cprintf("Kamera di segmen ini adalah seri premium. Fotografer olahraga & yang mahir dengan ");
         	gotoxy(7,19); cprintf("strobist pasti memilih kamera dari kelas ini. Namun Nikon baru menghadirkan kamera");
         	gotoxy(7,20); cprintf("profesional fullframe di seri Nikon D3 tahun 2007. Tertinggal jauh dengan Canon ");
         	gotoxy(7,21); cprintf("yang sejak 2002 sudah mengeluarkan versi fullframenya."); getch();
         	exit();
         }
         else{
         sorry();
         }

      }
      else if(nokam==3){
         unggul();
      }
      else{
         sorry();
      }

}



////////////////////////// Fungsi Validasi////////////////////////////////////////
int valAngka(char angka[]){
	error=0;
   if(angka[0]=='0'){
   	return 1;
   }
   for(int a=0;a<strlen(angka);a++){
   	if(!(angka[a]>='0' && angka[a]<='9')){
      	error++;
         break;
      }
   }
   return error;
}


int valHuruf(char huruf[]){
	int error = 0;
   for(int a=0;a<strlen(huruf);a++){
   	if(!(huruf[a]>='a' && huruf[a]<='z' || huruf[a]>='A' && huruf[a]<='Z' || huruf[a]=='\'')){
      	error++;
      }
   }
   return error;
}


int valAlamat(char huruf[]){
	int error = 0;
   for(int a=0;a<strlen(huruf);a++){
   	if(!(huruf[a]>='a' && huruf[a]<='z' || huruf[a]>='A' && huruf[a]<='Z' || huruf[a]>='0' && huruf[a]<='9' || huruf[a]=='\'' || huruf[a]=='/' || huruf[a]=='-' || huruf[a]=='.' || huruf[a]==','|| huruf[a]==' ')){
      	error++;
      }
   }
   return error;
}

int valangka1(char h[]){
	textcolor(12);
	for (int x=0;h[x]!='\0';x++){
   	if (!((h[x]>='0' && h[x]<='9')&& (h[0]!='0'))){
      	gotoxy(26,16);cprintf("Inputan harus angka! dan tidak boleh 0!")  ;
         getch();
         gotoxy(15,16); printf("                                          ");
      	gotoxy(15,16); cprintf("Masukkan Jumlah Beli      : ");gets(z);
         valangka1(z);
      }else{
      	int a=atoi(z);
         if(a>stok[0]){
            gotoxy(26,16);cprintf("stok kurang, sisa stok %d",stok[0])  ;
         	getch();
         	gotoxy(15,16); printf("                                          ");
      		gotoxy(15,16); cprintf("Masukkan Jumlah Beli      : ");gets(z);
         	valangka1(z);
         }
      }
   }
   if(strcmp(h,"")==0){
		gotoxy(26,16); cprintf("ANDA TIDAK MENGINPUTKAN APAPUN!");
      getch();
      gotoxy(15,16); printf("                                         ");
      gotoxy(15,16); cprintf("Masukkan Jumlah Beli      : ");gets(z);
      valangka1(z);
   }else if (h[0]==' '){
      gotoxy(26,16); cprintf("INPUTAN SALAH!");
      getch();
      gotoxy(15,16); printf("                                           ");
      gotoxy(15,16); cprintf("Masukkan Jumlah Beli      : ");gets(z);
      valangka1(z);
    }
}
int valnopil(char hi[]){
	textcolor(14);
	for (int x=0;hi[x]!='\0';x++){
   	if (!((hi[x]>='0' && hi[x]<='9')&& (hi[0]!='0'))){
      	gotoxy(26,20);cprintf("Inputan harus angka! dan tidak boleh 0!")  ;
         getch();
         gotoxy(26,20); printf("                                          ");
      	 gotoxy(15,14); cprintf("Masukkan no.pilihan Anda  : ");gets(nocanon);
         valnopil(nocanon);
      }
   }
   if(strcmp(hi,"")==0){
		gotoxy(26,16); cprintf("ANDA TIDAK MENGINPUTKAN APAPUN!");
      getch();
      gotoxy(15,16); printf("                                         ");
 		gotoxy(15,14); cprintf("Masukkan no.pilihan Anda  : ");gets(nocanon);
      valnopil(nocanon);
   }else if (hi[0]==' '){
      gotoxy(26,16); cprintf("INPUTAN SALAH!");
      getch();
      gotoxy(15,16); printf("                                           ");
      gotoxy(15,14); cprintf("Masukkan no.pilihan Anda  : ");gets(nocanon);
      valnopil(nocanon);
    }
}


int valnopil2(char hi[]){
	textcolor(14);
	for (int x=0;hi[x]!='\0';x++){
   	if (!((hi[x]>='0' && hi[x]<='9')&& (hi[0]!='0'))){
      	gotoxy(26,20);cprintf("Inputan harus angka! dan tidak boleh 0!")  ;
         getch();
         gotoxy(26,20); printf("                                          ");
      	 gotoxy(15,14); cprintf("Masukkan no.pilihan Anda  : ");gets(nocanon);
         valnopil2(nonikon);
      }
   }
   if(strcmp(hi,"")==0){
		gotoxy(26,16); cprintf("ANDA TIDAK MENGINPUTKAN APAPUN!");
      getch();
      gotoxy(15,16); printf("                                         ");
 		gotoxy(15,14); cprintf("Masukkan no.pilihan Anda  : ");gets(nocanon);
      valnopil2(nonikon);
   }else if (hi[0]==' '){
      gotoxy(26,16); cprintf("INPUTAN SALAH!");
      getch();
      gotoxy(15,16); printf("                                           ");
      gotoxy(15,14); cprintf("Masukkan no.pilihan Anda  : ");gets(nocanon);
      valnopil2(nonikon);
    }
}
int validasiNumber(char c[100]){
int tamp5=0;
for (int x=0;c[x]!=NULL;x++){
	if ((c[x]>='0' && c[x]<='9')){
   	continue;
      }
      tamp5++;
   }
   return tamp5;

}



main(){
system("color 2E");

for(int a=0;a<6;a++){
	stok[a]=10;
}
login();
}
