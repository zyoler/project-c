/*______________________________________________________________________________

                            BISMILLAHIRRAHMAANIRRAHIIM
______________________________________________________________________________*/
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
/////////////////////////////APLIKASI BELAJAR BAHASA////////////////////////////
/////////////////////////////////////120x40/////////////////////////////////////
/*
									   	INDAH MENTARI

                            D3 MANAJEMEN INFORMATIKA

                            			NEOPHYTE
                                                                              */
////////////////////////////////////////////////////////////////////////////////
/////////////////////mulai 28 november sampai 10 desember 2020//////////////////                                                                           //
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
/*                                     4
                                       3
                                       2
                                       1                                      */
//----------------------------------LIBRARY-----------------------------------//

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

///////////////////////////////////PROTO-TYPE///////////////////////////////////
void login();
void bingkai();
void background1();
void tabel();
void pilihan1();
void basic1();
void basic2();
void t1();
void logo();
void t2();
void lan1();
void t3();
void lan2();
void ld1();
void lan3();
void ld2();
void lan4();
void ld3();
void datadiri();
void hadiah(int gift);
void cintakita();
void quiz();
void s1();
void s2();
void belajar();
void s3();
void s4();
void s5();
void s6();
void s7();
void s8();
void s9();
void s10();
void s11();
void s12();
void s13();
void s14();
void s15();
void s16();
void s17();
void s18();
void s19();
void s20();
void s21();
void s22();
void s23();
void s24();
void s25();
void random();
void kotak();
void k1();
void k2();
void k3();
void k4();
void k5();
void k6();
int vhur(char a[]);
void kotakkhusus();

//-------------------------------VARIABLE GLOBAL------------------------------//

char lanjut,confirm;
int skor=0,t=0,f=0;
char jawab[1];
char pilih1[1];
char kembali[1];
char keluar[1];
char pilih2[1];
char nama[50],umur[20],nohp[20];
char nama1[50];

//////////////////////////////////////RUN//////////////////////////////////////////
main(){
login();






getch();
}
//-----------------------------------Tampilan---------------------------------//
void bingkai(){
	textcolor(14);
   for(int x=1;x<=120;x++){
   gotoxy(x,1);cprintf("%c",219);
   gotoxy(x,40);cprintf("%c",219);
   }
   textcolor(14);
   for(int x=1;x<=40;x++){
   gotoxy(1,x);cprintf("%c",219);
   gotoxy(120,x);cprintf("%c",219);
   }
}
void background1(){
	textbackground(5);
   	for(int x=2;x<=119;x++){
      	for(int y=2;y<=39;y++){
         	gotoxy(x,y);cprintf(" ");
         }
      }
}
void tabel(){
	textcolor(14);
   for(int x=43;x<=73;x++){
   gotoxy(x,15);cprintf("%c",219);
   gotoxy(x,19);cprintf("%c",219);
   gotoxy(x,23);cprintf("%c",219);
   gotoxy(x,27);cprintf("%c",219);
   gotoxy(x,31);cprintf("%c",219);
	}

   for(int y=15;y<=31;y++){
   gotoxy(43,y);cprintf("%c",219);
   gotoxy(73,y);cprintf("%c",219);
   }
}


/////////////////////////////////VALIDASI NAMA//////////////////////////////////

bool vahur(char a[]){


if(a[0]==' '||a[strlen(a)-1]==' '){

         return false;
	}
   if(a[0]==NULL){

      return false;
   }

	for(int x=0;strlen(a);x++){
		if(!(a[x]>='a'&&a[x]<='z'||a[x]>='A'&&a[x]<='Z'||a[x]==' '&&a[x+1]!=' '||a[x]=='-'&&a[x-1]==' '&&a[x+1]==' '||a[x]=='\''&&a[x-1]==' '&&a[x+1]==' ')){

         return false;
      }
   }

   return true;
};

//============================================================================//


void datadiri(){
kotakkhusus();
//char nama1[50];
do{
gotoxy(70,4);printf("Nama:");gets(nama1);

	if(vahur(nama1)==0){
   	gotoxy (75,13); printf("%s",nama1);
      clrscr();
      textbackground(7);textcolor(9);
	gotoxy(75,15);cprintf("================================");
	gotoxy(75,16);cprintf("        YOUR CODE 161115        ");
	gotoxy(75,17);cprintf("Lakukan transaksi di Mini market");
	gotoxy(75,18);cprintf("       Kode berlaku 1 Jam       ");
	gotoxy(75,19);cprintf("________________________________");

   }else{
   	printf("Invalid!!!");Sleep(500);
      printf("             ");Sleep(300);
   }
}while(vahur(nama1)!=0);
	belajar();
};

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

void t1(){
	for(int x=120;x>=1;x--){
   	for(int y=40;y>=1;y--){
			gotoxy(x,y);textcolor(5);cprintf("%c",219);
      }
   }printf("\n");  t2();
};

void t2(){
	for(int x=1;x<=40;x++){
   	textcolor(x);cprintf("Thank You!!! ;)");
   }
};

