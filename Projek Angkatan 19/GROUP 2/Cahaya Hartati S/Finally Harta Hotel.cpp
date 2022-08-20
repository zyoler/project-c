#include<stdio.h>
#include<conio.h>
#include<windows.h>

////////////////////////////////////////////////////////////////////////////////
//                       Projekan Aplikasi Hotel                              //
//                              Harta Hotel                                   //
//                       by CahayaSitanggang ang'19-Neophyte                  //
//									Width : 120     Height : 40                        //
////////////////////////////////////////////////////////////////////////////////

//////////////////////////// prototype ////////////////////////////////////////
void bingkai1();
void login();
void bingkai_login();
void tampilan1();
void tampilanawal();
void tampilanpilihanlogin();
void tampilanpengguna();
void tampilanadmin();
void tampilanlogin();
void ubahhargakamar();
void loading();
void familyroom();
void tampilanmenuadmin();
void daftarpenyewa();
void daftarkamar();
void tampilanemnu();
void superior();
void delux();
void vip();
void familyroom();
void tampilanpengguna();
void daftarkamaradmin();
void tampilanpilihan();
void daftarkamaruser();
void tentangkami();
void hitungpendapatan();
void pembayaran();
void registrasi();
void tampilanbuatakun();
void tampilanregis();
void cekout();
void keluar();


                char tamphargafamily;
/////////////////////////////char//////////////////////////////////////////////
char kamar[4][100]={"SUPERIOR ROOM","DELUX ROOM","VIP ROOM","FAMILY ROOM"};
char harga[4][100]={" 500000"," 800000","2000000","3000000"};
char nama1[20][100];
char kelamin[2];
char kelamin1[20][2];
char alamat[100];
char alamat1[20][100];
char nope1[20][100];
char tanggal[5];
char tanggal1[20][100];
char bulan[20];
char bulan1[20][20];
char tahun[5];
char tahun1[20][5];
char lama1[20][100];
char user[100];
char sandi[100];
char pilihan;
char masukan();
char masukan(){
	char a;
   a=getche();

   return a;
}
char pendapatan[20];
char beban[20];
char jumkamar[10];
char lamainap[100];
char uang[12];
char nama[100];
char nope[100];




///////////////////////////////////////////////////////////////////////////////
int valpendapatan(char z[20]);
int jumkamar2[20];
int kuota[4]={20,15,10,6};
int hitung=0;
int kuot;
int u;
int valnama(char y[100]);
int valuser(char z[100]);
int valtahun(char c[4]);
int valnope(char n[20]);
int valtanggal(char c[2]);
int valbulan(char y[100]);
int valalamat(char y[100]);
int sisasuperior=0;
int sisadelux=0;
int sisavip=0;
int sisafamily=0;
int kamarTerpilih;

float penda;
float tamp2;
float beb;
float tamp1;
int tamp=0;
float harg;
float har;
float uang1;




////////////////////////////////bingkai1///////////////////////////////////////

void bingkai1(){

		for (int a=1;a<=40;a++){
   		for (int b=1;b<=100;b++){
      		if (a==1 || a==40 || b==1 || b==100){
            textcolor(6);cprintf("%c",219);
            }else {
         	textbackground(7);cprintf(" ");
            }
      	} printf("\n");
   	}

}

////////////////////////////// bingkai login //////////////////////////////////

void bingkai_login(){
	 bingkai1();
    textbackground(7);
	textcolor(6);
   Sleep(20);
   for(int x=35;x<=65;x++){
       gotoxy(x,20);cprintf("%c",219);
       gotoxy(x,24);cprintf("%c",219);
       gotoxy(x,28);cprintf("%c",219);
   }
   for(int y=20;y<=28;y++){
   textcolor(6);
   	gotoxy(35,y);cprintf("%c",219);
      gotoxy(65,y);cprintf("%c",219);
   }
}
/////////////////////////////////loading////////////////////////////////////////

void loading(){
      for (int a=0;a<=100;a++){
      	gotoxy(43,37);textcolor(0);cprintf(" loading %d %",a);Sleep(30);
      }
}


///////////////////////////////tampilan awal////////////////////////////////////
void tampilanawal(){

			char a, welcome[30]={'W','E','L','C','O','M','E',' ','T','O',' ','H','A','R','T','A',' ','H','O','T','E','L'};

           	textbackground(7);
   			for (int b=0;b<30;b++){
   					gotoxy(40+b,15);textcolor(6);cprintf("%c",welcome[b]);Sleep(50);
   			}
         	gotoxy(40,20);;textcolor(0);cprintf("Press anykey to continue !");Sleep(1000);a=masukan();
         	clrscr();
         	tampilanpilihanlogin();
}


/////////////////////////////////pilihN LOGIN //////////////////////////////////
void tampilanpilihanlogin(){
			bingkai1();

         gotoxy(36,5);textcolor(6);cprintf("@     @   @@@@  @@   @  @    @  ");
    		gotoxy(36,6);textcolor(6);cprintf("@@   @@  @      @ @  @  @    @  ");
    		gotoxy(36,7);textcolor(6);cprintf("@ @ @ @  @@@@   @  @ @  @    @  ");
    		gotoxy(36,8);textcolor(6);cprintf("@  @  @  @      @   @@  @    @  ");
         gotoxy(36,9);textcolor(6);cprintf("@     @   @@@@  @    @   @@@@   ");
    		gotoxy(36,10);textbackground(0);textcolor(6);cprintf("H  A  R  T  A   H  O  T  E  L ");


   		char a;

         textcolor(16);
      	gotoxy(90,2);textbackground(6);cprintf("Keluar");
      	gotoxy(96,2);textbackground(6);cprintf(" X ");
   		gotoxy(42,15);textbackground(6);textcolor(0);cprintf(">> MASUK SEBAGAI <<");
   		for (int a=1;a<=25;a++){
   			for (int b=1;b<=4;b++){
      			if (a==1 || a==25 || b==1 || b==4){
         			gotoxy(38+a,17+b);textcolor(0);cprintf("%c",219);
         		}else {
      				gotoxy(38+a,17+b);textbackground(6);cprintf(" ");
            	}
      		}
   		}
   		for (int a=1;a<=25;a++){
   			for (int b=1;b<=4;b++){
      			if (a==1 || a==25 || b==1 || b==4){
         			gotoxy(38+a,22+b);textcolor(0);cprintf("%c",219);
         		}else {
      				gotoxy(38+a,22+b);textbackground(6);cprintf(" ");
      			}
      		}
   		}
   		for (int a=1;a<=25;a++){
   			for (int b=1;b<=4;b++){
     			if (a==1 || a==25 || b==1 || b==4){
         			gotoxy(38+a,27+b);textcolor(0);cprintf("%c",219);
         		}else {
      				gotoxy(38+a,27+b);textbackground(6);cprintf(" ");
      			}
      		}
   		}
      	textcolor(0);
   		gotoxy(45,20);cprintf("1. Admin");
      	gotoxy(45,25);cprintf("2. Pengguna");
         gotoxy(43,30);textbackground(6);textcolor(0);cprintf("Masukan Pilihan :");a=masukan();

      	int b=1;

      	while (b!=0){
      			if(a=='1'){
         			clrscr();
         			login();
         			b=0;
      			}else if (a=='2'){
      				clrscr();
         			tampilanpengguna();
         			b=0;
      			}else if (a=='x' || a=='X'){
               	for(int a=0;a<23;a++){
                  	for(int b=0;b<40;b++){
                     	gotoxy(30+b,14+a);textbackground(7);cprintf(" ");
                     }
                  }
                  gotoxy(35,20);textcolor(4);cprintf("Apakah anda ingin keluar?(Y/N)");
                  gotoxy(3,39);textbackground(7);cprintf("          ");
                  gotoxy(89,2);textbackground(7);cprintf("          ");
                  char a = getch();
                  if(a=='Y' || a=='y')exit(0);
                  else if(a=='n' || a=='N'){
                     clrscr();
                  }
         			b=0;
      			}else{
      				gotoxy(44,37);textbackground(6);textcolor(4);cprintf("Inputan Salah!!");Sleep(500);
               	gotoxy(44,37);textbackground(7);textcolor(4);cprintf("               ");
               	gotoxy(60,30);textbackground(6);cprintf("  ");
               	gotoxy(60,30);textbackground(6);textcolor(16);a=masukan();
      			}
      	}
}

///////////////////////////////tampilan login admin/////////////////////////////

void login(){
bingkai_login();
textcolor(0);
         gotoxy(36,5); textcolor(6);cprintf(" @@@@   @@@@   @     @  @  @@  @              ");
    		gotoxy(36,6); textcolor(6);cprintf("@    @  @   @  @@   @@  @  @ @ @              ");
    		gotoxy(36,7); textcolor(6);cprintf("@@@@@@  @   @  @ @ @ @  @  @  @@              ");
    		gotoxy(36,8); textcolor(6);cprintf("@    @  @@@@   @  @  @  @  @   @              ");
    		gotoxy(34,10);textbackground(6);textcolor(0);cprintf("H   A   R   T   A  H   O   T   E   L ");
         Sleep(200);

         	char z;
       		gotoxy(35,18);textbackground(6);textcolor(0);cprintf("Apakah anda ingin lanjut(y/n) :");z=masukan();
     	 		if(z=='y' || z=='Y'){
                  gotoxy(35,18);textbackground(7);textcolor(0);cprintf("                                    ");
                 	while (true){
    				  	textbackground(7);
      				textcolor(0);
  						char nama[10],pass[10];
   					gotoxy(37,22);cprintf("username: ");
      				gotoxy(37,26);cprintf("password: ");
                  int a=1;

						while(a!=0){
         			gotoxy(47,22);textbackground(7);gets(nama);
				      gotoxy(47,26);textbackground(7);gets(pass);

	      			if ((strcmp(nama,"cahaya")==0) && (strcmp(pass,"manis")==0)){
         				gotoxy(40,30);textbackground(6);textcolor(0);cprintf(" ANDA BERHASIL MASUK ");getch();
         				clrscr();
            			tampilanadmin();
            			a=0;
            		}else{
      					gotoxy(40,30);textbackground(6);textcolor(0);cprintf("USERNAME ATAU PASSWORD SALAH !");getch();
                     gotoxy(40,30);textbackground(7);textcolor(7);cprintf("                              ");
            			gotoxy(47,22);textbackground(7);cprintf("                                               ");
            			gotoxy(47,26);textbackground(7);cprintf("                                               ");
                     gotoxy(65,22);textbackground(6);cprintf(" ");
                     gotoxy(65,26);textbackground(6);cprintf(" ");
      				}
      				}
   					}
         	}else if(z=='n' || z=='N') {
            	clrscr();
            	tampilanpilihanlogin();
            }


}

