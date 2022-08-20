
#include <stdio.h>
#include <conio.h>
#include <windows.h>
//............................................................................\\
//....     NAMA          : AGAM MUDHAQIR                                  ....\\
//....     FAK           : ILMU KOMPUTER                                  ....\\
//....     JURUSAN       : D3 MI                                          ....\\
//....     NAMA APLIKASI : STUDIO MM                                      ....\\
//............................................................................\\
//....     Screen Buffer size = w=1000 h=1000                             ....\\
//....     Window size        = w=170  h=60                               ....\\
//....     Font               = 6x8 raster fonts                          ....\\
//....                                                                    ....\\
//............................................................................\\
////////////////////////////////////////////////////////////////////////////////
///////////////////             GLOBAL VARIABLE            /////////////////////
////////////////////////////////////////////////////////////////////////////////
int index=2;char member[1000][3][1000]={ {"Seventeen","1234","400000"},{"Magnum","2345","400000"}};
char jam[1000],lagu[1000];int jam1,lagu1;int limit[1000];
char tam[1000];char tam2[1000];char tam3[10000];int babi;int abdul=0;int in;
////////////////////////////////////////////////////////////////////////////////
///////////////////              PROTOTYPE                //////////////////////
////////////////////////////////////////////////////////////////////////////////
void daf();
void warna(int back,int text);
void screenpil(int ky,int back, int text);
void screenpils(int ky);
void screenpil_3(int ky);
void screen_1(int px,int py,int lx,int ly,int tex,int back);
void screen_219(int px,int py,int lx,int ly,int back,int tex);
void screen_2(int move,int px,int py,int lx,int ly,int back,int text,int banyak);
void screenpil_3(int px,int panjang,int back,int text,int x,int ky);
void home(int text,int back);void record(int text,int back);void pyment(int text,int back);
void m(int text,int back);void dm(int text,int back);void r(int text,int back);void strat(int text,int back);void stop(int text,int back);
void BINGKAI(int color);
//void timerreguler();
void timer();
void header();
void MEMBER();
void DAFTAR();
void REGULER();
void KOSONG();
void inputpil();
void pil();
void BUFER();
void BINGKAI();
void GUITAR();
void GUITAR_2();
void LOADING();
void WELCOM();
void rec();
void r_p();
void exit();
void waktos(int jam,int x,int y);
char* validasiangka(char arr[],int x,int y);int v_angka(char input[]);
char* validasihuruf(char arr[],int x,int y);int v_huruf(char huruf[]);
char* validasiangka1(char arr[],int x,int y);int v_angka1(char input[]);
////////////////////////////////////////////////////////////////////////////////
///////////////////               VALIDASI                //////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////      VAL.HURUF       //////////////////////////////
////////////////////////////////////////////////////////////////////////////////
char* validasihuruf(char arr[],int x,int y){
	strcpy(tam2,arr);
   while(v_huruf(tam2)!=strlen(tam2)||tam2[0]==' '){
     	if(strlen(tam2)>10){
         gotoxy(40,30);cprintf("maximal 10 huruf                         ");
      }
      if(strlen(tam2)==0){
   		gotoxy(40,30);cprintf("input tidakboleh kosong                  ");
   	}
      if(tam2[0]>='a' &&  tam2[0]<='z' || tam2[0]>='0' && tam2[0]<='9'){
   		gotoxy(40,30);cprintf("huruf pertama harus kapital              ");
   	}
      for(int a=0;a<strlen(tam2);a++){
         if(tam2[a]==' '){
   			gotoxy(40,30);cprintf("tidak boleh mengandung spasi             ");
   		}
         if(tam2[a+2]>='A'&&tam2[a+2]<='Z'){
         	gotoxy(40,30);cprintf("tidak boleh kapital selain huruf pertama");
         }
         if((!(tam2[a]>='A'&&tam2[a]<='Z')) && (!(tam2[a]>='a'&&tam2[a]<='z'))&&(!(tam2[a]==' '))&&(!(tam2[a]>='0' && tam2[a]<='9'))){
         	gotoxy(40,30);cprintf("tidak boleh symbol                      ");
         }

         gotoxy(x+a,y);printf(" ");
      }
      	gotoxy(x,y),gets(tam2);
   }gotoxy(40,30);cprintf("                                           ");
   return tam2;
}
int v_huruf(char huruf[]){
int cek=0;
   if(strlen (huruf)>15){
		return strlen(huruf)-1;
	}
	if(strlen(huruf)==0 ){
		return 1;
	}
   if(huruf[1]>='A'&&huruf[1]<='Z'){
         return 0;
   }
	if(huruf[0]>='A'&&huruf[0]<='Z' && strlen(huruf)<=10){
   	cek++;
		for(int a=1;a<strlen(huruf);a++){
			if(huruf[a]>='0' && huruf[a]<='9' || (huruf[a]>='a' && huruf[a]<='z' )){
   			cek++;
   		}
		}
	}else{cek=0;}
   return cek;
}
//////////////////////////     VAL.ANGKA     ///////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
char* validasiangka(char arr[],int x,int y){
	strcpy(tam,arr);
   while(v_angka(tam)!=strlen(tam)|| tam[0]==' '){
      if(strlen(tam)<=3 || strlen(tam)>=10){
         gotoxy(40,36);cprintf("minimal 4 digit & maximal 10 digit      ");
      }
      if(strlen(tam)==0){
   		gotoxy(40,36);cprintf("input tidakboleh kosong                 ");
   	}
   	for(int a=0;a<strlen(tam);a++){
      	if((!(tam[a]>='A'&&tam[a]<='Z')) && (!(tam[a]>='a'&&tam[a]<='z'))&&(!(tam[a]==' '))&&(!(tam[a]>='0' && tam[a]<='9'))){
         	gotoxy(40,36);cprintf("tidak boleh ada symbol               ");
         }
        	if(tam[a]>='A'&&tam[a]<='Z' || tam[a]>='a'&&tam[a]<='z'){
            gotoxy(40,36);cprintf("tidak boleh ada huruf                ");
        	}
      	gotoxy(x+a,y);printf(" ");
   	}
      	gotoxy(x,y),gets(tam);
   }
   		gotoxy(40,36);cprintf("                                        ");
   return tam;
}
int v_angka(char input[]){
	int cek=0;
	if(strlen(input)<4 || strlen (input)>10){
		return strlen(input)-1;
	}
	if(strlen(input)==0){
		return 1;
	}
   for(int a=0;a<strlen(input);a++){
   	if(input[a]>='0' && input[a]<='9'){
      	cek++;
      }
   }
	return cek;
}
//////////////////////////     VAL.ANGKA  1  ///////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
char* validasiangka1(char arr[],int x,int y){
   strcpy(tam3,arr);
   while(v_angka1(tam3)!=strlen(tam3)|| tam[0]==' '){
      if(strlen(tam3)==0){
   		gotoxy(40,42);cprintf("input tidakboleh kosong                              ");
   	}
      else{
         gotoxy(40,42);cprintf("inputan salah                                        ");
      }
   	for(int a=0;a<strlen(tam3);a++){
         gotoxy(40,42);cprintf("inputan tidak boelh huruf,simbol,space,dan 0 di depan ");
        gotoxy(x+a,y);printf(" ");
      }
      	gotoxy(x,y),gets(tam3);
   }
   gotoxy(40,42);cprintf("                                                             ");
   return tam3;
}
int v_angka1(char input[]){
	int cek=0;
	if(strlen(input)==0){
		return 1;
	}
	if(input[0]!='0'){
		for(int a=0;a<strlen(input);a++){
    		if(input[a]>='0' && input[a]<='9'){
       		cek++;
	 		}
		}
	}return cek;
}
////////////////////////////////////////////////////////////////////////////////
///////////////////                 ICON                  //////////////////////
////////////////////////////////////////////////////////////////////////////////
void home(int text,int back){
   textbackground(back);
	textcolor(text);
	gotoxy(9,12);cprintf("  *    ");
	gotoxy(9,13);cprintf("/   \\ ");
	gotoxy(9,14);cprintf(" |||   ");
	gotoxy(9,15);cprintf(" ---   ");
	gotoxy(8,16);cprintf("H O M E");
}
void record(int text,int back){
   textbackground(back);
	textcolor(text);
   gotoxy(7,26);cprintf("    ||  ");
	gotoxy(7,27);cprintf("   |||  ");
	gotoxy(7,28);cprintf("  ||||  ");
	gotoxy(7,29);cprintf("   |||  ");
	gotoxy(7,30);cprintf("    ||  ");
	gotoxy(6,32);cprintf("R E C O R D");
}
void pyment(int text,int back){
   textbackground(back);
	textcolor(text);
	gotoxy(6,42);cprintf(" **     ** ");
	gotoxy(6,43);cprintf("*  * 0 *  *");
	gotoxy(6,44);cprintf("*  * 0 *  *");
	gotoxy(6,45);cprintf(" **     ** ");
	gotoxy(8,47);cprintf("P L A Y");
}
void m(int text,int back){
   textbackground(back);textcolor(text);
   gotoxy(35,4);cprintf("M E M B E R");
}void dm(int text,int back){
   textbackground(back);textcolor(text);
   gotoxy(69,4);cprintf("DAFTAR MEMBER");
}void r(int text,int back){
   textbackground(back);textcolor(text);
   gotoxy(104,4);cprintf("R E G U L E R");
}void start(int text,int back){
   textbackground(back);textcolor(text);
   gotoxy(55,17);cprintf("S T A R T");
}void stop(int text,int back){
   textbackground(back);textcolor(text);
   gotoxy(117,17);cprintf("S T O P");
}void rekam(int text,int back,int x,int y){
   textbackground(back);textcolor(text);
   gotoxy(x,y);cprintf("R E C O R D");
}void mainb(int text,int back,int x,int y){
   textbackground(back);textcolor(text);
   gotoxy(x,y);cprintf("J U S T  P L A Y");
}
void esc(int text,int back,int x,int y){
	textbackground(back);textcolor(text);
gotoxy(x,y);cprintf("ESC TO HOME");
}void lanjut(int text,int back,int x,int y){
	textbackground(back);textcolor(text);
gotoxy(x,y);cprintf("N E X T");
}
void daf(){
   screen_1(36,113,25,43,0,8);
   textcolor(5);
	gotoxy(71,40);cprintf("Harga Member 2.000.000");
      gotoxy(71,28);cprintf("Contoh: A7x,St12,Seventeen,no space");
      gotoxy(71,34);cprintf("Kode,min 4 max 10 digit");
      gotoxy(71,40);cprintf("Harga Member 2.000.000");
      gotoxy(40,27);cprintf("GROUP NAME : ");
      gotoxy(40,28);cprintf("_____________________________");
      Sleep(10);
      gotoxy(40,33);cprintf("CODE       : ");
      gotoxy(40,34);cprintf("_____________________________");
      gotoxy(40,39);cprintf("PEMBAYARAN : ");
      gotoxy(40,40);cprintf("_____________________________");
}
void exit(){
   screen_1(36,114,25,43,0,3);
   screenpil(0,15,15),screenpil(34,11,11);int z=0,x=34;warna(8,15);
   gotoxy(59,26);cprintf("Gunakan <- dan -> untuk memilih");
   esc(15,0,52,37); lanjut(15,0,87,37);
   int input,cek=0;
   do{
   	input=getch();
      	if(input==77){
            if(z==0 && x==34){
               z=34;x=0;cek=1;
            }
            else if(z==34 && x==0){
               z=0;x=34;cek=0;
            }
            screenpil(z,15,15);screenpil(x,11,11);
         }
         else if(input==75){
            if(z==34&&x==0){
               z=0;x=34;cek=0;
            }
            else if(z==0&&x==34){
               z=34;x=0;cek=1;
            }screenpil(z,15,15);screenpil(x,11,11);
         }
         else if(input!=0 && input!=13 && input!=27){
   			gotoxy(60,42);cprintf("INPUTAN SALAH");
      		Sleep(1000);
      		gotoxy(60,42);cprintf("             ");

   		}

   }while(input!=13);
   if(cek==0){
   	inputpil();
   }
}
////////////////////////////////////////////////////////////////////////////////
///////////////////                 SCREEN                  ////////////////////
////////////////////////////////////////////////////////////////////////////////
void waktu(int jam,int x,int y){
	for(int a=0;a<jam;a++){
   	for(int b=0;b<60;b++){
         for(int c=1;c<60;c++){
            gotoxy(x,y);cprintf("START ON : %d:%d:%d",a,b,c);
            Sleep(1);

         }
      }
   }

}
void warna(int back,int text){
    textbackground(back);
    textcolor(text);
}
void screenpil_3(int px,int panjang,int back,int text,int x,int ky){
	for(int a=1;a<=x;a++){
     textbackground(back);
     textcolor(text);
     gotoxy(px,0+ky); cprintf("                 ");
     gotoxy(px,1+ky); cprintf("                 ");
     gotoxy(px,2+ky); cprintf("                 ");
     gotoxy(px,3+ky); cprintf("                 ");
     gotoxy(px,4+ky); cprintf("                 ");
     gotoxy(px,5+ky); cprintf("                 ");
     gotoxy(px,6+ky); cprintf("                 ");
     gotoxy(px,7+ky); cprintf("                 ");
     gotoxy(px,8+ky); cprintf("                 ");
     ky+=panjang;
   }
}
void screen_2(int move,int px,int py,int lx,int ly,int back,int text,int banyak){
	int _x=0;
   	textbackground(back);textcolor(text);
   for(int s=1;s<=banyak;s++){
     for(int b=px;b<py;b++ ){
    	for(int a=lx;a<ly;a++){
      	gotoxy(b+_x,a);cprintf(" ");
         Sleep(5);
    	}
     }_x+=move;
   }
}
void screen_219(int px,int py,int lx,int ly,int back,int tex){
 	for(int a=px;a<py;a++){
    	for(int b=lx;b<ly;b++){
      	textbackground(back);textcolor(tex);
         gotoxy(a,b);cprintf("%c",219);
   	}
 	}
}
void screen_1(int px,int py,int lx,int ly,int tex,int back){
   	textbackground(tex);textcolor(back);
	for(int a=px;a<py;a++){
    	for(int b=lx;b<ly;b++){
         gotoxy(a,b);cprintf(" ");
   	}
   }

}
void screenpil( int ky,int back,int text){
      	textbackground(back);textcolor(text);
         gotoxy(45+ky,35);cprintf("                         ");
         gotoxy(45+ky,39);cprintf("                         ");
}
void screenpils( int ky,int back,int text){
      	textbackground(back);textcolor(text);
         gotoxy(32,21+ky);cprintf("                                                                                       ");
         gotoxy(32,23+ky);cprintf("                                                                                       ");
}
////////////////////////////////////////////////////////////////////////////////
///////////////////             MAIN||REKAM               //////////////////////
////////////////////////////////////////////////////////////////////////////////
void r_p(){
screen_1(31,120,15,45,11,5);
screen_1(35,115,16,44,15,8);screen_2(35,45,70,25,30,11,11,2);
rekam(13,11,52,27);mainb(13,11,85,27);warna(15,11);
gotoxy(59,22);cprintf("Gunakan <- dan -> untuk memilih");gotoxy(40,17);cprintf("ESC go to HOME");
//...............................................................................//
int cek=2,x1=45,y1=70,b=11,u=13,b1=13,u1=11;
char input;screen_2(35,45,70,25,30,13,11,1);rekam(b,u,52,27);
do{
   input=getch();
   if(input==77){
      if(x1==45&&y1==70){
         x1=80,y1=105;b=13,u=11,b1=11,u1=13;
         cek=1;
      }
      else if(x1==80&&y1==105){
         x1=45,y1=70;b=11,u=13,b1=13,u1=11;
         cek=2;
      }
      screen_2(35,45,70,25,30,11,11,2);rekam(13,11,52,27);mainb(13,11,85,27);
      screen_2(35,x1,y1,25,30,13,11,1);rekam(b,u,52,27);mainb(b1,u1,85,27);
   }
   else if(input==75){
      if(x1==80&&y1==105){
         x1=45,y1=70;b=11,u=13,b1=13,u1=11;
      	cek=2;
      }
		else if(x1==45&&y1==70){
         x1=80,y1=105;b=13,u=11,b1=11,u1=13;
      	cek=1;
      }

      screen_2(35,45,70,25,30,11,11,2);rekam(13,11,52,27);mainb(13,11,85,27);
      screen_2(35,x1,y1,25,30,13,11,1);rekam(b,u,52,27);mainb(b1,u1,85,27);
   }

   else if(input==27){
       inputpil();

   }
   else if(input!=0 && input!=13){
   	gotoxy(60,42);cprintf("INPUTAN SALAH");
      Sleep(1000);
      gotoxy(60,42);cprintf("             ");

   }

   }while(input!=13);
   warna(15,0);
   if(cek==2){
   gotoxy(36,35);cprintf("BERAPA LAGU ? : ");
   gotoxy(36,36);cprintf("______________________________________________________");
   p:
   	gotoxy(51,35);gets(lagu);strcpy(lagu,validasiangka1(lagu,51,35));
      lagu1=atoi(lagu);
      if (lagu1>5 ||strlen(lagu)!=1){
        for(int a=0;a<strlen(lagu);a++){
          gotoxy(51+a,35);printf(" ");
        }
        gotoxy(36,38);cprintf("Tidak Boleh Lebih dari 5 lagu");
        Sleep(1000);
        gotoxy(36,38);cprintf("                             ");

         goto p;
		}
      screen_1(36,114,25,43,0,3);
      rec();
   }
   else{
   warna(15,0);
   gotoxy(36,35);cprintf("BERAPA JAM ? : ");
   gotoxy(36,36);cprintf("______________________________________________________");
   q:
   	gotoxy(51,35);gets(jam);strcpy(jam,validasiangka1(jam,51,35));

      jam1=atoi(jam);
      if (jam1>24 ||jam[0]>'9' || strlen(jam)!=1){
 		   for(int a=0;a<strlen(jam);a++){
          gotoxy(51+a,35);printf(" ");
        }
         gotoxy(36,38);cprintf("Tidak Boleh Lebih dari 9 jam");
         Sleep(1000);
         gotoxy(36,38);cprintf("                             ");

         goto q;
		}
   	timer();
   }
}
void TAMPILAN_1(){
	BINGKAI(11);
   GUITAR();
   WELCOM();
}
////////////////////////////////////////////////////////////////////////////////
///////////////////               REGULER                 //////////////////////
////////////////////////////////////////////////////////////////////////////////

