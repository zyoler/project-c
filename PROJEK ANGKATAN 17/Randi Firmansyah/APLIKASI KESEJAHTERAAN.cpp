#include <stdio.h>
#include <conio.h>
#include <windows.h>
//============================================================================//
//                            RANDI FIRMANSYAH                                //
//                          PROJECT KESEJAHTERAAN                             //
//============================================================================//

//============================================================================//
//                             WIDHT = 78               								//
//                             HEIGHT = 52                                    //
//============================================================================//
void bingkaiDasar(),close(),loading(),welcome(),formTittle(int a),formPilihan(int a,int b),background();
void tampLog(),garis(int a),login();
void formWrong(),hapusFormWrong(),wrongSelect();
void tampAsk(),askExitFromApp(),askExitFromAcc();
void menu();
	void struktural(),tampUS();
   void menuMak(),tampMeMak();
   void jadPik();
   void keuangan(),tampPg(),form(int a),pengeluaran(),tampPM(int a),tampJePeng(),tampMeTran(),menuHutang(),lapHut(),TampHut(),tampIsHut(int a);
   void meSal(),tampIsal(),ta(),iAp();
////////////////////////////////////////////////////////////////////////////////
int validasiNama(char huruf[]);
int validasiAngka(char huruf[]);
int cocodot(char a[]);
////////////////////////////////////////////////////////////////////////////////
char ukes[]="randi",pakes[]="randi",umas[20]="abc",pamas[20]="abc";
char us[5][40],str[][40]={{"IHSAN NASIHIN"},{"CARIDI"},{"NINDA TRI ALFIANI"},{"TRI NOVERITA SARI"},{"NINA MAN AIDA"}};
char mg[7][40],mem[][40]={{"AYAM GEPREK"},{"AYAM SAMBAL IJO"},{"DAGING AYAM DENGAN SAYUR KOL"},{"FRIED CHICKEN"},{"JAMUR CRISPY"},{"SUUK TERI"},{"GORENG ANAK AYAM"}};
char mm[7][40],mma[][40]={{"SAYUR LODEH"},{"NASI GORENG"},{"SOSIS GORENG"},{"SAYUR SOP"},{"PAIS IKAN"},{"GORENG ANAK LELE"},{"TELOR DADAR SEPOTONG"}};
char sr[7][40],gsr[][40]={{"CILOK"},{"KETUPAT"},{"ROTI BAKAR"},{"SOSIS GULUNG"},{"LONTONG KARI"},{"MARTABAK"},{"ANEKA GORENGAN"}};
char pm[14][40],spm[][40]={{"Abdul Manaf"},{"Ade Radia Rahmat"},{"Abdul Rojak"},{"Agam Mudzakir"},{"M Fahmi Rosyadi"},{"M Resha Anshori"},{"Rayhan Rizki Fauzan"},{"Ahmad Sukriana Dewi"},{"Yayat Hidayat"},{"Rian Hidayat"},{"Muh Ridho Aldiansyah"},{"Alif Firdaus"},{"Tria Sagita"},{"Randi Firmansyah"}};
char ps[21][40],gps[][40]={{"Monalisa"},{"Cinta Laura"},{"Usman"},{"Kirito"},{"Asuna"},{"Magadir"},{"Syubat"},{"Rian Hidayat"},{"Abdul Manaf Yusro"},{"Dandy Fadillah"},{"Lucinta Luna"},{"Ariel Tatum"},{"Vanessa Angela"},{"Cinta Laura"},{"Momo Geisha"},{"Kimidayo"},{"Sasageyo"},{"Fortuner"},{"Alexis"},{"Abah Kolot"},{"Ucok"}};
char pg[][40]={{"MAKAN SIANG DAN MALAM"},{"SARAPAN"},{"TOILETRIS"},{"BENSIN"},{"LAIN - LAIN"}};
char png[5][2][100];
int gp[5],gpg[5]={0};
int cek;
int totgpg=0,totHut=0;
int saldo=100,hutang[5]={10,10,10,10,10};
int tot[5];
int byr,tm=0;
//============================================================================//
//                             VALIDASI                                       //
//============================================================================//
int validasiAngka(char huruf[]){												//x dan y digunakan untuk menampung argumen koordinat fungsi hapus
	int error=0;
   if(strlen(huruf)>8){
   	formWrong();gotoxy(19,43);textbackground(4);textcolor(7);cprintf("MASUKAN INPUTAN MAXIMAL 8 CHARAKTER !!!");getch();
      error+=1;
      return error;
   }if(strlen(huruf)<1){
   	formWrong();gotoxy(23,43);textbackground(4);textcolor(7);cprintf("INPUTAN TIDAK BOLEH KOSONG !!!");getch();
      error+=1;
      return error;
   }
	for(int x=0;huruf[x]!=NULL;x++){
   	if(huruf[0]!='0' && huruf[x]<='9' && huruf[x]>='0'){
      	error+=0;
      }else{
      	error++;
         if(huruf[x]=='0'){
				formWrong();gotoxy(20,43);textbackground(4);textcolor(7);cprintf("INPUTAN TIDAK BOLEH DIAWALI 0 (NOL) !!!");getch();
            return error;
         }else if(huruf[0]==' ' || huruf[strlen(huruf)-1]==' '){
      		error++;formWrong();gotoxy(17,43);textbackground(4);textcolor(7);cprintf("INPUTAN TIDAK BOLEH DIAWALI/DIAKHIRI SPASI !!!");getch();
            return error;
      	}
      }
   }
   if(error>0){
   	formWrong();gotoxy(23,43);textbackground(4);textcolor(7);cprintf("INPUTAN HARUS BERUPA ANGKA !!!");getch();
   }
   return error;
}
////////////////////////////////////////////////////////////////////////////////
int validasiNama(char huruf[]){													//x dan y digunakan untuk menampung argumen koordinat fungsi hapus
   int error=0;
	for(int x=0;huruf[x]!=NULL;x++){
   	if(huruf[x]<='z' && huruf[x]>='a' || huruf[x]<='Z' && huruf[x]>='A' || huruf[x]==' ' && huruf[x+1]!=' '){
      	error+=0;
      }else{
      	error++;
      }if(huruf[0]==' ' || huruf[strlen(huruf)-1]==' '){
      	error++;formWrong();gotoxy(17,43);textbackground(4);textcolor(7);cprintf("INPUTAN TIDAK BOLEH DIAWALI/DIAKHIRI SPASI !!!");getch();return error;
      }
   }if(error>0){
   	formWrong();gotoxy(23,43);textbackground(4);textcolor(7);cprintf("INPUTAN HARUS BERUPA HURUF !!!");getch();
   }
   return error;
}
////////////////////////////////////////////////////////////////////////////////
int cocodot(char a[]){																		//berfungsi untuk menkoreksi suatu inputan
   if(strcmp(a,"")==0){
		formWrong();gotoxy(24,43);textbackground(4);cprintf("INPUTAN TIDAK BOLEH KOSONG !!!");getch();
  	}else if(strlen(a)<2){
  		formWrong();gotoxy(20,43);textbackground(4);textcolor(7);cprintf("MASUKAN INPUTAN MINIMAL 2 CHARAKTER !!!");getch();
   }else if(strlen(a)>25){
     	formWrong();gotoxy(19,43);textbackground(4);textcolor(7);cprintf("MASUKAN INPUTAN MAXIMAL 25 CHARAKTER !!!");getch();
   }else{
     	return 0;
	}return 1;
}
////////////////////////////////////////////////////////////////////////////////
void wrongSelect(){
	formWrong();
   textbackground(4);
   gotoxy(23,43);cprintf("MASUKAN PILIHAN DENGAN BENAR !!!");
   getch();
}
////////////////////////////////////////////////////////////////////////////////
void loading(){
	clrscr();
   bingkaiDasar();
   for(int x=0;x<3;x++){
      bingkaiDasar();
      textcolor(12);
      if(x>0){
      	gotoxy(14,43);cprintf("MOHON MAAF SEDIKIT LAMBAT, MUNGKIN JARINGAN LEMAH");
      }gotoxy(38,23);printf("Memuat");
   	for(int y=0;y<50;y++){
         	gotoxy(15+y,24);printf(".");Sleep(50);
	   }clrscr();
   }
}
//============================================================================//
//                             BINGKAI DASAR                                  //
//============================================================================//
void bingkaiDasar(){
   system("color 70");
   textcolor(3);
	for(int x=1;x<=76;x++){
   	gotoxy(x+1,2);cprintf("%c",219);
      gotoxy(x+1,50);cprintf("%c",219);
      gotoxy(x+1,51);cprintf("%c",219);

      if(x<50){
      	gotoxy(2,x+1);cprintf("%c",219);
      	gotoxy(77,x+1);cprintf("%c",219);
      }
  	}close();textbackground(7);textcolor(15);gotoxy(5,48);cprintf("Created By Randi Firmansyah");gotoxy(5,47);cprintf("@CopyRight2019");
}
////////////////////////////////////////////////////////////////////////////////
void formTittle(int a){
   for(int x=1;x<=6;x++){
   	for(int y=1;y<=72;y++){
      	gotoxy(3+y,a+x);textbackground(3);cprintf(" ");
      }
   }
}
////////////////////////////////////////////////////////////////////////////////
void welcome(){
	loading();
	bingkaiDasar();
   formTittle(23);gotoxy(60,1);textbackground(7);cprintf("                  ");
   gotoxy(17,26);textbackground(3);cprintf("...SELAMAT DATANG DI APLIKASI KESEJAHTERAAN...");getch();
	login();
}
////////////////////////////////////////////////////////////////////////////////
void tampLog(){
   bingkaiDasar();
   close();
   formTittle(3);
   textcolor(15);
   gotoxy(23,6);textbackground(3);cprintf("...SELAMAT DATANG KESEJAHTERAAN...");
   gotoxy(24,18);textbackground(7);printf("Nama Pengguna");gotoxy(24,24);printf("Kata Sandi");
   garis(21);
   garis(27);
}
////////////////////////////////////////////////////////////////////////////////
void garis(int a){
	for(int x=1;x<=40;x++){
   	gotoxy(x+20,a);textbackground(7);cprintf("_");
   }
}
////////////////////////////////////////////////////////////////////////////////
void close(){
   gotoxy(75,1);textbackground(4);cprintf("   ");
	gotoxy(76,1);textcolor(15);cprintf("x");
   gotoxy(60,1);textbackground(7);textcolor(0);cprintf("KEMBALI/KELUAR");
}
////////////////////////////////////////////////////////////////////////////////
void formWrong(){
   for(int x=1;x<=5;x++){
   	for(int y=1;y<=70;y++){
      	gotoxy(4+y,40+x);textbackground(4);cprintf(" ");
      }
   }
}
////////////////////////////////////////////////////////////////////////////////
void hapusFormWrong(){
   for(int x=1;x<=5;x++){
   	for(int y=1;y<=70;y++){
      	gotoxy(4+y,40+x);textbackground(7);cprintf(" ");
      }
   }
}
////////////////////////////////////////////////////////////////////////////////
void formPilihan(int a,int b){
	for(int x=1;x<=5;x++){
   	for(int y=1;y<=30;y++){
      	gotoxy(a+y,b+x);textbackground(6);cprintf(" ");
      }
   }
	for(int q=2;q<=6;q++){
   	for(int w=2;w<=31;w++){
      	gotoxy(a+w,b+q);textbackground(3);cprintf(" ");
      }
   }
}
////////////////////////////////////////////////////////////////////////////////
void login(){
   clrscr();
   tampLog();
	gotoxy(22,20);gets(umas);
   if(strcmp("x",umas)==0 || strcmp("X",umas)==0)askExitFromApp();
   else if(validasiNama(umas)>0 || cocodot(umas)>0)login();
   back:
   textbackground(7);textcolor(15);gotoxy(22,26);gets(pamas);
      if(strcmp("x",pamas)==0 || strcmp("X",pamas)==0)askExitFromApp();
      else if(strcmp(ukes,umas)==0 && strcmp(pakes,pamas)==0){
			clrscr();menu();
   	}else if(strcmp(pakes,pamas)==0 && strcmp(ukes,umas)!=0){
         formWrong();gotoxy(22,43);cprintf("Username yang anda masukan salah !");getch();
	  	}else if(strcmp(pakes,pamas)!=0 && strcmp(ukes,umas)==0){
    		formWrong();gotoxy(22,43);cprintf("Password yang anda masukan salah !");getch();clrscr();tampLog();gotoxy(22,20);printf("%s",umas);goto back;
    	}else{
    		formWrong();gotoxy(17,43);cprintf("Username dan Password yang anda masukan salah !");getch();
	  	}login();
}
////////////////////////////////////////////////////////////////////////////////
void tampAsk(){
   for(int x=14;x<26;x++){
   	for(int y=19;y<61;y++){
      	gotoxy(y,x);textbackground(6);cprintf(" ");
      }
   }
   for(int x=15;x<25;x++){
   	for(int y=20;y<60;y++){
      	gotoxy(y,x);textbackground(2);cprintf(" ");
      }
   }
	for(int a=0;a<3;a++){
		for(int b=0;b<10;b++){
   		gotoxy(23+b,20+a);textbackground(3);cprintf(" ");gotoxy(47+b,20+a);cprintf(" ");
				gotoxy(28,21);textbackground(3);textcolor(15);cprintf("Y");gotoxy(52,21);cprintf("N");
   	}
	}
}
////////////////////////////////////////////////////////////////////////////////
void askExitFromApp(){
	tampAsk();
   gotoxy(28,17);textbackground(2);cprintf("ANDA YAKIN UNTUK KELUAR ?");
   baa:int a=getch();
   if(a=='y' || a=='Y'){
		clrscr();bingkaiDasar();formTittle(23);gotoxy(22,26);textbackground(3);cprintf("...TERIMA KASIH TELAH BERKUNJUNG...");getch();exit(0);
   }else if(a=='n' || a=='N'){
      login();
   }else{
   	goto baa;
   }
}
////////////////////////////////////////////////////////////////////////////////
void askExitFromAcc(){
	tampAsk();
   gotoxy(28,17);textbackground(2);cprintf("ANDA YAKIN UNTUK KELUAR ?");
   baa:int a=getch();
   if(a=='y' || a=='Y'){
      login();
   }else if(a=='n' || a=='N'){
      menu();
   }else{
   	goto baa;
   }
}
////////////////////////////////////////////////////////////////////////////////
void menu(){
	clrscr();
   bingkaiDasar();
   formTittle(3);
   textcolor(15);gotoxy(23,6);textbackground(3);cprintf("...SELAMAT DATANG KESEJAHTERAAN...");
   formPilihan(5,11);
   formPilihan(5,18);
   formPilihan(5,25);
   formPilihan(5,32);
   gotoxy(8,15);cprintf("1. STRUKTUR ORGANISASI");	formPilihan(41,11);gotoxy(44,15);cprintf("5. TENTANG APLIKASI");
   gotoxy(8,22);cprintf("2. MENU MAKANAN");
   gotoxy(8,29);cprintf("3. LAPORAN KEUANGAN");
   gotoxy(8,36);cprintf("4. JADWAL PIKET");
   formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
   char a[1];
   gotoxy(57,42);textbackground(7);cprintf("   ");
   gotoxy(58,42);gets(a);
   if(strcmp("x",a)==0)askExitFromAcc();
   else if(strcmp(a,"")==0){
    	formWrong();gotoxy(24,43);textbackground(4);cprintf("INPUTAN TIDAK BOLEH KOSONG !!!");getch();menu();
   }else if(strcmp(a,"1")==0){
   	struktural();
   }else if(strcmp(a,"2")==0){
   	menuMak();
   }else if(strcmp(a,"3")==0){
   	keuangan();
   }else if(strcmp(a,"4")==0){
   	jadPik();
   }else if(strcmp(a,"5")==0){
      ta();
   }else{
		wrongSelect();menu();
	}
}
////////////////////////////////////////////////////////////////////////////////
void struktural(){
   clrscr();
	bingkaiDasar();
   formTittle(3);
   textcolor(15);gotoxy(21,6);textbackground(3);cprintf("...STRUKTUR ORGANISASI KESEJAHTERAAN...");
   formPilihan(6,18);gotoxy(9,22);cprintf("1. LIHAT STRUKTUR ORGANISASI");
   formPilihan(40,18);gotoxy(43,22);cprintf("2. RUBAH STRUKTUR ORGANISASI");
   formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
   char a[1];
   gotoxy(57,42);textbackground(7);cprintf("   ");
   gotoxy(58,42);gets(a);
   if(strcmp("x",a)==0)menu();
	else if(strcmp(a,"")==0){
    	formWrong();gotoxy(24,43);textbackground(4);cprintf("INPUTAN TIDAK BOLEH KOSONG !!!");getch();struktural();
   }else if(strcmp("1",a)==0){
      lookstruk:
      clrscr();
      bingkaiDasar();
      tampUS();
      formTittle(3);textcolor(15);gotoxy(21,6);textbackground(3);cprintf("...STRUKTUR ORGANISASI KESEJAHTERAAN...");
   	gotoxy(27,15);cprintf("%s",str[0]);
		gotoxy(10,25);cprintf("%s",str[1]);
		gotoxy(10,35);cprintf("%s",str[2]);
		gotoxy(45,25);cprintf("%s",str[3]);
		gotoxy(45,35);cprintf("%s",str[4]);
      back1:
    	int a=getch();
   	if(a=='x' || a=='X'){
      	struktural();
	   }else{
   		goto back1;
	   }
	}else if(strcmp("2",a)==0){
		formTittle(3);
		textcolor(15);
		tampUS();
    	for(int x=0;x<=5;x++){
         back:
			clrscr();
         bingkaiDasar();
         tampUS();
         for(int y=0;y<x;y++){
         	textcolor(15);textbackground(3);
         	if(y==0){gotoxy(27,15);cprintf("%s",us[y]);
            }else if(y==1){gotoxy(10,25);cprintf("%s",us[y]);
            }else if(y==2){gotoxy(10,35);cprintf("%s",us[y]);
            }else if(y==3){gotoxy(45,25);cprintf("%s",us[y]);
            }else if(y==4){gotoxy(45,35);cprintf("%s",us[y]);
            }
         }
         if(x<5){
				if(x==0)gotoxy(27,15);
            else if(x==1)gotoxy(10,25);
            else if(x==2)gotoxy(10,35);
            else if(x==3)gotoxy(45,25);
            else if(x==4)gotoxy(45,35);
            gets(us[x]);
         	if(strcmp(us[x],"X")==0 || strcmp(us[x],"x")==0){
   	      	x--;
               if(x<0){
               	struktural();
               }goto back;																				//jangan lupa ganti prosedur
      	   }if(validasiNama(us[x])>0){
            	goto back;
            }if(cocodot(us[x])>0){
            	goto back;
            }
         }
      }
      back2:
       int a=getch();
      tampAsk();gotoxy(25,17);textbackground(2);cprintf("ANDA YAKIN UNTUK MENGUBAHNYA ?");
			if(a=='y' || a=='Y'){
         	for(int x=0;x<5;x++){
            	strcpy(str[x],us[x]);
            }goto lookstruk;
         }else if(a=='n' || a=='N'){
         	struktural();
         }else{
         	goto back2;
         }
   }else{
		wrongSelect();struktural();
	}
}
////////////////////////////////////////////////////////////////////////////////
void tampUS(){
   formTittle(3);
	gotoxy(18,6);textcolor(15);textbackground(3);cprintf("...RUBAH STRUKTUR ORGANISASI KESEJAHTERAAN...");
   gotoxy(26,11);printf("KOORDINATOR");
	formPilihan(23,11);
	gotoxy(9,21);printf("ANGGOTA");
	formPilihan(6,21);
	gotoxy(9,31);printf("ANGGOTA");
	formPilihan(6,31);
   gotoxy(44,21);printf("ANGGOTA");
	formPilihan(41,21);
	gotoxy(44,31);printf("ANGGOTA");
	formPilihan(41,31);
}
////////////////////////////////////////////////////////////////////////////////
void tampMeMak(){
	formPilihan(6,12);
   formPilihan(23,20);
   formPilihan(41,12);
   formPilihan(6,28);
   formPilihan(41,28);
   formPilihan(6,36);
   formPilihan(41,36);
   gotoxy(9,12);printf("SENIN");
   gotoxy(44,12);printf("SELASA");
   gotoxy(26,20);printf("RABU");
   gotoxy(9,28);printf("KAMIS");
   gotoxy(44,28);printf("JUM'AT");
   gotoxy(9,36);printf("SABTU");
   gotoxy(44,36);printf("MINGGU");
}
///////////////////////////////////
void menuMak(){
	back:
	clrscr();
	bingkaiDasar();
	formTittle(3);
	gotoxy(30,6);textbackground(3);textcolor(15);cprintf("...MENU MAKANAN PUB...");
	formPilihan(6,11);gotoxy(10,15);cprintf("1. MAKAN SIANG");
	formPilihan(6,21);gotoxy(10,25);cprintf("2. MAKAN MALAM");
	formPilihan(6,31);gotoxy(10,35);cprintf("3. SARAPAN");
	formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
   char a[1];
   gotoxy(57,42);textbackground(7);cprintf("   ");
   gotoxy(58,42);gets(a);
   if(strcmp("x",a)==0 || strcmp("X",a)==0)menu();
	else if(strcmp("",a)==0){
   	formWrong();gotoxy(24,43);textbackground(4);textcolor(7);cprintf("INPUTAN TIDAK BOLEH KOSONG !!!");getch();goto back;
   }else if(strcmp("1",a)==0){
   	back1:
      clrscr();
      bingkaiDasar();
      formTittle(3);gotoxy(30,6);textbackground(3);textcolor(15);cprintf("...MENU MAKAN SIANG...");
		formPilihan(6,16);gotoxy(10,20);cprintf("1. LIHAT MENU MAKAN SIANG");
		formPilihan(6,26);gotoxy(10,30);cprintf("2. UBAH MENU MAKAN SIANG");
      formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
      char a[1];
   	gotoxy(57,42);textbackground(7);cprintf("   ");
   	gotoxy(58,42);gets(a);
      	if(strcmp(a,"1")==0){
            lookmemaksi:
            clrscr();
            bingkaiDasar();
            formTittle(3);gotoxy(30,6);textbackground(3);textcolor(15);cprintf("...MENU MAKAN SIANG...");
            tampMeMak();
         	for(int x=0;x<7;x++){
         		if(x==0)gotoxy(10,16);
            	else if(x==1)gotoxy(45,16);
   				else if(x==2)gotoxy(27,24);
   				else if(x==3)gotoxy(10,32);
   				else if(x==4)gotoxy(45,32);
   				else if(x==5)gotoxy(10,40);
   				else if(x==6)gotoxy(45,40);
            	cprintf("%s",mem[x]);
               back2:
	         }int a=getch();
            		if(a=='x' || a=='X')goto back1;
						else goto back2;
   	   }else if(strcmp(a,"2")==0){
            for(int x=0;x<=7;x++){
            	back3:
               clrscr();
      	      bingkaiDasar();
   	         formTittle(3);gotoxy(28,6);textbackground(3);textcolor(15);cprintf("...UBAH MENU MAKAN SIANG...");
	            tampMeMak();
          		for(int y=0;y<x;y++){
         			textcolor(15);textbackground(3);
         			if(y==0) gotoxy(10,16);
		            else if(y==1) gotoxy(45,16);
   		         else if(y==2) gotoxy(27,24);
      		      else if(y==3) gotoxy(10,32);
         		   else if(y==4) gotoxy(45,32);
                  else if(y==5) gotoxy(10,40);
                  else if(y==6) gotoxy(45,40);
                  cprintf("%s",mg[y]);
               }
               if(x<7){
                  if(x==0)gotoxy(10,16);
                  else if(x==1)gotoxy(45,16);
   					else if(x==2)gotoxy(27,24);
   					else if(x==3)gotoxy(10,32);
   					else if(x==4)gotoxy(45,32);
   					else if(x==5)gotoxy(10,40);
   					else if(x==6)gotoxy(45,40);
            		gets(mg[x]);
                     if(validasiNama(mg[x])>0)goto back3;
                     if(strcmp(mg[x],"x")==0 || strcmp(mg[x],"X")==0){
                     	x--;
                        if(x<0)goto back1;
                        goto back3;
               		}else if(cocodot(mg[x])==1)goto back3;
		         }
	         }backAsk:
   	      int a=getch();
            tampAsk();
            tampAsk();gotoxy(25,17);textbackground(2);cprintf("ANDA YAKIN UNTUK MENGUBAHNYA ?");
         	   if(a=='y' || a=='Y'){
            	 	for(int x=0;x<7;x++){
               		strcpy(mem[x],mg[x]);
	               }goto lookmemaksi;
   	         }else if(a=='n' || a=='N')goto back1;
	            else goto backAsk;
	      }else if(strcmp(a,"x")==0 || strcmp(a,"X")==0){
         	goto back;
	      }else{
   	   	wrongSelect();goto back1;
	      }
   }else if(strcmp("2",a)==0){
   	back11:
      clrscr();
      bingkaiDasar();
      formTittle(3);gotoxy(30,6);textbackground(3);textcolor(15);cprintf("...MENU MAKAN MALAM...");
		formPilihan(6,16);gotoxy(10,20);cprintf("1. LIHAT MENU MAKAN MALAM");
		formPilihan(6,26);gotoxy(10,30);cprintf("2. UBAH MENU MAKAN MALAM");
      formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
      char a[1];
   	gotoxy(57,42);textbackground(7);cprintf("   ");
   	gotoxy(58,42);gets(a);
      	if(strcmp(a,"1")==0){
            lookmemak:
            clrscr();
            bingkaiDasar();
            formTittle(3);gotoxy(30,6);textbackground(3);textcolor(15);cprintf("...MENU MAKAN MALAM...");
            tampMeMak();
         	for(int x=0;x<7;x++){
         		if(x==0)gotoxy(10,16);
            	else if(x==1)gotoxy(45,16);
   				else if(x==2)gotoxy(27,24);
   				else if(x==3)gotoxy(10,32);
   				else if(x==4)gotoxy(45,32);
   				else if(x==5)gotoxy(10,40);
   				else if(x==6)gotoxy(45,40);
            	cprintf("%s",mma[x]);
	         }back12:
            int a=getch();
            		if(a=='x' || a=='X')goto back11;
						else goto back12;
   	   }else if(strcmp(a,"2")==0){
            for(int x=0;x<=7;x++){
            	back13:
               clrscr();
      	      bingkaiDasar();
   	         formTittle(3);gotoxy(28,6);textbackground(3);textcolor(15);cprintf("...UBAH MENU MAKAN SIANG...");
	            tampMeMak();
          		for(int y=0;y<x;y++){
         			textcolor(15);textbackground(3);
         			if(y==0) gotoxy(10,16);
		            else if(y==1) gotoxy(45,16);
   		         else if(y==2) gotoxy(27,24);
      		      else if(y==3) gotoxy(10,32);
         		   else if(y==4) gotoxy(45,32);
                  else if(y==5) gotoxy(10,40);
                  else if(y==6) gotoxy(45,40);
                  cprintf("%s",mm[y]);
               }
               if(x<7){
                  if(x==0)gotoxy(10,16);
                  else if(x==1)gotoxy(45,16);
   					else if(x==2)gotoxy(27,24);
   					else if(x==3)gotoxy(10,32);
   					else if(x==4)gotoxy(45,32);
   					else if(x==5)gotoxy(10,40);
   					else if(x==6)gotoxy(45,40);
            		gets(mm[x]);
                     if(validasiNama(mm[x])>0)goto back13;
                     if(strcmp(mm[x],"x")==0 || strcmp(mm[x],"X")==0){
                     	x--;
                        if(x<0)goto back1;
                        goto back13;
               		}else if(cocodot(mm[x])==1)goto back13;
		         }
	         }backAsk1:
   	      int a=getch();
            tampAsk();
            tampAsk();gotoxy(25,17);textbackground(2);cprintf("ANDA YAKIN UNTUK MENGUBAHNYA ?");
         	   if(a=='y' || a=='Y'){
            	 	for(int x=0;x<7;x++){
               		strcpy(mma[x],mm[x]);
	               }goto lookmemak;
   	         }else if(a=='n' || a=='N')goto back11;
	            else goto backAsk1;
	      }else if(strcmp(a,"x")==0 || strcmp(a,"X")==0){
         	goto back;
	      }else{
   	   	wrongSelect();goto back11;
	      }
   }else if(strcmp("3",a)==0){
   	back111:
      clrscr();
      bingkaiDasar();
      formTittle(3);gotoxy(29,6);textbackground(3);textcolor(15);cprintf("...MENU SARAPAN PAGI...");
		formPilihan(6,16);gotoxy(10,20);cprintf("1. LIHAT MENU SARAPAN");
		formPilihan(6,26);gotoxy(10,30);cprintf("2. UBAH MENU SARAPAN");
      formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
      char a[1];
   	gotoxy(57,42);textbackground(7);cprintf("   ");
   	gotoxy(58,42);gets(a);
      	if(strcmp(a,"1")==0){
            looksrpn:
            clrscr();
            bingkaiDasar();
            formTittle(3);gotoxy(30,6);textbackground(3);textcolor(15);cprintf("...MENU SARAPAN PAGI...");
            tampMeMak();
         	for(int x=0;x<7;x++){
         		if(x==0)gotoxy(10,16);
            	else if(x==1)gotoxy(45,16);
   				else if(x==2)gotoxy(27,24);
   				else if(x==3)gotoxy(10,32);
   				else if(x==4)gotoxy(45,32);
   				else if(x==5)gotoxy(10,40);
   				else if(x==6)gotoxy(45,40);
            	cprintf("%s",gsr[x]);
	         }back112:int a=getch();
            		if(a=='x' || a=='X')goto back11;
						else goto back112;
   	   }else if(strcmp(a,"2")==0){
            for(int x=0;x<=7;x++){
            	back113:
               clrscr();
      	      bingkaiDasar();
   	         formTittle(3);gotoxy(28,6);textbackground(3);textcolor(15);cprintf("...UBAH MENU SARAPAN PAGI...");
	            tampMeMak();
          		for(int y=0;y<x;y++){
         			textcolor(15);textbackground(3);
         			if(y==0) gotoxy(10,16);
		            else if(y==1) gotoxy(45,16);
   		         else if(y==2) gotoxy(27,24);
      		      else if(y==3) gotoxy(10,32);
         		   else if(y==4) gotoxy(45,32);
                  else if(y==5) gotoxy(10,40);
                  else if(y==6) gotoxy(45,40);
                  cprintf("%s",sr[y]);
               }
               if(x<7){
                  if(x==0)gotoxy(10,16);
                  else if(x==1)gotoxy(45,16);
   					else if(x==2)gotoxy(27,24);
   					else if(x==3)gotoxy(10,32);
   					else if(x==4)gotoxy(45,32);
   					else if(x==5)gotoxy(10,40);
   					else if(x==6)gotoxy(45,40);
            		gets(sr[x]);
                     if(validasiNama(mm[x])>0)goto back113;
                     if(strcmp(sr[x],"x")==0 || strcmp(sr[x],"X")==0){
                     	x--;
                        if(x<0)goto back111;
                        goto back113;
               		}else if(cocodot(sr[x])==1)goto back113;
		         }
	         }backAsk11:
   	      int a=getch();
            tampAsk();
            tampAsk();gotoxy(25,17);textbackground(2);cprintf("ANDA YAKIN UNTUK MENGUBAHNYA ?");
         	   if(a=='y' || a=='Y'){
            	 	for(int x=0;x<7;x++){
               		strcpy(gsr[x],sr[x]);
	               }goto looksrpn;
   	         }else if(a=='n' || a=='N')goto back111;
	            else goto backAsk11;
	      }else if(strcmp(a,"x")==0 || strcmp(a,"X")==0){
         	goto back;
	      }else{
   	   	wrongSelect();goto back111;
	      }
   }else{
   	wrongSelect();goto back;
   }
}
////////////////////////////////////////////////////////////////////////////////
void jadPik(){
back:
clrscr();
bingkaiDasar();
formTittle(3);gotoxy(30,6);textbackground(3);textcolor(15);cprintf("...JADWAL PIKET...");
formPilihan(6,16);gotoxy(10,20);cprintf("1. PIKET MAKAN");
formPilihan(6,26);gotoxy(10,30);cprintf("2. PIKET SARAPAN");
formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
char a[1];
gotoxy(57,42);textbackground(7);cprintf("   ");
gotoxy(58,42);gets(a);
	if(strcmp(a,"x")==0 || strcmp(a,"X")==0)menu();
	else if(strcmp(a,"1")==0){
   	back1:
      clrscr();
      bingkaiDasar();
      formTittle(3);gotoxy(27,6);textbackground(3);textcolor(15);cprintf("...JADWAL PIKET MAKAN...");
      formPilihan(6,16);gotoxy(10,20);cprintf("1. LIHAT JADWAL PIKET MAKAN");
		formPilihan(6,26);gotoxy(10,30);cprintf("2. UBAH JADWAL PIKET MAKAN");
      formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
		char a[1];
		gotoxy(57,42);textbackground(7);cprintf("   ");
		gotoxy(58,42);gets(a);
      	if(strcmp(a,"x")==0 || strcmp(a,"X")==0)goto back;
      	else if(strcmp(a,"1")==0){
            back2:
            clrscr();
            bingkaiDasar();
				tampMeMak();
            formTittle(3);gotoxy(27,6);textbackground(3);textcolor(15);cprintf("...JADWAL PIKET MAKAN...");
            for(int x=0;x<14;x++){
					if(x==0)gotoxy(10,16);
               else if(x==1)gotoxy(10,17);
   	         else if(x==2)gotoxy(45,16);
               else if(x==3)gotoxy(45,17);
   				else if(x==4)gotoxy(27,24);
               else if(x==5)gotoxy(27,25);
   				else if(x==6)gotoxy(10,32);
               else if(x==7)gotoxy(10,33);
   				else if(x==8)gotoxy(45,32);
               else if(x==9)gotoxy(45,33);
   				else if(x==10)gotoxy(10,40);
               else if(x==11)gotoxy(10,41);
            	else if(x==12)gotoxy(45,40);
               else if(x==13)gotoxy(45,41);
            	cprintf("%s",spm[x]);
            }ba1:int a=getch();
               if(a=='x' || a=='X')goto back1;
            	else goto ba1;
         }else if(strcmp(a,"2")==0){
         	for(int x=0;x<=14;x++){
            	back3:
               clrscr();
      	      bingkaiDasar();
   	         formTittle(3);gotoxy(28,6);textbackground(3);textcolor(15);cprintf("...UBAH JADWAL PIKET MAKAN...");
	            tampMeMak();
          		for(int y=0;y<x;y++){
         			textcolor(15);textbackground(3);
         			if(y==0)gotoxy(10,16);
               	else if(y==1)gotoxy(10,17);
   	         	else if(y==2)gotoxy(45,16);
               	else if(y==3)gotoxy(45,17);
   					else if(y==4)gotoxy(27,24);
               	else if(y==5)gotoxy(27,25);
   					else if(y==6)gotoxy(10,32);
               	else if(y==7)gotoxy(10,33);
   					else if(y==8)gotoxy(45,32);
               	else if(y==9)gotoxy(45,33);
   					else if(y==10)gotoxy(10,40);
            	   else if(y==11)gotoxy(10,41);
	            	else if(y==12)gotoxy(45,40);
   	            else if(y==13)gotoxy(45,41);
            		cprintf("%s",pm[y]);
               }
               if(x<14){
                  if(x==0)gotoxy(10,16);
               	else if(x==1)gotoxy(10,17);
   	         	else if(x==2)gotoxy(45,16);
               	else if(x==3)gotoxy(45,17);
   					else if(x==4)gotoxy(27,24);
               	else if(x==5)gotoxy(27,25);
   					else if(x==6)gotoxy(10,32);
               	else if(x==7)gotoxy(10,33);
   					else if(x==8)gotoxy(45,32);
               	else if(x==9)gotoxy(45,33);
   					else if(x==10)gotoxy(10,40);
            	   else if(x==11)gotoxy(10,41);
	            	else if(x==12)gotoxy(45,40);
   	            else if(x==13)gotoxy(45,41);
            		gets(pm[x]);
                     if(validasiNama(pm[x])>0)goto back3;
                     else if(strcmp(pm[x],"x")==0 || strcmp(pm[x],"X")==0){
                     	x--;
                        if(x<0)goto back1;
                        goto back3;
               		}else if(cocodot(pm[x])==1)goto back3;
		         }
	         }backAsk:
   	      int a=getch();
            tampAsk();
            tampAsk();gotoxy(25,17);textbackground(2);cprintf("ANDA YAKIN UNTUK MENGUBAHNYA ?");
         	   if(a=='y' || a=='Y'){
            	 	for(int x=0;x<14;x++){
               		strcpy(spm[x],pm[x]);
	               }goto back2;
   	         }else if(a=='n' || a=='N')goto back1;
	            else goto backAsk;
         }else{
         	wrongSelect();goto back1;
         }
	}else if(strcmp("2",a)==0){
	   back11:
   	clrscr();
   	bingkaiDasar();
   	formTittle(3);gotoxy(27,6);textbackground(3);textcolor(15);cprintf("...JADWAL PIKET MASAK...");
   	formPilihan(6,16);gotoxy(10,20);cprintf("1. LIHAT JADWAL PIKET MASAK");
		formPilihan(6,26);gotoxy(10,30);cprintf("2. UBAH JADWAL PIKET MASAK");
      formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
		char a[1];
		gotoxy(57,42);textbackground(7);cprintf("   ");
		gotoxy(58,42);gets(a);
      	if(strcmp(a,"x")==0 || strcmp(a,"X")==0)goto back;
      	else if(strcmp(a,"1")==0){
            back22:
            clrscr();
            bingkaiDasar();
				tampMeMak();
            formTittle(3);gotoxy(27,6);textbackground(3);textcolor(15);cprintf("...JADWAL PIKET MASAK...");
            for(int x=0;x<21;x++){
					if(x==0)gotoxy(10,15);
               else if(x==1)gotoxy(10,16);
               else if(x==2)gotoxy(10,17);
               else if(x==3)gotoxy(45,15);
   	         else if(x==4)gotoxy(45,16);
               else if(x==5)gotoxy(45,17);
               else if(x==6)gotoxy(27,23);
   				else if(x==7)gotoxy(27,24);
               else if(x==8)gotoxy(27,25);
               else if(x==9)gotoxy(10,31);
	   			else if(x==10)gotoxy(10,32);
   	         else if(x==11)gotoxy(10,33);
               else if(x==12)gotoxy(45,31);
   				else if(x==13)gotoxy(45,32);
         	   else if(x==14)gotoxy(45,33);
               else if(x==15)gotoxy(10,39);
   				else if(x==16)gotoxy(10,40);
               else if(x==17)gotoxy(10,41);
               else if(x==18)gotoxy(45,39);
   	         else if(x==19)gotoxy(45,40);
	            else if(x==20)gotoxy(45,41);
               cprintf("%s",gps[x]);
            }ba2:int a=getch();
               if(a=='x' || a=='X')goto back11;
            	else goto ba2;
         }else if(strcmp(a,"2")==0){
         	for(int x=0;x<=21;x++){
            	back33:
               clrscr();
      	      bingkaiDasar();
   	         formTittle(3);gotoxy(28,6);textbackground(3);textcolor(15);cprintf("...UBAH JADWAL PIKET MASAK...");
	            tampMeMak();
          		for(int y=0;y<x;y++){
         			textcolor(15);textbackground(3);
                  if(y==0)gotoxy(10,15);
                  else if(y==1)gotoxy(10,16);
               	else if(y==2)gotoxy(10,17);
                  else if(y==3)gotoxy(45,15);
   	         	else if(y==4)gotoxy(45,16);
               	else if(y==5)gotoxy(45,17);
                  else if(y==6)gotoxy(27,23);
   					else if(y==7)gotoxy(27,24);
               	else if(y==8)gotoxy(27,25);
                  else if(y==9)gotoxy(10,31);
	   				else if(y==10)gotoxy(10,32);
   	            else if(y==11)gotoxy(10,33);
                  else if(y==12)gotoxy(45,31);
   					else if(y==13)gotoxy(45,32);
         	      else if(y==14)gotoxy(45,33);
                  else if(y==15)gotoxy(10,39);
   					else if(y==16)gotoxy(10,40);
               	else if(y==17)gotoxy(10,41);
                  else if(y==18)gotoxy(45,39);
   	         	else if(y==19)gotoxy(45,40);
	               else if(y==20)gotoxy(45,41);
                  cprintf("%s",ps[y]);
               }
               if(x<21){
                  if(x==0)gotoxy(10,15);
                  else if(x==1)gotoxy(10,16);
               	else if(x==2)gotoxy(10,17);
                  else if(x==3)gotoxy(45,15);
   	         	else if(x==4)gotoxy(45,16);
               	else if(x==5)gotoxy(45,17);
                  else if(x==6)gotoxy(27,23);
   					else if(x==7)gotoxy(27,24);
               	else if(x==8)gotoxy(27,25);
                  else if(x==9)gotoxy(10,31);
	   				else if(x==10)gotoxy(10,32);
   	            else if(x==11)gotoxy(10,33);
                  else if(x==12)gotoxy(45,31);
   					else if(x==13)gotoxy(45,32);
         	      else if(x==14)gotoxy(45,33);
                  else if(x==15)gotoxy(10,39);
   					else if(x==16)gotoxy(10,40);
               	else if(x==17)gotoxy(10,41);
                  else if(x==18)gotoxy(45,39);
   	         	else if(x==19)gotoxy(45,40);
	               else if(x==20)gotoxy(45,41);
                  gets(ps[x]);
                     if(validasiNama(ps[x])>0)goto back33;
                     else if(strcmp(ps[x],"x")==0 || strcmp(ps[x],"X")==0){
                     	x--;
                        if(x<0)goto back11;
                        goto back33;
               		}else if(cocodot(ps[x])==1)goto back33;
		         }
	         }backAsk2:
   	      int a=getch();
            tampAsk();
            tampAsk();gotoxy(25,17);textbackground(2);cprintf("ANDA YAKIN UNTUK MENGUBAHNYA ?");
         	   if(a=='y' || a=='Y'){
            	 	for(int x=0;x<21;x++){
               		strcpy(gps[x],ps[x]);
	               }goto back22;
   	         }else if(a=='n' || a=='N')goto back11;
	            else goto backAsk2;
         }else{
         	wrongSelect();goto back11;
         }
   }else{
   	wrongSelect();goto back;
   }
}
////////////////////////////////////////////////////////////////////////////////
void tampPg(){
	bingkaiDasar();
   formTittle(3);gotoxy(27,6);textbackground(3);textcolor(15);cprintf("...LAPORAN PENGELUARAN...");
   int a=31,j=16,z=0;
	for(int y=16;y<=a;y++){
   	for(int x=5;x<=73;x++){
         gotoxy(5,y);textbackground(3);cprintf(" ");
         gotoxy(10,y);textbackground(3);cprintf(" ");
         if(z<5){gotoxy(7,j+2);printf("%d\n",z+1);}
         gotoxy(73,y);textbackground(3);cprintf(" ");
         gotoxy(x,16);textbackground(3);cprintf(" ");
         gotoxy(x,a);textbackground(3);cprintf(" ");
         gotoxy(50,y);textbackground(3);cprintf(" ");
         gotoxy(x,j);textbackground(3);cprintf(" ");
         gotoxy(52,j+2);printf("Rp");
   	}if(j<26)j+=3;z++;
   }int m=12,n=15;
   for(int x=0;x<5;x++){
   	gotoxy(m,n+=3);printf("%s",pg[x]);
   }
   formPilihan(42,33);gotoxy(45,33);printf("TOTAL");
}
////////////////////////////////////////////////////////////////////////////////
void lapHut(){
 	clrscr();
   bingkaiDasar();
   tampPg();
	formTittle(3);gotoxy(31,6);textbackground(3);textcolor(15);cprintf("...LAPORAN HUTANG...");
	int m=54,n=15;
         totHut=0;
   		for(int x=0;x<5;x++){
         	gotoxy(m,n+=3);printf("%13d",hutang[x]);
            totHut+=hutang[x];
         }gotoxy(55,37);cprintf("Rp. %8d,-",totHut);
}
////////////////////////////////////////////////////////////////////////////////
void form(int a){
	for(int y=11;y<=a;y++){
   	for(int x=40;x<=70;x++){
			gotoxy(x,y);textbackground(7);cprintf(" ");
         gotoxy(40,y);textbackground(3);cprintf(" ");
         gotoxy(70,y);textbackground(3);cprintf(" ");
         for(int v=11;v<=a+1;v+=4){
	         gotoxy(x,v);textbackground(3);cprintf(" ");
         }
   	}
   }
}
////////////////////////////////////////////////////////////////////////////////
void tampPM(int a){
   clrscr();
	bingkaiDasar();
	if(a==1){
   	formTittle(3);formTittle(3);gotoxy(20,6);textbackground(3);textcolor(15);cprintf("...PENGELUARAN MAKAN SIANG DAN SORE...");
   }else if(a==2){
		formTittle(3);formTittle(3);gotoxy(25,6);textbackground(3);textcolor(15);cprintf("...PENGELUARAN SARAPAN PAGI...");
   }else if(a==3){
		formTittle(3);formTittle(3);gotoxy(19,6);textbackground(3);textcolor(15);cprintf("...PENGELUARAN TOILETRIS BULANAN...");
   }else if(a==4){
		formTittle(3);formTittle(3);gotoxy(29,6);textbackground(3);textcolor(15);cprintf("...PENGELUARAN BENSIN...");
   }else if(a==5){
		formTittle(3);formTittle(3);gotoxy(28,6);textbackground(3);textcolor(15);cprintf("...PENGELUARAN LAIN - LAIN...");
   }
	form(18);
	gotoxy(10,13);textbackground(7);printf("BIAYA PENGELUARAN/SATUAN   : ");
	gotoxy(10,17);textbackground(7);printf("BANYAKNYA                  : ");
}
////////////////////////////////////////////////////////////////////////////////
void tampHut(int a){
   clrscr();
	bingkaiDasar();
	if(a==1){
   	formTittle(3);formTittle(3);gotoxy(18,6);textbackground(3);textcolor(15);cprintf("...HUTANG MAKAN SIANG DAN SORE...");
   }else if(a==2){
		formTittle(3);formTittle(3);gotoxy(27,6);textbackground(3);textcolor(15);cprintf("...HUTANG SARAPAN PAGI...");
   }else if(a==3){
		formTittle(3);formTittle(3);gotoxy(17,6);textbackground(3);textcolor(15);cprintf("...HUTANG TOILETRIS BULANAN...");
   }else if(a==4){
		formTittle(3);formTittle(3);gotoxy(27,6);textbackground(3);textcolor(15);cprintf("...HUTANG BENSIN...");
   }else if(a==5){
		formTittle(3);formTittle(3);gotoxy(26,6);textbackground(3);textcolor(15);cprintf("...HUTANG LAIN - LAIN...");
   }
}
////////////////////////////////////////////////////////////////////////////////
void tampJePeng(){
	clrscr();
	bingkaiDasar();
   formTittle(3);formTittle(3);gotoxy(23,6);textbackground(3);textcolor(15);cprintf("...PILIH JENIS PENGELUARAN...");
	formPilihan(6,12);gotoxy(10,16);cprintf("1. MAKAN SIANG & MALAM");
	formPilihan(41,12);gotoxy(45,16);cprintf("2. SARAPAN");
	formPilihan(24,21);gotoxy(29,25);cprintf("3. TOILETRIS");
   formPilihan(6,30);gotoxy(10,34);cprintf("4. BENSIN");
	formPilihan(41,30);gotoxy(45,34);cprintf("5. LAIN - LAIN");
	formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
}
////////////////////////////////////////////////////////////////////////////////
void tampMeTran(){
	clrscr();
	bingkaiDasar();
   formTittle(3);formTittle(3);gotoxy(30,6);textbackground(3);textcolor(15);cprintf("...MENU TRANSAKSI...");
   formPilihan(6,17);gotoxy(10,21);cprintf("1. BAYAR DENGAN SALDO");
	formPilihan(41,17);gotoxy(45,21);cprintf("2. BAYAR NANTI");
	formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
   gotoxy(57,42);textbackground(7);cprintf("   ");
}
////////////////////////////////////////////////////////////////////////////////
void keuangan(){
	back:
	clrscr();
	bingkaiDasar();
	formTittle(3);gotoxy(25,6);textbackground(3);textcolor(15);cprintf("...KEUANGAN KESEJAHTERAAN...");
	formPilihan(6,17);gotoxy(10,21);cprintf("1. PENGELUARAN");
	formPilihan(23,25);gotoxy(27,29);cprintf("3. SALDO");
	formPilihan(41,17);gotoxy(45,21);cprintf("2. HUTANG");
	formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
	char a[1];
	gotoxy(57,42);textbackground(7);cprintf("   ");
	gotoxy(58,42);gets(a);
		if(strcmp(a,"x")==0 || strcmp(a,"X")==0)menu();
   	else if(strcmp(a,"1")==0){
   		pengeluaran();
	   }else if(strcmp(a,"2")==0){
      	menuHutang();
      }else if(strcmp(a,"3")==0){
      	meSal();
      }else{
   		wrongSelect();goto back;
	   }
}
////////////////////////////////////////////////////////////////////////////////
void pengeluaran(){
	back1:
   clrscr();
   bingkaiDasar();
   formTittle(3);formTittle(3);gotoxy(29,6);textbackground(3);textcolor(15);cprintf("...PENGELUARAN...");
	formPilihan(6,17);gotoxy(10,21);cprintf("1. LIHAT PENGELUARAN");
	formPilihan(41,17);gotoxy(45,21);cprintf("2. TAMBAH PENGELUARAN");
	formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
	char a[1];
	gotoxy(57,42);textbackground(7);cprintf("   ");
	gotoxy(58,42);gets(a);
		if(strcmp(a,"x")==0 || strcmp(a,"X")==0)keuangan();
      else if(strcmp(a,"1")==0){																				// lihat seluruh pengeluaran
      	back2:
         clrscr();
         bingkaiDasar();
         tampPg();
         gotoxy(23,42);printf("KETIK R UNTUK MERESET ULANG DATA");
         int m=54,n=15;
         totgpg=0;
   		for(int x=0;x<5;x++){
         	gotoxy(m,n+=3);printf("%13d",gpg[x]);
            totgpg+=gpg[x];
         }gotoxy(55,37);cprintf("Rp. %8d,-",totgpg);
         ba1:int a=getch();
         	if(a=='x' || a=='X')goto back1;
            else if(a=='r' || a=='R'){
               tampAsk();gotoxy(25,17);textbackground(2);cprintf("ANDA YAKIN UNTUK MERISETNYA ?");
               backAsk:int a=getch();
         	   	if(a=='y' || a=='Y'){
            	 		for(int x=0;x<5;x++){
               			gpg[x]=0;totgpg=0;
		               }goto back2;
   		         }else if(a=='n' || a=='N')goto back2;
	   	         else goto backAsk;
	        	}else goto ba1;
      }else if(strcmp(a,"2")==0){                                                         // tambah pengeluaran
   		back11:
         tampJePeng();
         char a[1];
			gotoxy(57,42);textbackground(7);cprintf("   ");
			gotoxy(58,42);gets(a);
           	if(strcmp(a,"x")==0 || strcmp(a,"X")==0){
            	goto back1;
         	}else if(strcmp(a,"1")==0 || strcmp(a,"2")==0 || strcmp(a,"3")==0 || strcmp(a,"4")==0 || strcmp(a,"5")==0){      																						// pengeluaran makan
               int ke=atoi(a);
               back12:
            	tampPM(ke);
					gotoxy(42,13);gets(png[ke-1][0]);
						if(strcmp(png[ke-1][0],"x")==0 || strcmp(png[ke-1][0],"X")==0){
                  	goto back11;
   					}if(validasiAngka(png[ke-1][0])>0){
							goto back12;
						}else{
							back13:
							gotoxy(42,17);gets(png[ke-1][1]);
								if(strcmp(png[ke-1][1],"x")==0 || strcmp(png[ke-1][1],"X")==0){
                  			goto back12;
                  		}else if(strcmp(png[ke-1][1],"")==0){
		      		      	formWrong();gotoxy(23,43);textbackground(4);textcolor(7);cprintf("INPUTAN TIDAK BOLEH KOSONG !!!");getch();
      		      		   tampPM(ke);gotoxy(42,13);printf("%s",png[ke-1][0]);
      				      	goto back13;
                  		}else if(validasiAngka(png[ke-1][1])>0){
		      		      	tampPM(ke);gotoxy(42,13);printf("%s",png[ke-1][0]);
      						   goto back13;
            		      }else{
				               formPilihan(42,33);gotoxy(45,33);printf("TOTAL");
									tot[ke-1]=atoi(png[ke-1][0])*atoi(png[ke-1][1]);
									gotoxy(55,37);cprintf("Rp. %8d,-",tot[ke-1]);getch();
									back14:
									tampAsk();gotoxy(25,17);textbackground(2);cprintf("ANDA YAKIN UNTUK MENAMBAHKANNYA ?");
            					ba2:int a=getch();
										if(a=='y' || a=='Y'){
                     				gpg[ke-1]+=tot[ke-1];
							            back15:
                                 tampMeTran();
                     				char a[1];
											gotoxy(58,42);gets(a);
         			               	if(strcmp(a,"x")==0 || strcmp(a,"X")==0){
                  			      		goto back14;
                           			}else if(strcmp(a,"1")==0){                          															//bayar dengan saldo
   	      		 	 						if(tot[ke-1]>saldo){
				         	        				tampAsk();gotoxy(21,17);textbackground(2);cprintf("SALDO ANDA TIDAK CUKUP, BAYAR NANTI ?");
		      					           		ba22:int a=getch();
      					   				   		if(a=='y' || a=='Y'){
              							      			hutang[ke-1]+=tot[ke-1];lapHut();								//konstanta
	                     			            }else if(a=='n' || a=='N'){
   		                    	   			   	goto back15;
				                                 }else{
         							            		goto ba22;
                        				         }
		                              	}else if(saldo>=tot[ke-1]){
														clrscr();bingkaiDasar();saldo-=tot[ke-1];formPilihan(23,23);gotoxy(35,23);printf("SISA SALDO");gotoxy(26,27);cprintf("Rp. %13d",saldo);getch();goto back2;																		//konstanta
         			                     }
                   			     	   }else if(strcmp(a,"2")==0){
				         	        				tampAsk();textbackground(2);
                                          gotoxy(21,17);cprintf("DENGAN INI HUTANG ANDA AKAN BERTAMBAH");
                                          gotoxy(34,18);cprintf("LANJUTKAN ?");
		      					           		ba3:int a=getch();
      					   				   		if(a=='y' || a=='Y'){
              							      			hutang[ke-1]+=tot[ke-1];lapHut();								//konstanta
                                             	baa:int a=getch();
   															if(a=='x' || a=='X'){
   																goto back1;
															   }else{
                                                	goto baa;
															   }
	                     			            }else if(a=='n' || a=='N'){
   		                    	   			   	goto back15;
				                                 }else{
         							            		goto ba3;
                        				         }
                                    }else{
			                           	wrongSelect();goto back15;
         			                  }
										}else if(a=='n' || a=='N'){
                  					goto back11;
               		      	}else{
   										goto ba2;
                           	}
                         }
            		}
		      }else{
   				wrongSelect();goto back11;
		      }
		}else{
   		wrongSelect();goto back1;
      }
}
////////////////////////////////////////////////////////////////////////////////
void tampIsHut(int a){
	tampHut(a);
	formPilihan(22,33);
	formPilihan(22,23);
	formPilihan(22,13);
	gotoxy(28,13);printf("TOTAL SALDO SAAT INI");gotoxy(26,17);cprintf("Rp. %13d",saldo);
	gotoxy(33,23);printf("TOTAL HUTANG");gotoxy(26,27);cprintf("Rp. %13d",hutang[a-1]);
	gotoxy(25,33);printf("MASUKAN UANG PEMBAYARAN ANDA ");gotoxy(26,37);cprintf("Rp.");
}
////////////////////////////////////////////////////////////////////////////////
void menuHutang(){
	back1:
   clrscr();
   bingkaiDasar();
   formTittle(3);formTittle(3);gotoxy(31,6);textbackground(3);textcolor(15);cprintf("...HUTANG...");
	formPilihan(6,17);gotoxy(10,21);cprintf("1. LIHAT HUTANG");
	formPilihan(41,17);gotoxy(45,21);cprintf("2. BAYAR HUTANG");
	formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
	char a[1];
	gotoxy(57,42);textbackground(7);cprintf("   ");
	gotoxy(58,42);gets(a);
		if(strcmp(a,"x")==0 || strcmp(a,"X")==0)keuangan();
      else if(strcmp(a,"1")==0){																				// lihat seluruh hutang
         back2:
         clrscr();
         bingkaiDasar();
         lapHut();
         ba1:int a=getch();
   			if(a=='x' || a=='X'){
   				goto back1;
			   }else{
   	      	goto ba1;
			   }
      }else if(strcmp(a,"2")==0){                                                         // bayar hutang
   		back11:
         tampJePeng();
         formTittle(3);formTittle(3);gotoxy(27,6);textbackground(3);textcolor(15);cprintf("...MASUKAN JENIS HUTANG...");
         char a[1];
			gotoxy(57,42);textbackground(7);cprintf("   ");
			gotoxy(58,42);gets(a);
           	if(strcmp(a,"x")==0 || strcmp(a,"X")==0){
            	goto back1;
         	}else if(strcmp(a,"1")==0 || strcmp(a,"2")==0 || strcmp(a,"3")==0 || strcmp(a,"4")==0 || strcmp(a,"5")==0){      																						// pengeluaran makan
               back12:
               clrscr();
               char bs[100];
               int ke=atoi(a);
               bingkaiDasar();
               tampIsHut(ke);
               	if(hutang[ke-1]==0){
                  	formWrong();textbackground(4);textcolor(7);
                     gotoxy(27,43);cprintf("ANDA TIDAK MEMILIKI HUTANG");
                     getch();goto back1;
	               }
               gotoxy(30,37);gets(bs);
                  if(strcmp(bs,"x")==0||strcmp(bs,"X")==0)goto back11;
               	else if(validasiAngka(bs)>0)goto back12;
               byr=atoi(bs);
					tampAsk();gotoxy(25,17);textbackground(2);cprintf("ANDA YAKIN UNTUK MEMBAYARNYA ?");
            	ba:int a=getch();
						if(a=='y' || a=='Y'){
                     if(saldo<byr){
                     	formWrong();gotoxy(17,43);textbackground(4);textcolor(7);cprintf("SALDO ANDA LEBIH KECIL DARI PEMBAYARAN ANDA !!!");
                        gotoxy(20,44);cprintf("HARAP ISI ULANG SALDO TERLEBIH DAHULU");
                        getch();goto back12;
                     }else if(saldo>=byr && hutang[ke-1]>=byr){
                  		clrscr();bingkaiDasar();formPilihan(23,23);hutang[ke-1]-=byr;saldo-=byr;gotoxy(35,23);printf("SISA HUTANG");gotoxy(26,27);cprintf("Rp. %13d",hutang[ke-1]);getch();goto back2;
                     }else if(saldo>=byr && hutang[ke-1]<byr){
								clrscr();bingkaiDasar();formPilihan(23,23);
                        saldo-=byr;
                        saldo+=byr-hutang[ke-1];
                        hutang[ke-1]=0;
                        gotoxy(35,23);printf("SISA SALDO");gotoxy(26,27);cprintf("Rp. %13d",saldo);getch();goto back2;
                  	}
                  }else if(a=='n' || a=='N'){
               	   goto back11;
	               }else{
   						goto ba;
				   	}
            }else{
   				wrongSelect();goto back11;
		   	}
		}else{
   		wrongSelect();goto back1;
	   }
}
////////////////////////////////////////////////////////////////////////////////
void meSal(){
	back1:
	clrscr();
	bingkaiDasar();
	formTittle(3);gotoxy(30,6);textbackground(3);textcolor(15);cprintf("...INFORMASI SALDO...");
	formPilihan(6,17);gotoxy(10,21);cprintf("1. LIHAT SALDO");
	formPilihan(41,17);gotoxy(45,21);cprintf("2. ISI ULANG SALDO");
	formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
	char a[1];
	gotoxy(57,42);textbackground(7);cprintf("   ");
	gotoxy(58,42);gets(a);
		if(strcmp(a,"x")==0 || strcmp(a,"X")==0)keuangan();
   	else if(strcmp(a,"1")==0){
      	back2:
   		clrscr();bingkaiDasar();
      	formTittle(3);gotoxy(32,6);textbackground(3);textcolor(15);cprintf("...BANYAK SALDO...");
      	formPilihan(23,23);gotoxy(33,23);printf("TOTAL SALDO");gotoxy(26,27);cprintf("Rp. %13d",saldo);
      	ba1:int a=getch();
      		if(a=='x' || a=='X')goto back1;
         	else goto ba1;
	   }else if(strcmp(a,"2")==0){
   		back3:
      	char sld[100];
      	tampIsal();
			gotoxy(35,27);gets(sld);
	         if(strcmp(sld,"x")==0 || strcmp(sld,"X")==0)goto back1;
      		else if(validasiAngka(sld)>0)goto back3;
               tm=atoi(sld);
    				tampIsal();
		      	gotoxy(30,27);cprintf("%13d",tm);
               getch();tampAsk();gotoxy(25,17);textbackground(2);cprintf("ANDA YAKIN UNTUK MENAMBAHKANNYA ?");
      			bin:int a=getch();
						if(a=='y' || a=='Y');
         			else if(a=='n' || a=='N')goto back1;
   					else goto bin;
      			saldo+=tm;goto back2;
      }else{
   		wrongSelect();goto back1;
	   }
}
////////////////////////////////////////////////////////////////////////////////
void tampIsal(){
	clrscr();
   bingkaiDasar();
   formTittle(3);gotoxy(28,6);textbackground(3);textcolor(15);cprintf("...PENGISIAN SALDO...");
	formPilihan(22,23);
	formPilihan(22,13);
	gotoxy(28,13);printf("TOTAL SALDO SAAT INI");gotoxy(26,17);cprintf("Rp. %13d",saldo);
	gotoxy(25,23);printf("MASUKAN BESAR PENGISIAN SALDO");
   gotoxy(26,27);cprintf("Rp.");
}
////////////////////////////////////////////////////////////////////////////////
void kaPe(){
	clrscr();
	bingkaiDasar();
   background();
   formTittle(3);gotoxy(30,6);textbackground(3);textcolor(15);cprintf("...KATA PENGANTAR...");
   back1:
   gotoxy(10,14);cprintf("                BISMILLAAHIRROHMAANIRROHIIM                ");
	gotoxy(10,17);cprintf("    Marilah kita panjatkan  puji  dan  syukur kita terhadap");
	gotoxy(10,18);cprintf("Allah SWT, karena berkat rahmatnya  beserta ridho-Nya, saya");
	gotoxy(10,19);cprintf("sebagai penulis program dapat  menyelesaikan tugas UAS yang");
	gotoxy(10,20);cprintf("berjudul :                                                 ");
	gotoxy(10,21);cprintf("                  APLIKASI KESEJAHTERAAN                   ");
	gotoxy(10,23);cprintf("    Tidak lupa saya ucapkan terima kasih yang sebesar-besar");
	gotoxy(10,24);cprintf("nya kepada para tutor yang mana tidak pernah mengenal lelah");
	gotoxy(10,25);cprintf("untuk mengajarkan  saya  sehingga terciptanya aplikasi ini.");
	gotoxy(10,27);cprintf("    Semoga ilmu yang di ajarkan dapat sangat bermanfaat dan");
	gotoxy(10,28);cprintf("dapat  digunakan  dalam  kebaikan  sehingga  menjadi gudang");
	gotoxy(10,29);cprintf("umumnya untuk kita semua mahasiswa PUB.                    ");
   int a=getch();
   if(a=='x' || a=='X')ta();
   else goto back1;
}
////////////////////////////////////////////////////////////////////////////////
void iAp(){
   clrscr();
   bingkaiDasar();
   background();
   formTittle(3);gotoxy(25,6);textbackground(3);textcolor(15);cprintf("...INFO PERANCANG APLIKASI...");
   back1:
   gotoxy(10,14);cprintf("                BIODATA PERANCANG APLIKASI                 ");
   gotoxy(10,17);cprintf("  NAMA LENGKAP    : RANDI FIRMANSYAH                       ");
   gotoxy(10,18);cprintf("  TTL             : BANDUNG,04 JUNI 2000                   ");
   gotoxy(10,19);cprintf("  ALAMAT          : KP.SEUSEUPAN                           ");
   gotoxy(10,20);cprintf("  RT/RW           : 003/004                                ");
   gotoxy(10,21);cprintf("  DESA            : CICANGKANG HILIR                       ");
   gotoxy(10,22);cprintf("  KECAMATAN       : CIPONGKOR                              ");
   gotoxy(10,23);cprintf("  KABUPATEN       : BANDUNG BARAT                          ");
   gotoxy(10,24);cprintf("  PRODI           : S1 - TEKNIK INFORMATIKA                ");
   gotoxy(10,25);cprintf("  TUTOR PELATIHAN : ALDI MULYADI & MONICA DIAH ASWANTI     ");
   gotoxy(10,26);cprintf("  TUTOR 1         : IHSAN NASIHIN                          ");
   gotoxy(10,27);cprintf("  TUTOR 2         : ALDI MULYADI                           ");
   int a=getch();
   if(a=='x' || a=='X')ta();
   else goto back1;
}
////////////////////////////////////////////////////////////////////////////////
void ta(){
	clrscr();
   bingkaiDasar();
   formTittle(3);gotoxy(30,6);textbackground(3);textcolor(15);cprintf("...INFO APLIKASI...");
   formPilihan(6,17);gotoxy(10,21);cprintf("1. KATA PENGANTAR");
   formPilihan(41,17);gotoxy(45,21);cprintf("2. INFO PERANCANG APLIKASI");
   formTittle(39);gotoxy(23,42);cprintf("SILAHKAN MASUKAN PILIHAN ANDA : ");
   char a[1];
   gotoxy(57,42);textbackground(7);cprintf("   ");
   gotoxy(58,42);gets(a);
      if(strcmp(a,"x")==0 || strcmp(a,"X")==0)menu();
      else if(strcmp(a,"1")==0){
         kaPe();
      }else if(strcmp(a,"2")==0){
         iAp();
      }else{
         wrongSelect();ta();
      }
}
////////////////////////////////////////////////////////////////////////////////
void background(){
	for(int x=11;x<32;x++){
		for(int y=4;y<75;y++){
   		gotoxy(y,x);textbackground(6);cprintf(" ");
	   }
	}
	for(int x=12;x<33;x++){
		for(int y=5;y<76;y++){
   		gotoxy(y,x);textbackground(3);cprintf(" ");
	   }
	}
}
////////////////////////////////////////////////////////////////////////////////
//============================================================================//
//                             RANDI FIRMANSYAH                               //
//                          PROJECT KESEJAHTERAAN                             //
//                           STARTING APLICATION                              //
//============================================================================//
////////////////////////////////////////////////////////////////////////////////
main(){

welcome();

getch();
}