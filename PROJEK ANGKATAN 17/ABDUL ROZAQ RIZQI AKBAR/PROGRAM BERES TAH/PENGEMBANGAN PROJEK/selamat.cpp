/////////////////////////////////////////////////////////////////////////////////
								//    ABDUL ROZAQ RIZQI AKBAR                           /
                          //  D3 MANAJEMEN INFORMATIKA                          /

//1000X 1000
//KODE = STORYONTONE
///////////////////////// LIBRARY /////////////////////////////////////////////////


#include <stdio.h>
#include <conio.h>
#include <windows.h>


///////////////////////////////////VARIABLE GLOBAL	/////////////////////////////////
int z=10;
int lababersih=0;
int tahun;
char pilihan[10];
char datapt[100][100];
char jumlahakun1[100][100];
char email[100];
int datanr=0,datanrn=0,itung=0,itung1=0,itung2=0,sumakun=0,totalakun=0;
char totalnoakun[1000][1000];
/////////////////////////////////////ASSEET//////////////////////////////////////
int tampungansaldoaktiva[100];
char aset[100][100];
char noakun[100][100];
char saldoakunawal[100][100];
char no=0;
int assetsum=0;
int asetawal=0;
int saldoawal=0;
int jumlahsaldoaktiva=0;
////////////////////////////////////////KWAJIBAN ///////////////////////////////
int tampungansaldokwajiban[100];
int kwajibansum=0;
char noakun1[100][100];
int no1=0;
char kwajiban[100][100];
int  kwajibanawal=0;
char saldoakunawal2[100][100];
int  saldoawal2=0;
int jumlahsaldokwajiban=0;
/////////////////////////////////////MODAL /////////////////////////////////////
int tampungansaldomodal[100];
int modalsum=0;
char noakun2[100][100];
int no2=0;
char modal[100][100];
int  modalawal=0;
char saldoakunawal3[100][100];
int  saldoawal3=0;
int jumlahsaldomodal=0;
/////////////////////////////////////PENDAPATAN////////////////////////////////
int tampungansaldopendapatan[100];
int pendapatansum=0;
char noakun3[100][100];
int no3=0;
char pendapatan[100][100];
int  pendapatanawal=0;
char saldoakunawal4[100][100];
int  saldoawal4=0;
int jumlahsaldopendapatan=0;
//////////////////////////////beban ////////////////////////////
int tampungansaldobeban[100];
int bebansum=0;
char noakun4[100][100];
int no4=0;
char beban[100][100];
int  bebanawal=0;
char saldoakunawal5[100][100];
int  saldoawal5=0;
int jumlahsaldobeban=0;
/////////////////////////////LANGKAH/////////
int totalneracadeb=0,totalneracaker=0;
////////////////////////AJP//////////////////////////////////////////////
int kelos1[100];
int kelos[100];
char totalsaldointajp1[100][100];
char totalsaldointajp[100][100];
int konvert[100];
char totalajp[100][100];
char noakunajp[100][100];
int  totalsaldoajp=0;
char akunajp[100][100];
char keteranganajp[100][100];
char keteranganajp1[100][100];
char saldoajpdeb[100][100];
char saldoajpker[100][100];
int saldod=0;
int keterangan=0;
int keterangan1=0;
int noajp=0;
int saldok=0;
char akunajp1[100][100];
int noajp1=0;
int hitung=0;
//////////////////////////PROTOTYPE/////////////////////////////////////////////
void garis();
void load ();
void login();
void animasi();
void full();
void logo();
void menu();
void create();
void hapus();
void about();
void jumlahakun();
void neracaawal();
void bingkaijumlahakun();
void menueror();
void hapusisineraca();
void ajp();
void bingkaiajp();
void banyakajp();
void me();
void neraca();
void isineraca();
void labarugi();
void perubahanmodal();
int validasiangka(char a[100]);
int validasihuruf(char a[100]);
int validasiperusahaan(char a[100]);
void laporankeuangan();
char* validasiwadah(char a[],int x,int y);
//////////////////////// VOID //////////////////////////////////////////////////
 //load awal
void garis(){
 clrscr();
system("COLOR 0F");

   textcolor(1);
 for(int a=1;a<=50;a++){
    for(int b=1;b<=160;b++){
      if( a==1 ||  a==50 ){
         	printf("%c",219);
        		 Sleep(1);
      }else if (b==1 || b==160 ){
            printf("%c",219);
      }else {
         	printf(" ");
      }
     }	 printf("\n");

  			Sleep(1);
  }
   //system("c:\\windows\\system32\\shutdown /s");
}

int validasinoakun(char a[100]){
    int x=0;
    if(strlen(a)==0 ||  strlen(a)!=1 || (a[strlen(a)]==' ')){
         return 1;
     }
     for(int b=0;b<strlen(a);b++){
        if(!(a[b]>='1' && a[b]<='7')){
           x++;
        }
       }
       return x;
 }
 char* validasiwadah(char a[],int x,int y){
   while(validasiperusahaan(a)!=0){
      gotoxy(12,5);cprintf("MASUKAN NAMA AKUN DENGAN BENAR !!!!!!");

   for(int b=0;b<strlen(a);b++){
       gotoxy(x+b,y);printf(" ");
       }
      gotoxy(x,y);gets(a);

   }
     gotoxy(12,5);cprintf("                                     ");
     return a;
  }
int validasiperusahaan(char a[100]){
   int h=0;
   int z=0;
   int u=0;

    if(a[0]==' '|| strlen(a)==0 ){
     return 1;
    }
   for(int h=0;a[h]!=NULL;h++){
      h++;
     }
   if(a[strlen(a)-1]==' '){
      return 1;
     }
 for(int i=0;i<strlen(a);i++){
      if(!((a[i]>='a'&& a[i]<='z')||( a[i]>='A'&& a[i]<='Z'|| a[i]==' ') || a[0]>='a' && a[0]<='z' || a[0]>='A' && a[0]<='Z' || a[1]==' ') || (a[i]==' '&&a[i+2]==' ') ) {
         z++;
        break;
       }
     }

 for(int i=0;i<strlen(a);i++){
      if(!((a[i]>='a'&& a[i]<='z')||( a[i]>='A'&& a[i]<='Z'))  && ( a[i]==' ' && a[i+1]==' ')){
       z++;
	    }
     }
   return z;

}
int validasialamatpt(char a[100]){
int h=0,z=0;
 if(a[0]==' ' ||strlen(a)==0){
     return 1;
    }
   for(int h=0;h<strlen(a);h++){
      h++;
    }
    if(a[strlen(a)-1]==' '){
      return 1;
     }
  for(int i=0;i<strlen(a);i++){
      if(!((a[i]>='a'&& a[i]<='z'|| a[i]>='A'&& a[i]<='Z'|| a[i]>='0'&& a[i]<='9') || a[i]==' ')) {
         z++;
        break;
       }
     }
  for(int b=0;b<strlen(a);b++ ){
	 if(!((a[b]>='a'&& a[b]<='z') || (a[b]>='A'&& a[b]<='Z') ||( a[b]>='0'&& a[b]<='9'))  && (a[b]==' ' && a[b+1]==' ' )) {
     z++;
     }
 }
  return z;

}
int validasiangka(char a[100]){
  int x=0;
     for(int b=0;b<strlen(a);b++){
        if((a[b]>='0' && a[b]<='9')){
           x++;
        }
       }
       if(strlen(a)==0)x=1;
       else if(x==strlen(a))x=0;
       else x=1;
       return x;

 }

int validasihuruf(char a[100]){
 int z=0;
   if(strlen (a)==0 || a[0]==' ' || (a[strlen(a)]==' '))
       return 1;
    for(int b=0;b<strlen(a);b++){
       if(!((a[b]>=65  &&  a[b]<=91 ) || (a[b]>=97  &&  a[b]<=122) || a[b]==' ')){
         z++;
       }
    }
    return z;
}
////////////////////////////////////MENU UTAMA /////////////////////////////////////////
main(){
  full();
    getch();

  }

////////////////////////////program////////////////////////////////////////////////////////

void laporankeuangan(){
  hapus();
  neraca();
  hapus();
  labarugi();
  hapus();
  perubahanmodal();
}
void full(){
     login();
     garis();
     load();
    // logo();
    menu();
  	}
    //////loading
void load(){
system("color 0F");
  //loading
  int c=0;
   textcolor(15);
   for(int a=4;a<=100;a++){

     	gotoxy(a+25,40);printf("%c",219);
     	 		Sleep(10);

     gotoxy(5,36);textcolor(a);printf("%d %",a);
      		Sleep(10);

  gotoxy(75,38);printf("LOADING");

   for(int b1=83;b1<=88;b1++){
       gotoxy(b1,38);printf(".");
        c++;
            if(c%3==0){
                gotoxy(83,38);printf(" ");
                gotoxy(84,38);printf(" ");
                gotoxy(85,38);printf(" ");
                gotoxy(86,38);printf(" ");
                gotoxy(87,38);printf(" ");
                gotoxy(88,38);printf(" ");

             }
       Sleep(10);
			}
   	}
      gotoxy(65,49);printf("Tekan ENTER UNTUK MASUK PROGRAM!");
    getch();
 }

 ///////login
