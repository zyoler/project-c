#include <stdio.h>
#include <conio.h>
#include <windows.h>



/////////////////////////////////PROTOTYPE//////////////////////////////////////
     void login();
     void awal();
     void loading();
     void bingkai();
     void bingkai1();
     void bingkai2();
     void hapus();
     void pilih();
     void tampilan();
     void tampilan2();
     void tampilan3();
     void tampilan_pangkas();
     void tampilan_cat();
     void tampilan_tambahan();
     void informasi();
     void data();
     void data1();
     void data3();
     void total_harga();
     void tambah_data();
     void edit_data();
     void hapus_data();
     bool valnama(char nama[]);
     bool valnomor(char hp[]);
     bool valjenis_kelamin(char jenis_kelamin[]);
     bool valumur(char umur[]);

///////////////////////////////////////////////////////////////////////////////


//////////////////////////////VARIABEL GLOBAL///////////////////////////////////
     char pilihan[4];
     int i=0;
     int cek=0;
     int pil_pangkas;
     int pil_cat;
     int pil_tambahan;
     int harga_pangkas[15]={40000,40000,50000,30000,45000,40000,50000,40000,30000,20000,20000,60000,40000,30000,50000};
     int harga_cat[8]={28000,15000,85000,32000,133000,60000,165000,90000};
     int harga_tambahan[8]={90000,100000,150000,300000,250000,60000,165000,50000};
     int total[100];
     char nama[100][100];
     char hp[100][20];
     char jenis_kelamin[100][20];
     char umur[100][20];
     char keperluan[100][4];
     char nama1[100];
     char hp1[20];
     char jenis_kelamin1[20];
     char umur1[20];
     int tamp=0;
     char tamp2[100],tamp3[100],tamp4[100],tamp5[100];
////////////////////////////////////////////////////////////////////////////////


///////////////////////////bingkai utama///////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
   void awal(){
   	system("color a2");
   	for(int a=1; a<=36; a++){
      	for(int b=1; b<=140; b++){
         	if(a==1 || a==36 || b==1 || b==140){
            	 printf("%c",219);
            }else{
            	printf(" ");
            }
         }
      }

      for(int a=1; a<=5; a++){//bingkai kotak ditengah
      	for(int b=1; b<=40; b++){
         textcolor(0);
         	gotoxy(50+b,24);printf("%c",219);
            gotoxy(50+b,28);printf("%c",219);
            gotoxy(51,23+a);printf("%c",219);
            gotoxy(90,23+a);printf("%c",219);
         }
      }tampilan();login();///panggil login
   }
///////////////////////////////////////////////////////////////////////////////
////////////////////VALIDASI KODE//////////////////////////////////////////////

   void login(){
   	char kode[50];

      gotoxy(55,26);printf("KODE AKSES : ");
      gotoxy(68,26);printf("Masukkan Kode !!!");Sleep(1000);
   	gotoxy(68,26);printf("                     ");
      int x=0;

      gotoxy(68,26);kode[x]=getch();
      	while(kode[x]!=13){
         	if(kode[x]==8){
            	x--;
            	if(x<0){
            		x=0;
            	}
      			gotoxy(68+x,26);printf(" ");
      		}else{
         		printf("*");
            	x++;
         	}if(x>7){
            	x=8;
            		gotoxy(76,26);printf(" ");
         	}
         			gotoxy(68+x,26);kode[x]=getch();
   		}
      	kode[x]=NULL;
         if((strlen(kode)<=8) && (strcmp(kode,"hamdi06")==0)){
            loading();
            hapus();Sleep(50);
            bingkai();
         }else{
          	for(int a=0;a<2;a++){
            	printf("%c",7); Sleep(200);
               gotoxy(68,26);printf("INPUT GAGAL !!!"); Sleep(100);
               gotoxy(68,26);printf("                "); Sleep(100);
            }login();
         }

	}

////////////////////////////////////////////////////////////////////////////////

/////////////////////////loading////////////////////////////////////////////////
      void loading(){
      	for(int a=1; a<=100; a++){
         textcolor(3);
         	gotoxy(17.5+a,32);cprintf("%c",219);Sleep(20);
         textcolor(11);
            gotoxy(119,32);cprintf("%d %",a);
         }
      }

///////////////////////////////////////////////////////////////////////////////

/////////////////////////bingkai setelah login/////////////////////////////////
      void bingkai(){
   	for(int a=1; a<=36; a++){
      	for(int b=1; b<=140; b++){
         	if(a==1 || a==36 || b==1 || b==140 || a==10){
            	printf("%c",219);
            }else{
            	printf(" ");
            }
         }
      }

      for(int a=1; a<=6; a++){
      	for(int b=1; b<=30; b++){
         textcolor(0);
         	gotoxy(10+b,13);cprintf("%c",219);
            gotoxy(10+b,18);cprintf("%c",219);
            gotoxy(10,12+a);cprintf("%c",219);
            gotoxy(40,12+a);cprintf("%c",219);
            gotoxy(50+b,13);cprintf("%c",219);
            gotoxy(50+b,18);cprintf("%c",219);
            gotoxy(50,12+a);cprintf("%c",219);
            gotoxy(80,12+a);cprintf("%c",219);
            gotoxy(95+b,18);cprintf("%c",219);
            gotoxy(95+b,23);cprintf("%c",219);
            gotoxy(95,17+a);cprintf("%c",219);
            gotoxy(125,17+a);cprintf("%c",219);
            gotoxy(10+b,23);cprintf("%c",219);
            gotoxy(10+b,28);cprintf("%c",219);
            gotoxy(10,22+a);cprintf("%c",219);
            gotoxy(40,22+a);cprintf("%c",219);
            gotoxy(50+b,23);cprintf("%c",219);
            gotoxy(50+b,28);cprintf("%c",219);
            gotoxy(50,22+a);cprintf("%c",219);
            gotoxy(80,22+a);cprintf("%c",219);
            gotoxy(21,15);printf("1.INFORMASI");
            gotoxy(60,15);printf("2.TRANSAKSI");
            gotoxy(21,25);printf("3.Data");
            gotoxy(60,25);printf("4.Exit");

         }
      }
      tampilan3();pilih();
	}
