//===========================================================================\\
//==========                     FIRST PROJECT                 ==============\\
//==========             CREATED BY YAYU FAJRIATI RAHAYU       ==============\\
//==========                   D3-MANAJEMDEN INFORMATIKA        ==============\\
//==========                   PUB'17 FIREWALL                 ==============\\
//==========             UNIVERSITAS NASIONAL PASIM            ==============\\
//===========================================================================\\
//windows size :
//height 56
//widht 71
#include <stdio.h>
#include <conio.h>
#include <windows.h>


////////////////////////////////////////////////////////////////////////////////////
//////                               PROTOTYPE                                //////
////////////////////////////////////////////////////////////////////////////////////

void bingkai();
void logo();
void loading();
void menu();
void peringatan();
void latarlogin();
void latardaftar();
void latarbayar();
void admin();
void alumni();
void menuadmin();
void latar_saldo();
void latarpenarikan();
void penarikan();
void menualumni();
void latarinfaq();
void latarpenghasilan();
void persetujuan();
void bukti();
void dalil1();
void keluar1();
void keluar2();
void penghasilan();
void bayarinfaq();
struct biodata;
void daftar();
void buktipenarikan();
void resetpass1();
void resetpass2();
void login_admin();
void  login_alumni();
/////////////////////////////////////////////////////////////////////////////////
///////////////////////////   PROTOTYPE VALIDASI  ///////////////////////////////
////////////////////////////////////////////////////////////////////////////////
int validasiAngka(char inp[]);
int valNama(char huruf[]);
int valPass(char pass[]);
int valang(char angkatan[]);
int vallulus(char lulus[]);
int valnohp(char no[]);
int valbulan(char bul[]);

/////////////////////////////////////////////////////////////////////////////////
//////////////////////////////VARIABLE GLOBAL////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
int gaji;
int hasil=0;
int sisa=0;
int bayar;
char ingaji[20];
char inbayar[20];
int ixal;
int ixB;
int ixD;
char passad2[30]="18329";
int y=0;
int c=0;
int tarik1;
int ixP=0;
char pnama[100][30];
int pcek[100];
int ptrans[100];
int psaldo;
struct biodata{
	char nama[30];
   char asal[30];
   char angkatan[30];
   char jenjang[30];
   char lulus[30];
   char no_hp[30];
   char username[30];
   char pass[30];
   int a;
   int penghasilan;
   int infaq[13];
   int bulan[13];
};
biodata alumnii[100];

//////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////DESIGN///////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
void bingkai(){
   gotoxy(15,2);printf("--------------------------------------------");
   gotoxy(15,3);printf("E-PAYMENT ALUMNI PUB BY YAYU FAJRIATI RAHAYU");
   gotoxy(15,4);printf("--------------------------------------------");
	for(int a=0;a<70;a++){
   	gotoxy(1+a, 1);printf("%c",219);Sleep(30);
      gotoxy(1+a, 5);printf("%c",219);
      gotoxy(1+a,55);printf("%c",219);
	}
   for(int a=0;a<55;a++){
   	gotoxy(1, 1+a);printf("%c",219);Sleep(20);
      gotoxy(70,1+a);printf("%c",219);
	}
}
void logo(){
   gotoxy(15,10);printf("      PEMBERDAYAAN UMAT BERKELANJUTAN     ");
   gotoxy(15,12);printf("         UNIVERSITAS NASIONAL PASIM       ");
   gotoxy(15,14);printf("JL. DAKOTA NO 8A SUKARAJA, CICENDO, BANDUNG");
   gotoxy(25,18);printf("===================");
   gotoxy(25,20);printf("SABAR SYUKUR SUKSES");
   gotoxy(25,22);printf("===================");
   gotoxy(23,26); cprintf("           ***                          ");
	gotoxy(23,27); cprintf("       ***********                      ");
	gotoxy(23,28); cprintf("    *****************                   ");
	gotoxy(23,29); cprintf("  *********************                ");
	gotoxy(23,30); cprintf("    ***************** *                 ");
	gotoxy(23,31); cprintf("       ***********    *                 ");
	gotoxy(23,32); cprintf("       ***********    *                 ");
	gotoxy(23,33); cprintf("       ***********    *                 ");
	gotoxy(23,34); cprintf("                                        ");
	gotoxy(23,35); cprintf("      *************                     ");
	gotoxy(23,36); cprintf("      *           *                     ");
	gotoxy(23,37); cprintf("      *    PUB    *                     ");
	gotoxy(23,38); cprintf("      *           *                     ");
	gotoxy(23,39); cprintf("      *************                     ");
}

void loading(){

   for(int a=1; a<=100;a++){
   	if(a%5==1){
      	gotoxy(30,45);printf("%c        ",219);
      }
      else if(a%5==2){
      	gotoxy(30,45);printf("  %c      ",219);
      }
      else if(a%5==3){
      	gotoxy(30,45);printf("    %c    ",219);
      }
      else if(a%5==4){
      	gotoxy(30,45);printf("      %c  ",219);
      }
      else{
      	gotoxy(30,45);printf("        %c",219);
      }Sleep(50);
    }
}