void login(){
//BACKGROUND
     system("color f3");

    //UCAPAN WELCOME
 for(int a=40;a<=85;a++){
 	textbackground(3);
   gotoxy(57,9);cprintf ("|============================|");
   gotoxy(57,10);cprintf("|        !SAMPURASUN!        |");
   gotoxy(57,11);cprintf("|============================|");

   gotoxy(55,13);cprintf("|======================================|");
   gotoxy(55,14);cprintf("*  SELAMAT DATANG DI LAPORAN KEUANGAN  *");
   gotoxy(55,15);cprintf("|======================================|");

   Sleep(15);
  }
		/////background
  for(int b=43;b<=87;b++){
  	textcolor(7);
   // gotoxy(b,19);cprintf("%c",219);
    //gotoxy(b,20);cprintf("%c",219);
    gotoxy(b,21);cprintf("%c",219);
    gotoxy(b,22);cprintf("%c",219);
    gotoxy(b,23);cprintf("%c",219);
    gotoxy(b,24);cprintf("%c",219);
    gotoxy(b,25);cprintf("%c",219);

    }

 for(int a=40;a<=85;a++){
    gotoxy(a,23);printf("%c",219);
    gotoxy(a,24);printf("%c",219);
    gotoxy(a,25);printf("%c",219);
    gotoxy(a,26);printf("%c",219);
    gotoxy(a,27);printf("%c",219);
    gotoxy(a,28);printf("%c",219);
    gotoxy(a,29);printf("%c",219);
    gotoxy(a,30);printf("%c",219);
   Sleep(10);
  }
  for (int a=64;a<=84;a++){
    textcolor(7);
    gotoxy(a,25);cprintf("%c",219);
   }
  /////////////login ///////////////////
  textbackground(3);
 gotoxy(43,25);cprintf("MASUKAN  KODE LOGIN = ");
 char kode[20]="STORYONTONE",code[1000];
		gets(code);
 while(strcmp(code,kode)!=0){

  for(int a=86;a<=185;a++){
    gotoxy(a,25);printf(" ");
  		}
  textcolor(11);
  for(int a=40;a<=85;a++){
    gotoxy(a,35);cprintf("%c",219);
    gotoxy(a,36);cprintf("%c",219);
    gotoxy(a,37);cprintf("%c",219);
    gotoxy(a,38);cprintf("%c",219);
    gotoxy(a,39);cprintf("%c",219);
    gotoxy(a,40);cprintf("%c",219);
    gotoxy(a,41);cprintf("%c",219);
    gotoxy(a,42);cprintf("%c",219);
    gotoxy(a,43);cprintf("%c",219);
    gotoxy(a,44);cprintf("%c",219);
    gotoxy(a,45);cprintf("%c",219);
    gotoxy(a,46);cprintf("%c",219);

    Sleep(10);
       }
 for(int a=40;a<=85;a++){
    gotoxy(a,24);printf("%c",219);
    gotoxy(a,25);printf("%c",219);
    gotoxy(a,26);printf("%c",219);
    gotoxy(a,27);printf("%c",219);
    gotoxy(a,28);printf("%c",219);
    gotoxy(a,29);printf("%c",219);
    gotoxy(a,30);printf("%c",219);
    gotoxy(a,31);printf("%c",219);

    Sleep(10);
    }

 for (int a=64;a<=84;a++){
    textcolor(7);
    gotoxy(a,25);cprintf("%c",219);
     }
    textbackground(100);

    gotoxy(50,39);cprintf("***********************");
    gotoxy(50,40);cprintf("* Maaf Password salah *");
    gotoxy(50,41);cprintf("***********************");
      //login
      textbackground(3);
	  gotoxy(43,25);cprintf("MASUKAN  KODE LOGIN = ");
   	//textcolor(3);
      gotoxy(67,25);gets(code);

  }
  clrscr();

}
///////////////////////////////////logotulisan
void animasi(){for(int a=1;a<=10;a++){
 z--;
//textcolor(a);
 gotoxy(55,41);printf("PROGRAM KELUAR DALAM %d DETIK",z);
   gotoxy(55,39);printf("==========NUHUN============ ");

	gotoxy(55,25);  printf("        ******           ");
	gotoxy(55,26);  printf("        * ** *      *    ");
	gotoxy(55,27);  printf("  **    ******   ***     ");
	gotoxy(55,28);  printf("     ** ** ** **       ");
	gotoxy(55,29);  printf("       * ** *         ");
	gotoxy(55,30);  printf("       * ** *           ");
	gotoxy(55,31);  printf("       *******          ");
	gotoxy(55,32);  printf("       *  +  *           ");
	gotoxy(55,33);  printf("      **     **         ");
	gotoxy(55,34);  printf("     **       **         ");

Sleep(100);
	gotoxy(55,25); printf("        ******           ");
	gotoxy(55,26);  printf("   *    * ** *           ");
	gotoxy(55,27);  printf("    *   ******           ");
	gotoxy(55,28);  printf("     ** ** ** **       ");
	gotoxy(55,29); printf("        * ** *  *      ");
	gotoxy(55,30); printf("        * ** *   *       ");
	gotoxy(55,31); printf("       *******          ");
	gotoxy(55,32); printf("    *  ** +  *           ");
	gotoxy(55,33); printf("    * **   **          ");
	gotoxy(55,34); printf("         **           ");

Sleep(100);


gotoxy(55,25); printf("        ******           ");
gotoxy(55,26); printf("   *    * ** *           ");
gotoxy(55,27); printf("    *   ******           ");
gotoxy(55,28); printf("     ** ** ** **       ");
gotoxy(55,29);printf("        * ** *  *      ");
gotoxy(55,30);printf("        * ** *   *       ");
gotoxy(55,31);printf("       *******          ");
gotoxy(55,32);printf("    *    **              ");
gotoxy(55,33);printf("    * **   *           ");
gotoxy(55,34);printf("          *           ");

Sleep(100);

gotoxy(55,25); printf("        ******           ");
gotoxy(55,26); printf("        * ** *      *    ");
gotoxy(55,27); printf("  **    ******   ***     ");
gotoxy(55,28); printf("     ** ** ** **       ");
gotoxy(55,29); printf("       * ** *         ");
gotoxy(55,30); printf("       * ** *           ");
gotoxy(55,31); printf("         ***            ");
gotoxy(55,32); printf("         ** **           ");
gotoxy(55,33); printf("       **    **         ");
gotoxy(55,34); printf("     **       **         ");

Sleep(100);
gotoxy(55,25); printf("        ******           ");
gotoxy(55,26); printf("   *    * ** *           ");
gotoxy(55,27); printf("    *   ******           ");
gotoxy(55,28); printf("     ** ** ** **       ");
gotoxy(55,29);printf("        * ** *  *      ");
gotoxy(55,30);printf("        * ** *   *       ");
gotoxy(55,31);printf("       *******          ");
gotoxy(55,32);printf("       ** +  *           ");
gotoxy(55,33);printf("        ** **          ");
gotoxy(55,34);printf("        * *         ");

Sleep(100);

  }

}
void logo(){
 for(int b=5;b<=130;b++){
    gotoxy(b,36);printf(" ");
    gotoxy(b,37);printf(" ");
    gotoxy(b,38);printf(" ");
    gotoxy(b,39);printf(" ");
    gotoxy(b,40);printf(" ");
    gotoxy(b,41);printf(" ");
    gotoxy(b,42);printf(" ");
    gotoxy(b,43);printf(" ");
    gotoxy(b,44);printf(" ");
    gotoxy(b,45);printf(" ");
    gotoxy(b,49);printf(" ");
  }

for(int a=10;a<30;a++){

 	gotoxy(5+a,3);  printf("ss          ss      sssss     sss  ");gotoxy(98-a,3); printf("ssssss       ssss    ss    ss");
	gotoxy(5+a,4);  printf("ss        ss  ss    ss   s  ss  ss ");gotoxy(98-a,4); printf("ss    s     ss  ss   ss    ss");
	gotoxy(5+a,5);  printf("ss       ss    ss   sssss   ss  ss ");gotoxy(98-a,5); printf("ssssss     ss   ss   ss s  ss");
	gotoxy(5+a,6);  printf("ss      ssssssssss  ss      ss  ss ");gotoxy(98-a,6); printf("ss   s    sssssssss  ss  s ss");
	gotoxy(5+a,7);  printf("sssss  ss        ss ss       ssss  ");gotoxy(98-a,7); printf("ss    s  ss       s  ss   sss");

  	gotoxy(5+a,3);  printf(" ");
	gotoxy(5+a,4);  printf(" ");
	gotoxy(5+a,5);  printf(" ");
	gotoxy(5+a,6);  printf(" ");
	gotoxy(5+a,7); printf(" ");

   gotoxy(127-a,3);  printf(" ");
	gotoxy(127-a,4);  printf(" ");
	gotoxy(127-a,5);  printf(" ");
	gotoxy(127-a,6);  printf(" ");
	gotoxy(127-a,7);  printf(" ");

	gotoxy(5+a,12);   printf("ss  s  ssssss ss    ss     sss     ");gotoxy(98-a,12); printf(" ssss    ss    sssss      ssss     sss    ss");
	gotoxy(5+a,13);   printf("ss s   ss     ss    ss    ss ss    ");gotoxy(98-a,13); printf(" ss ss   ss  ss          ss  ss    ss s   ss");
	gotoxy(5+a,14);   printf("sss    sssss  ss    ss   ss   ss   ");gotoxy(98-a,14); printf(" ss   s  ss  ss  ssss   ss    ss   ss  s  ss");
	gotoxy(5+a,15);   printf("ss s   ss     ss    ss  sssssssss  ");gotoxy(98-a,15); printf(" ss     sss  ss     s  ssssssssss  ss   s ss");
	gotoxy(5+a,16);  printf ("ss  s  ssssss   ssss   ss       ss ");gotoxy(98-a,16); printf(" ss      ss  ssssssss ss        ss ss    sss");

  	gotoxy(5+a,12);   printf(" ");
	gotoxy(5+a,13);   printf(" ");
	gotoxy(5+a,14);   printf(" ");
	gotoxy(5+a,15);   printf(" ");
	gotoxy(5+a,16);   printf (" ");


   gotoxy(142-a,12);  printf(" ");
	gotoxy(142-a,13);  printf(" ");
	gotoxy(142-a,14);  printf(" ");
	gotoxy(142-a,15);  printf(" ");
	gotoxy(142-a,16);  printf(" ");

  Sleep(10);
  }
 for(int b=1;b<=160;b++){
   gotoxy(b,10);printf("%c",219);
   gotoxy(b,18);printf("%c",219);
 }
}
void menu(){
//tampilan
garis();
logo();
 int b=25,c=40;
 textcolor(9);
  for(int a=5;a<=25;a++){
    gotoxy(a,25);cprintf("%c",219);
    gotoxy(a,35);cprintf("%c",219);

     if(a>=15){
       gotoxy(5,b);cprintf("%c",219);
       gotoxy(25,b);cprintf("%c",219);

       gotoxy(35,b);cprintf("%c",219);
       gotoxy(55,b);cprintf("%c",219);

       gotoxy(65,b);cprintf("%c",219);
       gotoxy(85,b);cprintf("%c",219);

       gotoxy(95,b);cprintf("%c",219);
       gotoxy(115,b);cprintf("%c",219);

       gotoxy(125,b);cprintf("%c",219);
       gotoxy(145,b);cprintf("%c",219);


      b++;
     }
    gotoxy(a+30,25);cprintf("%c",219);
    gotoxy(a+30,35);cprintf("%c",219);

    gotoxy(a+60,25);cprintf("%c",219);
    gotoxy(a+60,35);cprintf("%c",219);

    gotoxy(a+90,25);cprintf("%c",219);
    gotoxy(a+90,35);cprintf("%c",219);

    gotoxy(a+120,25);cprintf("%c",219);
    gotoxy(a+120,35);cprintf("%c",219);

    gotoxy(a+60,40);cprintf("%c",219);
    gotoxy(a+60,45);cprintf("%c",219);

    Sleep(10);

}


 for(int a=40;a<=45;a++){
      gotoxy(65,a);cprintf("%c",219);
       gotoxy(85,a);cprintf("%c",219);

  }

 gotoxy(15,27);printf("1");
 gotoxy(10,30);printf("C R E A T E");
 gotoxy(45,27);printf("2");
 gotoxy(40,30);printf("R E P O R T");
 gotoxy(75,27);printf("3");
 gotoxy(70,30);printf("COMPANY DATA ");
 gotoxy(105,27);printf("4");
 gotoxy(101,30);printf("A B O U T");
 gotoxy(135,27);printf("5");
 gotoxy(132,30);printf("E X I T");
 gotoxy(69,42);printf("PILIH =");

  gotoxy(76,42);gets(pilihan);
    if(strcmp(pilihan,"1")==0){
            hapus();
            garis();
    		    create();
             garis();
            jumlahakun();
            neracaawal();
            ajp();
           laporankeuangan();
    }else if (strcmp(pilihan,"2")==0){
            laporankeuangan();
            menu();
    }else if (strcmp(pilihan,"3")==0){
            garis();
            about();
            menu();
     }else if (strcmp(pilihan,"4")==0){
      me();
      menu();
     }else if (strcmp(pilihan,"5")==0){
       hapus();
       animasi();
       exit(0);
     }else{
        for(int a=0;a<strlen(pilihan);a++){
     			 gotoxy(76+a,42);printf(" ");
         }
         menu();
      }
}

