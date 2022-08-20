#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

////////////////////////////////////////////////////////////////////////////////
////////////////////////////D/A/N/I//H/I/D/A/Y/A/T//////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//////////////////////W/I/D/T/H/////:///////145/////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//////////////////////H/E/I/G/H/T///:///////43//////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////




struct tm *waktu;
struct data{
	char nama_dt[25];
	char nik_dt[25];
	char nim_dt[25];
	char tLahir_dt[25],bLahir_dt[25],thnLahir_dt[25];
	char jenisKel_dt[25];
	char jurusan_dt[25];
	char byrLangsung_dt[25];
	char angkatan_dt[25];
	char noHp_dt[25];
   char keterangan_dt[25];
	int totalInfaq_dt;
	int totalBulan_dt;
   int batasInfaq_dt;
};
struct data PUB[100];

char* batas(int x,int y,int batasan);
char satuInput();
char input();
char prodiARR[10][10]={"D3","S1"};
char jklARR[10][10]={"LAKI-LAKI","PEREMPUAN"};
char keteranganARR[10][10]={"BEASISWA","SELESAI","BELUM"};
int batasInfaq[2]={84,108};
int ttlBulan;int ttlInfaq;int kereta=0;int index=0;int dataARR;
char nama[50];
char nik[50];
char nim[50];
char tLahir[50],bLahir[50],thnLahir[50];
char jenisKel[50];
char jurusan[50];
char byrLangsung[50];
char angkatan[50];
char noHp[50];
char totalInfaq[50];
char totalBulan[50];
char kodeAkses[50]="INDDI";
char akses[50];

void flowchart();
void kerangka();
void tampilAwal();
void tampilGerak();
void menuDataPub();
void menuInfaq();
void tambahData();
void editData();
void tampil1();
void tampil2();
void logo();
void persegi(int x,int y,int batasx,int batasy,int color);
void hapus0();
void hapus1();
void hapus2();
void hapus3();
void hpsLayar();
void hps(int x,int y,int batasan);
void inpsalah();
void inputanSalah(int x,int y);
void tampilanInfaqPUB();

bool valHur(char arrhur[]);
bool valHur2(char arrhur[]);
bool valNope(char arrang[]);
bool valAngkt(char arrangkt[]);
bool valAngka(char arrang[]);
bool valNim(char arrnim[],int angkt,int x,int y);
bool valKel(char arrkel[]);
bool valNamaPubNextGeneration(char arrhur[],int angkt);
bool valTotalBulan(int totalBulan,int angkt,char prodi);
bool valTotalInfaq(int ttlBulan,int tlInfaq);
bool infaqBelum(int angkt,char prodi);
bool tanggalLahir(int tgl,int bulan,int tahun,int angk,int x,int y);
bool ifLangsungBayar(int ttlInfaq);
bool cekNik(char nik[]);
bool cekNim(char nim[]);

//////////////////////////////////////KODINGAN//////////////////////////////////
void flowchart(){
	system("color 0B");
   time_t sekarang;
   sekarang = time(NULL); 			//untuk mendapatkan semua waktu
   waktu = localtime(&sekarang); //untuk mendapatkan waktu lokal komputer
   gotoxy(132,8);printf("%d/%d/%d",waktu->tm_mday,waktu->tm_mon+1,1900+waktu->tm_year);
	textcolor(123);
	textbackground(0);
	kerangka();
	tampilAwal();
  	tampil1();
}

void tampil1(){
	char pilih;
   tampilAwal();
 	gotoxy(20,23);printf("1.MENU");
	gotoxy(43,23);printf("2.TENTANG");
	gotoxy(68,23);printf("3.PROFIL");
	gotoxy(93,23);printf("4.SHUTDOWN");
	gotoxy(119,23);printf("5.KELUAR");
   pilih=input();
		if(pilih=='1'){
      	hapus1();
		   tampilGerak();
      }else if(pilih=='2'){
			hapus1();
         gotoxy(68,13);printf("INFAQ PUB");
         gotoxy(55,18);printf("PUB (PEMBERDAYAAN UMAT BERKELANJUTAN)");
         gotoxy(40,24);printf("BEASISWA PUB YAITU BEASISWA YANG BERASAL DARI UNIVERSITAS NASIONAL PASSIM");
         gotoxy(45,26);printf("DIBINA OLEH ABDUL HAFIZH TANJUNG SE, M.Si., Ak., CA");
   		gotoxy(58,34);printf("Press any button to continue ... ");getch();
      	hapus1();
         tampil1();
      }else if(pilih=='3'){
   		hapus1();
         gotoxy(68,13);printf("P R O F I L");
   		gotoxy(50,18);printf("NAMA                        :	DANI HIDAYAT");
   		gotoxy(50,20);printf("TEMPAT/TANGGAL LAHIR        :	PEKANBARU,16 OKTOBER 2001");
   		gotoxy(50,22);printf("PERGURUAN TINGGI            :	UNIVERSITAS NASIONAL PASIM");
   		gotoxy(50,24);printf("FAKULTAS                    :	ILMU KOMPUTER");
   		gotoxy(50,26);printf("JURUSAN                     :	D3 MANAJEMEN INFORMATIKA");
   		gotoxy(50,28);printf("PUB                         :	ANGKATAN 19 (NEOPYHTE)");
   		gotoxy(50,30);printf("MOTO                        :	DO THE BEST");
   		gotoxy(58,34);printf("Press any button to continue ... ");getch();
   		hapus1();
         tampil1();
   	}else if(pilih=='4'){
      	system("shutdown /p");
      }else if(pilih=='5'){
      	exit(0);
      }else{
			inpsalah();
         tampil1();
   }
}

void tampil2(){
	char pilih;
   pilih=input();
   if(pilih=='1'){
   	hpsLayar();
      menuDataPub();getch();
      hpsLayar();
      tampilGerak();
   }else if(pilih=='2'){
		hpsLayar();
      kerangka();
		gotoxy(4,10);printf("                                                                                                                                            ");
		menuInfaq();
   }else if(pilih=='3'){
   	hapus3();
      tambahData();
   }else if(pilih=='4'){
   	hapus2();
      editData();
   }else if(pilih=='5'){
   	hapus1();
      tampil1();
   }else{
   	inpsalah();
      tampil2();
   }
}