void menu(){
	clrscr();
   bingkai();
	for(int a=0; a<16; a++){
   		gotoxy(24,16+a);printf("%c",186);
   		gotoxy(50,16+a);printf("%c",186);
   }
	for(int a=0;a<25;a++){
      gotoxy(25+a,15);printf("%c",205);
   	gotoxy(25+a,32);printf("%c",205);
   }
   gotoxy(24,32);printf("%c",200);//kiri bawah
   gotoxy(50,32);printf("%c",188);//kanan bawah
   gotoxy(50,15);printf("%c",187);//kanan atas
   gotoxy(24,15);printf("%c",201);//kiri atas
   gotoxy(8,  7);printf("P E M B E R D A Y A A N  U M A T  B E R K E L A N J U T A N");
   gotoxy(30,10);printf("================");
   gotoxy(30,11);printf("M    E    N    U");
   gotoxy(30,12);printf("================");
   gotoxy(27,18);printf("1. ADMIN");
   gotoxy(25,20);printf("-------------------------");
   gotoxy(27,22);printf("2. ALUMNI");
   gotoxy(25,24);printf("-------------------------");
   gotoxy(27,26);printf("3. DAFTAR");
   gotoxy(25,28);printf("-------------------------");
   gotoxy(27,30);printf("4. KELUAR");

   for(int a=0;a<40;a++){
   	for(int b=0; b<=5;b++){
   		gotoxy(18+a,35+b);printf("%c",219);
      }
   }
   char Menu;
   gotoxy(21,37);printf("Masukkan Pilihan Anda!!(1/2/3/4) ");
   do{
      gotoxy(56,37);printf(" ");
   	gotoxy(56,37);Menu=getche();
   }while(Menu!='1' && Menu!='2' && Menu!='3' && Menu!='4');
   if(Menu=='1'){
      latarlogin();
      login_admin();
   }else if(Menu=='2'){
   	latarlogin();
      login_alumni();
   }else if(Menu=='3'){
      latardaftar();
   }else{
   	keluar1();
   }
}
void latarlogin(){
	clrscr();
   bingkai();
	for(int a=0; a<15; a++){
		gotoxy(17,19+a);printf("%c",186);
   	gotoxy(58,19+a);printf("%c",186);
		for(int a=0; a<46; a++){
   		gotoxy(15+a,21);printf("%c",205);
   		gotoxy(15+a,31);printf("%c",205);
      }
   }
   gotoxy(20, 8);printf("====================================");
   gotoxy(20,10);printf("       L    O    G    I     N       ");
   gotoxy(18,12);printf("====================================");
   gotoxy(18,26);printf("----------------------------------------");
   gotoxy(21,23);printf("USERNAME :");
   gotoxy(21,28);printf("PASSWORD :");
}