void hapus(){
for(int b=2;b<=170;b++){
 gotoxy(b,3); printf("--");
 gotoxy(b,4); printf("| ");
 gotoxy(b,5); printf("| ");
 gotoxy(b,6); printf("| ");
 gotoxy(b,7); printf("| ");
 gotoxy(b,8); printf("| ");
 gotoxy(b,9); printf("| ");
 gotoxy(b,10);printf("| ");
 gotoxy(b,11);printf("| ");
 gotoxy(b,12);printf("| ");
 gotoxy(b,13);printf("| ");
 gotoxy(b,14);printf("| ");
 gotoxy(b,15);printf("| ");
 gotoxy(b,16);printf("| ");
 gotoxy(b,17);printf("| ");
 gotoxy(b,18);printf("| ");
 gotoxy(b,19);printf("| ");
 gotoxy(b,20);printf("| ");
 gotoxy(b,21);printf("| ");
 gotoxy(b,22);printf("| ");
 gotoxy(b,23);printf("| ");
 gotoxy(b,24);printf("| ");
 gotoxy(b,25);printf("| ");
 gotoxy(b,26);printf("| ");
 gotoxy(b,27);printf("| ");
 gotoxy(b,28);printf("| ");
 gotoxy(b,29);printf("| ");
 gotoxy(b,30);printf("| ");
 gotoxy(b,31);printf("| ");
 gotoxy(b,32);printf("| ");
 gotoxy(b,33);printf("| ");
 gotoxy(b,34);printf("| ");
 gotoxy(b,35);printf("| ");
 gotoxy(b,36);printf("| ");
 gotoxy(b,37);printf("| ");
 gotoxy(b,38);printf("| ");
 gotoxy(b,39);printf("| ");
 gotoxy(b,40);printf("| ");
 gotoxy(b,41);printf("| ");
 gotoxy(b,42);printf("| ");
 gotoxy(b,43);printf("| ");
 gotoxy(b,44);printf("| ");
 gotoxy(b,45);printf("-- ");


 gotoxy(b,0);printf(" ");
 gotoxy(b,1);printf(" ");
 gotoxy(b,2);printf(" ");
 gotoxy(b,3);printf(" ");
 gotoxy(b,4);printf(" ");
 gotoxy(b,5);printf(" ");
 gotoxy(b,6);printf(" ");
 gotoxy(b,7);printf(" ");
 gotoxy(b,8);printf(" ");
 gotoxy(b,9);printf(" ");
 gotoxy(b,10);printf(" ");
 gotoxy(b,11);printf(" ");
 gotoxy(b,12);printf(" ");
 gotoxy(b,13);printf(" ");
 gotoxy(b,14);printf(" ");
 gotoxy(b,15);printf(" ");
 gotoxy(b,16);printf(" ");
 gotoxy(b,17);printf(" ");
 gotoxy(b,18);printf(" ");
 gotoxy(b,19);printf(" ");
 gotoxy(b,20);printf(" ");
 gotoxy(b,21);printf(" ");
 gotoxy(b,22);printf(" ");
 gotoxy(b,23);printf(" ");
 gotoxy(b,24);printf(" ");
 gotoxy(b,25);printf(" ");
 gotoxy(b,26);printf(" ");
 gotoxy(b,27);printf(" ");
 gotoxy(b,28);printf(" ");
 gotoxy(b,29);printf(" ");
 gotoxy(b,30);printf(" ");
 gotoxy(b,31);printf(" ");
 gotoxy(b,32);printf(" ");
 gotoxy(b,33);printf(" ");
 gotoxy(b,34);printf(" ");
 gotoxy(b,35);printf(" ");
 gotoxy(b,36);printf(" ");
 gotoxy(b,37);printf(" ");
 gotoxy(b,38);printf(" ");
 gotoxy(b,39);printf(" ");
 gotoxy(b,40);printf(" ");
 gotoxy(b,41);printf(" ");
 gotoxy(b,42);printf(" ");
 gotoxy(b,43);printf(" ");
 gotoxy(b,44);printf(" ");
 gotoxy(b,45);printf(" ");
 gotoxy(b,46);printf(" ");
 gotoxy(b,47);printf(" ");
 gotoxy(b,48);printf(" ");
 gotoxy(b,49);printf(" ");
 gotoxy(b,50);printf(" ");
 gotoxy(b,51);printf(" ");
 gotoxy(b,52);printf(" ");
 gotoxy(b,53);printf(" ");

  Sleep(8);
}


}

void bingkaidata(){
   system ("color f3");

  char data[50]="M A S U K A N  D A T A  P E R U S A H A A N";

  	for(int b=0;b<strlen(data);b++){
     gotoxy(b+30,4);printf("%c",data[b]);
     Sleep(10);
    }

  int c=7;
   for(int a=10;a<=120;a++){
      gotoxy(a,7);printf("%c",219);
      gotoxy(a,13);printf("%c",219);
      gotoxy(a,19);printf("%c",219);
      gotoxy(a,25);printf("%c",219);
		gotoxy(a,31);printf("%c",219);

     if(a>=96){
      gotoxy(10,c);printf("%c",219);
      gotoxy(30,c);printf("%c",219);
      gotoxy(120,c);printf("%c",219);

      c++;
      }
    }
}


void create(){
////////////////////////////inputan data awal perusahaan.///////////////////////

      bingkaidata();
      gotoxy(12,9); printf(" NAMA PERUSAHAAN  ");
      gotoxy(12,15);printf("ALAMAT PERUSAHAAN ");
      gotoxy(12,21);printf("NO TELPON         ");
      gotoxy(12,27);printf("PERIODE  TAHUN    ");
      gotoxy(31,15);printf("JALAN ");
   int azs=1;
   int x1=0;
do{
     gotoxy(31,9) ;gets(datapt[datanr]); strupr(datapt[datanr]);     ////// INDEX 0
          for(int a=0;a<strlen(datapt[datanr]);a++){
            itung++;
            }
         if((validasiperusahaan(datapt[datanr])==0) && strlen((datapt[datanr]))!=0 && strlen((datapt[datanr]))>=3 ){
                 azs=0;
              for(int a=0;a<strlen(datapt[datanr]);a++){
                  datapt[datanr][a]=NULL;
          	      }

                   break;
         }else{
            azs=1;
                 for(int a=0;a<strlen(datapt[datanr]);a++){
         	  	   gotoxy(31+a,9);printf(" ");
         	 }
         }

     }while(azs!=0);
      gotoxy(50,35);printf("                                            ");

      datanr++;
    do{
   gotoxy(37,15);gets(datapt[datanr]); strupr(datapt[datanr]);      ////// INDEX 1
          for(int a=0;a<strlen(datapt[datanr]);a++){
                 itung1++;
         	 }

          if(validasialamatpt(datapt[datanr])==0 && strlen(datapt[datanr])!=0 && strlen((datapt[datanr]))>=3){
                azs=0;
                for(int a=0;a<strlen(datapt[datanr]);a++){
                  datapt[datanr][a]=NULL;
          	      }
              break;
          }else {
           	for(int a=0;a<strlen(datapt[datanr]);a++){
                     gotoxy(31+a,15);printf(" ");
             }
             azs=1;
        }


       }while(azs!=0);

      datanr++;
   	 int b=0,zz=0;
          int x=0;
          int bss=0;
      do{
         gotoxy(31,21);gets(datapt[datanr]);         ////// INDEX 2
          x=validasiangka(datapt[datanr]);
               for(int b=0;b<strlen(datapt[datanr]);b++){
			        if(!(datapt[datanr][0]=='0' && (datapt[datanr][1]=='8' || datapt[datanr][1]=='2' ))){
       	  			  bss++;
                    goto l;
     			  		 }
    			     }


                 if(x!=0 ){
                   l:
       	  	    	 gotoxy(31,47);cprintf("-----INPUTAN ANDA EROR --");
                   gotoxy(31,48);cprintf("--MASUKAN NO DENGAN BENAR--");

                   for(int z=0;z<=strlen(datapt[datanr]);z++){
                   			gotoxy(31+z,21);printf(" ");
                           Sleep(1);
                    }
                   //break;
                   bingkaidata();
              		}else if(strlen(datapt[datanr])!=12){
            	           gotoxy(31,47);cprintf("-----INPUTAN ANDA EROR --");
      	 	             gotoxy(31,48);cprintf("-===NO HARUS 12 ANGKA===-");
                        for(int z=0;z<=strlen(datapt[datanr]);z++){
                   			gotoxy(31+z,21);printf(" ");
                           Sleep(1);
                   }
                   //break;
                   bingkaidata();

                  }else  {

                      b=1;
               		  break;
                  }

       }while(b!=1);
                   gotoxy(31,47);printf("                                                                                    ");
                   gotoxy(31,48);printf("                                                                                    ");
                //tahun=atoi(datapt[datanr]);
          datanr++;
	      int z=1,a=0;
      while(z!=0){

			  gotoxy(50,27);printf("2000 - 2039");

           gotoxy(31,27);gets(datapt[datanr]);

           if( !(datapt[datanr][0]=='2' && datapt[datanr][1]=='0' &&(datapt[datanr][2]>='0' && datapt[datanr][2]<='3')&&(datapt[datanr][3]>='0' && datapt[datanr][3]<='9'))){
                goto p;
                }
       	  if((validasiangka(datapt[datanr]))!=0){
                  p:
                  gotoxy(31,46);printf("INPUTAN ANDA EROR !");
                   for(int zz=0;zz<=strlen(datapt[datanr]);zz++){
                   			gotoxy(31+zz,27);printf(" ");
                           Sleep(1);
                            }
                      bingkaidata();
            }else if(strlen(datapt[datanr])!=4){
                     gotoxy(31,47);printf(" MASUKAN 4 KARAKTER");
                   for(int zz=0;zz<=strlen(datapt[datanr]);zz++){
                   			gotoxy(31+zz,27);printf(" ");
                           Sleep(1);
                            }
                      bingkaidata();
                    a=0;
                    gotoxy(31,46);printf("                                       ");
                    gotoxy(31,47);printf("                                       ");
           	}else {
                      z=0;
               		 break;

         }
       }
       tahun=atoi(datapt[datanr]);
         datanr++;
      hapus();
  }