//////////////////////////////////tampilan admin////////////////////////////////
void tampilanadmin(){
		bingkai1();

      	textbackground(7);
    		gotoxy(36,5); textcolor(6);cprintf(" @@@@   @@@@   @     @  @  @@  @              ");
    		gotoxy(36,6); textcolor(6);cprintf("@    @  @   @  @@   @@  @  @ @ @              ");
    		gotoxy(36,7); textcolor(6);cprintf("@@@@@@  @   @  @ @ @ @  @  @  @@              ");
    		gotoxy(36,8); textcolor(6);cprintf("@    @  @@@@   @  @  @  @  @   @              ");
         gotoxy(34,10);textbackground(6);textcolor(0);cprintf("H   A   R   T   A  H   O   T   E   L ");
         Sleep(200);

         gotoxy(3,39);textbackground(6);textcolor(0);cprintf("Tekan 0 untuk kembali");

      	for (int a=1;a<=30;a++){
   			for (int b=1;b<=3;b++){
         	  	gotoxy(12+a,16+b);textbackground(6);cprintf(" ");
      			gotoxy(14+a,15+b);textbackground(0);cprintf(" ");
            	gotoxy(18,18);textbackground(6);textcolor(16);cprintf("1. Ubah harga kamar");
      		}
   		}
   		for (int a=1;a<=30;a++){
   			for (int b=1;b<=3;b++){
         	  	gotoxy(12+a,25+b);textbackground(6);cprintf(" ");
      			gotoxy(14+a,24+b);textbackground(0);cprintf(" ");
            	gotoxy(18,27);textbackground(6);textcolor(16);cprintf("2. Daftar penyewa");
      		}
   		}
   		for (int a=1;a<=30;a++){
   			for (int b=1;b<=3;b++){
         		gotoxy(50+a,16+b);textbackground(6);cprintf(" ");
      			gotoxy(52+a,15+b);textbackground(0);cprintf(" ");
            	gotoxy(56,18);textbackground(6);textcolor(16);cprintf("3. Daftar kamar");
      		}
   		}
   		for (int a=1;a<=30;a++){
   			for (int b=1;b<=3;b++){
         	  	gotoxy(50+a,25+b);textbackground(6);cprintf(" ");
      			gotoxy(52+a,24+b);textbackground(0);cprintf(" ");
            	gotoxy(52,27);textbackground(6);textcolor(16);cprintf("4. Hitung Pendapatan");
      		}
   		}
   		for (int a=1;a<=30;a++){
   			for (int b=1;b<=3;b++){
         		gotoxy(30+a,32+b);textbackground(6);cprintf(" ");
      			gotoxy(32+a,31+b);textbackground(0);cprintf(" ");
      		}
   		}
         char a;
      	int z=1;

       	gotoxy(36,34);textbackground(6);textcolor(16);cprintf("Masukan Pilihan :");a=masukan();


       	while(z!=0){
       			if(a=='1'){
       				clrscr();
         		  	ubahhargakamar();
               	z=0;
       			}else if(a=='2'){
       				clrscr();
         		 	daftarpenyewa();
               	z=0;
       			}else if(a=='3'){
         			clrscr();
       				daftarkamaradmin();
               	z=0;
       			}else if(a=='4'){
         			clrscr();
         		  hitungpendapatan();
               	z=0;
       			}else if(a=='0'){
         			clrscr();
         			tampilanpilihanlogin();
               	z=0;

       			}else {
         			gotoxy(40,37);textbackground(6);textcolor(4);cprintf("Inputan Salah!!");Sleep(700);
         			gotoxy(40,37);textbackground(7);cprintf("                 ");
         			gotoxy(52,34);textbackground(6);cprintf("  ");
         			gotoxy(36,34);textbackground(6);textcolor(0);cprintf("Masukan Pilihan :");a=masukan();


       			}
     		}
}
/////////////////////////////////////UBAH HARGA/////////////////////////////////
void ubahhargakamar(){
      	bingkai1();

         textbackground(7);
    		gotoxy(20,3);textcolor(6); cprintf("@    @  @@@@    @@@   @   @     @   @   @@@   @@@@    @@@@   @@@      ");
    		gotoxy(20,4);textcolor(6); cprintf("@    @  @   @  @   @  @   @     @   @  @   @  @   @  @      @   @     ");
    		gotoxy(20,5);textcolor(6); cprintf("@    @  @@@@@  @@@@@  @@@@@     @@@@@  @@@@@  @@@@   @ @@@  @@@@@     ");
    		gotoxy(20,6);textcolor(6); cprintf("@    @  @   @  @   @  @   @     @   @  @   @  @   @  @   @  @   @     ");
    		gotoxy(20,7);textcolor(6); cprintf(" @@@@   @@@@   @   @  @   @     @   @  @   @  @    @  @@@@  @   @     ");
			gotoxy(20,8);textbackground(6);textcolor(0);cprintf("           H   A   R   T   A      H    O    T    E   L           ");

         textcolor(0);
         gotoxy(6,39);textbackground(6);textcolor(0);cprintf("Kembali");
      	gotoxy(3,39);textbackground(6);textcolor(0);cprintf(" 0 ");



   		for (int a=1;a<=35;a++){
   			for (int b=1;b<=11;b++){
         		gotoxy(6+a,10+b); textbackground(0);cprintf(" ");
     			}
   		}
         gotoxy(9,12);textbackground(0);textcolor(7); cprintf("  Kamar  ");
         gotoxy(35,12);textbackground(0);textcolor(7);cprintf("  Harga");
         for(int a=0;a<4;a++){
         		gotoxy(9,14+a);textbackground(0);textcolor(7); cprintf("%d.%s",a+1,kamar[a]);
               gotoxy(30,14+a);textbackground(0);textcolor(7); cprintf("Rp.%s",harga[a]);
         }
      	for (int b=1;b<=45;b++){
       			gotoxy(50+b,11);textcolor(0 );cprintf("%c",219);Sleep(20);
       			gotoxy(50+b,13);textcolor(0 );cprintf("%c",219);Sleep(20);
       			gotoxy(50+b,21);textcolor(0 );cprintf("%c",219);Sleep(20);
   		}
   		for (int b=1;b<=10;b++){
       			gotoxy(51,11+b);textcolor(0 );cprintf("%c",219);Sleep(20);
       			gotoxy(80,11+b);textcolor(0 );cprintf("%c",219);Sleep(20);
       			gotoxy(95,11+b);textcolor(0 );cprintf("%c",219);Sleep(20);
   		}
      			gotoxy(55,12);textbackground(7);printf("  Kamar");
         		gotoxy(84,12);textbackground(7);printf("Harga");
   		for (int a=1;a<=40;a++){
   			for (int b=1;b<=5;b++){
         		if (a==1 || a==2 || a==39 || a==40 || b==1 ||b==5){
         			gotoxy(29+a,30+b); textbackground(7);cprintf("%c",219);
            	}else {
            		gotoxy(29+a,30+b); textbackground(7);cprintf(" ");
            	}
      		}
         }

         char a[2];
         int c;

         gotoxy(35,33); textbackground(7);textcolor(0);cprintf("Jumlah yang akan diubah : ");gets(a);
         	while(true){
            		c=atoi(a);
            		if(c==1){
               			textbackground(7);
            				gotoxy(53,14);printf("1.");
                  		gotoxy(82,14);printf("Rp.");
               			break;
      				}else if(c==2){
                  	for(int a=0;a<2;a++){
                    		textbackground(7);
                    		gotoxy(53,14+a);printf("%d.",a+1);
                    		gotoxy(82,14+a);printf("Rp.");
                  	}
                  	break;
      				}else if(c==3){
               		for(int a=0;a<3;a++){
               	  		textbackground(7);
                    		gotoxy(53,14+a);printf("%d.",a+1);
                    		gotoxy(82,14+a);printf("Rp.");
                  	}
                     break;
      				}else if(c==4){
               		for(int a=0;a<4;a++){
                    		textbackground(7);
                    		gotoxy(53,14+a);printf("%d.",a+1);
                    		gotoxy(82,14+a);printf("Rp.");
                     }
                  	break;
                  }else {
            				gotoxy(43,37);textcolor(4);cprintf(" Inputan Salah !! ");Sleep(700);
                  		gotoxy(43,37);textcolor(7);textcolor(7);cprintf("                   ");
            				gotoxy(61,33);textbackground(7);textcolor(7);cprintf("      ");
                        gotoxy(35,33);textbackground(7);textcolor(0);cprintf("Jumlah yang akan diubah : ");gets(a);
                  }
            }

      	int b;

      	b=atoi(a);
      	for(int x=1;x<=b;x++){
      			for (int a=1;a<=31;a++){
         				for (int b=1;b<=3;b++){
            					gotoxy(33+a,31+b); textbackground(7);cprintf(" ");Sleep(20);
            			}
         		}
               char z;
         		gotoxy(34,33); textbackground(7);textcolor(0);cprintf("Pilih kamar yang akan diubah :");z=masukan();
      			while(true){
         				if(z=='1'){
            				gotoxy(56,13+x);textbackground(0);textcolor(7);cprintf("SUPERIOR ROOM");
                  		gotoxy(85,13+x);gets(harga[0]);
                  		while(true){
                  				if (strlen(harga[0])==0){
                        			gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(700);
                           		gotoxy(45,37);textbackground(7);cprintf("                  ");
                           		gotoxy(85,13+x);textbackground(7);cprintf("          ");
                           		gotoxy(85,13+x);gets(harga[0]);
                        	 	}else if(valpendapatan(harga[0])>0){
                        			gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
                        			gotoxy(35,37);textbackground(7);cprintf("                                  ");
                        			gotoxy(85,13+x);textbackground(7);cprintf("          ");
                        			gotoxy(85,13+x);gets(harga[0]);
                        		}else if (strlen(harga[0])<6 || strlen(harga[0])>8 ){
                        			gotoxy(35,37);textbackground(6);textcolor(4);cprintf("MINIMAL 6 DAN MAKSIMAL 8 DIGIT  ");Sleep(700);
                           		gotoxy(35,37);cprintf("                                             ");
                           		gotoxy(85,13+x);textbackground(7);cprintf("          ");
                           		gotoxy(85,13+x);gets(harga[0]);
                        		}else {
                        		break;
                        		}
                        }
                  		break;
                     }else if(z=='2'){
            					gotoxy(56,13+x);textbackground(0);textcolor(0);printf("DELUX ROOM");
                  			gotoxy(85,13+x);gets(harga[1]);
                  			while(true){
                           	if (strlen(harga[1])==0){
                        			gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(700);
                           		gotoxy(45,37);textbackground(7);cprintf("                  ");
                           		gotoxy(85,13+x);textbackground(7);cprintf("          ");
                           		gotoxy(85,13+x);gets(harga[1]);
                        		}else if(valpendapatan(harga[1])>0){
                        			gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
                           		gotoxy(35,37);textbackground(7);cprintf("                                  ");
                           		gotoxy(85,13+x);textbackground(7);cprintf("          ");
                           		gotoxy(85,13+x);gets(harga[1]);
                        		}else if (strlen(harga[1])<6 || strlen(harga[1])>8 ){
                                 gotoxy(35,37);textbackground(6);textcolor(4);cprintf("MINIMAL 6 DAN MAKSIMAL 8 DIGIT  ");Sleep(700);
                           		gotoxy(35,37);cprintf("                                             ");
                           		gotoxy(85,13+x);textbackground(7);cprintf("          ");
                           		gotoxy(85,13+x);gets(harga[1]);
                        		}else {
                        			break;
                        		}
                  			}
                  			break;
                     }else if(z=='3'){
            					gotoxy(56,13+x);textbackground(0);textcolor(7);printf("VIP ROOM");
                  			gotoxy(85,13+x);gets(harga[2]);
                  			while(true){
                  				if (strlen(harga[2])==0){
                        			gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(700);
                           		gotoxy(45,37);textbackground(7);cprintf("                  ");
                           		gotoxy(85,13+x);textbackground(7);cprintf("          ");
                           		gotoxy(85,13+x);gets(harga[2]);
                        	  	}else if(valpendapatan(harga[2])>0){
                        			gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
                           		gotoxy(35,37);textbackground(7);cprintf("                                  ");
                           		gotoxy(85,13+x);textbackground(7);cprintf("          ");
                           		gotoxy(85,13+x);gets(harga[2]);
                        		}else if (strlen(harga[2])<6 || strlen(harga[2])>8 ){
                        			gotoxy(35,37);textbackground(6);textcolor(4);cprintf("MINIMAL 6 DAN MAKSIMAL 8 DIGIT  ");Sleep(700);
                           		gotoxy(35,37);cprintf("                                             ");
                           		gotoxy(85,13+x);textbackground(7);cprintf("          ");
                           		gotoxy(85,13+x);gets(harga[2]);
                        		}else {
                        			break;
                           	}
                           }
                  			break;
            			}else if(z=='4'){
            					gotoxy(56,13+x);textbackground(0);textcolor(7);cprintf("FAMILY ROOM");
                  			gotoxy(85,13+x);gets(harga[3]);
                  			while(true){
                  			   if (strlen(harga[3])==0){
                        			gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(700);
                           		gotoxy(45,37);textbackground(7);cprintf("                  ");
                           		gotoxy(85,13+x);textbackground(7);cprintf("          ");
                           		gotoxy(85,13+x);gets(harga[3]);
                        		}else if(valpendapatan(harga[3])>0){
                        			gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
                           		gotoxy(35,37);textbackground(7);cprintf("                                  ");
                           		gotoxy(85,13+x);textbackground(7);cprintf("          ");
                           		gotoxy(85,13+x);gets(harga[3]);
                        		}if (strlen(harga[3])<6 || strlen(harga[3])>8 ){
                        			gotoxy(35,37);textbackground(6);textcolor(4);cprintf("MINIMAL 6 DAN MAKSIMAL 8 DIGIT  ");Sleep(700);
                           		gotoxy(35,37);cprintf("                                             ");
                           		gotoxy(85,13+x);textbackground(7);cprintf("          ");
                           		gotoxy(85,13+x);gets(harga[3]);
                        		}else {
                        			break;
                        		}
                  			}
                  			break;
                     }else {
            					gotoxy(40,37);textbackground(6);textcolor(4);cprintf(" Inputan Salah !! ");Sleep(700);
                           gotoxy(40,37);textbackground(7);textcolor(7);cprintf("            ");
                  			gotoxy(61,33);textbackground(7);textcolor(7);cprintf("  ");
                           gotoxy(34,33); textbackground(7);textcolor(0);cprintf("Pilih kamar yang akan diubah :");z=masukan();

            			}
         		}
      	}
         for (int a=1;a<=33;a++){
         	for (int b=1;b<=3;b++){
            	gotoxy(33+a,31+b); textbackground(7);cprintf(" ");Sleep(20);
            }
         }


         char d;
         int e=1;

         gotoxy(35,33); textbackground(7);textcolor(0);cprintf("Anda yakin ingin mengubah?(Y/N) ");d=masukan();
            while(e!=0){
            	if(d=='Y' || d=='y'){
            		clrscr();
               	tampilanmenuadmin();

               	e=0;
            	}else if (d=='N' || d=='n'){
            		clrscr();
                 tampilanadmin();
               	e=0;
            	}else if (d=='0' || d=='0'){
            		clrscr();
               	tampilanadmin();
               	e=0;
            	}
            	else {
            		gotoxy(44,37);textbackground(6);textcolor(4);cprintf("Inputan Salah!!");Sleep(700);
         			gotoxy(44,37);textbackground(7);textcolor(4);cprintf("               ");
         			gotoxy(62,33);textbackground(7);cprintf("   ");
         			gotoxy(62,33);textbackground(7);textcolor(16);d=masukan();
            	}
         	}
}
//////////////////////////////TAMPILAN MENU ADMIN///////////////////////////////
void tampilanmenuadmin(){
      bingkai1();

      char a;
      for (int a=1;a<=30;a++){
			gotoxy(15,3);textbackground(7);textcolor(6); cprintf("@@@@   @@@@  @@@@   @@@@   @@   @      @    @   @@@@   @     @   @@@@   @@@@       ");
      	gotoxy(15,4);textbackground(7);textcolor(6); cprintf("@   @ @     @      @    @  @ @  @      @   @   @    @  @ @ @ @  @    @  @   @      ");
      	gotoxy(15,5);textbackground(7);textcolor(6); cprintf("@@@@  @@@@   @@@@  @@@@@@  @  @ @      @ @@    @@@@@@  @  @  @  @@@@@@  @ @@       ");
			gotoxy(15,6);textbackground(7);textcolor(6); cprintf("@     @          @ @    @  @   @@      @   @   @    @  @     @  @    @  @  @       ");
      	gotoxy(15,7);textbackground(7);textcolor(6); cprintf("@      @@@@  @@@@  @    @  @    @      @    @  @    @  @     @  @    @  @   @      ");//Sleep(30);
         gotoxy(10,8);textbackground(6);textcolor(0);cprintf("         H    A     R    T     A            H      O     T     E     L              ");
      }

    	gotoxy(35,14);textcolor(0); cprintf(">>> T I P E   K A M A R <<<");
    	for (int a=1;a<=80;a++){
   		for (int b=1;b<=2;b++){
         	gotoxy(9+a,15+b); textbackground(6);cprintf(" ");
      		gotoxy(11+a,14+b);textbackground(6);cprintf(" ");
            gotoxy(12,17);textbackground(7);textcolor(16); cprintf("   SUPERIOR ROOM                                          Rp. %s    /malam",harga[0]);
      	}
   	}
   	for (int a=1;a<=80;a++){
   		for (int b=1;b<=2;b++){
         	gotoxy(9+a,19+b); textbackground(6);cprintf(" ");
      		gotoxy(11+a,18+b);textbackground(6);cprintf(" ");
            gotoxy(12,21);textbackground(7);textcolor(16); cprintf("   DELUX ROOM                                             Rp. %s    /malam",harga[1]);
      	}
   	}
   	for (int a=1;a<=80;a++){
   		for (int b=1;b<=2;b++){
         	gotoxy(9+a,23+b); textbackground(7);cprintf(" ");
      		gotoxy(11+a,22+b);textbackground(6);cprintf(" ");
            gotoxy(12,25);textbackground(7);textcolor(16); cprintf("   VIP ROOM                                               Rp. %s   /malam",harga[2]);
      	}
   	}
   	for (int a=1;a<=80;a++){
   		for (int b=1;b<=2;b++){
         	gotoxy(9+a,27+b); textbackground(7);cprintf(" ");
      		gotoxy(11+a,26+b);textbackground(6);cprintf(" ");
            gotoxy(12,29);textbackground(7);textcolor(16); cprintf("   FAMILY ROOM                                            Rp. %s   /malam",harga[3]);
      	}
   	}

   	gotoxy(39,35);textbackground(6);textcolor(0);cprintf("Tekan 0 untuk kembali :");a=masukan();
		int b=1;

      while(b!=0){
     	 	if(a=='0'){
            clrscr();
   			tampilanadmin();
            b=0;
         }else {
      		gotoxy(45,37);textbackground(0);textcolor(7);cprintf(" Inputan Salah !! ");Sleep(700);
         	gotoxy(45,37);textbackground(7);cprintf("                   ");
         	gotoxy(61,35);textbackground(7);cprintf("             ");
         	gotoxy(61,35);textbackground(7);textcolor(16);a=masukan();
   		}
      }
}
////////////////////////////////DAFTAR PENYEWA//////////////////////////////////
void daftarpenyewa(){
		bingkai1();

      	textbackground(7);
         gotoxy(35,3); textcolor(6);cprintf("@@@@@@  @@@@   @    @  @   @   ");
    		gotoxy(35,4); textcolor(6);cprintf("  @    @    @  @@  @@  @   @   ");
    		gotoxy(35,5); textcolor(6);cprintf("  @    @@@@@@  @ @@ @  @   @   ");
    		gotoxy(35,6); textcolor(6);cprintf("  @    @    @  @    @   @@@    ");
    		gotoxy(34,7);textbackground(6);textcolor(0);cprintf(" H  A  R  T  A    H  O  T  E  L ");

       	for (int a=1;a<=22;a++){
   			for (int b=1;b<=20;b++){
         		gotoxy(4+a,10+b); textbackground(6);cprintf(" ");
            	gotoxy(5+a,8+b); textbackground(0);cprintf(" ");
   			}
    		}
         for (int a=1;a<=7;a++){
   			for (int b=1;b<=20;b++){
         		gotoxy(28+a,10+b); textbackground(6);cprintf(" ");
            	gotoxy(29+a,8+b); textbackground(0);cprintf(" ");
   			}
    		}
         for (int a=1;a<=15;a++){
   			for (int b=1;b<=20;b++){
         		gotoxy(37+a,10+b); textbackground(6);cprintf(" ");
            	gotoxy(38+a,8+b); textbackground(0);cprintf(" ");
   			}
    		}
         for (int a=1;a<=16;a++){
   			for (int b=1;b<=20;b++){
         		gotoxy(54+a,10+b); textbackground(6);cprintf(" ");
            	gotoxy(55+a,8+b); textbackground(0);cprintf(" ");
   			}
    		}
         for (int a=1;a<=16;a++){
   			for (int b=1;b<=20;b++){
         		gotoxy(72+a,10+b); textbackground(6);cprintf(" ");
            	gotoxy(73+a,8+b); textbackground(0);cprintf(" ");
   			}
    		}
         for (int a=1;a<=5;a++){
   			for (int b=1;b<=20;b++){
         		gotoxy(90+a,10+b); textbackground(6);cprintf(" ");
            	gotoxy(91+a,8+b); textbackground(0);cprintf(" ");
   			}
    		}
         gotoxy(14,10); textbackground(0);textcolor(7);cprintf("NAMA");
         gotoxy(31,10); textbackground(0);textcolor(7);cprintf("J K");
         gotoxy(41,10); textbackground(0);textcolor(7);cprintf("NO PONSEL");
         gotoxy(60,10); textbackground(0);textcolor(7);cprintf("ALAMAT");
         gotoxy(77,10); textbackground(0);textcolor(7);cprintf("CEK IN");
         gotoxy(92,10); textbackground(0);textcolor(7);cprintf("LAMA");
         for (int a=0;a<hitung;a++){
         	textbackground(7);
          	gotoxy(6,12+a); textcolor(16);cprintf("%d.",a+1);
            gotoxy(9,12+a); textcolor(16);cprintf("%s",nama1[a]);
    			gotoxy(32,12+a);textcolor(16);cprintf("%s",kelamin1[a]);
    			gotoxy(38,12+a);textcolor(16);cprintf("+628%s",nope1[a]);
    			gotoxy(58,12+a);textcolor(16);cprintf("%s",alamat1[a]);
            gotoxy(73,12+a);textcolor(16);cprintf("%s %s %s",tanggal1[a],bulan1[a],tahun1[a]);
            gotoxy(92,12+a);textcolor(16);cprintf("%s hr",lama1[a]);
         }
         char a;
       	gotoxy(45,35);textbackground(6);textcolor(16);cprintf("Tekan 0 untuk kembali:");a=masukan();
         int b=1;
      	while(b!=0){
     	 		if(a=='0'){
            	clrscr();
   				tampilanadmin();
            	b=0;
   			}else if(a=='x' || a=='X' ) {
         	  	exit(0);
            	b=0;
         	}else {
      			gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" Inputan Salah !! ");Sleep(700);
         	 	gotoxy(45,37);textbackground(7);cprintf("                   ");
         		gotoxy(67,35);textbackground(7);cprintf(" ");
         		gotoxy(67,35);textbackground(7);textcolor(16);a=masukan();
   		}
      }
}