////////////////////////////////////////////////////////////////////////////////

////////////////////////////Pilihan////////////////////////////////////////////


       void pilih(){
       	char pil;
         gotoxy(100,20);printf("INPUT PILIH :");
			gotoxy(114,20); pil=getche(); Sleep(400);
         gotoxy(114,20);printf("   ");
            if(pil=='1'){
            	loading();
            	hapus();Sleep(50);
               informasi();
            }else if(pil=='2'){
               loading();
               hapus();
               bingkai1();
               bingkai2();
               data();
            }else if(pil=='3'){
               loading();
               hapus();
               bingkai1();
               char c;
               do{
               	for(int a=1; a<=4; a++){
      	      	for(int b=1; b<=27; b++){
         			textcolor(0);
         				gotoxy(110+b,30);cprintf("%c",219);
            			gotoxy(110+b,34);cprintf("%c",219);
            			gotoxy(111,30+a);cprintf("%c",219);
            			gotoxy(137,30+a);cprintf("%c",219);
                   }
                  }
                  for(int a=1;a<=8;a++){
                  	for(int b=1;b<=37; b++){
                     textcolor(0);
                     gotoxy(100+b,5);cprintf("%c",219);
            			gotoxy(100+b,13);cprintf("%c",219);
            			gotoxy(101,5+a);cprintf("%c",219);
            			gotoxy(137,5+a);cprintf("%c",219);
                     gotoxy(104,7);printf("TEKAN 1 UNTUK TAMPILKAN DATA");
            			gotoxy(104,9);printf("TEKAN 2 UNTUK EDIT DATA");
            			gotoxy(104,11);printf("TEKAN 3 UNTUK HAPUS DATA");
                     }
                  }
               gotoxy(114,32);printf("Masukkan Pilihan : ");
               gotoxy(132,32);c=getche(); Sleep(500);
               	if(c == '1'){
               		data3();
                     getch();
                     hapus();
                     bingkai();
               	}else if(c == '2'){
                  	edit_data();
               	}else if(c == '3'){
                  	hapus_data();
               	}
               }while(c != '1' || c != '2' || c != '3');
            }else if(pil=='4'){
            	exit(0); Sleep(400);
            }else{
            	for(int i=0; i<2; i++){
            		gotoxy(101,21);printf("INPUT SALAH !!!"); Sleep(300);
               	gotoxy(101,21);printf("                "); Sleep(300);
               } pilih();
            }
       }
////////////////////////////////////////////////////////////////////////////////

/////////////////////////////bingkai setelah menu///////////////////////////////

       void bingkai1(){
       textcolor(0);
       	for(int a=1; a<=36; a++){
      	for(int b=1; b<=140; b++){
         	if(a==1 || a==36 || b==1 || b==140){
            	printf("%c",219);Sleep(5);
            }else{
            	printf(" ");
            }
         }
       }

     }
////////////////////////////////////////////////////////////////////////////////

////////////////////////bersihkan layar/////////////////////////////////////////

   void hapus(){
      	clrscr();
      }