void REGULER(){
in=0;
r_p();
}
////////////////////////////////////////////////////////////////////////////////
///////////////////               MEMBER                  //////////////////////
////////////////////////////////////////////////////////////////////////////////
void MEMBER(){
in=1;
screen_2(35,31,50,3,6,11,11,1);m(11,11);screen_1(31,120,15,45,11,5);
screen_1(35,115,16,44,15,8);
   textcolor(21);
	gotoxy(60,18);cprintf("%c%c%c%c%c %c %c%c%c%c%c %c%c%c%c%c  %c %c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(60,19);cprintf("%c     %c %c     %c   %c  %c %c   %c              ",219,219,219,219,219,219,219,219);
   gotoxy(60,20);cprintf("%c%c%c%c%c %c %c %c%c%c %c   %c  %c %c   %c       ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(60,21);cprintf("    %c %c %c   %c %c   %c  %c %c   %c             ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(60,22);cprintf("%c%c%c%c%c %c %c%c%c%c%c %c   %c  %c %c   %c      ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
screen_1(36,114,25,43,0,3);
      textcolor(5);
      char akun [2][1000];
      gotoxy(40,30);cprintf("GROUP NAME : ");
      gotoxy(40,31);cprintf("___________________________________________________");
      gotoxy(40,35);cprintf("CODE       : ");
      gotoxy(40,36);cprintf("___________________________________________________");
		int e=0;
 	do{
      gotoxy(53,30);gets(akun[0]);
      gotoxy(53,35);gets(akun[1]);
      exit();
      for(int a=0;a<=index;a++){
      	if(strcmp(akun[0],member[a][0])==0 && strcmp(akun[1],member[a][1])==0){
            if(limit[a]==0){
               screen_1(36,114,25,43,0,3);
            	gotoxy(65,35);cprintf("AKUN HANGUS");
               Sleep(1000);
            	gotoxy(65,35);cprintf("Press any kay to home");
               getch();
               inputpil();
               break ;
            }else{
              	babi=a;abdul=1;
            	e=1;
            	break;
            }
         }

      }  if(e==0){
            gotoxy(90,41);cprintf("AKUN SALAH");
            Sleep(1000);
            gotoxy(90,41);cprintf("          ");
            MEMBER();
         }
	}while(e==0);

        r_p();

}

////////////////////////////////////////////////////////////////////////////////
///////////////////                DAFTAR                 //////////////////////
////////////////////////////////////////////////////////////////////////////////
void DAFTAR(){
screen_2(35,66,85,3,6,11,11,1);
dm(11,11);
screen_1(31,120,15,45,11,5);
screen_1(35,115,16,44,15,8);
	gotoxy(60,18);cprintf("%c%c%c%c%c %c %c%c%c%c%c %c%c%c%c%c  %c   %c %c%c%c%c%c       ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(60,19);cprintf("%c     %c %c     %c   %c  %c   %c %c   %c    ",219,219,219,219,219,219,219,219,219);
   gotoxy(60,20);cprintf("%c%c%c%c%c %c %c %c%c%c %c   %c  %c   %c %c%c%c%c%c       ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(60,21);cprintf("    %c %c %c   %c %c   %c  %c   %c %c       ",219,219,219,219,219,219,219,219,219);
   gotoxy(60,22);cprintf("%c%c%c%c%c %c %c%c%c%c%c %c   %c  %c%c%c%c%c %c       ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
  	daf();getch();exit();daf();
     int test=0;
      gotoxy(53,27);gets(member[index][0]);strcpy(member[index][0],validasihuruf(member[index][0],53,27));
      gotoxy(53,33);gets(member[index][1]);strcpy(member[index][1],validasiangka(member[index][1],53,33));
  	w: gotoxy(53,39);gets(member[index][2]);strcpy(member[index][2],validasiangka1(member[index][2],53,39));

     	if(strlen(member[index][2])<=10){
      if(atoi(member[index][2])>=2000000){
      	gotoxy(90,41);cprintf("DAFTAR berhasil");
         Sleep(1000);
         gotoxy(90,41);cprintf("               ");
         screen_1(36,114,25,43,0,3);
         gotoxy(67,35);cprintf("Transaksi berhasil Kembalian anda %d ",(atoi(member[index][2]))-2000000);
         gotoxy(37,36);cprintf("Silahkan Ambil Struc dan bayar di kasir");
         getch();
         MEMBER();
      }
      else{
         gotoxy(40,42);cprintf("Uang anda kurang");
         for(int a=0;a<strlen(member[index][2]);a++){
         gotoxy(53+a,39);printf(" ");
         }goto w;
      }
     }
     else{
         gotoxy(40,42);cprintf("tidak boleh lebih dari 10 digit");
         for(int a=0;a<strlen(member[index][2]);a++){
         gotoxy(53+a,39);printf(" ");
         }goto w;
     }exit();
  index++;
}

////////////////////////////////////////////////////////////////////////////////
///////////////////                 REKAM                 //////////////////////
////////////////////////////////////////////////////////////////////////////////
void rec(){
   limit[babi]--;
   BINGKAI(5);
	header();screenpil_3(3,15,13,0,1,25);screen_219(30,150,10,50,11,13);
   screen_1(40,140,22,48,11,8);screen_2(60,40,80,15,20,11,11,2);
   record(13,13);start(13,11);stop(11,11);warna(11,0);
   gotoxy(48,23);cprintf("PETUNJUK & PERATURAN :");
   gotoxy(48,24);cprintf("1.Tekan sembarang kyboard untuk memulai rekaman ");
   gotoxy(48,25);cprintf("2.Ketika rekaman belum selesai dan batas waktu  habis, maka akan di paksa    ");
   gotoxy(48,26);cprintf("  untuk berhenti.");
   gotoxy(48,27);cprintf("HARGA : 2jt/Lagu/6jam                                                           ");
   gotoxy(48,35);cprintf("PEMBAYARAN :                                                         ");
   getch();
   int cungur=lagu1*6;int bayar;
   waktu(cungur,48,30);
   if(abdul==1){
   	bayar=(lagu1*2000000)-((10*2000000)/100);
      gotoxy(45,36);cprintf("Anda harus membayar seharga : %d karena anda adalah member, anda mendapatkan diskon 10%",bayar);
   	gotoxy(48,38);cprintf("SISA TIKET GRUP %s = %d LAGI",member[babi][0],limit[babi]);

   }
   else{
      bayar=lagu1*2000000;
      gotoxy(45,36);cprintf("Anda harus membayar seharga : %d ",bayar);
   }
      gotoxy(48,30);cprintf("STOP     : %d:0:0-------------------------------|WAKTU HABIS|",cungur);
      start(11,11);stop(13,11);
      gotoxy(48,37);cprintf("Silahkan ambil struk dan bayar ke kasir");
      gotoxy(48,37);cprintf("Tekan sembarang tombol kyboard untuk ke home");
getch();inputpil();
}

////////////////////////////////////////////////////////////////////////////////
///////////////////                TIMER                 //////////////////////
////////////////////////////////////////////////////////////////////////////////
void timer(){
   limit[babi]--;
   int menit,detik;
   header();screenpil_3(3,15,13,0,1,40);pyment(13,13);
   screen_219(22,167,7,55,11,13);screen_1(31,120,15,45,11,5);
	screen_1(35,115,16,44,15,8);screen_1(36,114,17,30,8,8);screen_1(36,114,31,43,8,8);
   BINGKAI(5);
   if(in==1){
   gotoxy(65,32);cprintf("YOU ARE A MEMBER");
   gotoxy(65,33);cprintf("----------------");
   int waktos=jam1;
   waktu(waktos,37,35);
   gotoxy(37,35);cprintf("STOP     : %d:0:0-------------------------------|WAKTU HABIS|",waktos);
   gotoxy(37,36);cprintf("SISA TIKET GRUP %s = %d LAGI",member[babi][0],limit[babi]);
   gotoxy(37,37);cprintf("MAIN GRATIS");
   gotoxy(37,42);cprintf("Tekan esc untuk kembali ke home");
   int keluar;
     q:keluar=getch();
      if(keluar==27){
         inputpil();
      }else{
         gotoxy(37,39);cprintf("INPUTAN SALAH");
         Sleep(1000);
         gotoxy(37,39);cprintf("             ");
         goto q;
      }
   }else{
   	gotoxy(65,18);cprintf("YOU ARE A REGULER");
   	gotoxy(65,19);cprintf("----------------");
   	int waktos=jam1;
   waktu(waktos,37,19);
   gotoxy(37,19);cprintf("STOP     : %d:0:0-------------------------------|WAKTU HABIS|",waktos);
   gotoxy(37,21);cprintf("SILAHKAN AMBIL STRUCK DI BAWAH DAN BAYAR DI KASIR");
 	gotoxy(37,20);cprintf("ANDA HARUS MEMBAYAR %d",waktos*50000);

   gotoxy(37,29);cprintf("Tekan esc untuk kembali ke home");
   int keluar;
   	y:keluar=getch();
     	if(keluar==27){
         inputpil();
     	}else{
         gotoxy(37,28);cprintf("INPUTAN SALAH");
         Sleep(1000);
         gotoxy(37,28);cprintf("             ");
         goto y;
      }
   }
}
////////////////////////////////////////////////////////////////////////////////
///////////////////               TAMPILAN                //////////////////////
////////////////////////////////////////////////////////////////////////////////
void header(){
 screen_219(2,168,2,7,8,8);
 screen_1(2,21,7,58,15,5);
 screen_219(2,168,55,58,11,8);
 screenpil_3(3,15,11,0,3,10);
 screen_2(35,31,50,3,6,13,5,3);
 m(13,13);dm(13,13);r(13,13);
 home(11,11);record(11,11);pyment(11,11);
}
void BUFER(){
for(int h=1;h<=5;h++){
for(int a=1;a<=1;a++){
gotoxy(20,18);printf("*");Sleep(100);
gotoxy(17,18);printf("*");Sleep(100);
gotoxy(14,17);printf("*");Sleep(100);
gotoxy(13,16);printf("*");Sleep(100);
gotoxy(13,15);printf("*");Sleep(100);
gotoxy(14,14);printf("*");Sleep(100);
gotoxy(17,13);printf("*");Sleep(100);
gotoxy(20,13);printf("*");Sleep(100);
gotoxy(23,14);printf("*");Sleep(100);
gotoxy(24,15);printf("*");Sleep(100);
gotoxy(24,16);printf("*");Sleep(100);
gotoxy(23,17);printf("*");Sleep(100);

}
for(int a=1;a<=1;a++){
gotoxy(20,18);printf(" ");Sleep(100);
gotoxy(17,18);printf(" ");Sleep(100);
gotoxy(14,17);printf(" ");Sleep(100);
gotoxy(13,16);printf(" ");Sleep(100);
gotoxy(13,15);printf(" ");Sleep(100);
gotoxy(14,14);printf(" ");Sleep(100);
gotoxy(17,13);printf(" ");Sleep(100);
gotoxy(20,13);printf(" ");Sleep(100);
gotoxy(23,14);printf(" ");Sleep(100);
gotoxy(24,15);printf(" ");Sleep(100);
gotoxy(24,16);printf(" ");Sleep(100);
gotoxy(23,17);printf(" ");Sleep(100);
}
}

}
void BINGKAI(int color){
textcolor(color);
	int x=58,y=168;
	for(int a=1;a<=168;a++){
      if(a<58){
			gotoxy(1,a);cprintf("%c",176);
         gotoxy(168,x);cprintf("%c",176);
         x--;
      }
      gotoxy(a,1);cprintf("%c",176);
      gotoxy(y,58);cprintf("%c",176);
      y--;
   	Sleep(10);
   }


}
void GUITAR(){
   textcolor(15);
   gotoxy(60,10);cprintf("                    *                  ");
   gotoxy(60,11);cprintf("                   * *                     ");
   gotoxy(60,12);cprintf("                  * * *                      ");
	gotoxy(60,13);cprintf("                   ***                     ");
   gotoxy(60,14);cprintf("                   ***                    ");
   gotoxy(60,15);cprintf("                 * * * *                  ");
   gotoxy(60,16);cprintf("                   ***                   ");
   gotoxy(60,17);cprintf("                   * *                     ");
   gotoxy(60,18);cprintf("                   ***                     ");
   gotoxy(60,19);cprintf("                   * *                     ");
   gotoxy(60,20);cprintf("                   ***                     ");
   gotoxy(60,21);cprintf("                   * *                     ");
   gotoxy(60,22);cprintf("                   ***                     ");
	gotoxy(60,23);cprintf("                   * *    *              ");
   gotoxy(60,24);cprintf("               *   ***   ***             ");
   gotoxy(60,25);cprintf("              ***  * ********          ");
   gotoxy(60,26);cprintf("              **** * ********         ");
   gotoxy(60,27);cprintf("               ***** ********       ");
   gotoxy(60,28);cprintf("              ****** ********       ");
   gotoxy(60,29);cprintf("            *** *       **** *     ");
   gotoxy(60,30);cprintf("          **** *         **    *   ");
   gotoxy(60,31);cprintf("         ****  *         *      * ");
   gotoxy(60,32);cprintf("        *****   *       *        *       ");
   gotoxy(60,33);cprintf("        *****      * *           *");
   gotoxy(60,34);cprintf("         *****                   *");
   gotoxy(60,35);cprintf("           ******               *");
   GUITAR_2();
   BINGKAI(11);
}

void LOADING(){
	for(int x=1;x<100;x++){
      gotoxy(70,42);printf("%d %",x);
      Sleep(100);
   }
}
void GUITAR_2(){
      for(int x=1;x<=3;x++){
      textcolor(x);
		gotoxy(79,15);cprintf("***");Sleep(50);
      gotoxy(80,16);cprintf("*");Sleep(50);
      gotoxy(79,17);cprintf("***");Sleep(50);
      gotoxy(80,18);cprintf("*");Sleep(50);
      gotoxy(79,19);cprintf("***");Sleep(50);
      gotoxy(80,20);cprintf("*");Sleep(50);
      gotoxy(79,21);cprintf("***");Sleep(50);
      gotoxy(80,22);cprintf("*");Sleep(50);
      gotoxy(79,23);cprintf("***");Sleep(50);
      gotoxy(80,24);cprintf("*");Sleep(50);
      gotoxy(79,25);cprintf("***");Sleep(50);
      gotoxy(80,26);cprintf("*");Sleep(50);
      gotoxy(79,27);cprintf("***");Sleep(50);
      gotoxy(80,28);cprintf("*");Sleep(50);
      gotoxy(79,29);cprintf("***");Sleep(50);
      gotoxy(77,29);cprintf("*******");Sleep(50);
      gotoxy(76,30);cprintf("*********");Sleep(50);
      gotoxy(76,31);cprintf("*********");Sleep(50);
      gotoxy(77,32);cprintf("*******");Sleep(50);
       }
   	clrscr();
}
void WELCOM(){
      screen_1(2,168,2,58,3,4);
		textcolor(13);
      gotoxy(40,20);cprintf("               **                                                                 ");
      Sleep(100);
		gotoxy(40,21);cprintf("            *** ***                                                     ** * **                 ");
      Sleep(99);
      gotoxy(40,22);cprintf("          ****    **                                                **************          ");
      Sleep(98);
      gotoxy(40,23);cprintf("         ******                                                   ******* ** *******            ");
      Sleep(97);
      gotoxy(40,24);cprintf("          *************                                          *****           ****              ");
      Sleep(96);
      gotoxy(40,25);cprintf("           *************   *******  ****   ***  *******    ***  *****             ****              ");
      Sleep(95);
      gotoxy(40,26);cprintf("             ************  *******   **     *   ***     *  ***  ****               ***                ");
      Sleep(94);
      gotoxy(40,27);cprintf("        *****        ****    ***     **     *   ***     *  ***  ****               ***                 ");
      Sleep(93);
      gotoxy(40,28);cprintf("         ***         ***     ***     **     *   ***     *  ***   ***               **            ");
      Sleep(94);
      gotoxy(40,29);cprintf("          **         **      ***     **    **   ***    *   **     ***             **       ");
      Sleep(93);
		gotoxy(40,30);cprintf("           *         *       **      ********   *******    *        ***          *        ");
      Sleep(92);
		gotoxy(40,31);cprintf("              *  *           *       *          *          *            * * * *          ");
      gotoxy(74,37);cprintf("Press any key to continue");
      gotoxy(74,38);cprintf("_________________________");
      getch();
      textbackground(11);
    for(int a=20;a<125;a++){
      textcolor(a);
      gotoxy(a,20);cprintf("  ");
		gotoxy(a,21);cprintf("  ");
      gotoxy(a,22);cprintf("  ");
      gotoxy(a,23);cprintf("  ");
      gotoxy(a,24);cprintf("  ");
      gotoxy(a,25);cprintf("  ");
      gotoxy(a,26);cprintf("  ");
      gotoxy(a,27);cprintf("  ");
      gotoxy(a,28);cprintf("  ");
      gotoxy(a,29);cprintf("  ");
		gotoxy(a,30);cprintf("  ");
		gotoxy(a,31);cprintf("  ");
      gotoxy(a,32);cprintf("  ");
      gotoxy(a,33);cprintf("  ");
      gotoxy(a,34);cprintf("  ");
      gotoxy(a,35);cprintf("  ");
      gotoxy(a,36);cprintf("  ");
      gotoxy(a,37);cprintf("  ");
      gotoxy(a,38);cprintf("  ");

      Sleep(10);
      }

}

////////////////////////////////////////////////////////////////////////////////
///////////////////           INPUT PILIHAN MENU          //////////////////////
////////////////////////////////////////////////////////////////////////////////
void	pil(){
	BINGKAI(11);
 	screen_1(2,168,2,58,5,4);screen_1(31,120,15,45,11,5);
   header();screenpil_3(3,15,13,0,1,10);home(13,13);
   for(int tex=0;tex<=100;tex++){
   	textcolor(11);
      if(tex<25){
      gotoxy(31,20+tex);cprintf("%c",219);
      gotoxy(119,20+tex);cprintf("%c",219);
      }
      if(tex<89){
      gotoxy(31+tex,20);cprintf("%c",219);
      gotoxy(31+tex,24);cprintf("%c",219);
      gotoxy(31+tex,28);cprintf("%c",219);
      gotoxy(31+tex,32);cprintf("%c",219);
      gotoxy(31+tex,36);cprintf("%c",219);
      gotoxy(31+tex,44);cprintf("%c",219);
      }
   }

   char arr[100]="P I L I H  A K U N  U N T U K  L O G I N";
   char ar1[100]="_________________________________________";
   char ar2[100]="1. M E M B E R ";
   char ar3[100]="2. DAFTAR MEMBER ";
   char ar4[100]="3. REGULER";
   char ar5[100]="4. EXIT";
   for(int tex=0;tex<strlen(arr);tex++){
      textbackground(11);
      textcolor(7);
   	gotoxy(55+tex,17);cprintf("%c",arr[tex]);
      gotoxy(55+tex,18);cprintf("%c",ar1[tex]);
      if(tex<24){
      gotoxy(68+tex,22);cprintf("%c",ar2[tex]);
      gotoxy(67+tex,26);cprintf("%c",ar3[tex]);
      gotoxy(70+tex,30);cprintf("%c",ar4[tex]);
      gotoxy(71+tex,34);cprintf("%c",ar5[tex]);
      }
      Sleep(100);
   }
}
void inputpil(){
   pil();warna(14,15);
	char arr[4][1000];
   strcpy(arr[0],"MEMBER : MASUKAN AKUN MEMBER JIKA SUDAH DAFTAR DAN JIKA AKUN MASIH BERLAKU           ");
   strcpy(arr[1],"DAFTAR : DAFTAR JADI ANGGOTA MEMBER GRATIS RENTAL DAN DISKON REKORDING SELAMA 7 HARI ");
   strcpy(arr[2],"REGULER: REKORDING ATAU RENTAL 2jt/lagu && 50 rb/jam                                 ");
   strcpy(arr[3],"EXIT   : KELUAR DARI APLIKASI                                                        ");
   gotoxy(33,40);cprintf("TEKAN ");
   char input,input2;screenpils(0,5,5);
   int tam=0,tam2=0;int ky=0,back=5;int text=5,cek=0;gotoxy(33,40);
   warna(11,5);cprintf("%s",arr[tam]);
   do{
   gotoxy(90,33);input=getch();
////............................WARNA PILIHAN...............................////
		if(input==80 ){
         	if(ky==0 && back==5 && text==5){
 					ky=4,back=5,text=5;tam=1;tam2=1;
         	}else if(ky==4 && back==5 && text==5){
 					ky=8,back=5,text=5;tam=2;tam2=2;
 				}else if(ky==8 && back==5 && text==5){
 					ky=12,back=5,text=5;tam=3;tam2=3;
          	}else if(ky==12 && back==5 && text==5){
 					ky=0,back=5,text=5;tam=4;tam2=0;
           	}screenpils(0,11,5),screenpils(4,11,5),screenpils(8,11,5),screenpils(12,11,5);
      		 screenpils(ky,back,text);gotoxy(33,40);warna(11,5);cprintf("%s",arr[tam2]);

      }
      else if(input==72){
            if(ky==0 && back==5 && text==5){
 					ky=12,back=5,text=5;tam=4;tam2=3;
         	}else if(ky==12 && back==5 && text==5){
 					ky=8,back=5,text=5;tam=3;tam2=2;
 				}else if(ky==8 && back==5 && text==5){
 					ky=4,back=5,text=5;tam=2;tam2=1;
          	}else if(ky==4 && back==5 && text==5){
 					ky=0,back=5,text=5;tam=1;tam2=0;
           	}screenpils(0,11,5),screenpils(4,11,5),screenpils(8,11,5),screenpils(12,11,5);
            screenpils(ky,back,text);gotoxy(33,40);warna(11,5);cprintf("%s",arr[tam2]);

      }
      else if(input!=0 && input!=13){
   		warna(11,15);
         gotoxy(60,42);cprintf("INPUTAN SALAH");
         Sleep(1000);
         gotoxy(60,42);cprintf("             ");
      }
   }while(input!=13);

   if(tam2==0){
      BINGKAI(11);
      screen_1(2,168,2,58,5,4);
      header();
   	MEMBER();
   }
   if(tam2==1){
      BINGKAI(11);
      screen_1(2,168,2,58,5,4);
      header();
   	DAFTAR();
   }
   if(tam2==2){
      BINGKAI(11);
      screen_1(2,168,2,58,5,4);
      header();
   	REGULER();
   }
   if(tam2==3){
      exit(0);
   }

}

////////////////////////////////////////////////////////////////////////////////
///////////////////                  MAIN                 //////////////////////
////////////////////////////////////////////////////////////////////////////////
main(){
for(int a=0;a<1000;a++){
	limit[a]=7;
}
TAMPILAN_1();
inputpil();
getch();
}