void about(){

  int c=7;
   for(int a=10;a<=120;a++){
      gotoxy(a,7);printf("%c",219);
      gotoxy(a,13);printf("%c",219);
      gotoxy(a,19);printf("%c",219);
      gotoxy(a,25);printf("%c",219);
		gotoxy(a,31);printf("%c",219);

     if(a>=96){
      gotoxy(10,c);printf("%c",219);
      gotoxy(30,c);printf("%c",219);
      gotoxy(120,c);printf("%c",219);

      c++;
      }
    }
      gotoxy(50,4); printf("D A T A  P E R U S A H A A N");
      gotoxy(12,9); printf(" NAMA PERUSAHAAN  ");
      gotoxy(12,15);printf("ALAMAT PERUSAHAAN ");
      gotoxy(12,21);printf("NO TELPON         ");
    	gotoxy(12,27);printf("PERIODE  TAHUN    ");
 for(int x=0;x<=itung;x++){

     gotoxy(x+31,9);printf("%c",datapt [0][x]);
   }
 for(int x1=0;x1<=itung1;x1++){
     gotoxy(x1+37,15);printf("%c",datapt [1][x1]);
   }
 for(int x2=0;x2<12;x2++){
     gotoxy(x2+31,21);printf("%c",datapt [2][x2]);
  }
     gotoxy(31,15);printf("JALAN ");

     gotoxy(31,27);printf("%d",tahun);
     gotoxy(75,52);cprintf("TEKAN APA SAJA UNTUK SELANJUTNYA ");

  getch();
}

void bingkaijumlahakun(){
    int c=7;
   for(int a=10;a<=90;a++){
      gotoxy(a,7);printf("%c",219);
      gotoxy(a,13);printf("%c",219);
      gotoxy(a,19);printf("%c",219);
      gotoxy(a,25);printf("%c",219);
		gotoxy(a,31);printf("%c",219);
		gotoxy(a,37);printf("%c",219);

     if(a>=60){
      gotoxy(10,c);printf("%c",219);
      gotoxy(30,c);printf("%c",219);
      gotoxy(90,c);printf("%c",219);

      c++;
      }
    }
      gotoxy(50,4); printf("MASUKAN JUMLAH AKUN");
      gotoxy(12,9); printf(" AKTIVA      ");
      gotoxy(12,15);printf("KWAJIBAN     ");
      gotoxy(12,21);printf("MODAL        ");
      gotoxy(12,27);printf("PENDAPATAN   ");
		gotoxy(12,33);printf("BEBAN        ");


 }

void hapusisineraca(){
no=0;
asetawal=0;
saldoawal=0;

no1=0;
kwajibanawal=0;
saldoawal2=0;

no2=0;
modalawal=0;
saldoawal3=0;

no3=0;
pendapatanawal=0;
saldoawal4=0;

no4=0;
bebanawal=0;
saldoawal5=0;

jumlahsaldoaktiva=0;
jumlahsaldokwajiban=0;
jumlahsaldomodal=0;
jumlahsaldopendapatan=0;
jumlahsaldobeban=0;
}
void jumlahakun(){
  bingkaijumlahakun();
  int  a=1;
  int b=0;
  gotoxy(35,9) ;printf("MAKS 7 AKUN");

 do{
   gotoxy(51,9) ;gets(jumlahakun1[sumakun]);
     textcolor(13);

      if(validasinoakun(jumlahakun1[sumakun])>0  ){
                  gotoxy(10,5);cprintf("MASUKAN JUMLAH AKUN DENGAN BENAR !!!!");
   		            b++;
            	 for(int b=0;b<strlen(jumlahakun1[sumakun]);b++){
               	   gotoxy(51+b,9);printf(" ");
          		  	      }
              bingkaijumlahakun();
          	 }
            else {
                break;
              }
       }while(a!=0);
            for(int b=0;b<38;b++){
                 gotoxy(10+b,5);printf(" ");
                }

      totalakun+=atoi(jumlahakun1[sumakun]);
      assetsum=atoi(jumlahakun1[sumakun]);
        sumakun++;

      bingkaijumlahakun();
      int  a1=1;
      int b1=0;
 gotoxy(35,15) ;printf("MAKS 7 AKUN");
 do{
   bc:
    gotoxy(51,15) ;gets(jumlahakun1[sumakun]);
     textcolor(13);
     if(validasinoakun(jumlahakun1[sumakun])>0){
	                    gotoxy(10,5);cprintf("MASUKAN JUMLAH AKUN DENGAN BENAR !!!!");
               b1++;

            		for(int b=0;b<strlen(jumlahakun1[sumakun]);b++){
                		 gotoxy(51+b,15);printf(" ");
                		}
              bingkaijumlahakun();
         	 }
        else {
          break;
         }
     }while(a1!=0);

      for(int b=0;b<38;b++){
     		gotoxy(10+b,5);printf(" ");
      }
     totalakun+=atoi(jumlahakun1[sumakun]);
     kwajibansum+=atoi(jumlahakun1[sumakun]);
  		  sumakun++;

    bingkaijumlahakun();
      int a2=1;
      int b2=0;
  gotoxy(35,21) ;printf("MAKS 7 AKUN");

 do{
  xr:
    gotoxy(51,21) ;gets(jumlahakun1[sumakun]);
     textcolor(13);
      	if(validasinoakun(jumlahakun1[sumakun])>0){
	                    gotoxy(10,5);cprintf("MASUKAN JUMLAH AKUN DENGAN BENAR !!!!");
             				  for(int b=0;b<strlen(jumlahakun1[sumakun]);b++){
               				  gotoxy(51+b,21);printf(" ");
               			 }
            		  bingkaijumlahakun();
               }else {
                break;
                }
   		  }while(a2!=0);
      for(int b=0;b<38;b++){
     		gotoxy(10+b,5);printf(" ");
        }
       totalakun+=atoi(jumlahakun1[sumakun]);
       modalsum+=atoi(jumlahakun1[sumakun]);
        sumakun++;
       bingkaijumlahakun();
      int a3=1;
      int b3=0;
 gotoxy(35,27) ;printf("MAKS 7 AKUN");

 do{
 f:
    gotoxy(51,27) ;gets(jumlahakun1[sumakun]);
     textcolor(13);
       if(validasinoakun(jumlahakun1[sumakun])>0){
	                    gotoxy(10,5);cprintf("MASUKAN JUMLAH AKUN DENGAN BENAR !!!!");
        					    for(int b=0;b<strlen(jumlahakun1[sumakun]);b++){
               			  gotoxy(51+b,27);printf(" ");
            		    }
           			   bingkaijumlahakun();
         	  }else {
               break;
              }
   	  }while(a3!=0);
      for(int b=0;b<38;b++){
     		gotoxy(10+b,5);printf(" ");
        }
      totalakun+=atoi(jumlahakun1[sumakun]);
      pendapatansum+=atoi(jumlahakun1[sumakun]);
         sumakun++;

        bingkaijumlahakun();
      int a4=1;
      int b4=0;
  gotoxy(35,33) ;printf("MAKS 7 AKUN");

 do{
  z:
    gotoxy(51,33) ;gets(jumlahakun1[sumakun]);
     textcolor(13);
        	if(validasinoakun(jumlahakun1[sumakun])>0){
	                   gotoxy(10,5);cprintf("MASUKAN JUMLAH AKUN DENGAN BENAR !!!!");
              				 for(int b=0;b<strlen(jumlahakun1[sumakun]);b++){
                				 gotoxy(51+b,33);printf(" ");
              					  }
          				    bingkaijumlahakun();
     				}else {
                break;
           	  }
        }while(a4!=0);
      for(int b=0;b<38;b++){
     		gotoxy(10+b,5);printf(" ");
        }
      totalakun+=atoi(jumlahakun1[sumakun]);
      bebansum+=atoi(jumlahakun1[sumakun]);
	      sumakun++;
        hapus();

 }

