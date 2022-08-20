////////////////////////////////////////////////////////////////////////////////////////////////////
//														PROJEK INI DIBUAT                                       //
//                            	  GUNA MEMENUHI UAS PELATIHAN BAHASA C                           //
//                                 SREEN BUFFER SIZE---> WIDTH  = 160                             //
//                                                       HEIGHT = 45                              //
//                                 WINDOW SIZE----> WIDHT  = 160                                  //
//																	 HEIGHT = 45                                   //
//                                                                  DIBUAT OLEH = WINNA DWI WALUYO//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<windows.h>

///////////////////////////prototype///////////////////////////////////////////
void keluar();
void hapus();
void masuk_pilih();
void loading();
void kotak();
void awal();      		void nama(); 		      void jw1();          void tny1();     void soal1();
void tanyaLogin();     	void jenis();  		   void jw2();          void tny2();     void soal2();
void login();          	void umur();       		void jw3();          void tny3();     void soal3();
void bingkai();        	void username();     	void jw4();          void tny4();     void soal4();
void daftar();         	void password();     	void jw5();          void tny5();     void soal5();
void print();	        	void tanya1();				void jw6();          void tny6();     void soal6();
void masuk();          	void tanya2();				void jw7();          void tny7();     void soal7();
void pertanyaan();     	void tanya3();				void jw8();          void tny8();     void soal8();
void menu();                                    void jw9();          void tny9();     void soal9();
                                                void jw10();         void tny10();    void soal10();

void materi();          void contoh();              void latihan();
void mean();            void conmean();             void latmean();
void median();          void conmedian();           void latmedian();
void modus();           void conmodus();            void latmodus();
void quartil();         void conquartil();          void latquartil();
void desil();           void condesil();            void quiz();
void persentil();       void conpersentil();

//----------------------------------------------------------------------------//
//_________________________________VALIDASI___________________________________//
//____________________________________________________________________________//
                                                                              //
   int valangka(char angka[30]);                                              //
   int valnama(char huruf[15]);                                               //
   int valjenis(char jns);                                                    //
   int valumur(char umr[15]);                                                 //
   int valpass(char psw[8]);                                                  //
//                                                                            //
//----------------------------------------------------------------------------//
//______________________________VARIABEL GLOBAL_______________________________//
//____________________________________________________________________________//

	int poin=0;      char a[100];       char user[100],nama2[100];
   int u=0;         char pilih;        char pass[100],pass2[100];
   int p=0;         char jwb;
   int q=0;         char tanya;
   int index=1;     char Umur[100];
   int val;         char Jenis, jprint[2];
                    char Nama[15];