//----------------------------------------------------------------------------//
void login(){
bingkai();
background1();

char pin[30];
for(int x=1;x<=120;x++){
      gotoxy(x,1);printf("%c",219);
      gotoxy(x,30);printf("%c",219);
}for(int y=1;y<=29;y++){
      gotoxy(1,y);printf("%c",219);
      gotoxy(120,y);printf("%c",219);
      }

      for(int x=1;x<=30;x++){
      gotoxy(45+x,12);printf("%c",219);
      gotoxy(45+x,17);printf("%c",219);
}for(int y=0;y<=5;y++){
      gotoxy(45,12+y);printf("%c",219);
      gotoxy(75,12+y);printf("%c",219);
      }
      gotoxy(46,13);cprintf("Pin : ");gets(pin);
      if(strcmp(pin,"02042011015")==0){
      gotoxy(46,13);printf("Berhasil Login");clrscr();ld1();
      pilihan1();
      }else{
      gotoxy(46,13);printf("coba lagi");Sleep(500);
      gotoxy(46,13);printf("                     ");
      login();}
};

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
void t3(){
textcolor(14);
textcolor(14);gotoxy(5,5);cprintf("Welcome");Sleep(500);clrscr();
textcolor(11);gotoxy(87,3);cprintf("Welcome");Sleep(500);
textcolor(1);gotoxy(27,7);cprintf("Welcome");Sleep(500);clrscr();
textcolor(4);gotoxy(58,7);cprintf("Welcome");Sleep(500);
textcolor(2);gotoxy(109,8);cprintf("Welcome");Sleep(500);clrscr();
textcolor(3);gotoxy(52,4);cprintf("Welcome");Sleep(500);
textcolor(5);gotoxy(79,9);cprintf("Welcome");Sleep(500);clrscr();
textcolor(7);gotoxy(108,20);cprintf("Welcome");Sleep(500);
textcolor(8);gotoxy(3,12);cprintf("Welcome");Sleep(500);clrscr();
textcolor(5);gotoxy(7,16);cprintf("Welcome");Sleep(500);
textcolor(12);gotoxy(112,6);cprintf("Welcome");Sleep(500);clrscr();
textcolor(10);gotoxy(65,10);cprintf("Welcome");Sleep(500);
textcolor(4);gotoxy(16,4);cprintf("Welcome");Sleep(500);clrscr();
textcolor(13);gotoxy(55,9);cprintf("Welcome");Sleep(500);
textcolor(15);gotoxy(118,16);cprintf("Welcome");Sleep(500);clrscr();
textcolor(12);gotoxy(100,9);cprintf("Welcome");Sleep(500);
textcolor(1);gotoxy(12,9);cprintf("Welcome");Sleep(500);clrscr();
textcolor(14);gotoxy(111,20);cprintf("Welcome");Sleep(500);
textcolor(14);gotoxy(40,10);cprintf("Welcome");Sleep(500);clrscr();
textcolor(6);gotoxy(111,9);cprintf("Welcome");Sleep(500);
textcolor(8);gotoxy(76,7);cprintf("Welcome");Sleep(500);clrscr();
textcolor(7);gotoxy(81,15);cprintf("Welcome");Sleep(500);
textcolor(9);gotoxy(12,6);cprintf("Welcome");Sleep(500);clrscr();
textcolor(15);gotoxy(155,19);cprintf("Welcome");Sleep(500);
textcolor(5);gotoxy(4,11);cprintf("Welcome");Sleep(500);clrscr();
textcolor(14);gotoxy(50,8);cprintf("Welcome");Sleep(500);
};

////////////////////////////////////////////////////////////////////////////////

