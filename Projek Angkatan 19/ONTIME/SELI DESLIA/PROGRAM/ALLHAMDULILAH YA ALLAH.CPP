#include<stdio.h>
#include<conio.h>
#include<windows.h>


/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////Variabel global/////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

int ulang=1;
int stok1=5;
int stok2=4;
int stok3=5;
int stok4=6;
int stok5=4;
int stok6=6;
int hari;
int g_th;
int g_bln;
int g_tgl;
int denda;
long harga=0;
long kembalian;
long money;
char rental;
char jasa;
char nama[100];
char name[100];
char ktp[16];
char alamat[25];
char nohp[26];
char tanggal[10];
char bulan[10];
char tahun[10];
char telat[10];
char uang[100];

////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////PROTOTYPE//////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void awal();
void welcome();
void bingkai();
void tampilan_login();
void loading();
void mulai();
void menu();
void rental1();
void pilih1();
void pilih2();
void pilih3();
void pilih4();
void pilih5();
void pilih6();
void sewa();
void identitas();
void inpnama();
void kabisat(int tahun,int bulan,int hari);
void fiksrental();
void bayar();
void transaksiberhasil();
void pengembalian();
void mas_kembali();
void masuk_pengembalian();
void terimakasih();
bool valnama(char nama[]);
bool valktp(char ktp[]);
bool valalamat(char alamat[]);
bool valnohp(char nohp[]);
bool valtanggal(char tanggal[]);
bool valbulan(char bulan[]);
bool valtahun(char tahun[]);

 ///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////VALIDASI//////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

bool valnama(char nama[]){
	int a = 0 ;
   while(nama[a] != NULL){
   	if(!(nama[a]=='-'||nama[a]==' '&&nama[a+1]!=' '||nama[a]>='a'&&nama[a]<='z'||nama[a]>='A'&&nama[a]<='Z'||nama[a]=='\''&&nama[a-1]!='\''&&nama[a+1]!='\''||nama[a]=='\''&&nama[a-1]!=' '&&nama[a+1]!=' ')){
      	return false;
   	}if(nama[0]==NULL||nama[0]==' '||nama[strlen(nama)-1]==' '){
   		return false;
   	}
    a++;
   }
   return true;

}

///////////////////////////VALIDASI NO.KTP//////////////////////////////////////

bool valktp(char ktp[]){
	int a = 0 ;
   while(ktp[a] != NULL){
   	if(!(ktp[a]=='-'||ktp[a]==' '&&ktp[a+1]!=' '||ktp[a]>='0'&&ktp[a]<='9')){
      	return false;
   	}if(!(strlen(ktp)==16)){
      return false;
      }
    a++;
   }if(ktp[0]==NULL||ktp[0]==' '||ktp[strlen(ktp)-1]==' '){
   		return false;
   	}
   return true;


}

//////////////////////////////VALIDASI ALAMAT////////////////////////////////////

bool valalamat(char alamat[]){
int x=0;
   while(alamat[x] != NULL){
   	if(!(alamat[x]==' '&&alamat[x+1]!=' '||alamat[x]>='a'&&alamat[x]<='z'||alamat[x]>='A'&&alamat[x]<='Z'||alamat[x]>='0'&&alamat[x]<='9'||alamat[x]=='.'&&alamat[x+1]!='.'||alamat[x]==' '&&alamat[x+1]!=' '||alamat[x]=='-'&&alamat[x+1]!='-')){
      	return false;
   	}x++;
   }if(alamat[0]==NULL||alamat[0]==' '||alamat[strlen(alamat)-1]==' '||alamat[0]=='.'||alamat[0]=='-'||alamat[strlen(alamat)-1]=='.'){
   		return false;
   }
   return true;
}

////////////////////////////VALIDASI NO.HP//////////////////////////////////////

bool valnohp(char nohp[]){
   if(nohp[0]==' '){
      return false;
   }else if(nohp[0]!='0'||nohp[1]!='8'||nohp[2]=='0'||nohp[2]=='4'||nohp[2]=='6'){
      return false;
   }if(!(strlen(nohp)>10&&strlen(nohp)<=13)){
   	return false;
	}for(int i=0;i<strlen(nohp);i++){
 		if(!(nohp[i]>='0'&&nohp[i]<='9')){
 		}
	}
   return true;
}

////////////////////////////VALIDASI TANGGAL////////////////////////////////////

bool valtanggal(char tanggal[]){
   if(tanggal[0]==' '||(!(tanggal[0]>='0'&&tanggal[0]<'4'))){
      return false;
   }else if(tanggal[0]=='3'){
      if(!(tanggal[1]>='0'&&tanggal[1]<'2')){
      return false;
      }
   }else if(tanggal[0]=='0'){
      if(tanggal[1]=='0'){
      return false;
      }
   }if(!(strlen(tanggal)>0&&strlen(tanggal)<3)){
   	return false;
   }
	for(int i=0;i<strlen(tanggal);i++){
 		if(!(tanggal[i]>='0'&&tanggal[i]<='9')){
 		}
	}
   return true;
}

////////////////////////VALIDASI BULAN//////////////////////////////////////////