void latardaftar(){
	clrscr();
   bingkai();
  	gotoxy(25, 7);printf("==========================");
	gotoxy(25, 9);printf("D    A    F    T    A    R");
   gotoxy(25,11);printf("==========================");
		for(int a=0; a<31; a++){
      		gotoxy(12,14+a);printf("%c",186);
   			gotoxy(60,14+a);printf("%c",186);
            gotoxy(34,14+a);printf("%c",186);
      }
      for(int a=0; a<47;a++){
   		gotoxy(13+a,13);printf("%c",205);
   		gotoxy(13+a,17);printf("%c",205);
         gotoxy(13+a,21);printf("%c",205);
         gotoxy(13+a,25);printf("%c",205);
         gotoxy(13+a,29);printf("%c",205);
         gotoxy(13+a,33);printf("%c",205);
         gotoxy(13+a,37);printf("%c",205);
         gotoxy(13+a,41);printf("%c",205);
         gotoxy(13+a,45);printf("%c",205);
      }
   gotoxy(60,45);printf("%c",188);  //kanan bawah
   gotoxy(60,13);printf("%c",187);  //kanan atas
   gotoxy(12,45);printf("%c",200); //kiri bawah
   gotoxy(12,13);printf("%c",201); //kiri atas
   gotoxy(15,15);printf("NAMA");
   gotoxy(15,19);printf("ASAL DAERAH");
   gotoxy(15,23);printf("ANGKATAN");
   gotoxy(15,27);printf("D3/S1");
   gotoxy(15,31);printf("TAHUN LULUS");
   gotoxy(36,31);printf("20");
   gotoxy(15,35);printf("NO HP");
   gotoxy(36,35);printf("+628");
   gotoxy(15,39);printf("USERNAME");
   gotoxy(15,43);printf("PASSWORD");
   daftar();
}
void menuadmin(){
	clrscr();
   bingkai();
	gotoxy(20, 9);printf("===================================");
	gotoxy(20,10);printf("    M  E  N  U    A  D  M  I  N    ");
	gotoxy(20,11);printf("===================================");
	for(int a=0; a<20; a++){
      	gotoxy(24,14+a);printf("%c",186);
         gotoxy(51,14+a);printf("%c",186);
   }
	for(int a=0;a<33;a++){
   	gotoxy(21+a,15);printf("%c",205);
      gotoxy(21+a,32);printf("%c",205);
   }
   gotoxy(27,18);printf("1.CEK SALDO");
   gotoxy(25,20);printf("-------------------------");
   gotoxy(27,22);printf("2.PENARIKAN");
   gotoxy(25,24);printf("-------------------------");
   gotoxy(27,26);printf("3.RESET PASSWORD");
   gotoxy(25,28);printf("-------------------------");
   gotoxy(27,30);printf("4.KEMBALI");

   for(int a=0;a<40;a++){
		for(int b=0; b<=5;b++){
   	  		gotoxy(18+a,37+b);printf("%c",219);
        }
   }
   char menuad;
   gotoxy(21,39);printf("Masukkan Pilihan Anda!!(1/2/3/4) ");
   do{
      gotoxy(54,39);printf(" ");
   	gotoxy(54,39);menuad=getche();
   }while(menuad!='1' && menuad!='2' && menuad!='3'&& menuad!='4');
   if(menuad=='1'){
   	latar_saldo();
   }else if(menuad=='2'){
      latarpenarikan();
   }else if(menuad=='3'){
      resetpass1();
      resetpass2();
   }else{
   	menu();
   }
}
void latar_saldo(){
	clrscr();
   bingkai();
	gotoxy(24, 8);printf("=============================");
   gotoxy(24, 9);printf("    S    A    L    D    O    ");
   gotoxy(24,10);printf("=============================");

   gotoxy(5,13);printf("===============================================================");
   gotoxy(5,14);printf("===============================================================");
   gotoxy(5,15);printf("||            PEMBERDAYAAN UMAT BERKELANJUTAN                ||");
   gotoxy(5,16);printf("||                          KAS                              ||");
   gotoxy(5,17);printf("||        JL. DAKOTA NO 8A SUKARAJA, CICENDO BANDUNG         ||");
   gotoxy(5,18);printf("---------------------------------------------------------------");
   gotoxy(5,19);printf("||    ||                     ||         JUMLAH INFAQ         ||");
   gotoxy(5,20);printf("|| NO ||        NAMA         ||------------------------------||");
   gotoxy(5,21);printf("||    ||                     ||       D      ||       K      ||");
   gotoxy(5,22);printf("||-----------------------------------------------------------||");
   gotoxy(5,23);printf("||    ||                     ||              ||              ||");
   gotoxy(5,24);printf("||    ||                     ||              ||              ||");
   gotoxy(5,25);printf("||    ||                     ||              ||              ||");
   gotoxy(5,26);printf("||    ||                     ||              ||              ||");
   gotoxy(5,27);printf("||    ||                     ||              ||              ||");
   gotoxy(5,28);printf("||    ||                     ||              ||              ||");
   gotoxy(5,29);printf("||    ||                     ||              ||              ||");
   gotoxy(5,30);printf("||    ||                     ||              ||              ||");
   gotoxy(5,31);printf("||    ||                     ||              ||              ||");
   gotoxy(5,32);printf("||    ||                     ||              ||              ||");
   gotoxy(5,33);printf("||    ||                     ||              ||              ||");
   gotoxy(5,34);printf("||    ||                     ||              ||              ||");
   gotoxy(5,35);printf("||    ||                     ||              ||              ||");
   gotoxy(5,36);printf("||    ||                     ||              ||              ||");
   gotoxy(5,37);printf("||    ||                     ||              ||              ||");
   gotoxy(5,38);printf("---------------------------------------------------------------");
   gotoxy(5,39);printf("||       SALDO INFAQ         ||                              ||");
   gotoxy(5,40);printf("===============================================================");
   gotoxy(5,41);printf("===============================================================");
   for(int a=0; a<ixP; a++){
   	gotoxy( 8,23+a);printf("%d", a+1);
      gotoxy(14,23+a);printf("%s",pnama[a]);
      if(pcek[a]==0){
      	gotoxy(38,23+a);printf("Rp. %6d",ptrans[a]);  //debet
      }else{
      	gotoxy(53,23+a);printf("Rp. %6d",ptrans[a]);//kredit
      }
	}
   gotoxy(44,39);printf("Rp. %7d", psaldo); //nilai umum
   gotoxy(17,45);printf("Tekan Y/y Untuk Kembali Ke Menu Admin!!");
	char kembali;
   do{
      gotoxy(55,45);printf(" ");
   	gotoxy(55,45);kembali=getche();
   }while(kembali!='y' && kembali!='Y');
   if(kembali=='y' || kembali=='Y'){
   	menuadmin();
   }
}
void latarpenarikan(){
   clrscr();
   bingkai();
	gotoxy(15,15);printf("===========================================");
   gotoxy(15,16);printf("===========================================");
   gotoxy(15,17);printf("                                           ");
	gotoxy(15,18);printf("           P  E  N  A  R  I  K  A  N       ");
   gotoxy(15,19);printf("                                           ");
   gotoxy(15,20);printf("===========================================");
   gotoxy(15,21);printf("===========================================");
   gotoxy(15,22);printf("==                                       ==");
   gotoxy(15,23);printf("== Jumlah Penarikan : Rp                 ==");
   gotoxy(15,24);printf("==                                       ==");
   gotoxy(15,25);printf("===========================================");
   gotoxy(15,26);printf("===========================================");
   char intarik[10];
   narik:
   do{
      gotoxy(40,23);printf("                     ");
      gotoxy(40,23);gets(intarik);
      if(validasiAngka(intarik)!=0){
			gotoxy(40,23);printf("Masukan Angka !");Sleep(600);
      }else if(strlen(intarik)>10){
			gotoxy(40,23);printf("Input  lebih dari 10");Sleep(700);
      }
   }while(validasiAngka(intarik)!=0 || strlen(intarik)>10 || strcmp(intarik,"")==0);
   tarik1=atoi(intarik);
   if(psaldo==0){
   	gotoxy(17,37);printf("Maaf! Anda Tidak Bisa Melakukan Penarikan!!");Sleep(1000);
      gotoxy(27,38);printf("Saldo Anda Kosong");Sleep(1000);
		menuadmin();
   }
   else if(tarik1>psaldo){
   	gotoxy(18,37);printf("Inputan Anda Melebihi Saldo Yang Ada!!");Sleep(1000);
      gotoxy(18,38);printf("Apakah Anda Ingin Melakukan Penarikan?");Sleep(1000);
      gotoxy(16,39);printf("Silahkan Melakukan Inputan Lagi!(y/n)");	Sleep(1000);
      char verif;
      verif=getche();
      	if(verif=='y' || verif=='Y' ){
         	gotoxy(18,37);printf("                                               ");
      		gotoxy(18,38);printf("                                               ");
   			gotoxy(16,39);printf("                                               ");
      		goto narik;
         }else if(verif=='n' || verif=='N'){
         	menuadmin();
         }else{
           gotoxy(18,37);printf("                                                ");
           gotoxy(18,38);printf("                                                ");
           gotoxy(16,39);printf("                                                ");
           goto narik;
         }
   }else{
   y-=tarik1;
   penarikan();
   }
}
void penarikan(){
   char tarik2;
   gotoxy(15,28);printf("Apakah Anda Ingin Melakukan Penarikan?(y/n)");
   do{
      gotoxy(43,37);printf(" ");
   	gotoxy(43,37);tarik2=getche();
   }while(tarik2!='Y' && tarik2!='y' && tarik2!='N' && tarik2!='n');
   if(tarik2=='y' || tarik2=='Y'){
   	strcpy(pnama[ixP],"ADMIN");
      ptrans[ixP]=tarik1;
      pcek[ixP]=1;
      psaldo-=ptrans[ixP];
      ixP++;
      buktipenarikan();
   }else{
      menuadmin();
   }
}
void buktipenarikan(){
   char backto;
	clrscr();

   bingkai();
	gotoxy(13,10);printf("======================================================");
	gotoxy(13,11);printf("======================================================");
   gotoxy(13,12);printf("==                                                  ==");
   gotoxy(13,13);printf("==          PEMBERDAYAAN UMAT BERKELANJUTAN         ==");
   gotoxy(13,14);printf("==                                                  ==");
   gotoxy(13,15);printf("==             UNIVERSITAS NASIONAL PASIM           ==");
   gotoxy(13,16);printf("==                                                  ==");
   gotoxy(13,17);printf("==                BUKTI PENARIKAN UANG              ==");
   gotoxy(13,18);printf("======================================================");
   gotoxy(13,19);printf("======================================================");
   gotoxy(13,20);printf("==                                                  ==");
   gotoxy(13,21);printf("== JUMLAH PENARIKAN : Rp.                           ==");
   gotoxy(13,22);printf("==                                                  ==");
   gotoxy(13,23);printf("======================================================");
   gotoxy(13,24);printf("==                                                  ==");
   gotoxy(13,25);printf("== SISA SALDO       : Rp.                           ==");
   gotoxy(13,26);printf("==                                                  ==");
   gotoxy(13,27);printf("======================================================");
   gotoxy(13,28);printf("======================================================");
   gotoxy(40,21);printf("%9d", tarik1);
   gotoxy(40,25);printf("%9d", psaldo);
   gotoxy(20,30);printf("Tekan Y Untuk Kembali Ke Menu Admin!!");
   do{
      gotoxy(43,31);printf(" ");
   	gotoxy(43,31);backto=getche();
   }while(backto!=89);
   menuadmin();
}
void resetpass1(){
	clrscr();
   bingkai();
	gotoxy(10,12);printf("====================================================");
	gotoxy(10,13);printf("====================================================");
	gotoxy(10,14);printf("        G  A  N  T  I   P  A  S  S  W  O  R  D      ");
   gotoxy(10,15);printf("====================================================");
   gotoxy(10,16);printf("====================================================");
   gotoxy(10,17);printf("==                                                ==");
   gotoxy(10,18);printf("== PASSWORD LAMA       :                          ==");
   gotoxy(10,19);printf("==                                                ==");
   gotoxy(10,20);printf("== PASSWORDBARU        :                          ==");
   gotoxy(10,21);printf("==                                                ==");
   gotoxy(10,22);printf("== KONFIRMASI PASSWORD :                          ==");
   gotoxy(10,23);printf("==                                                ==");
   gotoxy(10,24);printf("====================================================");
   gotoxy(10,25);printf("====================================================");

}
void menualumni(){
	clrscr();
   bingkai();
	gotoxy(20,10);printf("=====================================");
	gotoxy(20,12);printf("    M  E  N  U    A  L  U  M  N  I   ");
	gotoxy(20,14);printf("=====================================");
   for(int a=0; a<11; a++){
   	gotoxy(24,18+a);printf("%c",186);
   	gotoxy(50,18+a);printf("%c",186);
   }
	for(int a=0;a<25;a++){
   	gotoxy(25+a,17);printf("%c",205);
      gotoxy(25+a,29);printf("%c",205);
   }
   gotoxy(24,29);printf("%c",200);//kiri bawah
   gotoxy(50,29);printf("%c",188);//kanan bawah
   gotoxy(50,17);printf("%c",187);//kanan atas
   gotoxy(24,17);printf("%c",201);//kiri atas
   gotoxy(27,19);printf("1.LIHAT INFAQ");
   gotoxy(25,21);printf("-------------------------");
   gotoxy(27,23);printf("2.BAYAR INFAQ");
   gotoxy(25,25);printf("-------------------------");
   gotoxy(27,27);printf("3.KEMBALI");
    for(int c=0;c<40;c++){
   	for(int b=0; b<=5;b++){
   		gotoxy(18+c,35+b);printf("%c",219);
      }
   }
   char menual;
   gotoxy(21,37);printf("Masukkan Pilihan Anda!!(1/2/3) ");
   do{
      gotoxy(56,37);printf(" ");
   	gotoxy(56,37);menual=getche();
   }while(menual!='1' && menual!='2' && menual!='3' && menual!='4');
   if(menual=='1'){
   	latarinfaq();
   }else if(menual=='2'){
   	latarpenghasilan();
   }else{
      menu();
   }
}
void latarinfaq(){
	clrscr();
   bingkai();
   gotoxy(13,12);printf("===============================================");
	gotoxy(13,13);printf("===============================================");
	gotoxy(13,14);printf("           S  I  S  A     I  N  F  A  Q        ");
   gotoxy(13,15);printf("===============================================");
   gotoxy(13,16);printf("===============================================");
   gotoxy(13,17);printf("||                                           ||");
   gotoxy(13,18);printf("||                                           ||");
   gotoxy(13,19);printf("|| Sisa Pembayaran Infaq Anda :    kali lagi ||");
   gotoxy(13,20);printf("||                                           ||");
   gotoxy(13,21);printf("||                                           ||");
   gotoxy(13,22);printf("===============================================");
   gotoxy(13,23);printf("===============================================");
   gotoxy(43,19);printf( "%3d", alumnii[ixal].a);
   char sisa;
   gotoxy(18,28);printf("Tekan Y/y Untuk Kembali Ke Menu Alumni!!!");
   do{
     	gotoxy(40,29);printf("   ");
      gotoxy(40,29);sisa=getche();
   }while(sisa!='y' && sisa!='Y');
   	if(sisa=='Y'|| sisa=='y' ){
   	menualumni();
   }
}
void latarpenghasilan(){
	clrscr();
   bingkai();
	gotoxy(21,10);printf("===============================");
	gotoxy(21,12);printf("B  A  Y  A  R     I  N  F  A  Q");
   gotoxy(21,14);printf("===============================");
   for(int a=0;a<24;a++){
      	gotoxy(60,17+a);printf("%c",186);
      	gotoxy(10,17+a);printf("%c",186);

   }
   for(int a=0;a<55;a++){
   	gotoxy(8+a,18);printf("%c",205);
      gotoxy(8+a,38);printf("%c",205);

   }
   gotoxy(15,20);printf("Masukkan Penghasilan  :Rp");
   gotoxy(13,22);printf("---------------------------------------------");
   gotoxy(15,24);printf("Total Infaq Anda      :Rp");
   gotoxy(13,26);printf("---------------------------------------------");
   gotoxy(15,28);printf("Sisa Penghasilan Anda :Rp");
   gotoxy(13,30);printf("---------------------------------------------");
   penghasilan();
   persetujuan();
}
void persetujuan(){
   gotoxy(15,31);printf("Apakah Anda Ingin Membayar Infaq?");
   gotoxy(15,33);printf("1. Bayar Infaq");
   gotoxy(15,35);printf("2. Kembali");
   gotoxy(15,37);printf("Masukkan Pilihan Anda : ");
   char setuju;

   do{
      gotoxy(41,37);printf(" ");
   	gotoxy(41,37);setuju=getche();
   }while(setuju!='1' && setuju!='2'&& setuju==13);
   if(setuju=='1'){
      latarbayar();
   }else{
   	menualumni();
   }
}