void bingkaineracaawal(){
    int z=12;
    int b=2*totalakun;
   for(int a=10;a<=150;a++){
      gotoxy(a,7) ;printf("%c",219);
      gotoxy(a,12);printf("%c",219);

   }


   for(int c=0;c<=b+2;c++){
      gotoxy(10,c+7);printf("%c",219);
      gotoxy(20,c+7);printf("%c",219);
      gotoxy(120,c+7);printf("%c",219);
      gotoxy(150,c+7);printf("%c",219);
      gotoxy(90,c+7);printf("%c",219);

      if(c==b){
         for(int z=10;z<=150;z++){
       		gotoxy(z,b+9);printf("%c",219);
       		}
   		}
   	}
   for(int a=0;a<=60;a++){
        gotoxy(90+a,b+15);printf("%c",219);
    }
    for(int a=0;a<=15;a++){
         gotoxy(90,b+a);printf("%c",219);
         gotoxy(120,b+a);printf("%c",219);
		   gotoxy(150,b+a);printf("%c",219);
    }

   gotoxy(12,9);printf("NO AKUN");
   gotoxy(40,9);printf("N A M A  A K U N ");
   gotoxy(100,9);printf("D E B E T");
 	gotoxy(130,9);printf("K R E D I T");
   gotoxy(130,5);printf("(MASUKAN HANYA NOMINAL NYA SAJA !)");
  }
//======================================NERACA AWAL=============================================
void neracaawal(){
int keluar=1;
int cc=0;
do{
  bingkaineracaawal();
  int a=1,b=0;
  int sok=0;
 for(int z=0;z<assetsum;z++){ /////INPUTAN NERACA AWAL
   while(a!=0){
        sok=0;
      gotoxy(11,13+z);gets(noakun[no]);
         for(int zz=0;zz<no;zz++){
               if(no==0){
                 goto g;
                }
               else if(strcmp(noakun[no],noakun[zz])==0){
                   sok++;
            	    }
            }
           g:
             textcolor(13);
             if(noakun[no][0]!='1'  || validasiangka(noakun[no])>0){
      						gotoxy(12,5);cprintf("MASUKAN NO AKUN DENGAN BENAR !!!!!!   ");
                        gotoxy(12,6);cprintf("AKUN AKTIVA DI AWALI NO AKUN 1 !!!!!!");
                       for(int a=0;a<=strlen(noakun[no]);a++){
         							gotoxy(11+a,13+z);printf(" ");
                              Sleep(10);
                 		  	}

                	   		bingkaineracaawal();
             }else if(sok!=0){
                      	   	gotoxy(12,5);cprintf("   NO AKUN YANG ANDA MASUKAN SUDAH ADA    ");
                       		   gotoxy(12,6);cprintf("MASUKAN NO AKUN DENGAN BENAR !!!!!!   ");
                    		  for(int a=0;a<=strlen(noakun[no]);a++){
         								gotoxy(11+a,13+z);printf(" ");
                           	   Sleep(10);
	                 		  		}
                     //  sok=0;
                	   		bingkaineracaawal();

                }else {
                   break;
                }

       	}
        gotoxy(12,5);printf("                                          ");
        gotoxy(12,6);printf("                                          ");

         no++;

      	gotoxy(22,13+z);gets(aset[asetawal]);strcpy(aset[asetawal],validasiwadah(aset[asetawal],22,13+z));

           a=1;
		asetawal++;
     int cek=0;
  do{
    gotoxy(91,13+z);printf("Rp ");
    gotoxy(94,13+z);gets(saldoakunawal[saldoawal]);
     cek=validasiangka(saldoakunawal[saldoawal]);
			       textcolor(13);
         		if(cek==1 || saldoakunawal[saldoawal][0]=='0'){
               		gotoxy(12,5);cprintf(" MASUKAN SALDO DENGAN BENAR! !!!!!!");
                 for(int a=0;a<=strlen(saldoakunawal[saldoawal]);a++){
         							gotoxy(94+a,13+z);printf(" ");
                              Sleep(10);
                 			}
                	   		bingkaineracaawal();
                 }else{
                   break;
                  }
    }while(cek!=0);
      gotoxy(12,5);printf("                                          ");
      jumlahsaldoaktiva+=atoi(saldoakunawal[saldoawal]);
      tampungansaldoaktiva[z]=0;
      tampungansaldoaktiva[z]=jumlahsaldoaktiva;
      saldoawal++;
  }
//====================================KWAJIBAN=====================================
for(int a1=0;a1<kwajibansum;a1++){
	    int a=1;
     int v=assetsum;
     int sokh=0;
   while(a!=0){
      sokh=0;
  	  	gotoxy(11,13+a1+v);gets(noakun1[no1]);

        for(int zz=0;zz<no1;zz++){
               if(no1==0){
                 goto gh;
                }
               else if(strcmp(noakun1[no1],noakun1[zz])==0){
                   sokh++;

            	    }

           }
           gh:
       			       textcolor(13);
         		if(noakun1[no1][0]!='2'|| validasiangka(noakun1[no1])>0){
              				gotoxy(12,5);cprintf("MASUKAN NO AKUN DENGAN BENAR !!!!!!");
                      	gotoxy(12,5);cprintf("NO AKUN HARUS DIAWALI 2        ");

             	    for(int a=0;a<strlen(noakun1[no1]);a++){
         							gotoxy(11+a,13+a1+v);printf(" ");
                              Sleep(10);
                 			}
                	   		bingkaineracaawal();
               }else if(sokh!=0){
                        	gotoxy(12,5);cprintf("   NO AKUN YANG ANDA MASUKAN SUDAH ADA    ");
                    		   gotoxy(12,6);cprintf("MASUKAN NO AKUN DENGAN BENAR !!!!!!   ");
                    		  for(int a=0;a<strlen(noakun1[no1]);a++){
         								gotoxy(11+a,13+a1+v);printf(" ");
                           	   Sleep(10);
	                 		  		}
                	   		bingkaineracaawal();

               }else {
                 break;
               }
    		  }
        gotoxy(12,5);printf("                                          ");
        gotoxy(12,6);printf("                                          ");

        no1++;
  	   	gotoxy(22,13+v+a1);gets(kwajiban[kwajibanawal]);strcpy(kwajiban[kwajibanawal],validasiwadah(kwajiban[kwajibanawal],22,13+v+a1));

		gotoxy(12,5);printf("                                          ");
        a=1;
		kwajibanawal++;
 	    b=0;
  	 gotoxy(122,13+a1+v);printf("Rp ");
    int cek1;
    do{
       gotoxy(125,13+a1+v);gets(saldoakunawal2[saldoawal2]);
   		       textcolor(13);
         		if(validasiangka(saldoakunawal2[saldoawal2])>0 || saldoakunawal2[saldoawal2][0]=='0'){
     	        			  gotoxy(12,5);cprintf(" MASUKAN SALDO DENGAN BENAR! !!!!!!");
                 			for(int a=0;a<=strlen(saldoakunawal2[saldoawal2]);a++){
         								gotoxy(125+a,13+a1+v);printf(" ");
                       	       Sleep(10);
                 				}
                	   		bingkaineracaawal();
               }else {
                 break;
                }

             }while(cek1!=0);

      gotoxy(12,5);printf("                                          ");
      jumlahsaldokwajiban+=atoi(saldoakunawal2[saldoawal2]);
      tampungansaldokwajiban[a1]=jumlahsaldokwajiban;
      saldoawal2++;
   }
//======================================= MODAL==========================================
for(int a2=0;a2<modalsum;a2++){
	    int a=1;
       int sokpo=0;
     int v=assetsum+kwajibansum;
   while(a!=0){
     sokpo=0;
   		b=0;
  	  	gotoxy(11,13+a2+v);gets(noakun2[no2]);
         for(int zz=0;zz<no2;zz++){
               if(no2==0){
                 goto gj;
               }
               else if(strcmp(noakun2[no2],noakun2[zz])==0){
                   sokpo++;

            	    }

           }
           gj:
       		       textcolor(13);
                if(noakun2[no2][cc]!='3' || validasiangka(noakun2[no2])>0 ){
      						gotoxy(12,5);cprintf("MASUKAN NO AKUN DENGAN BENAR !!!!!!");
                        gotoxy(12,6);cprintf("AKUN MODAL DI AWALI NO AKUN 3 !!!!!!");
                       for(int a=0;a<=strlen(noakun2[no2]);a++){
         							gotoxy(11+a,13+a2+v);printf(" ");
                              Sleep(10);
                 		  	}
                        bingkaineracaawal();
                }else if(sokpo!=0){
                     	gotoxy(12,5);cprintf("   NO AKUN YANG ANDA MASUKAN SUDAH ADA    ");
                        gotoxy(12,6);cprintf("MASUKAN NO AKUN DENGAN BENAR !!!!!!   ");
                    		  for(int a=0;a<=strlen(noakun2[no2]);a++){
         								gotoxy(11+a,13+a2+v);printf(" ");
                           	   Sleep(10);
	                 		  		}
                	   		bingkaineracaawal();
                 }else{
                  break;

               }
    		  }
        gotoxy(12,5);printf("                                                ");
        gotoxy(12,6);printf("                                                 ");
         no2++;

  	   	gotoxy(22,13+v+a2);gets(modal[modalawal]);strcpy(modal[modalawal],validasiwadah(modal[modalawal],22,13+v+a2));


  		gotoxy(12,5);printf("                                          ");
        a=1;
		modalawal++;
   while(a!=0){
 	 gotoxy(122,13+a2+v);printf("Rp ");
    gotoxy(125,13+a2+v);gets(saldoakunawal3[saldoawal3]);
       			       textcolor(13);
         		if((validasiangka(saldoakunawal3[saldoawal3]))>0 || saldoakunawal3[saldoawal3][0]=='0'){
               		gotoxy(12,5);cprintf(" MASUKAN SALDO DENGAN BENAR! !!!!!!");
                 for(int a=0;a<=strlen(saldoakunawal3[saldoawal3]);a++){
         							gotoxy(125+a,13+a2+v);printf(" ");
                              Sleep(10);
     	            			}
                	   		bingkaineracaawal();
               }else{
                    break;
                 }
             }

      gotoxy(12,5);printf("                                          ");

      jumlahsaldomodal+=atoi(saldoakunawal3[saldoawal3]);
      tampungansaldomodal[a2]=jumlahsaldomodal;
      saldoawal3++;

  	 	}
////////////////////////////////////PENDApatan//////////////////
for(int a2=0;a2<pendapatansum;a2++){
	    int a=1;
     int v=assetsum+kwajibansum+pendapatansum;
     int sok4=0;
   while(a!=0){
   sok4=0;
   		b=0;
  	  	gotoxy(11,13+a2+v);gets(noakun3[no3]);

         for(int zz=0;zz<no3;zz++){
               if(no3==0){
                 goto gl;
                }

               else if(strcmp(noakun3[no3],noakun3[zz])==0){
                   sok4++;

            	    }

     	      }

           gl:
            textcolor(13);
                if(noakun3[no3][cc]!='4' || (validasiangka(noakun3[no3]))>0){
      						gotoxy(12,5);cprintf("MASUKAN NO AKUN DENGAN BENAR !!!!!!");
                        gotoxy(12,6);cprintf("AKUN PENDAPATAN DI AWALI NO AKUN 4 !!!!!!");
                       for(int a=0;a<=strlen(noakun3[no3]);a++){
         							gotoxy(11+a,13+a2+v);printf(" ");
                              Sleep(10);
                 		  	}
                     bingkaineracaawal();
             } else if(sok4!=0){
						    			gotoxy(12,5);cprintf("   NO AKUN YANG ANDA MASUKAN SUDAH ADA    ");
                       		     gotoxy(12,6);cprintf("MASUKAN NO AKUN DENGAN BENAR !!!!!!   ");
                    		  for(int a=0;a<=strlen(noakun3[no3]);a++){
         								gotoxy(11+a,13+a2+v);printf(" ");
                           	   Sleep(10);
	                 		  		}
                	   		bingkaineracaawal();
			 	} else {
               break;
              }

    		 }
        gotoxy(12,5);printf("                                          ");
        gotoxy(12,6);printf("                                                              ");

         no3++;

  	 gotoxy(22,13+v+a2);gets(pendapatan[pendapatanawal]);strcpy(pendapatan[pendapatanawal],validasiwadah(pendapatan[pendapatanawal],22,13+v+a2));


		gotoxy(12,5);printf("                                          ");
        a=1;
		pendapatanawal++;
   while(a!=0){
 	    b=0;
  	 gotoxy(122,13+a2+v);printf("Rp ");
    gotoxy(125,13+a2+v);gets(saldoakunawal4[saldoawal4]);
       			       textcolor(13);
         		if(validasiangka(saldoakunawal4[saldoawal4])>0 || saldoakunawal4[saldoawal4][0]=='0'){
               		gotoxy(12,5);cprintf(" MASUKAN SALDO DENGAN BENAR! !!!!!!");
                 for(int a=0;a<=strlen(saldoakunawal4[saldoawal4]);a++){
         							gotoxy(125+a,13+a2+v);printf(" ");
                              Sleep(10);
                 			}
                	   		bingkaineracaawal();
               	}else {
                     break;
                    }
       }
      gotoxy(12,5);printf("                                          ");

      jumlahsaldopendapatan+=atoi(saldoakunawal4[saldoawal4]);
      tampungansaldopendapatan[a2]=jumlahsaldopendapatan;
      saldoawal4++;

  	 	}

/////////////////////////////////////////////BEBAN/////////////////////////////
for(int a2=0;a2<bebansum;a2++){
	    int a=1;
     int v=assetsum+kwajibansum+pendapatansum+bebansum;
     int sok5=0;
   while(a!=0){
 	sok5=0;
   		b=0;
      gotoxy(11,13+a2+v);gets(noakun4[no4]);
   for(int zz=0;zz<no4;zz++){
             if(no4==0){
                 goto gy;
                }
             if(strcmp(noakun4[no4],noakun4[zz])==0){
                   sok5++;
            	    }
         	  }
      	     gy:
      		       textcolor(13);
                if(noakun4[no4][cc]!='5'  || validasiangka(noakun4[no4])>0){
      						gotoxy(12,5);cprintf("MASUKAN NO AKUN DENGAN BENAR !!!!!!");
                        gotoxy(12,6);cprintf("AKUN MODAL DI AWALI NO AKUN 5 !!!!!!");
                       for(int a=0;a<=strlen(noakun4[no4]);a++){
         							gotoxy(11+a,13+a2+v);printf(" ");
                              Sleep(10);
                 		  	}  b++;
                	   		bingkaineracaawal();
                 }else if (sok5!=0){
                      	   	gotoxy(12,5);cprintf("   NO AKUN YANG ANDA MASUKAN SUDAH ADA    ");
                       		   gotoxy(12,6);cprintf("MASUKAN NO AKUN DENGAN BENAR !!!!!!   ");
                    		  for(int a=0;a<=strlen(noakun4[no4]);a++){
         								gotoxy(11+a,13+v+a2);printf(" ");
                           	   Sleep(10);
	                 		  		}
                      		bingkaineracaawal();
	               }else {
                   break;
                  }

    		  }
        gotoxy(12,5);printf("                                          ");
        gotoxy(12,6);printf("                                          ");

         no4++;
  	   	gotoxy(22,13+v+a2);gets(beban[bebanawal]);strcpy(beban[bebanawal],validasiwadah(beban[bebanawal],22,13+v+a2));


		gotoxy(12,5);printf("                                          ");
        a=1;
	bebanawal++;
   while(a!=0){
 	    b=0;
  	 gotoxy(91,13+a2+v);printf("Rp ");
    gotoxy(94,13+a2+v);gets(saldoakunawal5[saldoawal5]);
      for(int xx=0;xx<strlen(saldoakunawal5[saldoawal5]);xx++){
       			       textcolor(13);
         		if(!(saldoakunawal5[saldoawal5][xx]>='0'  && saldoakunawal5[saldoawal5][xx]<='9') || saldoakunawal5[saldoawal5][0]=='0'){
              				gotoxy(12,5);cprintf(" MASUKAN SALDO DENGAN BENAR! !!!!!!");
                 for(int a=0;a<=strlen(saldoakunawal5[saldoawal5]);a++){
         							gotoxy(94+a,13+a2+v);printf(" ");
                              Sleep(10);
                 			}
                        	b++;
                	   		bingkaineracaawal();
                  			break;
               	}
               }
              if(b==0){
                 break;

               }

      gotoxy(12,5);printf("                                          ");
      }
      jumlahsaldobeban+=atoi(saldoakunawal5[saldoawal5]);
      tampungansaldobeban[a2]=jumlahsaldobeban;
      saldoawal5++;

  	 	}
totalneracadeb=jumlahsaldoaktiva+jumlahsaldobeban;
totalneracaker=jumlahsaldokwajiban+jumlahsaldomodal+jumlahsaldopendapatan;
gotoxy(95,totalakun*2+12);printf("%d",totalneracadeb);
gotoxy(92,totalakun*2+12);printf("Rp");
gotoxy(121,totalakun*2+12);printf("Rp");
gotoxy(125,totalakun*2+12);printf("%d",totalneracaker);

 if(totalneracadeb!=totalneracaker){

     gotoxy(100,totalakun*2+20);printf("MAAF MOHON  INPUT SALDO DENGAN BENAR");
     gotoxy(110,totalakun*2+21);printf("TIDAK BALANCE ");
     hapusisineraca();
     hapus();
     bingkaineracaawal();
 }else {
    keluar=0;
   }
  }while(keluar!=0);
}