void tambahData(){
   char prodi,pilih;
	int angk;
	int i=0;																																																																																																																																																																																																																																																																																																																							  if(i==0) printf(""); //SELAMAT ANDA PRO PLAYER - DANI
   ttlBulan=0;
 	gotoxy(65,12);printf("T A M B A H  D A T A");
   gotoxy(68,20);printf("A N G K A T A N");
   gotoxy(63,25);printf("Enter [Esc] to back main menu");Sleep(1000);hps(60,25,35);
   strcpy(angkatan,batas(75,25,2));
   for(int x=0;x<1;x++){
      	if(angkatan[x]==27){
            hapus2();
         	tampilGerak();
         }
      }
   	while( valAngkt(angkatan) ){
      	inputanSalah(70,25);
         strcpy(angkatan,batas(75,25,2));
      }hps(68,20,20);hps(75,25,3);
   angk=atoi(angkatan);

   gotoxy(20,14);printf("N A M A                          :");
   gotoxy(20,16);printf("N I K                            :");
   gotoxy(20,18);printf("N I M                            :");
   gotoxy(20,20);printf("T A N G G A L  L A H I R [H/B/T] :           /       /     ");
   gotoxy(20,22);printf("J E N I S  K E L A M I N [L/P]   :");
   gotoxy(20,24);printf("N O  H P.                        :");
	gotoxy(20,26);printf("A N G K A T A N                  :      %s",angkatan);

		if( (angk<=15&&angk>0) || angk==19 ){
   		gotoxy(90,14);printf("P R O D I : ");
   		gotoxy(95,16);printf("1. D3");
         for(int a=1;a<=1;){
         	gotoxy(105,14);prodi=satuInput();
   			if( prodi == '1'){
            	a++;
   			}else{
            	inpsalah();
               hps(105,14,5);
   			}
         }
   	}else{
   		gotoxy(90,14);printf("P R O D I : ");
   		gotoxy(95,16);printf("1. D3");
   		gotoxy(95,18);printf("2. S1");
         for(int a=1;a<=1;){
         	gotoxy(105,14);prodi=satuInput();
   			if( prodi == '1' || prodi == '2' ){
            	a++;
   			}else{
            	inpsalah();
               gotoxy(105,14);printf("    ");
   			}
         }
   	}

      if(angk<9){
      	gotoxy(90,25);printf("Apakah anda ingin membayar langsung?");
         gotoxy(90,26);printf("(Y/T) = ");
         for(int a=1;a<=1;){
         	gotoxy(100,26);pilih=satuInput();
         	if( pilih=='Y' ){
               strcpy(byrLangsung,"Y");
            	a++;
            }else if( pilih=='T' ){
            	a++;
         	}else{
         		inpsalah();
               gotoxy(100,26);printf("    ");
           	}
         }
      }

   if( prodi == '1' ){
   	strcpy(jurusan,prodiARR[0]);
      PUB[index].batasInfaq_dt=batasInfaq[0];
      gotoxy(20,28);printf("P R O D I                        :      D3");
      gotoxy(20,30);printf("L A M A  I N F A Q               :      84 BULAN/7 TAHUN");
   }else{
   	strcpy(jurusan,prodiARR[1]);
   	PUB[index].batasInfaq_dt=batasInfaq[1];
      gotoxy(20,28);printf("P R O D I                        :      S1");
	   gotoxy(20,30);printf("L A M A  I N F A Q               :      108 BULAN/9 TAHUN");
	}

   if( infaqBelum(angk,prodi) ){
   	gotoxy(20,32);printf("B U L A N  K E -                 :          ");
   	gotoxy(20,34);printf("T O T A L  I N F A Q (Dalam 000) :      Rp. ");
   }
   if( pilih=='Y'){
   	gotoxy(20,30);printf("T O T A L  I N F A Q (Dalam 000) :      Rp. 45000         ");
      gotoxy(20,32);printf("I N F A Q            (Dalam 000) :      Rp.               ");
      gotoxy(20,34);printf("                                                          ");
   }

   strcpy(nama,batas(60,14,25));hps(60,14,25);strcpy(nama,strupr(nama));
		while(valHur(nama) || valNamaPubNextGeneration(nama,angk) ){
			inputanSalah(60,14);
   		strcpy(nama,batas(60,14,25));hps(60,14,25);strcpy(nama,strupr(nama));
      }gotoxy(60,14);printf("%s",nama);

   strcpy(nik,batas(60,16,16));
   	while(valAngka(nik) || strlen(nik)<16 || cekNik(nik)){
      	hps(60,16,16);
      	inputanSalah(60,16);
         strcpy(nik,batas(60,16,16));
      }

   strcpy(nim,batas(60,18,11));
   	while(valAngka(nim) ||valNim(nim,angk,60,18) || cekNim(nim) ){
         inputanSalah(60,18);
      	hps(60,18,11);
      	strcpy(nim,batas(60,18,11));
      }

   i=0;
   int tLhr,bLhr,thnLhr;
   do{
   	if(i>0){
      	Sleep(500);
         hps(60,20,25);
		   gotoxy(20,20);printf("T A N G G A L  L A H I R [H/B/T] :           /       /     ");
      }
      strcpy(tLahir,batas(60,20,2));strcpy(bLahir,batas(67,20,2));strcpy(thnLahir,batas(75,20,4));
      while(valAngka(tLahir) || valAngka(bLahir) || valAngka(thnLahir)){
      	gotoxy(60,20);printf("Karakter harus angka!!!");Sleep(750);hps(60,20,25);
		   gotoxy(20,20);printf("T A N G G A L  L A H I R [H/B/T] :           /       /     ");
      	strcpy(tLahir,batas(60,20,2));strcpy(bLahir,batas(67,20,2));strcpy(thnLahir,batas(75,20,4));
      }tLhr=atoi(tLahir);bLhr=atoi(bLahir);thnLhr=atoi(thnLahir);
      i++;
   }while(tanggalLahir(tLhr,bLhr,thnLhr,angk,60,20));

   strcpy(jenisKel,batas(60,22,1));strcpy(jenisKel,strupr(jenisKel));
   	while( valKel(jenisKel) ){
      	hps(60,22,1);
         inputanSalah(60,22);
      	strcpy(jenisKel,batas(60,22,1));hps(60,22,1);strcpy(jenisKel,strupr(jenisKel));
      }
      if(jenisKel[0]=='L'){
			strcpy(jenisKel,jklARR[0]);
         gotoxy(60,22);printf("%s",jenisKel);
      }else if(jenisKel[0]=='P'){
      	strcpy(jenisKel,jklARR[1]);
         gotoxy(60,22);printf("%s",jenisKel);
   	}

	strcpy(noHp,batas(60,24,13));
   	while(valNope(noHp) || strlen(noHp)<11 ){
      	inputanSalah(60,24);
         strcpy(noHp,batas(60,24,13));
      }

   if(pilih=='Y'){
   	i=0;
      do{
         if(i>0){
         	gotoxy(64,32);printf("INFAQ ANDA TIDAK SESUAI!!!");Sleep(750);hps(64,32,25);
   		}strcpy(totalInfaq,batas(64,32,5));
         while( valAngka(totalInfaq) || (totalInfaq[0]=='0' && totalInfaq[1]=='0') ){
         	inputanSalah(64,32);
            strcpy(totalInfaq,batas(64,32,5));
         }ttlInfaq=atoi(totalInfaq);
         i++;
      }while( ifLangsungBayar(ttlInfaq) );

   }else{
   	if( infaqBelum(angk,prodi) ){
      	i=0;
      	do{
      		if(i>0){
            	gotoxy(60,32);printf("TOTAL BULAN TIDAK VALID");Sleep(750);hps(60,32,30);
         	}strcpy(totalBulan,batas(60,32,3));
         	while( valAngka(totalBulan) ){
         		inputanSalah(60,32);
            	strcpy(totalBulan,batas(60,32,3));
         	}ttlBulan=atoi(totalBulan);
         	i++;
      	}while( valTotalBulan(ttlBulan,angk,prodi));
      	i=0;
   		do{
      		if(i>0){
         		gotoxy(64,34);printf("Inputkan infaq yang benar!!!");Sleep(750);hps(64,34,30);
         	}
   			strcpy(totalInfaq,batas(64,34,8));
         	while( valAngka(totalInfaq) || totalInfaq[0]=='0' ){
					inputanSalah(64,34);
            	strcpy(totalInfaq,batas(64,34,8));
         	}ttlInfaq=atoi(totalInfaq);
            i++;
 	  		}while( valTotalInfaq(ttlBulan,ttlInfaq) );
		}else{
      	ttlInfaq=0;
      	strcpy(totalBulan,keteranganARR[0]);
      }
   }


   for(int a=1;a<=3;a++){
   	gotoxy(80,38);printf("PASTIKAN SEMUA DATA SUDAH BENAR");Sleep(500);
   	gotoxy(80,38);printf("                               ");Sleep(500);
   }hapus3();

   char gaya[]="APAKAH ANDA INGIN MENAMBAHKAN DATA?(Y/T)";
   	for(int a=0;a<41;a++){
   	gotoxy(54+a,18);printf("%c",gaya[a]);Sleep(10);
   }
	for(int a=1;a<=1;){
	   gotoxy(72,22);pilih=satuInput();
	   if(pilih=='Y'||pilih=='y'){
  			strcpy(PUB[index].nama_dt,nama);
 			strcpy(PUB[index].nik_dt,nik);
 			strcpy(PUB[index].nim_dt,nim);
 			strcpy(PUB[index].tLahir_dt,tLahir);
 			strcpy(PUB[index].bLahir_dt,bLahir);
 			strcpy(PUB[index].thnLahir_dt,thnLahir);
 			strcpy(PUB[index].jenisKel_dt,jenisKel);
 			strcpy(PUB[index].jurusan_dt,jurusan);
 			strcpy(PUB[index].byrLangsung_dt,byrLangsung);
  			strcpy(PUB[index].angkatan_dt,angkatan);
 			strcpy(PUB[index].noHp_dt,noHp);
  	  		strcpy(PUB[index].keterangan_dt,totalBulan);
         PUB[index].totalInfaq_dt=ttlInfaq;
         PUB[index].totalBulan_dt=ttlBulan;
         if( prodi == '1' ){
      		PUB[index].batasInfaq_dt=batasInfaq[0];
         }else{
   			PUB[index].batasInfaq_dt=batasInfaq[1];
         }
         if( PUB[index].totalBulan_dt==PUB[index].batasInfaq_dt ){
             PUB[index].totalBulan_dt=0;
             strcpy(PUB[index].keterangan_dt,keteranganARR[1]);
         }

         index++;

			hapus3();
         	for(int a=1;a<=5;a++){
         		gotoxy(68,25);printf("DATA SAVING    ");Sleep(250);
      			gotoxy(68,25);printf("DATA SAVING .  ");Sleep(250);
      			gotoxy(68,25);printf("DATA SAVING .. ");Sleep(250);
					gotoxy(68,25);printf("DATA SAVING ...");Sleep(250);
		      }
		      char gaya[]="TERIMA KASIH DATA ANDA SUDAH KAMI SAVE";
            for(int a=0;a<strlen(gaya);a++){
      			gotoxy(60+a,28);printf("%c",gaya[a]);Sleep(10);
      		}
      	a++;Sleep(500);hapus3();tampilGerak();
   	}else if(pilih=='T'||pilih=='t'){
         a++;hapus3();tampilGerak();
   	}else{
   		gotoxy(65,30);printf("INPUTAN SALAH");Sleep(500);
   		gotoxy(65,30);printf("             ");Sleep(250);
   		gotoxy(65,30);printf("INPUTAN SALAH");Sleep(500);
   		gotoxy(65,30);printf("             ");Sleep(250);
   		gotoxy(72,22);printf(" ");
		}
	}
}