void cintakita(){
gotoxy(30,6);  printf("                      %c%c             %c%c                      \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,7);  printf("                    %c%c%c%c%c%c         %c%c%c%c%c%c                    \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,8);  printf("                  %c%c%c%c%c%c%c%c%c%c     %c%c%c%c%c%c%c%c%c%c                  \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,9);  printf("                %c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c                \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,10); printf("                %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,11); printf("                 %c%c%c%c%c%c%c%c%c%c        %c%c%c%c%c%c%c%c%c                 \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,12); printf("                  %c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c                  \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,13); printf("                   %c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c                   \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,14); printf("                    %c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c                    \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,15); printf("                     %c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c                     \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,16); printf("                      %c%c%c%c%c        %c%c%c%c                      \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,17); printf("                       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                       \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,18); printf("                        %c%c%c%c%c%c%c%c%c%c%c%c%c                        \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,19); printf("                         %c%c%c%c%c%c%c%c%c%c%c                         \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,20); printf("                          %c%c%c%c%c%c%c%c%c                          \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,21); printf("                           %c%c%c%c%c%c%c                           \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,22); printf("                            %c%c%c%c%c                            \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,23); printf("                             %c%c%c                             \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(30,24); printf("                              %c                              \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(35,26);printf("                              DIPERSEMBAHKAN OLEH BAHASA C                   ");
   };

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//

void hai(){
	for (int x=80;x>=1;x--){
	textbackground(7);
	textcolor(x);cprintf("Welcome Welcome Welcome Welcome Welcome Welcome Welcome Welcome Welcome Welcome");Sleep(50);
}
};

//____________________________________________________________________________//

void ld1(){
	for(int z=1;z<=100;z++){
   	Sleep(20);
      textcolor(219);
      gotoxy(60,19);cprintf("%d%",z);
      gotoxy(45+z/3,20);cprintf("%c",219);
      }clrscr();

};

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//

void ld2(){
    for(int z=1;z<=100;z++){
   	Sleep(20);
      textcolor(219);
      gotoxy(49,19);cprintf("Check Your Score..");
      gotoxy(45+z/4,20);cprintf("%c",219);
      }

};
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//

void ld3(){
    for(int z=1;z<=100;z++){
   	Sleep(20);
      textcolor(219);
      gotoxy(45+z/4,20);cprintf("%c",3);
            }
};

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//

void pilihan1(){
tabel();
	textcolor(9);
   gotoxy(44,17);cprintf("1. Belajar");
   gotoxy(44,21);cprintf("2. Quiz");
   gotoxy(44,25);cprintf("3. Kursus");
   gotoxy(44,29);cprintf("4. Keluar" );
   gotoxy(44,33);cprintf("Masukkan pilihan: ");
    while (true){
    gotoxy(63,33);gets(pilih1);
   	if(strcmp (pilih1,"1")==0){
      	clrscr();
         bingkai();
         belajar();
         getch();
      }
      else if(strcmp (pilih1,"2")==0){
      	clrscr();
        	s1();
         getch();
      }
      else if(strcmp (pilih1,"3")==0){
         clrscr();
         bingkai();
			textcolor(3);
   		gotoxy(44,17);cprintf("1. Silver Ticket Courses");
   		gotoxy(44,21);cprintf("2. Gold Ticket Courses");
   		gotoxy(44,25);cprintf("3. Diamond Ticket Courses");
   		gotoxy(44,29);cprintf("4. Platinum Ticket Courses" );
   		gotoxy(44,33);cprintf("Masukkan pilihan: ");
      	while (true){
    		gotoxy(63,33);gets(pilih1);
      	if(strcmp (pilih1,"1")==0){
      	clrscr();
         bingkai();
         lan1();
         clrscr();
         random();
         getch();
      	}
      	else if(strcmp (pilih1,"2")==0){
      	clrscr();
        	t1();
         lan2();
         clrscr();
         random();
         getch();
      	}
       	else if(strcmp (pilih1,"3")==0){
      	clrscr();
        	t1();
         lan3();
         clrscr();
         k2();
         getch();
      	} else if(strcmp (pilih1,"4")==0){
      	clrscr();
        	t1();
         lan4();
         clrscr();
         random();
         getch();
      	}
         }



      }
      else if(strcmp (pilih1,"4")==0){
      textcolor(3);
      gotoxy(44,35);cprintf("Apakah anda yakin ingin keluar? (y/t):");
      	while (true){
      		gotoxy(84,35);gets(keluar);
      		if(strcmp(keluar,"Y")==0 || strcmp(keluar,"y")==0){
         		exit(0);
         		}
         	else if(strcmp(keluar,"T")==0 || strcmp(keluar,"t")==0){
            	clrscr();
               login();
            	}
         	else{
         		gotoxy(44,37);cprintf("Inputan tidak valid %c",33);Sleep(2000);
            	gotoxy(44,37);cprintf("                       ");
            	gotoxy(84,35);cprintf("                       ");
         	}
         }
      }
      else{
      textcolor(3);
      gotoxy(44,35);cprintf("Inputan tidak valid %c",33);Sleep(2000);
      gotoxy(44,35);cprintf("                       ");
      gotoxy(63,33);cprintf("                       ");
      }
   }
}
//==============================================================================

//============================================================================//
void lan1(){
textcolor(8);textbackground(7);
gotoxy(4,5); cprintf("_________________________________________");
gotoxy(4,6); cprintf("   |      SILVER TICKET COURSES      |   ");
gotoxy(4,7); cprintf("=========================================");
gotoxy(4,8); cprintf(":          Facilities Obtained:         :");
gotoxy(4,9); cprintf(":                                       :");
gotoxy(4,9); cprintf(": 1. 100 hour training                  :");
gotoxy(4,10);cprintf(": 2. Get certificate                    :");
gotoxy(4,11);cprintf(": 3. Get a set book                     :");
gotoxy(4,12);cprintf(": 4. Get cassete                        :");
gotoxy(4,13);cprintf(": 5. Get dictionary                     :");
gotoxy(4,14);cprintf(":                                       :");
gotoxy(4,15);cprintf(":                       BELIEVE WITH US :");
gotoxy(4,16);cprintf(":                       Rp. 2000.000.00 :");
gotoxy(4,17);cprintf(":_______________________________________:");
gotoxy(4,18);cprintf("_________________________________________");
datadiri();

};
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//
void lan2(){
textcolor(4);textbackground(6);
gotoxy(3,5); cprintf("oooooooooooooooooooooooooooooooooooooooooooo");
gotoxy(3,6); cprintf(":          GOLDEN TICKET COURSES           :");
gotoxy(3,7); cprintf("o==========================================o");
gotoxy(3,8); cprintf(": Facilities obtained : 1. 200 hour course :");
gotoxy(3,9); cprintf("o                       2. Get certificate o");
gotoxy(3,10);cprintf(":   Rp.5000.000.00      3. English Toefl   :");
gotoxy(3,11);cprintf("o                       4. Get cassette    o");
gotoxy(3,12);cprintf(":    DISCOUNT 25%       5. Get dictionary  :");
gotoxy(3,13);cprintf("o                       6. Get a set book  o");
gotoxy(3,14);cprintf(":   Rp.3.750.000.00     7. Get merchandise :");
gotoxy(3,15);cprintf("o                          BELIEVE WITH US o");
gotoxy(3,16);cprintf(":__________________________________________:");
gotoxy(3,17);cprintf("oooooooooooooooooooooooooooooooooooooooooooo");
datadiri();

};
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||//
void lan3(){
textcolor(3);textbackground(1);
gotoxy(3,5); cprintf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
gotoxy(3,6); cprintf("            DIAMOND TICKET COURSES           *");
gotoxy(3,7); cprintf("**********************************************");
gotoxy(3,8); cprintf("*            Facilities Obtained:            *");
gotoxy(3,9); cprintf("* 1. 300 hour courses     6. Get member card *");
gotoxy(3,10);cprintf("* 2. Practise English     7. Get merchandise *");
gotoxy(3,11);cprintf("* 3. Get certificate      8. Get dictionary  *");
gotoxy(3,12);cprintf("* 4. Get a set book       9. Get  totebag    *");
gotoxy(3,13);cprintf("* 5. Get cassette         10. Get stationary *");
gotoxy(3,14);cprintf("*                                            *");
gotoxy(3,15);cprintf("*                DISCOUNT 30%                *");
gotoxy(3,16);cprintf("*Rp.10.000.000.00            Rp. 7.000.000.00*");
gotoxy(3,17);cprintf("*              BELIEVE WITH US               *");
gotoxy(3,18);cprintf("*--------------------------------------------*");
gotoxy(3,19);cprintf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
datadiri();
};
//""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""//
void lan4(){
textcolor(14);textbackground(5);
gotoxy(5,5); cprintf("QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ");
gotoxy(5,6); cprintf("Q             PLATINUM TICKET COURSES            Q");
gotoxy(5,7); cprintf("Q================================================Q");
gotoxy(5,8); cprintf("Q               Facilities Obtained              Q");
gotoxy(5,9); cprintf("Q------------------------------------------------Q");
gotoxy(5,10);cprintf("Q 1. 400 hours training with native speaker      Q");
gotoxy(5,11);cprintf("Q 2. Practice English pronounciation             Q");
gotoxy(5,12);cprintf("Q 3. Get special merchandise from Miss Indah M   Q");
gotoxy(5,13);cprintf("Q 4. Get a set of language practise book         Q");
gotoxy(5,14);cprintf("Q 5. Get cassete containing English materials    Q");
gotoxy(5,15);cprintf("Q 6. Get a course membership shirt               Q");
gotoxy(5,16);cprintf("Q 7. Get a charter and certificate               Q");
gotoxy(5,17);cprintf("Q 8. Get member card           Rp. 1.5000.000.00 Q");
gotoxy(5,18);cprintf("Q 9. Get totebag                                 Q");
gotoxy(5,19);cprintf("Q 10. Get stationary              DISCOUNT 35%   Q");
gotoxy(5,20);cprintf("Q 11. Get dictionary                             Q");
gotoxy(5,21);cprintf("Q                              Rp. 9.750.000.00  Q");
gotoxy(5,22);cprintf("Q BELIEVE WITH US                                Q");
gotoxy(5,23);cprintf("QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ");
datadiri();
};
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||//
void tenses(){
textcolor(11);gotoxy(55,10);cprintf("RUMUS 16 TENSES");
textcolor(9);

gotoxy(20,15);cprintf(" __________________________________________________________________________________");
gotoxy(20,16);cprintf("| TIME/EVEN |   Simple  |    Continuos    |     Perfect   |  Perfect Continuous   |");
gotoxy(20,17);cprintf("|___________|___________|_________________|_______________|_______________________|");
gotoxy(20,18);cprintf("|  Present  |V1/V+S/V+Es| Are/Am/Is+V-ing |   Have/Has+V3 |  Have/Has+Been+V+ing  |");
gotoxy(20,19);cprintf("|___________|___________|_________________|_______________|_______________________|");
gotoxy(20,20);cprintf("|   Past    |     V2    |  Was/Were+V-ing |     Has+V3    |    Had+Been+V+ing     |");
gotoxy(20,21);cprintf("|___________|___________|_________________|_______________|_______________________|");
gotoxy(20,22);cprintf("|  Future   |  Will+V1  |  Will+Be+V-ing  |  Will+Have+V3 |  Will+Have+Been+V+ing |");
gotoxy(20,23);cprintf("|___________|___________|_________________|_______________|_______________________|");
gotoxy(20,24);cprintf("|Past Future|  Would+V1 |  Would+Be+V-ing |  Would+Have+V3| Would+Have+Been+V+ing |");
gotoxy(20,25);cprintf("|___________|___________|_________________|_______________|_______________________|");
while(true){
      	gotoxy(40,32);cprintf("Tekan 0 untuk Kembali ");gotoxy(86,32);gets(kembali);
   		if(strcmp(kembali,"0")==0){
      		clrscr();
           belajar();
      	}

         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }                                                                      //



};

void s1(){

gotoxy(20,10);cprintf("1.How much ..... it cost");
gotoxy(20,11);cprintf("a. do           b. does");


  while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"b")==0){
         skor+=4; t+=1;
      		clrscr();

           s2();
      	}else if(strcmp(jawab,"a")==0){
         skor-=2; f+=1;
          clrscr();
         s2();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }

};
void s2(){
gotoxy(20,10);cprintf("2...... I mistaken");
gotoxy(20,11);cprintf("a. Was   b. Were");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"a")==0){
         skor+=4; t+=1;
      		clrscr();

           s3();
      	}else if(strcmp(jawab,"b")==0){
         skor-=2; f+=1;
          clrscr();
         s3();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }



};