void bukti(){
      char kembalii;
		clrscr();
   	bingkai();
		gotoxy(10,15); cprintf(" ==================================================== ");
      gotoxy(10,16); cprintf(" ==================================================== ");
      gotoxy(10,17); cprintf(" =======   PEMBERDAYAAN UMAT BERKELANJUTAN    ======= ");
      gotoxy(10,18); cprintf(" =======         BUKTI TRANSAKSI              ======= ");
      gotoxy(10,19); cprintf(" =======           INFAQ ALUMNI               ======= ");
      gotoxy(10,20); cprintf(" ==================================================== ");
      gotoxy(10,21); cprintf(" ==================================================== ");
      gotoxy(10,22); cprintf(" = NAMA LENGKAP            :                        = ");
      gotoxy(10,23); cprintf(" = ASAL DAERAH             :                        = ");
      gotoxy(10,24); cprintf(" = TAHUN LULUS             : 20                     = ");
      gotoxy(10,25); cprintf(" = ANGKATAN                :                        = ");
      gotoxy(10,26); cprintf(" = JENJANG PENDIDIKAN      :                        = ");
      gotoxy(10,27); cprintf(" =                                                  = ");
      gotoxy(10,28); cprintf(" = JUMLAH PENGHASILAN ANDA : Rp                     = ");
     	gotoxy(10,29); cprintf(" = TOTAL INFAQ ANDA        : Rp                     = ");
      gotoxy(10,30); cprintf(" = SISA PEMBAYARAN INFAQ   :        kali            = ");
      gotoxy(10,31); cprintf(" =                                                  = ");
      gotoxy(10,32); cprintf(" =                                                  = ");
      gotoxy(10,33); cprintf(" =                                    TTD,          = ");
      gotoxy(10,34); cprintf(" =                                                  = ");
      gotoxy(10,35); cprintf(" =                                                  = ");
      gotoxy(10,36); cprintf(" =                                                  = ");
      gotoxy(10,37); cprintf(" =                                  BENDAHARA       = ");
      gotoxy(10,38); cprintf(" ==================================================== ");
      gotoxy(39,22);printf("%s", alumnii[ixal].nama);
      gotoxy(39,23);printf("%s", alumnii[ixal].asal);
		gotoxy(41,24);printf("%s", alumnii[ixal].lulus);
      gotoxy(39,25);printf("%s", alumnii[ixal].angkatan);
		gotoxy(39,26);printf("%s", alumnii[ixal].jenjang);
      gotoxy(42,28);printf("%10d", alumnii[ixal].penghasilan);
		gotoxy(42,29);printf("%10d", alumnii[ixal].infaq[ixB]);
      gotoxy(42,30);printf( "%2d", alumnii[ixal].a);

      gotoxy(20,40);printf("Tekan Y/y Untuk Kembali!!");
		do{
      	gotoxy(47,40);printf("     ");
       	gotoxy(47,40);kembalii=getch();
      }while(kembalii==13);
      if(kembalii=='Y' || kembalii=='y'){
         menualumni();
      }else{
         gotoxy(12,40);printf("                     ");
         bukti();
      }
}
void latarbayar(){
	clrscr();
   bingkai();
	gotoxy(21,10);printf("===============================");
	gotoxy(21,12);printf("B  A  Y  A  R     I  N  F  A  Q");
   gotoxy(21,14);printf("===============================");
   for(int a=0; a<11; a++){
   	gotoxy(14,38+a);printf("%c",186);
      gotoxy(58,38+a);printf("%c",186);
   }
   for(int a=0;a<47;a++){
   	gotoxy(13+a,39);printf("%c",205);
      gotoxy(13+a,47);printf("%c",205);
   }
   gotoxy(21,16);printf("===============================");
   gotoxy(21,17);printf("===============================");
   gotoxy(21,18);printf("==       FORMAT BULAN        ==");
   gotoxy(21,19);printf("===============================");
   gotoxy(21,20);printf("||   NO ||      BULAN        ||");
   gotoxy(21,21);printf("||---------------------------||");
   gotoxy(21,22);printf("||   1  || JANUARI           ||");
   gotoxy(21,23);printf("||   2  || FEBRUARI          ||");
   gotoxy(21,24);printf("||   3  || MARET             ||");
   gotoxy(21,25);printf("||   4  || APRIL             ||");
   gotoxy(21,26);printf("||   5  || MEI               ||");
   gotoxy(21,27);printf("||   6  || JUNI              ||");
   gotoxy(21,28);printf("||   7  || JULI              ||");
   gotoxy(21,29);printf("||   8  || AGUSTUS           ||");
   gotoxy(21,30);printf("||   9  || SEPTEMBER         ||");
   gotoxy(21,31);printf("||  10  || OKTOBER           ||");
   gotoxy(21,32);printf("||  11  || NOVEMBER          ||");
   gotoxy(21,33);printf("||  12  || DESEMBER          ||");
   gotoxy(21,34);printf("===============================");
   gotoxy(21,35);printf("===============================");

   gotoxy(15,41);printf(" Infaq Untuk Bulan    :   ");
   gotoxy(15,45);printf(" Masukkan Besar Infaq : Rp");
   gotoxy(23,49);printf("KEHARUSAN INFAQ ANDA Rp %d\n",hasil);
   bayarinfaq();
}
void dalil1(){
	clrscr();
   bingkai();
   gotoxy(18,13);printf("I N F A Q   A N D A   K U R A N G!!!!");Sleep(1000);
   gotoxy(7,15);printf("==========================================================");Sleep(1000);
   gotoxy(7,16);printf("==========================================================");Sleep(1000);
   gotoxy(7,17);printf("==            P  E  R  I  N  G  A  T  A  N              ==");Sleep(1000);
	gotoxy(7,18);printf("==========================================================");Sleep(1000);
   gotoxy(7,19);printf("==========================================================");Sleep(1000);
   gotoxy(7,20);printf("==                                                      ==");Sleep(1000);
   gotoxy(7,21);printf("==       Dan tepatilah perjanjian dengan Alloh          ==");Sleep(1000);
   gotoxy(7,22);printf("==       apabila kamu berjanji dan jangan kamu          ==");Sleep(1000);
   gotoxy(7,23);printf("==      membatalkan sumpah-sumpah(mu) itu sesudah       ==");Sleep(1000);
   gotoxy(7,24);printf("==      meneguhkannya,sedang kamu telah menjadikan      ==");Sleep(1000);
   gotoxy(7,25);printf("==   Alloh sebagai saksimu(terhadap sumpah-sumpah itu)  ==");Sleep(1000);
   gotoxy(7,26);printf("==  Sesungguhnya Alloh mengetahui apa yang kamu perbuat ==");Sleep(1000);
   gotoxy(7,27);printf("==                   (An-Nahl:91)                       ==");Sleep(1000);
   gotoxy(7,28);printf("==                                                      ==");Sleep(1000);
	gotoxy(7,29);printf("==========================================================");Sleep(1000);
	gotoxy(7,30);printf("==========================================================");Sleep(1000);

}
void keluar1(){
	clrscr();
   bingkai();
	char Keluar;
	gotoxy(20,18);printf("==================================");
	gotoxy(20,20);printf("Apakah Anda Yakin ingin Keluar?(y/n)");
   gotoxy(20,22);printf("==================================");
   gotoxy(20,25);printf("==================================");
   gotoxy(20,29);printf("==================================");
   do{
      gotoxy(35,27);printf("  ");
		gotoxy(35,27);Keluar=getche();
   }while(Keluar!='y' && Keluar!='Y'&& Keluar!='N'&& Keluar!='n' && Keluar==13);
   if(Keluar=='y' || Keluar=='Y'){
   	keluar2();
   }
   menu();
}