////////////////////////////////////////////////////////////////////////////////
//////////////////////tampilan//////////////////////////////////////////////////

   void tampilan(){
   system("color f0");
   	for(int a=1; a<=20; a++){
   	gotoxy(2+a,5);printf(" %c%c%c%c%c%c   %c%c%c%c%c  %c%c%c%c%c%c%c  %c%c%c%c%c%c  %c%c%c%c%c%c%c %c%c%c%c%c%c%c  ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
      gotoxy(2+a,6);printf(" %c%c   %c%c %c%c%c%c%c%c%c %c%c  %c%c%c  %c%c   %c%c %c%c%c     %c%c  %c%c%c  ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
      gotoxy(2+a,7);printf(" %c%c   %c%c %c%c   %c%c %c%c%c%c%c%c   %c%c   %c%c %c%c%c%c%c%c%c %c%c%c%c%c%c   ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
      gotoxy(2+a,8);printf(" %c%c%c%c%c   %c%c%c%c%c%c%c %c%c%c%c%c    %c%c%c%c%c   %c%c%c%c%c%c%c %c%c%c%c%c    ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
      gotoxy(2+a,9);printf(" %c%c   %c%c %c%c   %c%c %c%c  %c%c   %c%c   %c%c %c%c%c     %c%c  %c%c   ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
      gotoxy(2+a,10);printf(" %c%c   %c%c %c%c   %c%c %c%c   %c%c  %c%c   %c%c %c%c%c%c%c%c%c %c%c   %c%c  ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
      gotoxy(2+a,11);printf(" %c%c%c%c%c%c  %c%c   %c%c %c%c    %c%c %c%c%c%c%c%c  %c%c%c%c%c%c%c %c%c    %c%c ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
      }
      for(int a=1; a<=20; a++){
      gotoxy(100-a,11);printf("  %c%c%c%c%c  %c%c   %c%c  %c%c%c%c%c  %c%c%c%c%c%c   ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
      gotoxy(100-a,12);printf(" %c%c%c%c%c%c%c %c%c   %c%c %c%c%c%c%c%c%c %c%c   %c%c  ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
      gotoxy(100-a,13);printf("  %c%c     %c%c%c%c%c%c%c %c%c   %c%c %c%c   %c%c  ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
      gotoxy(100-a,14);printf("   %c%c    %c%c%c%c%c%c%c %c%c   %c%c %c%c%c%c%c%c   ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
      gotoxy(100-a,15);printf("     %c%c  %c%c   %c%c %c%c   %c%c %c%c       ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
      gotoxy(100-a,16);printf(" %c%c%c%c%c%c%c %c%c   %c%c %c%c%c%c%c%c%c %c%c       ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
      gotoxy(100-a,17);printf("  %c%c%c%c%c  %c%c   %c%c  %c%c%c%c%c  %c%c       ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
      }
   }
////////////////////////////////////////////////////////////////////////////////
/////////////////////////////transaksi//////////////////////////////////////////

   void informasi(){
   	textcolor(11);
   	for(int a=1; a<=36; a++){
      	for(int b=1; b<=140; b++){
         	if(a==1 || a==36 || b==1 || b==140|| b==47 || b==94 ){
            	cprintf("%c",219);
            }else{
            	printf(" ");
            }
         }
       }
       gotoxy(3,12);cprintf("1.Undercut");
       gotoxy(3,13);cprintf("2.Side Part");
       gotoxy(3,14);cprintf("3.Side Part");
       gotoxy(4,15);cprintf("with Beard");
       gotoxy(3,17);cprintf("4.Pompadour");
       gotoxy(3,18);cprintf("5.Caesar Fade");
       gotoxy(3,19);cprintf("6.Drop Fade");
       gotoxy(3,20);cprintf("7.Top Knot");
       gotoxy(3,21);cprintf("8.Faux Hawk");
       gotoxy(3,22);cprintf("9.Medium Length ");
       gotoxy(4,23);cprintf("Low Fade");
       gotoxy(3,25);cprintf("10.Classy Haircut");
       gotoxy(3,26);cprintf("11.Crop Fringe");
       gotoxy(3,27);cprintf("12.Man Bun");
       gotoxy(3,28);cprintf("13.Buzz Cut");
       gotoxy(3,29);cprintf("14.Slicked Back");
       gotoxy(3,30);cprintf("15.Comb Over ");
       gotoxy(4,31);cprintf("Undercut");
       gotoxy(28,12);cprintf("Rp. 40.000");
       gotoxy(28,13);cprintf("Rp. 40.000");
       gotoxy(28,14);cprintf("Rp. 50.000");
       gotoxy(28,17);cprintf("Rp. 30.000");
       gotoxy(28,18);cprintf("Rp. 45.000");
       gotoxy(28,19);cprintf("Rp. 40.000");
       gotoxy(28,20);cprintf("Rp. 50.000");
       gotoxy(28,21);cprintf("Rp. 40.000");
       gotoxy(28,22);cprintf("Rp. 30.000");
       gotoxy(28,25);cprintf("Rp. 20.000");
       gotoxy(28,26);cprintf("Rp. 20.000");
       gotoxy(28,27);cprintf("Rp. 60.000");
       gotoxy(28,28);cprintf("Rp. 40.000");
       gotoxy(28,29);cprintf("Rp. 30.000");
       gotoxy(28,30);cprintf("Rp. 50.000");
       gotoxy(50,12);cprintf("1.Color Natural");
       gotoxy(50,14);cprintf("2.Miranda Premium");
       gotoxy(50,16);cprintf("3.Loreal Excellence");
       gotoxy(50,18);cprintf("4.Beautylabo Hair");
       gotoxy(50,20);cprintf("5.Matrix Best Seller");
       gotoxy(50,22);cprintf("6.Matrix Socolor");
       gotoxy(50,24);cprintf("7.Atomy Jelly");
       gotoxy(50,26);cprintf("8.Revlon Color Hair");
       gotoxy(74,12);cprintf("Rp. 28.000");
       gotoxy(74,14);cprintf("Rp. 15.000");
       gotoxy(74,16);cprintf("Rp. 85.000");
       gotoxy(74,18);cprintf("Rp. 32.000");
       gotoxy(74,20);cprintf("Rp. 133.000");
       gotoxy(74,22);cprintf("Rp. 60.000");
       gotoxy(74,24);cprintf("Rp. 165.000");
       gotoxy(74,26);cprintf("Rp. 90.000");
       gotoxy(98,12);cprintf("1.Smoothing");
       gotoxy(98,14);cprintf("2.Perming");
       gotoxy(98,16);cprintf("3.Highlight");
       gotoxy(98,18);cprintf("4.Rebonding");
       gotoxy(98,20);cprintf("5.Bleaching");
       gotoxy(98,22);cprintf("6.Hair Spa");
       gotoxy(98,24);cprintf("7.Creambath");
       gotoxy(98,26);cprintf("8.Hair Toning");
       gotoxy(120,12);cprintf("Rp. 90.000");
       gotoxy(120,14);cprintf("Rp. 100.000");
       gotoxy(120,16);cprintf("Rp. 150.000");
       gotoxy(120,18);cprintf("Rp. 300.000");
       gotoxy(120,20);cprintf("Rp. 250.000");
       gotoxy(120,22);cprintf("Rp. 60.000");
       gotoxy(120,24);cprintf("Rp. 165.000");
       gotoxy(120,26);cprintf("Rp. 50.000");





          for(int a=1; a<28; a++){
          	for(int b=1; b<=140 ;b++){
          	gotoxy(1+b,8);cprintf("%c",219);
          	gotoxy(0+b,10);cprintf("%c",219);
          	}
          	gotoxy(71,8+a);cprintf("%c",219);
            gotoxy(24,8+a);cprintf("%c",219);
       	}

          for(int a=1;a<=24; a++){
          	for(int b=1; b<=46; b++){
          	gotoxy(117,8+a);cprintf("%c",219);
            gotoxy(94+b,32);cprintf("%c",219);
            }
          }

          for(int a=1; a<=3; a++){
          	for(int b=1; b<=27; b++){
            	gotoxy(10+b,4); cprintf("%c",219);
               gotoxy(10+b,6); cprintf("%c",219);
               gotoxy(11,3+a); cprintf("%c",219);
               gotoxy(37,3+a); cprintf("%c",219);
               gotoxy(57+b,4); cprintf("%c",219);
               gotoxy(57+b,6); cprintf("%c",219);
               gotoxy(58,3+a); cprintf("%c",219);
               gotoxy(84,3+a); cprintf("%c",219);
               gotoxy(103+b,4); cprintf("%c",219);
               gotoxy(103+b,6); cprintf("%c",219);
               gotoxy(104,3+a); cprintf("%c",219);
               gotoxy(131,3+a); cprintf("%c",219);
            }
            	gotoxy(14,5); printf("JENIS POTONGAN RAMBUT");
            	gotoxy(63,5); printf("JENIS CAT RAMBUT");
               gotoxy(111,5); printf("JENIS TAMBAHAN");

          }
          		gotoxy(98,34); cprintf("PRESS ANY KEY TO CONTINUE <<");Sleep(1000);
            	gotoxy(6,9); printf("NAMA POTONGAN");
               gotoxy(33,9); printf("HARGA");
               gotoxy(55,9); printf("NAMA CAT");
               gotoxy(80,9); printf("HARGA");
               gotoxy(101,9); printf("TAMBAHAN");
               gotoxy(124,9); printf("PEMBAYARAN");

       getch();
       hapus();Sleep(100);
       bingkai();


   }
//////////////////////////////////VALIDASI/////////////////////////////////////
	bool valnama(char nama[]){
		int cek=0;
   	if(!(nama[0]>= 'a' && nama[0] <= 'z' || nama[0] >= 'A' && nama[0] <= 'Z')){
   		cek++;
   	}
   		for(int j=0; j<strlen(nama); j++){
   			if(!(nama[j]>= 'a' && nama[j] <= 'z' || nama[j] >= 'A' && nama[j] <= 'Z' || nama[j] == ' ' && nama[j+1] != ' ' || nama[j] == '\'' && nama[j] != '\'') || nama[strlen(nama)] == ' ' || nama[strlen(nama)] == '\'' || nama[j] == '\'' && nama[j] == ' ' || strlen(nama) <= 2 || strlen(nama) == NULL){
      	cek++;
      }
   }
   	if(cek > 0){
   		return false;
   }else{
   		return true;
   }
}

bool valnomor(char hp[]){
	int cek=0;
   if(strlen(hp) == NULL || !(hp[0] >= '0' && hp[0] <= '9') || !(hp[strlen(hp)-1] >= '0' && hp[strlen(hp)-1] <= '9') || !(strlen(hp) >= 11 && strlen(hp) <= 13)){
   	cek++;
   }
   for(int j=0; j<strlen(hp); j++){
   	if(!(hp[j] >= '0' && hp[j] <= '9') || hp[1] != '8' || hp[0] != '0'){
      	cek++;
      }
   }
   if(cek > 0){
   	return false;
   }else{
   	return true;
   }
}

bool valjenis_kelamin(char jenis_kelamin[]){
	int cek = 0;
   for(int j=0; j<strlen(jenis_kelamin); j++){
   	if(!(jenis_kelamin[j] >= 'a' && jenis_kelamin[j] <= 'z' || jenis_kelamin[j] >= 'A' && jenis_kelamin[j] <= 'Z') || strlen(jenis_kelamin) == NULL){
      	cek++;
      }
   }
   if(cek == 0 && (strcmp(jenis_kelamin,"PRIA")==0 || strcmp(jenis_kelamin,"pria")==0 || strcmp(jenis_kelamin,"WANITA")==0 || strcmp(jenis_kelamin,"wanita")==0)){
		return true;
   }else{
   	return false;
   }
}

bool valumur(char umur[]){
	int cek = 0;
   if(strlen(umur) == NULL){
   	cek++;
   }
   for(int j=0; j<strlen(umur); j++){
   	if(!(umur[j] >= '0' && umur[j] <= '9') || strlen(umur) > 2 || umur[0] == '0'){
      	cek++;
      }
   }
   if(cek > 0){
   	return false;
   }else{
   	return true;
   }
}

///////////////////////////////////////////////////////////////////////////////
		void data(){
         gotoxy(8,10);printf("NAMA          :");
         gotoxy(8,12);printf("NO.HP         :");
         gotoxy(8,14);printf("JENIS KELAMIN :");
         gotoxy(8,16);printf("UMUR          :");

			do{
         	gotoxy(23,10);gets(nama[i]);
            if(valnama(nama[i]) == true && strlen(nama[i])> 2 && strlen(nama[i]) <= 25){
            	gotoxy(23,10);printf("%s",nama[i]);
            }else{
            	gotoxy(23,10); printf("Inputan Invalid"); Sleep(400);
            	gotoxy(23,10); printf("               "); Sleep(400);
            }
         }while(valnama(nama[i])!= true);

         do{
         	gotoxy(23,12);gets(hp[i]);
            if(valnomor(hp[i]) == true && strlen(hp[i]) >= 11 && strlen(hp[i]) <= 13){
            	gotoxy(23,12);printf("%s",hp[i]);
            }else{
            	gotoxy(23,12); printf("Inputan Invalid"); Sleep(400);
            	gotoxy(23,12); printf("               "); Sleep(400);
            }
         }while(valnomor(hp[i])!= true);

        do{
          gotoxy(23,14);gets(jenis_kelamin[i]);
          if(valjenis_kelamin(jenis_kelamin[i]) == true){
          	gotoxy(23,14);printf("%s",jenis_kelamin[i]);
          }else{
          	gotoxy(23,14); printf("Inputan Invalid"); Sleep(400);
            gotoxy(23,14); printf("               "); Sleep(400);
          }
        }while(valjenis_kelamin(jenis_kelamin[i]) != true);

        do{
        	gotoxy(23,16);gets(umur[i]);
         if(valumur(umur[i]) == true){
          	gotoxy(23,16);printf("%s",umur[i]);
          }else{
          	gotoxy(23,16); printf("Inputan Invalid"); Sleep(400);
            gotoxy(23,16); printf("               "); Sleep(400);
          }
        }while(valumur(umur[i]) != true);

        	tampilan2();


      }
      void data1(){
      bingkai2();
         gotoxy(8,10);printf("NAMA          : %s",nama[i]);
         gotoxy(8,12);printf("NO.HP         : %s",hp[i]);
         gotoxy(8,14);printf("JENIS KELAMIN : %s",jenis_kelamin[i]);
         gotoxy(8,16);printf("UMUR          : %s",umur[i]);

         gotoxy(8,22);total_harga();
      }



      void tampilan2(){
      data1();
        gotoxy(55,5); printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(55,6); printf(" %c     KEPERLUAN   %c   JENIS PANGKAS    %c    JENIS CAT          %c     TAMBAHAN    %c ",219,219,219,219,219,219,219,219,219);
        gotoxy(55,7); printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(55,8);printf(" %c                 %c                    %c                       %c                 %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,9);printf(" %c 1.Potong rambut %c  1.Undercut        %c  1.Color Natural      %c   1.Smoothing   %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,10);printf(" %c                 %c  2.Side Part       %c                       %c                 %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,11);printf(" %c 2.Cat rambut    %c  3.Side Part       %c  2.Loreal Excellence  %c   2.Perming     %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,12);printf(" %c                 %c     with Beard     %c                       %c                 %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,13);printf(" %c 3.Tambahan      %c  4.Pompadour       %c  3.Beautylabo Hair    %c   3.Highlight   %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,14);printf(" %c                 %c  5.Caesar Fade     %c                       %c                 %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,15);printf(" %c                 %c  6.Drop Fade       %c  4.Matrix Best Seller %c   4.Rebonding   %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,16);printf(" %c                 %c  7.Top Knot        %c                       %c                 %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,17);printf(" %c                 %c  8.Faux Hawk       %c  5.Matrix Socolo      %c   5.Bleaching   %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,18);printf(" %c                 %c  9.Medium Length   %c                       %c                 %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,19);printf(" %c                 %c  10.Classy Haircut %c  6.Atomy Jelly        %c   6.Hair Spa    %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,20);printf(" %c                 %c  11.Crop Fringe    %c                       %c                 %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,21);printf(" %c                 %c  12.Man Bun        %c  7.Revlon Color H     %c   7.Creambath   %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,22);printf(" %c                 %c  13.Buzz Cut       %c                       %c                 %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,23);printf(" %c                 %c  14.Slicked Back   %c  8.Miranda Premium    %c   8.Hair Toning %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,24);printf(" %c                 %c  15.Comb Over      %c                       %c                 %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,25);printf(" %c                 %c      Undercut      %c                       %c                 %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,26);printf(" %c                 %c                    %c                       %c                 %c",219,219,219,219,219,219,219,219,219,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);
        gotoxy(55,27);printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);


        gotoxy(8,18);printf("KEPERLUAN     :");
        gotoxy(114,32);printf("Tekan X Untuk berakhir");
        gotoxy(23,18);pilihan[cek]=getche(); Sleep(400);
        if(pilihan[cek] == '1'){
            hapus();
            tampilan_pangkas();
        }else if(pilihan[cek] == '2'){
            hapus();
            tampilan_cat();
        }else if(pilihan[cek] == '3'){
            hapus();
            tampilan_tambahan();
        }else if(pilihan[cek] == 'x' || pilihan[cek] == 'X'){
            hapus();
         	tambah_data();
        }else{
        	tampilan2();
        }
      }
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////

       void tampilan_pangkas(){
       bingkai1();data1();

       for(int a=1;a<=5;a++){
       	gotoxy(60+a,5);printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,6);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,7);printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,8);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,9);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,10);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);Sleep(50);
         gotoxy(60+a,11);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);Sleep(50);
         gotoxy(60+a,12);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,13);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,14);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,15);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,16);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,17);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,18);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,19);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,20);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,21);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,22);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,23);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,24);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,25);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,26);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,27);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,28);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,29);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,30);printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);Sleep(50);
         }

       gotoxy(72,6);printf("Jenis pangkas");
       gotoxy(96,6);printf("Harga");
       gotoxy(70,9);printf("1.Undercut");
       gotoxy(70,10);printf("2.Side Part");
       gotoxy(70,11);printf("3.Side Part");
       gotoxy(72,12);printf("with Beard");
       gotoxy(70,13);printf("4.Pompadour");
       gotoxy(70,14);printf("5.Caesar Fade");
       gotoxy(70,15);printf("6.Drop Fade");
       gotoxy(70,16);printf("7.Top Knot");
       gotoxy(70,17);printf("8.Faux Hawk");
       gotoxy(70,18);printf("9.Medium Length ");
       gotoxy(72,19);printf("Low Fade");
       gotoxy(70,20);printf("10.Classy Haircut");
       gotoxy(70,21);printf("11.Crop Fringe");
       gotoxy(70,22);printf("12.Man Bun");
       gotoxy(70,23);printf("13.Buzz Cut");
       gotoxy(70,24);printf("14.Slicked Back");
       gotoxy(70,25);printf("15.Comb Over ");
       gotoxy(72,26);printf("Undercut");
       gotoxy(95,9);printf("Rp. 40.000");
       gotoxy(95,10);printf("Rp. 40.000");
       gotoxy(95,11);printf("Rp. 50.000");
       gotoxy(95,12);printf("Rp. 30.000");
       gotoxy(95,13);printf("Rp. 45.000");
       gotoxy(95,14);printf("Rp. 40.000");
       gotoxy(95,16);printf("Rp. 50.000");
       gotoxy(95,17);printf("Rp. 40.000");
       gotoxy(95,18);printf("Rp. 30.000");
       gotoxy(95,20);printf("Rp. 20.000");
       gotoxy(95,21);printf("Rp. 20.000");
       gotoxy(95,22);printf("Rp. 60.000");
       gotoxy(95,23);printf("Rp. 40.000");
       gotoxy(95,24);printf("Rp. 30.000");
       gotoxy(95,25);printf("Rp. 50.000");


       bool ulang;
      char yakin;
       int test=0;
       for(int j=0; j<strlen(pilihan); j++){
       	if(pilihan[j] == '1'){
         	test++;
         }
       }

       if(test == 1){
       	do{
       	gotoxy(8,18);printf("Masukkan Pilihan: ");
       	gotoxy(26,18);scanf("%d",&pil_pangkas);
         if(pil_pangkas >= 1 && pil_pangkas <= 15){
         	ulang = false;
         		gotoxy(114,32);printf(" Yakin/Tidak : ");
               gotoxy(130,32);yakin= getche(); Sleep(300);
            	if(yakin == 'y' || yakin == 'Y'){
           			gotoxy(21,23);printf("Pemesanan Berhasil");Sleep(1000);
                  total[i] += harga_pangkas[pil_pangkas-1];
                  cek++;
               	hapus();
                  bingkai1();
               	tampilan2();
           		}else if(yakin == 't' || yakin == 'T'){
               	hapus();
                  bingkai1();
            		tampilan2();
            	}else{
            		for(int j=0; j<2; j++){
        					gotoxy(21,19);printf("Inputan Salah");  Sleep(300);
           				gotoxy(21,19);printf("                   "); Sleep(300);
        				}   ulang = true;
            	}
         }else{
       		for(int j=0; j<2; j++){
        			gotoxy(21,19);printf("Inputan Salah");  Sleep(200);
           		gotoxy(21,19);printf("                   "); Sleep(200);
        		}
            gotoxy(23,18);printf("                     ");
            ulang = true;
        	}
         }while(ulang);
       }else{
       	for(int j=0; j<2; j++){
       		gotoxy(21,23);printf("Anda Sudah Memilih ini"); Sleep(300);
         	gotoxy(21,23);printf("                         "); Sleep(300);
         }
         hapus();
         tampilan2();
       }


	}