void s3(){
gotoxy(20,10);cprintf("3.She will ..... to do it");
gotoxy(20,11);cprintf("a. order        b. orders");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"a")==0){
         skor+=4; t+=1;
      		clrscr();

           s4();
      	}else if(strcmp(jawab,"b")==0){
         skor-=2; f+=1;
          clrscr();
         s4();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }

};

void s4(){
gotoxy(20,10);cprintf("4.He is ..... big problems now");
gotoxy(20,11);cprintf("a. have              b. having");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"b")==0){
         skor+=4; t+=1;
      		clrscr();

           s5();
      	}else if(strcmp(jawab,"a")==0){
         skor-=2; f+=1;
          clrscr();
         s5();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s5(){
gotoxy(20,10);cprintf("5.This idea is ..... good");
gotoxy(20,11);cprintf("a. so             b. such");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"a")==0){
         skor+=4; t+=1;
      		clrscr();

           s6();
      	}else if(strcmp(jawab,"b")==0){
         skor-=2; f+=1;
          clrscr();
         s6();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};
void s6(){
gotoxy(20,10);cprintf("6.They don't want ..... new products");
gotoxy(20,11);cprintf("a. to produce             b. produce");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"a")==0){
         skor+=4; t+=1;
      		clrscr();

           s7();
      	}else if(strcmp(jawab,"b")==0){
         skor-=2; f+=1;
          clrscr();
         s7();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};