//----------------------------------------------------------------------------------------------------------------------------------------------------------------//
void awal(){
	bingkai();
   for(int x=1;x<=30;x++){
   	textcolor(x);
   		gotoxy(22,8); cprintf( " ***********   ************      *       ************   **  ************  ************  **  **   ***         *      ");
   		gotoxy(22,9); cprintf( " ***********   ************     ***      ************   **  ************  ************  **  **  **          ***     ");
   		gotoxy(22,10);cprintf( " **                **          *****          **        **  **                 **       **  ** **          *****    ");
   		gotoxy(22,11);cprintf( " ***********       **         *** ***         **        **  ************       **       **  ****          *** ***    ");
   		gotoxy(22,12);cprintf( " ***********       **        ***   ***        **        **  ************       **       **  ****         ***   ***   ");
   		gotoxy(22,13);cprintf( "          **       **       ***     ***       **        **            **       **       **  ** **       ***     ***  ");
   		gotoxy(22,14);cprintf( " ***********       **      *************      **        **  ************       **       **  **  **     ************* ");
   		gotoxy(22,15);cprintf( " ***********       **     ***************     **        **  ************       **       **  **   ***  ***************");Sleep(10);
	}

   for(int x=45;x<=70;x++){
      textcolor(13);
   		gotoxy(x,22);cprintf("%c",219);
      	gotoxy(x,26);cprintf("%c",219);
     		gotoxy(x+55,22);cprintf("%c",219);
         gotoxy(x+55,26);cprintf("%c",219);
      	gotoxy(x+28,29);cprintf("%c",219);
      	gotoxy(x+28,33);cprintf("%c",219);Sleep(10);
   }

   for(int x=22;x<=26;x++){
   	textcolor(13);
   		gotoxy(45,x);cprintf("%c",219);
      	gotoxy(70,x);cprintf("%c",219);
      	gotoxy(100,x);cprintf("%c",219);
   		gotoxy(125,x);cprintf("%c",219);
      	gotoxy(73,x+7);cprintf("%c",219);
      	gotoxy(98,x+7);cprintf("%c",219);Sleep(10);
   }

   	gotoxy(46,24);printf("1. Buat Akun ");
   	gotoxy(102,24);printf("2. Log-in ");
   a:
   	gotoxy(75,31);printf("Masukan pilihan = ");
   	pilih=getche();
   	gotoxy(93,31);Sleep(150);
   		if(pilih=='1'){
      		clrscr();
   			daftar();
         }else if(pilih=='2'){
   			clrscr();
         	masuk();
   		}else{
     			gotoxy(92,31);printf("  ");
         	textcolor(12);gotoxy(80,35);cprintf(" INPUTAN INVALID");Sleep(500);
         	gotoxy(80,35);printf("                ");
         	goto a;
      	}
}
/////////////////////////////////////////////////////////////////////// /////////
void loading(){
	textcolor(14);gotoxy(73,25);cprintf("Memuat");
	for(int a=2;a<=100;a+=2){
      gotoxy(80,25);printf("%d %",a);Sleep(80);
   }
}
////////////////////////////////////////////////////////////////////////////////
void bingkai(){
	for(int x=20;x<=140;x++){
   textcolor(41);
   	gotoxy(x,5);cprintf("%c",219);
      gotoxy(x,37);cprintf("%c",219);
      textcolor(12);gotoxy(x,3);cprintf("%c",219);
      textcolor(12);gotoxy(x,40);cprintf("%c",219);Sleep(10);
   }
   for(int x=5;x<=37;x++){
   textcolor(41);
   	gotoxy(20,x);cprintf("%c",219);
      gotoxy(140,x);cprintf("%c",219);
      textcolor(12);gotoxy(17,x);cprintf("%c",219);
      textcolor(12);gotoxy(143,x);cprintf("%c",219); Sleep(10);
   }

   textcolor(14);gotoxy(100,39);cprintf("CREATE BY WINNA DWI WALUYO");
}
///////////////////////////////////////////////////////////////////////////////
void daftar(){
   bingkai();
   	for(int x=1;x<=26;x++){
   		textcolor(x);
   		gotoxy(35,7); cprintf("******   **     **     *    ********        *      **   **   **     **   ***    ** ");
   		gotoxy(35,8); cprintf("**   **  **     **    ***   ********       ***     ** **     **     **  *****   ** ");
   		gotoxy(35,9); cprintf("*****    **     **   ** **     **         ** **    ****      **     **  **  **  ** ");
     		gotoxy(35,10);cprintf("*****    **     **  **   **    **        **   **   ****      **     **  **   ** ** ");
   		gotoxy(35,11);cprintf("**   **  ********* *********   **       *********  ** **     *********  **    **** ");
   		gotoxy(35,12);cprintf("******    *******  *********   **       *********  **   **    *******   **     **  ");
   		gotoxy(35,13);cprintf("=====================================================================================");Sleep(10);
   	}

   	for(int x=16;x<=31;x++){
   		textcolor(14);
   		gotoxy(30,x);cprintf("%c",219);
      	gotoxy(60,x);cprintf("%c",219);
      	gotoxy(100,x);cprintf("%c",219);
      	gotoxy(130,x);cprintf("%c",219);
      }

   	for(int x=30;x<=60;x++){
   		textcolor(14);
   		gotoxy(x,16);cprintf("%c",219);
      	gotoxy(x,19);cprintf("%c",219);
      	gotoxy(x,22);cprintf("%c",219);
      	gotoxy(x,25);cprintf("%c",219);
      	gotoxy(x,28);cprintf("%c",219);
      	gotoxy(x,31);cprintf("%c",219);
      	gotoxy(x+70,16);cprintf("%c",219);
      	gotoxy(x+70,19);cprintf("%c",219);
      	gotoxy(x+70,22);cprintf("%c",219);
      	gotoxy(x+70,25);cprintf("%c",219);
      	gotoxy(x+70,28);cprintf("%c",219);
      	gotoxy(x+70,31);cprintf("%c",219);
      }

   		gotoxy(32,18);printf("Nama	  : ");
   		gotoxy(32,21);printf("Jenis L/P  : ");
   		gotoxy(32,24);printf("Umur	  : ");
   		gotoxy(32,27);printf("Username	  : ");
   		gotoxy(32,30);printf("Password	  : ");

   	nama();
		jenis();
   	umur();
   	username();
   	password();
   	loading();
   	print();
   	pertanyaan();
}
////////////////////////////////////////////////////////////////////////////////
void pertanyaan(){
   	textcolor(14);gotoxy(50,33);cprintf("Silahkan Tekan enter Untuk Menuju Menu Awal Kembali Untuk Log-in");
   	pilih=getch();
      	gotoxy(63,34);Sleep(150);
   			if(pilih==13){
   				clrscr();
   				awal();
   			}else{
      			gotoxy(80,34);printf("   ");
         		textcolor(12);gotoxy(70,35);cprintf("INPUTAN INVALID");Sleep(150);
         		gotoxy(70,35);printf("               ");
         		pertanyaan();
   			}
}
////////////////////////////////////////////////////////////////////////////////
void nama(){
   do{
   	gotoxy(44,18);printf("               ");
   	gotoxy(44,18);gets(Nama);
      val=valnama(Nama);
      	if(val!=0){
      		textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa Huruf dan (')");Sleep(500);
      		gotoxy(60,35);printf("                            ");Sleep(500);
      	}else if(strlen(Nama)==0){
      		textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa Huruf dan (')");Sleep(500);
      		gotoxy(60,35);printf("                            ");Sleep(500);
         	nama();
      	}
   }while(valnama(Nama)!=0);
}
////////////////////////////////////////////////////////////////////////////////
void jenis(){
   do{
   	gotoxy(44,21);printf("               ");
   	gotoxy(44,21);Jenis=getche();
      val=valjenis(Jenis);
      	if(val!=0){
      		textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa L/P/l/p");Sleep(200);
      		gotoxy(60,35);printf("                      ");Sleep(200);
      	}
   }while(val!=0);
   jprint[0]=Jenis;
}

////////////////////////////////////////////////////////////////////////////////
void umur(){
int a;
   do{
   	gotoxy(44,24);printf("       ");
   	gotoxy(44,24);gets(Umur);
      val=valumur(Umur);
       a=atoi(Umur);
      	if(val!=0 ){
      		textcolor(12);gotoxy(60,35);cprintf("Inputan berupa Angka ");Sleep(1000);
      		gotoxy(60,35);printf("                      ");Sleep(1000);
      	}
   }while(valumur(Umur)!=0);

}
////////////////////////////////////////////////////////////////////////////////
void username(){
   do{
   	gotoxy(44,27);printf("               ");
   	gotoxy(44,27);gets(user);
      val=valnama(user);
      	if(val!=0){
      		textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa Huruf dan (')");Sleep(1000);
      		gotoxy(60,35);printf("                            ");Sleep(1000);
      	}else if(strlen(user)==0){
      		textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa Huruf dan (')");Sleep(1000);
      		gotoxy(60,35);printf("                            ");Sleep(1000);
         	username();
      	}
   }while(valnama(user)!=0);
}
////////////////////////////////////////////////////////////////////////////////
void password(){
   do{
   	gotoxy(44,30);printf("               ");
   	gotoxy(44,30);gets(pass);
      val=valpass(pass);
      	if(val!=0){
      		textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa Angka, min 4 ");Sleep(750);
      		gotoxy(60,35);printf("                            ");Sleep(750);
      	}
   }while(valpass(pass)!=0);
}
////////////////////////////////////////////////////////////////////////////////
void print(){
   gotoxy(102,18);printf("Nama	: %s",Nama);
   gotoxy(102,21);printf("Jenis L/P   : %s",jprint);
   gotoxy(102,24);printf("Umur	: %s",Umur);
   gotoxy(102,27);printf("Username	: %s",user);
   gotoxy(102,30);printf("Password	: %s",pass);
}
////////////////////////////////////////////////////////////////////////////////
void masuk(){
   bingkai();
   	for(int x=0;x<=30;x++){
   		textcolor(x);
   			gotoxy(50,7);  cprintf(" **         ******    *******          **   ***   ** ");
   			gotoxy(50,8);  cprintf(" **        ********  *******           **  ****   ** ");
   			gotoxy(50,9);  cprintf(" **        **    **  **        ******  **  ** **  ** ");
   			gotoxy(50,10); cprintf(" **        **    **  ********  ******  **  **  ** ** ");
   			gotoxy(50,11); cprintf(" ********  ********  **     **         **  **   **** ");
   			gotoxy(50,12); cprintf(" ********   ******   ********          **  **    **  ");
      		gotoxy(50,13); cprintf("====================================================== ");Sleep(25);
      }

   	for(int x=55;x<100;x++){
   		textcolor(10);
   			gotoxy(x,18);cprintf("%c",219);
      		gotoxy(x,25);cprintf("%c",219);
      		gotoxy(x,32);cprintf("%c",219); Sleep(10);
   	}

   	for(int x=18;x<=32;x++){
   		textcolor(18);
   			gotoxy(55,x);cprintf("%c",219);
      		gotoxy(100,x);cprintf("%c",219);
      		gotoxy(60,x);cprintf("%c",219);
      		gotoxy(95,x);cprintf("%c",219); Sleep(10);
   	}
   tanyaLogin();
}
////////////////////////////////////////////////////////////////////////////////
void tanyaLogin(){
	gotoxy(60,15);printf("Apakah Anda Sudah Memiliki Akun?");
	gotoxy(55,16);printf("Jika Sudah Tekan Enter,Jika Belum Tekan 0");
		pilih=getch();
   		gotoxy(100,15);Sleep(150);
			if(pilih==13 ){
				login();
			}else if(pilih=='0'){
				clrscr();
   			awal();
			}else{
      		gotoxy(100,15);printf("  ");
         	textcolor(12);gotoxy(100,17);cprintf("INPUTAN INVALID");Sleep(300);
         	gotoxy(100,17);printf("               ");
      		tanyaLogin();
      	}
}
////////////////////////////////////////////////////////////////////////////////
void login(){
		//username
   	do{
   		gotoxy(62,22);printf("                                 ");
   		textcolor(14);gotoxy(62,22);cprintf("Masukan username= ");gets(nama2);
      	val=valnama(nama2);
         	if(val!=0){
      			textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa Huruf dan (')");Sleep(750);
      			gotoxy(60,35);printf("                                    ");Sleep(750);
      		}else if(strlen(Nama)==0){
      			textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa Huruf dan (')");Sleep(500);
      			gotoxy(60,35);printf("                            ");Sleep(500);
         		nama();
      		}
   	}while(valnama(nama2)!=0);

      //password
   	do{
   		gotoxy(62,29);printf("                      ");
   		textcolor(14);gotoxy(62,29);cprintf("Masukan password= ");gets(pass2);
      	val=valpass(pass2);
         	if(val!=0){
      			textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa Angka min 4");Sleep(750);
      			gotoxy(60,35);printf("                                      ");Sleep(750);
      		}
   	}while(valpass(pass2)!=0);

       //login
   		if(strcmp(nama2,user)==0 && strcmp(pass2,pass)==0){
   			clrscr();
   			menu();
   		}else{
      		gotoxy(70,35);printf("Anda Belum Memiliki Akun ");Sleep(500);
      		gotoxy(62,36);printf("Atau Anda Salah memasukan akun Anda");Sleep(500);
            gotoxy(62,35);printf("                             ");Sleep(500);
            gotoxy(62,36);printf("                                    ");Sleep(500);
            gotoxy(62,29);printf("                      ");
            gotoxy(60,35);printf("                                     ");Sleep(750);
            	if(user!=nama2 || pass!=pass2){
         			tanyaLogin();
         		}
            login();
   		}
}
////////////////////////////////////////////////////////////////////////////////
void keluar(){
	bingkai();
   	for(int x=1;x<=30;x++){
   		textcolor(x);
				gotoxy(30+x,8); cprintf("   **********   ********   ********  **  ****     ***         *            ");
				gotoxy(30+x,9); cprintf("   **********   ********   ********  **  ****    ****        ***           ");
				gotoxy(30+x,10);cprintf("       **       **         **    **  **  ** **  ** **       *****           ");
				gotoxy(30+x,11);cprintf("       **       ********   **   **   **  **  ****  **      *** ***         ");
				gotoxy(30+x,12);cprintf("       **       ********   ******    **  **   **   **     ***   ***        ");
				gotoxy(30+x,13);cprintf("       **       **         **   **   **  **        **    ***     ***       ");
				gotoxy(30+x,14);cprintf("       **       ********   **    **  **  **        **   *************      ");
				gotoxy(30+x,15);cprintf("       **       ********   **     ** **  **        **  ***************     ");Sleep(75);
	}

   for(int x=1;x<=30;x++){
   	textcolor(x);
   		gotoxy(85-x,18);cprintf( " **    ***         *        **********  **   **    **  ");
      	gotoxy(85-x,19);cprintf( " **   **          ***       **********  **   **    **  ");
      	gotoxy(85-x,20);cprintf( " **  **          *****      **          **   **    **  ");
      	gotoxy(85-x,21);cprintf( " ****           *** ***     **********  **   ********  ");
      	gotoxy(85-x,22);cprintf( " ****          ***   ***    **********  **   ********  ");
      	gotoxy(85-x,23);cprintf( " **  **       ***     ***           **  **   **    **  ");
      	gotoxy(85-x,24);cprintf( " **   **     *************  **********  **   **    **  ");
      	gotoxy(85-x,25);cprintf( " **    ***  *************** **********  **   **    **  ");Sleep(75);
   }

   for(int a=5;a>=0;a--){
   	textcolor(12);gotoxy(80,30);cprintf("%d ",a);Sleep(1000);
   }
   	exit(0);
}
////////////////////////////////////////////////////////////////////////////////
void menu(){
	bingkai();
   	for(int x=0;x<20;x++){
   		textcolor(12);
   			gotoxy(35,7); cprintf(" mmmm       mmm       mmmmmmmmmmm       mmmmmmmmm  mmmm     mmmm    mmmm");
   			gotoxy(35,8); cprintf(" mmmm      mmmm       mmmmmmmmmmm       mmmmmmmmm  mmmm     mmmm    mmmm");
   			gotoxy(35,9); cprintf(" mmmmm    mmmmm       mmmm              mmmm  mmm  mmmm     mmmm    mmmm");
   			gotoxy(35,10);cprintf(" mmmmmm  mmmmmm       mmmmmmmmmm        mmmm  mmm  mmmm     mmmm    mmmm");
   			gotoxy(35,11);cprintf(" mmmmmm  mmmmmm       mmmmmmmmmm        mmmm  mmm  mmmm     mmmm    mmmm");
   			gotoxy(35,12);cprintf(" mmm   mm   mmm       mmmm              mmmm  mmm  mmmm     mmmm    mmmm");
   			gotoxy(35,13);cprintf(" mmm        mmm       mmmmmmmmmmm       mmmm  mmmmmmmmm     mmmmmmmmmmmm");
				gotoxy(35,14);cprintf(" mmm        mmm       mmmmmmmmmmm       mmmm  mmmmmmmmm     mmmmmmmmmmmm");
   			gotoxy(33,15);cprintf("=============================================================================");Sleep(25);
   	}

   	for(int x=30;x<=130;x++){
   		textcolor(6);
      		gotoxy(x,17);cprintf("%c",219);
      		gotoxy(x,21);cprintf("%c",219);Sleep(10);
   	}

   	for(int x=17;x<=21;x++){
   		gotoxy(30,x);cprintf("%c",219);
      	gotoxy(60,x);cprintf("%c",219);
      	gotoxy(95,x);cprintf("%c",219);
      	gotoxy(130,x);cprintf("%c",219);Sleep(10);
   	}

   	for(int x=50;x<=100;x++){
      	gotoxy(x,25);cprintf("%c",219);
      	gotoxy(x,29);cprintf("%c",219);Sleep(10);
   	}

   	for(int x=25;x<=29;x++){
   		gotoxy(50,x);cprintf("%c",219);
      	gotoxy(75,x);cprintf("%c",219);
      	gotoxy(100,x);cprintf("%c",219);Sleep(10);
   	}

   	for(int x=60;x<=90;x++){
   		gotoxy(x,32);cprintf("%c",219);
      	gotoxy(x,35);cprintf("%c",219);Sleep(10);
   	}

   	for(int x=32;x<=35;x++){
      	gotoxy(60,x);cprintf("%c",219);
      	gotoxy(90,x);cprintf("%c",219);Sleep(10);
      }

   gotoxy(35,19);printf("1.Materi");
   gotoxy(65,19);printf("2.Contoh Soal");
   gotoxy(100,19);printf("3.Latihan");
   gotoxy(60,27);printf("4.Quiz");
   gotoxy(86,27);printf("5.Keluar");

   a:
   	gotoxy(63,34);printf("Masukan pilihan= ");
   	pilih=getche();
   		gotoxy(80,34);Sleep(150);
      		if (pilih=='1'){
         		clrscr();
      			materi();
      		}else if (pilih=='2'){
      			clrscr();
      			contoh();
      		}else if (pilih=='3'){
         		clrscr();
         		latihan();
      		}else if(pilih=='4'){
      			clrscr();
         		quiz();
      		}else if(pilih=='5'){
            	clrscr();
          		keluar();
         	}else{
        			gotoxy(80,34);printf("   ");
         		textcolor(12);gotoxy(70,36);cprintf("INPUTAN INVALID");Sleep(1000);
         		gotoxy(70,36);printf("               ");
            	goto a;
      		}
}
///////////////////////////////////////////////////////////////////////////////
void materi(){
	bingkai();
   	for(int x=0;x<=30;x++){
   		textcolor(x);
   			gotoxy(35,7); cprintf("aaaaa     aaaaa      aaa     aaaaaaaa   aaaaaaa   aaaaaaaa    aaa     ");
   			gotoxy(35,8); cprintf("aaaaaa    aaaaa     aaaaa    aaaaaaaa   aaa       aaa  aaa    aaa     ");
   			gotoxy(35,9); cprintf("aaa  aa aa  aaa    aaa aaa      aa      aaaaaaa   aaa  aaa    aaa     ");
   			gotoxy(35,10);cprintf("aaa   aaa   aaa   aaa   aaa     aa      aaaaaaa   aaaaaaa     aaa     ");
   			gotoxy(35,11);cprintf("aaa         aaa  aaaaaaaaaaa    aa      aaa       aaa   aa    aaa     ");
   			gotoxy(35,12);cprintf("aaa         aaa aaaaaaaaaaaaa   aa      aaaaaaa   aaa   aa    aaa     ");
   			gotoxy(33,13);cprintf("======================================================================="); Sleep(20);
   	}

   	for(int x=70;x<=85;x++){
   		textcolor(75);
   			gotoxy(x,14);cprintf("%c",219);
      		gotoxy(x,17);cprintf("%c",219);
            gotoxy(x-25,19);cprintf("%c",219);
            gotoxy(x-25,22);cprintf("%c",219);
   	}

   	for(int x=14;x<=17;x++){
   		gotoxy(70,x);cprintf("%c",219);
      	gotoxy(85,x);cprintf("%c",219);
      }

     for(int x=19;x<=22;x++){
   		gotoxy(45,x);cprintf("%c",219);
      	gotoxy(60,x);cprintf("%c",219);
   		gotoxy(95,x);cprintf("%c",219);
      	gotoxy(110,x);cprintf("%c",219);
   	}

   	for(int x=95;x<=110;x++){
   		gotoxy(x,19);cprintf("%c",219);
      	gotoxy(x,22);cprintf("%c",219);
   	}

   	for(int x=30;x<=50;x++){
   		gotoxy(x,25);cprintf("%c",219);
      	gotoxy(x,28);cprintf("%c",219);
         gotoxy(x+35,25);cprintf("%c",219);
         gotoxy(x+35,28);cprintf("%c",219);
   	}

   	for(int x=25;x<=28;x++){
   		gotoxy(30,x);cprintf("%c",219);
      	gotoxy(50,x);cprintf("%c",219);
      	gotoxy(65,x);cprintf("%c",219);
			gotoxy(85,x);cprintf("%c",219);
			gotoxy(100,x);cprintf("%c",219);
			gotoxy(125,x);cprintf("%c",219);
   	}

    	for(int x=100;x<=125;x++){
   		gotoxy(x,25);cprintf("%c",219);
      	gotoxy(x,28);cprintf("%c",219);
   	}

   	for(int x=58;x<=95;x++){
   		gotoxy(x,32);cprintf("%c",219);
      	gotoxy(x,35);cprintf("%c",219);
   	}

   	for(int x=32;x<=35;x++){
   		gotoxy(58,x);cprintf("%c",219);
      	gotoxy(95,x);cprintf("%c",219);
      	gotoxy(125,x+1);cprintf("%c",219);
   	}

   	for(int x=125;x<140;x++){
   		gotoxy(x,33);cprintf("%c",219);
   	}

   		gotoxy(75,16);printf("1.Mean");
   		gotoxy(49,21);printf("2.Median");
   		gotoxy(100,21);printf("3.Modus");
   		gotoxy(35,27);printf("4.Quartil");
   		gotoxy(70,27);printf("5.Desil");
   		gotoxy(105,27);printf("6.Persentil");
   		gotoxy(130,35);printf("0.Menu");
  a:
   	gotoxy(63,34);printf("Masukan Pilihan= ");
      	pilih=getche();
   		gotoxy(80,34);Sleep(150);
      	if (pilih=='1'){
         	clrscr();
      		mean();
      	}else if (pilih=='2'){
      		clrscr();
      		median();
      	}else if (pilih=='3'){
         	clrscr();
         	modus();
	      }else if(pilih=='4'){
   	   	clrscr();
      	   quartil();
     	 	}else if(pilih=='5'){
      	    clrscr();
         	 desil();                                                                                                                                                                                            //
     		 }else if(pilih=='6'){
         	 clrscr();
             persentil();                                                                                                                                                                                            //
      	}else if(pilih=='0'){
         	 clrscr();
             menu();                                                                                                                                                                                            //
      	}else{
      		gotoxy(80,34);printf("        ");
         	textcolor(12);gotoxy(70,36);cprintf("INPUTAN INVALID");Sleep(1000);
         	gotoxy(70,36);printf("                   ");
         	goto a;
      	}
}
///////////////////////////////////////////////////////////////////////////////
void tanya1(){
   	for(int x=125;x<140;x++){
   		gotoxy(x,34);printf("%c",219);
      	gotoxy(x-104,34);printf("%c",219);
   	}

   	for(int x=34;x<=36;x++){
   		gotoxy(35,x);printf("%c",219);
      	gotoxy(125,x);printf("%c",219);
   	}

   		gotoxy(23,36);printf("y = materi");
   		gotoxy(127,36);printf(" n = menu");

   textcolor(14);gotoxy(60,34);cprintf("Apakah anda ingin melanjutkannya y/n "); Sleep(100);
      tanya=getche();
      	gotoxy(97,34);Sleep(150);
   			if(tanya=='y'){
         		clrscr();
            	materi();
      		}else if(tanya=='n'){
            	clrscr();
         		menu();
      		}else{
         		gotoxy(97,34);printf("               ");
           		textcolor(12);gotoxy(80,35);cprintf("Inputan hanya (y)/(n)");Sleep(1000);
            	gotoxy(80,35);printf("                              ");
            	tanya1();
         	}
}
////////////////////////////////////////////////////////////////////////////////
void mean(){
	bingkai();
   	textcolor(6);
   		gotoxy(25,9);cprintf("Mean merupakan nilai rata-rata dari semua data yang ada. ");Sleep(100);
   		gotoxy(25,10);cprintf("dalam terdapat 2 jenis data, yaitu data tunggal dan data");Sleep(100);
   		gotoxy(25,11);cprintf("kelompok.");Sleep(100);
   		gotoxy(25,13);cprintf("Rumus-Rumusnya ");     Sleep(100);
   		gotoxy(26,15);cprintf("1. Data Tunggal ");               Sleep(100);
   		gotoxy(28,18);cprintf("=====================================");       Sleep(100);
   		gotoxy(28,19);cprintf("=  _    X1+X2+X3+......+Xn          =");                  Sleep(100);
   		gotoxy(28,20);cprintf("=  X = --------------------         =");Sleep(100);
   		gotoxy(28,21);cprintf("=                n                  =");Sleep(100);
   		gotoxy(28,22);cprintf("=====================================");Sleep(100);
   		gotoxy(90,15);cprintf("2. Data kelompok");                      Sleep(100);
   		gotoxy(90,19);cprintf("====================================="); Sleep(100);
   		gotoxy(90,20);cprintf("=              _                    =");  Sleep(100);
   		gotoxy(90,21);cprintf("=             \\                     ="); Sleep(100);
   		gotoxy(90,22);cprintf("=     _       /_  fi * xi           =");  Sleep(100);
   		gotoxy(90,23);cprintf("=     X  = --------------           =");  Sleep(100);
   		gotoxy(90,24);cprintf("=             _                     =");  Sleep(100);
   		gotoxy(90,25);cprintf("=            \\   fi                 ="); Sleep(100);
   		gotoxy(90,26);cprintf("=            /_                     =");  Sleep(100);
   		gotoxy(90,27);cprintf("=====================================");   Sleep(100);
   		gotoxy(26,30);cprintf("Keterangan: ");                         Sleep(100);
   		gotoxy(26,31);cprintf(" fi = frekuensi data ke-i ");           Sleep(100);
   		gotoxy(26,32);cprintf(" xi = data tengah kelas ke-i "); Sleep(100);

   tanya1();
}
///////////////////////////////////////////////////////////////////////////////
void median(){
   bingkai();
   	textcolor(14);
   		gotoxy(25,9);cprintf("Median merupakan nilai tengah dari semua data yang sudah diurutkan. ");Sleep(200);
   		gotoxy(25,10);cprintf("dalam terdapat 2 jenis data, yaitu data tunggal dan data kelompok.");Sleep(200);
   		gotoxy(25,12);cprintf("Rumus-Rumusnya "); Sleep(200);
   		gotoxy(26,14);cprintf("1. Data Tunggal "); Sleep(200);
   		gotoxy(28,16);cprintf("=====================");Sleep(200);
   		gotoxy(28,17);cprintf("=   _     Xn        ="); Sleep(200);
   		gotoxy(28,18);cprintf("=   X = -----       ="); Sleep(200);
   		gotoxy(28,19);cprintf("=         2         ="); Sleep(200);
   		gotoxy(28,20);cprintf("=====================");  Sleep(200);
   		gotoxy(90,18);cprintf("2. Data kelompok");     Sleep(200);
   		gotoxy(90,20);cprintf("=============================="); Sleep(200);
   		gotoxy(90,21);cprintf("=             _       _      ="); Sleep(200);
   		gotoxy(90,22);cprintf("=            |n/2-fkum |     ="); Sleep(200);
   		gotoxy(90,23);cprintf("=    Me = tb+|---------|*P   =");  Sleep(200);
   		gotoxy(90,24);cprintf("=            |_  fme  _|     =");  Sleep(200);
   		gotoxy(90,25);cprintf("=                            ="); Sleep(200);
   		gotoxy(90,26);cprintf("=============================="); Sleep(200);
   		gotoxy(26,28);cprintf("Keterangan: ");            Sleep(200);
   		gotoxy(26,29);cprintf(" tb   = tepi bawah kelas median"); Sleep(200);
   		gotoxy(26,30);cprintf(" n    = jumlah frekuensi  ");    Sleep(200);
   		gotoxy(26,31);cprintf(" fkum = frekuensi kumulatif sebelum kelas median"); Sleep(200);
   		gotoxy(26,32);cprintf(" fme  = frekuensi kelas median");    Sleep(200);
   		gotoxy(26,33);cprintf(" P    = Panjang kelas");       Sleep(200);

  	tanya1();
}
///////////////////////////////////////////////////////////////////////////////
void modus(){
   bingkai();
   	textcolor(78);
   		gotoxy(25,9);cprintf("Modus merupakan data yang sering muncul atau nilai yang mempunyai frekuensi tinggi "); Sleep(200);
   		gotoxy(25,10);cprintf("terdapat 2 jenis data, yaitu data tunggal dan data kelompok.");Sleep(200);
   		gotoxy(25,12);cprintf("Rumus-Rumusnya ");   Sleep(200);
   		gotoxy(26,14);cprintf("1. Data Tunggal ");   Sleep(200);
   		gotoxy(28,16);cprintf("================================"); Sleep(200);
   		gotoxy(28,17);cprintf("=  Mo= data yang sering muncul ="); Sleep(200);
   		gotoxy(28,18);cprintf("================================");  Sleep(200);
   		gotoxy(90,16);cprintf("2. Data kelompok");         Sleep(200);
   		gotoxy(90,18);cprintf("==============================");   Sleep(200);
   		gotoxy(90,19);cprintf("=             _       _      =");  Sleep(200);
   		gotoxy(90,20);cprintf("=            |    Sa   |     =");   Sleep(200);
   		gotoxy(90,21);cprintf("=    Mo = tb+|---------|*P   =");   Sleep(200);
   		gotoxy(90,22);cprintf("=            |_ Sa+Sb _|     =");   Sleep(200);
   		gotoxy(90,23);cprintf("=                            =");    Sleep(200);
   		gotoxy(90,24);cprintf("==============================");    Sleep(200);
   		gotoxy(26,26);cprintf("Keterangan: ");             Sleep(200);
   		gotoxy(26,27);cprintf(" tb   = tepi bawah kelas median"); Sleep(200);
   		gotoxy(26,28);cprintf(" Sa   = Selisih frekuensi kelas modus dengan kelas atasnya  ");  Sleep(200);
   		gotoxy(26,29);cprintf(" Sb   = Selisih frekuensi kelas modus dengan kelas bawahnya ");  Sleep(200);
   		gotoxy(26,30);cprintf(" P    = Panjang kelas");       Sleep(200);

   tanya1();
}
///////////////////////////////////////////////////////////////////////////////
void quartil(){
   bingkai();
   	textcolor(95);
   		gotoxy(25,9);cprintf("Quartil merupakan letak data dari semua data yang sudah diurutkan "); Sleep(200);
   		gotoxy(25,10);cprintf("dalam terdapat 2 jenis data, yaitu data tunggal dan data kelompok."); Sleep(200);
   		gotoxy(25,12);cprintf("Rumus-Rumusnya ");  Sleep(200);
   		gotoxy(26,14);cprintf("1. Data Tunggal "); Sleep(200);
   		gotoxy(28,16);cprintf("================="); Sleep(200);
   		gotoxy(28,17);cprintf("=   Qi = i/4    ="); Sleep(200);
   		gotoxy(28,18);cprintf("================="); Sleep(200);
   		gotoxy(90,16);cprintf("2. Data kelompok");  Sleep(200);
   		gotoxy(90,18);cprintf("=================================");  Sleep(200);
   		gotoxy(90,19);cprintf("=             _          _      ="); Sleep(200);
   		gotoxy(90,20);cprintf("=            |(i/2)n-fkum |     ="); Sleep(200);
   		gotoxy(90,21);cprintf("=    Q  = tb+|------------|*P   ="); Sleep(200);
   		gotoxy(90,22);cprintf("=            |_     fQi  _|     ="); Sleep(200);
   		gotoxy(90,23);cprintf("=                               ="); Sleep(200);
   		gotoxy(90,24);cprintf("================================="); Sleep(200);
   		gotoxy(26,26);cprintf("Keterangan: ");  Sleep(200);
   		gotoxy(26,27);cprintf(" tb   = tepi bawah kelas quartil");  Sleep(200);
   		gotoxy(26,28);cprintf(" i    = 1,2,3 ");    Sleep(200);
   		gotoxy(26,29);cprintf(" fkum = frekuensi kumulatif sebelum kelas quartil"); Sleep(200);
   		gotoxy(26,30);cprintf(" fQi  = frekuensi kelas quartil");  Sleep(200);
   		gotoxy(26,31);cprintf(" P    = Panjang kelas");   Sleep(200);

 	tanya1();
}
////////////////////////////////////////////////////////////////////////////////
void desil(){
	bingkai();
   	textcolor(79);
   		gotoxy(25,9);cprintf("Desil merupakan nilai dari semua data yang sudah diurutkan "); Sleep(200);
   		gotoxy(25,10);cprintf("dan dibagi 10 bagian yang sama dalam terdapat 2 jenis data,"); Sleep(200);
   		gotoxy(25,11);cprintf("yaitu data tunggal dan data kelompok."); Sleep(200);
   		gotoxy(25,13);cprintf("Rumus-Rumusnya ");   Sleep(200);
   		gotoxy(26,15);cprintf("1. Data Tunggal "); Sleep(200);
   		gotoxy(28,17);cprintf("=======================");Sleep(200);
   		gotoxy(28,18);cprintf("=         Xi(n+1)     =");Sleep(200);
   		gotoxy(28,19);cprintf("=   Di = --------     ="); Sleep(200);
   		gotoxy(28,20);cprintf("=            10       ="); Sleep(200);
   		gotoxy(28,21);cprintf("======================="); Sleep(200);
   		gotoxy(90,18);cprintf("2. Data kelompok");   Sleep(200);
   		gotoxy(90,20);cprintf("=================================");Sleep(200);
   		gotoxy(90,21);cprintf("=             _          _      ="); Sleep(200);
   		gotoxy(90,22);cprintf("=            |(i/10)n-fkum |     ="); Sleep(200);
   		gotoxy(90,23);cprintf("=    Di = tb+|------------|*P   ="); Sleep(200);
   		gotoxy(90,24);cprintf("=            |_    fDi   _|     =");Sleep(200);
   		gotoxy(90,25);cprintf("=                               ="); Sleep(200);
   		gotoxy(90,26);cprintf("=================================");  Sleep(200);
   		gotoxy(26,25);cprintf("Keterangan: ");                   Sleep(200);
   		gotoxy(26,26);cprintf(" tb   = tepi bawah kelas desil"); Sleep(200);
   		gotoxy(26,27);cprintf(" n    = jumlah seluruh frekuensi data"); Sleep(200);
   		gotoxy(26,28);cprintf(" fkum = frekuensi kumulatif sebelum kelas desil"); Sleep(200);
   		gotoxy(26,29);cprintf(" fDi  = frekuensi kelas desil"); Sleep(200);
   		gotoxy(26,30);cprintf(" P    = Panjang kelas");  Sleep(200);
   		gotoxy(26,31);cprintf(" i    = 1,2,3,...........,9");Sleep(200);

 	tanya1();
}
////////////////////////////////////////////////////////////////////////////////
void persentil(){
   bingkai();
   	textcolor(62);
   		gotoxy(25,9);cprintf("Persentil merupakan nilai dari semua data yang sudah diurutkan "); Sleep(200);
   		gotoxy(25,10);cprintf("dan dibagi 100 bagian yang sama dalam terdapat 2 jenis data,"); Sleep(200);
   		gotoxy(25,11);cprintf("yaitu data tunggal dan data kelompok."); Sleep(200);
   		gotoxy(25,13);cprintf("Rumus-Rumusnya ");   Sleep(200);
   		gotoxy(26,15);cprintf("1. Data Tunggal "); Sleep(200);
   		gotoxy(28,17);cprintf("======================="); Sleep(200);
   		gotoxy(28,18);cprintf("=         Xi(n+1)     =");Sleep(200);
   		gotoxy(28,19);cprintf("=   Pi = --------     ="); Sleep(200);
   		gotoxy(28,20);cprintf("=           100       ="); Sleep(200);
   		gotoxy(28,21);cprintf("=======================");Sleep(200);
   		gotoxy(90,18);cprintf("2. Data kelompok");  Sleep(200);
   		gotoxy(90,20);cprintf("================================="); Sleep(200);
   		gotoxy(90,21);cprintf("=             _            _      =");  Sleep(200);
   		gotoxy(90,22);cprintf("=            |(i/100)n-fkum |     =");  Sleep(200);
   		gotoxy(90,23);cprintf("=    Pi = tb+|--------------|*P   =");  Sleep(200);
   		gotoxy(90,24);cprintf("=            |_     fPi    _|     ="); Sleep(200);
   		gotoxy(90,25);cprintf("=                               =");Sleep(200);
   		gotoxy(90,26);cprintf("================================="); Sleep(200);
   		gotoxy(26,25);cprintf("Keterangan: ");   Sleep(200);
   		gotoxy(26,26);cprintf(" tb   = tepi bawah kelas Persentil");Sleep(200);
   		gotoxy(26,27);cprintf(" n    = jumlah seluruh frekuensi data");Sleep(200);
   		gotoxy(26,28);cprintf(" fkum = frekuensi kumulatif sebelum kelas Persentil"); Sleep(200);
   		gotoxy(26,29);cprintf(" fPi  = frekuensi kelas Persentil");   Sleep(200);
   		gotoxy(26,30);cprintf(" P    = Panjang kelas");     Sleep(200);
   		gotoxy(26,31);cprintf(" i    = 1,2,3,...........,99");  Sleep(200);

 	tanya1();
}

////////////////////////////////////////////////////////////////////////////////
void contoh(){
	bingkai();
   	for(int x=0;x<=23;x++){
   		textcolor(x);
   	      gotoxy(50,6); cprintf("  ********   *******    ***      **   ********    *******   ***   ***  ");
   			gotoxy(50,7); cprintf(" *********  *********  ******    **  **********  *********  ***   ***  ");
   			gotoxy(50,8); cprintf(" ***        ***   ***  *******   **      **      ***   ***  *********  ");
   			gotoxy(50,9); cprintf(" ***        ***   ***  **   ***  **      **      ***   ***  *********  ");
   			gotoxy(50,10);cprintf(" ***        ***   ***  **    *** **      **      ***   ***  *********  ");
   			gotoxy(50,11);cprintf(" *********  *********  **     *****      **      *********  ***   ***  ");
   			gotoxy(50,12);cprintf("  ********   *******   **       **       **       *******   ***   ***  ");
   			gotoxy(50,13);cprintf("=======================================================================");Sleep(20);
   	}

   	for(int x=21;x<=42;x++){
   		textcolor(118);
   			gotoxy(x,14);cprintf("%c",219);
      		gotoxy(x,17);cprintf("%c",219);
      		gotoxy(x,20);cprintf("%c",219);
      		gotoxy(x,23);cprintf("%c",219);
      		gotoxy(x,26);cprintf("%c",219);
      		gotoxy(x,29);cprintf("%c",219);
      		gotoxy(x,32);cprintf("%c",219);
   			gotoxy(x,34);cprintf("%c",219);
   	}

   	for(int x=14;x<=36;x++){
   		textcolor(118);
      		gotoxy(42,x);cprintf("%c",219);
   	}

   		gotoxy(24,16);printf("1.Mean");
   		gotoxy(24,19);printf("2.Median");
   		gotoxy(24,22);printf("3.Modus");
   		gotoxy(24,25);printf("4.Quartil");
   		gotoxy(24,28);printf("5.Desil");
   		gotoxy(24,31);printf("6.Persentil");
   		gotoxy(24,33);printf("0.Menu ");
      	masuk_pilih();
}
////////////////////////////////////////////////////////////////////////////////
void masuk_pilih(){
		gotoxy(39,35);printf("   ");
   	gotoxy(22,35);printf("Masukan Pilihan= ");
      	pilih=getche();
   			gotoxy(39,35);Sleep(150);
      			if (pilih=='1'){
      				conmean();
      			}else if (pilih=='2'){
      				conmedian();
      			}else if (pilih=='3'){
         			conmodus();
      			}else if(pilih=='4'){
      				conquartil();
      			}else if(pilih=='5'){
      				condesil();                                                                                                                                                                                            //
      			}else if(pilih=='6'){
          			conpersentil();                                                                                                                                                                                            //
      			}else if(pilih=='0'){
          			clrscr();
          			menu();                                                                                                                                                                                            //
      			}else{
      				gotoxy(38,35);printf("  ");
         			textcolor(12);gotoxy(22,36);cprintf("INPUTAN INVALID");Sleep(1000);
         			gotoxy(22,36);printf("               ");
         			masuk_pilih();
               }
}
/////////////////////////////////////////////////////////////////////////////////
void tanya2(){
   for(int x=34;x<=36;x++){
      gotoxy(57,x);printf("%c",219);
      gotoxy(124,x);printf("%c",219);
   }

   for(int x=43;x<=57;x++){
   	gotoxy(x,34);printf("%c",219);
      gotoxy(x+82,34);printf("%c",219);
   }

   	gotoxy(45,36);printf("y = contoh");
   	gotoxy(130,36);printf("n = menu");
   		textcolor(11);gotoxy(70,33);cprintf("Apakah anda ingin melanjutkannya y/n "); Sleep(200);
      		tanya=getche();
      		gotoxy(107,33);Sleep(150);
   				if(tanya=='y'){
         			hapus();
                  masuk_pilih();
      			}else if(tanya=='n'){
            		clrscr();
         			menu();
      			}else{
         			gotoxy(107,33);printf(" ");
           			textcolor(12);gotoxy(80,35);cprintf("Inputan hanya (y)/(n)");Sleep(150);
            		gotoxy(80,35);printf("                     ");
            		tanya2();
         		}
}
////////////////////////////////////////////////////////////////////////////////
void hapus(){
	for(int a=1; a<=22;a++){
   	textcolor(1);gotoxy(43,14+a);cprintf("                                                                                                 ");
   }
}

///////////////////////////////////////////////////////////////////////////////
void conmean(){
   	textcolor(10);
   		gotoxy(45,16);cprintf("terdapat data yaitu 2,6,4,6. berapakah mean dari data tersebut? "); Sleep(200);
   		gotoxy(45,17);cprintf("jawab : ");    Sleep(200);
   		gotoxy(45,18);cprintf("urutkan data =2,4,5,6");Sleep(200);
   		gotoxy(45,19);cprintf("jumlah dari semua data = 2+4+5+6 = 14");Sleep(200);
   		gotoxy(45,20);cprintf("banyaknya data = 4 ");   Sleep(200);
   		gotoxy(45,21);cprintf("          jumlah data");  Sleep(200);
   		gotoxy(45,22);cprintf("   mean= -------------"); Sleep(200);
   		gotoxy(45,23);cprintf("          banyak data");  Sleep(200);
   		gotoxy(45,24);cprintf("          14");   Sleep(200);
   		gotoxy(45,25);cprintf("   mean= -----");  Sleep(200);
   		gotoxy(45,26);cprintf("          4");  Sleep(200);
   		gotoxy(45,27);cprintf("   mean=3.5");  Sleep(200);

 	tanya2();
}
///////////////////////////////////////////////////////////////////////////////
void conmedian(){
   	textcolor(77);
   		gotoxy(45,16);cprintf("terdapat data yaitu 2,1,4,5,3,3,6,7. berapakah median dari data tersebut? "); Sleep(200);
   		gotoxy(45,17);cprintf("jawab : "); Sleep(200);
   		gotoxy(45,18);cprintf("urutkan data =1,2,3,3,4,5,6,7");Sleep(200);
   		gotoxy(45,19);cprintf("banyaknya data = 8 "); Sleep(200);
   		gotoxy(45,20);cprintf("median ke= banyak data/2"); Sleep(200);
   		gotoxy(45,21);cprintf("         = 4");         Sleep(200);
   		gotoxy(45,22);cprintf("   median= median ke + (median ke+1) ");  Sleep(200);
   		gotoxy(45,23);cprintf("   median= data 4+ data 5"); Sleep(200);
   		gotoxy(45,24);cprintf("            3+4");   Sleep(200);
   		gotoxy(45,25);cprintf("   median= -----");   Sleep(200);
   		gotoxy(45,26);cprintf("             2");    Sleep(200);
   		gotoxy(45,27);cprintf("             7");    Sleep(200);
   		gotoxy(45,28);cprintf("   median= -----");   Sleep(200);
   		gotoxy(45,29);cprintf("             2");    Sleep(200);
   		gotoxy(45,30);cprintf("   median=3.5");     Sleep(200);

 	tanya2();
}
///////////////////////////////////////////////////////////////////////////////
void conmodus(){
		textcolor(75);
   		gotoxy(45,17);cprintf("terdapat data yaitu 20,25,63,78,20,30,20. berapakah modus dari data tersebut? "); Sleep(200);
   		gotoxy(45,19);cprintf("jawab : ");   Sleep(200);
   		gotoxy(45,21);cprintf("urutkan data= 20,20,20,25,30,63,78");   Sleep(200);
   		gotoxy(45,23);cprintf("modus= data yang sering muncul"); Sleep(200);
   		gotoxy(45,25);cprintf("modus= 20");  Sleep(200);

	tanya2();
}
///////////////////////////////////////////////////////////////////////////////
void conquartil(){
   	textcolor(14);
   		gotoxy(45,16);cprintf("terdapat data yaitu 1,3,5,5,4,7,7,6. berapakah quartil dari data tersebut? "); Sleep(200);
   		gotoxy(45,18);cprintf("jawab : ");      Sleep(200);
   		gotoxy(45,20);cprintf("urutkan data = 1,3,4,5,5,6,7,7"); Sleep(200);
   		gotoxy(45,21);cprintf("banyak data = 8");  Sleep(200);
   		gotoxy(45,22);cprintf("           8");  Sleep(200);
   		gotoxy(45,23);cprintf("quartil = --- =2");Sleep(200);
   		gotoxy(45,24);cprintf("           4");      Sleep(200);
   		gotoxy(45,26);cprintf("          data ke 2 + data ke 3 ");  Sleep(200);
   		gotoxy(45,27);cprintf("quartil = ---------------------- ");  Sleep(200);
   		gotoxy(45,28);cprintf("                    2 ");  Sleep(200);
   		gotoxy(45,30);cprintf("          3+4"); Sleep(200);
   		gotoxy(45,31);cprintf("quartil= ----"); Sleep(200);
   		gotoxy(45,32);cprintf("           2"); Sleep(200);
   		gotoxy(45,33);cprintf("quartil= 3.5");  Sleep(200);

   tanya2();
}
///////////////////////////////////////////////////////////////////////////////
void condesil(){
   	textcolor(27);
   		gotoxy(45,16);cprintf("terdapat data yaitu 2,4,2,3,2,1,4,5. berapakah desil ke dua dari data tersebut? ");Sleep(200);
   		gotoxy(45,17);cprintf("jawab : ");  Sleep(200);
   		gotoxy(45,18);cprintf("urutkan data = 1,2,2,2,3,4,4,5");Sleep(200);
   		gotoxy(45,19);cprintf("banyak data = 8");     Sleep(200);
   		gotoxy(45,20);cprintf("              jumlah data+1"); Sleep(200);
   		gotoxy(45,21);cprintf("letak desil = --------------"); Sleep(200);
   		gotoxy(45,22);cprintf("                   10"); Sleep(200);
   		gotoxy(45,23);cprintf("              8+1");    Sleep(200);
   		gotoxy(45,24);cprintf("letak desil= ----");    Sleep(200);
   		gotoxy(45,25);cprintf("              10");    Sleep(200);
   		gotoxy(45,26);cprintf("           = 1.8");    Sleep(200);
   		gotoxy(45,27);cprintf("desil= data ke 1+ 0.8((data ke 2)-(data ke 1))"); Sleep(200);
   		gotoxy(45,28);cprintf("desil= 1 + 0.8(2-1)");   Sleep(200);
   		gotoxy(45,29);cprintf("     = 1 + 0.8(1)"); Sleep(200);
   		gotoxy(45,30);cprintf("     = 1.8");  Sleep(200);

   tanya2();
}
///////////////////////////////////////////////////////////////////////////////
void conpersentil(){
   	textcolor(28);
   		gotoxy(44,16);cprintf("terdapat data yaitu 10,6,7,8,12,11,10,9,9,9,8,9. berapakah persentil ke dua dari data tersebut? "); Sleep(200);
   		gotoxy(45,17);cprintf("jawab : ");  Sleep(200);
   		gotoxy(45,18);cprintf("urutkan data = 6,7,8,8,9,9,9,9,10,10,11,12");  Sleep(200);
   		gotoxy(45,19);cprintf("banyak data = 12"); Sleep(200);
   		gotoxy(45,20);cprintf("      banyak data+1"); Sleep(200);
   		gotoxy(45,21);cprintf("letak=-------------"); Sleep(200);
   		gotoxy(45,22);cprintf("          100"); Sleep(200);
   		gotoxy(45,23);cprintf("letak desil = 12+1");Sleep(200);
   		gotoxy(45,24);cprintf("            = ----");Sleep(200);
   		gotoxy(45,25);cprintf("            =  100");Sleep(200);
   		gotoxy(45,26);cprintf("           = 0.26");  Sleep(200);
   		gotoxy(45,27);cprintf("desil= data ke 0+ 0.26(data ke 1-data ke 0");  Sleep(200);
   		gotoxy(45,28);cprintf("desil= 0 + 0.26(6-0)"); Sleep(200);
   		gotoxy(45,29);cprintf("     = 0.26(6)");  Sleep(200);
   		gotoxy(45,30);cprintf("     = 1.56");  Sleep(200);

	tanya2();
}
///////////////////////////////////////////////////////////////////////////////
void latihan(){
	bingkai();
   	for(int x=0;x<43;x++){
   		textcolor(x);
   			gotoxy(35,7); cprintf("***               *         ********    ***    ***   ***         *           ***      **   ");
   			gotoxy(35,8); cprintf("***              ***       **********   ***    ***   ***        ***         ******    **   ");
   			gotoxy(35,9); cprintf("***             *****          **       ***    ***   ***       *****        *******   **   ");
   			gotoxy(35,10);cprintf("***            *** ***         **       ***    *********      *** ***       **   ***  **   ");
   			gotoxy(35,11);cprintf("***           ***   ***        **       ***    ***   ***     ***   ***      **    *** **   ");
   			gotoxy(35,12);cprintf("*********    ***********       **       ***    ***   ***    ***********     **     *****   ");
   			gotoxy(35,13);cprintf("*********   *************      **       ***    ***   ***   *************    **       **    ");
   			gotoxy(33,14);cprintf("============================================================================================");Sleep(20);
      }

   	for(int x=70;x<=90;x++){
   		textcolor(76);
   			gotoxy(x,17);cprintf("%c",219);
   			gotoxy(x,20);cprintf("%c",219);
      		gotoxy(x,22);cprintf("%c",219);
      		gotoxy(x,25);cprintf("%c",219);
      		gotoxy(x,27);cprintf("%c",219);
      		gotoxy(x,30);cprintf("%c",219);
            gotoxy(x-30,22);cprintf("%c",219);
      		gotoxy(x-30,25);cprintf("%c",219);
            gotoxy(x+30,22);cprintf("%c",219);
      		gotoxy(x+30,25);cprintf("%c",219);
      }

   	for(int x=22;x<=25;x++){
      		gotoxy(70,x-5);cprintf("%c",219);
      		gotoxy(90,x-5);cprintf("%c",219);
            gotoxy(70,x+5);cprintf("%c",219);
      		gotoxy(90,x+5);cprintf("%c",219);
   			gotoxy(70,x);cprintf("%c",219);
      		gotoxy(90,x);cprintf("%c",219);
      		gotoxy(40,x);cprintf("%c",219);
      		gotoxy(60,x);cprintf("%c",219);
      		gotoxy(100,x);cprintf("%c",219);
      		gotoxy(120,x);cprintf("%c",219);
   	}
   	for(int x=32;x<=35;x++){
      		gotoxy(100,x);cprintf("%c",219);
      		gotoxy(130,x);cprintf("%c",219);
   	}

      for(int x=100;x<130;x++){
   			gotoxy(x,32);cprintf("%c",219);
      		gotoxy(x,35);cprintf("%c",219);
   	}

   		gotoxy(75,19);printf("1.Mean");
   		gotoxy(45,24);printf("2.Median");
   		gotoxy(75,24);printf("3.Modus");
   		gotoxy(105,24);printf("4.Quartil");
   		gotoxy(75,29);printf("0.Menu");
 a:
   	gotoxy(103,34);printf("Masukan Pilihan= ");
     		pilih=getche();
   			gotoxy(120,34);Sleep(150);
      			if (pilih=='1'){
         			clrscr();
      				latmean();
      			}else if (pilih=='2'){
      				clrscr();
      				latmedian();
      			}else if (pilih=='3'){
         			clrscr();
         			latmodus();
      			}else if(pilih=='4'){
      				clrscr();
         			latquartil();
      			}else if(pilih=='0'){
          			clrscr();
          			menu();                                                                                                                                                                                            //
      			}else{
      				gotoxy(120,34);printf("    ");
         			textcolor(12);gotoxy(110,36);cprintf("INPUTAN INVALID");Sleep(1000);
         			gotoxy(110,36);printf("               ");
         			goto a;
      			}
}
////////////////////////////////////////////////////////////////////////////////
void tanya3(){
      for(int x=125;x<140;x++){
         textcolor(41);
      		gotoxy(x,8);cprintf("%c",219);
         	gotoxy(x,11);cprintf("%c",219);
      }

      for(int x=6;x<=11;x++){
			textcolor(41);gotoxy(125,x);cprintf("%c",219);
      }

      	gotoxy(127,7);printf("y= latihan");
      	gotoxy(127,10);printf("n= menu");

		textcolor(14);gotoxy(80,9);cprintf("Apakah anda ingin melanjutkannya y/n ");
      	tanya=getche();
   	   	gotoxy(117,9);Sleep(150);
   				if(tanya=='y'){
         			clrscr();
            		latihan();
      			}else if(tanya=='n'){
         	   	clrscr();
         			menu();
      			}else{
         			gotoxy(117,9);printf(" ");
           			textcolor(12);gotoxy(90,11);cprintf("Inputan hanya (y)/(n)");Sleep(150);
        	      	gotoxy(90,11);printf("                     ");
               	tanya3();
         		}
}

/////////////////////////////////////////////////////////////////////////////////
void latmean(){
	bingkai();
		gotoxy(26,7);printf("MEAN");
   	gotoxy(25,8);printf("------");

   do{
   	 a:
   		gotoxy(27,9);printf("                                                                      ");
   		gotoxy(27,9);printf("Masukan banyaknya data(0<data<=15)= ");gets(a);
      	val=valangka(a);
      		if(val!=0|| strlen(a)==0){
      			textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa Angka ");Sleep(500);
      			gotoxy(60,35);printf("                            ");Sleep(500);
      		}
   }while(valangka(a)!=0|| strlen(a)==0);

   float arr[16];
   float tamp=0;
   float mean;
   int num=atoi(a);

   if(num>0 && num<=15){
   	for(int x=0;x<num;x++){
     		 	do{
   				gotoxy(27,10+x);printf("                                                                      ");
   				gotoxy(27,10+x);printf("masukan data %d= ",x+1);gets(a);
      			val=valangka(a);
            		if(val!=0 || strlen(a)==0){
      					textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa Angka ");Sleep(500);
      						gotoxy(60,35);printf("                            ");Sleep(500);
      				}
   			}while(valangka(a)!=0 || strlen(a)==0);
          	arr[x]=atof(a);
      }

      gotoxy(27,26);printf("Data = ");
   	for(int b=0;b<num;b++){
   		gotoxy(38+u,26);printf("%.1f",arr[b]);
      	u+=4;
      	tamp+=arr[b];
      }u=0;

   		gotoxy(27,28);printf("jumlah data= %.1f\n",tamp);
    	mean=tamp/num;
    		gotoxy(27,30);printf("       %.1f",tamp);
      	gotoxy(27,31);printf("Mean = -----");
      	gotoxy(27,32);printf("        %d",num);
    		gotoxy(27,34);printf("     = %.1f",mean);

      tanya3();

   }else{
   	goto a;
   }
}
///////////////////////////////////////////////////////////////////////////////
void latmedian(){
	bingkai();
   	gotoxy(26,7);printf("MEDIAN");
   	gotoxy(25,8);printf("--------");

   	do{
    		a:
   			gotoxy(27,9);printf("                                                                      ");
   			gotoxy(27,9);printf("Masukan banyaknya data(0<data<=15)= ");gets(a);
      			val=valangka(a);
         			if(val!=0|| strlen(a)==0){
      					textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa Angka ");Sleep(500);
      					gotoxy(60,35);printf("                            ");Sleep(500);
      				}
   	}while(valangka(a)!=0|| strlen(a)==0);

	float median;
   int tam,ke;
	int med[16];
   int num=atoi(a);

   if(num>0 && num<=15){
   		for(int x=0;x<num;x++){
         		do{
   					gotoxy(27,10+x);printf("                                                                      ");
   					gotoxy(27,10+x);printf("masukan data %d= ",x+1);gets(a);
      				val=valangka(a);
             	  		if(val!=0 || strlen(a)==0){
      						textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa Angka ");Sleep(500);
                    		gotoxy(60,35);printf("                            ");Sleep(500);
               		}
   				}while(valangka(a)!=0 || strlen(a)==0);
          		 med[x]=atof(a);
   		}

   			for(int y=0;y<num;y++){
   				gotoxy(27+u,28);printf("%d ",med[y]);
      			u+=4;
   			}u=0;

   		for(int x=0;x<num;x++){
   			for(int y=x;y<num;y++){
      			if(med[x]>med[y]){
      				tam=med[y];
         			med[y]=med[x];
         			med[x]=tam;
         		}
      		}gotoxy(27+p,29);printf("%d ",med[x]);
             p+=4;
   		} p=0;

   		if(num%2==0){
   			ke=num/2;
      		median=med[ke]+med[ke-1];
      		median=median/2;
      			gotoxy(27,30);printf("               %d",num);
      			gotoxy(27,31);printf("letak median= ---- = %d dan %d",ke,ke+1);
      			gotoxy(27,32);printf("               2");
      			gotoxy(27,33);printf("        %d+%d",med[ke],med[ke-1]);
      			gotoxy(27,34);printf("median= ---");
      			gotoxy(27,35);printf("         2");
   		}else{
   			ke=num/2;
      		median=med[ke];
      			gotoxy(27,30);printf("               %d",num);
      			gotoxy(27,31);printf("letak median= ---- ");
      			gotoxy(27,32);printf("               2");
      			gotoxy(27,33);printf("            = %d",ke);
      			gotoxy(27,35);printf("letak median=%d",ke+1);
   		}
   		gotoxy(27,36);printf("median= %.1f ",median);

         tanya3();

   }else{
   	goto a;
   }
}
///////////////////////////////////////////////////////////////////////////////
void latmodus(){
	bingkai();
		gotoxy(26,7);printf("MODUS");
   	gotoxy(25,8);printf("------");

   	do{
	a:
   			gotoxy(27,9);printf("                                                                      ");
   			gotoxy(27,9);printf("Masukan banyaknya data(0<data<=15)= ");gets(a);
      		val=valangka(a);
      			if(val!=0|| strlen(a)==0){
      					textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa Angka ");Sleep(500);
      					gotoxy(60,35);printf("                            ");Sleep(500);
      			}
   }while(valangka(a)!=0 || strlen(a)==0);

   int arr[16];
	int modus;
   int tam,ke;
   int num=atoi(a);
   int z;

   if(num>0 && num<=15){
   		//input angka
   		for(int x=0;x<num;x++){
            f:
   				do{
   					gotoxy(27,10+x);printf("                                                                      ");
   					gotoxy(27,10+x);printf("masukan data %d= ",x+1);gets(a);
      					val=valangka(a);
               		z=atoi(a);
               			if(val!=0|| strlen(a)==0){
      							textcolor(12);gotoxy(60,35);cprintf("Inputan Berupa Angka ");Sleep(500);
      							gotoxy(60,35);printf("                            ");Sleep(500);
              	 			}else if(z>22 || z<0){
                           textcolor(12);gotoxy(60,35);cprintf("Angka Harus kurang dari 22 dan lebih dari 0");Sleep(500);
                           gotoxy(60,35);printf("                                           ");
                           goto f;
               			}
   				}while(valangka(a)!=0 || strlen(a)==0);
          			arr[x]=atof(a);
   		}
   			int min=arr[0],max=arr[0];

   		//ngeprin inputan
   			for(int y=0;y<num;y++){
   				gotoxy(27+u,28);printf("%d ",arr[y]);
      			u+=4;
   			}u=0;

   		//sortiran inputan
  				for(int x=0;x<num;x++){
   				for(int y=x;y<num;y++){
      				if(arr[x]>arr[y]){
      					tam=arr[y];
         				arr[y]=arr[x];
         				arr[x]=tam;
         			}
      			}gotoxy(27+p,29);printf("%d ",arr[x]);
      			p+=4;
   			}p=0;

   			for(int x=0;x<num;x++){
   				if(max<arr[x]){
      				max=arr[x];
            	}else if(min>arr[x]){
      				min=arr[x];
            	}
   			}

   			int z[100]={0}, v=0,y;
   				for(int x=min;x<=max;x++){
   					for(y=0;y<num;y++){
   						if(arr[y]==x){
         					z[v]++;
            				if(z[0]<z[v] && arr[y]==x){
       							modus=x;
       						}
      					}
       				}
       					gotoxy(27+q,32);printf("%d=%d ",x,z[v]);
       					v++;
       					q+=5;
   				}q=0;
               
				gotoxy(27,34);printf("modus= %d",modus);

   		tanya3();

   }else{
    	goto a;
   }
}
///////////////////////////////////////////////////////////////////////////////
void latquartil(){
	bingkai();

	gotoxy(26,7);printf("QUARTIL");
   gotoxy(25,8);printf("---------");

   do{
   	gotoxy(27,9);printf("                                                                      ");
   	gotoxy(27,9);printf("Masukan banyaknya data(0<data<=15)= ");gets(a);
      val=valangka(a);
   }while(valangka(a)!=0);

	float quartil;
   int tam,ke,q;
  	int med[16];
   int num=atoi(a);
   int z;

   if(num>0 && num<=15){
   			for(int x=0;x<num;x++){
   				do{
   					gotoxy(27,10+x);printf("                                                                      ");
   					gotoxy(27,10+x);printf("masukan data %d= ",x+1);gets(a);
                  val=valangka(a);
   				}while(valangka(a)!=0);
          			med[x]=atof(a);
   			}

   			for(int y=0;y<num;y++){
   				gotoxy(27+u,28);printf("%d ",med[y]);
        			u+=4;
   			}

   			for(int x=0;x<num;x++){
   				for(int y=x;y<num;y++){
      				if(med[x]>med[y]){
      					tam=med[y];
         				med[y]=med[x];
         				med[x]=tam;
         			}
      			}gotoxy(27+p,29);printf("%d ",med[x]);
         		p+=4;
   			}
   		if(num%2==0){
   			ke=num/2;
      		if(ke%2==0){
         		q=ke/2;
      			quartil=med[q]+med[q-1];
      			quartil=quartil/2;
         		gotoxy(27,30);printf("                %d",num);
         		gotoxy(27,31);printf("letak Quartil= ---- = %d",q);
         		gotoxy(27,32);printf("                 4");
         		gotoxy(27,33);printf("        %d+%d",med[q],med[q-1]);
         		gotoxy(27,34);printf("quartil=----");
         		gotoxy(27,35);printf("         2");

      		}else{
      			q=ke/2;
         		q=q+(0.5);
         		quartil=med[q];
         		gotoxy(27,30);printf("                 %d",num);
         		gotoxy(27,31);printf("letak Quartil= ---- = %d",q);
         		gotoxy(27,32);printf("                 4");
         		gotoxy(27,34);printf("letak Quartil= %d",q+1);
      		}

   		}else{
   			ke=num/4;
      		quartil=med[ke];
      			gotoxy(27,30);printf("                %d",num);
         		gotoxy(27,31);printf("letak Quartil= ---- = %d",ke);
         		gotoxy(27,32);printf("                 4");
         		gotoxy(27,34);printf("letak Quartil= %d",ke+1);
   		}
   		gotoxy(27,36);printf("quartil bawah = %.1f ",quartil);

   		tanya3();

   }else{
   	latquartil();
   }
}
///////////////////////////////////////////////////////////////////////////////
void quiz(){
   soal1();
}
////////////////////////////////////////////////////////////////////////////////
void soal1(){
		bingkai();
   	gotoxy(25,9);printf("1. Diketahui data nilai MTK anak kelas 12 yaitu");
   	gotoxy(25,10);printf("   90,75,85,100,80,75,90,100,60,95. Berapakah mean");
   	gotoxy(25,11);printf("   dari data  tersebut?                        ");
   	gotoxy(25,12);printf("   a.75                               c.85 ");
   	gotoxy(25,13);printf("   b.80                               d.95 ");

      kotak();
      	gotoxy(129,7);printf("1 dari 10");
      jw1();
      tny1();
}
////////////////////////////////////////////////////////////////////////////////
void kotak(){
	for (int x=125;x<140;x++){
      textcolor(41);
   	gotoxy(x,8);cprintf("%c",219);
   } for(int x=6;x<=8;x++){
   	gotoxy(125,x);cprintf("%c",219);
   }
}
////////////////////////////////////////////////////////////////////////////////
void jw1(){
      gotoxy(25,15);printf("Masukan pilihan jawaban anda= ");
        jwb=getche();
        gotoxy(44,15);Sleep(150);
      	if(jwb=='c'){
      		poin+=10;
      	}else if(jwb=='a'){
      		poin+=0;
      	}else if(jwb=='b'){
      		poin+=0;
      	}else if(jwb=='d'){
      		poin+=0;
      	}else{
         	gotoxy(55,15);printf("               ");
            textcolor(12);gotoxy(35,17);cprintf("Inputan hanya (a)/(b)/(c)/(d)");Sleep(1000);
            gotoxy(35,17);printf("                             ");
      	  	jw1();
      	}
}
////////////////////////////////////////////////////////////////////////////////
void tny1(){
    gotoxy(25,19);printf("Apakah anda ingin melanjutkannya (y)/(n) ");
      tanya=getche();
      gotoxy(40,19);Sleep(150);
   		if(tanya=='y'){
      		clrscr();
            soal2();
      	}else if(tanya=='n'){
         	gotoxy(25,21);printf(" Nilai yang Anda Dapatkan = %d/10",poin);
            getch();
         	clrscr();
            menu();
      	}else{
         	gotoxy(66,19);printf("               ");
            textcolor(12);gotoxy(35,21);cprintf("Inputan hanya (y)/(n)");Sleep(1000);
            gotoxy(35,21);printf("                             ");
            tny1();
         }
}
///////////////////////////////////////////////////////////////////////////////
void soal2(){
		bingkai();
   	gotoxy(25,9);printf("2. Diketahui data yaitu 2,1,4,5,3,3,6,7 ");
   	gotoxy(25,10);printf("   Berapakah median dari data  tersebut?");
   	gotoxy(25,11);printf("   a.5                               c.4,5 ");
   	gotoxy(25,12);printf("   b.3,5                             d.4 ");

      kotak();
      	gotoxy(129,7);printf("2 dari 10");
      jw2();
      tny2();

}
////////////////////////////////////////////////////////////////////////////////
void jw2(){
	gotoxy(25,13);printf("Masukan pilihan jawaban anda= ");
       jwb=getche();
        gotoxy(44,13);Sleep(150);
      	if(jwb=='b'){
      		poin+=10;
      	}else if(jwb=='a'){
      		poin+=0;
      	}else if(jwb=='c'){
      		poin+=0;
      	}else if(jwb=='d'){
      		poin+=0;
      	}else{
         	gotoxy(55,13);printf("    ");
            textcolor(12);gotoxy(35,15);cprintf("Inputan hanya (a)/(b)/(c)/(d)");Sleep(150);
            gotoxy(35,15);printf("                             ");
      		jw2();
      	}
}
////////////////////////////////////////////////////////////////////////////////
void tny2(){
	gotoxy(25,17);printf("Apakah anda ingin melanjutkannya (y)/(n) ");
      tanya=getche();
      gotoxy(40,17);Sleep(150);
			if(tanya=='y'){
     			clrscr();
           	soal3();
     		}else if(tanya=='n'){
        		gotoxy(25,19);printf(" Nilai yang Anda Dapatkan = %d/20",poin);
            getch();
        		clrscr();
           	menu();
     		}else{
        		gotoxy(66,17);printf("               ");
        		textcolor(12);gotoxy(35,19);cprintf("Inputan hanya (y)/(n)");Sleep(150);
           	gotoxy(35,19);printf("                              ");
           	tny2();
        	}
}
////////////////////////////////////////////////////////////////////////////////
void soal3(){
		bingkai();
   	gotoxy(25,9);printf("3. Diketahui data berat badan kelas 11 yaitu");
   	gotoxy(25,10);printf("   45.5 42 43 50 54 42 43 46 43 Berapakah modus");
   	gotoxy(25,11);printf("   dari data  tersebut?                        ");
   	gotoxy(25,12);printf("   a.45.5                               c.46 ");
   	gotoxy(25,13);printf("   b.42                               d.43 ");

	 kotak();
        gotoxy(129,7);printf("3 dari 10");
    jw3();
    tny3();
}
////////////////////////////////////////////////////////////////////////////////
void jw3(){
	gotoxy(25,15);printf("Masukan pilihan jawaban anda= ");
     jwb=getche();
         gotoxy(44,15);Sleep(150);
      	if(jwb=='d'){
      		poin+=10;
      	}else if(jwb=='a'){
      		poin+=0;
      	}else if(jwb=='b'){
      		poin+=0;
      	}else if(jwb=='c'){
      		poin+=0;
      	}else{
         	gotoxy(55,15);printf("               ");
            textcolor(12);gotoxy(35,17);cprintf("Inputan hanya (a)/(b)/(c)/(d)");Sleep(150);
            gotoxy(35,17);printf("                             ");
      	  	jw3();
      	}
}
///////////////////////////////////////////////////////////////////////////////
void tny3(){
   gotoxy(25,19);printf("Apakah anda ingin melanjutkannya (y)/(n) ");
        tanya=getche();
        gotoxy(40,19);Sleep(150);
   			if(tanya=='y'){
      			clrscr();
          	  	soal4();
      		}else if(tanya=='n'){
         		gotoxy(25,21);printf(" Nilai yang Anda Dapatkan = %d/30",poin);
               getch();
         		clrscr();
            	menu();
      		}else{
         		gotoxy(66,19);printf("               ");
           		textcolor(12);gotoxy(35,21);cprintf("Inputan hanya (y)/(n)");Sleep(150);
            	gotoxy(35,21);printf("                              ");
             	tny3();
         	}
}
///////////////////////////////////////////////////////////////////////////////
void soal4(){
		bingkai();
   	gotoxy(25,9);printf("4. Diketahui data yaitu 2 4 3 5 6 8 7 2  ");
   	gotoxy(25,10);printf("   Berapakah kuartil bawah, kuartil atas ");
   	gotoxy(25,11);printf("   dari data  tersebut?                  ");
   	gotoxy(25,12);printf("   a.2,5 dan 6,5                             c.2 dan 6,5 ");
   	gotoxy(25,13);printf("   b.1,5 dan 3                               d.2,5 dan 4 ");

	kotak();
   	gotoxy(129,7);printf("4 dari 10");
   jw4();
   tny4();
}
////////////////////////////////////////////////////////////////////////////////
void jw4(){
	gotoxy(25,15);printf("Masukan pilihan jawaban anda= ");
       jwb=getche();
         gotoxy(44,15);Sleep(150);
      	if(jwb=='a'){
      		poin+=10;
      	}else if(jwb=='b'){
      		poin+=0;
      	}else if(jwb=='c'){
      		poin+=0;
      	}else if(jwb=='d'){
      		poin+=0;
      	}else{
         	gotoxy(55,15);printf("               ");
            textcolor(12);gotoxy(35,17);cprintf("Inputan hanya (a)/(b)/(c)/(d)");Sleep(150);
            gotoxy(35,17);printf("                             ");
         	jw4();
      	}
}
////////////////////////////////////////////////////////////////////////////////
void tny4(){
   gotoxy(25,17);printf("Apakah anda ingin melanjutkannya (y)/(n) ");
   tanya=getche();
    gotoxy(40,17);Sleep(150);
   		if(tanya=='y'){
      		clrscr();
            soal5();
      	}else if(tanya=='n'){
         	gotoxy(25,19);printf(" Nilai yang Anda Dapatkan = %d/40",poin);
            getch();
         	clrscr();
            menu();
      	}else{
         	gotoxy(66,17);printf("               ");
            textcolor(12);gotoxy(35,21);cprintf("Inputan hanya (y)/(n)");Sleep(150);
            gotoxy(35,21);printf("                              ");
       		tny4();
         }
}
////////////////////////////////////////////////////////////////////////////////
void soal5(){
		bingkai();
   	gotoxy(25,9);printf("5. Diketahui data sebagai berikut 1 2 2 2 3 4 4 5.");
   	gotoxy(25,10);printf("   berapakah Desil ke 2,desil ke 4 dan desil ke 6 ");
   	gotoxy(25,11);printf("   dari data  tersebut?                           ");
   	gotoxy(25,12);printf("   a. 1.8 , 0 , dan 3.4             c.2 , 0 , dan 4 ");
   	gotoxy(25,13);printf("   b. 1.8 , 2 , dan 3.4             d.3 , 1 , dan 4 ");

      kotak();
      	gotoxy(129,7);printf("5 dari 10");
      jw5();
      tny5();
}
///////////////////////////////////////////////////////////////////////////////
void jw5(){
   	gotoxy(25,15);printf("Masukan pilihan jawaban anda= ");
        jwb=getche();
         gotoxy(44,15);Sleep(150);
      	if(jwb=='a'){
      		poin+=10;
      	}else if(jwb=='b'){
      		poin+=0;
      	}else if(jwb=='c'){
      		poin+=0;
      	}else if(jwb=='d'){
      		poin+=0;
      	}else{
      		gotoxy(55,15);printf("               ");
            textcolor(12);gotoxy(35,17);cprintf("Inputan hanya (a)/(b)/(c)/(d)");Sleep(150);
            gotoxy(35,17);printf("                             ");
            jw5;
      	}
}

///////////////////////////////////////////////////////////////////////////////
void tny5(){
      gotoxy(25,17);printf("Apakah anda ingin melanjutkannya (y)/(n) ");
         tanya=getche();
         gotoxy(40,17);Sleep(150);
   		if(tanya=='y'){
      		clrscr();
            soal6();
      	}else if(tanya=='n'){
         	gotoxy(25,19);printf(" Nilai yang Anda Dapatkan = %d/50",poin);
            getch();
         	clrscr();
            menu();
      	}else{
         	gotoxy(66,17);printf("               ");
            textcolor(12);gotoxy(35,21);cprintf("Inputan hanya (y)/(n)");Sleep(150);
            gotoxy(35,21);printf("                              ");
            tny5();
         }
}
////////////////////////////////////////////////////////////////////////////////
void soal6(){
   bingkai();
   for(int x=27;x<=47;x++){
   	gotoxy(x,12);printf("%c",219);
      gotoxy(x,14);printf("%c",219);
      gotoxy(x,23);printf("%c",219);
   }
   for(int x=12;x<=23;x++){
   	gotoxy(27,x);printf("%c",219);
      gotoxy(37,x);printf("%c",219);
		gotoxy(47,x);printf("%c",219);
   }
   gotoxy(27,10);printf("6. ");
   gotoxy(30,13);printf("Data");    gotoxy(42,13);printf("f");
   gotoxy(30,15);printf("1-5 ");    gotoxy(42,15);printf("4");
   gotoxy(30,17);printf("6-10 ");   gotoxy(42,17);printf("15");
   gotoxy(30,19);printf("11-15");  gotoxy(42,19);printf("7");
   gotoxy(30,21);printf("16-20");  gotoxy(42,21);printf("4");

   gotoxy(60,15);printf("Berapakah median dari data disamping? ");
   gotoxy(60,17);printf("a. 9,12                        c.8,12");
   gotoxy(60,18);printf("b. 9,17                        d.8,17");

   kotak();
   	gotoxy(129,7);printf("6 dari 10");
   jw6();
   tny6();
}
///////////////////////////////////////////////////////////////////////////////
void jw6(){
   gotoxy(60,20);printf("Masukan pilihan jawaban anda= ");
        jwb=getche();
         gotoxy(70,20);Sleep(150);
         if(jwb=='b'){
      		poin+=10;
      	}else if(jwb=='a'){
      		poin+=0;
      	}else if(jwb=='c'){
      		poin+=0;
      	}else if(jwb=='d'){
      		poin+=0;
      	}else{
      		gotoxy(90,20);printf("           ");
            textcolor(12);gotoxy(70,22);cprintf("Inputan hanya (a)/(b)/(c)/(d)");Sleep(150);
            gotoxy(70,22);printf("                             ");
            jw6();
      	}
}
////////////////////////////////////////////////////////////////////////////////
void tny6(){
   	gotoxy(60,22);printf("Apakah anda ingin melanjutkannya y/n ");
         tanya=getche();
         gotoxy(70,22);Sleep(150);
   		if(tanya=='y'){
      		clrscr();
            soal7();
      	}else if(tanya=='n'){
         	gotoxy(60,24);printf(" Nilai yang Anda Dapatkan = %d/60",poin);
            getch();
         	clrscr();
            menu();
      	}else{
         	gotoxy(97,22);printf("               ");
           	textcolor(12);gotoxy(100,24);cprintf("Inputan hanya (y)/(n)");Sleep(150);
            gotoxy(100,24);printf("                              ");
     			tny6();
         }
}
////////////////////////////////////////////////////////////////////////////////
void soal7(){
	bingkai();
   for(int x=27;x<=47;x++){
   	gotoxy(x,12);printf("%c",219);
      gotoxy(x,14);printf("%c",219);
      gotoxy(x,29);printf("%c",219);

   }for(int x=12;x<=29;x++){
   	gotoxy(27,x);printf("%c",219);
      gotoxy(37,x);printf("%c",219);
		gotoxy(47,x);printf("%c",219);
   }
   gotoxy(27,10);printf("7. ");
   gotoxy(30,13);printf("Data");    gotoxy(42,13);printf("f");
   gotoxy(30,15);printf("21-30");   gotoxy(42,15);printf("1");
   gotoxy(30,17);printf("31-40");    gotoxy(42,17);printf("1");
   gotoxy(30,19);printf("41-50");    gotoxy(42,19);printf("3");
   gotoxy(30,21);printf("51-60");    gotoxy(42,21);printf("10");
   gotoxy(30,23);printf("61-70");    gotoxy(42,23);printf("8");
   gotoxy(30,25);printf("71-80");    gotoxy(42,25);printf("5");
   gotoxy(30,27);printf("81-90");    gotoxy(42,27);printf("2");

   gotoxy(60,15);printf("Berapakah Median dari data di samping? ");
   gotoxy(60,17);printf("a. 57,78                       c.58");
   gotoxy(60,18);printf("b. 59,2                        d.56,78");

   kotak();
   	gotoxy(129,7);printf("7 dari 10");
   jw7();
   tny7();
}
///////////////////////////////////////////////////////////////////////////////
void jw7(){
   gotoxy(60,20);printf("Masukan pilihan jawaban anda= ");
		jwb=getche();
        gotoxy(76,20);Sleep(150);
      	if(jwb=='a'){
      		poin+=10;
      	}else if(jwb=='b'){
      		poin+=0;
      	}else if(jwb=='c'){
      		poin+=0;
      	}else if(jwb=='d'){
      		poin+=0;
      	}else{
      		gotoxy(90,20);printf("    ");
            textcolor(12);gotoxy(70,21);cprintf("Inputan hanya (a)/(b)/(c)/(d)");Sleep(150);
            gotoxy(70,21);printf("                             ");
      		jw7();
      	}
}
////////////////////////////////////////////////////////////////////////////////
void tny7(){
   	gotoxy(60,22);printf("Apakah anda ingin melanjutkannya y/n ");
      tanya=getche();
      gotoxy(70,22);Sleep(150);
   		if(tanya=='y'){
      		clrscr();
            soal8();
      	}else if(tanya=='n'){
         	gotoxy(60,24);printf(" Nilai yang Anda Dapatkan = %d/70",poin);
            getch();
         	clrscr();
            menu();
      	}else{
         	gotoxy(97,22);printf("               ");
           	textcolor(12);gotoxy(100,24);cprintf("Inputan hanya (y)/(n)");Sleep(150);
            gotoxy(100,24);printf("                              ");
            tny7();
         }
}
////////////////////////////////////////////////////////////////////////////////
void soal8(){
	bingkai();
   for(int x=27;x<=47;x++){
   	gotoxy(x,12);printf("%c",219);
      gotoxy(x,14);printf("%c",219);
      gotoxy(x,25);printf("%c",219);

   }for(int x=12;x<=25;x++){
   	gotoxy(27,x);printf("%c",219);
      gotoxy(37,x);printf("%c",219);
		gotoxy(47,x);printf("%c",219);
   }
   gotoxy(27,10);printf("8. ");
   gotoxy(30,13);printf("Data");    gotoxy(42,13);printf("f");
   gotoxy(30,15);printf("1-5");   gotoxy(42,15);printf("4");
   gotoxy(30,17);printf("6-10");    gotoxy(42,17);printf("15");
   gotoxy(30,19);printf("11-15");    gotoxy(42,19);printf("7");
   gotoxy(30,21);printf("16-20");    gotoxy(42,21);printf("3");
   gotoxy(30,23);printf("21-25");    gotoxy(42,23);printf("3");


   gotoxy(60,15);printf("Berapakah Nilai Quartil bawah dan Quartil atas  ");
   gotoxy(60,17);printf("dari data di samping?");
   gotoxy(60,18);printf("a. 6.83 dan 14                       c.6.8 dan 14.7");
   gotoxy(60,19);printf("b. 6.83 dan 15                       d.6.8 dan 14.07");

   kotak();
   	gotoxy(129,7);printf("8 dari 10");
   jw8();
   tny8();
}
///////////////////////////////////////////////////////////////////////////////
void jw8(){
   gotoxy(60,21);printf("Masukan pilihan jawaban anda= ");
		jwb=getche();
        gotoxy(76,21);Sleep(150);
      	if(jwb=='a'){
      		poin+=10;
      	}else if(jwb=='b'){
      		poin+=0;
      	}else if(jwb=='c'){
      		poin+=0;
      	}else if(jwb=='d'){
      		poin+=0;
      	}else{
      		gotoxy(90,21);printf("    ");
            textcolor(12);gotoxy(70,22);cprintf("Inputan hanya (a)/(b)/(c)/(d)");Sleep(150);
            gotoxy(70,22);printf("                             ");
      		jw8();
      	}
}
////////////////////////////////////////////////////////////////////////////////
void tny8(){
      gotoxy(60,24);printf("Apakah anda ingin melanjutkannya y/n ");
      tanya=getche();
      gotoxy(70,24);Sleep(150);
   		if(tanya=='y'){
      		clrscr();
            soal9();
      	}else if(tanya=='n'){
         	gotoxy(60,28);printf(" Nilai yang Anda Dapatkan = %d/80",poin);
            getch();
         	clrscr();
            menu();
      	}else{
         	gotoxy(97,24);printf("               ");
           	textcolor(12);gotoxy(100,26);cprintf("Inputan hanya (y)/(n)");Sleep(150);
            gotoxy(100,26);printf("                              ");
            tny8();
         }
}
////////////////////////////////////////////////////////////////////////////////
void soal9(){
	bingkai();
   for(int x=27;x<=47;x++){
   	gotoxy(x,12);printf("%c",219);
      gotoxy(x,14);printf("%c",219);
      gotoxy(x,29);printf("%c",219);

   }for(int x=12;x<=29;x++){
   	gotoxy(27,x);printf("%c",219);
      gotoxy(37,x);printf("%c",219);
		gotoxy(47,x);printf("%c",219);
   }
   gotoxy(27,10);printf("9. ");
   gotoxy(30,13);printf("Data");    gotoxy(42,13);printf("f");
   gotoxy(30,15);printf("19-27");   gotoxy(42,15);printf("4");
   gotoxy(30,17);printf("28-36");    gotoxy(42,17);printf("6");
   gotoxy(30,19);printf("37-45");    gotoxy(42,19);printf("8");
   gotoxy(30,21);printf("46-54");    gotoxy(42,21);printf("10");
   gotoxy(30,23);printf("55-63");    gotoxy(42,23);printf("6");
   gotoxy(30,25);printf("64-72");    gotoxy(42,25);printf("3");
   gotoxy(30,27);printf("73-81");    gotoxy(42,27);printf("3");

   gotoxy(60,15);printf("Berapakah Desil pertama, desil tiga, dan desil lima ");
   gotoxy(60,17);printf("dari data di samping? ");
   gotoxy(60,18);printf("a. 27.5 , 34.4 dan 47.3        c.25.5 , 38.75 dan 46.5");
   gotoxy(60,19);printf("b. 25.5 , 35.6 dan 40.5        d.27.5 , 38.75 dan 47.3");

	kotak();
   	gotoxy(129,7);printf("9 dari 10");
   jw9();
   tny9();
}
///////////////////////////////////////////////////////////////////////////////
void jw9(){
    gotoxy(60,21);printf("Masukan pilihan jawaban anda= ");
		jwb=getche();
        gotoxy(76,21);Sleep(150);
      	if(jwb=='d'){
      		poin+=10;
      	}else if(jwb=='b'){
      		poin+=0;
      	}else if(jwb=='c'){
      		poin+=0;
      	}else if(jwb=='a'){
      		poin+=0;
      	}else{
      		gotoxy(90,21);printf("    ");
            textcolor(12);gotoxy(70,22);cprintf("Inputan hanya (a)/(b)/(c)/(d)");Sleep(150);
            gotoxy(70,22);printf("                             ");
      		jw9();
      	}
}
////////////////////////////////////////////////////////////////////////////////
void tny9(){
      gotoxy(60,24);printf("Apakah anda ingin melanjutkannya y/n ");
      tanya=getche();
      gotoxy(70,24);Sleep(150);
   		if(tanya=='y'){
      		clrscr();
            soal10();
      	}else if(tanya=='n'){
         	gotoxy(60,28);printf(" Nilai yang Anda Dapatkan = %d/90",poin);
            getch();
         	clrscr();
            menu();
      	}else{
         	gotoxy(97,24);printf("               ");
           	textcolor(12);gotoxy(100,26);cprintf("Inputan hanya (y)/(n)");Sleep(150);
            gotoxy(100,26);printf("                              ");
            tny9();
         }
}

////////////////////////////////////////////////////////////////////////////////
void soal10(){
	bingkai();
   int frek[6]={2,4,10,6,5,3};
   int x,y,xp=0;

   for( x=0; x<6; x++){
   	for( y=0;y<frek[x];y++){
      textcolor(2);
      	gotoxy(xp+27, 20-y);cprintf("%c%c%c%c%c",219,219,219,219,219);
      }textcolor(5);
      gotoxy(xp+28, 19-y);cprintf("%2d",frek[x]);
      xp+=6;
   }
   for(int x=9;x<=20;x++){
   	gotoxy(25,x);printf("%c",219);
   }
   for(int x=25;x<=63;x++){
   	gotoxy(x,20);printf("%c",219);
   }
   gotoxy(28,21);printf("2-6");
   gotoxy(34,21);printf("7-11");
   gotoxy(40,21);printf("12-16");
   gotoxy(46,21);printf("17-21");
   gotoxy(52,21);printf("22-26");
   gotoxy(58,21);printf("27-31");

   gotoxy(27,7);printf("10. ");
   gotoxy(70,10);printf("Berapakah Modus dari data di samping?");
   gotoxy(70,11);printf("a. 16,5                        c.14,0");
   gotoxy(70,12);printf("b. 14,5                        d.12,0");

   kotak();
   	gotoxy(129,7);printf("10 dari 10");
   jw10();
   tny10();
}
///////////////////////////////////////////////////////////////////////////////
void jw10(){
   gotoxy(70,14);printf("Masukan pilihan jawaban anda= ");
     jwb=getche();
        gotoxy(86,14);Sleep(150);
   		if(jwb=='b'){
      		poin+=10;
      	}else if(jwb=='a'){
      		poin+=0;
      	}else if(jwb=='c'){
      		poin+=0;
      	}else if(jwb=='d'){
      		poin+=0;
      	}else{
      		gotoxy(100,14);printf("    ");
            textcolor(12);gotoxy(80,15);cprintf("Inputan hanya (a)/(b)/(c)/(d)");Sleep(150);
            gotoxy(80,15);printf("                             ");
      		jw10();
      	}
}
////////////////////////////////////////////////////////////////////////////////
void tny10(){
   	gotoxy(70,17);printf("Tekan Enter Untuk Menuju Menu ");
        tanya=getche();
      	gotoxy(100,17);Sleep(150);
   		if(tanya==13){
         	gotoxy(70,19);printf(" Nilai yang Anda Dapatkan = %d/100",poin);
            getch();
            clrscr();
            menu();
			}else{
         	gotoxy(100,17);printf("               ");
           	textcolor(12);gotoxy(100,19);cprintf("Inputan Berupa Enter Saja");Sleep(150);
            gotoxy(100,19);printf("                                     ");
            tny10();
         }
}
////////////////////////////////////////////////////////////////////////////////
int valangka(char angka[30]){
	int error=0;
   for(int x=0;angka[x]!='\0';x++){
   	if(angka[x]>=48 && angka[x]<=57){
      	error=0;
      }else{
      	error++;
      }
   }
   return error;
}
////////////////////////////////////////////////////////////////////////////////
int valnama(char huruf[15]){
	int error=0;
   for(int x=0;huruf[x]!='\0';x++){
   	if(huruf[x]>=65 && huruf[x]<=90 || huruf[x]>=97 && huruf[x]<=122 || huruf[x]==39||huruf[x]==' '){
      	if(huruf[0]==' ' || huruf[0]==39){
         	error++;
         }else if(huruf[x]==' '&&huruf[x-1]==' '){
				error++;
         }
      }else{
      	error++;
      }
   }
   return error;
}
////////////////////////////////////////////////////////////////////////////////
int valjenis(char jns){
	int error=0;
   	if(jns=='L' || jns=='P' || jns=='l' || jns=='p'){
      	error+=0;
      }else{
      	error++;
      }
   return error;
}
////////////////////////////////////////////////////////////////////////////////
int valumur(char umr[]){
	int error=0;
   int a=atoi(umr);
   if(strlen(umr)>=1 && strlen(umr)<3 && a>=12 && a<=80){
   	for(int x=0;x<strlen(umr);x++){
   		if(umr[x]>=48 && umr[x]<=57 ){
            if(umr[0]=='0' || (umr[0]<=9 && umr[1]==NULL)){
            	error++;
            }else{
            	error=0;
            }
      	}else{
      		error++;
      	}
   	}
   }else{
   	error++;
   }
   return error;
}
////////////////////////////////////////////////////////////////////////////////
int valpass(char psw[]){
	int error=0;
   if(strlen(psw)>=4 && strlen(psw)<=8){
   	for(int x=0;x<strlen(psw);x++){
   		if(psw[x]>=48 && psw[x]<=57){
         	error=0;
      	}else{
      		error++;
      	}
   	}
   }else{
   	error++;
   }
   return error;
}
////////////////////////////////////////////////////////////////////////////////

main(){

awal();

getch();
}