void banyakajp(){
	int c=0;
   for(int a=0;a<=100;a++){
      gotoxy(a+10,7);printf("%c",219);
      gotoxy(a+10,15);printf("%c",219);
     if(a>=92){
       gotoxy(10,7+c);printf("%c",219);
       gotoxy(110,7+c);printf("%c",219);
       c++;
      }
   }

int cek=0;
  gotoxy(13,10);printf("MASUKAN BANYAK NYA TRANSAKSI AJP = ");
  int out=1;
  int xx=0;
  do{
   gotoxy(51,10);gets(totalajp[0]);

        if(validasiangka(totalajp[xx])>0){
        	 gotoxy(31,47);printf("=----------INPUTAN ANDA EROR-----------------=");
           gotoxy(31,48);printf("SILAHKAN MASUKAN KEMBALI BANYAK TRANSAKSI AJP");
            for(int a=0;a<strlen(totalajp[xx]);a++){
                 gotoxy(51+a,10);printf(" ");
              }
              int d=0;
       	    for(int g=0;g<=100;g++){
     	   		 gotoxy(g+10,7);printf("%c",219);
    	     		  gotoxy(g+10,15);printf("%c",219);
    			 if(g>=92){
      	 			gotoxy(10,7+d);printf("%c",219);
      				 gotoxy(110,7+d);printf("%c",219);
   				    d++;
       				   }   	 			  }
		 }else {
              break;
              out=0;
          }
      }while(out!=0);
         totalsaldoajp=atoi(totalajp[xx]);

      gotoxy(31,47);printf("                                              ");
      gotoxy(31,48);printf("                                              ");

}
void bingkaiajp(){
  	 int c=7;
   for(int a=10;a<=150;a++){
      gotoxy(a,7);printf("%c",219);
      gotoxy(a,13);printf("%c",219);
      gotoxy(a,25);printf("%c",219);

     if(a>=133){
      gotoxy(80,c);printf("%c",219);
      gotoxy(10,c);printf("%c",219);
      gotoxy(30,c);printf("%c",219);
      gotoxy(90,c);printf("%c",219);
      gotoxy(120,c);printf("%c",219);
      gotoxy(150,c);printf("%c",219);
      if(a>=139){
      gotoxy(24,c);printf("%c",219);
        }
      c++;
      }
    }

    gotoxy(14,10);printf("T A N G G A L");
    gotoxy(47,10);printf("K E T E R A N G A N");
    gotoxy(100,10);printf("D E B E T");
    gotoxy(130,10);printf("K R E D I T");
    gotoxy(26,15);printf("31");
    gotoxy(20,15);printf("DES");
    gotoxy(84,10);printf("NO");
}
void ajp(){
  hapus();
   banyakajp();
   int ajpbal;
   int normal=0;
  for(int as=1;as<=totalsaldoajp;as++){
      //normal++;
  do{
    ajpbal=1;
    hapus();
    bingkaiajp();
    int z=1;
    int cek=0;
 do{
 char t[20];
   gotoxy(84,15);gets(akunajp[noajp]);
      textcolor(13);
      for(int a=0;a<strlen(akunajp[noajp]);a++){
             if(validasiangka(akunajp[noajp])>0){
                gotoxy(10,5);cprintf("MASUKAN JUMLAH AKUN DENGAN BENAR !!!!");
	            		for(int b=0;b<strlen(akunajp[noajp]);b++){
   	              		gotoxy(84+b,15);printf(" ");
                        }
                          akunajp[noajp][a]=NULL;

                	break;
             }else if(akunajp[noajp][a]>='0' &&  akunajp[noajp][a]<='9'){
               for(int s=0;s<=100;s++){
                  if(strcmp(akunajp[noajp],noakun[s])==0 ){
                     gotoxy(31,15);printf("%s",aset[s]);
              	   }else if(strcmp(akunajp[noajp],noakun1[s])==0 ){
                     gotoxy(31,15);printf("%s",kwajiban[s]);
                  }else if(strcmp(akunajp[noajp],noakun2[s])==0 ){
                     gotoxy(31,15);printf("%s",modal[s]);
                  }else if(strcmp(akunajp[noajp],noakun3[s])==0 ){
                     gotoxy(31,15);printf("%s",pendapatan[s]);
                  }else if(strcmp(akunajp[noajp],noakun4[s])==0 ){
                     gotoxy(31,15);printf("%s",beban[s]);
                  }else {
                  		gotoxy(10,5);cprintf("MASUKAN JUMLAH AKUN DENGAN BENAR !!!!");
            				 for(int b=0;b<strlen(akunajp[noajp]);b++){
                 				gotoxy(84+b,15);printf(" ");

                  			}      akunajp[noajp][a]=NULL;
                                                        break;
                       z=0;
                     }
                      z=0;
                       break;
                     }
   	          }else{
                  	 gotoxy(10,5);cprintf("MASUKAN JUMLAH AKUN DENGAN BENAR !!!!");
            				for(int b=0;b<strlen(akunajp[noajp]);b++){
                 				gotoxy(84+b,15);printf(" ");
                  			}
                  	break;
           		 }
            	}
     }while(z!=0);
        noajp++;
   gotoxy(91,15);printf("Rp");
   int out=1;
   int xa;
  do{
     gotoxy(93,15);gets(saldoajpdeb[saldod]);
              if(validasiangka(saldoajpdeb[saldod])>0){
                  	gotoxy(10,5);cprintf("MASUKAN JUMLAH SALDO  DENGAN BENAR !!!!");
              				 for(int b=0;b<strlen(saldoajpdeb[saldod]);b++){
                    			gotoxy(93+b,15);printf(" ");
                   		 	  }
                          bingkaiajp();
                          out=1;
             	  }else {
                   break;
               	}
    }while(out!=0);
    int x=0;
      strcpy(totalsaldointajp[saldod],saldoajpdeb[saldod]);
               x=atoi(totalsaldointajp[saldod]);
              kelos[saldod]=x;
    saldod++;
     z=1;
   do{
 char t[20];
   gotoxy(84,18);gets(akunajp1[noajp1]);
      textcolor(13);
      for(int a=0;a<strlen(akunajp1[noajp1]);a++){
             if(validasiangka(akunajp1[noajp1])>0){
                gotoxy(10,5);cprintf("MASUKAN JUMLAH AKUN DENGAN BENAR !!!!");
	            		for(int b=0;b<strlen(akunajp1[noajp1]);b++){
   	              		gotoxy(84+b,18);printf(" ");
                        }
                          akunajp1[noajp1][a]=NULL;

                	break;
             }else if(akunajp1[noajp1][a]>='0' &&  akunajp1[noajp1][a]<='9'){
               for(int s=0;s<=100;s++){
                  if(strcmp(akunajp1[noajp1],noakun[s])==0 ){
                     gotoxy(31,18);printf("%s",aset[s]);
              	   }else if(strcmp(akunajp1[noajp1],noakun1[s])==0 ){
                     gotoxy(31,18);printf("%s",kwajiban[s]);
                  }else if(strcmp(akunajp1[noajp1],noakun2[s])==0 ){
                     gotoxy(31,18);printf("%s",modal[s]);
                  }else if(strcmp(akunajp1[noajp1],noakun3[s])==0 ){
                     gotoxy(31,18);printf("%s",pendapatan[s]);
                  }else if(strcmp(akunajp1[noajp1],noakun4[s])==0 ){
                     gotoxy(31,18);printf("%s",beban[s]);
                  }else {
                  		gotoxy(10,5);cprintf("MASUKAN JUMLAH AKUN DENGAN BENAR !!!!");
            				 for(int b=0;b<strlen(akunajp1[noajp1]);b++){
                 				gotoxy(84+b,18);printf(" ");

                  			}      akunajp1[noajp1][a]=NULL;
                                                 break;
                       z=0;
                     }
                      z=0;
                       break;
                     }
   	          }else{
                  	 gotoxy(10,5);cprintf("MASUKAN JUMLAH AKUN DENGAN BENAR !!!!");
            				for(int b=0;b<strlen(akunajp1[noajp1]);b++){
                 				gotoxy(84+b,18);printf(" ");
                  			}
                  	break;
           		 }
            	}
     }while(z!=0);
   noajp1++;
    gotoxy(121,18);printf("Rp");
  int out1=1;
    do{
        gotoxy(123,18);gets(saldoajpker[saldok]);
             if(validasiangka(saldoajpker[saldok])>0){
                gotoxy(10,5);cprintf("MASUKAN JUMLAH SALDO  DENGAN BENAR !!!!");
               for(int b=0;b<strlen(saldoajpker[saldok]);b++){
                    gotoxy(123+b,18);printf(" ");
                    }
             }else {
               break;
                out1=0;
               }
    }while(out1!=0);
     int x1=0;
        strcpy(totalsaldointajp1[saldok],saldoajpdeb[saldok]);
               x1=atoi(totalsaldointajp1[saldok]);
               kelos1[saldok]=x1;

      saldok++;
 //    for(int a=0;a<saldok;a++){
     if(strcmp(saldoajpdeb[saldod-1],saldoajpker[saldok-1])==0){
         ajpbal=0;
         break;
       }
      else {
         gotoxy(5,5);cprintf("MAAF SALDO YANG ANDA INPUTKAN TIDAK BALLANCE MOHON PERIKSA KEMBALI DAN TEKAN APA SAJA UNTUK MENGINPUTKAN KEMBALI !!!!");
          for(int b=0;b<100;b++){
            akunajp[saldod-1][b]=NULL;
            akunajp1[saldod-1][b]=NULL;
            saldoajpdeb[saldod-1][b]=NULL;
            saldoajpker[saldod-1][b]=NULL;
          }
         saldod=normal;
         saldok=normal;
         noajp=normal;
         noajp1=normal;
         ajpbal=1;
        }
   //     break;
    //  }
    }while(ajpbal!=0);
    printf("%d",normal);
   normal++;
  }

  for(int c=0;c<=totalsaldoajp;c++){
  for(int x=c+1;x<=totalsaldoajp;x++){
        if(strcmp(akunajp[c],akunajp[x])==0){
                kelos[c]+=kelos[x];
                 kelos[x]=NULL;
        }
    }
  }
   for(int c=0;c<=totalsaldoajp;c++){
	  for(int x=c+1;x<=totalsaldoajp;x++){
        if(strcmp(akunajp1[c],akunajp1[x])==0){
                kelos1[c]+=kelos1[x];
                 kelos1[x]=NULL;
        }
    }
  }

   for(int c=0;c<totalakun;c++){
        for(int x=0;x<totalsaldoajp;x++){
         if(strcmp(noakun[c],akunajp[x])==0){
                tampungansaldoaktiva[c]+=kelos[x];
        }else if(strcmp(noakun4[c],akunajp[x])==0){
                tampungansaldobeban[c]+=kelos[x];
      	   }
   	 }

	}
    for(int c=0;c<totalakun;c++){
        for(int x=0;x<totalsaldoajp;x++){
         if(strcmp(noakun[c],akunajp1[x])==0){
                tampungansaldoaktiva[c]-=kelos1[x];
        }else if(strcmp(noakun4[c],akunajp1[x])==0){
                tampungansaldobeban[c]-=kelos1[x];
      	   }
   	 }

	}

   for(int c=0;c<totalakun;c++){
         for(int x=0;x<totalsaldoajp;x++){

        if(strcmp(noakun1[c],akunajp[c])==0){
                tampungansaldokwajiban[c]-=kelos[x];
        }else  if(strcmp(noakun2[c],akunajp[x])==0){
                tampungansaldomodal[c]-=kelos[x];
        }else  if(strcmp(noakun3[c],akunajp[x])==0){
                tampungansaldopendapatan[c]-=kelos[x];
        }
   }
}
     for(int c=0;c<totalakun;c++){
         for(int x=0;x<totalsaldoajp;x++){

        if(strcmp(noakun1[c],akunajp1[c])==0){
                tampungansaldokwajiban[c]+=kelos1[x];
        }else  if(strcmp(noakun2[c],akunajp1[x])==0){
                tampungansaldomodal[c]+=kelos1[x];
        }else  if(strcmp(noakun3[c],akunajp1[x])==0){
                tampungansaldopendapatan[c]+=kelos1[x];
        }
   }
 }

}
void neraca(){

    for(int a=0;a<=70;a++){
       gotoxy(a+50,1);printf("%c",219);
       gotoxy(a+50,10);printf("%c",219);
       gotoxy(a+50,47);printf("%c",219);

       if(a>=3){
       gotoxy(a+47,50);printf("%c",219);

      }
     }
   for(int a=0;a<=50;a++){
           gotoxy(120,a);printf("%c",219);
           gotoxy(50,a);printf("%c",219);
         if(a>=10){
           gotoxy(85,a);printf("%c",219);
            }
   }
   isineraca();
}