void keluar2(){
	clrscr();
   bingkai();
	gotoxy(20,14);printf("==================================");
   gotoxy(20,15);printf("                                  ");
	gotoxy(20,16);printf("T  E  R  I  M  A    K  A  S  I  H ");
   gotoxy(20,17);printf("                                  ");
   gotoxy(20,18);printf("==================================");
	gotoxy(5,25);printf("==============================================================");
	gotoxy(5,27);printf("==========             FIRST PROJECT            ==============");
   gotoxy(5,29);printf("==========          E-PAYMENT ALUMNI PUB        ==============");
	gotoxy(5,31);printf("==========    CREATED BY YAYU FAJRIATI RAHAYU   ==============");
   gotoxy(5,33);printf("==========       D3-MANAJEMEN INFORMATIKA       ==============");
	gotoxy(5,35);printf("==========           PUB'17 FIREWALL            ==============");
	gotoxy(5,37);printf("==========      UNIVERSITAS NASIONAL PASIM      ==============");
	gotoxy(5,39);printf("==============================================================");
   Sleep(2000);
   exit(0);
}


////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////DAFTAR&LOGIN////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void daftar(){
   char uname[300], upass[300];
   do{
   	gotoxy(36,15);printf("                       ");
		gotoxy(36,15);gets(alumnii[ixD].nama);
   }while(strcmp(alumnii[ixD].nama,"")==0 || valNama(alumnii[ixD].nama)!=0);
   do{
   	gotoxy(36,19);printf("                ");
   	gotoxy(36,19);gets(alumnii[ixD].asal);
   }while(strcmp(alumnii[ixD].asal,"")==0 || valNama(alumnii[ixD].asal)!=0);
   do{
   	gotoxy(36,23);printf("               ");
		gotoxy(36,23);gets(alumnii[ixD].angkatan);
      if(validasiAngka(alumnii[ixD].angkatan)==1){
			gotoxy(36,23);printf("Masukan Angka !");Sleep(300);
      }
   }while(strcmp(alumnii[ixD].angkatan,"")==0 || valang(alumnii[ixD].angkatan)!=0);
   int a=0;
   do{
   	gotoxy(36,27);printf("                       ");
   	gotoxy(36,27);gets(alumnii[ixD].jenjang);
      if(strcmp(alumnii[ixD].jenjang,"D3")==0 || (strcmp(alumnii[ixD].jenjang,"S1")==0)){
            a=1; //input jenjang
   	} else {
      	gotoxy(36,27);printf("Input Dengan Benar!!");Sleep(1000);
         gotoxy(36,27);printf("                    ");
      }
   }while(a!=1);
   //if(alumnii[ixD].jenjang=="D3" || alumnii[ixD].jenjang=="S1"){
   do{
      gotoxy(38,31);printf("               ");
      gotoxy(38,31);gets(alumnii[ixD].lulus);
      if(validasiAngka(alumnii[ixD].lulus)!=0){
			gotoxy(38,31);printf("Masukan Angka !");Sleep(300);
      }
   }while(vallulus(alumnii[ixD].lulus)!=0|| strcmp(alumnii[ixD].lulus,"")==0);
   do{
      gotoxy(40,35);printf("                ");
      gotoxy(40,35);gets(alumnii[ixD].no_hp);
      if(strlen(alumnii[ixD].no_hp)<7 || strlen(alumnii[ixD].no_hp)>11){
			gotoxy(40,35);printf("No Anda Salah !");Sleep(500);
         gotoxy(40,35);printf("               ");
      }else if(validasiAngka(alumnii[ixD].no_hp)!=0){
			gotoxy(40,35);printf("Masukan Angka !");Sleep(500);
         gotoxy(40,35);printf("               ");
      }
   }while(valnohp(alumnii[ixD].no_hp)!=0 || strcmp(alumnii[ixD].no_hp,"")==0);
   do{
   	gotoxy(36,39);printf("               ");
   	gotoxy(36,39);gets(uname);
      if(strlen(uname)<4){
      	gotoxy(36,39);printf("   Min 4 Karakter ");Sleep(500);
         gotoxy(36,39);printf("                  ");
      }else if(strlen(uname)>8){
      	gotoxy(36,39);printf("   Max 8 Karakter ");Sleep(500);
         gotoxy(36,39);printf("                  ");
      }
    }while(strcmp(uname,"")==0 || strlen(uname)<4|| strlen(uname)>8 || valNama(uname)!=0);
    do{
    	gotoxy(36,43);printf("                  ");
   	gotoxy(36,43);gets(upass);
      if(strlen(upass)<4){
      	gotoxy(36,43);printf("   Min 4 Karakter ");Sleep(500);
         gotoxy(36,43);printf("                  ");
      }else if(strlen(upass)>8){
      	gotoxy(36,43);printf("   Max 8 Karakter ");Sleep(500);
         gotoxy(36,43);printf("                   ");
      }
    }while(strcmp(upass,"")==0 ||  valPass(upass)!=0|| strlen(upass)<4|| strlen(upass)>8);
   	if(strcmp(alumnii[ixD].jenjang,"D3")==0){
   		alumnii[ixD].a=84;
   	}else if(strcmp(alumnii[ixD].jenjang,"S1")==0){
   		alumnii[ixD].a=108;
   	}

   int cek=0, x=0;
   //gotoxy(5,53);printf("%d %d %s %s",ixD,cek, uname, alumnii[0].username);getch();
   if(ixD!=0){
   	while (x<ixD && cek!=1){
      	if(strcmp(uname,alumnii[x].username)==0){
      		cek=1;
      	}x++;
      }
   }
   if(cek==1){
		gotoxy(20,46);printf("AKUN SUDAH TERDAFTAR, COBA LAGI");Sleep(1000);
      gotoxy(20,46);printf("                               ");
      strcpy(alumnii[ixD].nama,"");
   	strcpy(alumnii[ixD].asal,"");
  		strcpy(alumnii[ixD].angkatan,"");
   	strcpy(alumnii[ixD].jenjang,"");
   	strcpy(alumnii[ixD].lulus,"");
   	strcpy(alumnii[ixD].username,"");
   	strcpy(alumnii[ixD].pass,"");
   	alumnii[ixD].a=NULL;
		menu();
   }
   char daftarr;
	gotoxy(20,46);printf("ANDA YAKIN INGIN DAFTAR???(y/n)");
   do{
      gotoxy(52,46);printf("  ");
		gotoxy(52,46);daftarr=getche();
   }while(daftarr!='y' && daftarr!='Y'&& daftarr!='N'&& daftarr!='n');
   if((daftarr=='y' || daftarr=='Y')){
   	strcpy(alumnii[ixD].username,uname);
   	strcpy(alumnii[ixD].pass,upass);
      gotoxy(23,48);printf(">>>ANDA BERHASIL DAFTAR<<");Sleep(1500);
      ixD++;
      menu();
   }else{
   	strcpy(alumnii[ixD].nama,"");
   	strcpy(alumnii[ixD].asal,"");
  		strcpy(alumnii[ixD].angkatan,"");
   	strcpy(alumnii[ixD].jenjang,"");
   	strcpy(alumnii[ixD].lulus,"");
   	strcpy(alumnii[ixD].username,"");
   	strcpy(alumnii[ixD].pass,"");
   	alumnii[ixD].a=NULL;
   	menu();
   }
}
void login_admin(){
	gotoxy(30,13);printf("--------------");
	gotoxy(30,14);printf("A  D  M  I  N");
   gotoxy(30,15);printf("--------------");
	char userad[300];
   char passad[300];
   do{
   	gotoxy(32,23);printf("                          ");
   	gotoxy(32,23);gets(userad);
   }while(strcmp(userad,"")==0);
   do{
   	gotoxy(32,28);printf("                          ");
   	gotoxy(32,28);gets(passad);
   }while(strcmp(passad,"")==0);
   if(strcmp(userad,"PUBBENDAHARA")==0 && strcmp(passad,passad2)==0){
      menuadmin();
   }else if(strcmp(userad,"PUBBENDAHARA")!=0 && strcmp(passad,passad2)==0){
   	gotoxy(26,34);printf(" USERNAME ANDA SALAH!!!");Sleep(800);
      gotoxy(32,23);printf("                          ");
      gotoxy(32,28);printf("                          ");
      gotoxy(26,34);printf("                       ");
      login_admin();
   }else if(strcmp(userad,"PUBBENDAHARA")==0 && strcmp(passad,passad2)!=0){
   	gotoxy(26,34);printf(" PASSWORD ANDA SALAH!!!");Sleep(700);
      gotoxy(32,23);printf("                          ");
      gotoxy(32,28);printf("                          ");
      gotoxy(26,34);printf("                       ");
      login_admin();
   }else{
   	gotoxy(20,34);printf(" USERNAME DAN PASSWORD ANDA SALAH!!!");Sleep(800);
      gotoxy(32,23);printf("                          ");
      gotoxy(32,28);printf("                          ");
      gotoxy(20,34);printf("                                    ");
      login_admin();
   }
}
void login_alumni(){
	gotoxy(29,13);printf("----------------");
	gotoxy(29,14);printf("A  L  U  M  N  I");
   gotoxy(29,15);printf("----------------");
	char useral[20];
   char passal[20];
   do{
   	gotoxy(32,23);printf("                         ");
   	gotoxy(32,23);gets(useral);
   }while(strcmp(useral,"")==0);
   do{
   	gotoxy(32,28);printf("                         ");
   	gotoxy(32,28);gets(passal);
   }while(strcmp(passal,"")==0);
   for(int b=0; strcmp(alumnii[b].username,"")!=0; b++){
      if(strcmp(useral,alumnii[b].username)==0){
      	if(strcmp(passal,alumnii[b].pass)==0){
            gotoxy(32,38);printf("LOGIN BERHASIL");Sleep(1000);
         	ixal=b;
         	menualumni();
         }else{
         	gotoxy(28,38);printf("PASSWORD ANDA SALAH");Sleep(1000);
            gotoxy(32,23);printf("                         ");
         	gotoxy(32,28);printf("                         ");
            gotoxy(28,38);printf("                   ");
         	login_alumni();
         }
      }else if(strcmp(passal,alumnii[b].pass)==0){
      	if(strcmp(useral,alumnii[b].username)==0){
            gotoxy(28,38);printf("USERNAME ANDA SALAH");Sleep(1000);
         	gotoxy(32,23);printf("                         ");
         	gotoxy(32,28);printf("                         ");
            gotoxy(28,38);printf("                    ");
            login_alumni();
         }
      }
   }
      	gotoxy(27,38);printf("AKUN TIDAK TERDAFTAR!!");Sleep(1000);
   	gotoxy(23,39);printf("APAKAH ANDA INGIN DAFTAR??(Y/N)");Sleep(1000);
      char dftr;
      dftr=getche();
      if(dftr=='Y' || dftr=='y'){
          latardaftar();
      }else if(dftr=='N' || dftr=='n'){
      	menu();
      }


}