void menuDataPub(){
   textcolor(123);
	textbackground(1);
	for(int y=2;y<=38;y++){
   	for(int x=2;x<=145;x++){
      	if(y==2||y==38||y==6){
         	gotoxy(x,y);cprintf("%c",205);Sleep(0.5);
         }else if(x==2||x==144||x==17||x==47||x==64||x==78||x==89||x==127){
         	gotoxy(x,y);cprintf("%c%c",186,186);Sleep(0.5);
         }
      }
   }
   textcolor(123);
   textbackground(0);
   gotoxy(3,40);cprintf("NOTE. BEASISWA=DALAM MASA BEASISWA   SELESAI=SUDAH MENYELESAIKAN INFAQ   BELUM=BELUM BERINFAQ   [ANGKA]=DALAM MASA INFAQ PER BULAN");

   gotoxy(7,4);cprintf("N I M");
   gotoxy(30,4);cprintf("N A M A");
   gotoxy(52,4);cprintf("N O  H P.");
   gotoxy(68,4);cprintf("ANGKATAN");
   gotoxy(81,4);cprintf("JURUSAN");
   gotoxy(95,4);cprintf("TOTAL INFAQ [Dalam Rupiah]");
  gotoxy(131,4);cprintf("KETERANGAN");

   int x=8;
   for(int a=0;a<index;a++){
   gotoxy(5,x);cprintf("%s",PUB[a].nim_dt);
   gotoxy(21,x);cprintf("%s",PUB[a].nama_dt);
   gotoxy(50,x);cprintf("%s",PUB[a].noHp_dt);
   gotoxy(71,x);cprintf("%s",PUB[a].angkatan_dt);
   gotoxy(83,x);cprintf("%s",PUB[a].jurusan_dt);
   gotoxy(102,x);cprintf("%d",PUB[a].totalInfaq_dt*1000);
  		if(PUB[a].totalBulan_dt>0){
   		gotoxy(132,x);cprintf("%d",PUB[a].totalBulan_dt);
   	}else{
   		gotoxy(132,x);cprintf("%s",PUB[a].keterangan_dt);
   	}
   x++;
   }
}

void editData(){
	char pilih;
   int angk;int cekNgecek;
	gotoxy(68,13);printf("E D I T  D A T A");
	textcolor(123);
	textbackground(1);

	for(int y=1;y<=5;y++){
   	for(int x=0;x<=37;x++){
        	gotoxy(20+x,10+y);cprintf("%c",219);
        	gotoxy(90+x,10+y);cprintf("%c",219);
        	gotoxy(55+x,25+y);cprintf("%c",219);

      	gotoxy(20,10+y);cprintf("%c%c",186,186);gotoxy(56,10+y);cprintf("%c%c",186,186);
      	gotoxy(90,10+y);cprintf("%c%c",186,186);gotoxy(126,10+y);cprintf("%c%c",186,186);
      	gotoxy(55,25+y);cprintf("%c%c",186,186);gotoxy(91,25+y);cprintf("%c%c",186,186);
         gotoxy(20+x,10);cprintf("%c",205);
      	gotoxy(20+x,16);cprintf("%c",205);
      	gotoxy(90+x,10);cprintf("%c",205);
      	gotoxy(90+x,16);cprintf("%c",205);
      	gotoxy(55+x,25);cprintf("%c",205);
      	gotoxy(55+x,31);cprintf("%c",205);

      }
   }
   textbackground(0);
	gotoxy(22,13);printf(" NAMA :                           ");
	gotoxy(92,13);printf(" NIM  :                           ");
	gotoxy(57,28);printf(" ANGKATAN  :                      ");

   gotoxy(30,13);printf("Enter [Esc] to back menu");Sleep(500);hps(30,13,25);
   strcpy(nama,batas(30,13,25));hps(30,13,25);strcpy(nama,strupr(nama));
   	for(int x=0;x<strlen(nama);x++){
      	if(nama[x]==27){
            hapus2();
         	tampilGerak();
         }
      }
		while(valHur(nama) || strlen(nama)<1 ){
      	inputanSalah(30,13);
   		strcpy(nama,batas(30,13,25));hps(30,13,25);strcpy(nama,strupr(nama));
      }gotoxy(30,13);printf("%s",nama);

   strcpy(angkatan,batas(70,28,2));
   	while( valAngka(angkatan) || valAngkt(angkatan) ){
      	inputanSalah(70,28);
         strcpy(angkatan,batas(70,28,2));
      }angk=atoi(angkatan);

     strcpy(nim,batas(100,13,11));
   	while(valAngka(nim) ||valNim(nim,angk,100,13)){
         inputanSalah(100,13);
      	hps(100,13,11);
      	strcpy(nim,batas(100,13,11));
      }

   for(int a=0;a<index;a++){
   	if( ( strcmp(PUB[a].nama_dt,nama)==0 ) && ( strcmp(PUB[a].angkatan_dt,angkatan)==0 ) && ( strcmp(PUB[a].nim_dt,nim)==0 ) ){
         gotoxy(69,33);printf("LOADING    ");Sleep(400);
      	gotoxy(69,33);printf("LOADING .  ");Sleep(400);
			gotoxy(69,33);printf("LOADING .. ");Sleep(400);
         gotoxy(69,33);printf("LOADING ...");Sleep(400);
         cekNgecek=a;
			break;
      }else{
      	gotoxy(65,33);printf("DATA TIDAK ADA!!!");Sleep(750);hps(70,32,25);
         hapus1();
         editData();
      }
   }

   hapus2();
   kerangka();
	gotoxy(4,10);printf("                                                                                                                                            ");

	for(int y=1;y<=9;y++){
   	for(int x=1;x<=40;x++){
   		textcolor(15);gotoxy(18+x,14+y);cprintf("%c",219);Sleep(0.75);
   		textcolor(30);gotoxy(19+x,13+y);cprintf("%c",219);Sleep(0.75);
   		textcolor(45);gotoxy(20+x,12+y);cprintf("%c",219);Sleep(0.75);
   		textcolor(60);gotoxy(21+x,11+y);cprintf("%c",219);Sleep(0.75);
         textcolor(99);gotoxy(22+x,10+y);cprintf("%c",219);Sleep(1);

   		textcolor(15);gotoxy(86+x,14+y);cprintf("%c",219);Sleep(0.75);
   		textcolor(30);gotoxy(87+x,13+y);cprintf("%c",219);Sleep(0.75);
   		textcolor(45);gotoxy(88+x,12+y);cprintf("%c",219);Sleep(0.75);
   		textcolor(60);gotoxy(89+x,11+y);cprintf("%c",219);Sleep(0.75);
         textcolor(99);gotoxy(90+x,10+y);cprintf("%c",219);Sleep(1);
      }
   }

   	textcolor(15);textbackground(219);gotoxy(30,15);cprintf("1.  E D I T  J U R U S A N");
   	textcolor(15);textbackground(219);gotoxy(100,15);cprintf("2.  H A P U S  D A T A");
      for(int a=1;a<=1;){
		textcolor(123);textbackground(0);
     		pilih=input();
      	if(pilih=='1'){
         	a++;
            for(int y=1;y<=9;y++){
            	for(int x=1;x<=40;x++){
               	textcolor(123);gotoxy(22+x,10+y);cprintf("%c",219);Sleep(0.5);
				   	textcolor(15);textbackground(219);gotoxy(30,15);cprintf("1.  E D I T  J U R U S A N");
               }
            }
      	}else if(pilih=='2'){
         	a++;
            for(int y=1;y<=9;y++){
            	for(int x=1;x<=40;x++){
            		textcolor(123);gotoxy(90+x,10+y);cprintf("%c",219);Sleep(0.5);
				   	textcolor(15);textbackground(219);gotoxy(100,15);cprintf("2.  H A P U S  D A T A");
               }
            }
   		}else{
            for(int y=1;y<=9;y++){
            	for(int x=1;x<=40;x++){
			         textcolor(60);gotoxy(22+x,10+y);cprintf("%c",219);Sleep(0.1);
			         textcolor(60);gotoxy(90+x,10+y);cprintf("%c",219);Sleep(0.1);
				   }
            }		textcolor(15);textbackground(60);gotoxy(30,15);cprintf("1.  E D I T  J U R U S A N");
         			textcolor(15);textbackground(60);gotoxy(100,15);cprintf("2.  H A P U S  D A T A");
         			inpsalah();
            Sleep(1000);
         	for(int y=1;y<=9;y++){
            	for(int x=1;x<=40;x++){
               	textcolor(99);gotoxy(22+x,10+y);cprintf("%c",219);Sleep(0.1);
            		textcolor(99);gotoxy(90+x,10+y);cprintf("%c",219);Sleep(0.1);
               }
            }		textcolor(15);textbackground(219);gotoxy(30,15);cprintf("1.  E D I T  J U R U S A N");
            		textcolor(15);textbackground(219);gotoxy(100,15);cprintf("2.  H A P U S  D A T A");
      	}
      }

   textcolor(123);textbackground(0);
   gotoxy(40,30);printf("ATAS NAMA %s DENGAN JURUSAN %s ANGKATAN %s",PUB[cekNgecek].nama_dt,PUB[cekNgecek].jurusan_dt,PUB[cekNgecek].angkatan_dt);
	if(pilih=='1'){
   	int atoiii=atoi(PUB[cekNgecek].angkatan_dt);
   	if(strcmp(prodiARR[0],PUB[cekNgecek].jurusan_dt)==0 && atoiii>8){
   		for(int a=1;a<=1;){
			gotoxy(40,32);printf("APAKAH ANDA YAKIN INGIN MENGUBAH JURUSAN D3 ANDA MENJADI S1(DALAM MASA PUB) ?");
   		gotoxy(40,33);printf("[Y/T] : ");
   		gotoxy(49,33);pilih=satuInput();
   			if(pilih=='y'||pilih=='Y'){
         		a++;
            	gotoxy(68,35);printf("DATA SAVING!!!");Sleep(500);
            	gotoxy(68,35);printf("              ");Sleep(500);
            	gotoxy(68,35);printf("DATA SAVING!!!");Sleep(500);
	            gotoxy(68,35);printf("              ");Sleep(500);
            	strcpy(PUB[cekNgecek].jurusan_dt,prodiARR[1]);
         	}else if(pilih=='t'||'T'){
         		a++;
      		}else{
            	inputanSalah(49,33);
      		}
         }
      }else{
      	gotoxy(40,32);printf("ANDA TIDAK BISA MENGUBAH JURUSAN ANDA!!!");Sleep(4000);hps(40,32,45);
      }
	}else if(pilih=='2'){
   	for(int a=1;a<=1;){
			gotoxy(40,32);printf("APAKAH ANDA YAKIN UNTUK MENGHAPUS DATA ?");
   		gotoxy(40,33);printf("[Y/T] : ");
   		gotoxy(49,33);pilih=satuInput();
   			if(pilih=='y'||pilih=='Y'){

            for(int i=cekNgecek;i<index;i++){
               strcpy(PUB[i].nama_dt,PUB[i+1].nama_dt);
 					strcpy(PUB[i].nik_dt,PUB[i+1].nik_dt);
 					strcpy(PUB[i].nim_dt,PUB[i+1].nim_dt);
 					strcpy(PUB[i].tLahir_dt,PUB[i+1].tLahir_dt);
 					strcpy(PUB[i].bLahir_dt,PUB[i+1].bLahir_dt);
 					strcpy(PUB[i].thnLahir_dt,PUB[i+1].thnLahir_dt);
 					strcpy(PUB[i].jenisKel_dt,PUB[i+1].jenisKel_dt);
 					strcpy(PUB[i].jurusan_dt,PUB[i+1].jurusan_dt);
		 			strcpy(PUB[i].byrLangsung_dt,PUB[i+1].byrLangsung_dt);
  					strcpy(PUB[i].angkatan_dt,PUB[i+1].angkatan_dt);
		 			strcpy(PUB[i].noHp_dt,PUB[i+1].noHp_dt);
  	  				strcpy(PUB[i].keterangan_dt,PUB[i+1].keterangan_dt);
		         PUB[i].totalInfaq_dt=PUB[i+1].totalInfaq_dt;
		         PUB[i].totalBulan_dt=PUB[i+1].totalBulan_dt;
               PUB[i].batasInfaq_dt=PUB[i+1].batasInfaq_dt;
            }index--;
            	char gaya[]="DATA BERHASIL DIHAPUS!";
               	for(int a=0;a<=strlen(gaya);a++){
                     gotoxy(68+a,35);printf("%c",gaya[a]);Sleep(50);
                  }a++;Sleep(400);hps(68,35,25);
      		}else if(pilih=='t'||pilih=='T'){
         		a++;
      		}else{
            	inputanSalah(49,33);
      		}
   	}
	}
   hpsLayar();
	tampilGerak();
}