void isineraca(){
  textcolor(13);
for(int x=0;x<=itung;x++){
    gotoxy(x+80,3);printf("%c",datapt [0][x]);
  }
    gotoxy(80,4);printf("LAPORAN NERACA");
    gotoxy(80,5);printf("PER 31 DES %d",tahun);
    gotoxy(65,11);cprintf("A S E T");
    gotoxy(95,11);cprintf("K W A J I B A N");
    gotoxy(95,30);cprintf("M O D A L");
    gotoxy(51,11);cprintf(" NO ACC ");
    gotoxy(86,11);cprintf(" NO ACC ");

  for(int a=0;a<=assetsum;a++){
  		for(int b=0;noakun[a][b]!=NULL;b++){
        gotoxy(51+b,13+a);printf("%c",noakun[a][b]);
         }
       }
  for(int a=0;a<kwajibansum;a++){
  		for(int b=0;noakun1[a][b]!=NULL;b++){
        gotoxy(86+b,13+a);printf("%c",noakun1[a][b]);
       }
    }
     for(int a=0;a<modalsum;a++){
  		for(int b=0;noakun2[a][b]!=NULL;b++){
        gotoxy(86+b,32+a);printf("%c",noakun2[a][b]);
       }
    }

///print nama akun
   for(int a=0;a<=assetsum;a++){
  		for(int b=0;aset[a][b]!=NULL;b++){
         gotoxy(60+b,13+a);printf("%c",aset[a][b]);
          }
        }
  for(int a=0;a<kwajibansum;a++){
  		for(int b=0;kwajiban[a][b]!=NULL;b++){
        gotoxy(95+b,13+a);printf("%c",kwajiban[a][b]);
       }
    }
     for(int a=0;a<modalsum;a++){
  		for(int b=0;modal[a][b]!=NULL;b++){
        gotoxy(95+b,32+a);printf("%c",modal[a][b]);
       }
    }
///printfSALDO

for(int a=0;a<=assetsum;a++){
    for(int b=0;b<totalsaldoajp;b++){
       if(strcmp(akunajp[a],noakun[b])==0){
           gotoxy(70,13+a);printf("%d",tampungansaldoaktiva[a]);
           break;
      }else {
            gotoxy(70,13+a);printf("%c",saldoakunawal[a][b]);
           break;
         }
   }
}

for(int a=0;a<=kwajibansum;a++){
    for(int b=0;b<totalsaldoajp;b++){
       if(strcmp(akunajp[a],noakun[b])==0){
           gotoxy(105,13+a);printf("%d",tampungansaldokwajiban[a]);
           break;
      }else {
            gotoxy(105,13+a);printf("%c",saldoakunawal2[a][b]);
           break;
         }
   }
}
 for(int a=0;a<=modalsum;a++){
    for(int b=0;b<totalsaldoajp;b++){
       if(strcmp(akunajp[a],noakun[b])==0){
           gotoxy(105,32+a);printf("%d",tampungansaldomodal[a]);
           break;
      }else {
            gotoxy(105,32+a);printf("%c",saldoakunawal3[a][b]);
           break;
         }
   }
  }
  int tampungan=0;
  int tampungan1=0;
  int tampungan2=0;


    for(int c=0;tampungansaldokwajiban[c]!=NULL;c++){
           tampungan+=tampungansaldokwajiban[c];
   }


    for(int c=0;tampungansaldomodal[c]!=NULL;c++){
           tampungan1+=tampungansaldomodal[c];
     }

    for(int c=0;tampungansaldoaktiva[c]!=NULL;c++){
           tampungan2+=tampungansaldoaktiva[c];
     }

   gotoxy(51,48);printf("TOTAL ASSET ");
   gotoxy(90,48);printf("TOTAL KWAJIBAN + MODAL");
   gotoxy(80,48);printf("%d",tampungan2);
   gotoxy(115,48);printf("%d",tampungan1+tampungan);

   gotoxy(75,52);cprintf("TEKAN APA SAJA UNTUK SELANJUTNYA ");



getch();
}

