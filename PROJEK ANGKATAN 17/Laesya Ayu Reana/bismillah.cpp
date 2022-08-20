#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////                           DANUR'S WISATA AND TOUR                      ///////////////////////////
/////                                                                                                               /////
/////                                  PEMBIMBING KHUSUS : SRI HAYATI                                               /////
/////                                  PEMBIMBING UMUM : NOVELINA ERLIN SAPUTRI                                     /////
/////                                              WIDTH  =  126 CM                                                 /////
/////                                              HEIGHT =  56  CM                                                 /////
/////                                                                                                               /////
//////////////////////                                                                       ////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
////////////////////////////PROTOTYPE///////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void bingkai();                      void fasilitasHarga();
void frame();                        void bodyrafting();
void bingwelcome();                  void fasilitaspantai();
void bingkai1();                     void fasilitasbodyrafting();
void bingkai2();                     void isifaspantai();
void bingkaimenu();                  void faspangandaran2d1n();
                                     void faspangandaran1day();
void logIn();                        void fascitumang();
void loadinglogin();                 void fasciwayang();
                                     void fasgoalanang();
void menu();                         void fasjojogan();
void destinasi();                    void fassantirah();
void informasi();
void datapengunjung();
void laporankeuangan();              void pantai();
                                     void pendapatanharian();
void exit();                         void pendapatanmingguan();
void data();

void wahanapantai();                 void faspangandaran();
void wahanabodyrafting();            void faskarapyak();
void santirah();                     void fasbatukaras();
void citumang();
void greencanyon();


void hargabananaboat();
void hargagladiator();
void hargaufo();
void hargapaket();
void hargaperahu();
void pangandaran2d1n();
void pangandaran1day();
void hargacitumang();
void hargaciwayang();
void hargajojogan();
void hargagoalanang();
void hargasantirah();
void transaksi();

////////////////////////////////////////////////////////////////////////////////
////////////////////////////VARIABEL GLOBAL/////////////////////////////////////
time_t mytime;
char namapemesan[100][25];
int jumorang[100];
int jumpendapatan[100];
char alamat[100][50];
char waktu[100][25];
char hp[100][12];
char identitas[100][20];
char wahana[100][20];
int stockbananaboat=11;
int stockgladiator=8;
int stockUFO=4;
int stockpaket=7;
int stockperahu=8;
int stock2d1n=10;
int stock1day=10;
int stockcitumang=10;
int stockciwayang=10;
int stockgoalanang=10;
int stockjojogan=10;
int stocksantirah=10;
int validasinama(char valnama[100]);
int validasiangka(char valangka[100]);
int saldo=0;
int x=0;
int y=0;



////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////BINGKAI//////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void bingkai(){
	textcolor(12);
 for(int j=1 ;j<=125;j++){
   	gotoxy(j,1);cprintf("%c",177);Sleep(0.1);
      gotoxy(j,2);cprintf("%c",177);Sleep(0.1);
      gotoxy(j,10);cprintf("%c",177);Sleep(0.1);
      gotoxy(j,40);cprintf("%c",177);Sleep(0.1);
      gotoxy(j,45);cprintf("%c",177);Sleep(0.1);
      gotoxy(j,46);cprintf("%c",177);Sleep(0.1);
      gotoxy(j,54);cprintf("%c",177);Sleep(0.1);
      gotoxy(j,55);cprintf("%c",177);Sleep(0.1);
      }
   for(int l=2;l<=55 ;l++){
   	gotoxy(1,l);cprintf("%c",177);Sleep(0.1);
      gotoxy(2,l);cprintf("%c",177);Sleep(0.1);
      gotoxy(124,l);cprintf("%c",177);Sleep(0.1);
      gotoxy(125,l);cprintf("%c",177);Sleep(0.1);
   }
}
void frame(){
	textcolor(12);
 for(int j=1 ;j<=125;j++){
   	gotoxy(j,1);cprintf("%c",177);Sleep(0.1);
      gotoxy(j,2);cprintf("%c",177);Sleep(0.1);
      gotoxy(j,9);cprintf("%c",177);Sleep(0.1);
      gotoxy(j,42);cprintf("%c",177);Sleep(0.1);
      gotoxy(j,45);cprintf("%c",177);Sleep(0.1);
      gotoxy(j,46);cprintf("%c",177);Sleep(0.1);
      gotoxy(j,54);cprintf("%c",177);Sleep(0.1);
      gotoxy(j,55);cprintf("%c",177);Sleep(0.1);
      }
   for(int l=2;l<=55 ;l++){
   	gotoxy(1,l);cprintf("%c",177);Sleep(0.1);
      gotoxy(2,l);cprintf("%c",177);Sleep(0.1);
      gotoxy(124,l);cprintf("%c",177);Sleep(0.1);
      gotoxy(125,l);cprintf("%c",177);Sleep(0.1);
   }
}
void bingkaimenu(){
   textcolor(12);
	for(int j=1 ;j<=125;j++){
   	gotoxy(j,1);cprintf("%c",177);Sleep(0.2);
      gotoxy(j,2);cprintf("%c",177);Sleep(0.2);
      gotoxy(j,10);cprintf("%c",177);Sleep(0.2);
      gotoxy(j,48);cprintf("%c",177);Sleep(0.2);
      gotoxy(j,54);cprintf("%c",177);Sleep(0.2);
      gotoxy(j,55);cprintf("%c",177);Sleep(0.2);
      }
   for(int l=2;l<=55 ;l++){
   	gotoxy(1,l);cprintf("%c",177);Sleep(0.2);
      gotoxy(2,l);cprintf("%c",177);Sleep(0.2);
      gotoxy(40,l);cprintf("%c",177);Sleep(0.2);
      gotoxy(80,l);cprintf("%c",177);Sleep(0.2);
      gotoxy(124,l);cprintf("%c",177);Sleep(0.2);
      gotoxy(125,l);cprintf("%c",177);Sleep(0.2);
   }

}
void bingwelcome(){
	textcolor(11);
	for(int j=1 ;j<=125;j++){
   	gotoxy(j,1);cprintf("%c",177);Sleep(0.2);
      gotoxy(j,2);cprintf("%c",177);Sleep(0.2);
      gotoxy(j,54);cprintf("%c",177);Sleep(0.2);
      gotoxy(j,55);cprintf("%c",177);Sleep(0.2);
      }
   for(int l=2;l<=55 ;l++){
   	gotoxy(1,l);cprintf("%c",177);Sleep(0.2);
      gotoxy(2,l);cprintf("%c",177);Sleep(0.2);
      gotoxy(124,l);cprintf("%c",177);Sleep(0.2);
      gotoxy(125,l);cprintf("%c",177);Sleep(0.2);
   }

}

void bingkai1(){
	bingwelcome();
   gotoxy(19,18);textcolor( 9); cprintf("WW           WW                                                                            ");Sleep(100);
	gotoxy(19,19);textcolor( 9); cprintf("WW           WW    EEEEEEE  LL          CCCCCCCCC   OOOOOOO       MM       MM     EEEEEEEE ");Sleep(100);
	gotoxy(19,20);textcolor( 9); cprintf("WW           WW   EEEEEEEE  LL          CCCCCCCCC  OOOOOOOOO     MMMM     MMMM   EEEEEEEEE ");Sleep(100);
	gotoxy(19,21);textcolor( 9); cprintf("WW           WW   EE        LL         CC         OO        O   MMM  M   M  MMM  EE        ");Sleep(100);
	gotoxy(19,22);textcolor( 9); cprintf("WW           WW   EEEEEEE   LL         CC         OO       OO   MM    MMM    MM  EEEEEEEE  ");Sleep(100);
	gotoxy(19,23);textcolor( 9); cprintf("WW    WW     WW   EEEEEEE   LL         CC         OO       OO   MM     M     MM  EEEEEEEE  ");Sleep(100);
	gotoxy(19,24);textcolor( 9); cprintf("WW   WWWW    WW   EE        LL         CC         OO       OO   MM           MM  EE        ");Sleep(100);
	gotoxy(19,25);textcolor( 9); cprintf("  WWWWWWWWWWW     EEEEEEEE  LLLLLLLLL   CCCCCCCCC  OOOOOOOOO    MM           MM   EEEEEEEE ");Sleep(100);
   gotoxy(19,26);textcolor( 9); cprintf("   WW  WW WW       EEEEEEE  LLLLLLLLL   CCCCCCCCC   OOOOOOO     MM           MM   EEEEEEEE ");Sleep(100);


	gotoxy(44,29);textcolor(14); cprintf("       TTTTTTTTTTTT                 ");Sleep(100);
   gotoxy(44,30);textcolor(14); cprintf("       TTTTTTTTTTTT                 ");Sleep(100);
	gotoxy(44,31);textcolor(14); cprintf("            TT        OOOOOO        ");Sleep(100);
	gotoxy(44,32);textcolor(14); cprintf("            TT       OOOOOOOO       ");Sleep(100);
	gotoxy(44,33);textcolor(14); cprintf("            TT      OO      OO      ");Sleep(100);
	gotoxy(44,34);textcolor(14); cprintf("            TT      OO      OO      ");Sleep(100);
	gotoxy(44,35);textcolor(14); cprintf("            TT       OOOOOOOO       ");Sleep(100);
	gotoxy(44,36);textcolor(14); cprintf("            TT        OOOOOO        ");Sleep(100);

   clrscr();
}
void bingkai2(){
	bingwelcome();
   gotoxy(28,12);textcolor(11); cprintf("DDDDDDDD                                                '''  SSSSSSS ");Sleep(100);
	gotoxy(28,13);textcolor(11); cprintf("DD      DD     AA      NN       NN UU     UU  RRRRRRR    '' SS       ");Sleep(100);
	gotoxy(28,14);textcolor(11); cprintf("DD      DD    AAAA     NN NN    NN UU     UU RR     RR  ''  SSSSSSSS ");Sleep(100);
	gotoxy(28,15);textcolor(11); cprintf("DD      DD   AA  AA    NN  NN   NN UU     UU RRRRRRRR        SSSSSSSS");Sleep(100);
	gotoxy(28,16);textcolor(11); cprintf("DD     DD   AAAAAAAA   NN   NN  NN UU     UU RR   RR               SS");Sleep(100);
	gotoxy(28,17);textcolor(11); cprintf("DD    DD   AA      AA  NN    NN NN  UU    UU RR     RR      S      SS");Sleep(100);
	gotoxy(28,18);textcolor(11); cprintf("DDDDDD    AA        AA NN       NN   UUUUUU  RR      RR      SSSSSSS ");Sleep(100);


   gotoxy(9 ,20);textcolor(12); cprintf("WW         WW                                                    ");Sleep(100);
	gotoxy(9 ,21);textcolor(12); cprintf("WW         WW  II   SSSSSSSS      AA     TTTTTTTTTTTT     AA     ");Sleep(100);
	gotoxy(9 ,22);textcolor(12); cprintf("WW         WW  II  SS            AAAA         TT         AAAA    ");Sleep(100);
	gotoxy(9 ,23);textcolor(12); cprintf("WW    WW   WW  II  SSSSSSSS     AA  AA        TT        AA  AA   ");Sleep(100);
	gotoxy(9 ,24);textcolor(12); cprintf("WW   WWWW  WW  II   SSSSSSSS   AAAAAAAA       TT       AAAAAAAA  ");Sleep(100);
	gotoxy(9 ,25);textcolor(12); cprintf("WW  WW  WW WW  II         SS  AA      AA      TT      AA      AA ");Sleep(100);
	gotoxy(9 ,26);textcolor(12); cprintf("  WW     WW    II  SSSSSSSS  AA        AA     TT     AA        AA");Sleep(100);

   gotoxy(44,29);textcolor(11); cprintf("                                                                 ");Sleep(100);
	gotoxy(44,30);textcolor(11); cprintf("       AA       NN       NN  DDDDDDD    ");Sleep(100);
	gotoxy(44,31);textcolor(11); cprintf("      AAAA      NN NN    NN  DD     DD  ");Sleep(100);
	gotoxy(44,32);textcolor(11); cprintf("     AA  AA     NN  NN   NN  DD     DD  ");Sleep(100);
	gotoxy(44,33);textcolor(11); cprintf("    AAAAAAAA    NN   NN  NN  DD     DD  ");Sleep(100);
	gotoxy(44,34);textcolor(11); cprintf("   AA      AA   NN    NN NN  DD    DD   ");Sleep(100);
	gotoxy(44,35);textcolor(11); cprintf("  AA        AA  NN       NN  DDDDDD     ");Sleep(100);

   gotoxy(67,38);textcolor(12); cprintf("TTTTTTTTTTTT                                         ");Sleep(100);
	gotoxy(67,39);textcolor(12); cprintf("     TT        OOOOOOOO    UU       UU   RRRRRRRR    ");Sleep(100);
	gotoxy(67,40);textcolor(12); cprintf("     TT       OOOOOOOOOO   UU       UU  RR      RR   ");Sleep(100);
	gotoxy(67,41);textcolor(12); cprintf("     TT      OO        OO  UU       UU  RRRRRRRRR    ");Sleep(100);
	gotoxy(67,42);textcolor(12); cprintf("     TT      OO        OO  UU       UU  RR    RR     ");Sleep(100);
	gotoxy(67,43);textcolor(12); cprintf("     TT       OOOOOOOOOO    UU      UU  RR      RR   ");Sleep(100);
	gotoxy(67,44);textcolor(12); cprintf("     TT        OOOOOOOO       UUUUUUU   RR       RR  ");Sleep(100);

   getch();
   clrscr();
}