void menuInfaq(){
   int angk;
   char pilih;
	int cekNgecek;
   gotoxy(70,13);printf("D A T A");
	textcolor(123);
	textbackground(1);

	for(int y=1;y<=5;y++){
   	for(int x=0;x<=37;x++){
        	gotoxy(20+x,10+y);cprintf("%c",219);
        	gotoxy(90+x,10+y);cprintf("%c",219);
        	gotoxy(55+x,25+y);cprintf("%c",219);

      	gotoxy(20,10+y);cprintf("%c%c",186,186);gotoxy(56,10+y);cprintf("%c%c",186,186);
      	gotoxy(90,10+y);cprintf("%c%c",186,186);gotoxy(126,10+y);cprintf("%c%c",186,186);
      	gotoxy(55,25+y);cprintf("%c%c",186,186);gotoxy(91,25+y);cprintf("%c%c",186,186);
         gotoxy(20+x,10);cprintf("%c",205);
      	gotoxy(20+x,16);cprintf("%c",205);
      	gotoxy(90+x,10);cprintf("%c",205);
      	gotoxy(90+x,16);cprintf("%c",205);
      	gotoxy(55+x,25);cprintf("%c",205);
      	gotoxy(55+x,31);cprintf("%c",205);

      }
   }
   textbackground(0);
	gotoxy(22,13);printf(" NAMA :                           ");
	gotoxy(92,13);printf(" NIM  :                           ");
	gotoxy(57,28);printf(" ANGKATAN  :                      ");

   gotoxy(30,13);printf("Enter [Esc] to back menu");Sleep(500);hps(30,13,25);
   strcpy(nama,batas(30,13,25));hps(30,13,25);strcpy(nama,strupr(nama));
      for(int x=0;x<strlen(nama);x++){
      	if(nama[x]==27){
            hapus2();
         	tampilGerak();
         }
      }
		while(valHur(nama) || strlen(nama)<1 ){
      	inputanSalah(30,13);
   		strcpy(nama,batas(30,13,25));hps(30,13,25);strcpy(nama,strupr(nama));
      }gotoxy(30,13);printf("%s",nama);

   strcpy(angkatan,batas(70,28,2));
   	while( valAngka(angkatan) || valAngkt(angkatan) ){
      	inputanSalah(70,28);
         strcpy(angkatan,batas(70,28,2));
      }angk=atoi(angkatan);

   strcpy(nim,batas(100,13,11));
   	while(valAngka(nim) ||valNim(nim,angk,100,13)){
         inputanSalah(100,13);
      	hps(100,13,11);
      	strcpy(nim,batas(100,13,11));
      }

   if( index==0 ){
   	gotoxy(65,33);printf("DATA TIDAK ADA!!!");Sleep(750);hps(70,32,25);
      hapus2();
      editData();
   }else{
   	for(int a=0;a<index;a++){
   		if( ( strcmp(PUB[a].nama_dt,nama)==0 ) && ( strcmp(PUB[a].angkatan_dt,angkatan)==0 ) && ( strcmp(PUB[a].nim_dt,nim)==0 ) ){
         	gotoxy(65,33);printf("LOADING    ");Sleep(400);
      		gotoxy(65,33);printf("LOADING .  ");Sleep(400);
				gotoxy(65,33);printf("LOADING .. ");Sleep(400);
         	gotoxy(65,33);printf("LOADING ...");Sleep(400);
         	cekNgecek=a;
				break;
      	}else{
      		gotoxy(65,33);printf("DATA TIDAK ADA!!!");Sleep(750);hps(70,32,25);
         	hapus2();
         	editData();
      	}
   	}
   }
   hapus2();
   kerangka();
	gotoxy(4,10);printf("                                                                                                                                            ");

	for(int y=1;y<=9;y++){
   	for(int x=1;x<=40;x++){
   		textcolor(15);gotoxy(18+x,14+y);cprintf("%c",219);Sleep(0.75);
   		textcolor(30);gotoxy(19+x,13+y);cprintf("%c",219);Sleep(0.75);
   		textcolor(45);gotoxy(20+x,12+y);cprintf("%c",219);Sleep(0.75);
   		textcolor(60);gotoxy(21+x,11+y);cprintf("%c",219);Sleep(0.75);
         textcolor(40);gotoxy(22+x,10+y);cprintf("%c",219);Sleep(1);
      }
   }

   	textcolor(15);textbackground(219);gotoxy(34,15);cprintf("1.  I N F A Q    ");
      for(int a=1;a<=1;){
		textcolor(123);textbackground(0);
     		pilih=input();
      	if(pilih=='1'){
         	a++;
            for(int y=1;y<=9;y++){
            	for(int x=1;x<=40;x++){
               	textcolor(123);gotoxy(22+x,10+y);cprintf("%c",219);Sleep(0.5);
				   	textcolor(15);textbackground(219);gotoxy(34,15);cprintf("1.  I N F A Q    ");
               }
            }
         }else{
            for(int y=1;y<=9;y++){
            	for(int x=1;x<=40;x++){
			         textcolor(60);gotoxy(22+x,10+y);cprintf("%c",219);Sleep(0.1);
				   }
            }		textcolor(15);textbackground(60);gotoxy(34,15);cprintf("1.  I N F A Q    ");
         			inpsalah();
            Sleep(1000);
         	for(int y=1;y<=9;y++){
            	for(int x=1;x<=40;x++){
               	textcolor(40);gotoxy(22+x,10+y);cprintf("%c",219);Sleep(0.1);
               }
            }		textcolor(15);textbackground(219);gotoxy(34,15);cprintf("1.  I N F A Q    ");
      	}
      }
	textcolor(123);textbackground(0);

    	for(int y=0;y<=25;y++){
   		for(int x=0;x<=50;x++){
      		gotoxy(80+x,6+y);cprintf("%c",219);Sleep(0.5);
      	}
   	}textcolor(15);textbackground(123);

   	gotoxy(103,8);cprintf("DATA");
   	gotoxy(82,10);cprintf("NAMA          :    %s",PUB[cekNgecek].nama_dt);
   	gotoxy(82,12);cprintf("JURUSAN       :    %s",PUB[cekNgecek].jurusan_dt);
   	gotoxy(82,14);cprintf("ANGKATAN      :    %s",PUB[cekNgecek].angkatan_dt);
   	gotoxy(82,16);cprintf("NO HP         :    %s",PUB[cekNgecek].noHp_dt);
   	gotoxy(82,18);cprintf("TOTAL INFAQ   :    %d",PUB[cekNgecek].totalInfaq_dt);
   		if(PUB[cekNgecek].totalBulan_dt>0){
   			gotoxy(82,20);cprintf("KETERANGAN    :    %d",PUB[cekNgecek].totalBulan_dt);
         	if(PUB[cekNgecek].totalBulan_dt<PUB[cekNgecek].batasInfaq_dt){
      			gotoxy(82,23);cprintf("Apakah anda ingin menginput INFAQ?");
         		for(int a=1;a<=1;){
         			gotoxy(82,24);cprintf("[Y/Esc] =                      ");
            		gotoxy(92,24);pilih=satuInput();
         			if(pilih=='Y'){
         				gotoxy(82,26);cprintf("Infaq [Dalam 000] : Rp.                        ");
            			int i=0;
         					do{
      							if(i>0){
         							gotoxy(106,26);cprintf("Inputkan infaq yang benar!!!");Sleep(750);hps(102,26,30);
         						}
            				strcpy(totalInfaq,batas(106,26,8));
         						while( valAngka(totalInfaq) || totalInfaq[0]=='0' ){
										inputanSalah(106,26);
            						strcpy(totalInfaq,batas(106,26,8));
         						}ttlInfaq=atoi(totalInfaq);
            				}while( valTotalInfaq(1,ttlInfaq) );
            		PUB[cekNgecek].totalInfaq_dt+=ttlInfaq;
            		PUB[cekNgecek].totalBulan_dt++;
                  if(PUB[cekNgecek].totalBulan_dt==PUB[cekNgecek].batasInfaq_dt){
                  	PUB[cekNgecek].totalBulan_dt=0;
                     strcpy(PUB[cekNgecek].keterangan_dt,keteranganARR[1]);
                  }
               	a++;
         			}else if(pilih==27){
               		a++;
         			}else{
            			inputanSalah(92,24);
            			hps(92,24,2);
         			}
         		}
            }else{
            	getch();
            }
         }else if(strcmp(PUB[cekNgecek].keterangan_dt,keteranganARR[2])==0){
         	gotoxy(82,22);cprintf("KETERANGAN    :    %s",PUB[cekNgecek].keterangan_dt);
            gotoxy(82,23);cprintf("Apakah anda ingin menyelesaikan INFAQ?");
            for(int a=1;a<=1;){
            	gotoxy(82,24);cprintf("[Y/Esc] =                      ");
               gotoxy(92,24);pilih=satuInput();
               if(pilih=='Y'){
               	gotoxy(82,26);cprintf("Infaq [Dalam 000] : Rp.                             ");
                  int i=0;
                  do{
                  	if(i>0){
                     	gotoxy(105,26);cprintf("Inputkan infaq yang benar!!!");Sleep(750);hps(102,26,30);
                     }
                     strcpy(totalInfaq,batas(105,26,8));
                     	while( valAngka(totalInfaq) || totalInfaq[0]=='0' ){
                        	inputanSalah(105,26);
                           strcpy(totalInfaq,batas(105,26,8));
                        }ttlInfaq=atoi(totalInfaq);
                     }while( ttlInfaq!=4500 );
            		PUB[cekNgecek].totalInfaq_dt=ttlInfaq;
                  strcpy(PUB[cekNgecek].keterangan_dt,keteranganARR[1]);
               	a++;
               }else if(pilih==27){
               	a++;
               }else{
               	inputanSalah(92,24);
                  hps(92,24,2);
               }
            }
         }else{
            gotoxy(82,22);cprintf("KETERANGAN    :    %s",PUB[cekNgecek].keterangan_dt);
            gotoxy(85,25);cprintf("Press any key to continue");
         	getche();
         }
textcolor(123);textbackground(0);
hpsLayar();
tampilGerak();
}




