void resetpass2(){
   char rstpass1[30];
   char rstpass2[30];
   char passin[50];
   cus:
   //gotoxy(5,5);printf("%s",passad2);
   gotoxy(35,18);gets(passin);
   if(strcmp(passad2,passin)==0){
   	do{
      	gotoxy(35,20);printf("                 ");
   		gotoxy(35,20);gets(rstpass1);
      }while(strcmp(rstpass1,"")==0 || valPass(rstpass1)!=0);
      uh:
      do{
      	gotoxy(35,22);printf("                 ");
   		gotoxy(35,22);gets(rstpass2);
      }while(strcmp(rstpass2,"")==0 || valPass(rstpass2)!=0);
      	if(strcmp(rstpass1,rstpass2)==0){
      	}else{
         	gotoxy(35,22);printf("                 ");
      		goto uh;
      	}
   	}else{
      gotoxy(35,18);printf("                 ");
   	goto cus;
   }
   char res;
   	gotoxy(15,27);printf("ANDA YAKIN INGIN MENGGANTI PASSWORD??(y/n)");
      do{
         gotoxy(59,27);printf(" ");
   		gotoxy(59,27);res=getche();
		}while(res!='y' && res!='Y'&& res!='N'&& res!='n');
   	if(res=='Y' || res=='y'){
         strcpy(passad2,rstpass1);
      	gotoxy(18,29);printf(">>PASSWORD ANDA BERHASIL DIGANTI<<");Sleep(1000);
         menu();
      }else{
      	menuadmin();
      }
}