bool valbulan(char bulan[]){
   if(bulan[0]==' '||(!(bulan[0]>='0'&&bulan[0]<'2'))){
      return false;
   }if(bulan[0]=='1'){
      if(!(bulan[1]>='0'&&bulan[1]<'3')){
      return false;
      }
   }else if(bulan[0]=='0'){
      if(bulan[1]=='0'){
      return false;
      }
   }if(!(strlen(bulan)>0&&strlen(bulan)<3)){
   	return false;
   }
	for(int i=0;i<strlen(bulan);i++){
 		if(!(bulan[i]>='0'&&bulan[i]<='9')){
 		}
	}
   return true;
}

//////////////////////////////VALIDASI TAHUN///////////////////////////////////

bool valtahun(char tahun[]){
   if(tahun[0]==' '){
      return false;
   }if(!(strlen(tahun)==4)){
   	return false;
   }
	for(int i=0;i<strlen(tahun);i++){
 		if(!(tahun[i]>='0'&&tahun[i]<='9')){
 		}
	}
   return true;
}

/////////////////////////////////VALIDASI UANG///////////////////////////////////

bool valuang(char uang[]){
   if(uang[0]==' '||uang[0]=='0'){
      return false;
   }if(!(strlen(uang)<=10)){
   return false;
   }

	for(int i=0;i<strlen(uang);i++){
 		if(!(uang[i]>='0'&&uang[i]<='9')){
 		return false;
      }
	}
   return true;
}
/////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////KABISAT////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

void kabisat(int tahun,int bulan,int tanggal){
	if(tahun%4==0){
   	if(bulan==2){
      	if(tanggal==29){
         tanggal=1;
         bulan++;
         }else{
         tanggal++;
         }
      }else if(bulan==1||bulan==3||bulan==5||bulan==7||bulan==8||bulan==10||bulan==12){
      	if(bulan==12&&tanggal==31){
         tahun++;
         bulan=1;
         tanggal=1;
         }else if(tanggal<31){
         tanggal++;
         }else{
         tanggal=1;
         bulan++;
         }
      }else if(bulan==4||bulan==6||bulan==9||bulan==11){
      	if(tanggal<30){
         tanggal++;
         }else{
         tanggal=1;
         bulan++;
         }
      }else if(bulan<13){
      	if(bulan==2){
         	if(tanggal==28){
            tanggal==1;
            bulan++;

            }
         }
      }
      }else{
      if(bulan==2){
      	if(tanggal==28){
         tanggal=1;
         bulan++;
         }else{
         tanggal++;
         }
      }else if(bulan==1||bulan==3||bulan==5||bulan==7||bulan==8||bulan==10||bulan==12){
      	if(bulan==12&&tanggal==31){
         tahun++;
         bulan=1;
         tanggal=1;
         }else if(tanggal<31){
         tanggal++;
         }else{
         tanggal=1;
         bulan++;
          }
      }else if(bulan==4||bulan==6||bulan==9||bulan==11){
      	if(tanggal<30){
         tanggal++;
         }else{
         tanggal=1;
         bulan++;
          }
      }else if(bulan<13){
      	if(bulan==2){
         	if(tanggal==28){
            tanggal==1;
            bulan++;
            }
         }
      }
   }
	clrscr();
   fiksrental();
   gotoxy(50,10);printf("%s",nama);
   gotoxy(50,11);printf("%s",ktp);
   gotoxy(50,12);printf("%s",alamat);
   gotoxy(50,13);printf("%s",nohp);
   gotoxy(50,15);printf("%d",tanggal);
   gotoxy(50,16);printf("%d",bulan);
   gotoxy(50,17);printf("%d",tahun);
   gotoxy(50,18);printf("Rp %ld",harga);
   bayar();
   mas_kembali();
}
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////BAYAR///////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
void bayar(){
   do{
   	gotoxy(50,19);printf("                       ");
      gotoxy(50,19);gets(uang);
      if(!valuang(uang)){
      	gotoxy(50,19);printf("Inputan tidak valid");Sleep(1000);
      	gotoxy(50,19);printf("                       ");
      }
   }while(!valuang(uang));
   money=atoi(uang);
   if(money<harga){
   gotoxy(50,20);printf("uang anda kurang");Sleep(1000);
   gotoxy(50,20);printf("                          ");
   bayar();
   }else{
   kembalian=money-harga;
   gotoxy(50,20);printf("Rp %d",kembalian);Sleep(1000);
   }transaksiberhasil();
}

///////////////////////////////TRANSAKSI BERHASIL//////////////////////////////