void s7(){
gotoxy(20,10);cprintf("7.He ..... feel comfortable in this situation");
gotoxy(20,11);cprintf("a. won't                              b. want");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"a")==0){
         skor+=4; t+=1;
      		clrscr();

           s8();
      	}else if(strcmp(jawab,"b")==0){
         skor-=2; f+=1;
          clrscr();
         s8();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s8(){
gotoxy(20,10);cprintf("8.He likes ..... foreign languages");
gotoxy(20,11);cprintf("a. learn               b. to learn");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"b")==0){
         skor+=4; t+=1;
      		clrscr();

           s9();
      	}else if(strcmp(jawab,"a")==0){
         skor-=2; f+=1;
          clrscr();
         s9();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};


void s9(){
gotoxy(20,10);cprintf("9.I don't like ..... TV");
gotoxy(20,11);cprintf("a. watch   b. watching");
	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"b")==0){
         skor+=4; t+=1;
      		clrscr();

           s10();
      	}else if(strcmp(jawab,"a")==0){
         skor-=2; f+=1;
          clrscr();
         s10();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s10(){
gotoxy(20,10);cprintf("10.We received ..... presents\n");
gotoxy(20,11);cprintf("a. that              b. those\n");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"b")==0){
         skor+=4; t+=1;
      		clrscr();

           s11();
      	}else if(strcmp(jawab,"a")==0){
         skor-=2; f+=1;
          clrscr();
         s11();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s11(){
gotoxy(20,10);cprintf("11.This project can ..... you more money than you think");
gotoxy(20,11);cprintf("a. bring            b. to bring");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"a")==0){
         skor+=4; t+=1;
      		clrscr();

           s12();
      	}else if(strcmp(jawab,"b")==0){
         skor-=2; f+=1;
          clrscr();
         s12();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s12(){
gotoxy(20,10);cprintf("12.It ..... in China");
gotoxy(20,11);cprintf("a. makes  b. is made");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"b")==0){
         skor+=4; t+=1;
      		clrscr();

           s13();
      	}else if(strcmp(jawab,"a")==0){
         skor-=2; f+=1;
          clrscr();
         s13();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s13(){
gotoxy(20,10);cprintf("13.They ..... English");
gotoxy(20,11);cprintf("a. Speak  b. Are spoken." );

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"b")==0){
         skor+=4; t+=1;
      		clrscr();

           s14();
      	}else if(strcmp(jawab,"a")==0){
         skor-=2; f+=1;
          clrscr();
         s14();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s14(){
gotoxy(20,10);cprintf("14.The solution ..... .");
gotoxy(20,11);cprintf("a. will find  b. will be found");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"b")==0){
         skor+=4; t+=1;
      		clrscr();

           s15();
      	}else if(strcmp(jawab,"a")==0){
         skor-=2; f+=1;
          clrscr();
         s15();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};