///////////////////////////////////////////////////////////////////////////////
	void tampilan_cat(){
   	bingkai1();data1();
     for(int a=1;a<=5;a++){
     textcolor(11);
       	gotoxy(60+a,5);printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,6);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,7);printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,8);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,9);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,10);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);Sleep(50);
         gotoxy(60+a,11);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);Sleep(50);
         gotoxy(60+a,12);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,13);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,14);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,15);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,16);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,17);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,18);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,19);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,20);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,21);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,22);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,23);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,24);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,25);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,26);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,27);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,28);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,29);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,30);printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);Sleep(50);

       }

         gotoxy(72,6);printf("Jenis Cat");
       	gotoxy(96,6);printf("Harga");
       	gotoxy(69,9);cprintf("1.Color Natural");
       	gotoxy(69,11);cprintf("2.Miranda Premium");
       	gotoxy(69,13);cprintf("3.Loreal Excellence");
       	gotoxy(69,15);cprintf("4.Beautylabo Hair");
       	gotoxy(69,17);cprintf("5.Matrix Best Seller");
       	gotoxy(69,19);cprintf("6.Matrix Socolor");
       	gotoxy(69,21);cprintf("7.Atomy Jelly");
       	gotoxy(69,23);cprintf("8.Revlon Color Hair");
       	gotoxy(94,9);cprintf("Rp. 28.000");
       	gotoxy(94,11);cprintf("Rp. 15.000");
       	gotoxy(94,13);cprintf("Rp. 85.000");
       	gotoxy(94,15);cprintf("Rp. 32.000");
       	gotoxy(94,17);cprintf("Rp. 133.000");
       	gotoxy(94,19);cprintf("Rp. 60.000");
       	gotoxy(94,21);cprintf("Rp. 165.000");
       	gotoxy(94,23);cprintf("Rp. 90.000");


      bool ulang;
      char yakin;
       int test=0;
       for(int j=0; j<strlen(pilihan); j++){
       	if(pilihan[j] == '2'){
         	test++;
         }
       }

       if(test == 1){
       	do{
       	gotoxy(8,18);printf("Masukkan Pilihan: ");
       	gotoxy(26,18);scanf("%d",&pil_cat);
         if(pil_cat >= 1 && pil_cat <= 8){
            ulang = false;
         		gotoxy(114,32);printf(" Yakin/Tidak : ");
               gotoxy(132,32);yakin= getche(); Sleep(300);
            	if(yakin == 'y' || yakin == 'Y'){
           			gotoxy(21,23);printf("Pemesanan Berhasil");Sleep(1000);
                  ulang = false;
                  total[i] += harga_cat[pil_cat-1];
                  cek++;
               	hapus();
                  bingkai1();
               	tampilan2();
           		}else if(yakin == 't' || yakin == 'T'){
                  ulang = false;
               	hapus();
                  bingkai1();
            		tampilan2();
            	}else{
            		for(int j=0; j<2; j++){
        					gotoxy(21,19);printf("Inputan Salah");  Sleep(300);
           				gotoxy(21,19);printf("                   "); Sleep(300);
        				}  ulang = true;
            	}
         }else{
       		for(int j=0; j<2; j++){
        			gotoxy(21,19);printf("Inputan Salah");  Sleep(200);
           		gotoxy(21,19);printf("                   "); Sleep(200);
        		}
            gotoxy(23,18);printf("                     ");
            ulang = true;
        	}
         }while(ulang == true);
       }else{
       	for(int j=0; j<2; j++){
       		gotoxy(21,23);printf("Anda Sudah Memilih ini"); Sleep(300);
         	gotoxy(21,23);printf("                         "); Sleep(300);
         }
         hapus();
         tampilan2();
       }

   }

   	void tampilan_tambahan(){
      	bingkai1();data1();
         for(int a=1;a<=5;a++){
         textcolor(11);
       	gotoxy(60+a,5);printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,6);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,7);printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,8);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,9);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,10);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);Sleep(50);
         gotoxy(60+a,11);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);Sleep(50);
         gotoxy(60+a,12);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,13);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,14);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,15);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,16);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,17);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,18);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,19);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,20);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,21);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,22);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,23);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,24);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,25);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,26);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,27);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,28);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,29);printf(" %c                        %c                 %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);Sleep(50);
         gotoxy(60+a,30);printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);Sleep(50);

       }
         gotoxy(72,6);printf("Jenis Cat");
       	gotoxy(96,6);printf("Harga");
         gotoxy(70,9);cprintf("1.Smoothing");
       	gotoxy(70,11);cprintf("2.Perming");
       	gotoxy(70,13);cprintf("3.Highlight");
       	gotoxy(70,15);cprintf("4.Rebonding");
       	gotoxy(70,17);cprintf("5.Bleaching");
       	gotoxy(70,19);cprintf("6.Hair Spa");
       	gotoxy(70,21);cprintf("7.Creambath");
       	gotoxy(70,23);cprintf("8.Hair Toning");
       	gotoxy(93,9);cprintf("Rp. 90.000");
       	gotoxy(93,11);cprintf("Rp. 100.000");
       	gotoxy(93,13);cprintf("Rp. 150.000");
       	gotoxy(93,15);cprintf("Rp. 300.000");
       	gotoxy(93,17);cprintf("Rp. 250.000");
       	gotoxy(93,19);cprintf("Rp. 60.000");
       	gotoxy(93,21);cprintf("Rp. 165.000");
       	gotoxy(93,23);cprintf("Rp. 50.000");

         bool ulang;
      char yakin;
       int test=0;
       for(int j=0; j<strlen(pilihan); j++){
       	if(pilihan[j] == '3'){
         	test++;
         }
       }

       if(test == 1){
       	do{
       	gotoxy(8,18);printf("Masukkan Pilihan: ");
       	gotoxy(26,18);scanf("%d",&pil_tambahan);
         if(pil_tambahan >= 1 && pil_tambahan <= 8){
         	ulang = false;
         		gotoxy(114,32);printf(" Yakin / TIDAK : ");
               gotoxy(132,32);yakin= getche(); Sleep(300);
            	if(yakin == 'y' || yakin == 'Y'){
           			gotoxy(21,23);printf("Pemesanan Berhasil");Sleep(1000);
                  ulang = false;
                  total[i] += harga_tambahan[pil_tambahan-1];
                  cek++;
               	hapus();
                  bingkai1();
               	tampilan2();
           		}else if(yakin == 't' || yakin == 'T'){
                  ulang = false;
               	hapus();
                  bingkai1();
            		tampilan2();
            	}else{
            		for(int j=0; j<2; j++){
        					gotoxy(21,19);printf("Inputan Salah");  Sleep(300);
							gotoxy(21,19);printf("                   "); Sleep(300);
        				}  ulang = true;
            	}
         }else{
       		for(int j=0; j<2; j++){
        			gotoxy(21,19);printf("Inputan Salah");  Sleep(200);
           		gotoxy(21,19);printf("                   "); Sleep(200);
        		}
            gotoxy(23,18);printf("                     ");
            ulang = true;
        	}
         }while(ulang);
       }else{
       	for(int j=0; j<2; j++){
       		gotoxy(21,23);printf("Anda Sudah Memilih ini"); Sleep(300);
         	gotoxy(21,23);printf("                         "); Sleep(300);
         }
         hapus();
         tampilan2();
       }

      }

      void total_harga(){
         printf("Total Harga : %d",total[i]);
      }

      void tambah_data(){
      	char sure;
         cek = 0;
         bool a=true;
         do{
         bingkai1();
         for(int a=1 ;a<=25;a++){
         	for(int b=1; b<=45;b++){
            gotoxy(5+b,5);printf("%c",219);
            gotoxy(5+b,30);printf("%c",219);
            gotoxy(6,5+a);printf("%c",219);
            gotoxy(50,5+a);printf("%c",219);

            }
         }
         gotoxy(8,15);printf("Apakah Anda Ingin Menambahkan Data :");
         gotoxy(8,17);printf("Tekan Y Untuk menyimpan");
         gotoxy(8,19);printf("Tekan N Untuk Tidak menyimpan");
         gotoxy(45,15);sure=getch(); Sleep(400);
         	if(sure == 'y' || sure == 'Y'){
               i++;
               	nama[i] == NULL;
               	hp[i] == NULL;
               	jenis_kelamin[i] == NULL;
               	umur[i] == NULL;
               a = false;
               hapus();
               bingkai();
            }else if(sure == 'n' || sure == 'N'){
               a = false;
               hapus();
            	bingkai();
            }else{
         		a = true;
            }
         }while(a);
      }

      void data3(){
      	int b = 4;
      	for(int j=0; j<i; j++){
				gotoxy(8,b);printf("Nama          : %s\n",nama[j]);
            gotoxy(8,2+b);printf("Nomor Hp      : %s\n",hp[j]);
            gotoxy(8,4+b);printf("Jenis Kelamin : %s\n",jenis_kelamin[j]);
            gotoxy(8,6+b);printf("Umur          : %s\n",umur[j]);
            gotoxy(8,8+b);printf("Total Harga   : %d\n",total[j]);
            b += 10;
         }
      }

      void tampilan3(){
      	for(int a=1;a<=20;a++){
         	gotoxy(5+a,3);printf("  %c%c%c%c%c%c  %c%c%c%c%c%c %c%c   %c%c %c%c    %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(5);
            gotoxy(5+a,4);printf(" %c%c%c%c%c%c%c%c %c%c     %c%c%c  %c%c %c%c    %c%c ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(10);
            gotoxy(5+a,5);printf(" %c%c%c%c%c%c%c%c %c%c%c%c%c%c %c%c%c%c %c%c %c%c    %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(5);
            gotoxy(5+a,6);printf(" %c%c %c%c %c%c %c%c%c%c%c%c %c%c  %c%c%c %c%c    %c%c ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(10);
            gotoxy(5+a,7);printf(" %c%c %c%c %c%c %c%c     %c%c   %c%c %c%c%c%c%c%c%c%c ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(5);
            gotoxy(5+a,8);printf(" %c%c %c%c %c%c %c%c%c%c%c%c %c%c   %c%c  %c%c%c%c%c%c  ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(10);

         }

         for(int a=1;a<=20;a++){
         gotoxy(90-a,3);printf(" %c%c    %c%c %c%c%c%c%c%c%c%c  %c%c%c%c%c   %c%c%c%c%c%c   %c%c%c%c%c ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(10);
         gotoxy(90-a,4);printf(" %c%c    %c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(5);
         gotoxy(90-a,5);printf(" %c%c    %c%c    %c%c    %c%c   %c%c %c%c%c%c%c%c%c%c %c%c   %c%c ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(10);
         gotoxy(90-a,6);printf(" %c%c    %c%c    %c%c    %c%c%c%c%c%c%c %c%c %c%c %c%c %c%c%c%c%c%c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(5);
         gotoxy(90-a,7);printf(" %c%c%c%c%c%c%c%c    %c%c    %c%c   %c%c %c%c %c%c %c%c %c%c   %c%c ",38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38,38);Sleep(10);
         gotoxy(90-a,8);printf("  %c%c%c%c%c%c     %c%c    %c%c   %c%c %c%c %c%c %c%c %c%c   %c%c ",37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37);Sleep(5);
         }
      }

      void bingkai2(){
      	for(int a=1 ;a<=25;a++){
         	for(int b=1; b<=45;b++){
            gotoxy(5+b,5);printf("%c",219);
            gotoxy(5+b,30);printf("%c",219);
            gotoxy(6,5+a);printf("%c",219);
            gotoxy(50,5+a);printf("%c",219);

            }
         }
         for(int a=1; a<=4; a++){
      	for(int b=1; b<=27; b++){
         textcolor(0);
         	gotoxy(110+b,30);printf("%c",219);
            gotoxy(110+b,34);printf("%c",219);
            gotoxy(111,30+a);printf("%c",219);
            gotoxy(137,30+a);printf("%c",219);
         }
      }
   }

   void edit_data(){
   	data3();
      int u=0;
      for(int a=1; a<=4; a++){
      	for(int b=1; b<=27; b++){
         textcolor(0);
         	gotoxy(110+b,24);printf("%c",219);
            gotoxy(110+b,28);printf("%c",219);
            gotoxy(111,24+a);printf("%c",219);
            gotoxy(137,24+a);printf("%c",219);
            }
          }
         	gotoxy(118,26);printf(" EDIT DATA : ");gotoxy(131,26);scanf("%d",&u); u--;
      if(u >= 0 && u <= i){
      	do{
            gotoxy(50,4);printf("NAMA          : ");
         	gotoxy(66,4);gets(nama1);
            if(valnama(nama1) == true && strlen(nama1)> 2 && strlen(nama1) <= 25){
            	gotoxy(66,4);printf("%s",nama1);
            }else{
            	gotoxy(66,4); printf("Inputan Invalid"); Sleep(400);
            	gotoxy(66,4); printf("               "); Sleep(400);
            }
         }while(valnama(nama1)!= true);

         do{
            gotoxy(50,6);printf("Nomor Hp      : ");
         	gotoxy(66,6);gets(hp1);
            if(valnomor(hp1) == true && strlen(hp1) >= 11 && strlen(hp1) <= 13){
            	gotoxy(66,6);printf("%s",hp1);
            }else{
            	gotoxy(66,6); printf("Inputan Invalid"); Sleep(400);
            	gotoxy(66,6); printf("               "); Sleep(400);
            }
         }while(valnomor(hp1)!= true);

        do{
           gotoxy(50,8);printf("Jenis Kelamin : ");
           gotoxy(66,8);gets(jenis_kelamin1);
          if(valjenis_kelamin(jenis_kelamin1) == true){
          	gotoxy(66,8);printf("%s",jenis_kelamin1);
          }else{
          	gotoxy(66,8); printf("Inputan Invalid"); Sleep(400);
            gotoxy(66,8); printf("               "); Sleep(400);
          }
        }while(valjenis_kelamin(jenis_kelamin1) != true);

        do{
        	gotoxy(50,10);printf("UMUR          : ");
        	gotoxy(66,10);gets(umur1);
         if(valumur(umur1) == true){
          	gotoxy(66,10);printf("%s",umur1);
          }else{
          	gotoxy(66,10); printf("Inputan Invalid"); Sleep(400);
            gotoxy(66,10); printf("               "); Sleep(400);
          }
        }while(valumur(umur1) != true);

      for(int j=0; j<i; j++){
      	if(u == i-1){
         	strcpy(nama[i-1],nama1);
            strcpy(hp[i-1],hp1);
            strcpy(jenis_kelamin[i-1],jenis_kelamin1);
            strcpy(umur[i-1],umur1);
         }
      }

      }else{
      	gotoxy(118,26);printf("Inputan Salah"); Sleep(400);
         gotoxy(118,26);printf("             ");
      }
       getch();
       hapus();
       bingkai();
   }

   void hapus_data(){
   	data3();
      int u;
      for(int a=1; a<=4; a++){
      	for(int b=1; b<=27; b++){
         textcolor(0);
         	gotoxy(110+b,19);printf("%c",219);
            gotoxy(110+b,24);printf("%c",219);
            gotoxy(111,19+a);printf("%c",219);
            gotoxy(137,19+a);printf("%c",219);
         }
      }
      gotoxy(115,21);printf("Hapus data : ");gotoxy(127,21);scanf("%d",&u);
      u--;
      if(u >= 0 && u <= i){
      for(int j=0; j<i; j++){
      	if(u == j){
         	for(int v=0; v<strlen(nama[u]); v++){
            	nama[u][v] = NULL;
            }
         	for(int v=0; v<strlen(hp[u]); v++){
               hp[u][v] = NULL;
            }
            for(int v=0; v<strlen(jenis_kelamin[u]); v++){
               jenis_kelamin[u][v] = NULL;
            }
            for(int v=0; v<strlen(umur[u]); v++){
            	umur[u][v] = NULL;
            }
            total[u] = NULL;
            gotoxy(9,30);printf("Data Berhasil Di Hapus\n");

            for(int v=u; v<i; v++){
            	strcpy(nama[v],nama[v+1]);
               strcpy(hp[v],hp[v+1]);
               strcpy(jenis_kelamin[v],jenis_kelamin[v+1]);
               strcpy(umur[v],umur[v+1]);
               total[v] = total[v+1];
            }i--;
         } gotoxy(8,28);printf("%s",tamp2);
      }
      }else{
      	gotoxy(10,28);printf("Inputan Salah"); Sleep(400);
         gotoxy(10,28);printf("                  ");
      }
      getch();
      hapus();
      bingkai();
   }
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
  	main(){
    awal();
  //informasi();
    //tampilan();
   //bingkai();
   //loading();
   //data();
   //tampilan2();
   //asci();
   //tampilan_tambahan();
   //data();
   //tampilan3();
    //bingkai1();
   //bingkai2();
   //tampilan_pangkas();
   getch();
}