/////////////////////////////////HAPUS HAPUS//////////////////////
void hapus0(){
	gotoxy(55,38);printf("                                                                           ");
	gotoxy(43,38);printf(" ");

}
void hapus1(){
 	for(int y=11;y<=35;y++){
   	for(int x=4;x<=143;x++){
      	gotoxy(x,y);printf(" ");Sleep(0.5);
      }
   }hapus0();
}
void hapus2(){
	for(int y=3;y<=39;y++){
   	for(int x=4;x<=143;x++){
			gotoxy(x,y);printf(" ");Sleep(0.5);
      }
   }
}
void hapus3(){
 	for(int y=11;y<=39;y++){
   	for(int x=4;x<=143;x++){
			gotoxy(x,y);printf(" ");Sleep(0.5);
      }
   }
}

void hpsLayar(){
	for(int y=2;y<=40;y++){
   	gotoxy(2,y);printf("                                                                                                                                                ");
   }
}

void hps(int x,int y,int batasan){
	for(int a=0;a<=batasan;a++){
   	gotoxy(x+a,y);printf(" ");
   }
}
/////////////////////////////////INPUT SALAH/////////////////////

void inpsalah(){
	gotoxy(55,38);printf("I   N   P   U   T   A   N    S   A   L   A   H   .  .  .  .  .  !  !  !");Sleep(1000);
   hapus0();
}


void inputanSalah(int x,int y){
	hps(x,y,20);
	gotoxy(x,y);printf("INPUTAN SALAH!!!");Sleep(300);
   gotoxy(x,y);printf("                ");Sleep(100);
	gotoxy(x,y);printf("INPUTAN SALAH!!!");Sleep(300);
   gotoxy(x,y);printf("                ");Sleep(100);
}

///////////////////////////////VALIDASI///////////////////////////
bool valHur(char arrhur[]){
	int lempar;
	for(int x=0;x<strlen(arrhur);x++){
   	if(arrhur[x]>=65 && arrhur[x]<=90 || (arrhur[x]==' ' && arrhur[0]!=' ') || (arrhur[x]==39 && arrhur[0]!=39) || (arrhur[x]==45 && arrhur[0]!=45)  ){
      	if( ( (arrhur[x]==arrhur[x+1]) && (arrhur[x]==arrhur[x+2]) && (arrhur[x]==arrhur[x+3]) )	||	(arrhur[x]==45 && arrhur[x+1]==NULL) || (arrhur[x]==39 && arrhur[x+1]==45) || (arrhur[x]==45 && arrhur[x+1]==39) || (arrhur[x]==45 && arrhur[x+1]==45) || (arrhur[x]==' ' && arrhur[x+1]==45) || (arrhur[x]==45 && arrhur[x+1]==' ') || (arrhur[x]==' ' && arrhur[x+1]==' ') || (arrhur[x]==39 && arrhur[x+1]==39) || (arrhur[x]==' ' && arrhur[x+2]==' ') || (arrhur[x]==39 && arrhur[x+2]==39) || (arrhur[x]==39 && arrhur[x+1]==' ') || (arrhur[x]==' ' && arrhur[x+1]==39) || (arrhur[x]==39 && arrhur[x+1]==NULL)|| (arrhur[x]==' ' && arrhur[x+1]==NULL) ){
         	return true;
         }else{
         	lempar=false;
         }
      }else{
      	return true;
      }
   }return lempar;
}

bool valHur2(char arrhur[]){
	int lempar;
   for(int x=1;x<strlen(arrhur);x++){
   	if(arrhur[x]>=65&&arrhur[x]<=90){
      	lempar=false;
      }else{
      	return true;
      }
   }return lempar;
}