void s15(){
gotoxy(20,10);cprintf("15.If it ....., I'll stay at home");
gotoxy(20,11);cprintf("a. will rain             b. rains");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"b")==0){
         skor+=4; t+=1;
      		clrscr();

           s16();
      	}else if(strcmp(jawab,"a")==0){
         skor-=2; f+=1;
          clrscr();
         s16();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s16(){
gotoxy(20,10);cprintf("16.If I .....,I would do it much more quickly");
gotoxy(20,11);cprintf("a. understand        b. understood\n");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"b")==0){
         skor+=4; t+=1;
      		clrscr();

           s17();
      	}else if(strcmp(jawab,"a")==0){
         skor-=2; f+=1;
          clrscr();
         s17();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s17(){
gotoxy(20,10);cprintf("17. ..... it now!");
gotoxy(20,11);cprintf("a. Do    b. To do");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"a")==0){
         skor+=4; t+=1;
      		clrscr();

           s18();
      	}else if(strcmp(jawab,"b")==0){
         skor-=2; f+=1;
          clrscr();
         s18();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s18(){
gotoxy(20,10);cprintf("18.There ..... many people there.");
gotoxy(20,11);cprintf("a. is            b. are");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"b")==0){
         skor+=4; t+=1;
      		clrscr();

           s19();
      	}else if(strcmp(jawab,"a")==0){
         skor-=2; f+=1;
          clrscr();
         s19();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s19(){
gotoxy(20,10);cprintf("19.There ..... few problem");
gotoxy(20,11);cprintf("a. was             b. were");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"b")==0){
         skor+=4; t+=1;
      		clrscr();

           s20();
      	}else if(strcmp(jawab,"a")==0){
         skor-=2; f+=1;
          clrscr();
         s20();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s20(){
gotoxy(20,10);cprintf("20.He ..... to learn English more intensively");
gotoxy(20,11);cprintf("a. is going         b. go");
gotoxy(20,12);cprintf("Answer : ");scanf("%c",&jawab);

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"a")==0){
         skor+=4; t+=1;
      		clrscr();

           s21();
      	}else if(strcmp(jawab,"b")==0){
         skor-=2; f+=1;
          clrscr();
         s21();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s21(){
gotoxy(20,10);cprintf("21.She ..... a terrible mistake.");
gotoxy(20,11);cprintf("a. made        b. did");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"a")==0){
         skor+=4; t+=1;
      		clrscr();

           s22();
      	}else if(strcmp(jawab,"b")==0){
         skor-=2; f+=1;
          clrscr();
         s22();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s22(){
gotoxy(20,10);cprintf("22.Is she serious? Yes, she .....");
gotoxy(20,11);cprintf("a. is          b. does");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"a")==0){
         skor+=4; t+=1;
      		clrscr();

           s23();
      	}else if(strcmp(jawab,"b")==0){
         skor-=2; f+=1;
          clrscr();
         s23();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s23(){
gotoxy(20,10);cprintf("23.The computer is ..... .");
gotoxy(20,11);cprintf("a. mine       b. my");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"a")==0){
         skor+=4; t+=1;
      		clrscr();

           s24();
      	}else if(strcmp(jawab,"b")==0){
         skor-=2; f+=1;
          clrscr();
         s24();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
  }

};


void s24(){
gotoxy(20,10);cprintf("24.I see you have ..... enthusiasm.");
gotoxy(20,11);cprintf("a. lots of        b. a lot");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"a")==0){
         skor+=4; t+=1;
      		clrscr();

           s25();
      	}else if(strcmp(jawab,"b")==0){
         skor-=2; f+=1;
          clrscr();
         s25();

         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};

void s25(){
gotoxy(20,10);cprintf("25.I have ..... reliable friends.");
gotoxy(20,11);cprintf("a. some           b. any");

	while(true){
  gotoxy(20,12);cprintf("Answer : ");gets(jawab);
   		if(strcmp(jawab,"a")==0){
         skor+=4; t+=1;
      		clrscr();hadiah(skor);
      	}else if(strcmp(jawab,"b")==0){
         skor-=2; f+=1;
          clrscr();hadiah(skor);
         }
         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }
};


void belajar(){
Sleep(10000) ;
background1();
tabel();
textcolor(9);

   gotoxy(44,17);cprintf("1. Tenses");
   gotoxy(44,21);cprintf("2. Basic structure 1");
   gotoxy(44,25);cprintf("3. Basic Structure 2");
   gotoxy(44,29);cprintf("4. keluar" );
   gotoxy(44,33);cprintf("Masukkan pilihan: ");
   while (true){
    gotoxy(63,33);gets(pilih2);
   	if(strcmp (pilih2,"1")==0){
      	clrscr();
         bingkai();
         tenses();
         getch();
      }
      else if(strcmp (pilih2,"2")==0){
      	clrscr();
        	bingkai();
         basic1();
         getch();
      }
      else if(strcmp (pilih2,"3")==0){
         clrscr();
         bingkai();
        bingkai();
         basic2();
         getch();
      }
      else if(strcmp (pilih2,"4")==0){
      textcolor(3);
      gotoxy(44,35);cprintf("Apakah anda yakin ingin keluar? (y/t):");
      	while (true){
      		gotoxy(84,35);gets(keluar);
      		if(strcmp(keluar,"Y")==0 || strcmp(keluar,"y")==0){
         		exit(0);
         		}
         	else if(strcmp(keluar,"T")==0 || strcmp(keluar,"t")==0){
            	clrscr();
               pilihan1();
            	}
         	else{
         		gotoxy(44,37);cprintf("Inputan tidak valid %c",33);Sleep(2000);
            	gotoxy(44,37);cprintf("                       ");
            	gotoxy(84,35);cprintf("                       ");
         	}
         }
       }
      else{
      textcolor(3);
      gotoxy(44,35);cprintf("Inputan tidak valid %c",33);Sleep(2000);
      gotoxy(44,35);cprintf("                       ");
      gotoxy(63,33);cprintf("                       ");
      }
    }


};