void transaksiberhasil(){
char tekan;
clrscr();
bingkai();
for(int a=1;a<=20;a++){
textcolor(a);
textbackground(3);
	gotoxy(5,10);cprintf("%c%c%c%c%c%c%c%c %c%c%c%c%c    %c%c   %c%c   %c%c %c%c%c%c%c   %c%c   %c%c %c%c %c%c%c%c%c %c%c     %c%c%c%c  %c%c%c%c%c %c%c%c%c%c  %c%c  %c%c   %c%c   %c%c%c%c%c %c%c  %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(5,11);cprintf("   %c%c    %c%c  %c%c  %c%c%c%c  %c%c%c  %c%c %c%c     %c%c%c%c  %c%c%c%c  %c%c    %c%c     %c%c %c%c %c%c    %c%c  %c%c %c%c  %c%c  %c%c%c%c  %c%c    %c%c  %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(5,12);cprintf("   %c%c    %c%c%c%c%c  %c%c  %c%c %c%c%c%c %c%c %c%c%c%c%c %c%c  %c%c %c%c%c   %c%c%c%c%c %c%c     %c%c%c%c  %c%c%c%c%c %c%c%c%c%c  %c%c%c%c%c%c %c%c  %c%c %c%c%c%c%c %c%c  %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(5,13);cprintf("   %c%c    %c%c %c%c  %c%c%c%c%c%c %c%c %c%c%c%c    %c%c %c%c%c%c%c%c %c%c%c%c     %c%c %c%c     %c%c %c%c %c%c    %c%c %c%c  %c%c  %c%c %c%c%c%c%c%c    %c%c %c%c  %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(5,14);cprintf("   %c%c    %c%c  %c%c %c%c  %c%c %c%c  %c%c%c %c%c%c%c%c %c%c  %c%c %c%c %c%c %c%c%c%c%c %c%c     %c%c%c%c  %c%c%c%c%c %c%c  %c%c %c%c  %c%c %c%c  %c%c %c%c%c%c%c %c%c  %c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
  Sleep(100);
}
   do{
   gotoxy(40,20);printf("tekan (0) untuk kembali ke menu :");tekan=getch();;
   if(tekan=='0'){
    menu();
   }else{
   	gotoxy(73,20);printf("Inputan tidak Valid ");Sleep(200);
      gotoxy(73,20);printf("                    ");Sleep(100);
   }
   }while(tekan!='0');

}
////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////Tampilan//////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////AWAL////////////////////////////////////////
void awal(){
   for(int x=1;x<=120;x++){
   gotoxy(x,1);textcolor(4);cprintf("%c",219);Sleep(5);
   gotoxy(x,29);textcolor(4);cprintf("%c",219);Sleep(5);
   }
}

/////////////////////////////////WELCOME///////////////////////////////////////

void welcome(){
bingkai();
for(int a=1;a<=55;a++){

   textcolor(a);
	gotoxy(5+a,5);cprintf("     %c%c  %c%c%c  %c%c %c%c%c%c %c%c    %c%c%c%c%c %c%c%c%c%c%c %c%c     %c%c %c%c%c%c%c           ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(5+a,6);cprintf("     %c%c  %c%c%c  %c%c %c%c   %c%c    %c%c    %c%c  %c%c %c%c%c   %c%c%c %c%c              ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(5+a,7);cprintf("     %c%c  %c%c%c  %c%c %c%c%c%c %c%c    %c%c    %c%c  %c%c %c%c%c%c %c%c%c%c %c%c%c%c%c           ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(5+a,8);cprintf("      %c%c%c%c %c%c%c%c  %c%c   %c%c    %c%c    %c%c  %c%c %c%c %c%c%c %c%c %c%c              ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(5+a,9);cprintf("       %c%c   %c%c   %c%c%c%c %c%c%c%c%c %c%c%c%c%c %c%c%c%c%c%c %c%c  %c  %c%c %c%c%c%c%c           ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   textcolor(4);
   gotoxy(30,12);cprintf("%c%c%c%c%c  %c%c%c%c%c %c%c  %c%c %c%c%c%c%c%c %c%c%c  %c%c     %c%c   %c%c %c%c%c%c%c%c %c%c%c%c  %c%c %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(30,13);cprintf("%c%c  %c%c %c%c    %c%c%c %c%c   %c%c  %c%c %c%c %c%c     %c%c%c %c%c%c %c%c  %c%c %c%c %c%c %c%c %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(30,14);cprintf("%c%c%c%c%c  %c%c%c%c%c %c%c%c%c%c%c   %c%c  %c%c%c%c%c %c%c     %c%c%c%c%c%c%c %c%c  %c%c %c%c%c%c  %c%c %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(30,15);cprintf("%c%c %c%c  %c%c    %c%c %c%c%c   %c%c  %c%c %c%c %c%c     %c%c %c %c%c %c%c  %c%c %c%c %c%c %c%c %c%c    ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(30,16);cprintf("%c%c  %c%c %c%c%c%c%c %c%c  %c%c   %c%c  %c%c %c%c %c%c%c%c%c  %c%c   %c%c %c%c%c%c%c%c %c%c%c%c  %c%c %c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   textcolor(a);
   gotoxy(60-a,19);cprintf("%c%c    %c%c%c%c%c %c%c%c%c%c %c%c   %c%c  %c%c%c  %c%c  %c%c  %c%c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(60-a,20);cprintf("%c%c    %c%c    %c%c    %c%c%c %c%c%c %c%c %c%c %c%c%c %c%c %c%c %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(60-a,21);cprintf("%c%c    %c%c%c%c%c %c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c%c %c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(60-a,22);cprintf("%c%c    %c%c       %c%c %c%c %c %c%c %c%c %c%c %c%c %c%c%c %c%c %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(60-a,23);cprintf("%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c %c%c   %c%c %c%c %c%c %c%c  %c%c %c%c %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	Sleep(75);}
}

/////////////////////////////////BINGKAI////////////////////////////////////////

void bingkai(){

	for(int x=1;x<=120;x++){
   textcolor(4);
   gotoxy(x,1);cprintf("%c",219);
   gotoxy(x,29);cprintf("%c",219);Sleep(5);
   }

}

/////////////////////////////TAMPILAN LOGIN/////////////////////////////////////

void tampilan_login(){
for(int a=1;a<=29;a++){
		for(int b=1;b<=119;b++){
   		if(a==15&&b>=40&&b<=80||a==13&&b>=40&&b<=80||a==19&&b>=40&&b<=80||b==40&&a>=13&&a<=19||b==80&&a>=13&&a<=19||a==1||a==29||b==1||b==119){
      	textcolor(4);cprintf("%c",219);Sleep(2);
         }else{
         printf(" ");
      	}
   	}printf("\n");
   }
}

/////////////////////////////////LOADING////////////////////////////////////////

void loading(){
for(int b=1;b<=5;b++){
	gotoxy(57,25);printf("LOADING...");
   }
	for(int a=0; a<=50 ; a++){
   	textcolor(3);
      gotoxy(35+a,26); cprintf("%c",219);
   }
	textcolor(4);
	textbackground(3);
	for(int a=0; a<=100 ; a++){
			gotoxy(35+a/2,26); cprintf("%c",219);
         gotoxy(60,27); cprintf("%d%",a);
         Sleep(50);

   }
}

//////////////////////////////////////login////////////////////////////////////

void login(){
char username[25],password[25];
	tampilan_login();
	gotoxy(58,14);printf("LOGIN");
	gotoxy(45,17);printf("Username :");
   int a=0;
	username[a]=getch();
	while(username[a]!=13){
		if(username[a]==8){
   	a--;
   		if(a<0){
      	a=0;
     		}gotoxy(56+a,17);printf(" ");
   	}else{
   	gotoxy(56+a,17);printf("%c",username[a]);
   	a++;
   		}if(a>8){
   		a=8;
   		gotoxy(55,17);printf(" ");
   		}gotoxy(56+a,17);printf(" ");
   	username[a]=getch();

   }username[a]=NULL;

   clrscr();
	tampilan_login();
	gotoxy(54,14);printf("MASUKAN PASSWORD");
	gotoxy(45,17);printf("Password :");
   int b=0;
    password[b]=getch();
    while(password[b]!=13){
    	if(password[b]==8){
      b--;
      if(b<0){
      b=0;
      }gotoxy(56+b,17);printf(" ");
    }else{
    gotoxy(56+b,17);printf("*");
    b++;
    }if(b>8){
    b=8;
    gotoxy(55,17);printf(" ");
    }gotoxy(56+a,17);printf(" ");
    password[b]=getch();

    }password[b]=NULL;
   	if(strcmp(username,"selidesl")==0&&strcmp(password,"30042002")==0){
      clrscr();
      bingkai();
      for(int a=1;a<=5;a++){
      gotoxy(54,17);printf("Anda Berhasil Login");Sleep(200);
      gotoxy(54,17);printf("                   ");Sleep(100);
      }loading();
      clrscr();
      menu();
      }else{

      	gotoxy(50,22);printf("username/password salah\n");
         ulang++;
         if(ulang<=3){
         gotoxy(50,22);printf("username/password salah\n");Sleep(1000);
         clrscr();
         login();
         }else{
         	gotoxy(45,26);printf("Tunggu 15 detik untuk mencoba lagi");

            for(int a=15;a>=0;a--){
            gotoxy(57,27);printf(" %d Detik",a);Sleep(1000);
            ulang=3;
            }clrscr();
             login();
         }
      }

}

/////////////////////////////////MULAI////////////////////////////////////////

void mulai(){
  welcome();
   clrscr();
	awal();
	clrscr();
   login();
}

////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////MENU/////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void menu(){
	char plh[10];
   int pilih;
   char tekan;
	clrscr();
   bingkai();
   gotoxy(5,3);printf("  %c%c   %c%c %c%c%c%c%c %c%c  %c%c %c%c  %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(5,4);printf("  %c%c%c %c%c%c %c%c    %c%c%c %c%c %c%c  %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(5,5);printf("  %c%c%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c%c %c%c  %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(5,6);printf("  %c%c %c %c%c %c%c    %c%c %c%c%c %c%c  %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(5,7);printf("  %c%c   %c%c %c%c%c%c%c %c%c  %c%c %c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(7,10);printf("                       ");
   gotoxy(7,11);printf("    1.Info Rental      ");
	gotoxy(7,12);printf("                       ");
   gotoxy(7,14);printf("                       ");
   gotoxy(7,15);printf("    2.Rental Mobil     ");
	gotoxy(7,16);printf("                       ");
   gotoxy(7,18);printf("                       ");
   gotoxy(7,19);printf("    3.Pengembalian     ");
   gotoxy(7,20);printf("                       ");
   gotoxy(7,22);printf("                       ");
   gotoxy(7,23);printf("    4.Keluar           ");
   gotoxy(7,24);printf("                       ");
   gotoxy(13,27);printf("PILIH	:");gets(plh);
   pilih=atoi(plh);
   if(pilih==1){
   clrscr();
   bingkai();
   gotoxy(28,8);printf("====================================================================");
   gotoxy(28,9);printf("=======================Rental Mobil Lesmana=========================");
   gotoxy(28,10);printf("====================================================================");
   gotoxy(28,11);printf("|     kami adalah perusahaan yang menyediakan jasa dengan harga    |");
   gotoxy(28,12);printf("|   sewa atau rental mobil murah di Bandung untuk semua kebutuhan. |");
   gotoxy(28,13);printf("|    Memberikan pelayanan Jasa Transfortasi Berkualitas Terbaik.   |");
   gotoxy(28,14);printf("|     Membangun layanan Jasa Transfortasi yang aman,nyaman dan     |");
   gotoxy(28,15);printf("|                         memuaskan pelanggan.                     |");
   gotoxy(28,16);printf("|        Note:Rental ini hanya untuk 1 hari atau 12 jam.           |");
   gotoxy(28,17);printf("|               info lebih lanjut hub.083829119947                 |");
   gotoxy(28,18);printf("====================================================================");
   gotoxy(28,19);printf("====================================================================");Sleep(1000);
   do{
   gotoxy(40,20);printf("tekan (0) untuk kembali ke menu :");tekan=getch();;
   if(tekan=='0'){
    menu();
   }else{
   	gotoxy(73,20);printf("Inputan tidak Valid ");Sleep(200);
      gotoxy(73,20);printf("                    ");Sleep(100);
   }
   }while(tekan!='0');
   }else if(pilih==2){
   rental1();
   }else if(pilih==3){
   mas_kembali();

   }else if(pilih==4){
   terimakasih();
   exit(0);
   }else{
   menu();
   }


}

////////////////////////////rental/////////////////////////////////////////////

void rental1(){
	clrscr();
   for(int x=1;x<=100;x++){
   gotoxy(10+x,5);printf(" ");
   gotoxy(10+x,7);printf(" ");
   gotoxy(10+x,21);printf(" ");Sleep(10);
   }
   for(int y=1;y<18;y++){
   gotoxy(10,4+y);printf(" \n");
   gotoxy(17,4+y);printf(" \n");
   gotoxy(50,4+y);printf(" \n");
   gotoxy(70,4+y);printf(" \n");
   gotoxy(90,4+y);printf(" \n");
   gotoxy(110,4+y);printf(" \n");Sleep(10);
   }
   gotoxy(12,6);printf("KODE");
   gotoxy(13,9);printf("1");
   gotoxy(13,11);printf("2");
   gotoxy(13,13);printf("3");
   gotoxy(13,15);printf("4");
   gotoxy(13,17);printf("5");
   gotoxy(13,19);printf("6");
   gotoxy(27,6);printf("JENIS MOBIL");
   gotoxy(25,9);printf("TOYOTA INNOVA");
   gotoxy(25,11);printf("TOYOTA AVANZA");
   gotoxy(25,13);printf("SUZUKI APV");
   gotoxy(25,15);printf("ISUZU ELF LONG");
   gotoxy(25,17);printf("DAIHATSU XENIA");
   gotoxy(25,19);printf("KIA PREGIO");
   gotoxy(55,6);printf("HARGA/12 JAM");
   gotoxy(57,9);printf("Rp 500000");
   gotoxy(57,11);printf("Rp 350000");
   gotoxy(57,13);printf("Rp 350000");
   gotoxy(57,15);printf("Rp 850000");
   gotoxy(57,17);printf("Rp 350000");
   gotoxy(57,19);printf("Rp 600000");
   gotoxy(75,6);printf("Unit Mobil");
   gotoxy(80,9);printf("%d",stok1);
   gotoxy(80,11);printf("%d",stok2);
   gotoxy(80,13);printf("%d",stok3);
   gotoxy(80,15);printf("%d",stok4);
   gotoxy(80,17);printf("%d",stok5);
   gotoxy(80,19);printf("%d",stok6);
   gotoxy(96,6);printf("JASA SOPIR");
   gotoxy(96,9);printf("Rp 300000");
   gotoxy(96,11);printf("Rp 250000");
   gotoxy(96,13);printf("Rp 250000");
   gotoxy(96,15);printf("Rp 400000");
   gotoxy(96,17);printf("Rp 250000");
   gotoxy(96,19);printf("Rp 350000");
   sewa();
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////mulai milih////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void sewa(){
	char pilih;
	gotoxy(48,24);printf("masukan kode mobil yang akan dirental  :");
   gotoxy(88,24);pilih=getche();
  	if(pilih=='1'){
   harga+=500000;
   pilih1();
   }else if(pilih=='2'){
   harga+=350000;
   pilih2();
   }else if(pilih=='3'){
   harga+=350000;
   pilih3();
   }else if(pilih=='4'){
   harga+=850000;
   pilih4();
   }else if(pilih=='5'){
   harga+=350000;
   pilih5();
   }else if(pilih=='6'){
   harga+=600000;
   pilih6();
   }else{
   gotoxy(88,24);printf("Inputan Salah");Sleep(100);
   gotoxy(88,24);printf("             ");
   sewa();
   }
}
////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////pilihan mobil//////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

void pilih1(){
 stok1--;
   	if(stok1<1){
      printf("stok mobil habis");
      sewa();
      }else{
      do{
      gotoxy(48,25);printf("apakah anda ingin menggunakan jasa sopir(y/t):");jasa=getche();
         if(jasa=='y'){
         harga+=300000;
         }else if(jasa=='t'){
      	}else{
         textbackground(3);
         gotoxy(93,25);printf("Inputan tidak valid");Sleep(100);
         gotoxy(93,25);printf("                   ");Sleep(100);
        }
      }while(jasa!='t'&&jasa!='y');
      do{
      gotoxy(48,26);printf("apakah anda yakin ingin rental?(y/t)   :");rental=getche();
      if(rental=='y'){
         identitas();
         break;
      }else if(rental=='t'){
      stok1++;
      menu();
      break;
      }else{
      textbackground(3);
      gotoxy(93,26);cprintf("Inputan tidak valid");Sleep(100);
      gotoxy(93,26);cprintf("                   ");Sleep(100);
         }
      }while(rental!='y'&&rental!='t');

      }harga=0;
}

//////////////////////////////////PILIH 2///////////////////////////////////////

void pilih2(){
 stok2--;
   	if(stok2<1){
      printf("stok mobil habis");
      sewa();
      }else{
      do{
      gotoxy(48,25);printf("apakah anda ingin menggunakan jasa sopir(y/t):");jasa=getche();
         if(jasa=='y'){
         harga+=250000;
         }else if(jasa=='t'){
      	}else{
         textbackground(3);
         gotoxy(93,25);cprintf("Inputan tidak valid");Sleep(100);
         gotoxy(93,25);cprintf("                   ");Sleep(100);
        }
      }while(jasa!='t'&&jasa!='y');
      do{
      gotoxy(48,26);printf("apakah anda yakin ingin rental?(y/t)   :");rental=getche();
      if(rental=='y'){
         identitas();
         break;
      }else if(rental=='t'){
      stok2++;
      menu();
      break;
      }else{
      textbackground(3);
      gotoxy(93,26);cprintf("Inputan tidak valid");Sleep(100);
      gotoxy(93,26);cprintf("                   ");Sleep(100);
         }
      }while(rental!='y'&&rental!='t');

      }harga=0;
}

/////////////////////////////////////PILIH 3////////////////////////////////////

void pilih3(){
 stok3--;
   	if(stok3<1){
      printf("stok mobil habis");
      sewa();
      }else{
      do{
      gotoxy(48,25);printf("apakah anda ingin menggunakan jasa sopir(y/t):");jasa=getche();
         if(jasa=='y'){
         harga+=250000;
         }else if(jasa=='t'){
      	}else{
         textbackground(3);
         gotoxy(93,25);cprintf("Inputan tidak valid");Sleep(100);
         gotoxy(93,25);cprintf("                   ");Sleep(100);
        }
      }while(jasa!='t'&&jasa!='y');
      do{
      gotoxy(48,26);printf("apakah anda yakin ingin rental?(y/t)   :");rental=getche();
      if(rental=='y'){
         identitas();
         break;
      }else if(rental=='t'){
      stok3++;
      menu();
      break;
      }else{
      textbackground(3);
      gotoxy(93,26);cprintf("Inputan tidak valid");Sleep(100);
      gotoxy(93,26);cprintf("                   ");Sleep(100);
         }
      }while(rental!='y'&&rental!='t');

      }harga=0;
}
///////////////////////////////////PILIH 4//////////////////////////////////////

void pilih4(){
 stok4--;
   	if(stok4<1){
      printf("stok mobil habis");
      sewa();
      }else{
      do{
      gotoxy(48,25);printf("apakah anda ingin menggunakan jasa sopir(y/t):");jasa=getche();
         if(jasa=='y'){
         harga+=400000;
         }else if(jasa=='t'){
      	}else{
         textbackground(3);
         gotoxy(93,25);cprintf("Inputan tidak valid");Sleep(100);
         gotoxy(93,25);cprintf("                   ");Sleep(100);
        }
      }while(jasa!='t'&&jasa!='y');
      do{
      gotoxy(48,26);printf("apakah anda yakin ingin rental?(y/t)   :");rental=getche();
      if(rental=='y'){
         identitas();
         break;
      }else if(rental=='t'){
      stok4++;
      menu();
      break;
      }else{
      textbackground(3);
      gotoxy(93,26);cprintf("Inputan tidak valid");Sleep(100);
      gotoxy(93,26);cprintf("                   ");Sleep(100);
         }
      }while(rental!='y'&&rental!='t');

      }harga=0;
}

//////////////////////////////////////PILIH 5///////////////////////////////////

void pilih5(){
 stok5--;
   	if(stok5<1){
      printf("stok mobil habis");
      sewa();
      }else{
      do{
      gotoxy(48,25);printf("apakah anda ingin menggunakan jasa sopir(y/t):");jasa=getche();
         if(jasa=='y'){
         harga+=250000;
         }else if(jasa=='t'){
      	}else{
         textbackground(3);
         gotoxy(93,25);cprintf("Inputan tidak valid");Sleep(100);
         gotoxy(93,25);cprintf("                   ");Sleep(100);
        }
      }while(jasa!='t'&&jasa!='y');
      do{
      gotoxy(48,26);printf("apakah anda yakin ingin rental?(y/t)   :");rental=getche();
      if(rental=='y'){
         identitas();
         break;
      }else if(rental=='t'){
      stok5++;
      menu();
      break;
      }else{
      textbackground(3);
      gotoxy(93,26);cprintf("Inputan tidak valid");Sleep(100);
      gotoxy(93,26);cprintf("                   ");Sleep(100);

         }
      }while(rental!='y'&&rental!='t');

      }harga=0;
}

/////////////////////////////////////PILIH 6////////////////////////////////////

void pilih6(){
 stok6--;
   	if(stok6<1){
      printf("stok mobil habis");
      sewa();
      }else{
      do{
      gotoxy(48,25);printf("apakah anda ingin menggunakan jasa sopir(y/t):");jasa=getche();
         if(jasa=='y'){
         harga+=350000;
         }else if(jasa=='t'){
      	}else{
         textbackground(3);
         gotoxy(93,25);cprintf("Inputan tidak valid");Sleep(100);
         gotoxy(93,25);cprintf("                   ");Sleep(100);
         }
      }while(jasa!='t'&&jasa!='y');
      do{
      gotoxy(48,26);printf("apakah anda yakin ingin rental?(y/t)   :");rental=getche();
      if(rental=='y'){
         identitas();
         break;
      }else if(rental=='t'){
      stok6++;
      menu();
      break;
      }else{
      textbackground(3);
      gotoxy(93,26);cprintf("Inputan tidak valid");Sleep(100);
      gotoxy(93,26);cprintf("                   ");Sleep(100);
         }
      }while(rental!='y'&&rental!='t');

      }harga=0;
}

////////////////////////////////IDENTITAS///////////////////////////////////////

void identitas(){
	clrscr();
	bingkai();
   gotoxy(30,7);printf("==============================================================");
   gotoxy(30,8);printf("===================LENGKAPI IDENTITAS ANDA====================");
   gotoxy(30,9);printf("==============================================================");
   gotoxy(30,10);printf("|    Nama          :                                         |");
   gotoxy(30,11);printf("|    NO.KTP        :                                         |");
   gotoxy(30,12);printf("|    Alamat        :                                         |");
   gotoxy(30,13);printf("|    NO.HP         :                                         |");
   gotoxy(30,14);printf("|               Isi tanggal,bulan,tahun Rental               |");
   gotoxy(30,15);printf("|    Tanggal       :                                         |");
   gotoxy(30,16);printf("|    Bulan         :                                         |");
   gotoxy(30,17);printf("|    Tahun         :                                         |");
   gotoxy(30,18);printf("==============================================================");
   gotoxy(30,19);printf("==============================================================");
   inpnama();
}

/////////////////////////////////INPUT NAMA//////////////////////////////////////

void inpnama(){
	do{
   	gotoxy(50,10);printf("                       ");
      gotoxy(50,10);gets(nama);
      if(!valnama(nama)){
      	gotoxy(50,10);printf("Inputan tidak valid");Sleep(1000);
      	gotoxy(50,10);printf("                       ");
      }
   }while(!valnama(nama));
   do{
   	gotoxy(50,11);printf("                       ");
   	gotoxy(50,11);gets(ktp);
      if(!valktp(ktp)){
      	gotoxy(50,11);printf("Inputan tidak valid");Sleep(1000);
      	gotoxy(50,11);printf("                       ");
      }
   }while(!valktp(ktp));
   do{
   	gotoxy(50,12);printf("                       ");
   	gotoxy(50,12);gets(alamat);
      if(!valalamat(alamat)){
      	gotoxy(50,12);printf("Inputan tidak valid");Sleep(1000);
      	gotoxy(50,12);printf("                       ");
      }
   }while(!valalamat(alamat));

   do{
   	gotoxy(50,13);printf("                       ");
   	gotoxy(50,13);gets(nohp);
      if(!valnohp(nohp)){
      	gotoxy(50,13);printf("Inputan tidak valid");Sleep(1000);
      	gotoxy(50,13);printf("                       ");
      }
   }while(!valnohp(nohp));

   do{
   	gotoxy(50,15);printf("                       ");
   	gotoxy(50,15);gets(tanggal);
      if(!valtanggal(tanggal)){
      	gotoxy(50,15);printf("Inputan tidak valid");Sleep(1000);
      	gotoxy(50,15);printf("                       ");
      }
   }while(!valtanggal(tanggal));
   g_tgl=atoi(tanggal);

   do{
   	gotoxy(50,16);printf("                       ");
   	gotoxy(50,16);gets(bulan);
      if(!valbulan(bulan)){
      	gotoxy(50,16);printf("Inputan tidak valid");Sleep(1000);
      	gotoxy(50,16);printf("                       ");
      }
   }while(!valbulan(bulan));
  	g_bln=atoi(bulan);

    do{
   	gotoxy(50,17);printf("                       ");
   	gotoxy(50,17);gets(tahun);
      if(!valtahun(tahun)){
      	gotoxy(50,17);printf("Inputan tidak valid");Sleep(1000);
      	gotoxy(50,17);printf("                       ");
      }
   }while(!valtahun(tahun));
   g_th=atoi(tahun);
   kabisat(g_th,g_bln,g_tgl);
}

////////////////////////////////////PENGEMBALIAN////////////////////////////////

void pengembalian(){
clrscr();
	bingkai();
   gotoxy(30,7);printf("==============================================================");
   gotoxy(30,8);printf("========================PERENTAL MOBIL========================");
   gotoxy(30,9);printf("==============================================================");
   gotoxy(30,10);printf("|    Nama          :                                         |");
   gotoxy(30,11);printf("|    NO.KTP        :                                         |");
   gotoxy(30,12);printf("|    Alamat(kota)  :                                         |");
   gotoxy(30,13);printf("|    NO.HP         :                                         |");
   gotoxy(30,14);printf("|               Waktu Seharusnya dikembalikan :              |");
   gotoxy(30,15);printf("|    Tanggal       :                                         |");
   gotoxy(30,16);printf("|    Bulan         :                                         |");
   gotoxy(30,17);printf("|    Tahun         :                                         |");
   gotoxy(30,18);printf("|    Telat         :                                         |");
   gotoxy(30,19);printf("|    Denda         :                                         |");
   gotoxy(30,20);printf("|                       BAYAR DENDA                          |");
   gotoxy(30,21);printf("|    Masukan Uang  :                                         |");
   gotoxy(30,22);printf("|    Kembalian     :                                         |");
   gotoxy(30,23);printf("|                                                            |");
   gotoxy(30,24);printf("==============================================================");
   gotoxy(30,25);printf("==============================================================");
   gotoxy(30,26);printf("==============================================================");


}

//////////////////////////////////////MASUK KEMBALI//////////////////////////////

void mas_kembali(){
  int a,b;
  char tekan;
	clrscr();
   bingkai();
	gotoxy(45,16);printf("                                         ");
   gotoxy(45,17);printf("  Masukan Nama     :                     ");
   gotoxy(45,18);printf("                                         ");

   gotoxy(67,17);gets(name);
   if(strcmp(name,nama)==0){
   pengembalian();
   gotoxy(50,10);printf("%s",nama);
   gotoxy(50,11);printf("%s",ktp);
   gotoxy(50,12);printf("%s",alamat);
   gotoxy(50,13);printf("%s",nohp);
   gotoxy(50,15);printf("%s",tanggal);
   gotoxy(50,16);printf("%s",bulan);
   gotoxy(50,17);printf("%s",tahun);
   gotoxy(50,18);gets(telat);
   a=atoi(telat);
   denda=a*100000;
   gotoxy(50,19);printf("%d",denda);
   do{
   gotoxy(50,21);gets(uang);
   b=atoi(uang);
   kembalian=b-denda;
   if(denda>0){
   gotoxy(50,22);printf("%ld",kembalian);
   }else{
   gotoxy(50,22);printf("%inputan tidak valid");
   }
   }while(!(denda>0));
    do{
   gotoxy(40,27);printf("tekan (0) untuk kembali ke menu :");tekan=getch();;
   if(tekan=='0'){
   menu();
   }else{
   	gotoxy(73,20);printf("Inputan tidak Valid ");Sleep(200);
      gotoxy(73,20);printf("                    ");Sleep(100);
   }
   }while(tekan!='0');


   }else{
   gotoxy(40,14);printf("                                                ");
   gotoxy(40,15);printf("      anda mungkin belum melakukan rental       ");
   gotoxy(40,16);printf("      atau nama yang anda masukan salah         ");
   gotoxy(40,17);printf("  anda harus melakukan rental terlebih dahulu   ");
   gotoxy(40,18);printf("                                                ");Sleep(5000);
   rental1();
	}
}


void terimakasih(){
clrscr();
   bingkai();
    for(int a=1;a<=20;a++){
    textcolor(a);
    gotoxy(2,10);cprintf("||||||||||||| |||||||||| |||||||||   |||| ||||    ||||    ||||    ||||   ||||     ||||    |||||||||| |||| ||||    ||||");
    gotoxy(2,11);cprintf("||||||||||||| |||||||||| ||||||||||  |||| |||||  |||||   ||||||   ||||  ||||     ||||||   |||||||||| |||| ||||    ||||");
    gotoxy(2,12);cprintf("     ||||     ||||       ||||   |||| |||| ||||||||||||  ||||||||  |||| ||||     ||||||||  ||||       |||| ||||    ||||");
    gotoxy(2,13);cprintf("     ||||     |||||||||| ||||||||||  |||| |||||||||||| ||||  |||| ||||||||     ||||  |||| |||||||||| |||| ||||||||||||");
    gotoxy(2,14);cprintf("     ||||     |||||||||| |||||||||   |||| |||| || |||| |||||||||| ||||||||     |||||||||| |||||||||| |||| ||||||||||||");
    gotoxy(2,15);cprintf("     ||||     ||||       |||| ||||   |||| ||||    |||| |||||||||| |||| ||||    ||||||||||       |||| |||| ||||    ||||");
    gotoxy(2,16);cprintf("     ||||     |||||||||| ||||  ||||  |||| ||||    |||| ||||  |||| ||||  ||||   ||||  |||| |||||||||| |||| ||||    ||||");
    gotoxy(2,17);cprintf("     ||||     |||||||||| ||||   |||| |||| ||||    |||| ||||  |||| ||||   ||||  ||||  |||| |||||||||| |||| ||||    ||||");
    gotoxy(2,18);cprintf("                                           copyright by SELI DESLIA                                                   ");
    Sleep(100);
    }exit(0);
}
/////////////////////////////////TAMPILAN FIKS RENTAL////////////////////////////

void fiksrental(){
clrscr();
	bingkai();
   gotoxy(30,7);printf("==============================================================");
   gotoxy(30,8);printf("========================PENGEMBALIAN==========================");
   gotoxy(30,9);printf("==============================================================");
   gotoxy(30,10);printf("|    Nama          :                                         |");
   gotoxy(30,11);printf("|    NO.KTP        :                                         |");
   gotoxy(30,12);printf("|    Alamat        :                                         |");
   gotoxy(30,13);printf("|    NO.HP         :                                         |");
   gotoxy(30,14);printf("|               Pengembalian Rental Mobil pada :             |");
   gotoxy(30,15);printf("|    Tanggal       :                                         |");
   gotoxy(30,16);printf("|    Bulan         :                                         |");
   gotoxy(30,17);printf("|    Tahun         :                                         |");
   gotoxy(30,18);printf("|    Total Bayar   :                                         |");
   gotoxy(30,19);printf("|    masukan uang  :Rp                                       |");
   gotoxy(30,20);printf("|    kembalian     :                                         |");
   gotoxy(30,21);printf("==============================================================");
   gotoxy(30,22);printf("==============================================================");

}

main(){
	mulai();

getch();
}