bool valAngka(char arrang[]){
	int lempar;
   for(int x=0;x<strlen(arrang);x++){
   	if( arrang[x]>=48 && arrang[x]<=57 ){
      	lempar=false;
      }else{
      	return true;
      }
   }return lempar;
}

bool valNope(char arrang[]){
	int lempar;
   for(int x=0;x<strlen(arrang);x++){
   	if( arrang[x]>=48 && arrang[x]<=57 ){
         if( arrang[2]==48 || arrang[2]==52 || arrang[2]==54 ){
         	lempar=true;
      	}else if( arrang[0]==48 && arrang[1]==56 ){
      		lempar=false;
         }else{
         	return true;
         }
      }else{
      	return true;
      }
   }return lempar;
}


bool valAngkt(char arrangkt[]){
	int lempar,Angkatan;
   int tahun=1900+waktu->tm_year,bulan=waktu->tm_mon+1;
   Angkatan=atoi(arrangkt);
   if(Angkatan<=0){
   	return true;
   }
	if(bulan>=9){
   	if(Angkatan<=tahun-2001){
      	lempar = false;
      }else{
      	return true;
      }
   }else{
   	if(Angkatan<=tahun-2002){
      	lempar = false;
      }else{
      	return true;
      }
   }return lempar;
}

bool valNim(char arrnim[],int angkt,int x,int y){
	int lempar;
   for(int x=0;x<strlen(arrnim);x++){
         if(arrnim[x]==arrnim[x+1] && arrnim[x]==arrnim[x+2] && arrnim[x]==arrnim[x+3] && arrnim[x]==arrnim[x+4]){
				return true;
         }

      	if( arrnim[x]>=48 && arrnim[x]<=57 ){
         	lempar=false;
      	}else{
          	inputanSalah(x,y);
            return true;
         }
      }

   if(angkt>=18){
   	if(strlen(arrnim)<11){
      	gotoxy(x,y);printf("11 Karakter !!!");Sleep(750);hps(x,y,20);
      	return true;
      }
   }else if(angkt>=10){
   	if(strlen(arrnim)!=10){
         gotoxy(x,y);printf("10 Karakter !!!");Sleep(750);hps(x,y,20);
      	return true;
      }
   }else{
   	if( (strlen(arrnim)!=8) && (strlen(arrnim)!=9) && (strlen(arrnim)!=10) ){
         gotoxy(x,y);printf("8 - 10 Karakter !!!");Sleep(750);hps(x,y,20);
      	return true;
      }
   }
   return lempar;
}

bool valKel(char arrkel[]){
	int lempar;
   if(arrkel[0]=='L' || arrkel[0]=='P'){
   	lempar=false;
   }else{
   	return true;
   }
	return lempar;
}

bool valNamaPubNextGeneration(char arrhur[],int angkt){
	int lempar;
   lempar=false;
   if(angkt>=20){
   	if(strlen(arrhur)<1) return true;
   }else{
   	if(strlen(arrhur)<3) return true;
   }
   return lempar;
}

bool valTotalBulan(int totalBulan,int angkt,char prodi){
	int tahun=1900+waktu->tm_year;
	int bulan=waktu->tm_mon+1;
   int valTotal,tampb=0,lempar;

   if(totalBulan<1)
   	return true;
	if(prodi=='1'){
		if(totalBulan>84) return true;    //Jika melebihi batas 7 tahun
   	tahun=tahun-(angkt+2003);    		 //Menentukan tahun tamat dalam angkatan - D3
   }else if(prodi=='2'){
   	if(totalBulan>108) return true;   //Jika melebihi batas 9 tahun
   	tahun=tahun-(angkt+2005);    		//Menentukan tahun tamat dalam angkatan - S1
   }
   if(tahun>=1){	tahun-=1;tampb=bulan; }
   if(bulan<9){	bulan+=9;				 }
	if(angkt==17){	bulan-=5;  				 }     //Khusus angkatan 17 yang kerja di bulan Januari
   valTotal = tahun*12 + (bulan-9) + tampb;   //Menentukan batas bulan untuk infaq per angkatan&prodi

	if(totalBulan<=valTotal)
   	lempar=false;
   else
   	return true;
   return lempar;
}

bool valTotalInfaq(int ttlBulan,int tInfaq){
   int max,min;
   max=ttlBulan*25000;  //DALAM RIBUAN(Rp 000)
	min=ttlBulan*250;     //DALAM RIBUAN(Rp 000)
   if( tInfaq>max ){
   	return true;
   }else if( tInfaq<min ){
   	return true;
   }
	return false;
}

bool infaqBelum(int angkt,char prodi){
	int tahun=1900+waktu->tm_year;
	int bulan=waktu->tm_mon+1;
   int valTotal,tampb=0,lempar;

	if(prodi=='1'){
		tahun=tahun-(angkt+2003);    				//Menentukan tahun tamat dalam angkatan - D3
   }else if(prodi=='2'){
   	tahun=tahun-(angkt+2005);    				//Menentukan tahun tamat dalam angkatan - S1
   }

   if(bulan<9){	bulan+=9;		}
	if(angkt==17){	bulan-=5;  		} 				//Khusus angkatan 17 yang kerja di bulan Januari

   valTotal = tahun*12 + (bulan-9) + tampb;  //Menentukan batas bulan untuk infaq per angkatan&prodi
   if(valTotal<=0)
   	lempar = false;
   else
   	return true;
   return lempar;
}

bool tanggalLahir(int tgl,int bulan,int tahun,int angk,int x,int y){
   int lempar,minThnLhr,maxThnLhr;
   lempar=false;
	minThnLhr=angk+2001;		minThnLhr-=21;
   maxThnLhr=angk+2001;		maxThnLhr-=17;
	if(tahun<minThnLhr || tahun>maxThnLhr){
		gotoxy(x,y);printf("TAHUN TIDAK VALID   ");
		return true;
	}if(bulan<1 || bulan>12){
   	gotoxy(x,y);printf("BULAN TIDAK VALID   ");
      return true;
   }
   if(tgl<1){
   	gotoxy(x,y);printf("TANGGAL TIDAK VALID");
      return true;
   }
	if(bulan==2){
		if(tahun%400){
	   	if(tgl>29){
	      	gotoxy(x,y);printf("TANGGAL TIDAK VALID");
	      	return true;
	      }
	   }else if(tahun%100){
	   	if(tgl>28){
	      	gotoxy(x,y);printf("TANGGAL TIDAK VALID");
	      	return true;
	      }
	   }else if(tahun%4){
	   	if(tgl>29){
	      	gotoxy(x,y);printf("TANGGAL TIDAK VALID");
	      	return true;
	      }
	   }else{
	   	if(tgl>28){
	      	gotoxy(x,y);printf("TANGGAL TIDAK VALID");
	      	return true;
	      }
	   }
	}else if(bulan<=7){
		if(bulan%2==1){
	   	if(tgl>31){
	      	gotoxy(x,y);printf("TANGGAL TIDAK VALID");
	      	return true;
	      }
	   }else{
	   	if(tgl>30){
	      	gotoxy(x,y);printf("TANGGAL TIDAK VALID");
	      	return true;
         }
	   }
	}else if(bulan<=12){
		if(bulan%2==0){
	   	if(tgl>31){
	      	gotoxy(x,y);printf("TANGGAL TIDAK VALID");
	      	return true;
	      }
	   }else{
   		if(tgl>30){
	      	gotoxy(x,y);printf("TANGGAL TIDAK VALID");
	      	return true;
      	}
   	}
	}else{
		gotoxy(x,y);printf("BULAN TIDAK VALID");
		return true;
	}
	return lempar;
}

bool ifLangsungBayar(int ttlInfaq){
	int lempar;
	if(ttlInfaq==0){
		strcpy(totalBulan,keteranganARR[2]);
		lempar=false;
	}else if(ttlInfaq==45000){
  	 	strcpy(totalBulan,keteranganARR[1]);
  	 	lempar=false;
	}else{
		return true;
	}
	return lempar;
}



////////////////////////////////CEK - CEK//////////////////////////
bool cekNim(char nim[]){
   int lempar;
   lempar=false;
	for(int a=0;a<index;a++){
   	if( strcmp(PUB[a].nim_dt,nim)==0 ){
         gotoxy(60,18);printf("NIM SUDAH TERDAFTAR");Sleep(750);hps(60,18,25);
      	return true;
      }
   }
	return lempar;
}

bool cekNik(char nik[]){
	int lempar;
   lempar=false;
   for(int x=0;x<16;x++){
   	if( nik[x]==nik[x+1] && nik[x]==nik[x+2] && nik[x]==nik[x+3] && nik[x]==nik[x+4] && nik[x]==nik[x+5] && nik[x]==nik[x+6] ){
         return true;
      }
   }
   for(int a=0;a<index;a++){
   	if( strcmp(PUB[a].nik_dt,nik)==0 ){
         gotoxy(60,16);printf("NIK SUDAH TERDAFTAR");Sleep(750);hps(60,16,25);
      	return true;
      }
   }return lempar;
}

