void basic1(){
	textcolor(12);
gotoxy(7,4); cprintf("                                                 SO and SUCH                                                 ");Sleep(200);
gotoxy(7,5); cprintf("       \"So\" dan \"such\" sama-sama memiliki arti yang sama yaitu \"seperti\", meskipun nanti maknanya akan ");Sleep(200);
gotoxy(7,6); cprintf("berbeda lagi karena disesuaikan dengan konteks kalimat. Di sini kita akan membahas mengenai tata cara        ");Sleep(200);
gotoxy(7,7); cprintf("penggunaan \"so\" dan \"such\". Yang pertama penggunaan \"so\", digunakan untuk kalimat yang tidak mempunyai ");Sleep(200);
gotoxy(7,8); cprintf("kata benda setelah kata sifatnya. Berikut contohnya :                                                        ");Sleep(200);
gotoxy(7,9); cprintf("yang tidak mempunyai kata benda setelah kata sifatnya. Contoh:                                               ");Sleep(200);
gotoxy(7,10);cprintf("1. This trend is so popular. (popular)                                                                       ");Sleep(200);
gotoxy(7,11);cprintf("2. Her succes was so big. (big)                                                                              ");Sleep(200);
gotoxy(7,12);cprintf("       Selanjutnya adalah penggunaan kata \"such\", digunakan untuk kalimat yang mengandung kata benda       ");Sleep(200);
gotoxy(7,13);cprintf("yang mengiringi kata sifatnya. Berikut contohnya :      :                                                    ");Sleep(200);
gotoxy(7,14);cprintf("1. I'ts such a good idea. (good idea)                                                                        ");Sleep(200);
gotoxy(7,15);cprintf("2. She is such a beautiful woman. (beautiful woman)                                                          ");Sleep(200);
gotoxy(7,16);cprintf("=============================================================================================================");Sleep(200);
gotoxy(7,17);cprintf("                                                MAY and MIGHT                                                ");Sleep(200);
gotoxy(7,18);cprintf("       \"May\" mempunyai arti yang sama dengan \"might\" perbedaannya hanya terletak pada si subjek yang     ");Sleep(200);
gotoxy(7,19);cprintf("kita ajak bicara. Kata \"may\" biasa digunakan untuk menyatakan sebuah permintaan kepada seorang teman       ");Sleep(200);
gotoxy(7,20);cprintf("sebaya atau teman yang sudah dikenal dekat. Contohnya \"May I borrow your pen\".                             ");Sleep(200);
gotoxy(7,21);cprintf("       Sedangkan \"might\" adalah bentuk lampau dari kata \"may\" dan biasa digunakan saat berinteraksi      ");Sleep(200);
gotoxy(7,22);cprintf("dengan orang yang lebih tua dari kita atau kepada orang yang bau kita kenal karena dianggap lebih sopan.     ");Sleep(200);
gotoxy(7,23);cprintf("Contohnya \"You might call me, Prof\".                                                                       ");Sleep(200);
while(true){
      	gotoxy(40,32);cprintf("Tekan 0 untuk Kembali ");gotoxy(86,32);gets(kembali);
   		if(strcmp(kembali,"0")==0){
      		clrscr();
           belajar();
      	}

         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }                                                                      //






};


void basic2(){
	textcolor(12);
gotoxy(7,4); cprintf("                                         WOULD LIKE, WANT, LIKE, HAVE                                        ");Sleep(200);
gotoxy(7,5); cprintf("       Kata \"would like\",\"want\",\"like\" dan \"have\" mempunyai rumus yang sama yakni penambahan imbuhan ");Sleep(200);
gotoxy(7,6); cprintf("\"to\" dibelakang kata tersebut. Contoh: \"Would you like to learn English with me?\" atau \"I want to buy   ");Sleep(200);
gotoxy(7,7); cprintf("some fruit\" atau \"I like to speak English\" dan \"I have to learn English\". Perlu diingat rumus ini bisa  ");Sleep(200);
gotoxy(7,8); cprintf("saja berubah tergantung tenses. Rumus ini dipakai untuk menyatakan sesuatu yang akan atau ingin dilakukan.   ");Sleep(200);
gotoxy(7,9); cprintf("                                              ANOTHER and OTHER                                              ");Sleep(200);
gotoxy(7,10);cprintf("       Penggunaan \"other\" adalah untuk kata benda yang plural. Contohnya: \"I'd like tp visit other        ");Sleep(200);
gotoxy(7,11);cprintf("countries\". Sedangkan \"another\" digunakan oleh kata benda singular. Contohnya: \"I have another idea\".   ");Sleep(200);
gotoxy(7,12);cprintf("                                            MUCH, MANY, LITTLE, FEW                                          ");Sleep(200);
gotoxy(7,13);cprintf("       Penggunaan \"little\" adalah untuk menyatakan kata \"sedikit\" pada benda yang tidak dapat dihitung   ");Sleep(200);
gotoxy(7,14);cprintf("contohnya (uncountable) seperti gula, pasir atau garam sedangkan \"few\" adalah kebalikan dari \"little\"    ");Sleep(200);
gotoxy(7,15);cprintf("begitu juga dengan \"much\" digunakan untuk menyatakan \"banyak\" pada benda yang tidak dapat dihitung.      ");Sleep(200);
gotoxy(7,16);cprintf("Sedangkan \"many\" adalah untuk menyatakan \"banyak\" pada benda yang dapat dihitung seperti binatang.       ");Sleep(200);
gotoxy(7,17);cprintf("                                                SOME and ANY                                                 ");Sleep(200);
gotoxy(7,18);cprintf("       Pengguaan kata \"some\" yaitu untuk kalimat positif, contohnya: \"I have some reliabe friends\".      ");Sleep(200);
gotoxy(7,19);cprintf("Dan penggunaan \"any\" yaitu untuk kalimat tanya dan kalimat negatif. Contohnya \"Do you have any brothers   ");Sleep(200);
gotoxy(7,20);cprintf("or sisters?\" dan \"She doesn't have any brothers or sisters\".Begitu pula untuk\"something dan \"anything\".");Sleep(200);
gotoxy(7,21);cprintf("                                               A, AN, dan THE                                                ");Sleep(200);
gotoxy(7,22);cprintf("       Penggunaan artikel \"an\" dan \"a\" untuk kata dependent clause sedangkan kata \"The\" yaitu untuk    ");Sleep(200);
gotoxy(7,23);cprintf("Kata yang berdiri sendiri atau independent clause. \"a\" untuk kata berawalan konsonan dan \"an\" sebaliknya.");Sleep(200);
while(true){
      	gotoxy(40,32);cprintf("Tekan 0 untuk Kembali ");gotoxy(86,32);gets(kembali);
   		if(strcmp(kembali,"0")==0){
      		clrscr();
           belajar();
      	}

         else{
         	textcolor(28);
      		gotoxy(45,37);cprintf("Inputan tidak valid %c",33);Sleep(1500);
         	gotoxy(45,37);cprintf("                      ");
         	gotoxy(60,35);cprintf("                         ");
      	}
      }                                                                      //



};