////////////////////////////////////////////////////////////////////////////
///////////////////////////////////VALIDASI/////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
int validasiAngka(char inp[]){
	for(int i=0; inp[i]!=NULL; i++){
   	if(inp[i]<48 || inp[i]>58){
      	return 1;
      }
   }
   return 0;
}
int valNama(char huruf[]){
	int error=0;
   for(int x=0;x<strlen(huruf);x++){
      if(huruf[0]==' ' || huruf[strlen(huruf)-1]==' ' || huruf[x]==' ' && huruf[x+1]==' '){
			error++;
      }else if(huruf[x]==' ' || huruf[x]>='a' && huruf[x]<='z' || huruf[x]>='A' && huruf[x]<='Z'){
      	error+=0;
      }else return 1;
   }return error;
}
int valPass(char pass[]){
	int error=0;
   for(int x=0;x<strlen(pass);x++){
      if(pass[0]==' ' || pass[strlen(pass)-1]==' ' || pass[x]==' ' && pass[x+1]==' '){
			error++;
      }else if(pass[x]==' ' || pass[x]>='a' && pass[x]<='z' || pass[x]>='A' && pass[x]<='Z'  || pass[x]>='0' && pass[x]<='9'){
      	error+=0;
      }else return 1;
   }return error;
}

int valnohp(char no[]){
   if(strlen(no)>11 || strlen(no)<7 || no[0]=='0' || no[0]=='4' || no[0]=='6'){
   	return 1;
   }
   for(int x=0; x<strlen(no); x++){
   	if(!(no[x]>='0' && no[x]<='9')){
      	return 1;
      }
   }return 0;
}
int valang(char angkatan[]){
   if(strlen(angkatan)>2 || atoi(angkatan)>16){
   	return 1;
   }
   for(int x=0; x<strlen(angkatan); x++){
   	if(!(angkatan[x]>='0' && angkatan[x]<='9')){
      	return 1;
      }
   }
   return 0;
}
int vallulus(char lulus[]){
  //	printf("%d",atoi(lulus));getch();
   if(strlen(lulus)!=2 || strlen(lulus)>2 || atoi(lulus)>19){
   	return 1;
   }
   for(int x=0; x<strlen(lulus); x++){
   	if(!(lulus[x]>='0' && lulus[x]<='9')){
      	return 1;
      }
   }
   return 0;
}
int valbulan(char bul[]){
	printf("%d",atoi(bul));getch();
   if(strlen(bul)>2 || atoi(bul)>12 || atoi(bul)<1 ){
   	return 1;
   }
   for(int x=0; x<strlen(bul); x++){
   	if(!(bul[x]>='0' && bul[x]<='9')){
      	return 1;
      }
   }
   return 0;
}