////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////VALIDASI/////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

 int validasiNama(char d[100]){
	int valid=0;
	for (int x=0;d[x]!=NULL;x++){
   	if (d[x]>='A' && d[x]<='Z'&&x<=40 || d[x]>='a' && d[x]<='z'&&x<=40){
   		valid=1;
      }
      else if(d[x]==' '&&d[x-1]==' '||d[strlen(d)-1]==' '){
      	valid=0;
         break;
      }     else if(d[x]=='\'' && x!=0){
      	valid=1;
      }

      else if(d[x]==' '&&x!=0){
      	valid=1;
      }
   	else{
     		valid=0;
     		break;
   	}

	}
	return valid;
}

int validasiangka(char valangka[100]){
int tamp5=0;
if(strlen(valangka)==0){
tamp5=1;
}for (int e=0;valangka[e]!=NULL;e++){
	if (valangka[e]>='0' && valangka[e]<='9'){
      tamp5+=0;
   }else{
   	tamp5+=1;
   }
}
   return tamp5;

}


int validasiAlamat(char alamat[]){
	int cek = 0;
   if(strlen(alamat)==0)cek=1;
   for(int a=0;a<strlen(alamat);a++){
   	if(alamat[a]>='a' && alamat[a]<='z' || alamat[a]>='A' && alamat[a]<='Z'
      	|| alamat[a]=='/' || alamat[a]==' ' || alamat[a]=='.' || alamat[a]==','|| alamat[a]>='0' && alamat[a]<='9'){
          continue;
      }
          cek++;
   }
      return cek;
}



////////////////////////////////////////////////////////////////////////////////
////////////////////////////LOG-IN//////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void logIn(){
	bingkai1();
   bingkai2();
   bingwelcome();
   p:
	bingkai();
   char user[25],pass[25];
   textcolor(11);
   gotoxy(25,51);textcolor(11);cprintf("=========================CREATED BY LAESYA AYU REANA=========================");
   gotoxy(25,6);textcolor(23);cprintf("_________________________________    LOG IN   ________________________________");Sleep(60);
   gotoxy(35,17);textcolor(23);cprintf("__________________________________________________");Sleep(60);
   gotoxy(35,17);textcolor(12);cprintf("#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>#");Sleep(60);
   gotoxy(35,18);textcolor(23);cprintf("##==============================================##");Sleep(60);
   gotoxy(35,19);textcolor(11);cprintf("##                                              ##");Sleep(60);
	gotoxy(35,20);textcolor(11);cprintf("## UserName :                                   ##");Sleep(60);
   gotoxy(35,21);textcolor(11);cprintf("##                                              ##");Sleep(60);
   gotoxy(35,22);textcolor(23);cprintf("##==============================================##");Sleep(60);
   gotoxy(35,23);textcolor(12);cprintf("#================================================#");Sleep(60);
   gotoxy(35,24);textcolor(23);cprintf("##==============================================##");Sleep(60);
   gotoxy(35,25);textcolor(11);cprintf("##                                              ##");Sleep(60);
   gotoxy(35,26);textcolor(11);cprintf("## Password :                                   ##");Sleep(60);
   gotoxy(35,27);textcolor(11);cprintf("##                                              ##");Sleep(60);
   gotoxy(35,28);textcolor(23);cprintf("##==============================================##");Sleep(60);
   gotoxy(35,29);textcolor(12);cprintf("#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<#");Sleep(60);
   gotoxy(35,30);textcolor(23);cprintf("__________________________________________________");Sleep(60);

   do{
   textcolor(11);
   gotoxy(50,20);gets(user);
  	}while(strlen(user)==0);
  	do{
   textcolor(11);
   gotoxy(50,26);gets(pass);
   }while(strlen(pass)==0);



    	if ( strcmp(user,"admin")==0 && strcmp(pass,"2510")==0){
         textcolor(11);
         gotoxy (35,35);cprintf("Login anda berhasil!!");
      	gotoxy (40,36);cprintf("press enter to continue... ");
         loadinglogin();
         clrscr();
			menu();
   	}else if( strcmp(user,"admin")==0 && strcmp(pass,"2510")!=0){
   	   textcolor(11);
      	gotoxy (35,43);cprintf("Password yang anda masukan salah !!!");
      	gotoxy (40,44);cprintf("press enter to continue... ");
      	getch();
      	clrscr();goto p;
      	//logIn();
   	}else if ( strcmp(user,"admin")!=0 && strcmp(pass,"2510")==0){
   		textcolor(11);
   		gotoxy (35,43);cprintf("User yang anda masukan salah !!!");
      	gotoxy (40,44);cprintf("press enter to continue... ");
      	getch();
      	clrscr();goto p;
      	//logIn();
   	 }else {
   		textcolor(11);
      	gotoxy (35,43);cprintf("User dan password yang anda masukan salah !!!");
      	gotoxy (40,44);cprintf("press enter to continue... ");
      	getch();
      	clrscr();goto p;
      	//logIn();
   	}
	}