///////////////////////////////////////////////////////////////////////////////

void kotak(){
	for(int a=11;a<=16;a++){
textcolor(5);
gotoxy(44,a);cprintf("%c",219);
gotoxy(77,a);cprintf("%c",219);
	}
   for(int i=44;i<=77;i++){
textcolor(5);
gotoxy(i,10);cprintf("%c",219);
gotoxy(i,16);cprintf("%c",219);
	}
}


int tamp;
void random(){
tamp=rand()%100;
if(tamp==1)k1();
else if(tamp==2)k2();
else if(tamp==3)k3();
else if(tamp==4)k4();
else if(tamp==5)k5();
else if(tamp==6)k6();
}

void k1(){
kotak();
textbackground(7);textcolor(9);
gotoxy(75,15);cprintf("        YOUR CODE 230502        ");
gotoxy(75,16);cprintf("================================");
gotoxy(75,17);cprintf("Lakukan transaksi di Mini market");
gotoxy(75,18);cprintf("       Kode berlaku 1 Jam       ");
gotoxy(75,19);cprintf("________________________________");
}

void k2(){
textbackground(7);textcolor(9);
gotoxy(75,15);cprintf("================================");
gotoxy(75,16);cprintf("        YOUR CODE 161115        ");
gotoxy(75,17);cprintf("Lakukan transaksi di Mini market");
gotoxy(75,18);cprintf("       Kode berlaku 1 Jam       ");
gotoxy(75,19);cprintf("________________________________");
}

void k3(){
textbackground(7);textcolor(9);
gotoxy(75,15);cprintf("================================");
gotoxy(75,16);cprintf("        YOUR CODE 191919        ");
gotoxy(75,17);cprintf("Lakukan transaksi di Mini market");
gotoxy(75,18);cprintf("       Kode berlaku 1 Jam       ");
gotoxy(75,19);cprintf("________________________________");
}

void k4(){
textbackground(7);textcolor(9);
gotoxy(75,15);cprintf("        YOUR CODE 152019        ");
gotoxy(75,16);cprintf("================================");
gotoxy(75,17);cprintf("Lakukan transaksi di Mini market");
gotoxy(75,18);cprintf("       Kode berlaku 1 Jam       ");
gotoxy(75,19);cprintf("________________________________");
}

void k5(){
textbackground(7);textcolor(9);
gotoxy(75,15);cprintf("================================");
gotoxy(75,16);cprintf("        YOUR CODE 231119        ");
gotoxy(75,17);cprintf("Lakukan transaksi di Mini market");
gotoxy(75,18);cprintf("       Kode berlaku 1 Jam       ");
gotoxy(75,19);cprintf("________________________________");
}

void k6(){
textbackground(7);textcolor(9);
gotoxy(75,15);cprintf("================================");
gotoxy(75,16);cprintf("        YOUR CODE 194502        ");
gotoxy(75,17);cprintf("Lakukan transaksi di Mini market");
gotoxy(75,18);cprintf("       Kode berlaku 1 Jam       ");
gotoxy(75,19);cprintf("________________________________");
}
////////////////////////////////////////////////////////////////////////////////
void hadiah(int gift){
int g=gift;
	if(g>=94){
   ld2();
   	printf("Your Score : %d\n",skor);Sleep(2000);
      printf("CONGRATULATIONS you get for a free Silver Ticket Courses :)",skor);Sleep(2000);
      clrscr();datadiri();
   }else{
		textcolor(1);gotoxy(40,15);cprintf("Your Score : %d\n",skor);Sleep(5000);
         belajar();
   }
}
///////////////////////////////////////////////////////////////////////////////

void kotakkhusus(){
	for(int a=1;a<=29;a++){
textcolor(14);
gotoxy(1,a);cprintf("%c",219);
gotoxy(60,a);cprintf("%c",219);
gotoxy(120,a);cprintf("%c",219);



	}
   for(int i=1;i<=119;i++){
textcolor(14);
gotoxy(i,1);cprintf("%c",219);
gotoxy(i,30);cprintf("%c",219);
	}
};

////////////////////////////////////////////////////////////////////////////////




/*______________________________________________________________________________
                            ^^ALHAMDULLLAHIRROBBILALAMIN^^
______________________________________________________________________________*/