/////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////PERHITUNGAN//////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

void penghasilan(){
	do{
   	gotoxy(41,20);printf("               ");
   	gotoxy(41,20);gets(ingaji);
   }while(strcmp(ingaji,"")==0);
   gaji=atoi(ingaji);
   hasil=gaji*0.2;
   gotoxy(41,24);printf("%d\n",hasil);

   sisa=gaji-hasil;
   gotoxy(41,28);printf("%d",sisa);
   alumnii[ixal].penghasilan=gaji;
	alumnii[ixal].infaq[ixD]=hasil;
   persetujuan();
   getch();
}
void bayarinfaq(){
	char pilihbulan[30];
   char pilihbulan2[30];
   //int pilihbulan1;
   do{
   	gotoxy(42,41);printf("            ");
		gotoxy(42,41);gets(pilihbulan);
   }while(valbulan(pilihbulan)!=0 || strcmp(pilihbulan,"")==0 || strcmp(pilihbulan,"0")==0 || pilihbulan[0]=='0');
   do{
   	gotoxy(42,45);printf("                ");
   	gotoxy(42,45);gets(inbayar);
		//gotoxy(42,46);printf("%d", valang(inbayar));getch();
   	//getch();
   }while(validasiAngka(inbayar)!=0 || strcmp(inbayar,"")==0 || strcmp(inbayar,"0")==0 || inbayar[0]=='0');
   bayar=atoi(inbayar);
   ixB=atoi(pilihbulan)-1;
   alumnii[ixal].infaq[ixB]=bayar;
   if(bayar<=gaji){
   	if(bayar<hasil ){
   		gotoxy(20,47);printf("INFAQ ANDA KURANG!!");
      	dalil1();
      	latarbayar();
   	}else{
   		if(alumnii[ixal].bulan[ixB]==0){
         	alumnii[ixal].a--;
            alumnii[ixal].bulan[ixB]=1;
      	}
      	strcpy(pnama[ixP],alumnii[ixal].nama);
      	ptrans[ixP]=alumnii[ixal].infaq[ixB];
      	pcek[ixP]=0;
     		 psaldo+=ptrans[ixP];
      	ixP++;
      	bukti();
   	}
   }else{
   	gotoxy(18,51);printf("Infaq Anda Melebihi Penghasilan!!!");Sleep(1000);
      menualumni();
   }
   getch();
}
void cekAscii(){
	for(int i=0; i<255; i++){
   	printf(" %d  %c",i,i);
      if(i%9==0 && i!=0){
      	printf("\n");
      }
   }
}

main(){
bingkai();
logo();
loading();
menu();
getch();
}