void labarugi(){
  for(int a=0;a<100;a++){
     gotoxy(30+a,1);printf("%c",219);
     gotoxy(30+a,50);printf("%c",219);
     gotoxy(30+a,10);printf("%c",219);

     if(a>=50){
      gotoxy(30,a-50);printf("%c",219);
       gotoxy(130,a-50);printf("%c",219);
       }
 }
  for(int x=0;x<=itung;x++){
    gotoxy(x+70,3);printf("%c",datapt [0][x]);
    }
     gotoxy(70,4);printf("LAPORAN LABA/RUGI");
     gotoxy(71,5);printf("PER 31 DES %d",tahun);

 for(int a=0;a<pendapatansum;a++){
  		for(int b=0;pendapatan[a][b]!=NULL;b++){
        gotoxy(31,12+a);printf("%c",pendapatan[a][b]);
       }
    }

   for(int a=0;a<bebansum;a++){
   	for(int b=0;beban[a][b]!=NULL;b++){
   	   gotoxy(31+b,12+pendapatansum+3+a);printf("%c",beban[a][b]);
      	 }
    }
      gotoxy(31,12+pendapatansum+bebansum+2);printf("TOTAL BEBAN");
 for(int a=0;a<=pendapatansum;a++){
    for(int b=0;b<totalsaldoajp;b++){
       if(strcmp(akunajp[a],noakun[b])==0){
           gotoxy(115,12+a);printf("%d",tampungansaldopendapatan[a]);
           break;
      }else {
            gotoxy(115,12+a);printf("%c",saldoakunawal4[a][b]);
           break;
         }
   }
}
   int tampunganpend=0;
   for(int h=0;tampungansaldopendapatan[h]!=NULL;h++){
   	tampunganpend+=tampungansaldopendapatan[h];
     }
   gotoxy(115,12+pendapatansum+1);printf("%d",tampunganpend);      //TOTAL PENDAPATAN
   gotoxy(31,12+pendapatansum+1);printf("TOTAL AKUN PENDAPATAN");

 for(int a=0;a<=bebansum;a++){
    for(int b=0;b<totalsaldoajp;b++){
       if(strcmp(akunajp[a],noakun[b])==0){
           gotoxy(115,12+a+pendapatansum+3);printf("%d",tampungansaldobeban[a]);
           break;
      }else {
            gotoxy(115,12+a+pendapatansum+3);printf("%c",saldoakunawal5[a][b]);
           break;
         }
   }
}
  int tampunganbeb=0;
    for(int h=0;tampungansaldobeban[h]!=NULL;h++){
   	tampunganbeb+=tampungansaldobeban[h];
     }

	  textcolor(13);
   	   gotoxy(115,12+pendapatansum+bebansum+2);printf("%d",tampunganbeb); ///total beban

   	   gotoxy(31,12+pendapatansum+bebansum+2+1);printf("LABA BERSIH");
      	gotoxy(115,12+pendapatansum+bebansum+2+1);cprintf("%d",tampunganpend-tampunganbeb);  //LABA BERSIH

    lababersih=tampunganpend-tampunganbeb;
    textcolor(13);
    gotoxy(75,52);cprintf("TEKAN APA SAJA UNTUK SELANJUTNYA ");
getch();

}
void perubahanmodal(){
     for(int a=0;a<100;a++){
     gotoxy(30+a,1);printf("%c",219);
     gotoxy(30+a,50);printf("%c",219);
     gotoxy(30+a,10);printf("%c",219);

     if(a>=50){
      gotoxy(30,a-50);printf("%c",219);
       gotoxy(130,a-50);printf("%c",219);
       }
	 }
    for(int x=0;x<=itung;x++){
    gotoxy(x+70,3);printf("%c",datapt [0][x]);
    }
     gotoxy(68,4);printf("LAPORAN PERUBAHAN MODAL ");
     gotoxy(71,5);printf("PER 31 DES %d",tahun);

     gotoxy(33,12);printf("MODAL AWAL ");
     gotoxy(33,13);printf("LABA BERSIH");
     gotoxy(33,14);printf("DIVIDEN");
     gotoxy(33,20);printf("MODAL AKHIR");


    int ve=0;
    for(int d=0;d<modalsum;d++){
       if(strcmp(modal[d],"DIVIDEN")){
          gotoxy(50,14);printf("%c",tampungansaldomodal[d]);     ve=d;
              break;
       }else if(strcmp(beban[d],"dividen")){
          gotoxy(50,14);printf("%c",tampungansaldomodal[d]);       ve=d;
          break;

       }else {
      	 gotoxy(50,14);printf("-");
          break;
        }
     }

   int vv=0;
     for(int d=0;d<modalsum;d++){
       if(strcmp(modal[d],"MODAL")){
          gotoxy(50,14);printf("%c",tampungansaldomodal[d]);
          vv=d;
          break;
       }else if(strcmp(modal[d],"MODAL AWAL")){
          gotoxy(50,14);printf("%c",tampungansaldomodal[d]);       vv=d;
             break;

       }else if((strcmp(modal[d],"modal awal"))){
          gotoxy(50,14);printf("%c",tampungansaldomodal[d]);         vv=d;
          break;

       }else if(strcmp(modal[d],"modal")){
          gotoxy(50,14);printf("%c",tampungansaldomodal[d]);        vv=d;
                 break;

       }else {
      	 gotoxy(50,14);printf("-");           break;

        }
     }
   gotoxy(50,14);printf("%d",lababersih);
    int tam=0;
    tam=tampungansaldomodal[vv]+lababersih-tampungansaldomodal[ve];

    gotoxy(50,20);printf("%d",tam);

    gotoxy(75,52);cprintf("TEKAN APA SAJA UNTUK KEMBALI KE MENU ");


 getch();
 hapus();
    menu();

 }


void me(){
hapus();
gotoxy(50,18);printf("------------------------------------------------------------------------");
gotoxy(50,19);printf("|   Aplikasi akuntansi ini dibuat untuk memenuhi UAS pelatihan         |");
gotoxy(50,20);printf("|  mungkin masih banyak kelemahan yang harus saya perbaiki kembali     |");
gotoxy(50,21);printf("|                                                                      |");
gotoxy(50,22);printf("|   *.BALANCE ATAU TIDAKNYA SESUAI YANG DIINPUTKAN TERIMAKASIH.*       |");
gotoxy(50,23);printf("|                    *A B O U T   M E *                                |");
gotoxy(50,24);printf("|                                                                      |");
gotoxy(50,25);printf("|                                                                      |");
gotoxy(50,26);printf("|  NAMA        = Abdul Rozaq Rizqi Akbar                               |");
gotoxy(50,27);printf("|  Jurusan     = D3 MI                                                 |");
gotoxy(50,28);printf("|  Universitas = Nasional PASIM                                        |");
gotoxy(50,29);printf("|  TTL         = Bandung ,22 Maret 2001                                |");
gotoxy(50,30);printf("|  Status      = ALHAMDULILAH MASIH HIDUP                              |");
gotoxy(50,31);printf("|                                                                      |");
gotoxy(50,32);printf("|                         INFO LENGKAP CP;                             |");
gotoxy(50,33);printf("|                          IG= @rozaqq_                                |");
gotoxy(50,34);printf("|                                                                      |");
gotoxy(50,35);printf("________________________________________________________________________");
   textcolor(13); gotoxy(75,40);cprintf("TEKAN APA SAJA UNTUK KEMBALI KE MENU ");
 getch();
 hapus();
 }