///////////////////////////////HITUNG PENDAPATAN////////////////////////////////
void hitungpendapatan(){
		bingkai1();
   		char a[1];

      	textbackground(6);
         gotoxy(38,5);textcolor(16);cprintf("  PERHITUNGAN LABA RUGI  ");
         gotoxy(7,10);textcolor(16);cprintf("Pendapatan               ");
         gotoxy(7,11);textcolor(16);cprintf("Total pendapatan  :       ");
         gotoxy(70,11);textcolor(16);cprintf("Rp.");gets(pendapatan);

         gotoxy(3,39);textbackground(6);textcolor(0);cprintf("Tekan 0 untuk kembali");

           while(true){
            	if (strlen(pendapatan)==0){
      				gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(700);
            		gotoxy(45,37);textbackground(7);cprintf("                        ");
            		gotoxy(73,11);textbackground(7);textcolor(0);cprintf("                         ");
          			gotoxy(73,11);textcolor(0);gets(pendapatan);
      			}else if(valpendapatan(pendapatan)>0){
      				gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
          			gotoxy(35,37);textbackground(7);cprintf("                                  ");
               	gotoxy(73,11);textbackground(7);textcolor(0);cprintf("                      ");
          			gotoxy(73,11);textcolor(0);gets(pendapatan);
      			}else if (strlen(pendapatan)<6 || strlen(pendapatan)>10 ){
      	 			gotoxy(35,37);textbackground(6);textcolor(4);cprintf("MINIMAL 6 DAN MAKSIMAL 12 DIGIT  ");Sleep(700);
          			gotoxy(35,37);textbackground(7);cprintf("                                             ");
               	gotoxy(73,11);textbackground(7);textcolor(0);cprintf("                       ");
          			gotoxy(73,11);textcolor(0);gets(pendapatan);
            	}else {
            		break;
            	}

           }

         gotoxy(7,12); textbackground(6);textcolor(16);cprintf("Beban beban :             ");

         for (int a=1;a<=40;a++){
   			for (int b=1;b<=5;b++){
         		if (a==1 || a==2 || a==39 || a==40 || b==1 ||b==5){
         			gotoxy(30+a,30+b); textbackground(7);cprintf("%c",219);
            	}else {
            		gotoxy(30+a,30+b); textbackground(6);cprintf(" ");
            	}
      		}
   		}

      		gotoxy(37,33);textbackground(6);textcolor(16);cprintf("Jumlah Beban : ");gets(a);
               int e;

               while(true){
                  e=atoi(a);
                  textcolor(16);
            		if(e==1){
            			gotoxy(7,13);textbackground(7);textcolor(0);cprintf("1.");
                  	gotoxy(51,13);textbackground(7);textcolor(0);cprintf("Rp.");
                     break;
      				}else if(e==2){
                  	for(int a=0;a<2;a++){
                    		gotoxy(7,13+a);textbackground(7);cprintf("%d.",a+1);
                    		gotoxy(51,13+a);textbackground(7);cprintf("Rp.");
                    	}
                     break;
      				}else if(e==3){
               		for(int a=0;a<3;a++){
                    		gotoxy(7,13+a);textbackground(7);textcolor(0);cprintf("%d.",a+1);
                        gotoxy(51,13+a);textbackground(7);textcolor(0);cprintf("Rp.");
                     }
                     break;
                  }else if(e==4){
                  	for(int a=0;a<4;a++){
                    		gotoxy(7,13+a);textbackground(7);textcolor(0);cprintf("%d.",a+1);
                    		gotoxy(51,13+a);textbackground(7);textcolor(0);cprintf("Rp.");
                     }
                     break;
      				}else if(e==5){
               		for(int a=0;a<5;a++){
                    	 //	textbackground(7);
                    		gotoxy(7,13+a);textbackground(7);textcolor(0);cprintf("%d.",a+1);
                    		gotoxy(51,13+a);textbackground(7);textcolor(0);cprintf("Rp.");
                    	}
                     break;
                  }else {
            			gotoxy(45,37);textcolor(4);cprintf(" Inputan Salah !! ");Sleep(700);
                  	gotoxy(45,37);printf("                      ");
                     gotoxy(37,33);textbackground(7);printf("                      ");
                  	gotoxy(37,33);textbackground(7);textcolor(0);cprintf("Jumlah Beban : ");gets(a);
                	}
                }


            textbackground(6);
      		gotoxy(6,25);textcolor(4);cprintf("1.Beban perlengkapan ");
            gotoxy(6,26);textcolor(4);cprintf("2.Beban peralatan ");
            gotoxy(6,27);textcolor(4);cprintf("3.Beban gaji karyawan");
            gotoxy(6,28);textcolor(4);cprintf("4.Beban listrik,air,telepon");
            gotoxy(6,29);textcolor(4);cprintf("5.Beban lain lain");



                    int b;
                    b=atoi(a);
                   for(int x=1;x<=b;x++){
                  	  		for (int a=1;a<=31;a++){
   									for (int b=1;b<=3;b++){
         								gotoxy(32+a,31+b); textbackground(6);cprintf(" ");Sleep(20);
      								}
   								}
                           char c;
            							gotoxy(39,33); textbackground(6);textcolor(16);cprintf("Pilih beban :");c=getche();
                   	int he=1;
                         while(he!=0){
         							if(c=='1'){
            							gotoxy(9,12+x);textbackground(6);textcolor(16);cprintf("Beban perlengkapan");
            							gotoxy(55,12+x);textbackground(6);textcolor(16);gets(beban);
                              	while(true){
            								if (strlen(beban)==0){
      											gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(700);
            									gotoxy(45,37);textbackground(7);cprintf("                  ");
            									gotoxy(55,12+x);textbackground(7);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
      										}else if(valpendapatan(beban)>0){
      											gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
            									gotoxy(35,37);textbackground(7);cprintf("                                  ");
               								gotoxy(55,12+x);textbackground(7);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
      										}else if (strlen(beban)<6 || strlen(beban)>10 ){
      	 										gotoxy(35,37);textbackground(6);textcolor(4);cprintf("MINIMAL 6 DAN MAKSIMAL 12 DIGIT  ");Sleep(700);
          										gotoxy(35,37);cprintf("                                             ");
               								gotoxy(55,12+x);textbackground(7);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
            								}else {
            									break;
                              		}
                             		}
                           		he=0;
                              }else if(c=='2'){
            	 						gotoxy(9,12+x);textbackground(6);textcolor(16);cprintf("Beban peralatan");
            							gotoxy(55,12+x);textbackground(6);textcolor(16);gets(beban);
                                 while(true){
            								if (strlen(beban)==0){
      											gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(700);
            									gotoxy(45,37);textbackground(6);cprintf("                  ");
            									gotoxy(55,12+x);textbackground(6);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
      										}else if(valpendapatan(beban)>0){
      											gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
            									gotoxy(35,37);textbackground(6);cprintf("                                  ");
               								gotoxy(55,12+x);textbackground(6);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
      										}else if (strlen(beban)<6 || strlen(beban)>10 ){
      	 										gotoxy(35,37);textbackground(6);textcolor(4);cprintf("MINIMAL 6 DAN MAKSIMAL 12 DIGIT  ");Sleep(700);
          										gotoxy(35,37);cprintf("                                             ");
               								gotoxy(55,12+x);textbackground(6);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
            								}else {
            									break;
                              		}
                             		}
                           		he=0;
      								}else if(c=='3'){
            							gotoxy(9,12+x);textbackground(6);textcolor(16);cprintf("Beban gaji");
            							gotoxy(55,12+x);textbackground(6);textcolor(16);gets(beban);
                           		while(true){
            								if (strlen(beban)==0){
      											gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(700);
            									gotoxy(45,37);textbackground(6);cprintf("                  ");
            									gotoxy(55,12+x);textbackground(6);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
      										}else if(valpendapatan(beban)>0){
      											gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
            									gotoxy(35,37);textbackground(6);cprintf("                                  ");
               								gotoxy(55,12+x);textbackground(6);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
      										}else if (strlen(beban)<6 || strlen(beban)>10 ){
      	 										gotoxy(35,37);textbackground(6);textcolor(4);cprintf("MINIMAL 6 DAN MAKSIMAL 12 DIGIT  ");Sleep(700);
          										gotoxy(35,37);cprintf("                                             ");
               								gotoxy(55,12+x);textbackground(6);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
            								}else {
            									break;
                              		}
                             		}
                           		he=0;
      								}else if(c=='4'){
            							gotoxy(9,12+x);textbackground(6);textcolor(16);cprintf("Beban listrik air dan telepon");
            							gotoxy(55,12+x);textbackground(6);textcolor(16);gets(beban);
                           		while(true){
            								if (strlen(beban)==0){
      											gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(700);
            									gotoxy(45,37);textbackground(6);cprintf("                  ");
            									gotoxy(55,12+x);textbackground(6);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
      										}else if(valpendapatan(beban)>0){
      											gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
            									gotoxy(35,37);textbackground(6);cprintf("                                  ");
               								gotoxy(55,12+x);textbackground(6);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
      										}else if (strlen(beban)<6 || strlen(beban)>10 ){
      	 										gotoxy(35,37);textbackground(6);textcolor(4);cprintf("MINIMAL 6 DAN MAKSIMAL 12 DIGIT  ");Sleep(700);
          										gotoxy(35,37);cprintf("                                             ");
               								gotoxy(55,12+x);textbackground(6);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
            								}else {
            									break;
                              		}
                             		}
                           		he=0;
      								}else if(c=='5'){
            							gotoxy(9,12+x);textbackground(6);textcolor(16);cprintf("Beban lain lain");
            							gotoxy(55,12+x);textbackground(6);textcolor(16);gets(beban);
                           		while(true){
            								if (strlen(beban)==0){
      											gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(700);
            									gotoxy(45,37);textbackground(6);cprintf("                  ");
            									gotoxy(55,12+x);textbackground(6);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
      										}else if(valpendapatan(beban)>0){
      											gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
            									gotoxy(35,37);textbackground(6);cprintf("                                  ");
               								gotoxy(55,12+x);textbackground(6);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
      										}else if (strlen(beban)<6 || strlen(beban)>10 ){
      	 										gotoxy(35,37);textbackground(6);textcolor(4);cprintf("MINIMAL 6 DAN MAKSIMAL 12 DIGIT  ");Sleep(700);
          										gotoxy(35,37);cprintf("                                             ");
               								gotoxy(55,12+x);textbackground(6);cprintf("            ");
          										gotoxy(55,12+x);gets(beban);
            								}else {
            									break;
                              		}
                             		}
                           		he=0;
      								}else {
            							gotoxy(40,37);textcolor(4);cprintf(" Inputan Salah !! ");Sleep(700);
                  					gotoxy(40,37);printf("            ");
            							gotoxy(55,12);printf("     ");


                     			}
                         }

                   beb=atof(beban);
                   tamp1+=beb;
                  }
               	penda=atof(pendapatan);
                  gotoxy(69,17);printf("(Rp.%.f)",tamp1);
                  gotoxy(69,18);printf("______________",tamp1);
               	if(penda>tamp1){
                     tamp2=penda-tamp1;
                     gotoxy(7,19);printf("Laba anda  :");
                     gotoxy(70,19);printf("Rp.%.f",tamp2);

                  }else if(penda<tamp1){
                      tamp2=tamp1-penda;
                     gotoxy(7,19);printf("Anda mengalami kerugian  :");
                     gotoxy(70,19);printf("Rp.%.f",tamp2);
                  }else if(penda==tamp1){
                     gotoxy(7,19);printf("Perusahaan tidak mendapat keuntungan atau rugi");
                  }
         char z;
       	gotoxy(45,35);textbackground(6);textcolor(16);cprintf("Tekan 0 untuk kembali:");z=masukan();
         int y=1;
      	while(y!=0){
     	 		if(z=='0'){
            	clrscr();
   				tampilanadmin();
            	y=0;

         	}else {
      			gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" Inputan Salah !! ");Sleep(700);
         		gotoxy(45,37);textbackground(6);cprintf("             ");
         		gotoxy(60,35);textbackground(6);cprintf("     ");
         		gotoxy(60,35);textbackground(6);textcolor(16);z=masukan();
   		}
      }
}
//===============================================================================DAFTAR KAMAR======================================================================//
void daftarkamar(){
		clrscr();
		bingkai1();

      gotoxy(27,3); textcolor(6);cprintf("@    @    @@@   @       @   @@@   @@@@        ");
      gotoxy(27,4); textcolor(6);cprintf("@   @    @   @  @ @   @ @  @   @  @   @       ");
      gotoxy(27,5); textcolor(6);cprintf("@ @@     @@@@@  @  @ @  @  @@@@@  @@@@        ");
      gotoxy(27,6); textcolor(6);cprintf("@   @    @   @  @   @   @  @   @  @   @       ");
      gotoxy(27,7); textcolor(6);cprintf("@    @   @   @  @       @  @   @  @    @      ");
      gotoxy(27,8);textbackground(6);textcolor(0);cprintf("H   A   R   T   A    H   O   T   E   L   ");


      gotoxy(17,10);textbackground(6);textcolor(7);printf(">TIPE KAMAR<");
      for (int a=1;a<=25;a++){
   			for (int b=1;b<=4;b++){
      			if (a==1 ||a==25|| b==1 || b==4 ){

         			gotoxy(9+a,10+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(9+a,16+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(9+a,22+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(9+a,28+b);textbackground(6);textcolor(0);cprintf("%c",219);
          		}else {
      			 	gotoxy(9+a,10+b);textbackground(7);cprintf(" ");
                  gotoxy(9+a,16+b);textbackground(7);cprintf(" ");
                  gotoxy(9+a,22+b);textbackground(7);cprintf(" ");
                  gotoxy(9+a,28+b);textbackground(7);cprintf(" ");
      			}
      		}Sleep(20);
   		}
         gotoxy(42,10);textbackground(6);textcolor(7);printf(">HARGA<");
         for (int a=1;a<=15;a++){
   			for (int b=1;b<=4;b++){
      			if (a==1 || a==15 || b==1 || b==4){
         	    	gotoxy(37+a,10+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(37+a,16+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(37+a,22+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(37+a,28+b);textbackground(6);textcolor(0);cprintf("%c",219);
              	}else {
      				gotoxy(37+a,10+b);textbackground(7);cprintf(" ");
                  gotoxy(37+a,16+b);textbackground(7);cprintf(" ");
                  gotoxy(37+a,22+b);textbackground(7);cprintf(" ");
                  gotoxy(37+a,28+b);textbackground(7);cprintf(" ");
      			}
      		}Sleep(20);
   		}

         gotoxy(57,10);textbackground(6);textcolor(7);printf(">KUOTA<");
         gotoxy(68,10);textbackground(6);textcolor(7);printf(">TERPAKAI<");
         gotoxy(80,10);textbackground(6);textcolor(7);printf(">TERSISA<");
         for (int a=1;a<=10;a++){
   			for (int b=1;b<=4;b++){
      			if (a==1|| a==10 || b==1 || b==4){
         	      gotoxy(55+a,10+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(55+a,16+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(55+a,22+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(55+a,28+b);textbackground(6);textcolor(0);cprintf("%c",219);
             		gotoxy(67+a,10+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(67+a,16+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(67+a,22+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(67+a,28+b);textbackground(6);textcolor(0);cprintf("%c",219);
         			gotoxy(79+a,10+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(79+a,16+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(79+a,22+b);textbackground(6);textcolor(0);cprintf("%c",219);
                  gotoxy(79+a,28+b);textbackground(6);textcolor(0);cprintf("%c",219);Sleep(20);

         		}else {
      				gotoxy(55+a,10+b);textbackground(7);cprintf(" ");
                  gotoxy(55+a,16+b);textbackground(7);cprintf(" ");
                  gotoxy(55+a,22+b);textbackground(7);cprintf(" ");
                  gotoxy(55+a,28+b);textbackground(7);cprintf(" ");
               	gotoxy(67+a,10+b);textbackground(7);cprintf(" ");
                  gotoxy(67+a,16+b);textbackground(7);cprintf(" ");
                  gotoxy(67+a,22+b);textbackground(7);cprintf(" ");
                  gotoxy(67+a,28+b);textbackground(7);cprintf(" ");
      				gotoxy(79+a,10+b);textbackground(7);cprintf(" ");
                  gotoxy(79+a,16+b);textbackground(7);cprintf(" ");
                  gotoxy(79+a,22+b);textbackground(7);cprintf(" ");
                  gotoxy(79+a,28+b);textbackground(7);cprintf(" ");

      			}
      		}Sleep(20);
   		}

						gotoxy(14,13);textbackground(7);textcolor(0);cprintf("1.%s",kamar[0]);
                  gotoxy(14,19);textbackground(7);textcolor(0);cprintf("2.%s",kamar[1]);
                  gotoxy(14,25);textbackground(7);textcolor(0);cprintf("3.%s",kamar[2]);
                  gotoxy(14,31);textbackground(7);textcolor(0);cprintf("4.%s",kamar[3]);
                  gotoxy(39,13);textbackground(7);textcolor(0);cprintf("Rp.%s",harga[0]);
                  gotoxy(39,19);textbackground(7);textcolor(0);cprintf("Rp.%s",harga[1]);
                  gotoxy(39,25);textbackground(7);textcolor(0);cprintf("Rp.%s",harga[2]);
                  gotoxy(39,31);textbackground(7);textcolor(0);cprintf("Rp.%s",harga[3]);
						gotoxy(59,13);textbackground(7);textcolor(0);cprintf("20");
                  gotoxy(59,19);textbackground(7);textcolor(0);cprintf("15");
                  gotoxy(59,25);textbackground(7);textcolor(0);cprintf("10");
                  gotoxy(59,31);textbackground(7);textcolor(0);cprintf("6");
                  gotoxy(72,13);textbackground(7);cprintf("%d",sisasuperior);
                  gotoxy(72,19);textbackground(7);cprintf("%d",sisadelux);
                  gotoxy(72,25);textbackground(7);cprintf("%d",sisavip);
                  gotoxy(72,31);textbackground(7);cprintf("%d",sisafamily);
         			gotoxy(83,13);textbackground(7);textcolor(0);cprintf("%d",kuota[0]);
                  gotoxy(83,19);textbackground(7);textcolor(0);cprintf("%d",kuota[1]);
                  gotoxy(83,25);textbackground(7);textcolor(0);cprintf("%d",kuota[2]);
                  gotoxy(83,31);textbackground(7);textcolor(0);cprintf("%d",kuota[3]);


}
void  daftarkamaradmin(){
 		daftarkamar();
						char z;
       				int y=1;

                  gotoxy(45,35);textbackground(6);textcolor(16);cprintf("Tekan 0 untuk kembali:");z=masukan();

      			while(y!=0){
     	 				if(z=='0'){
            			clrscr();
   						tampilanadmin();
            			y=0;

         			}else {
      					gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" Inputan Salah !! ");Sleep(700);
         				gotoxy(45,37);textbackground(7);cprintf("                     ");
         				gotoxy(67,35);textbackground(6);cprintf(" ");
         				gotoxy(67,35);textbackground(7);textcolor(16);z=masukan();
   					}
      			}
}




///////////////////// pilihan pengguna ////////////////////////////////////////

void tampilanpengguna(){
   	bingkai1();

      textcolor(6);
      gotoxy(20,3);cprintf("@@@@@   @@@@  @@   @   @@@@   @@@@  @    @  @@   @   @@@@      ");
      gotoxy(20,4);cprintf("@    @ @      @ @  @  @      @      @    @  @ @  @  @    @     ");
      gotoxy(20,5);cprintf("@@@@@  @@@@@  @  @ @  @ @@@  @ @@@  @    @  @  @ @  @@@@@@     ");
      gotoxy(20,6);cprintf("@      @      @   @@  @   @  @   @  @    @  @   @@  @    @     ");
      gotoxy(20,7);cprintf("@       @@@@  @    @   @@@@   @@@@   @@@@   @    @  @    @     ");
      gotoxy(20,8);textbackground(6);textcolor(0);cprintf("           H  A  R  T  A    H  O  T  E  L                 ");

   	for (int a=1;a<=25;a++){
   		for (int b=1;b<=4;b++){
      		if (a==1 || a==25 || b==1 || b==4){
         		gotoxy(38+a,12+b);textcolor(0);cprintf("%c",219);
         	}else{
      			gotoxy(38+a,12+b);textbackground(6);cprintf(" ");
            }
      	}
   	}
   	for (int a=1;a<=25;a++){
   		for (int b=1;b<=4;b++){
      		if (a==1 || a==25 || b==1 || b==4){
         		gotoxy(38+a,17+b);textcolor(0);cprintf("%c",219);
         	}
         	else{
      			gotoxy(38+a,17+b);textbackground(6);cprintf(" ");
      		}
      	}
   	}
   	for (int a=1;a<=25;a++){
   		for (int b=1;b<=4;b++){
      		if (a==1 || a==25 || b==1 || b==4){
         		gotoxy(38+a,22+b);textcolor(0);cprintf("%c",219);
         	}
         	else{
      			gotoxy(38+a,22+b);textbackground(6);cprintf(" ");
      		}
      	}
   	}

      	char z;
       		gotoxy(35,12);textbackground(6);textcolor(0);cprintf("Apakah anda ingin lanjut(y/n) :");z=masukan();
     	 		if(z=='y' || z=='Y'){
                  gotoxy(35,12);textbackground(7);textcolor(0);cprintf("                                    ");
   		gotoxy(45,15);textcolor(0);textbackground(6);cprintf("1. Masuk");
   		gotoxy(45,20);textcolor(0);textbackground(6);cprintf("2. Buat Akun");
   		gotoxy(43,25);textcolor(0);textbackground(6);cprintf("Masukan Pilihan :");

   	char a;
      int b=1;
      gotoxy(60,25);textbackground(6);textcolor(0);a=masukan();

      while(b!=0){
         if (a=='1'){
         	clrscr();
            tampilanlogin();
            b=0;
         }else if(a=='2') {
         	clrscr();
            tampilanbuatakun();
            b=0;
     	 	}else if(a=='0'){
            clrscr();
   			tampilanpilihanlogin();
            b=0;

         }else {
      		gotoxy(45,37);textbackground(3);textcolor(4);cprintf(" Inputan Salah !! ");Sleep(700);
         	gotoxy(45,37);textbackground(3);cprintf("             ");
         	gotoxy(60,25);textbackground(7);cprintf("   ");
         	gotoxy(60,25);textbackground(7);textcolor(16);a=masukan();
   		}
      }
      }else if(z=='n' || z=='N'){
      clrscr();
      tampilanpilihanlogin();
      }
}

///////////////////////////////login pengguna//////////////////////////////////
void tampilanlogin(){
 bingkai_login();
      textcolor(6);
      gotoxy(20,3);cprintf("@@@@@   @@@@  @@   @   @@@@   @@@@  @    @  @@   @   @@@@      ");
      gotoxy(20,4);cprintf("@    @ @      @ @  @  @      @      @    @  @ @  @  @    @     ");
      gotoxy(20,5);cprintf("@@@@@  @@@@@  @  @ @  @ @@@  @ @@@  @    @  @  @ @  @@@@@@     ");
      gotoxy(20,6);cprintf("@      @      @   @@  @   @  @   @  @    @  @   @@  @    @     ");
      gotoxy(20,7);cprintf("@       @@@@  @    @   @@@@   @@@@   @@@@   @    @  @    @     ");
      gotoxy(20,8);textbackground(6);textcolor(0);cprintf("           H  A  R  T  A    H  O  T  E  L                 ");

      char z;
       		gotoxy(35,18);textbackground(6);textcolor(0);cprintf("Apakah anda ingin lanjut(y/n) :");z=masukan();
     	 		if(z=='y' || z=='Y'){
                  gotoxy(35,18);textbackground(7);textcolor(0);cprintf("                                    ");

      char pengguna[20]="cahayahartati";
      char pass[20]="070601";
      char peng[20];
      char pas[20];
      textbackground(7);

      	 gotoxy(37,22);  textcolor(16);cprintf("Username: ");
          gotoxy(37,26);  textcolor(16);cprintf("Password: ");

      gotoxy(46,22);gets(peng);
      gotoxy(46,26);gets(pas);
      int b;
      while(b!=0){
     		if ((strcmp(peng,pengguna)==0) && (strcmp(pas,pass)==0)){
          	gotoxy(40,37);textbackground(6);textcolor(0);cprintf(" ANDA BERHASIL MASUK ");Sleep(700);
            gotoxy(40,37);textbackground(7);cprintf("                     ");
          	clrscr();
          	tampilanpilihan();
            b=0;
      	}else	if ((strcmp(peng,user)==0) && (strcmp(pas,sandi)==0)){
          	gotoxy(40,37);textbackground(6);textcolor(0);cprintf(" ANDA BERHASIL MASUK ");Sleep(700);
            gotoxy(40,37);textbackground(7);cprintf("                     ");
          	clrscr();
          	tampilanpilihan();
            b=0;
      	}else{
      		gotoxy(35,37);textbackground(6);textcolor(4);cprintf("USERNAME ATAU PASSWORD SALAH!!");Sleep(700);
            gotoxy(35,37);textbackground(7);textcolor(4);cprintf("                              ");
            gotoxy(46,22);textbackground(7);cprintf("                   ");
            gotoxy(46,26);textbackground(7);cprintf("                   ");
            gotoxy(46,22);gets(peng);
      		gotoxy(46,26);gets(pas);
      	}
      }
      }else if(z=='n' || z=='N'){
      	clrscr();
         tampilanpilihanlogin();
      }


}
//---------------------------------TAMPILAN PILIHAN---------------------------//
void tampilanpilihan(){
		clrscr();
      bingkai1();
   	   gotoxy(36,5);textcolor(6);cprintf("@     @   @@@@  @@   @  @    @  ");
    		gotoxy(36,6);textcolor(6);cprintf("@@   @@  @      @ @  @  @    @  ");
    		gotoxy(36,7);textcolor(6);cprintf("@ @ @ @  @@@@   @  @ @  @    @  ");
    		gotoxy(36,8);textcolor(6);cprintf("@  @  @  @      @   @@  @    @  ");
         gotoxy(36,9);textcolor(6);cprintf("@     @   @@@@  @    @   @@@@   ");
    		gotoxy(35,10);textbackground(6);textcolor(0);cprintf("  H  A  R  T  A   H  O  T  E  L   ");


      	for (int a=1;a<=30;a++){
   			for (int b=1;b<=3;b++){
         	  	gotoxy(12+a,16+b);textbackground(6);cprintf(" ");
      			gotoxy(14+a,15+b);textbackground(0);cprintf(" ");
            	gotoxy(18,18);textbackground(6);textcolor(16);cprintf("1. Tentang Kami");
      		}
   		}
   		for (int a=1;a<=30;a++){
   			for (int b=1;b<=3;b++){
         	  	gotoxy(12+a,25+b);textbackground(6);cprintf(" ");
      			gotoxy(14+a,24+b);textbackground(0);cprintf(" ");
            	gotoxy(18,27);textbackground(6);textcolor(16);cprintf("2. Pesan Kamar");
      		}
   		}
   		for (int a=1;a<=30;a++){
   			for (int b=1;b<=3;b++){
         		gotoxy(50+a,16+b);textbackground(6);cprintf(" ");
      			gotoxy(52+a,15+b);textbackground(0);cprintf(" ");
            	gotoxy(56,18);textbackground(6);textcolor(16);cprintf("3. Daftar kamar");
      		}
   		}
   		for (int a=1;a<=30;a++){
   			for (int b=1;b<=3;b++){
         	  	gotoxy(50+a,25+b);textbackground(6);cprintf(" ");
      			gotoxy(52+a,24+b);textbackground(0);cprintf(" ");
            	gotoxy(52,27);textbackground(6);textcolor(16);cprintf("4. Keluar");
      		}
   		}
   		for (int a=1;a<=30;a++){
   			for (int b=1;b<=3;b++){
         		gotoxy(30+a,32+b);textbackground(6);cprintf(" ");
      			gotoxy(32+a,31+b);textbackground(0);cprintf(" ");
      		}
   		}
         char a;
      	int b=1;

       	gotoxy(36,34);textbackground(6);textcolor(16);cprintf("Masukan pilihan : ");
         gotoxy(53,34);a=masukan();
       	while(b!=0){
       			if(a=='1'){
       				clrscr();
                  tentangkami();
                    b=0;
       		  }else if(a=='2') {
         			clrscr();
          		  registrasi();
           			 b=0;
              }else if(a=='3') {
         			clrscr();
            		daftarkamaruser();
           			 b=0;
         		}else if(a=='4'){
               	clrscr();
                  keluar();
                  exit(0);
     	 	   	}else if(a=='0'){
           			 clrscr();
   					tampilanpengguna();
           			 b=0;

         			exit(0);
            		b=0;
        			 }else {
      			gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" Inputan Salah !! ");Sleep(700);
         		gotoxy(45,37);textbackground(7);cprintf("                      ");
         		gotoxy(53,34);textbackground(6);cprintf("        ");
         		gotoxy(53,34);textbackground(6);textcolor(0);a=masukan();
   				}
     		   }
}

void daftarkamaruser(){
      clrscr();
      bingkai1();
		daftarkamar();
      char a;
      int b=1;

      gotoxy(38,35);textbackground(6);textcolor(0);cprintf("Masukan pilihan :");Sleep(50);a=masukan();

      while(b!=0){
         if(a=='0'){
            clrscr();
   			tampilanpilihan();
            b=0;
         	exit(0);
            textbackground(6);
            b=0;
         }else {
      		gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" Inputan Salah !! ");Sleep(700);
         	gotoxy(45,37);textbackground(7);cprintf("                      ");
         	gotoxy(55,34);textbackground(7);cprintf("     ");
         	gotoxy(55,34);textbackground(7);textcolor(16);a=masukan();
   		}
      }
}
///////////////////////////////tentang kami/////////////////////////////////////
void tentangkami(){
textcolor(0);
	gotoxy(25,5);cprintf(" #  #  ###  ###  ##### ###       #  #  ###  #####  ### #          "); Sleep(200);
   gotoxy(25,6);cprintf(" #  # #   # #  #   #  #   #      #  # #   #   #   #    #          "); Sleep(200);
   gotoxy(25,7);cprintf(" #### ##### #  #   #  #####      #### #   #   #   ###  #          "); Sleep(200);
   gotoxy(25,8);cprintf(" #  # #   # # #    #  #   #      #  # #   #   #   #    #          "); Sleep(200);
   gotoxy(25,9);cprintf(" #  # #   # #  #   #  #   #      #  #  ###    #    ### ####       "); Sleep(200);
   for(int a=0;a<60;a++){
      textbackground(0);
   	gotoxy(25+a,10);cprintf("%c",219);
   }

textbackground(6);
gotoxy(20,18);textcolor(0);cprintf("       Harta Hotel merupakan salah satu hotel terbaik di Kota Sibolga         ");
gotoxy(20,20);textcolor(0);cprintf("       Harta Hotel juga sudah mendapat penghargaan kategori penilaian         ");
gotoxy(20,22);textcolor(0);cprintf("       kebersihan hotel.Berlokasi di tengah Kota Sibolga dan mudah            ");
gotoxy(20,24);textcolor(0);cprintf("       untuk diakses,serta pemandangan laut dan pemandangan kota yang         ");
gotoxy(20,26);textcolor(0);cprintf("       dapat memanjakan mata                                                  ");
gotoxy(20,33);textcolor(0);cprintf("       Tekan 0 untuk kembali                                                  ");

char a;
      int b=1;

      a=masukan();

      while(b!=0){
          if(a=='0'){
            clrscr();
   			tampilanpilihan();
            b=0;
   		}else if(a=='x' || a=='X' ) {
         	exit(0);
            b=0;
         }else {
      		gotoxy(45,37);textbackground(3);textcolor(4);cprintf(" INVALID !! ");Sleep(700);
         	gotoxy(45,37);textbackground(3);cprintf("             ");
         	gotoxy(61,35);textbackground(7);cprintf("     ");
         	gotoxy(61,35);textbackground(7);textcolor(16);a=masukan();
   		}
      }
}
///////////////////////////////TAMPILAN MENU////////////////////////////////////
void tampilanmenu(){
      bingkai1();

      for (int a=1;a<=30;a++){

			gotoxy(13,3);textbackground(7);textcolor(6); cprintf("@@@@   @@@@  @@@@   @@@@   @@   @      @    @   @@@@   @     @   @@@@   @@@@       ");
      	gotoxy(13,4);textbackground(7);textcolor(6); cprintf("@   @ @     @      @    @  @ @  @      @   @   @    @  @ @ @ @  @    @  @   @      ");
      	gotoxy(13,5);textbackground(7);textcolor(6); cprintf("@@@@  @@@@   @@@@  @@@@@@  @  @ @      @ @@    @@@@@@  @  @  @  @@@@@@  @ @@       ");
			gotoxy(13,6);textbackground(7);textcolor(6); cprintf("@     @          @ @    @  @   @@      @   @   @    @  @     @  @    @  @  @       ");
      	gotoxy(13,7);textbackground(7);textcolor(6); cprintf("@      @@@@  @@@@  @    @  @    @      @    @  @    @  @     @  @    @  @   @     ");Sleep(30);
         gotoxy(13,9);textbackground(6);textcolor(0); cprintf("             H    A     R    T     A        H      O     T     E     L       ");
      }

    	for (int b=0;b<96;b++){
   		gotoxy(3+b,38);textbackground(6);textcolor(0);cprintf("%c",30);Sleep(5);
   	}
    	gotoxy(35,14);textcolor(0); cprintf(">>> T I P E   K A M A R <<<");
    	for (int a=1;a<=80;a++){
   		for (int b=1;b<=2;b++){
         	gotoxy(9+a,15+b); textbackground(7);cprintf(" ");
      		gotoxy(11+a,14+b);textbackground(6);cprintf(" ");
            gotoxy(12,17);textbackground(7);textcolor(16); cprintf("1. SUPERIOR                                              Rp. %s    /malam",harga[0]);
      	}
   	}
   	for (int a=1;a<=80;a++){
   		for (int b=1;b<=2;b++){
         	gotoxy(9+a,19+b); textbackground(7);cprintf(" ");
      		gotoxy(11+a,18+b);textbackground(6);cprintf(" ");
            gotoxy(12,21);textbackground(7);textcolor(16); cprintf("2. DELUX                                                 Rp. %s    /malam",harga[1]);
      	}
   	}
   	for (int a=1;a<=80;a++){
   		for (int b=1;b<=2;b++){
         	gotoxy(9+a,23+b); textbackground(7);cprintf(" ");
      		gotoxy(11+a,22+b);textbackground(6);cprintf(" ");
            gotoxy(12,25);textbackground(7);textcolor(16); cprintf("3. VIP                                                   Rp. %s   /malam",harga[2]);
      	}
   	}
   	for (int a=1;a<=80;a++){
   		for (int b=1;b<=2;b++){
         	gotoxy(9+a,27+b); textbackground(7);cprintf(" ");
      		gotoxy(11+a,26+b);textbackground(6);cprintf(" ");
            gotoxy(12,29);textbackground(7);textcolor(16); cprintf("4. FAMILY ROOM                                           Rp. %s   /malam",harga[3]);
      	}
   	}
   	for (int a=1;a<=30;a++){
   		for (int b=1;b<=2;b++){
         	gotoxy(35+a,33+b);textbackground(7);cprintf(" ");
      		gotoxy(37+a,32+b);textbackground(6);cprintf(" ");
      	}
   	}

   	gotoxy(39,35);textbackground(7);textcolor(16);cprintf("Masukan Pilihan anda :");pilihan=masukan();

         int b=1;

      while(b!=0){
     	 	if(pilihan=='0'){
   			clrscr();
      		tampilanpilihan();
            b=0;
   		}else if(pilihan=='1'){
   			u=0;
            clrscr();
            kamarTerpilih=1;
      		superior();
         	b=0;
   		}else if(pilihan=='2'){
   			u=1;
            clrscr();
            kamarTerpilih=2;
      	 	delux();
         	b=0;
   		}else if(pilihan=='3'){
   			u=2;
            clrscr();
            kamarTerpilih=3;
      	 	vip();
            b=0;
   		}else if(pilihan=='4'){
   			u=3;
            clrscr();
            kamarTerpilih=4;
      	 	familyroom();
            b=0;
   		}else if(pilihan=='x' || pilihan=='X' ){
   			exit(0);
            b=0;
   		}else {
      		gotoxy(45,37);textbackground(3);textcolor(4);cprintf(" Inputan Salah !! ");Sleep(700);
         	gotoxy(45,37);textbackground(3);cprintf("             ");
         	gotoxy(61,35);textbackground(7);cprintf("     ");
         	gotoxy(61,35);textbackground(7);textcolor(16);pilihan=masukan();
   		}
      }
}
////////////////////////////////SUPERIOR////////////////////////////////////////
void superior(){
		bingkai1();


         har=atof(harga[0]);
         kuot=kuota[0];
      	textbackground(7);
			gotoxy(30,3);textcolor(6);						  cprintf("  @@@@ @    @ @@@@   @@@@  @@@@  @  @@@@  @@@@     ");
         gotoxy(30,4);textcolor(6);						  cprintf(" @     @    @ @   @ @      @   @ @ @    @ @   @    ");
         gotoxy(30,5);textcolor(6);						  cprintf("  @@@  @    @ @@@@  @@@@   @@@@  @ @    @ @@@@     ");
         gotoxy(30,6);textcolor(6);					     cprintf("     @ @    @ @     @      @  @  @ @    @ @   @    ");
         gotoxy(30,7);textcolor(6);						  cprintf(" @@@@   @@@@  @      @@@@  @   @ @  @@@@  @    @   ");
         gotoxy(30,8);textbackground(6);textcolor(0);cprintf("       H     A    R  T  A   H  O  T  E  L         ");


   		for (int a=1;a<=20;a++){
   			for (int b=1;b<=10;b++){
         		gotoxy(10+a,13+b); textbackground(6);cprintf(" ");
               gotoxy(11+a,14+b); textbackground(6);cprintf(" ");
   			}
    		}
         textcolor(16);
         textbackground(6);
         gotoxy(13,16); cprintf("  Fasilitas : ");
         gotoxy(13,18); cprintf("1. Televisi ");
         gotoxy(13,20); cprintf("2. AC       ");
         gotoxy(13,22); cprintf("3. Free Wifi ");

         char a;
			gotoxy(13,35);textbackground(6);textcolor(0);cprintf("Anda ingin memesan? (Y/N)");a=masukan();
         int b=1;
            while (b!=0){
				if(a=='Y' || a=='y'){
              	pembayaran();
               b=0;
				}else if (a=='n' || a=='N') {
               clrscr();
            	tampilanmenu();

            }else{
      			gotoxy(40,37);textcolor(4);cprintf(" Inputan Salah!! ");Sleep(700);
               gotoxy(40,37);textbackground(6);textcolor(0);cprintf("            ");
      			gotoxy(38,35);a=masukan();
            }
            }
}

////////////////////////////////////DELUX ROOM//////////////////////////////////
void delux(){
		bingkai1();

      har=atof(harga[1]);
      kuot=kuota[1];
   	textcolor(6);
   	gotoxy(23,3);										  cprintf("  @@@@    @@@@  @      @    @  @     @          ");
   	gotoxy(23,4);										  cprintf("  @   @  @      @      @    @   @   @           ");
   	gotoxy(23,5);									     cprintf("  @   @  @@@@   @      @    @     @             ");
   	gotoxy(23,6);										  cprintf("  @   @  @      @      @    @   @   @           ");
   	gotoxy(23,7);										  cprintf("  @@@@    @@@@  @@@@@   @@@@   @     @          ");
      gotoxy(23,8);textbackground(6);textcolor(0);cprintf("   H  A  R  T  A   H  O  T  E  L         ");

   	for (int a=1;a<=20;a++){
   		for (int b=1;b<=13;b++){
         	gotoxy(10+a,11+b); textbackground(6);cprintf(" ");
            gotoxy(11+a,12+b); textbackground(6);cprintf(" ");
   		}
    	}
      textcolor(16);
      textbackground(6);
      gotoxy(13,14); cprintf("Fasilitas :");
      gotoxy(13,16); cprintf("1. Double Bed ");
      gotoxy(13,18); cprintf("2. Televisi ");
      gotoxy(13,20); cprintf("3. AC ");
      gotoxy(13,22); cprintf("4. Free Wifi ");

		char a;
		gotoxy(13,35);textbackground(6);textcolor(0);cprintf("Anda ingin memesan? (Y/N)");a=masukan();
      int b=1;
            while (b!=0){
				if(a=='Y' || a=='y'){
            	pembayaran();
               b=0;
				}else if (a=='n' || a=='N') {
               clrscr();
            	tampilanmenu();
            }else{
      			gotoxy(40,37);textcolor(4);cprintf(" Inputan Salah !! ");
      			getch();
               gotoxy(40,37);textbackground(6);textcolor(0);cprintf("            ");
               gotoxy(38,35);textbackground(6);;cprintf("         ");
      			gotoxy(38,35);a=masukan();
            }
            }

}
 //////////////////////////////////VIP//////////////////////////////////////////
void vip(){
		bingkai1();

      har=atof(harga[2]);
      kuot=kuota[2];
   	textbackground(7);
		gotoxy(20,3);										  cprintf("  @      @  @  @@@@      @@@@    @@@    @@@   @   @  ");
   	gotoxy(20,4);										  cprintf("   @    @   @  @   @     @   @  @   @  @   @  @@ @@  ");
   	gotoxy(20,5);										  cprintf("    @  @    @  @@@@      @@@@   @   @  @   @  @ @ @  ");
   	gotoxy(20,6);										  cprintf("     @@     @  @         @   @   @@@    @@@   @   @  ");
   	gotoxy(20,7);textbackground(6);textcolor(0);cprintf("      H   A   R   T   A           H   O  T  E  L     ");

   	for (int a=1;a<=25;a++){
   		for (int b=1;b<=15;b++){
         	gotoxy(10+a,11+b); textbackground(6);cprintf(" ");
            gotoxy(11+a,12+b); textbackground(6);cprintf(" ");
   		}
    	}
      textcolor(16);
      textbackground(6);
      gotoxy(13,14); cprintf("Fasilitas :");
      gotoxy(13,16); cprintf("1. Double Bed ");
      gotoxy(13,18); cprintf("2. Televisi ");
      gotoxy(13,20); cprintf("3. AC ");
      gotoxy(13,22); cprintf("4. Ruang makan ");
		gotoxy(13,24); cprintf("5. Furniture ekslusif ");
      char a;
		gotoxy(13,35);textbackground(6);textcolor(0);cprintf("Anda ingin memesan? (Y/N)");a=masukan();
      int b=1;
            while (b!=0){
				if(a=='Y' || a=='y'){
            	pembayaran();
               b=0;
				}else if (a=='n' || a=='N') {
               clrscr();
            	tampilanmenu();;
            }else{
      			gotoxy(40,37);textcolor(4);cprintf(" INVALID !! ");
      			getch();
               gotoxy(40,37);textbackground(6);textcolor(0);cprintf("            ");
               gotoxy(38,35);textbackground(6);;cprintf("         ");
      			gotoxy(38,35);a=masukan();
            }
            }

}

/////////////////////////////////FAMILY ROOM////////////////////////////////////
void familyroom(){
		bingkai1();

      	har=atof(harga[3]);
         kuot=kuota[3];
   		textbackground(7);
   		gotoxy(13,3);textcolor(6);                  cprintf("   @@@@@  @@@   @     @  @  @    @     @    @@@@    @@@    @@@   @     @    ");
   		gotoxy(13,4);textcolor(6);                  cprintf("   @     @   @  @@   @@  @  @     @   @     @   @  @   @  @   @  @@   @@    ");
   		gotoxy(13,5);textcolor(6);                  cprintf("   @@@@  @@@@@  @ @ @ @  @  @      @ @      @ @@   @   @  @   @  @ @ @ @    ");
   		gotoxy(13,6);textcolor(6);                  cprintf("   @     @   @  @  @  @  @  @       @       @  @   @   @  @   @  @  @  @    ");
   		gotoxy(13,7);textcolor(6);                  cprintf("   @     @   @  @     @  @  @@@@    @       @   @   @@@    @@@   @     @    ");
         gotoxy(13,8);textbackground(6);textcolor(0);cprintf("           H    A    R    T    A         H     O     T     E     L          ");


   		for (int a=1;a<=25;a++){
   			for (int b=1;b<=15;b++){
         		gotoxy(10+a,11+b); textbackground(6);cprintf(" ");
               gotoxy(11+a,12+b); textbackground(6);cprintf(" ");
   			}
    		}
    		textcolor(16);
    		textbackground(6);
    		gotoxy(13,14); cprintf("Fasilitas :");
    		gotoxy(13,16); cprintf("1. Double Bed ");
    		gotoxy(13,18); cprintf("2. Televisi ");
    		gotoxy(13,20); cprintf("3. AC ");
    		gotoxy(13,22); cprintf("4. Ruang makan ");
    		gotoxy(13,24); cprintf("5. Paket Liburan");
         char a;
		gotoxy(13,35);textbackground(6);textcolor(16);cprintf("Anda ingin memesan? (Y/N)");a=masukan();
      gotoxy(13,35);textbackground(7);;cprintf("                          ");
      int b=1;
            while (b!=0){
				if(a=='Y' || a=='y'){
            	pembayaran();
               b=0;
				}else if (a=='n' || a=='N') {
               clrscr();
            	tampilanmenu();
            }else{
      			gotoxy(45,37);textcolor(4);cprintf(" Inputan Salah !! ");Sleep(700);
               gotoxy(40,37);textbackground(7);textcolor(5);cprintf("               ");
               gotoxy(38,35);textbackground(6);;cprintf("         ");
      			gotoxy(38,35);textcolor(16);a=masukan();
            }
            }

}
///////////////////////////////////PEMBAYARAN//////////////////////////////////


void pembayaran(){

  					gotoxy(13,35);textbackground(6);;cprintf("                          ");
               for (int a=1;a<=20;a++){
   					for (int b=1;b<=5;b++){
         				gotoxy(10+a,27+b); textbackground(6);cprintf(" ");
                     gotoxy(12+a,27+b); textbackground(6);cprintf(" ");
   					}
    				}

               gotoxy(12,29); textbackground(6);textcolor(0);cprintf("Jumlah Kamar :");gets(jumkamar);

                if(kamarTerpilih==1){
               		sisasuperior+=atoi(jumkamar);
                }else if(kamarTerpilih==2){
               	sisadelux+=atoi(jumkamar);
                }else if(kamarTerpilih==3){
                	sisavip+=atoi(jumkamar);
                }else if(kamarTerpilih==4){
               	sisafamily+=atoi(jumkamar);
                }

               while(true){
                  if (strlen(jumkamar)==0){
      						gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(800);
            				gotoxy(45,37);textbackground(6);cprintf("                  ");
            				gotoxy(26,29);textbackground(7);cprintf("   ");
          					gotoxy(26,29);gets(jumkamar);
                  }else if (atoi(jumkamar)>kuota[u]){
      	 					gotoxy(35,37);textbackground(6);textcolor(4);cprintf("MAAF KAMAR YANG TERSISA TINGGAL %d ",kuota[u]);Sleep(800);
          					gotoxy(35,37);textbackground(6);cprintf("                                    ");
               			gotoxy(26,29);textbackground(7);cprintf("   ");
          					gotoxy(26,29);gets(jumkamar);
            		}else if(valpendapatan(jumkamar)>0){
      						gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(800);
          					gotoxy(35,37);textbackground(6);cprintf("                                  ");
               			gotoxy(26,29);textbackground(7);cprintf("   ");
          					gotoxy(26,29);gets(jumkamar);

      				}else {
                  		break;
                  }
               }

               kuota[u]-=atoi(jumkamar);
					float jumkamar1;

               jumkamar1=atof(jumkamar);
               gotoxy(12,31); textbackground(6);textcolor(0);cprintf("Lama menginap:");lamainap[0]=masukan();
      					while(lamainap[0]<='0' || lamainap[0]>'7'){
      								gotoxy(35,37);textbackground(6);textcolor(4);cprintf("MASUKAN MAKSIMAL 7 HARI !! ");Sleep(800);
                            	gotoxy(35,37);textbackground(7);textcolor(4);cprintf("                                  ");
      								gotoxy(26,31);textbackground(7);cprintf("   ");
      								gotoxy(26,31);textcolor(0);lamainap[0]=masukan();
                     }

					strcpy(lama1[hitung],lamainap);
               hitung++;
               float lamainap1;

     	         lamainap1=atof(lamainap);
					for (int a=1;a<=41;a++){
            		for (int b=1;b<=3;b++){
                  		gotoxy(45+a,14+b); textbackground(6);cprintf(" ");
                        gotoxy(45+a,19+b); textbackground(6);cprintf(" ");
                        gotoxy(45+a,24+b); textbackground(6);cprintf(" ");
                  }Sleep(100);
            	}

            float total;

            total=har*lamainap1*jumkamar1;

            gotoxy(48,16);textbackground(6);;textcolor(0);cprintf(" Anda Harus membayar : Rp.%.f",total);
            gotoxy(48,21); textbackground(6);textcolor(0);cprintf("Masukan nominal uang :Rp.");gets(uang);
            while(true){
            		if (strlen(uang)==0){
      						gotoxy(63,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(800);
            				gotoxy(63,37);textbackground(7);cprintf("                  ");
            				gotoxy(73,21);textbackground(6);cprintf("              ");
          					gotoxy(73,21);gets(uang);
      				}else if(valpendapatan(uang)>0){
      						gotoxy(60,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(800);
          					gotoxy(60,37);textbackground(7);cprintf("                                  ");
               			gotoxy(73,21);textbackground(6);cprintf("                  ");
          					gotoxy(73,21);gets(uang);
      				}else if (strlen(uang)<6 || strlen(uang)>10 ){
      	 					gotoxy(60,37);textbackground(6);textcolor(4);cprintf("MINIMAL 6 DAN MAKSIMAL 12 DIGIT  ");Sleep(800);
          					gotoxy(60,37);textbackground(7);cprintf("                                 ");
               			gotoxy(73,21);textbackground(6);cprintf("                  ");
          					gotoxy(73,21);gets(uang);
            		}else {
            				break;
            		}
            }

               while(true){
            		uang1=atof(uang);
                	if(uang1>total){
                		gotoxy(48,26); textbackground(6);textcolor(0);cprintf("Kembalian Anda : Rp.%.f",uang1-total);
                     break;
                	}else if(uang1<total){
                     char b;

                			gotoxy(48,26); textbackground(6);textcolor(4);cprintf("Uang anda kurang Rp.%.f",total-uang1);
                        gotoxy(39,37); textbackground(6);textcolor(16);cprintf("Batal Pesan?(Y/N)");b=masukan();
                        while(true){
                        if(b=='Y' || b=='y'){
                        	clrscr();
            					tampilanpilihan();
								}else if (b=='n' || b=='N') {
                        		break;
            				}else if (b=='x' || b=='X') {
               				exit(0);
                        }else{
      							gotoxy(40,37);textbackground(6);textcolor(4);cprintf(" Inputan Salah !! ");Sleep(700);
                           gotoxy(40,37);textbackground(6);textcolor(5);cprintf("            ");
               				gotoxy(56,37);textbackground(6);;cprintf("         ");
      							gotoxy(56,37);b=getche();
            				}
                      }
                     	getch();
                     	gotoxy(48,26); textbackground(6);cprintf("                                   ");
                     	gotoxy(73,21); textbackground(6);cprintf("              ");
                        gotoxy(39,37); textbackground(6);textcolor(16);cprintf("                   ");
                     	gotoxy(73,21); textbackground(6);gets(uang);

                	}else{
                		gotoxy(59,26); textbackground(6);textcolor(16);cprintf("Uang Anda pas");
                  	break;
                	}
               }
                char a;

                 gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" Tekan sembarang untuk lanjut ! ");a=masukan();
                 clrscr();
                 tampilanregis();

}
void registrasi(){
      	bingkai1();
      	for (int b=1;b<=30;b++){
         	textbackground(7);
	      	gotoxy(27,3);textcolor(6);cprintf(" @@@ @@@  @@@@ @@  @@@ @@@@@@  @@@  @@@@ @@@@ @@");
   			gotoxy(27,4);textcolor(6);cprintf("@@ @ @  @ @@@@ @@ @@     @@   @@ @    @@ @@   @@");
   			gotoxy(27,5);textcolor(6);cprintf("@@@  @@@     @ @@   @@   @@   @@@@  @@@@   @@ @@");
   			gotoxy(27,6);textcolor(6);cprintf("@ @@ @@@@ @@@@ @@ @@@@   @@   @ @@@ @@@@ @@@@ @@");
   			gotoxy(27,8);textbackground(6);textcolor(0);cprintf("     H   A   R   T   A      H   O   T  E   L    ");Sleep(30);
        	}
    		for (int a=1;a<=40;a++){
   			for (int b=1;b<=17;b++){
         		gotoxy(30+a,12+b); textbackground(6);cprintf(" ");
            	gotoxy(31+a,11+b); textbackground(7);cprintf(" ");
   			}
    		}

    		textbackground(6);
    		gotoxy(33,15);textcolor(0);cprintf("Nama              :                   ");
    		gotoxy(33,17);textcolor(0);cprintf("No.Hp             :+628               ");
    		gotoxy(33,19);textcolor(0);cprintf("jenis Kelamin(L/P):                   ");
    		gotoxy(33,21);textcolor(0);cprintf("Tahun check in    :                   ");
    		gotoxy(33,23);textcolor(0);cprintf("Bulan check in    :                   ");
         gotoxy(33,25);textcolor(0);cprintf("Tanggal checkin   :                   ");
      	gotoxy(33,27);textcolor(0);cprintf("Alamat Kab/kota   :                   ");



      	gotoxy(52,15);textcolor(16);gets(nama);
         while(true){
          		if(strlen(nama)==0){
      				gotoxy(36,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI IDENTITAS ANDA !  ");Sleep(700);
            		gotoxy(36,37);textbackground(6);cprintf("                             ");
               	gotoxy(52,15);textbackground(6);cprintf("                  ");
         			gotoxy(52,15);textcolor(16);gets(nama);
      			}else if(valnama(nama)>0){
      				gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
          			gotoxy(35,37);textbackground(6);cprintf("                                  ");
               	gotoxy(52,15);textbackground(6);cprintf("                  ");
          			gotoxy(52,15);textcolor(16);gets(nama);
        			}else if(strlen(nama)<2 || strlen(nama)>28){
      	 			gotoxy(31,37);textbackground(6);textcolor(4);cprintf(" MASUKAN MINIMAL 2 DAN MAKSIMAL 28 KARAKTER  ");Sleep(700);
          			gotoxy(31,37);textbackground(6);cprintf("                                           ");
               	gotoxy(52,15);textbackground(6);cprintf("                  ");
          			gotoxy(52,15);textcolor(16);gets(nama);
            	}else {
               	strcpy(nama1[hitung],nama);
               	break;
            	}
         	}

         gotoxy(56,17); gets(nope);
         while(true){
            	if (strlen(nope)==0){
      				gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(700);
            		gotoxy(45,37);textbackground(6);cprintf("                  ");
            		gotoxy(56,17);textbackground(6);cprintf("              ");
         			gotoxy(56,17); gets(nope);
            	}else if(valnope(nope)>0){
      				gotoxy(37,37);textbackground(6);textcolor(4);cprintf(" PERIKSA KEMBALI INPUTAN ANDA ! ");Sleep(700);
          			gotoxy(37,37);textbackground(6);cprintf("                                  ");
               	gotoxy(56,17);textbackground(6);textcolor(4);cprintf("              ");
          			gotoxy(56,17); gets(nope);
      		   }else if (strlen(nope) < 9 || strlen(nope) > 11){
      	 			gotoxy(35,37);textbackground(6);textcolor(4);cprintf("MINIMAL 11 DAN MAKSIMAL 13 NOMOR  ");Sleep(700);
          			gotoxy(35,37);textbackground(6);cprintf("                                             ");
               	gotoxy(56,17);textbackground(6);cprintf("              ");
          			gotoxy(56,17); gets(nope);
            	}else {
            		strcpy(nope1[hitung],nope);
                  break;
					}
         }

       gotoxy(52,19); gets(kelamin);
         while(true){
       			if(strcmp(kelamin,"L")==0 || strcmp(kelamin,"P")==0){
         	 		strcpy(kelamin1[hitung],kelamin);
             		break;
       			}else if(strlen(kelamin)==0){
       				gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(700);
            		gotoxy(45,37);textbackground(6);cprintf("                  ");
            		gotoxy(52,19);textbackground(6);cprintf("                  ");
           			gotoxy(52,19); gets(kelamin);
       			}else{
      				gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
          			gotoxy(35,37);textbackground(6);cprintf("                                  ");
            		gotoxy(52,19);textbackground(6);cprintf("                  ");
          			gotoxy(52,19); gets(kelamin);
       			}
			}


     	 gotoxy(52,21);gets(tahun);
      	while(true){
      			if(strlen(tahun)==0 || strlen(tahun)>4 || strlen(tahun) < 4 ){
       				gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI DENGAN BENAR !  ");Sleep(700);
            		gotoxy(35,37);textbackground(6);cprintf("                             ");
            		gotoxy(52,21);textbackground(6);cprintf("                ");
           			gotoxy(52,21);gets(tahun);
       			}else if(valpendapatan(tahun)>0 || tahun[0]=='0'){
      				gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
          			gotoxy(35,37);textbackground(6);cprintf("                                       ");
               	gotoxy(52,21);textbackground(6);textcolor(4);cprintf("              ");
          			gotoxy(52,21);gets(tahun);
         		}else{
         			break;
      	   	}
     	 }


      strcpy(tahun1[hitung],tahun);
      gotoxy(52,23);gets(bulan);
      while(true){
   		 	if(strlen(bulan)==0){
      			gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(700);
            	gotoxy(45,37);textbackground(6);cprintf("                             ");
               gotoxy(52,23);textbackground(6);cprintf("                  ");
               gotoxy(52,23);gets(bulan);
      		}else if(strcmp(bulan,"Januari")==0 || strcmp(bulan,"Maret")==0 || strcmp(bulan,"Mei")==0 || strcmp(bulan,"Juli")==0 || strcmp(bulan,"Agustus")==0 || strcmp(bulan,"Oktober")==0 || strcmp(bulan,"Desember")==0){
      			break;
      		}else if(valbulan(bulan)>0){
      			gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
          		gotoxy(35,37);textbackground(6);cprintf("                                  ");
               gotoxy(52,23);textbackground(6);cprintf("                  ");
          		gotoxy(52,23);gets(bulan);
      		}else if(strlen(bulan)<3 || strlen(bulan)>8){
      			gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" INPUTAN SALAH ! ! ");Sleep(700);
          		gotoxy(45,37);textbackground(6);cprintf("                                  ");
               gotoxy(52,23);textbackground(6);cprintf("                  ");
          		gotoxy(52,23);gets(bulan);
      		}else{
         		break;
        		 }
		}

      	strcpy(bulan1[hitung],bulan);
         gotoxy(52,25);gets(tanggal);
          int z;

         while(true){
         z=atoi(tanggal);
      		 if(strlen(tanggal)==0){
       				gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");Sleep(700);
            		gotoxy(45,37);textbackground(6);cprintf("                  ");
            		gotoxy(52,25);textbackground(6);cprintf("                  ");
						gotoxy(52,25);gets(tanggal);
             }else if(valtanggal(tanggal)>0 || z>31){
      				gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
          			gotoxy(35,37);textbackground(6);cprintf("                                  ");
               	gotoxy(52,25);textbackground(6);cprintf("                  ");
          			gotoxy(52,25);gets(tanggal);
        		}else if ((strcmp(bulan,"April")==0 && z>30) || (strcmp(bulan,"Juni")==0 && z>30) || (strcmp(bulan,"September")==0 && z>30) || (strcmp(bulan,"November")==0 && z>30) ){
          			gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN TANGGAL DAN BULAN CEK IN ! ");Sleep(700);
          			gotoxy(35,37);textbackground(6);cprintf("                                       ");
               	gotoxy(52,25);textbackground(6);textcolor(4);cprintf("              ");
          			gotoxy(52,25);gets(tanggal);
         	}else if(strlen(tanggal)>2 || strcmp(bulan,"Februari")==0 && atoi(tahun)%4!=0 && atoi(tanggal)>29){
         			gotoxy(40,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI DENGAN BENAR !  ");Sleep(700);
            		gotoxy(40,37);textbackground(6);cprintf("                             ");
            		gotoxy(52,25);textbackground(6);cprintf("                ");
           			gotoxy(52,25);gets(tanggal);
         	}else if(strcmp(bulan,"Februari")==0 && atoi(tahun)%4!=0 && atoi(tanggal)>28){
            		gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" TAHUN %d BUKAN KABISAT ! ",atoi(tahun));Sleep(700);
          			gotoxy(35,37);textbackground(6);cprintf("                                  ");
               	gotoxy(52,25);textbackground(6);textcolor(4);cprintf("              ");
          			gotoxy(52,25);gets(tanggal);
            }else{
         			strcpy(tanggal1[hitung],tanggal);
               	break;
            }
			}

       gotoxy(52,27);gets(alamat);
         while(true){
       			if(strlen(nama)==0){
      				gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI ALAMAT ANDA !  ");Sleep(700);
            		gotoxy(35,37);textbackground(6);cprintf("                             ");
               	gotoxy(52,27);textbackground(6);cprintf("                  ");
         			gotoxy(52,27);gets(alamat);
      			}else if(valalamat(alamat)>0){
      				gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");Sleep(700);
          			gotoxy(35,37);textbackground(6);cprintf("                                  ");
               	gotoxy(52,27);textbackground(6);cprintf("                  ");
          			gotoxy(52,27);gets(alamat);
        			}else if(strlen(alamat)<5 || strlen(nama)>28){
      	 			gotoxy(30,37);textbackground(6);textcolor(4);cprintf(" MASUKAN MINIMAL 2 DAN MAKSIMAL 28 KARAKTER  ");Sleep(700);
          			gotoxy(30,37);textbackground(6);cprintf("                                             ");
               	gotoxy(52,27);textbackground(6);cprintf("                  ");
          			gotoxy(52,27);gets(alamat);
            	}else{
            		 break;
         		}
         }

          strcpy(alamat1[hitung],alamat);
          clrscr();
          tampilanmenu();
}
void tampilanregis(){
			bingkai1();

         for (int a=1;a<=40;a++){
   			for (int b=1;b<=21;b++){
         		gotoxy(30+a,8+b); textbackground(7);cprintf(" ");
            	gotoxy(31+a,7+b); textbackground(6);cprintf(" ");
   			}
    		}

         gotoxy(43,3);textbackground(3);textcolor(16);cprintf("  BIODATA TAMU  ");
         textbackground(7);
    		gotoxy(32,10);textcolor(0);cprintf("Nama              :%s     ",nama);
    		gotoxy(32,12);textcolor(0);cprintf("No.Hp             :+628%s ",nope);
    		gotoxy(32,14);textcolor(0);cprintf("jenis Kelamin(L/K):%s     ",kelamin);
    		gotoxy(32,16);textcolor(0);cprintf("Lama Menginap     :%s     ",lamainap);
    		gotoxy(32,18);textcolor(0);cprintf("Jumlah Kamar      :%s     ",jumkamar);
      	gotoxy(32,20);textcolor(0);cprintf("Alamat Kab/kota   :%s     ",alamat);
      	gotoxy(32,22);textcolor(0);cprintf("Tanggal check in  :%s %s %s",tanggal,bulan,tahun);
         gotoxy(32,24);textcolor(0);cprintf("Cek out           :       ");cekout();

         char a;
         	gotoxy(35,35);textbackground(3);textcolor(16);cprintf("Anda ingin pesan lagi? (Y/N)");a=masukan();
	      int b=1;
            while (b!=0){
				if(a=='Y' || a=='y'){
            	clrscr();
            	registrasi();
               b=0;
				}else if (a=='n' || a=='N') {
               clrscr();
            	tampilanpilihan();
            }else if (a=='x' || a=='X') {
               exit(0);
            }else{
      			gotoxy(40,37);textcolor(4);cprintf(" Inputan Salah !! ");Sleep(700);
               gotoxy(40,37);textbackground(3);textcolor(5);cprintf("            ");
      			gotoxy(35,35);textbackground(3);textcolor(16);cprintf("Anda ingin pesan lagi? (Y/N)");a=masukan();
            }
            }
}
//////////////////////////////CEKOUT////////////////////////////////////////////
void cekout(){

    int tamp,ceko,jumlah,taun,cekin,lama;

	 	cekin=atoi(tanggal);
    	taun=atoi(tahun);
    	lama=atoi(lamainap);

    	tamp=lama-1;
    	jumlah=cekin+tamp;
    	if(strcmp(bulan,"Januari")==0 && cekin<=31){
      			if(jumlah>31){
      				ceko=jumlah-31;
      				gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d Februari %d",ceko,taun);
      			}else{
      				gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d %s %d",jumlah,bulan,taun);
      			}
      }else if (strcmp(bulan,"Februari")==0){
   			if(strcmp(bulan,"Februari")==0 && atoi(tahun)%4==0){
            	if (jumlah>29){
         			ceko=jumlah-29;
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d Maret %d",ceko,taun);
         		}else{
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d %s %d",jumlah,bulan,taun);
         		}
            }else if (strcmp(bulan,"Februari")==0 && atoi(tahun)%4!=0){
               if (jumlah>28){
         			ceko=jumlah-28;
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d Maret %d",ceko,taun);
         		}else{
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d %s %d",jumlah,bulan,taun);
         		}
            }
   	}else if (strcmp(bulan,"Maret")==0 && cekin<=31){
          		if(jumlah>31){
         			ceko=jumlah-31;
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d April %d",ceko,taun);
         		}else{
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d %s %d",jumlah,bulan,taun);
         		}
   	}else if (strcmp(bulan,"April")==0 && cekin<=30){
         	 	if(jumlah>30){
         			ceko=jumlah-30;
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d Mei %d",ceko,taun);
         		}else{
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d %s %d",jumlah,bulan,taun);
         		}
   	}else if (strcmp(bulan,"Mei")==0 && cekin<=31){
          		if(jumlah>31){
         			ceko=jumlah-31;
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d Juni %d",ceko,taun);
         		}else{
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d %s %d",jumlah,bulan,taun);
         		}
   	}else if (strcmp(bulan,"Juni")==0 && cekin<=30){
          		if(jumlah>30){
         			ceko=jumlah-30;
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d Juli %d",ceko,taun);
         		}else{
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d %s %d",jumlah,bulan,taun);
         		}
   	}else if (strcmp(bulan,"Juli")==0 && cekin<=31){
          		if(jumlah>31){
         			ceko=jumlah-31;
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d Agustus %d",ceko,taun);
         		}else{
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d %s %d",jumlah,bulan,taun);
         		}
   	}else if (strcmp(bulan,"Agustus")==0 && cekin<=31){
          		if(jumlah>31){
         			ceko=jumlah-31;
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d Februari %d",ceko,taun);
         		}else{
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d %s %d",jumlah,bulan,taun);
         		}
   	}else if (strcmp(bulan,"September")==0 && cekin<=30){
          		if(jumlah>30){
         			ceko=jumlah-30;
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d Oktober %d",ceko,taun);
         		}else{
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d %s %d",jumlah,bulan,taun);
         		}
   	}else if (strcmp(bulan,"Oktober")==0 && cekin<=31){
          		if(jumlah>31){
         			ceko=jumlah-31;
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d November %d",ceko,taun);
         		}else{
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d %s %d",jumlah,bulan,taun);
         		}
   	}else if (strcmp(bulan,"November")==0 && cekin<=30){
          		if(jumlah>30){
         			ceko=jumlah-30;
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d Desember %d",ceko,taun);
         		}else{
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d %s %d",jumlah,bulan,taun);
         		}
   	}else if (strcmp(bulan,"Desember")==0 && cekin<=31){
          		if(jumlah>31){
         			ceko=jumlah-31;
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d Januari %d",ceko,taun+1);
         		}else{
            		gotoxy(51,24);textbackground(7);textcolor(16);cprintf("%d %s %d",jumlah,bulan,taun);
         		}
   	}
}
//---------------------------TAMPILANBUATAKUN--------------------------------//
void tampilanbuatakun(){
    bingkai1();

    for (int a=3;a<=20;a++){
      	for (int b=1;b<=20;b++){
         	textbackground(7);
      		gotoxy(a,3);textcolor(6);cprintf(" @@@@   @   @   @@@   @@@@@      @@@   @   @  @   @  @@   @              ");
      		gotoxy(a,4);textcolor(6);cprintf(" @   @  @   @  @   @    @       @   @  @  @   @   @  @ @  @              ");
      		gotoxy(a,5);textcolor(6);cprintf(" @@@@   @   @  @@@@@    @       @@@@@  @@@    @   @  @  @ @              ");
				gotoxy(a,6);textcolor(6);cprintf(" @   @  @   @  @   @    @       @   @  @  @   @   @  @   @@              ");
				gotoxy(a,7);textcolor(6);cprintf(" @@@@    @@@   @   @    @       @   @  @   @   @@@   @    @              ");
				gotoxy(a,9);textbackground(0);textcolor(6);cprintf("           H    A    R   T   A       H   O   T   E   L                          ");
   		}Sleep(90);
   	}
      for (int a=1;a<=30;a++){
   		for (int b=1;b<=13;b++){
         	gotoxy(34+a,16+b);textbackground(6);cprintf(" ");
      	}
   	}

   	for (int b=1;b<=28;b++){
         textbackground(6);
       	gotoxy(36,18);  textcolor(16);cprintf("Username  : ");
         gotoxy(36,22);  textcolor(16);cprintf("No.Hp     : ");
       	gotoxy(36,26);  textcolor(16);cprintf("Kata Sandi: ");
         gotoxy(36,23);  textcolor(16);cprintf("+628 ");
       	gotoxy(35+b,20);textcolor(16);cprintf("-");Sleep(25);
         gotoxy(35+b,24);textcolor(16);cprintf("-");Sleep(25);
   	 	gotoxy(35+b,28);textcolor(16);cprintf("-");Sleep(25);
   	}

       gotoxy(36,19);textbackground(6);textcolor(0);gets(user);
       while(true){
       		if(strlen(user)==0){
      			gotoxy(40,37);textbackground(6);textcolor(4);cprintf(" TIDAK BOLEH KOSONG ! ");
         		getch();
            	gotoxy(40,37);textbackground(7);cprintf("                       ");
            	gotoxy(36,19);textbackground(6);cprintf("                        ");
         		gotoxy(36,19);gets(user);
      		}else if(valuser(user)>0){
      			gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");
          		getch();
            	gotoxy(35,37);textbackground(7);cprintf("                                   ");
          		gotoxy(36,19);textbackground(6);cprintf("                             ");
         		gotoxy(36,19);gets(user);
      		}else if (strlen(user)<6 || strlen(user)>20){
      	 		gotoxy(30,37);textbackground(6);textcolor(4);cprintf(" MASUKAN MINIMAL 6 DAN MAKSIMAL 20 KARAKTER !");
          		getch();
            	gotoxy(30,37);textbackground(7);cprintf("                                             ");
          		gotoxy(36,19);textbackground(6);cprintf("                             ");
         		gotoxy(36,19);gets(user);
       		}else {
      			break;
      		}
      }
      gotoxy(40,23);gets(nope);
            while(true){
            	if (strlen(nope)==0){
      				gotoxy(45,37);textbackground(6);textcolor(4);cprintf(" HARAP ISI !  ");
         			getch();
            		gotoxy(45,37);textbackground(7);cprintf("                       ");
            		gotoxy(40,23);textbackground(6);cprintf("                      ");
          			gotoxy(40,23);gets(nope);
      			}else if(valnope(nope)>0){
      				gotoxy(35,37);textbackground(6);textcolor(4);cprintf(" PERHATIKAN SETIAP INPUTAN ANDA ! ");
          			getch();
          			gotoxy(35,37);textbackground(7);cprintf("                               ");
               	gotoxy(40,23);textbackground(6);cprintf("                        ");
          			gotoxy(40,23);gets(nope);
      			}else if (strlen(nope)<10 || strlen(nope)>10 ){
      	 			gotoxy(35,37);textbackground(6);textcolor(4);cprintf("MINIMAL 11 DAN MAKSIMAL 13 NOMOR  ");
          			getch();
          			gotoxy(35,37);textbackground(7);cprintf("                                       ");
               	gotoxy(40,23);textbackground(6);cprintf("                    ");
          			gotoxy(40,23);gets(nope);
            	}else {
            		break;
            	}
      	}


         	gotoxy(36,27);gets(sandi);
         while(true){
      	if(strlen(sandi)==0){
      		gotoxy(40,37);textbackground(6);textcolor(4);cprintf(" TIDAK BOLEH KOSONG ! ");
         	getch();
            gotoxy(40,37);textbackground(7);cprintf("                     ");
            gotoxy(36,27);textbackground(6);cprintf("                             ");
         	gotoxy(36,27);gets(sandi);
      	}else if(valuser(user)>0){
      		gotoxy(40,37);textbackground(6);textcolor(4);cprintf(" Inputan Salah !! ");
          	getch();
            gotoxy(40,37);textbackground(7);textcolor(4);cprintf("            ");
          	gotoxy(36,27);textbackground(6);cprintf("                             ");
         	gotoxy(36,27);gets(sandi);
      	}else if (strlen(sandi)<6 || strlen(sandi)>15){
      	 	gotoxy(33,37);textbackground(6);textcolor(4);cprintf(" MASUKAN MINIMAL 6 DAN MAKSIMAL 15 KARAKTER !");
          	getch();
            gotoxy(33,37);textbackground(7);textcolor(4);cprintf("                                             ");
          	gotoxy(36,27);textbackground(6);cprintf("                             ");
         	gotoxy(36,27);gets(sandi);
       	}else {
         	break;
         }
      }
      clrscr();
      tampilanlogin();
}
//////////////////////////////VALIDASI//////////////////////////////////////////
int valuser(char y[100]){
		int a=0;
         if((y[0]>='a'&& y[0]<='z') || (y[0]>='A' && y[0]<='Z') || y[0]=='_'){
   			for(int b=0;y[b]!=NULL;b++){
           		if( ! (y[b]=='_' && y[b+1]!= '_' || y[b]>='a'&& y[b]<='z' || y[b]>='A' && y[b]<='Z'  || y[b]>='0'&& y[b]<='9')){
      				a++;
           		}
   			}
         }

   	return a;
}

int valnama(char y[100]){
		int a=0;

   	if(y[0]!='\0' || y[0]=='\''){
   		for(int b=0;y[b]!=NULL;b++){
            if (y[0]==' ' && y[b+1]==' '){
                a++;
            }else if(y[b]>='0'&& y[b]<='9'){
            	a++;
      		}else if((y[b]>='a'&& y[b]<='z') || (y[b]>='A' && y[b]<='Z') || (y[b]==' ') || (y[b]=='\'')){
            	continue;
            }
            a++;
   		}
   	}else{
   		a++;
   	}

   	return a;
}

int valnope(char n[]){
	int a=0;

   	if(n[0]>='0' && n[0]<='9'){
   		for(int b=0;n[b]!=NULL;b++){
      		if( !(n[b]>='0' && n[b]<='9') ){
         		a++;
         	}
      	}
      }else{
      	a++;
      }
   	return a;
}

int valtanggal(char c[]){
   int a=0;

     if (c[0]!='\0'){
		for(int b=0;b<strlen(c);b++){
      		if( c[0]=='3' && c[1]=='0'){
         		continue;
         	}else if( c[0]=='3' && c[1]=='1' ){
         		continue;
         	}else if( c[0]=='2' && c[1]>='0' && c[1]<='9' ){
         		continue;
         	}else if( c[0]=='1' && c[1]>='0' && c[1]<='9'){
         		continue;
         	}else if(c[b]>='0' && c[b]<='9'){
         		continue;
         	}else{
            	a++;
            }
         	a++;
      	}
    }else {
    		a++;
    }
   	return a;
}

int valbulan(char y[100]){
		int a=0;

   	if(y[0]>='A' && y[0]<='Z'){
   		for(int b=1;y[b]!=NULL;b++){
             if((y[b]>='a'&& y[b]<='z') || (y[b]>='A' && y[b]<='Z')){
      			continue;
      		}
            a++;
   		}
   	}else{
   		a++;
   	}

   	return a;
}

int valtahun(char c[4]){
   int a=0;

   if(strlen(c) < 4 || strlen(c) > 4){
     	a++;
     }
     if (c[0]!='\0'){
			for(int b=1;c[b]!=NULL;b++){
      		if(c[0]=='2' && c[1]=='0' && c[2]=='1' && c[3]=='9'){
         		continue;
         	}else{
         		a++;
         	}
         	a++;
      	}
    }else{
    		a++;
    }
   	return a;
}

int valalamat(char y[100]){
		int a=0;

   	if(y[0]!='\0' && (y[0]>='A' && y[0]<='Z')){
   		for(int b=1;y[b]!=NULL;b++){
            if(y[b]>='0'&& y[b]<='9'){
            	a++;
            }else if((y[b]>='a'&& y[b]<='z') || (y[b]>='A' && y[b]<='Z') || (y[b]==' ') || (y[b]=='.')){
      			continue;
      		}
            a++;
   		}
   	}else{
   		a++;
   	}

   	return a;
}

int valpendapatan(char z[20]){
  int a=0;
        if (z[0]!=' ' && z[0]!='0'){
			for(int b=0;z[b]!=NULL;b++){
      		if(z[b]>='0'&& z[b]<='9') {
         		continue;
         	}else{
            	a++;

            }
      	}
        }else{
        	a++;
        }

   	return a;
}
int vallama(char c[2]){
   int a=0;

     if (c[0]!='\0'){
			for(int b=0;c[b]!=NULL;b++){
      		if( c[0]>='0' && c[0]<='2' && c[1]<='9'){
         		continue;
         	}else{
            	a++;
            }
         	a++;
      	}
    }else {
    		a++;
    }
   	return a;
}
///////////////////////keluar///////////////////////////////////////////////////
void keluar(){
	bingkai1();
      char project[7]={'P','R','O','J','E','C','T'};
      for(int a=1;a<=11;a++){
          gotoxy(30,5);textcolor(a);cprintf("'T' 'E' 'R' 'I' 'M' 'A' 'K' 'A' 'S' 'I' 'H'");Sleep(200);
      }
}

 ////////////////////// tampilan awal //////////////////////////////////////////////

void tampilan1(){
     bingkai1();
	for(int a=1;a<=15;a++){
   		textcolor(6);

   gotoxy(25,5);cprintf(" #  #  ###  ###  ##### ###       #  #  ###  #####  ### #          "); Sleep(200);
   gotoxy(25,6);cprintf(" #  # #   # #  #   #  #   #      #  # #   #   #   #    #          "); Sleep(200);
   gotoxy(25,7);cprintf(" #### ##### #  #   #  #####      #### #   #   #   ###  #          "); Sleep(200);
   gotoxy(25,8);cprintf(" #  # #   # # #    #  #   #      #  # #   #   #   #    #          "); Sleep(200);
   gotoxy(25,9);cprintf(" #  # #   # #  #   #  #   #      #  #  ###    #    ### ####       "); Sleep(200);
   for(int a=0;a<60;a++){
      textbackground(16);
   	gotoxy(25+a,10);cprintf("%c",219);
   }
   tampilanawal();
   }
}



main(){
tampilan1();
//tampilanpilihan();

getch();
 }