////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////LOADING LOGIN/////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void loadinglogin(){
textcolor(11);
	for(int x=1;x<=100;x++){
   	gotoxy(49,43);cprintf("%c",177);Sleep(2);
   	gotoxy(51,44);cprintf("Loading %d%",x);Sleep(30);
   }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////MENU////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void menu(){
	bingkaimenu();
	char angka[10];
	char pilih[2];
   textcolor(11);
	gotoxy(45, 4);cprintf("==============================");
   gotoxy(45, 5);cprintf("||        MENU ADMIN        ||");Sleep(50);
   gotoxy(45, 6);cprintf("||__________________________||");
   gotoxy(45, 7);cprintf("==============================");
   gotoxy(45,15);cprintf("==============================");
   gotoxy(45,16);cprintf("|| 1. DESTINASI             ||");Sleep(50);
   gotoxy(45,17);cprintf("||--------------------------||");
	gotoxy(45,18);cprintf("||                          ||");
   gotoxy(45,19);cprintf("||--------------------------||");
   gotoxy(45,20);cprintf("|| 2. INFORMASI             ||");Sleep(50);
   gotoxy(45,21);cprintf("||--------------------------||");
	gotoxy(45,22);cprintf("||                          ||");
   gotoxy(45,23);cprintf("||--------------------------||");
   gotoxy(45,24);cprintf("|| 3. DATA PENGUNJUNG       ||");Sleep(50);
   gotoxy(45,25);cprintf("||--------------------------||");
	gotoxy(45,26);cprintf("||                          ||");
   gotoxy(45,27);cprintf("||--------------------------||");
   gotoxy(45,28);cprintf("|| 4. LAPORAN KEUANGAN      ||");Sleep(50);
   gotoxy(45,29);cprintf("||--------------------------||");
   gotoxy(45,30);cprintf("||                          ||");
   gotoxy(45,31);cprintf("||--------------------------||");
   gotoxy(45,32);cprintf("|| 5. KELUAR                ||");Sleep(50);
   gotoxy(45,33);cprintf("==============================");

   gotoxy(45,50);cprintf("++++++++++++++++++++++++++++++");
   gotoxy(45,51);cprintf("## ~PILIH :                 ##");
   gotoxy(45,52);cprintf("++++++++++++++++++++++++++++++");gotoxy(58,51);gets(angka);Sleep(50);
    if( strcmp(angka,"1")==0 ){
    	clrscr();
    	destinasi();
    }else if( strcmp(angka,"2")==0 ){
    	clrscr();
    	informasi();
    }else if( strcmp(angka,"3")==0 ){
    	clrscr();
    	datapengunjung();
    }else if( strcmp(angka,"4")==0 ){
    	clrscr();
    	laporankeuangan();
    }else if( strcmp(angka,"5")==0 ){
    	gotoxy(45,39);cprintf("APAKAH ANDA YAKIN AKAN KELUAR (y/n)?");gotoxy(64,40);gets(pilih);
      if(strcmp(pilih,"y")==0){
      exit(5);
      }else if(strcmp(pilih,"n")==0){
      menu();
      }
    }else{
    	gotoxy (87,51);cprintf("pilihan yang anda masukan salah!");
      getch();
      clrscr();
      menu();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////MENU DESTINASI/////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void destinasi(){
	bingkaimenu();
	char angka[10];
	char pilih[2];
	textcolor(11);
	gotoxy(45, 4);cprintf("==============================");
   gotoxy(45, 5);cprintf("||       MENU DESTINASI     ||");Sleep(50);
   gotoxy(45, 6);cprintf("||__________________________||");
	gotoxy(45, 7);cprintf("==============================");
   gotoxy(45,15);cprintf("==============================");
   gotoxy(45,16);cprintf("|| 1. PANTAI                ||");Sleep(50);
   gotoxy(45,17);cprintf("||--------------------------||");
	gotoxy(45,18);cprintf("||                          ||");
   gotoxy(45,19);cprintf("||--------------------------||");
   gotoxy(45,20);cprintf("|| 2. BODYRAFTING           ||");Sleep(50);
   gotoxy(45,21);cprintf("||--------------------------||");
	gotoxy(45,22);cprintf("||                          ||");
   gotoxy(45,23);cprintf("||--------------------------||");
   gotoxy(45,24);cprintf("|| 3. MENU                  ||");Sleep(50);
   gotoxy(45,25);cprintf("||--------------------------||");
   gotoxy(45,26);cprintf("||                          ||");
   gotoxy(45,27);cprintf("||--------------------------||");
   gotoxy(45,28);cprintf("|| 4. KELUAR                ||");Sleep(50);
   gotoxy(45,29);cprintf("==============================");


   gotoxy(45,50);cprintf("++++++++++++++++++++++++++++++");
   gotoxy(45,51);cprintf("## ~PILIH :                 ##");
   gotoxy(45,52);cprintf("++++++++++++++++++++++++++++++");gotoxy(58,51);gets(angka);Sleep(50);
    if( strcmp(angka,"1")==0 ){
    	clrscr();
    	pantai();
    }else if( strcmp(angka,"2")==0 ){
    	clrscr();
    	bodyrafting();
    }else if( strcmp(angka,"3")==0 ){
    	clrscr();
    	menu();
    }else if( strcmp(angka,"4")==0 ){
    	gotoxy(45,39);cprintf("APAKAH ANDA YAKIN AKAN KELUAR (y/n)?");gotoxy(64,40);gets(pilih);
      if(strcmp(pilih,"y")==0){
      exit(5);
      }else if(strcmp(pilih,"n")==0){
      destinasi();
      }
    }else{
    	gotoxy (87,51);cprintf("pilihan yang anda masukan salah!");
      getch();
      clrscr();
      destinasi();
    }
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////INFORMASI///////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void informasi(){
	bingkaimenu();
   char pilih[10];
   char pilih2[2];
	textcolor(11);
   gotoxy(45, 4);cprintf("==============================");
   gotoxy(45, 5);cprintf("||      MENU INFORMASI      ||");Sleep(50);
   gotoxy(45, 6);cprintf("||__________________________||");
   gotoxy(45, 7);cprintf("==============================");
   gotoxy(45,17);cprintf("==============================");
   gotoxy(45,18);cprintf("|| 1. FASILITAS DAN HARGA   ||");Sleep(50);
   gotoxy(45,19);cprintf("||--------------------------||");
	gotoxy(45,20);cprintf("||                          ||");
   gotoxy(45,21);cprintf("||--------------------------||");
   gotoxy(45,22);cprintf("|| 2. MENU                  ||");Sleep(50);
   gotoxy(45,23);cprintf("||--------------------------||");
	gotoxy(45,24);cprintf("||                          ||");
   gotoxy(45,25);cprintf("||--------------------------||");
   gotoxy(45,26);cprintf("|| 3. KELUAR                ||");Sleep(50);
   gotoxy(45,27);cprintf("==============================");

 	gotoxy(45,50);cprintf("++++++++++++++++++++++++++++++");
   gotoxy(45,51);cprintf("## ~PILIH :                 ##");
   gotoxy(45,52);cprintf("++++++++++++++++++++++++++++++");gotoxy(58,51);gets(pilih);Sleep(50);


   if (strcmp(pilih,"1")==0){
   	clrscr();
   	fasilitasHarga();
   }else if (strcmp(pilih,"2")==0){
   	clrscr();
   	menu();
   }else if (strcmp(pilih,"3")==0){
   	gotoxy(45,39);cprintf("APAKAH ANDA YAKIN AKAN KELUAR (y/n)?");gotoxy(64,40);gets(pilih2);
      if(strcmp(pilih2,"y")==0){
      exit(5);
      }else if(strcmp(pilih2,"n")==0){
      informasi();
      }
   }else{
   	gotoxy (87,51);cprintf("pilihan yang anda masukan salah!");
      getch();
      clrscr();
      informasi();
   }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////DATA PENGUNJUNG////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void datapengunjung(){
	bingkai();
   textcolor(11);
	gotoxy( 7, 4);printf("=======++========================++============================================++==================================");
   gotoxy( 7, 5);printf("|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> NAMA PEMESAN <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|");Sleep(50);
   gotoxy( 7, 6);printf("||_____++_____________________________++________________________________++_______________________________________||");
   gotoxy( 7, 7);printf("===================================================================================================================");
  	gotoxy( 7,13);printf("===================================================================================================================");
   gotoxy( 7,14);printf("||  NO ++      HARI & TANGGAL         ++           NAMA PEMESAN         ++                WAHANA                 ||");Sleep(50);
   gotoxy( 7,15);printf("||_____++_____________________________++________________________________++_______________________________________||");
   gotoxy( 7,16);printf("===================================================================================================================");
   gotoxy( 7,17);printf("|| 001 ||                             ||                                ||                                       ||");Sleep(50);
   gotoxy( 7,18);printf("||-----||-----------------------------||--------------------------------||---------------------------------------||");
	gotoxy( 7,19);printf("|| 002 ||                             ||                                ||                                       ||");
   gotoxy( 7,20);printf("||-----||-----------------------------||--------------------------------||---------------------------------------||");
   gotoxy( 7,21);printf("|| 003 ||                             ||                                ||                                       ||");Sleep(50);
   gotoxy( 7,22);printf("||-----||-----------------------------||--------------------------------||---------------------------------------||");
	gotoxy( 7,23);printf("|| 004 ||                             ||                                ||                                       ||");
   gotoxy( 7,24);printf("||-----||-----------------------------||--------------------------------||---------------------------------------||");
   gotoxy( 7,25);printf("|| 005 ||                             ||                                ||                                       ||");Sleep(50);
   gotoxy( 7,26);printf("||-----||-----------------------------||--------------------------------||---------------------------------------||");
	gotoxy( 7,27);printf("|| 006 ||                             ||                                ||                                       ||");
   gotoxy( 7,28);printf("||-----||-----------------------------||--------------------------------||---------------------------------------||");
   gotoxy( 7,29);printf("|| 007 ||                             ||                                ||                                       ||");Sleep(50);
   gotoxy( 7,30);printf("||-----||-----------------------------||--------------------------------||---------------------------------------||");
   gotoxy( 7,31);printf("|| 008 ||                             ||                                ||                                       ||");
   gotoxy( 7,32);printf("||-----||-----------------------------||--------------------------------||---------------------------------------||");
   gotoxy( 7,33);printf("|| 009 ||                             ||                                ||                                       ||");Sleep(50);
   gotoxy( 7,34);printf("===================================================================================================================");
   int u=0;
   for(int q=0;q<x;q++){
      gotoxy(17,17+u);
   	for(int n=0;n<24;n++){
      	printf("%c",waktu[q][n]);
      }
   	gotoxy(54,17+u);cprintf("%s",namapemesan[q]);
   	gotoxy(84,17+u);cprintf("%s",wahana[q]);
   	u+=2;
   }
    gotoxy(45,51);cprintf("Press Enter To Back Menu");
    getch();
   clrscr();
   menu();

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////PANTAI///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
void pantai(){
bingkaimenu();
   char pilih[10];
   char pilih2[2];
   textcolor(11);
   gotoxy(45, 4);cprintf("==============================");
   gotoxy(45, 5);cprintf("||  ** DESTINASI PANTAI **  ||");Sleep(50);
   gotoxy(45, 6);cprintf("||__________________________||");
   gotoxy(45, 7);cprintf("==============================");
   gotoxy(45,15);cprintf("==============================");
   gotoxy(45,16);cprintf("|| 1. PANGANDARAN           ||");Sleep(50);
   gotoxy(45,17);cprintf("||--------------------------||");
	gotoxy(45,18);cprintf("||                          ||");
   gotoxy(45,19);cprintf("||--------------------------||");
   gotoxy(45,20);cprintf("|| 2. KARAPYAK              ||");Sleep(50);
   gotoxy(45,21);cprintf("||--------------------------||");
	gotoxy(45,22);cprintf("||                          ||");
   gotoxy(45,23);cprintf("||--------------------------||");
   gotoxy(45,24);cprintf("|| 3. BATUKARAS             ||");Sleep(50);
   gotoxy(45,25);cprintf("||--------------------------||");
	gotoxy(45,26);cprintf("||                          ||");
   gotoxy(45,27);cprintf("||--------------------------||");
   gotoxy(45,28);cprintf("|| 4. MENU                  ||");Sleep(50);
   gotoxy(45,29);cprintf("||--------------------------||");
   gotoxy(45,30);cprintf("||                          ||");
   gotoxy(45,31);cprintf("||--------------------------||");
   gotoxy(45,32);cprintf("|| 5. KELUAR                ||");Sleep(50);
   gotoxy(45,33);cprintf("==============================");

 	gotoxy(45,50);cprintf("++++++++++++++++++++++++++++++");
   gotoxy(45,51);cprintf("## ~PILIH :                 ##");
   gotoxy(45,52);cprintf("++++++++++++++++++++++++++++++");gotoxy(58,51);gets(pilih);Sleep(50);



   if (strcmp(pilih,"1")==0){
   	clrscr();
   	wahanapantai();
   }else if (strcmp(pilih,"2")==0){
   	clrscr();
   	wahanapantai();
   }else if (strcmp(pilih,"3")==0){
   	clrscr();
   	wahanapantai();
   }else if (strcmp(pilih,"4")==0){
   	clrscr();
   	menu();
   }else if (strcmp(pilih,"5")==0){
   	gotoxy(45,39);printf("APAKAH ANDA YAKIN AKAN KELUAR (y/n?)");gotoxy(64,40);gets(pilih2);
      if(strcmp(pilih2,"y")==0){
      exit(5);
      }else if(strcmp(pilih2,"n")==0){
      menu();
      }
   }else{
   	gotoxy (87,51);printf("pilihan yang anda masukan salah!");
      getch();
      clrscr();
      pantai();
   }
   clrscr();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////ARUNGJERAM/////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
void bodyrafting(){
	bingkaimenu();
   char pilih[10];
   char pilih2[2];
   textcolor(11);
   gotoxy(45, 4);cprintf("==============================");
   gotoxy(45, 5);cprintf("||** DESTINASI BODYRAFTING**||");Sleep(50);
   gotoxy(45, 6);cprintf("||__________________________||");
   gotoxy(45, 7);cprintf("==============================");
   gotoxy(45,18);cprintf("==============================");
   gotoxy(45,19);cprintf("|| 1. PESAN                 ||");Sleep(50);
   gotoxy(45,20);cprintf("||--------------------------||");
	gotoxy(45,21);cprintf("||                          ||");
   gotoxy(45,22);cprintf("||--------------------------||");
   gotoxy(45,23);cprintf("|| 2. MENU                  ||");Sleep(50);
   gotoxy(45,24);cprintf("||--------------------------||");
   gotoxy(45,25);cprintf("||                          ||");
   gotoxy(45,26);cprintf("||--------------------------||");
   gotoxy(45,27);cprintf("|| 3. KELUAR                ||");Sleep(50);
   gotoxy(45,28);cprintf("==============================");

 	gotoxy(45,50);cprintf("++++++++++++++++++++++++++++++");
   gotoxy(45,51);cprintf("## ~PILIH :                 ##");
   gotoxy(45,52);cprintf("++++++++++++++++++++++++++++++");gotoxy(58,51);gets(pilih);Sleep(50);

   if (strcmp(pilih,"1")==0){
   	clrscr();
   	wahanabodyrafting();
   }else if (strcmp(pilih,"2")==0){
   	clrscr();
   	menu();
   }else if (strcmp(pilih,"3")==0){
   	gotoxy(45,39);printf("APAKAH ANDA YAKIN AKAN KELUAR (y/n)?");gotoxy(64,40);gets(pilih2);
      if(strcmp(pilih2,"y")==0){
      exit(5);
      }else if(strcmp(pilih2,"n")==0){
      menu();
      }
   }else{
   	gotoxy (87,51);printf("pilihan yang anda masukan salah!");
      getch();
      clrscr();
      bodyrafting();
   }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////FASILITAS DAN HARGA///////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void fasilitasHarga(){
bingkaimenu();
   char pilih[10];
   char pilih2[2];
   textcolor(11);
	gotoxy(45, 4);cprintf("==============================");
   gotoxy(45, 5);cprintf("||  **FASILITAS & HARGA**   ||");Sleep(50);
   gotoxy(45, 6);cprintf("||__________________________||");
   gotoxy(45, 7);cprintf("==============================");
   gotoxy(45,16);cprintf("==============================");
   gotoxy(45,17);cprintf("|| 1. PANTAI                ||");Sleep(50);
   gotoxy(45,18);cprintf("||--------------------------||");
	gotoxy(45,19);cprintf("||                          ||");
   gotoxy(45,20);cprintf("||--------------------------||");
   gotoxy(45,21);cprintf("|| 2. BODYRAFTING           ||");Sleep(50);
   gotoxy(45,22);cprintf("||--------------------------||");
	gotoxy(45,23);cprintf("||                          ||");
   gotoxy(45,24);cprintf("||--------------------------||");
   gotoxy(45,25);cprintf("|| 3. MENU                  ||");Sleep(50);
   gotoxy(45,26);cprintf("||--------------------------||");
   gotoxy(45,27);cprintf("||                          ||");
   gotoxy(45,28);cprintf("||--------------------------||");
   gotoxy(45,29);cprintf("|| 4. KELUAR                ||");Sleep(50);
   gotoxy(45,30);cprintf("==============================");

 	gotoxy(45,50);cprintf("++++++++++++++++++++++++++++++");
   gotoxy(45,51);cprintf("## ~PILIH :                 ##");
   gotoxy(45,52);cprintf("++++++++++++++++++++++++++++++");gotoxy(58,51);gets(pilih);Sleep(50);

   	if( strcmp(pilih,"1")==0 ){
    		clrscr();
    		fasilitaspantai();
   	}else if( strcmp(pilih,"2")==0 ){
    		clrscr();
    	   fasilitasbodyrafting();
    	}else if( strcmp(pilih,"3")==0 ){
    		clrscr();
    		menu();
    	}else if( strcmp(pilih,"4")==0 ){
      gotoxy(45,39);cprintf("APAKAH ANDA YAKIN AKAN KELUAR (y/n)?");gotoxy(64,40);gets(pilih2);
      	if(strcmp(pilih2,"y")==0){
      	exit(5);
      	}else if(strcmp(pilih2,"n")==0){
      	menu();
      	}
    	}else{
    		gotoxy (87,51);cprintf("pilihan yang anda masukan salah!");
      	getch();
      	clrscr();
      	destinasi();
    	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////FASILITAS PANTAI////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////
void fasilitaspantai(){
bingkaimenu();
   char pilih[10];
   char pilih2[2];
   textcolor(11);
   gotoxy(45, 4);cprintf("==============================");
   gotoxy(45, 5);cprintf("||  ** FASILITAS PANTAI **  ||");Sleep(50);
   gotoxy(45, 6);cprintf("||__________________________||");
   gotoxy(45, 7);cprintf("==============================");
   gotoxy(45,15);cprintf("==============================");
   gotoxy(45,16);cprintf("|| 1. PANGANDARAN           ||");Sleep(50);
   gotoxy(45,17);cprintf("||--------------------------||");
	gotoxy(45,18);cprintf("||                          ||");
   gotoxy(45,19);cprintf("||--------------------------||");
   gotoxy(45,20);cprintf("|| 2. KARAPYAK              ||");Sleep(50);
   gotoxy(45,21);cprintf("||--------------------------||");
	gotoxy(45,22);cprintf("||                          ||");
   gotoxy(45,23);cprintf("||--------------------------||");
   gotoxy(45,24);cprintf("|| 3. BATUKARAS             ||");Sleep(50);
   gotoxy(45,25);cprintf("||--------------------------||");
	gotoxy(45,26);cprintf("||                          ||");
   gotoxy(45,27);cprintf("||--------------------------||");
   gotoxy(45,28);cprintf("|| 4. MENU                  ||");Sleep(50);
   gotoxy(45,29);cprintf("||--------------------------||");
   gotoxy(45,30);cprintf("||                          ||");
   gotoxy(45,31);cprintf("||--------------------------||");
   gotoxy(45,32);cprintf("|| 5. KELUAR                ||");Sleep(50);
   gotoxy(45,33);cprintf("==============================");

 	gotoxy(45,50);cprintf("++++++++++++++++++++++++++++++");
   gotoxy(45,51);cprintf("## ~PILIH :                 ##");
   gotoxy(45,52);cprintf("++++++++++++++++++++++++++++++");gotoxy(58,51);gets(pilih);Sleep(50);


   if (strcmp(pilih,"1")==0){
   	clrscr();
   	isifaspantai();
   }else if (strcmp(pilih,"2")==0){
   	clrscr();
   	isifaspantai();
   }else if (strcmp(pilih,"3")==0){
   	clrscr();
   	isifaspantai();
   }else if (strcmp(pilih,"4")==0){
   	clrscr();
   	menu();
   }else if (strcmp(pilih,"5")==0){
   	gotoxy(45,39);printf("APAKAH ANDA YAKIN AKAN KELUAR (y/n)?");gotoxy(64,40);gets(pilih2);
      if(strcmp(pilih2,"y")==0){
      exit(5);
      }else if(strcmp(pilih2,"n")==0){
      menu();
      }
   }else{
   	gotoxy (87,51);printf("pilihan yang anda masukan salah!");
      getch();
      clrscr();
      fasilitaspantai();
   }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////FASILITAS DAN HARGA BODYRAFTING////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
void fasilitasbodyrafting(){
 	bingkaimenu();
   char pilih[10];
   char pilih2[2];
   textcolor(11);
   gotoxy(47, 4);cprintf("==============================");
   gotoxy(47, 5);cprintf("|| **FASILITAS BODYRAFTING**||");Sleep(50);
   gotoxy(47, 6);cprintf("||__________________________||");
   gotoxy(47, 7);cprintf("==============================");
   gotoxy(47,12);cprintf("==============================");
   gotoxy(47,13);cprintf("|| 1. PANGANDARAN 2D1N      ||");Sleep(50);
   gotoxy(47,14);cprintf("||--------------------------||");
	gotoxy(47,15);cprintf("||                          ||");
   gotoxy(47,16);cprintf("||--------------------------||");
   gotoxy(47,17);cprintf("|| 2. PANGANDARAN 1DAY      ||");Sleep(50);
   gotoxy(47,18);cprintf("||--------------------------||");
	gotoxy(47,19);cprintf("||                          ||");
   gotoxy(47,20);cprintf("||--------------------------||");
   gotoxy(47,21);cprintf("|| 3. CITUMANG              ||");Sleep(50);
   gotoxy(47,22);cprintf("||--------------------------||");
	gotoxy(47,23);cprintf("||                          ||");
   gotoxy(47,24);cprintf("||--------------------------||");
   gotoxy(47,25);cprintf("|| 4. CIWAYANG              ||");Sleep(50);
   gotoxy(47,26);cprintf("||--------------------------||");
	gotoxy(47,27);cprintf("||                          ||");
   gotoxy(47,28);cprintf("||--------------------------||");
   gotoxy(47,29);cprintf("|| 5. GOA LANANG            ||");Sleep(50);
   gotoxy(47,30);cprintf("||--------------------------||");
	gotoxy(47,31);cprintf("||                          ||");
   gotoxy(47,32);cprintf("||--------------------------||");
   gotoxy(47,33);cprintf("|| 6. JOJOGAN               ||");Sleep(50);
   gotoxy(47,34);cprintf("||--------------------------||");
	gotoxy(47,35);cprintf("||                          ||");
   gotoxy(47,36);cprintf("||--------------------------||");
   gotoxy(47,37);cprintf("|| 7. SANTIRAH              ||");Sleep(50);
   gotoxy(47,38);cprintf("||--------------------------||");
	gotoxy(47,39);cprintf("||                          ||");
   gotoxy(47,40);cprintf("||--------------------------||");
   gotoxy(47,41);cprintf("|| 8. MENU                  ||");Sleep(50);
   gotoxy(47,42);cprintf("||--------------------------||");
   gotoxy(47,43);cprintf("||                          ||");
   gotoxy(47,44);cprintf("||--------------------------||");
   gotoxy(47,45);cprintf("|| 9. KELUAR                ||");Sleep(50);
   gotoxy(47,46);cprintf("==============================");

 	gotoxy(47,50);cprintf("++++++++++++++++++++++++++++++");
   gotoxy(47,51);cprintf("## ~PILIH :                 ##");
   gotoxy(47,52);cprintf("++++++++++++++++++++++++++++++");gotoxy(58,51);gets(pilih);Sleep(50);


   if (strcmp(pilih,"1")==0){
   	clrscr();
   	faspangandaran2d1n();
   }else if (strcmp(pilih,"2")==0){
   	clrscr();
   	faspangandaran1day();
   }else if (strcmp(pilih,"3")==0){
   	clrscr();
   	fascitumang();
    }else if (strcmp(pilih,"4")==0){
   	clrscr();
   	fasciwayang();
	 }else if (strcmp(pilih,"5")==0){
   	clrscr();
   	fasgoalanang();
	 }else if (strcmp(pilih,"6")==0){
   	clrscr();
   	fasjojogan();
	 }else if (strcmp(pilih,"7")==0){
   	clrscr();
   	fassantirah();
   }else if (strcmp(pilih,"8")==0){
   	clrscr();
   	menu();
   }else if (strcmp(pilih,"9")==0){
   	gotoxy(45,39);printf("APAKAH ANDA YAKIN AKAN KELUAR (y/n)?");gotoxy(64,40);gets(pilih2);
      if(strcmp(pilih2,"y")==0){
      exit(5);
      }else if(strcmp(pilih2,"n")==0){
      menu();
      }
   }else{
   	gotoxy (87,51);printf("pilihan yang anda masukan salah!");
      getch();
      clrscr();
      fasilitasbodyrafting();
   }
}

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////LAPORAN KEUANGAN////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
void laporankeuangan(){
bingkaimenu();
   char pilih[10];
   char pilih2[2];
   textcolor(11);
   gotoxy(45, 4);cprintf("==============================");
   gotoxy(45, 5);cprintf("||** MENU LAPORAN KEUANGAN**||");Sleep(50);
   gotoxy(45, 6);cprintf("||__________________________||");
	gotoxy(45, 7);cprintf("==============================");
   gotoxy(45,17);cprintf("==============================");
   gotoxy(45,18);cprintf("|| 1. PENDAPATAN HARIAN     ||");Sleep(50);
   gotoxy(45,19);cprintf("||--------------------------||");
	gotoxy(45,20);cprintf("||                          ||");
   gotoxy(45,21);cprintf("||--------------------------||");
   gotoxy(45,22);cprintf("|| 2. MENU                  ||");Sleep(50);
   gotoxy(45,23);cprintf("||--------------------------||");
	gotoxy(45,24);cprintf("||                          ||");
   gotoxy(45,25);cprintf("||--------------------------||");
   gotoxy(45,26);cprintf("|| 3. KELUAR                ||");Sleep(50);
   gotoxy(45,27);cprintf("==============================");

 	gotoxy(45,50);cprintf("++++++++++++++++++++++++++++++");
   gotoxy(45,51);cprintf("## PILIH :                  ##");
   gotoxy(45,52);cprintf("++++++++++++++++++++++++++++++");gotoxy(58,51);gets(pilih);Sleep(50);


   if (strcmp(pilih,"1")==0){
   	clrscr();
   	pendapatanharian();
   }else if (strcmp(pilih,"2")==0){
   	clrscr();
   	menu();
   }else if (strcmp(pilih,"3")==0){
   	gotoxy(45,39);printf("APAKAH ANDA YAKIN AKAN KELUAR (y/n)?");gotoxy(64,40);gets(pilih2);
      if(strcmp(pilih2,"y")==0){
      exit(5);
      }else if(strcmp(pilih2,"n")==0){
      menu();
      }
   }else{
   	gotoxy (87,51);printf("pilihan yang anda masukan salah!");
      getch();
      clrscr();
      laporankeuangan();
   }
}



///////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////PENDAPATAN HARIAN////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
void pendapatanharian(){
	bingkai();
   textcolor(11);
	gotoxy(17, 4);printf("============================================================================================");
   gotoxy(17, 5);printf("|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>LAPORAN PENDAPATAN HARIAN<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|");
   gotoxy(17, 6);printf("||________________________________________________________________________________________||");
  	gotoxy(17,16);printf("============================================================================================");
   gotoxy(17,17);printf("||  NO ++        HARI & TANGGAL        ++    JUMLAH PENGUNJUNG    ++   PENDAPATAN/HARI    ||");Sleep(50);
   gotoxy(17,18);printf("||_____++______________________________++_________________________++______________________||");
   gotoxy(17,19);printf("============================================================================================");
   gotoxy(17,20);printf("|| 001 ||                              ||                         ||                      ||");Sleep(50);
   gotoxy(17,21);printf("||-----||------------------------------||-------------------------||----------------------||");
	gotoxy(17,22);printf("|| 002 ||                              ||                         ||                      ||");
   gotoxy(17,23);printf("||-----||------------------------------||-------------------------||----------------------||");
   gotoxy(17,24);printf("|| 003 ||                              ||                         ||                      ||");Sleep(50);
   gotoxy(17,25);printf("||-----||------------------------------||-------------------------||----------------------||");
	gotoxy(17,26);printf("|| 004 ||                              ||                         ||                      ||");
   gotoxy(17,27);printf("||-----||------------------------------||-------------------------||----------------------||");
   gotoxy(17,28);printf("|| 005 ||                              ||                         ||                      ||");Sleep(50);
   gotoxy(17,29);printf("||-----||------------------------------||-------------------------||----------------------||");
	gotoxy(17,30);printf("|| 006 ||                              ||                         ||                      ||");
   gotoxy(17,31);printf("||-----||------------------------------||-------------------------||----------------------||");
   gotoxy(17,32);printf("|| 007 ||                              ||                         ||                      ||");Sleep(50);
   gotoxy(17,33);printf("||-----||------------------------------||-------------------------||----------------------||");
   gotoxy(17,34);printf("|| 008 ||                              ||                         ||                      ||");
   gotoxy(17,35);printf("||-----||------------------------------||-------------------------||----------------------||");
   gotoxy(17,36);printf("|| 009 ||                              ||                         ||                      ||");Sleep(50);
   gotoxy(17,37);printf("============================================================================================");
   int g=0;
   for(int h=0;h<y;h++){
      gotoxy(27,20+g);
   	for(int m=0;m<24;m++){
      	printf("%c",waktu[h][m]);
      }

   	gotoxy(62,20+g);printf("%d",jumorang[h]);
   	gotoxy(87,20+g);printf("%d",jumpendapatan[h]);
   	g+=2;
   }
   gotoxy(45,50);cprintf("++++++++++++++++++++++++++++++++++++++++++++++");
   gotoxy(45,51);cprintf("## TOTAL PENDAPATAN :                       ##");
   gotoxy(45,52);cprintf("++++++++++++++++++++++++++++++++++++++++++++++");
   gotoxy(67,51);cprintf("%d",saldo);
   getch();
   gotoxy(45,40);cprintf("Press Enter To Back Menu");
   getch();
   clrscr();
   menu();

}

void data(){
	frame();
	char jumlahorang[10];
   textcolor(11);
   gotoxy( 5, 4);cprintf("###################################################################################################################");
   gotoxy( 5, 5);cprintf("##+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++##");
	gotoxy( 5, 6);cprintf("##>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>DATA PEMESANAN<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<##");
   gotoxy( 5, 7);cprintf("##|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||##");
   gotoxy( 5, 8);cprintf("###################################################################################################################");
   gotoxy( 5,11);cprintf("###################################################################################################################");
   gotoxy( 5,12);cprintf("##===============================================================================================================##");
	gotoxy( 5,13);cprintf("##     NAMA PEMESAN  :                                                                                           ##");
	gotoxy( 5,14);cprintf("##     JUMLAH ORANG  :                                                                                           ##");
   gotoxy( 5,15);cprintf("##     ALAMAT        :                                                                                           ##");
   gotoxy( 5,16);cprintf("##     NO. HP        :                                                                                           ##");
   gotoxy( 5,17);cprintf("##     NO. IDENTITAS :                                                                                           ##");
   gotoxy( 5,18);cprintf("##===============================================================================================================##");
   gotoxy( 5,19);cprintf("##                                                                                                               ##");
   char in;
   gotoxy(25,34);printf("Tekan 'y' Atau 'Y' Untuk Lanjut Dan Tekan Sembarang Untuk Kembali Ke Menu");in=getch();
   gotoxy(25,34);printf("                                                                         ");

   if(in=='y'|| in=='Y'){
   	do{
      	gotoxy(40,34);cprintf("Inputan Harus Berupa Karakter Huruf!!");
      	gotoxy(30,13);printf("                                                                                 ");
			gotoxy(30,13);gets(namapemesan[x]);Sleep(50);
      		if(validasiNama(namapemesan[x])==0){
      				gotoxy(58,45);textcolor(11);cprintf("YANG ANDA INPUTKAN SALAH");
            }
   	}while(validasiNama(namapemesan[x])==0);

   	do{
   		gotoxy(40,34);cprintf("Inputan Harus Berupa Karakter Angka!!");
   		gotoxy(30,14);printf("                                                                                ");
			gotoxy(30,14);gets(jumlahorang);Sleep(50);
   	}while(validasiangka(jumlahorang)!=0);
   	jumorang[x]=atoi(jumlahorang);

   	do{
   		gotoxy(40,34);cprintf("Inputan Simbol Hanya Berupa . , dan /!!");
   		gotoxy(30,15);printf("                                                                                 ");
			gotoxy(30,15);gets(alamat[x]);Sleep(50);
   	}while(validasiAlamat(alamat[x])!=0);

   	do{
   		gotoxy(40,34);cprintf("Inputan Harus Berupa Karakter Angka (11-12 digit) ! !");
   		gotoxy(30,16);printf("+62");
   		gotoxy(33,16);printf("                                                                                  ");
			gotoxy(33,16);gets(hp[x]);Sleep(50);
   	}while(validasiangka(hp[x])>0 || strlen(hp[x])<10 ||strlen(hp[x])>13);     //kondisi salah. apabila keduanya benar maka lolos, apabila salah satu salah minta inputan kembali

   	do{
   		gotoxy(40,34);cprintf("Inputan Harus Berupa Karakter Angka (16 digit) ! !");
   		gotoxy(30,17);printf("                                                        ");
   		gotoxy(30,17);gets(identitas[x]);Sleep(50);
   	}while(validasiangka(identitas[x])>0 || strlen(identitas[x])<15 ||strlen(identitas[x])>16);

   mytime=0;
   mytime=time(NULL);
   strcpy(waktu[x],ctime(&mytime));
}else{
	clrscr();menu();
}


   }
void wahanapantai(){
	frame();
   data();
   char pilih[10];
   textcolor(11);
  	gotoxy( 5,20);cprintf("##===============================================================================================================##");
   gotoxy( 5,21);cprintf("##|| NO  ++          NAMA WAHANA                                ++                  HARGA SEWA                 ||##");Sleep(50);
   gotoxy( 5,22);cprintf("##||_____++_____________________________________________________++_____________________________________________||##");
   gotoxy( 5,23);cprintf("##===============================================================================================================##");
   gotoxy( 5,24);cprintf("##||  1  ||  BananaBoat                                         ||              Rp 50.000,00/Orang             ||##");Sleep(50);
   gotoxy( 5,25);cprintf("##||-----||-----------------------------------------------------||---------------------------------------------||##");
	gotoxy( 5,26);cprintf("##||  2  ||  Gladiator                                          ||              Rp 65.000,00/Orang             ||##");
   gotoxy( 5,27);cprintf("##||-----||-----------------------------------------------------||---------------------------------------------||##");
   gotoxy( 5,28);cprintf("##||  3  ||  UFO                                                ||              Rp 75.000,00/Orang             ||##");Sleep(50);
   gotoxy( 5,29);cprintf("##||-----||-----------------------------------------------------||---------------------------------------------||##");
	gotoxy( 5,30);cprintf("##||  4  ||  Paket Wahana Lengkap(Banana Boat, Gladiator, UFO)  ||      Rp. 156.000,00/Orang(Min. 7 Orang)     ||##");
   gotoxy( 5,31);cprintf("##||-----||-----------------------------------------------------||---------------------------------------------||##");
   gotoxy( 5,32);cprintf("##||  5  ||  Perahu                                             ||      Rp. 500.000,00/Perahu(Min. 7 Orang)    ||##");Sleep(50);
   gotoxy( 5,33);cprintf("##||-----||-----------------------------------------------------||---------------------------------------------||##");
   gotoxy( 5,34);cprintf("##||  6  ||  MENU                                               ||                                             ||##");Sleep(50);
   gotoxy( 5,35);cprintf("##===============================================================================================================##");
	gotoxy( 5,36);cprintf("###################################################################################################################");
 	gotoxy(45,50);printf("++++++++++++++++++++++++++++++");
   gotoxy(45,51);printf("## PILIH WAHANA  :          ##");
   gotoxy(45,52);printf("++++++++++++++++++++++++++++++");gotoxy(64,51);gets(pilih);Sleep(50);
   x+=1;

   if (strcmp(pilih,"1")==0){                      // int stockbananaboat=11;int stockgladiator=8;int stockUFO=4;int stockpaket=7;int stockperahu=8;
   	clrscr();
      //gotoxy(5,37);printf("x %d  jumorang[x-1] %d stock %d", x, jumorang[x-1], stockbananaboat);getch();
   	if(jumorang[x-1]<1 || jumorang[x-1]>stockbananaboat){ //salah kondisi
      	data();
      }
      clrscr();
      strcpy(wahana[x-1],"Banana Boat");
      hargabananaboat();
   }else if (strcmp(pilih,"2")==0){
   	clrscr();
		if(jumorang[x-1]<1 || jumorang[x-1]>stockgladiator){
      	data();
      }
      clrscr();
   	strcpy(wahana[x-1],"Gladiator");
   	hargagladiator();
   }else if (strcmp(pilih,"3")==0){
   	clrscr();
      if(jumorang[x-1]<1 || jumorang[x-1]>stockUFO){
      	data();
      }
      clrscr();
   	strcpy(wahana[x-1],"UFO");
   	hargaufo();
   }else if (strcmp(pilih,"4")==0){
   	clrscr();
      if(!(jumorang[x-1]!=0 && jumorang[x-1]>=stockpaket && stockpaket<=15)){
      	data();
      }
      clrscr();
   	strcpy(wahana[x-1],"Paket Wahana Lengkap");
   	hargapaket();
   }else if (strcmp(pilih,"5")==0){
   	clrscr();
   	if(!(jumorang[x-1]>0 && jumorang[x-1]<=stockperahu && stockperahu<=15)){
      	data();
      }
      clrscr();
   	strcpy(wahana[x-1],"Perahu");
   	hargaperahu();
   }else if (strcmp(pilih,"6")==0){
   	clrscr();
      menu();
   }else{
   	x--;
   	gotoxy (44,42);textcolor(11);cprintf("pilihan yang anda masukan salah!");
      getch();
      clrscr();
      wahanapantai();
   }

   destinasi();
}
void wahanabodyrafting(){
	frame();
   data();
   char pilih[10];
  	gotoxy( 5,20);cprintf("##===============================================================================================================##");
   gotoxy( 5,21);cprintf("##|| NO  ++          NAMA WAHANA                                ++                  HARGA SEWA                 ||##");Sleep(50);
   gotoxy( 5,22);cprintf("##||_____++_____________________________________________________++_____________________________________________||##");
   gotoxy( 5,23);cprintf("##===============================================================================================================##");
   gotoxy( 5,24);cprintf("##||  1  ||  Pangandaran 2D1N                                   ||              Rp 450.000,00/Pax              ||##");Sleep(50);
   gotoxy( 5,25);cprintf("##||-----||-----------------------------------------------------||---------------------------------------------||##");
	gotoxy( 5,26);cprintf("##||  2  ||  Pangandaran 1Day                                   ||              Rp 200.000,00/Pax              ||##");
   gotoxy( 5,27);cprintf("##||-----||-----------------------------------------------------||---------------------------------------------||##");
   gotoxy( 5,28);cprintf("##||  3  ||  Citumang                                           ||              Rp 85.000,00/Pax               ||##");Sleep(50);
   gotoxy( 5,29);cprintf("##||-----||-----------------------------------------------------||---------------------------------------------||##");
	gotoxy( 5,30);cprintf("##||  4  ||  Ciwayang                                           ||              Rp 85.000,00/Pax               ||##");
   gotoxy( 5,31);cprintf("##||-----||-----------------------------------------------------||---------------------------------------------||##");
   gotoxy( 5,32);cprintf("##||  5  ||  Goa Lanang                                         ||              Rp 90.000,00/Pax               ||##");Sleep(50);
   gotoxy( 5,33);printf("##||-----||-----------------------------------------------------||---------------------------------------------||##");
   gotoxy( 5,34);cprintf("##||  6  ||  Jojogan                                            ||              Rp 250.000,00/Pax              ||##");Sleep(50);
   gotoxy( 5,35);cprintf("##||-----||-----------------------------------------------------||---------------------------------------------||##");
   gotoxy( 5,36);cprintf("##||  7  ||  Santirah                                           ||              Rp 110.000,00/Pax              ||##");Sleep(50);
   gotoxy( 5,37);cprintf("##||-----||-----------------------------------------------------||---------------------------------------------||##");
   gotoxy( 5,38);cprintf("##||  8  ||  MENU                                               ||                                             ||##");Sleep(50);
   gotoxy( 5,39);cprintf("##===============================================================================================================##");
	gotoxy( 5,40);cprintf("###################################################################################################################");
 	gotoxy(45,50);printf("++++++++++++++++++++++++++++++");
   gotoxy(45,51);printf("## PILIH WAHANA  :          ##");
   gotoxy(45,52);printf("++++++++++++++++++++++++++++++");gotoxy(64,51);gets(pilih);Sleep(50);
   x+=1;
   if (strcmp(pilih,"1")==0){
   	clrscr();                                   // int stock2d1n=10;int stock1day=10;int stockcitumang=10;int stockciwayang=10;int stockgoalanang=10;int stockjojogan=10;int stocksantirah=10;
		if(!(jumorang[x-1]>0 && jumorang[x-1]<=stock2d1n)){
      	data();
      }
      strcpy(wahana[x-1],"Pangandaran 2D1N");
   	pangandaran2d1n();
   }else if (strcmp(pilih,"2")==0){
   	clrscr();
      if(!(jumorang[x-1]>0 && jumorang[x-1]<=stock1day)){
      	data();
      }
      strcpy(wahana[x-1],"Pangandaran 1Day");
   	pangandaran1day();
   }else if (strcmp(pilih,"3")==0){
   	clrscr();
      if(!(jumorang[x-1]>0 && jumorang[x-1]<=stockcitumang)){
      	data();
      }
      strcpy(wahana[x-1],"Citumang");
   	hargacitumang();
   }else if (strcmp(pilih,"4")==0){
   	clrscr();
      if(!(jumorang[x-1]>0 && jumorang[x-1]<=stockciwayang)){
      	data();
      }
      strcpy(wahana[x-1],"Ciwayang");
   	hargaciwayang();
   }else if (strcmp(pilih,"5")==0){
   	clrscr();
      if(!(jumorang[x-1]>0 && jumorang[x-1]<=stockgoalanang)){
      	data();
      }
		strcpy(wahana[x-1],"Goa Lanang");
   	hargagoalanang();
   }else if (strcmp(pilih,"6")==0){
   	clrscr();
      if(!(jumorang[x-1]>0 && jumorang[x-1]<=stockjojogan)){
      	data();
      }
   	strcpy(wahana[x-1],"Jojogan");
   	hargajojogan();
   }else if (strcmp(pilih,"7")==0){
   	clrscr();
      if(!(jumorang[x-1]>0 && jumorang[x-1]<=stocksantirah)){
       	data();
      }

   	strcpy(wahana[x-1],"Santirah");
   	hargasantirah();
   }else if (strcmp(pilih,"8")==0){
   	clrscr();
      menu();
   }else{
   	gotoxy (45,42);textcolor(11);cprintf("pilihan yang anda masukan salah!");
      getch();
      clrscr();
      wahanabodyrafting();
   }
   destinasi();
}
void isifaspantai(){
	bingkai();
  	gotoxy(30,13);printf("===========================================================================");
   gotoxy(30,14);printf("||                      ** FASILITAS DI PANTAI **                        ||");Sleep(50);
   gotoxy(30,15);printf("||_______________________________________________________________________||");
   gotoxy(30,16);printf("===========================================================================");
   gotoxy(30,17);printf("||    ___***FASILITAS***__                                               ||");Sleep(50);
   gotoxy(30,18);printf("||                                                                       ||");
	gotoxy(30,19);printf("||   ~ TIKET MASUK PANTAI                                                ||");
   gotoxy(30,20);printf("||   ~ TIKET WAHANA                                                      ||");
   gotoxy(30,21);printf("||   ~ PEMANDU WISATA                                                    ||");Sleep(50);
   gotoxy(30,22);printf("||   ~ DOKUMENTASI                                                       ||");
	gotoxy(30,23);printf("||   ~ SAFETY FACILITY (P3K & ASURANSI)                                  ||");
   gotoxy(30,24);printf("||                                                                       ||");
   gotoxy(30,25);printf("||                      ____+++HARGA+++____                              ||");Sleep(50);
   gotoxy(30,26);printf("||       >> BANANA BOAT              Rp 50.000,00,-/ORG                  ||");
	gotoxy(30,27);printf("||       >> GLADIATOR                Rp 65.000,00,-/ORG                  ||");
   gotoxy(30,28);printf("||       >> UFO                      Rp 75.000,00,-/ORG                  ||");
   gotoxy(30,29);printf("||       >> PAKET LENGKAP            Rp 156.000,00,-/ 7 ORG              ||");Sleep(50);
   gotoxy(30,30);printf("||       >> PAKET LENGKAP            Rp 500.000,00,-/ 7 ORG              ||");Sleep(50);
   gotoxy(30,31);printf("===========================================================================");
   gotoxy(45,51);printf("Press Enter To Back Menu");
   getch();
   clrscr();
   fasilitaspantai();

}
void faspangandaran2d1n(){
	bingkai();
  	gotoxy(30,13);printf("===========================================================================");
   gotoxy(30,14);printf("||                   ** FASILITAS PANGANDARAN 2D1N **                    ||");Sleep(50);
   gotoxy(30,15);printf("||_______________________________________________________________________||");
   gotoxy(30,16);printf("===========================================================================");
   gotoxy(30,17);printf("||    ___***FASILITAS***__                        ___+++HARGA+++___      ||");Sleep(50);
   gotoxy(30,18);printf("||                                                                       ||");
	gotoxy(30,19);printf("||   ~ TIKET MASUK SEMUA DESTINASI                Rp 450.000,00,-/PAX    ||");
   gotoxy(30,20);printf("||   ~ HOTEL                                                             ||");
   gotoxy(30,21);printf("||   ~ BODY RAFTING                                                      ||");Sleep(50);
   gotoxy(30,22);printf("||   ~ PEMANDU WISATA + TIPS                                             ||");
	gotoxy(30,23);printf("||   ~ DOKUMENTASI                                                       ||");
   gotoxy(30,24);printf("||   ~ RETRIBUSI                                                         ||");
   gotoxy(30,25);printf("||   ~ BANNER GRUP                                                       ||");Sleep(50);
   gotoxy(30,26);printf("||   ~ MAKAN 4 KALI(P,S,M,P)                                             ||");
	gotoxy(30,27);printf("||   ~ BUS + SOPIR + BB                                                  ||");
   gotoxy(30,28);printf("||   ~ SAVETY FACILITY (P3K & ASURANSI)                                  ||");
   gotoxy(30,29);printf("||                                                                       ||");Sleep(50);
   gotoxy(30,30);printf("===========================================================================");
   gotoxy(45,51);printf("Press Enter To Back Menu");
   getch();
   clrscr();
   menu();

}
void faspangandaran1day(){
	bingkai();
  	gotoxy(30,13);printf("===========================================================================");
   gotoxy(30,14);printf("||                    ** FASILITAS PANGANDARAN 1DAY **                   ||");Sleep(50);
   gotoxy(30,15);printf("||_______________________________________________________________________||");
   gotoxy(30,16);printf("===========================================================================");
   gotoxy(30,17);printf("||    ___***FASILITAS***__                        ___+++HARGA+++___      ||");Sleep(50);
   gotoxy(30,18);printf("||                                                                       ||");
	gotoxy(30,19);printf("||   ~ TIKET MASUK SEMUA DETINASI                  Rp 200.000,00,-/PAX   ||");
   gotoxy(30,20);printf("||   ~ MAKAN 3 KALI (P,S,M)                                              ||");
   gotoxy(30,21);printf("||   ~ PEMANDU WISATA                                                    ||");Sleep(50);
   gotoxy(30,22);printf("||   ~ BODY RAFTING                                                      ||");
	gotoxy(30,23);printf("||   ~ DOKUMENTASI                                                       ||");
   gotoxy(30,24);printf("||   ~ SAVETY FACILITY (P3K & ASURANSI)                                  ||");
   gotoxy(30,25);printf("||#######################################################################||");Sleep(50);
   gotoxy(30,26);printf("||  +++___CATATAN___+++                                                  ||");
	gotoxy(30,27);printf("||-----------------------------------------------------------------------||");
   gotoxy(30,28);printf("||    BELUM TERMASUK BIAYA TAMBAHAN SAAT MUSIM PEAK SEASON,              ||");
   gotoxy(30,29);printf("||         LIBUR SEKOLAH, LIBUR LEBARAN, LIBUR NATAL, LIBUR TAHUN BARU   ||");Sleep(50);
   gotoxy(30,30);printf("===========================================================================");
   gotoxy(45,51);printf("Press Enter To Back Menu");
   getch();
   clrscr();
   menu();

}
void fascitumang(){
	bingkai();
  	gotoxy(30,13);printf("===========================================================================");
   gotoxy(30,14);printf("||                      ** FASILITAS CITUMANG **                         ||");Sleep(50);
   gotoxy(30,15);printf("||_______________________________________________________________________||");
   gotoxy(30,16);printf("===========================================================================");
   gotoxy(30,17);printf("||    ___***FASILITAS***__                        ___+++HARGA+++___      ||");Sleep(50);
   gotoxy(30,18);printf("||                                                                       ||");
	gotoxy(30,19);printf("||   ~ TIKET MASUK DESTINASI                      Rp 85.000,00,-/PAX     ||");
   gotoxy(30,20);printf("||   ~ MAKAN SIANG                                                       ||");
   gotoxy(30,21);printf("||   ~ PEMANDU WISATA                                                    ||");Sleep(50);
   gotoxy(30,22);printf("||   ~ BODY RAFTING & RIVER TUBING                                       ||");
	gotoxy(30,23);printf("||   ~ SAVETY FACILITY (P3K & ASURANSI)                                  ||");
   gotoxy(30,24);printf("||                                                                       ||");
   gotoxy(30,25);printf("||                                                                       ||");Sleep(50);
   gotoxy(30,26);printf("||                                                                       ||");
	gotoxy(30,27);printf("||                                                                       ||");
   gotoxy(30,28);printf("||                                                                       ||");
   gotoxy(30,29);printf("||                                                                       ||");Sleep(50);
   gotoxy(30,30);printf("===========================================================================");
   gotoxy(45,51);printf("Press Enter To Back Menu");
   getch();
   clrscr();
   menu();

}
void fasciwayang(){
	bingkai();
  	gotoxy(30,13);printf("===========================================================================");
   gotoxy(30,14);printf("||                      ** FASILITAS CIWAYANG **                         ||");Sleep(50);
   gotoxy(30,15);printf("||_______________________________________________________________________||");
   gotoxy(30,16);printf("===========================================================================");
   gotoxy(30,17);printf("||    ___***FASILITAS***__                        ___+++HARGA+++___      ||");Sleep(50);
   gotoxy(30,18);printf("||                                                                       ||");
	gotoxy(30,19);printf("||   ~ BODY RAFTING & RIVER TUBING               Rp 85.000,00,-/PAX      ||");
   gotoxy(30,20);printf("||   ~ BANNER GRUP                                                       ||");
   gotoxy(30,21);printf("||   ~ MAKAN SIANG                                                       ||");Sleep(50);
   gotoxy(30,22);printf("||   ~ PEMANDU WISATA                                                    ||");
	gotoxy(30,23);printf("||   ~ SAVETY FACILITY (P3K & ASURANSI)                                  ||");
   gotoxy(30,24);printf("||                                                                       ||");
   gotoxy(30,25);printf("||                                                                       ||");Sleep(50);
   gotoxy(30,26);printf("||#######################################################################||");
	gotoxy(30,27);printf("||  +++___CATATAN___+++                                                  ||");
   gotoxy(30,28);printf("||-----------------------------------------------------------------------||");
   gotoxy(30,29);printf("||  +BELUM TERMASUK TRANSPORTASI DARI & KE TEMPAT TUJUAN                 ||");Sleep(50);
   gotoxy(30,30);printf("===========================================================================");
   gotoxy(45,51);printf("Press Enter To Back Menu");
   getch();
   clrscr();
   menu();

}
void fasgoalanang(){
	bingkai();
  	gotoxy(30,13);printf("===========================================================================");
   gotoxy(30,14);printf("||                      ** FASILITAS GOA LANANG **                       ||");Sleep(50);
   gotoxy(30,15);printf("||_______________________________________________________________________||");
   gotoxy(30,16);printf("===========================================================================");
   gotoxy(30,17);printf("||    ___***FASILITAS***__                        ___+++HARGA+++___      ||");Sleep(50);
   gotoxy(30,18);printf("||                                                                       ||");
	gotoxy(30,19);printf("||   ~ TIKET MASUK WISATA                        Rp 90.000,00,-/PAX      ||");
   gotoxy(30,20);printf("||   ~ BODY RAFTING & RIVER TUBING                                       ||");
   gotoxy(30,21);printf("||   ~ BANNER GRUP                                                       ||");Sleep(50);
   gotoxy(30,22);printf("||   ~ MAKAN SIANG                                                       ||");
	gotoxy(30,23);printf("||   ~ PEMANDU WISATA                                                    ||");
   gotoxy(30,24);printf("||   ~ DOKUMENTASI                                                       ||");
   gotoxy(30,25);printf("||   ~ SAVETY FACILITY (P3K & ASURANSI)                                  ||");Sleep(50);
   gotoxy(30,26);printf("||                                                                       ||");
	gotoxy(30,27);printf("||                                                                       ||");
   gotoxy(30,28);printf("||                                                                       ||");
   gotoxy(30,29);printf("||                                                                       ||");Sleep(50);
   gotoxy(30,30);printf("===========================================================================");
   gotoxy(45,51);printf("Press Enter To Back Menu");
   getch();
   clrscr();
   menu();

}
void fasjojogan(){
	bingkai();
  	gotoxy(30,13);printf("===========================================================================");
   gotoxy(30,14);printf("||                      ** FASILITAS JOJOGAN **                          ||");Sleep(50);
   gotoxy(30,15);printf("||_______________________________________________________________________||");
   gotoxy(30,16);printf("===========================================================================");
   gotoxy(30,17);printf("||    ___***FASILITAS***__                        ___+++HARGA+++___      ||");Sleep(50);
   gotoxy(30,18);printf("||                                                                       ||");
	gotoxy(30,19);printf("||   ~ TIKET MASUK DESTINASI WISATA              Rp 250.000,00,-/PAX     ||");
   gotoxy(30,20);printf("||   ~ BODY RAFTING & RIVER TUBING                                       ||");
   gotoxy(30,21);printf("||   ~ MAKAN 3 KALI (P,S,M)                                              ||");Sleep(50);
   gotoxy(30,22);printf("||   ~ BANNER GROUP                                                      ||");
	gotoxy(30,23);printf("||   ~ PEMANDU WISATA                                                    ||");
   gotoxy(30,24);printf("||   ~ DOKUMENTASI                                                       ||");
   gotoxy(30,25);printf("||   ~ SAVETY FACILITY (P3K & ASURANSI)                                  ||");Sleep(50);
   gotoxy(30,26);printf("||                                                                       ||");
	gotoxy(30,27);printf("||                                                                       ||");
   gotoxy(30,28);printf("||                                                                       ||");
   gotoxy(30,29);printf("||                                                                       ||");Sleep(50);
   gotoxy(30,30);printf("===========================================================================");
   gotoxy(45,51);printf("Press Enter To Back Menu");
   getch();
   clrscr();
   menu();

}
void fassantirah(){
	bingkai();
  	gotoxy(30,13);printf("===========================================================================");
   gotoxy(30,14);printf("||                      ** FASILITAS SANTIRAH **                         ||");Sleep(50);
   gotoxy(30,15);printf("||_______________________________________________________________________||");
   gotoxy(30,16);printf("===========================================================================");
   gotoxy(30,17);printf("||    ___***FASILITAS***__                        ___+++HARGA+++___      ||");Sleep(50);
   gotoxy(30,18);printf("||                                                                       ||");
	gotoxy(30,19);printf("||   ~ TIKET MASUK SANTIRAH                      Rp 110.000,00,-/PAX     ||");
   gotoxy(30,20);printf("||   ~ PEMANDU WISATA                                                    ||");
   gotoxy(30,21);printf("||   ~ DRY BAG                                                           ||");Sleep(50);
   gotoxy(30,22);printf("||   ~ MAKAN SIANG + KELAPA MUDA                                         ||");
	gotoxy(30,23);printf("||   ~ BODY RAFTING & RIVER TUBING                                       ||");
   gotoxy(30,24);printf("||   ~ SAVETY FACILITY (P3K & ASURANSI)                                  ||");
   gotoxy(30,25);printf("||   ~ DOKUMENTASI                                                       ||");Sleep(50);
   gotoxy(30,26);printf("||                                                                       ||");
	gotoxy(30,27);printf("||                                                                       ||");
   gotoxy(30,28);printf("||                                                                       ||");
   gotoxy(30,29);printf("||                                                                       ||");Sleep(50);
   gotoxy(30,30);printf("===========================================================================");
   gotoxy(45,51);printf("Press Enter To Back Menu");
   getch();
   clrscr();
   menu();

}
void transaksi(){
	gotoxy(27, 4);printf("===========================================================================");
   gotoxy(27, 5);printf("||                          TRANSAKSI PEMBAYARAN                         ||");Sleep(50);
   gotoxy(27, 6);printf("||_______________________________________________________________________||");
   gotoxy(27, 7);printf("===========================================================================");
   gotoxy(27,15);printf("===========================================================================");
   gotoxy(27,16);printf("||   +TOTAL YANG HARUS DI BAYAR  :                                       ||");Sleep(50);
   gotoxy(27,17);printf("||                                                                       ||");
	gotoxy(27,18);printf("||   +MASUKKAN UANG ANDA         :                                       ||");
   gotoxy(27,19);printf("||                                                                       ||");
   gotoxy(27,20);printf("||   +KEMBALIAN ANDA             :                                       ||");Sleep(50);
   gotoxy(27,21);printf("||                                                                       ||");
	gotoxy(27,22);printf("||                                                                       ||");
   gotoxy(27,23);printf("||                                                                       ||");
   gotoxy(27,24);printf("||                                                                       ||");Sleep(50);
   gotoxy(27,25);printf("===========================================================================");
   }
void hargabananaboat(){
   bingkai();
   transaksi();
	char harga[50];
   textcolor(11);
   gotoxy(66,16);cprintf("%d",jumorang[x-1]*50000);
   gotoxy(66,18);gets(harga);
   if(atoi(harga)<jumorang[x-1]*50000){
   gotoxy(45,23);cprintf("UANG ANDA KURANG!!");Sleep(1000);
   hargabananaboat();
   }
   jumpendapatan[y]=jumorang[x-1]*50000;
   saldo+=jumpendapatan[y];y++;
   gotoxy(66,20);cprintf("%d",atoi(harga)-(jumorang[x-1]*50000));
   gotoxy(45,23);cprintf("PRESS ENTER FOR BACK TO MENU");
   getch();
   clrscr();
   menu();

}
void hargagladiator(){
   bingkai();
	transaksi();
	char harga[50];
   textcolor(11);
	gotoxy(66,16);cprintf("%d",jumorang[x-1]*65000);
   gotoxy(66,18);gets(harga);
   if(atoi(harga)<jumorang[x-1]*65000){
   gotoxy(45,23);cprintf("UANG ANDA KURANG!!");Sleep(1000);
   hargagladiator();
   }
   jumpendapatan[y]=jumorang[x-1]*65000;
   saldo+=jumpendapatan[y];y++;
   gotoxy(66,20);cprintf("%d",atoi(harga)-(jumorang[x-1]*65000));
   gotoxy(45,23);cprintf("PRESS ENTER FOR BACK TO MENU");
   getch();
   clrscr();
   menu();
}
void hargaufo(){
   bingkai();
   transaksi();
	char harga[50];
   textcolor(11);
	gotoxy(66,16);cprintf("%d",jumorang[x-1]*75000);
   gotoxy(66,18);gets(harga);
   if(atoi(harga)<jumorang[x-1]*75000){
   gotoxy(45,23);cprintf("UANG ANDA KURANG!!");Sleep(1000);
   hargaufo();
   }
   jumpendapatan[y]=jumorang[x-1]*75000;
   saldo+=jumpendapatan[y];y++;
   gotoxy(66,20);cprintf("d",atoi(harga)-(jumorang[x-1]*75000));
   gotoxy(45,23);cprintf("PRESS ENTER FOR BACK TO MENU");
   getch();
   clrscr();
	menu();
}
void hargapaket(){
	bingkai();
   transaksi();
	char harga[50];
   textcolor(11);
	gotoxy(66,16);cprintf("%d",jumorang[x-1]*156000);
   gotoxy(66,18);gets(harga);
   if(atoi(harga)<jumorang[x-1]*156000){
   gotoxy(45,23);cprintf("UANG ANDA KURANG!!");Sleep(1000);
   hargapaket();
   }
   jumpendapatan[y]=jumorang[x-1]*156000;
   saldo+=jumpendapatan[y];y++;
   gotoxy(66,20);cprintf("%d",atoi(harga)-(jumorang[x-1]*156000));
   gotoxy(45,23);cprintf("PRESS ENTER FOR BACK TO MENU");
   getch();
   clrscr();
	menu();
}
void hargaperahu(){
	bingkai();
   transaksi();
	char harga[50];
   textcolor(11);
	gotoxy(66,16);cprintf("%d",jumorang[x-1]*500000);
   gotoxy(66,18);gets(harga);
   if(atoi(harga)<jumorang[x-1]*500000){
   gotoxy(45,23);cprintf("UANG ANDA KURANG!!");Sleep(1000);
   hargaperahu();
   }
   jumpendapatan[y]=jumorang[x-1]*500000;
   saldo+=jumpendapatan[y];y++;
   gotoxy(66,20);cprintf("%d",atoi(harga)-(jumorang[x-1]*500000));
   gotoxy(45,23);cprintf("PRESS ENTER FOR BACK TO MENU");
   getch();
   clrscr();
   menu();
}
void pangandaran2d1n(){
	bingkai();
   transaksi();
	char harga[50];
   textcolor(11);
   gotoxy(66,16);cprintf("%d",jumorang[x-1]*450000);
   gotoxy(66,18);gets(harga);
   if(atoi(harga)<jumorang[x-1]*450000){
   gotoxy(45,23);cprintf("UANG ANDA KURANG!!");Sleep(1000);
   pangandaran2d1n();
   }
   jumpendapatan[y]=jumorang[x-1]*450000;
   saldo+=jumpendapatan[y];y++;
   gotoxy(66,20);cprintf("%d",atoi(harga)-(jumorang[x-1]*450000));
   gotoxy(45,23);cprintf("PRESS ENTER FOR BACK TO MENU");
   getch();
   clrscr();
   menu();
}
void pangandaran1day(){
	bingkai();
   transaksi();
	char harga[50];
   textcolor(11);
   gotoxy(66,16);cprintf("%d",jumorang[x-1]*200000);
   gotoxy(66,18);gets(harga);
   if(atoi(harga)<jumorang[x-1]*200000){
   gotoxy(45,23);cprintf("UANG ANDA KURANG!!");Sleep(1000);
   pangandaran1day();
   }
   jumpendapatan[y]=jumorang[x-1]*200000;
   saldo+=jumpendapatan[y];y++;
   gotoxy(66,20);cprintf("%d",atoi(harga)-(jumorang[x-1]*200000));
   gotoxy(45,23);cprintf("PRESS ENTER FOR BACK TO MENU");
   getch();
   clrscr();
	menu();
}
void hargacitumang(){
   bingkai();
   transaksi();
	char harga[50];
   textcolor(11);
   gotoxy(66,16);cprintf("%d",jumorang[x-1]*85000);
   gotoxy(66,18);gets(harga);
   if(atoi(harga)<jumorang[x-1]*85000){
   gotoxy(45,23);cprintf("UANG ANDA KURANG!!");Sleep(1000);
   hargacitumang();
   }
   jumpendapatan[y]=jumorang[x-1]*85000;
   saldo+=jumpendapatan[y];y++;
   gotoxy(66,20);cprintf("%d",atoi(harga)-(jumorang[x-1]*85000));
   gotoxy(45,23);cprintf("PRESS ENTER FOR BACK TO MENU");
   getch();
   clrscr();
   menu();
}
void hargasantirah(){
	bingkai();
   transaksi();
	char harga[50];
   textcolor(11);
   gotoxy(66,16);cprintf("%d",jumorang[x-1]*110000);
   gotoxy(66,18);gets(harga);
   if(atoi(harga)<jumorang[x-1]*110000){
   gotoxy(45,23);cprintf("UANG ANDA KURANG!!");Sleep(1000);
   hargasantirah();
   }
   jumpendapatan[y]=jumorang[x-1]*110000;
   saldo+=jumpendapatan[y];y++;
   gotoxy(66,20);cprintf("%d",atoi(harga)-(jumorang[x-1]*110000));
   gotoxy(45,23);cprintf("PRESS ENTER FOR BACK TO MENU");
   getch();
   clrscr();
   menu();
}
void hargagoalanang(){
   bingkai();
   transaksi();
	char harga[50];
   textcolor(11);
   gotoxy(66,16);cprintf("%d",jumorang[x-1]*90000);
   gotoxy(66,18);gets(harga);
   if(atoi(harga)<jumorang[x-1]*90000){
   gotoxy(45,23);cprintf("UANG ANDA KURANG!!");Sleep(1000);
   hargagoalanang();
   }
   jumpendapatan[y]=jumorang[x-1]*90000;
   saldo+=jumpendapatan[y];y++;
   gotoxy(66,20);cprintf("%d",atoi(harga)-(jumorang[x-1]*90000));
   gotoxy(45,23);cprintf("PRESS ENTER FOR BACK TO MENU");
   getch();
   clrscr();
   menu();
}
void hargaciwayang(){
	bingkai();
   transaksi();
	char harga[50];
   textcolor(11);
   gotoxy(66,16);cprintf("%d",jumorang[x-1]*85000);
   gotoxy(66,18);gets(harga);
   if(atoi(harga)<jumorang[x-1]*85000){
   gotoxy(45,23);cprintf("UANG ANDA KURANG!!");Sleep(1000);
   hargaciwayang();
   }
   jumpendapatan[y]=jumorang[x-1]*85000;
   saldo+=jumpendapatan[y];y++;
   gotoxy(66,20);cprintf("%d",atoi(harga)-(jumorang[x-1]*85000));
   gotoxy(45,23);cprintf("PRESS ENTER FOR BACK TO MENU");
   getch();
   clrscr();
   menu();
}
void hargajojogan(){
	bingkai();
   transaksi();
	char harga[50];
   textcolor(11);
   gotoxy(66,16);cprintf("%d",jumorang[x-1]*250000);
   gotoxy(66,18);gets(harga);
   if(atoi(harga)<jumorang[x-1]*250000){
   gotoxy(45,23);cprintf("UANG ANDA KURANG!!");Sleep(1000);
   hargajojogan();
   }
   jumpendapatan[y]=jumorang[x-1]*250000;
   saldo+=jumpendapatan[y];y++;
   gotoxy(66,20);cprintf("%d",atoi(harga)-(jumorang[x-1]*250000));
   gotoxy(45,23);cprintf("PRESS ENTER FOR BACK TO MENU");
   getch();
   clrscr();
   menu();

}


main(){
   logIn();

getch();
}