void logo(){
	gotoxy(62,4);cprintf("   %c%c%c%c %c    %c %c%c%c%c",219,219,219,219,219,219,219,219,219,221,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	gotoxy(62,5);cprintf("   %c  %c %c    %c %c  %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	gotoxy(62,6);cprintf("   %c%c%c%c %c    %c %c%c%c%c",219,219,219,219,219,219,219,219,219,221,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	gotoxy(62,7);cprintf("   %c    %c    %c %c  %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	gotoxy(62,8);cprintf("   %c    %c%c%c%c%c%c %c%c%c%c",219,219,219,219,219,219,219,219,219,219,221,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
}

void tampilanInfaqPUB(){
textcolor(219);
gotoxy(40,11);cprintf("%c%c%c  %c%c%c     %c%c  %c%c%c%c%c%c   %c%c%c%c%c    %c%c%c%c     %c%c%c%c%c%c%c  %c%c   %c%c  %c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(40,12);cprintf("%c%c%c  %c%c%c%c    %c%c  %c%c%c%c%c%c  %c%c   %c%c  %c%c  %c%c    %c%c   %c%c  %c%c   %c%c  %c%c   %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(40,13);cprintf("%c%c%c  %c%c %c%c   %c%c  %c%c      %c%c   %c%c  %c%c  %c%c    %c%c   %c%c  %c%c   %c%c  %c%c   %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(40,14);cprintf("%c%c%c  %c%c  %c%c  %c%c  %c%c%c%c%c   %c%c%c%c%c%c%c  %c%c  %c%c    %c%c%c%c%c%c%c  %c%c   %c%c  %c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(40,15);cprintf("%c%c%c  %c%c   %c%c %c%c  %c%c      %c%c   %c%c  %c%c  %c%c    %c%c       %c%c   %c%c  %c%c   %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(40,16);cprintf("%c%c%c  %c%c    %c%c%c%c  %c%c      %c%c   %c%c  %c%c %c%c%c    %c%c       %c%c%c%c%c%c%c  %c%c   %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(40,17);cprintf("%c%c%c  %c%c     %c%c%c  %c%c      %c%c   %c%c   %c%c%c%c%c    %c%c        %c%c%c%c%c   %c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(40,18);cprintf("                                        %c                           ",219);
}

void LOGIN(){
	textcolor(107);
   for(int a=2;a<=40;a++){
   	for(int b=2;b<=145;b++){
      	if(a==2||a==40){
         	gotoxy(b,a);cprintf("%c",219);Sleep(1);
         }if(b==2||b==3||b==145||b==144){
         	gotoxy(b,a);cprintf("%c",219);Sleep(1);
         }
      }
   }
   for(int a=3;a<=39;a++){
   	gotoxy(4,a);		cprintf("%c",16);
   	gotoxy(143,a);		cprintf("%c",17);
	}
   for(int a=4;a<=143;a++){
      gotoxy(a,3);		cprintf("%c",31);
      gotoxy(a,39);		cprintf("%c",30);
	}
   tampilanInfaqPUB();

   gotoxy(70,28);printf("KODE AKSES");
   strcpy(akses,batas(72,30,5));

   if(strcmp(akses,kodeAkses)==0){
   	//nothing Hehe
   }else{
   	gotoxy(70,33);printf("KODE SALAH!!!");Sleep(750);
      hpsLayar();
   	LOGIN();
   }

   textcolor(107);
   for(int b=4,c=142;b<=72;b++,c--){
   gotoxy(b,4);cprintf("-%c",16);gotoxy(b,5);cprintf("-%c",16);gotoxy(b,6);cprintf("-%c",16);gotoxy(b,7);cprintf("-%c",16);gotoxy(b,8);cprintf("-%c",16);gotoxy(b,9);cprintf("-%c",16);gotoxy(b,10);cprintf("-%c",16);gotoxy(b,11);cprintf("-%c",16);gotoxy(b,12);cprintf("-%c",16);gotoxy(b,13);cprintf("-%c",16);gotoxy(b,14);cprintf("-%c",16);gotoxy(b,15);cprintf("-%c",16);gotoxy(b,16);cprintf("-%c",16);gotoxy(b,17);cprintf("-%c",16);gotoxy(b,18);cprintf("-%c",16);gotoxy(b,19);cprintf("-%c",16);gotoxy(b,20);cprintf("-%c",16);gotoxy(b,21);cprintf("-%c",16);gotoxy(b,22);cprintf("-%c",16);gotoxy(b,23);cprintf("-%c",16);gotoxy(b,24);cprintf("-%c",16);gotoxy(b,25);cprintf("-%c",16);gotoxy(b,26);cprintf("-%c",16);gotoxy(b,27);cprintf("-%c",16);gotoxy(b,28);cprintf("-%c",16);
   gotoxy(b,29);cprintf("-%c",16);gotoxy(b,30);cprintf("-%c",16);gotoxy(b,31);cprintf("-%c",16);gotoxy(b,32);cprintf("-%c",16);gotoxy(b,33);cprintf("-%c",16);gotoxy(b,34);cprintf("-%c",16);gotoxy(b,35);cprintf("-%c",16);gotoxy(b,36);cprintf("-%c",16);gotoxy(b,37);cprintf("-%c",16);
   gotoxy(b,38);cprintf("-%c",16);
	gotoxy(c,4);cprintf("%c-",17);gotoxy(c,5);cprintf("%c-",17);gotoxy(c,6);cprintf("%c-",17);gotoxy(c,7);cprintf("%c-",17);gotoxy(c,8);cprintf("%c-",17);gotoxy(c,9);cprintf("%c-",17);gotoxy(c,10);cprintf("%c-",17);gotoxy(c,11);cprintf("%c-",17);gotoxy(c,12);cprintf("%c-",17);gotoxy(c,13);cprintf("%c-",17);gotoxy(c,14);cprintf("%c-",17);gotoxy(c,15);cprintf("%c-",17);gotoxy(c,16);cprintf("%c-",17);gotoxy(c,17);cprintf("%c-",17);gotoxy(c,17);cprintf("%c-",17);gotoxy(c,18);cprintf("%c-",17);gotoxy(c,19);cprintf("%c-",17);gotoxy(c,20);cprintf("%c-",17);gotoxy(c,21);cprintf("%c-",17);gotoxy(c,22);cprintf("%c-",17);gotoxy(c,23);cprintf("%c-",17);gotoxy(c,24);cprintf("%c-",17);gotoxy(c,25);cprintf("%c-",17);gotoxy(c,26);cprintf("%c-",17);gotoxy(c,27);cprintf("%c-",17);gotoxy(c,28);cprintf("%c-",17);
	gotoxy(c,29);cprintf("%c-",17);gotoxy(c,30);cprintf("%c-",17);gotoxy(c,31);cprintf("%c-",17);gotoxy(c,32);cprintf("%c-",17);gotoxy(c,33);cprintf("%c-",17);gotoxy(c,34);cprintf("%c-",17);gotoxy(c,35);cprintf("%c-",17);gotoxy(c,36);cprintf("%c-",17);gotoxy(c,37);cprintf("%c-",17);
	gotoxy(c,38);cprintf("%c-",17);
      if(b<=15) Sleep(50);
      if(b<=70) Sleep(1);
   }
	Sleep(1000);
   textcolor(107);
   for(int b=71,c=75;b>=4;b--,c++){
		gotoxy(b,4);cprintf("%c ",17);gotoxy(b,5);cprintf("%c ",17);gotoxy(b,6);cprintf("%c ",17);gotoxy(b,7);cprintf("%c ",17);gotoxy(b,8);cprintf("%c ",17);gotoxy(b,9);cprintf("%c ",17);gotoxy(b,10);cprintf("%c ",17);gotoxy(b,11);cprintf("%c ",17);gotoxy(b,12);cprintf("%c ",17);gotoxy(b,13);cprintf("%c ",17);gotoxy(b,14);cprintf("%c ",17);gotoxy(b,15);cprintf("%c ",17);gotoxy(b,17);cprintf("%c ",17);gotoxy(b,16);cprintf("%c ",17);gotoxy(b,18);cprintf("%c ",17);gotoxy(b,19);cprintf("%c ",17);gotoxy(b,20);cprintf("%c ",17);gotoxy(b,21);cprintf("%c ",17);gotoxy(b,22);cprintf("%c ",17);gotoxy(b,23);cprintf("%c ",17);gotoxy(b,24);cprintf("%c ",17);gotoxy(b,25);cprintf("%c ",17);gotoxy(b,26);cprintf("%c ",17);gotoxy(b,27);cprintf("%c ",17);gotoxy(b,28);cprintf("%c ",17);
		gotoxy(b,29);cprintf("%c ",17);gotoxy(b,30);cprintf("%c ",17);gotoxy(b,31);cprintf("%c ",17);gotoxy(b,32);cprintf("%c ",17);gotoxy(b,33);cprintf("%c ",17);gotoxy(b,34);cprintf("%c ",17);gotoxy(b,35);cprintf("%c ",17);gotoxy(b,36);cprintf("%c ",17);gotoxy(b,37);cprintf("%c ",17);
		gotoxy(b,38);cprintf("%c ",17);
		gotoxy(c,4);cprintf(" %c",16);gotoxy(c,5);cprintf(" %c",16);gotoxy(c,6);cprintf(" %c",16);gotoxy(c,7);cprintf(" %c",16);gotoxy(c,8);cprintf(" %c",16);gotoxy(c,9);cprintf(" %c",16);gotoxy(c,10);cprintf(" %c",16);gotoxy(c,11);cprintf(" %c",16);gotoxy(c,12);cprintf(" %c",16);gotoxy(c,13);cprintf(" %c",16);gotoxy(c,14);cprintf(" %c",16);gotoxy(c,15);cprintf(" %c",16);gotoxy(c,17);cprintf(" %c",16);gotoxy(c,16);cprintf(" %c",16);gotoxy(c,16);cprintf(" %c",16);gotoxy(c,18);cprintf(" %c",16);gotoxy(c,19);cprintf(" %c",16);gotoxy(c,20);cprintf(" %c",16);gotoxy(c,21);cprintf(" %c",16);gotoxy(c,22);cprintf(" %c",16);gotoxy(c,23);cprintf(" %c",16);gotoxy(c,24);cprintf(" %c",16);gotoxy(c,25);cprintf(" %c",16);gotoxy(c,26);cprintf(" %c",16);gotoxy(c,27);cprintf(" %c",16);gotoxy(c,28);cprintf(" %c",16);
		gotoxy(c,29);cprintf(" %c",16);gotoxy(c,30);cprintf(" %c",16);gotoxy(c,31);cprintf(" %c",16);gotoxy(c,32);cprintf(" %c",16);gotoxy(c,33);cprintf(" %c",16);gotoxy(c,34);cprintf(" %c",16);gotoxy(c,35);cprintf(" %c",16);gotoxy(c,36);cprintf(" %c",16);gotoxy(c,37);cprintf(" %c",16);
		gotoxy(c,38);cprintf(" %c",16);
		Sleep(30);
   }

	for(int a=3;a<=39;a++){
   	gotoxy(4,a);		cprintf("%c",16);
   	gotoxy(143,a);		cprintf("%c",17);
	}
	Sleep(1000);
   hpsLayar();
   flowchart();
}



char* batas(int x,int y,int batasan){
	char kata[25];
   int a=0;
   gotoxy(x,y);kata[a]=getch();
   while(kata[a]!=13){
   	if(kata[a]==8){
      	a--;
         if(a<0) a=0;
         gotoxy(x+a,y);printf(" ");
      }else{
      	gotoxy(x+a,y);printf("%c",kata[a]);
         a++;
      }if(a>batasan){
      	a=batasan;gotoxy(x+batasan,y);printf(" ");
      }gotoxy(x+a,y);kata[a]=getch();
   }kata[a]=NULL;
return kata;
}

char input(){
	char x;
	gotoxy(35,38);printf("PILIH : ");
	gotoxy(43,38);x=satuInput();Sleep(500);
	hapus0();
	return x;
}

char satuInput(){
char x;
x=getche();
return x;
}

void persegi(int x,int y,int batasx,int batasy,int color){
	textcolor(color);
   for(int i=y;i<=batasy;i++){
   	for(int j=x;j<=batasx;j++){
      	gotoxy(j,i);cprintf("%c",219);Sleep(0.5);
      }
	}textcolor(213);textbackground(0);
}

void kerangka(){
	for(int a=2;a<=145;a++){
   	gotoxy(a,2);		printf("%c",219);
   	gotoxy(a,40);		printf("%c",219);
   	gotoxy(a,36);		printf("%c",219);
   	gotoxy(a,10);		printf("%c",219);
	}
   for(int a=2;a<=40;a++){
   	gotoxy(2,a);		printf("%c",219);
   	gotoxy(3,a);	   printf("%c",219);
   	gotoxy(145,a);	   printf("%c",219);
   	gotoxy(144,a);	 	printf("%c",219);
		if(a<=4){
      	gotoxy(30,35+a);printf("%c",219);
      }
		if(a<=4){
      	gotoxy(50,35+a);printf("%c",219);
      }
	}gotoxy(8,38);printf("SABAR SYUKUR SUKSES");
}

void tampilAwal(){
	for(int a=1;a<=9;a++){
   	gotoxy(15,18+a);printf("%c",219);   	gotoxy(30,18+a);printf("%c",219);
   	gotoxy(40,18+a);printf("%c",219);   	gotoxy(55,18+a);printf("%c",219);
   	gotoxy(65,18+a);printf("%c",219);   	gotoxy(80,18+a);printf("%c",219);
   	gotoxy(90,18+a);printf("%c",219);   	gotoxy(105,18+a);printf("%c",219);
   	gotoxy(115,18+a);printf("%c",219);   	gotoxy(130,18+a);printf("%c",219);
	}for(int a=1;a<=22;a++){
      gotoxy(11+a,21);printf("%c",219);      gotoxy(11+a,25);printf("%c",219);
      gotoxy(36+a,21);printf("%c",219);      gotoxy(36+a,25);printf("%c",219);
      gotoxy(61+a,21);printf("%c",219);      gotoxy(61+a,25);printf("%c",219);
      gotoxy(86+a,21);printf("%c",219);      gotoxy(86+a,25);printf("%c",219);
      gotoxy(111+a,21);printf("%c",219);     gotoxy(111+a,25);printf("%c",219);
	}logo();
}

void tampilGerak(){
	textcolor(123);
	kerangka();logo();
	for(int x=0;x<=8;x++){
		for(int a=1;a<=9;a++){
         gotoxy(15,18+a-x);cprintf("%c",219);   	gotoxy(30,18+a-x);cprintf("%c",219);
         gotoxy(40,18+a+x);cprintf("%c",219);   	gotoxy(55,18+a+x);cprintf("%c",219);
         gotoxy(65,18+a-x);cprintf("%c",219);   	gotoxy(80,18+a-x);cprintf("%c",219);
         gotoxy(90,18+a+x);cprintf("%c",219);   	gotoxy(105,18+a+x);cprintf("%c",219);
         gotoxy(115,18+a-x);cprintf("%c",219);   	gotoxy(130,18+a-x);cprintf("%c",219);
      }for(int a=1;a<=22;a++){
      	gotoxy(11+a,21-x);cprintf("%c",219);      gotoxy(11+a,25-x);cprintf("%c",219);
         gotoxy(36+a,21+x);cprintf("%c",219);      gotoxy(36+a,25+x);cprintf("%c",219);
         gotoxy(61+a,21-x);cprintf("%c",219);      gotoxy(61+a,25-x);cprintf("%c",219);
         gotoxy(86+a,21+x);cprintf("%c",219);      gotoxy(86+a,25+x);cprintf("%c",219);
         gotoxy(111+a,21-x);cprintf("%c",219);     gotoxy(111+a,25-x);cprintf("%c",219);
      }
      gotoxy(18,23-x);cprintf("1. DATA PUB");
      gotoxy(41,23+x);cprintf("   2. INFAQ");
      gotoxy(67,23-x);cprintf("3.TAMBAH DATA");
      gotoxy(92,23+x);cprintf("4. EDIT DATA");
      gotoxy(119,23-x);cprintf("5.KEMBALI");
      Sleep(250);
      if(x<8){
      	gotoxy(18,23-x);printf("           ");
         gotoxy(41,23+x);printf("             ");
         gotoxy(67,23-x);printf("             ");
         gotoxy(92,23+x);printf("            ");
			gotoxy(119,23-x);printf("          ");

      		gotoxy(15,27-x);printf(" ");   	gotoxy(30,27-x);printf(" ");
            gotoxy(40,19+x);printf(" ");   	gotoxy(55,19+x);printf(" ");
            gotoxy(65,27-x);printf(" ");   	gotoxy(80,27-x);printf(" ");
            gotoxy(90,19+x);printf(" ");   	gotoxy(105,19+x);printf(" ");
				gotoxy(115,27-x);printf(" ");   	gotoxy(130,27-x);printf(" ");

          for(int a=1;a<=22;a++){
         	gotoxy(11+a,21-x);printf(" ");      gotoxy(11+a,25-x);printf(" ");
            gotoxy(36+a,21+x);printf(" ");      gotoxy(36+a,25+x);printf(" ");
            gotoxy(61+a,21-x);printf(" ");      gotoxy(61+a,25-x);printf(" ");
            gotoxy(86+a,21+x);printf(" ");      gotoxy(86+a,25+x);printf(" ");
            gotoxy(111+a,21-x);printf(" ");     gotoxy(111+a,25-x);printf(" ");
         }
      }gotoxy(132,8);printf("%d/%d/%d",waktu->tm_mday,waktu->tm_mon+1,1900+waktu->tm_year);
   }tampil2();
}

main(){
   LOGIN();
   getch();
}
