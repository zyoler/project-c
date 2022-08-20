//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
//>                       UJIAN AKHIR SEMESTER                               >//
//>                  PROJECT  APLIKASI  BULUTANGKIS                          >//
//>                      			OLEH:                                       >//
//>                          RIAN HIDAYAT                                    >//
//>               JURUSAN D3 MANAJEMEN INFORMATIKA                           >//
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
//			Screen Buffer Size:   Window Size :     Window Position :            //
//       Width		: 120        Width	: 120     Left		: 175                //
//			Height   : 55         Height	: 55      Top		: 0                  //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>LIBRARY<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
#include <stdio.h>                      									            //
#include <conio.h>                                       							//
#include <string.h>                                									//
#include <windows.h>                               									//
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>PROTOTYPE<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void bingkaiAwal();    void loading();         void bingkaiMenu();    void validasipilih();  void validasipilih2();  void validasiAdmin(); //
void validasipilih3(); void validasipilih32(); void validasicabang(); void pekerjaan();      void masuk();           void masuk1();        //
void bingkaiTengah();  void bingkaiAkun();     void kotakTengah();    void alamat();         void usia();            void masuk2();        //
void loadingAwal();    void akun();            void nohp();           void masuk3();         void masukadmin();      void tampilanAwal();  //
void nama();           void kotaasal();        void admin();			 void mendaftar();      void jenisKelamin();	   void username();      //
void sandi();          void menu();            void menu2();          void kalender();       void england();         void indonesia();     //
void china();          void malaysia();        void sblm();           void jadwal();         void jadwal1();         void bagan();         //
void cabang();         void cabang2();         void skor();           void skor2();          void skor3();           void skorfinal();     //
void set3();           void set31();           void set32();          void masukanlolos1();  void masukanlolos2();   void profil();        //
void perlengkapan();   void perlengkapan1();   void perlengkapan2();  void pilihper();       void validasibeli();    void validasiper();   //
void else1();          void belilagi();        void hiasanmenu();     void sblm2();          void england2();        void indonesia2();    //
void china2();         void malaysia2();       void sblmmasuk();      void tambahstok();     void tambahlagi();                           //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>VARIABEL GLOBAL<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
char pilih[2];         char kembali[2];        char usia2[2];         char user[20];         char keluar[1];         char pekerjaan2[25];  //
char sandi2[20];       char nama2[25];         char nohp2[13];        char almt[25];         char jk1[20];           char kota[25];        //
char lskor[1];         char lolos[20];         char negara[20];       char beli[1];          char perl[7];           char uang2[8];        //
char banyak[3];        char pemainA[17];       char pemainB[17];      char pemainC[17];      char pemainD[17];       char negaraA[2][20];  //
char negaraB[2][20];   char negaraC[2][20];    char negaraD[2][20];   char nomor[5]={'1','2','3','4','5'};           char nama3[20];       //
char sandi3[20];       char harga1[8];         char stok12[3];        char tambah[1];        int skorX=0;            int skorY=0;          //
int tamp1;             int tamp2;              int tamp=0;            int skorA=0;           int skorB=0;            int setA=0;           //
int setB=0;            int setC=0;             int setD=0;            int a=1;               int banyak2;            int total;            //
int total2=0;          int uang3;              int usi;               int stok[7]={20,25,50,15,10,20,30};            int c;                //
int setA1=0;           int setB1=0;
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
int validasihuruf(char a[]);                   int validasiangka(char a[]);        int validasisandi(char a[]);                            //
int validasialamat(char a[]);                  int validasiuser(char a[]);                                                                 //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>BINGKAI AWAL<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void bingkaiAwal(){                                                           //
	for(int a=1;a<=54;a++){                                                    //
   	for(int b=1;b<=120;b++){                                                //
      	textcolor(13);                                                       //
         if(a==1||a==3||a==54||a==52||b==1||b==3||b==120||b==118){            //
         	cprintf("%c",219);Sleep(0.1);                                     //
         }else{                                                               //
         	printf(" ");                                                      //
         }                                                                    //
      }                                                                       //
   }                                                                          //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>BINGKAI MENU<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void bingkaiMenu(){                                                           //
	for(int a=1;a<=54;a++){                                                    //
   	for(int b=1;b<=120;b++){                                                //
      	textcolor(13);                                                       //
         if(a==1||a==3||a==54||a==52||b==1||b==3||b==120||b==118||b==16||     //
         	b==18||a==9&&a<=18||a==11&&a<=18){                                //
         	cprintf("%c",219);Sleep(0.5);                                     //
         }else{                                                               //
         	printf(" ");                                                      //
         }                                                                    //
      }                                                                       //
   }                                                                          //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>BINGKAI TENGAH<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void bingkaiTengah(){                                                         //
	for(int a=1;a<=10;a++){                                                    //
   	for(int b=1;b<=50;b++){                                                 //
         if(a==1||a==10||b==1||b==50){                                        //
         	textcolor(9 );gotoxy(42+b,15+a);cprintf("%c",219);Sleep(3);       //
            textcolor(13);gotoxy(43+b,16+a);cprintf("%c",219);Sleep(3);       //
         }                                                                    //
      }                                                                       //
   }                                                                          //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>BINGKAI AKUN<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void bingkaiAkun(){                                                           //
	for(int a=1;a<=54;a++){                                                    //
   	for(int b=1;b<=120;b++){                                                //
      	textcolor(13);                                                       //
         if(a==1||a==3||a==54||a==52||b==1||b==3||b==120||b==118||            //
         	a==14||a==16||b==11&&a<=16||b==13&&a<=16||b==109&&a<=16||         //
            b==111&&a<=16||b==59&&a>=16||b==61&&a>=16){                       //
         	cprintf("%c",219);Sleep(0.5);                                     //
         }else{                                                               //
         	printf(" ");                                                      //
         }                                                                    //
      }                                                                       //
   }                                                                          //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>LOADING AWAL<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void loadingAwal(){                                                           //
	textcolor(14);gotoxy(20,35);cprintf("Memuat");                             //
	for(int a=2;a<=100;a+=2){                                                  //
      gotoxy(28,35);printf("%d %",a);Sleep(80);                               //
   }                                                                          //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>KOTAK TENGAH<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void kotakTengah(int p,int p1,int l,int l1,int x,int y,int x1,int y2){        //
	for(int a=1;a<=p;a++){                                                     //
   	for(int b=1;b<=l;b++){                                                  //
     		textcolor(13);                                                       //
      	gotoxy(x+b,y+a);cprintf("%c",219);                                   //
         gotoxy(x+b,y+a);cprintf("%c",219);                                   //
         gotoxy(x+b,y+a);cprintf("%c",219);                                   //
         gotoxy(x+b,y+a);cprintf("%c",219);                                   //
         gotoxy(x+b,y+a);cprintf("%c",219);                                   //
      }                                                                       //
   }for(int a=1;a<=p1;a++){                                                   //
   	for(int b=1;b<=l1;b++){                                                 //
     		textcolor(9);                                                        //
      	gotoxy(x1+b,y2+a);cprintf("%c",219);                                 //
         gotoxy(x1+b,y2+a);cprintf("%c",219);                                 //
         gotoxy(x1+b,y2+a);cprintf("%c",219);                                 //
         gotoxy(x1+b,y2+a);cprintf("%c",219);                                 //
         gotoxy(x1+b,y2+a);cprintf("%c",219);                                 //
      }                                                                       //
	}                                                                          //
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>VALIDASI PILIH<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////////////////////
void validasipilih(){                                                                                     //
	gotoxy(71,33);gets(pilih);                                                                             //
   if(strcmp(pilih,"1")==0){                                                                              //
     	clrscr();akun();                                                                                    //
   }else if(strcmp(pilih,"2")==0){                                                                        //
    	clrscr();masuk1();                                                                                  //
   }else if(strcmp(pilih,"3")==0){                                                                        //
     	clrscr();admin();                                                                                   //
   }else if(strcmp(pilih,"4")==0){                                                                        //
      gotoxy(47,49);printf("Anda yakin ingin keluar (y/t) : ");gotoxy(79,49);gets(keluar);                //
     	if(strcmp(keluar,"y")==0||strcmp(keluar,"Y")==0){                                                   //
        	exit(4);                                                                                         //
      }else if(strcmp(keluar,"t")==0||strcmp(keluar,"T")==0){                                             //
         gotoxy(47,49);printf("                                    ");                                    //
         gotoxy(71,33);printf(" ");gotoxy(71,33);gets(pilih);                                             //
      }else{                                                                                              //
       	while(true){                                                                                     //
           	gotoxy(79,49);printf(" ");gotoxy(79,49);gets(keluar);                                         //
           	if(strcmp(keluar,"y")==0||strcmp(keluar,"Y")==0){                                             //
        			exit(0);                                                                                   //
            	}else if(strcmp(keluar,"t")==0||strcmp(keluar,"T")==0){                                    //
              		gotoxy(79,49);printf(" ");gotoxy(71,33);printf(" ");gotoxy(71,33);gets(pilih);          //
                  while(true){                                                                            //
                  	if(strcmp(pilih,"1")==0){                                                            //
      						clrscr();akun();                                                                  //
      					}else if(strcmp(pilih,"2")==0){                                                      //
      						masuk();                                                                          //
      					}else if(strcmp(pilih,"3")==0){                                                      //
      						admin();                                                                          /////
      					}else if(strcmp(pilih,"4")==0){                                                         //
      						gotoxy(47,49);printf("Anda yakin ingin keluar (y/t) : ");gotoxy(79,49);gets(keluar); //
      						if(strcmp(keluar,"y")==0||strcmp(keluar,"Y")==0){                                    //
         						exit(4);                                                                          //
                        }                                                                                    //
      					}                                                                                       //
                  }                                                                                          //
         		}                                                                                             //
            }                                                                                                //
         }                                                                                                   //
      }else{                                                                                                 //
      	while(true){                                                                                        //
         	gotoxy(71,33);printf("                ");                                                        //
         	gotoxy(50,50);printf("Masukan Tidak Valid(coba lagi)");Sleep(1000);                              //
         	gotoxy(50,50);printf("                              ");validasipilih();                          //
         }                                                                                                   //
      }                                                                                                      //
}                                                                                                            //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>VALIDASI CABANG<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<</////////////////////////////////
void validasicabang(){                                                          //
	gotoxy(22,48);printf("Anda hanya bisa melihat Live Skor sesuai jadwal");     //
   gotoxy(22,50);printf("Tekan 99 untuk kembali ke menu, 98 untuk kembali : "); //
   gotoxy(75,50);gets(pilih);                                                   //
   while(true){                                                                 //
   	if(strcmp(pilih,"99")==0){                                                //
      	clrscr();menu();validasipilih2();getch();                              //
      }else if(strcmp(pilih,"98")==0){                                          //
      	clrscr();bagan();cabang2();getch();                                    //
      }else{                                                                    //
        	gotoxy(75,50);printf("         ");gotoxy(75,50);gets(pilih);           //
      }                                                                         //
   }                                                                            //
}                                                                               //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>VALIDASI PILIH2<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////////////////////////
void validasipilih2(){                                                                                        //
	gotoxy(94,6);gets(pilih);                                                                                  //
   while(true){                                                                                               //
      if(strcmp(pilih,"1")==0){                                                                               //
      	clrscr();jadwal();                                                                                   //
      }else if(strcmp(pilih,"2")==0){                                                                         //
      	clrscr();bagan();cabang2();                                                                          //
      }else if(strcmp(pilih,"3")==0){                                                                         //
      	clrscr();profil();                                                                                   //
      }else if(strcmp(pilih,"4")==0){                                                                         //
      	clrscr();perlengkapan();                                                                             //
      }else if(strcmp(pilih,"5")==0){                                                                         //
         gotoxy(72,43);printf("Anda yakin ingin keluar (y/t) : ");gotoxy(104,43);gets(keluar);                //
      	if(strcmp(keluar,"y")==0||strcmp(keluar,"Y")==0){                                                    //
         	clrscr();mendaftar();                                                                             //
         }else if(strcmp(keluar,"t")==0||strcmp(keluar,"T")==0){                                              //
            gotoxy(72,43);printf("                                    ");                                     //
            gotoxy(94,6);printf(" ");gotoxy(94,6);gets(pilih);                                                //
         }else{                                                                                               //
         	while(true){                                                                                      //
            	gotoxy(104,43);printf(" ");gotoxy(104,43);gets(keluar);                                        //
            	if(strcmp(keluar,"y")==0||strcmp(keluar,"Y")==0){                                              //
         			exit(0);                                                                                    //
            	}else if(strcmp(keluar,"t")==0||strcmp(keluar,"T")==0){                                        //
            		gotoxy(72,43);printf("                                        ");                           //
                  while(true){gotoxy(94,6);printf(" ");gotoxy(94,6);gets(pilih);                              //
                  	if(strcmp(pilih,"1")==0){                                                                //
      						clrscr();jadwal();                                                                    //
      					}else if(strcmp(pilih,"2")==0){                                                          //
      						clrscr();bagan();cabang2();                                                           //
      					}else if(strcmp(pilih,"3")==0){                                                          //
      						clrscr();profil();                                                                    //
      					}else if(strcmp(pilih,"4")==0){                                                          //
      						clrscr();perlengkapan();                                                              //
      					}else if(strcmp(pilih,"5")==0){                                                          //
      						gotoxy(72,43);printf("Anda yakin ingin keluar (y/t) : ");gotoxy(104,43);gets(keluar); //
      						if(strcmp(keluar,"y")==0||strcmp(keluar,"Y")==0){                                     //
         						clrscr();mendaftar();                                                              //
                        }                                                                                     //
      					}                                                                                        //
                  }                                                                                           //
         		}                                                                                              //
            }                                                                                                 //
         }                                                                                                    //
      }else{                                                                                                  //
      	while(true){                                                                                         //
         	gotoxy(94,6);printf("                ");                                                          //
         	gotoxy(72,41);printf("Masukan Tidak Valid(coba lagi)");Sleep(1000);                               //
         	gotoxy(72,41);printf("                              ");validasipilih2();                          //
         }                                                                                                    //
      }                                                                                                       //
   }                                                                                                          //
}                                                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>VALIDASI ADMIN<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////////////////////////
void validasiAdmin(){                                                                                         //
	gotoxy(94,6);gets(pilih);                                                                                  //
   while(true){                                                                                               //
      if(strcmp(pilih,"1")==0){                                                                               //
      	clrscr();jadwal1();                                                                                  //
      }else if(strcmp(pilih,"2")==0){                                                                         //
      	clrscr();bagan();cabang();                                                                           //
      }else if(strcmp(pilih,"4")==0){                                                                         //
      	clrscr();perlengkapan2();                                                                            //
      }else if(strcmp(pilih,"5")==0){                                                                         //
         gotoxy(72,43);printf("Anda yakin ingin keluar (y/t) : ");gotoxy(104,43);gets(keluar);                //
      	if(strcmp(keluar,"y")==0||strcmp(keluar,"Y")==0){                                                    //
         	clrscr();mendaftar();                                                                             //
         }else if(strcmp(keluar,"t")==0||strcmp(keluar,"T")==0){                                              //
            gotoxy(72,43);printf("                                    ");                                     //
            gotoxy(94,6);printf(" ");gotoxy(94,6);gets(pilih);                                                //
         }else{                                                                                               //
         	while(true){                                                                                      //
            	gotoxy(104,43);printf(" ");gotoxy(104,43);gets(keluar);                                        //
            	if(strcmp(keluar,"y")==0||strcmp(keluar,"Y")==0){                                              //
         			exit(0);                                                                                    //
            	}else if(strcmp(keluar,"t")==0||strcmp(keluar,"T")==0){                                        //
            		gotoxy(72,43);printf("                                        ");                           //
                  while(true){gotoxy(94,6);printf(" ");gotoxy(94,6);gets(pilih);                              //
                  	if(strcmp(pilih,"1")==0){                                                                //
      						clrscr();jadwal1();                                                                   //
      					}else if(strcmp(pilih,"2")==0){                                                          //
      						clrscr();bagan();cabang();                                                            //
      					}else if(strcmp(pilih,"4")==0){                                                          //
      						clrscr();perlengkapan2();                                                             //
      					}else if(strcmp(pilih,"5")==0){                                                          //
      						gotoxy(72,43);printf("Anda yakin ingin keluar (y/t) : ");gotoxy(104,43);gets(keluar); //
      						if(strcmp(keluar,"y")==0||strcmp(keluar,"Y")==0){                                     //
         						clrscr();mendaftar();                                                              //
                        }                                                                                     //
      					}                                                                                        //
                  }                                                                                           //
         		}                                                                                              //
            }                                                                                                 //
         }                                                                                                    //
      }else{                                                                                                  //
      	while(true){                                                                                         //
         	gotoxy(94,6);printf("                ");                                                          //
         	gotoxy(72,41);printf("Masukan Tidak Valid(coba lagi)");Sleep(1000);                               //
         	gotoxy(72,41);printf("                              ");validasiAdmin();                           //
         }                                                                                                    //
      }                                                                                                       //
   }                                                                                                          //
}                                                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>VALIDASI PILIH3<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////////////////////////
void validasipilih3(){                                                        //
	gotoxy(38,48);gets(pilih);                                                 //
   if(strcmp(pilih,"1")==0){                                                  //
     	england();getch();                                                      //
   }else if(strcmp(pilih,"2")==0){                                            //
     	indonesia();getch();                                                    //
   }else if(strcmp(pilih,"3")==0){                                            //
     	china();getch();                                                        //
   }else if(strcmp(pilih,"4")==0){                                            //
     	malaysia();getch();                                                     //
   }else if(strcmp(pilih,"99")==0){                                           //
     	clrscr();menu();getch();                                                //
   }else{                                                                     //
  		while(true){                                                            //
         gotoxy(38,48);printf("               ");                             //
         gotoxy(20,50);printf("Masukan Tidak Valid(coba lagi)");Sleep(1000);  //
         gotoxy(20,50);printf("                              ");              //
         validasipilih3();                                                    //
      }                                                                       //
   }                                                                          //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>VALIDASI PILIH32<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void validasipilih32(){                                                       //
	gotoxy(38,48);gets(pilih);                                                 //
   if(strcmp(pilih,"1")==0){                                                  //
     	england2();getch();                                                     //
   }else if(strcmp(pilih,"2")==0){                                            //
     	indonesia2();getch();                                                   //
   }else if(strcmp(pilih,"3")==0){                                            //
     	china2();getch();                                                       //
   }else if(strcmp(pilih,"4")==0){                                            //
     	malaysia2();getch();                                                    //
   }else if(strcmp(pilih,"99")==0){                                           //
     	clrscr();menu2();getch();                                               //
   }else{                                                                     //
   	while(true){                                                            //
         gotoxy(38,48);printf("               ");                             //
         gotoxy(20,50);printf("Masukan Tidak Valid(coba lagi)");Sleep(1000);  //
         gotoxy(20,50);printf("                              ");              //
         validasipilih32();                                                   //
      }                                                                       //
   }                                                                          //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>VALIDASI SEBELUMNYA<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void sblm(){                                                                  //
	gotoxy(106,46);gets(kembali);                                              //
   while(true){                                                               //
   	if(strcmp(kembali,"99")==0){                                            //
      	clrscr();menu();validasipilih2();getch();                            //
      }else if(strcmp(kembali,"98")==0){                                      //
        	clrscr();jadwal();                                                   //
      }else{                                                                  //
        	gotoxy(78,50);cprintf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000); //
         gotoxy(78,50);cprintf("                              ");             //
        	gotoxy(106,46);printf("      ");gotoxy(106,46);gets(kembali);        //
      }                                                                       //
   }                                                                          //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>VALIDASI SEBELUMNYA<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void sblm2(){                                                                 //
	gotoxy(106,46);gets(kembali);                                              //
   while(true){                                                               //
   	if(strcmp(kembali,"99")==0){                                            //
      	clrscr();menu2();validasiAdmin();getch();                            //
      }else if(strcmp(kembali,"98")==0){                                      //
        	clrscr();jadwal1();                                                  //
      }else{                                                                  //
        	gotoxy(78,50);cprintf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000); //
         gotoxy(78,50);cprintf("                              ");             //
       	gotoxy(106,46);printf("      ");gotoxy(106,46);gets(kembali);        //
      }                                                                       //
   }                                                                          //
}                                                                             //
                                                                              //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>VALIDASI HURUF<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////
int validasihuruf(char a[]){                                                              //
	int valhur=0;int huruf2=0;                                                             //
    if(a[0]==' '||a[strlen(a)-1]==' '){                                                   //
   		huruf2=1;                                                                        //
      	return huruf2;                                                                   //
    }                                                                                     //
	for(int x=0;x<strlen(a);x++){                                                          //
 		if(!(a[x]>='a'&&a[x]<='z'||a[x]>='A'&&a[x]<='Z'||a[x]==' '&&a[x+1]!=' '||a[x]=='-'||a[x]=='\'')){//
    		valhur++;                                                                        //
 		}                                                                                   //
	}                                                                                      //
   return valhur;                                                                         //
}                                                                                         //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>VALIDASI USER<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////
int validasiuser(char a[]){                                                               //
	int valhur=0;int huruf2=0;                                                             //
    if(a[0]==' '){                                                                        //
   		huruf2=1;                                                                        //
      	return huruf2;                                                                   //
    }                                                                                     //
	for(int x=0;x<strlen(a);x++){                                                          //
 		if(!(a[x]>='a'&&a[x]<='z')){                                                        //
    		valhur++;                                                                        //
 		}                                                                                   //
	}                                                                                      //
   return valhur;                                                                         //
}                                                                                         //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>VALIDASI SANDI<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////
int validasisandi(char a[]){                                                              //
	int valhur=0;int huruf2=0;                                                             //
    if(a[0]==' '){                                                                        //
   		huruf2=1;                                                                        //
      	return huruf2;                                                                   //
    }                                                                                     //
	for(int x=0;x<strlen(a);x++){                                                          //
 		if(!(a[x]>='a'&&a[x]<='z'||a[x]>='0'&&a[x]<='9')){                                  //
    		valhur++;                                                                        //
 		}                                                                                   //
	}                                                                                      //
   return valhur;                                                                         //
}                                                                                         //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>VALIDASI ALAMAT<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////////////////////////////////////
int validasialamat(char a[]){                                                                                              //
   int val=0;int huruf2=0;                                                                                                 //
   if(a[0]==' '||a[0]=='.'||a[0]==','||a[0]=='/'||a[strlen(a)-1]==' '){                                                    //
   	huruf2=1;                                                                                                            //
      return huruf2;                                                                                                       //
   }                                                                                                                       //
	for(int i=0;i<strlen(a);i++){                                                                                           //
 		if(!(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'||a[i]=='.'||a[i]>='0'&&a[i]<='9'||a[i]=='/'||a[i]==','||a[i]==' '&&a[i+1]!=' ')){//
    		val++;                                                                                                            //
 		}                                                                                                                    //
	}                                                                                                                       //
   return val;                                                                                                             //
}                                                                                                                          //
                                                                                                                           //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>VALIDASI ANGKA<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////////////////////////////////////
int validasiangka(char a[]){                                                  //
   int valAng=0;int huruf2=0;                                                 //
   if(a[0]==' '){                                                             //
   	huruf2=1;                                                               //
      return huruf2;                                                          //
   }                                                                          //
	for(int i=0;i<strlen(a);i++){                                              //
 		if(!(a[i]>='0'&&a[i]<='9')){                                            //
    		valAng++;                                                            //
 		}                                                                       //
	}                                                                          //
   return valAng;                                                             //
}                                                                             //
                                                                              //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>TAMPILAN AWAL<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<</////////////////////////////////////////
void tampilanAwal(){                                                                                                 //
   bingkaiAwal();                                                                                                    //
   	for(int a=1;a<=30 ;a++){                                                                                       //
      	textcolor(13);Sleep(50);                                                                                    //
   		gotoxy(8+a,6) ;cprintf("  *********  ********* ***         ********  ***    ***  ********  *********** ");  //
         gotoxy(8+a,7) ;cprintf(" *********  *********  ***        ********** ****  **** **********  *********  ");  //
         gotoxy(8+a,8) ;cprintf(" ***        ***        ***        ***    *** ********** ***    ***     ***     ");  //
         gotoxy(8+a,9) ;cprintf(" *********  ********** ***        ********** ********** **********     ***     ");  //
         gotoxy(8+a,10);cprintf("  ********* ********** ***        ********** *** ** *** **********     ***     ");  //
         gotoxy(8+a,11);cprintf("        *** ***        ***        ***    *** ***    *** ***    ***     ***     ");  //
         gotoxy(8+a,12);cprintf("  ********* *********  *********  ***    *** ***    *** ***    ***     ***     ");  //
         gotoxy(8+a,13);cprintf(" *********   *********  ********* ***    *** ***    *** ***    ***     ***     ");  //
   	}for(int a=3;a<=47;a++){                                                                                       //
      	textcolor(11);Sleep(50);                                                                         /////////////
   		gotoxy(2+a,15);cprintf(" ********    ********  ***********  ********  ***    ***  ********* ");  //
         gotoxy(2+a,16);cprintf(" *********  **********  *********  ********** ****   *** *********  ");  //
         gotoxy(2+a,17);cprintf(" ***   **** ***    ***     ***     ***    *** *****  *** ***        ");  //
         gotoxy(2+a,18);cprintf(" ***    *** **********     ***     ********** ********** *********  ");  //
         gotoxy(2+a,19);cprintf(" ***    *** **********     ***     ********** ********** ********** ");  //
         gotoxy(2+a,20);cprintf(" ***   **** ***    ***     ***     ***    *** ***  ***** ***    *** ");  //
         gotoxy(2+a,21);cprintf(" *********  ***    ***     ***     ***    *** ***   **** ********** ");  //
         gotoxy(2+a,22);cprintf(" *******    ***    ***     ***     ***    *** ***    ***  ********  ");  //
   	}for(int a=3;a<=92;a++){                                                                            //
      	textcolor(13);Sleep(50);                     //////////////////////////////////////////////////////
   		gotoxy(8+a,24);cprintf(" ********   *** ");  //
         gotoxy(8+a,25);cprintf(" *********  *** ");  //
         gotoxy(8+a,26);cprintf(" ***   **** *** ");  //
         gotoxy(8+a,27);cprintf(" ***    *** *** ");  //
         gotoxy(8+a,28);cprintf(" ***    *** *** ");  //
         gotoxy(8+a,29);cprintf(" ***   **** *** ");  //
         gotoxy(8+a,30);cprintf(" *********  *** ");  //
         gotoxy(8+a,31);cprintf(" ********   *** ");  /////////////////////////////////////////////////////////////
   	}for(int a=3;a<=32;a++){                                                                                   //
      	textcolor(11);Sleep(50);                                                                                //
   		gotoxy(10+a,33);cprintf("  ********   ********  ***       *** ***    ***  ********   ********* *** ");  //
         gotoxy(10+a,34);cprintf(" ********** ********** ***       *** ***   ***  ********** *********  *** ");  //
         gotoxy(10+a,35);cprintf(" ***    *** ***    *** ***       *** ***  ***   ***    *** ***        *** ");  //
         gotoxy(10+a,36);cprintf(" ********** ********** ***       *** *******    ********** ********** *** ");  //
         gotoxy(10+a,37);cprintf(" ********** *********  ***       *** *******    ********** ********** *** ");  //
         gotoxy(10+a,38);cprintf(" ***    *** ***        ***       *** ***  ***   ***    ***        *** *** ");  //
         gotoxy(10+a,39);cprintf(" ***    *** ***        ********  *** ***   ***  ***    ***  ********* *** ");  //
         gotoxy(10+a,40);cprintf(" ***    *** ***        ********* *** ***    *** ***    *** *********  *** ");  /////////////////////////////////////
   	}for(int a=40;a<=92;a++){                                                                                                                     //
      	textcolor(13);Sleep(20);                                                                                                                   //
   		gotoxy(5,42);cprintf("*********  ***    *** ***      ***    *** ***********  ********  ***    ***  ********* ***    *** ***  *********");  //
         gotoxy(5,43);cprintf("********** ***    *** ***      ***    ***  *********  ********** ****   *** *********  ***   ***  *** ********* ");  //
         gotoxy(5,44);cprintf("***    *** ***    *** ***      ***    ***     ***     ***    *** *****  *** ***        ***  ***   *** ***       ");  //
         gotoxy(5,45);cprintf("*********  ***    *** ***      ***    ***     ***     ********** ********** *********  *******    *** ********* ");  //
         gotoxy(5,46);cprintf("*********  ***    *** ***      ***    ***     ***     ********** ********** ********** *******    ***  *********");  //
         gotoxy(5,47);cprintf("***    *** ***    *** ***      ***    ***     ***     ***    *** ***  ***** ***    *** ***  ***   ***        ***");  //
         gotoxy(5,48);cprintf("********** ********** ******** **********     ***     ***    *** ***   **** ********** ***   ***  ***  *********");  //
         gotoxy(5,49);cprintf("*********   ********  ********* ********      ***     ***    *** ***    ***  ********  ***    *** *** ********* ");  //
      }textcolor(11);Sleep(10);                                                                                                                     //
         gotoxy(10,14);cprintf("       OOOO                   ");               //////////////////////////////////////////////////////////////////////
   		gotoxy(10,15);cprintf("     o******o                 ");               //
         gotoxy(10,16);cprintf("    o**  ****o                ");               //
         gotoxy(10,27);cprintf("   o***  *****o               ");               //
         gotoxy(10,18);cprintf("   o***  *****o               ");               //
         gotoxy(10,19);cprintf("    o**    **o                ");               //
         gotoxy(10,20);cprintf("     o******o                 ");               //
         gotoxy(10,21);cprintf("      o****o      * * * * * * ");               //
         gotoxy(10,22);cprintf("       OOOO        *********  ");               //
         gotoxy(10,23);cprintf("        **          *******   ");               //
         gotoxy(10,24);cprintf("        **           *****    ");textcolor(13); //
         gotoxy(10,25);cprintf("        **            ooo     ");               //
         gotoxy(10,26);cprintf("        **            ooo     ");textcolor(11); //
         gotoxy(10,27);cprintf("        **             O      ");textcolor(13); //
         gotoxy(10,28);cprintf("        OO                    ");               //
         gotoxy(10,29);cprintf("        OO                    ");               //
         gotoxy(10,30);cprintf("        OO                    ");               //
      loadingAwal();clrscr();mendaftar();                                       //
}                                                                               //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>LOADING<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<////
void loading(){                                                               //
	for(int a=1;a<=100;a++){                                                   //
   	textcolor(13);Sleep(50);                                                //
		gotoxy(18+a,34);cprintf("%c",433);textcolor(9);                         //
   	gotoxy(18+a,35);cprintf("%c",433);textcolor(11);                        //
   	gotoxy(18+a,36);cprintf("%c",433);textcolor(13);                        //
   	gotoxy(60,40);printf("Memuat  %d %",a);                                 //
   }                                                                          //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>HIASAN MENU<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////////////////////////////////////
void hiasanmenu(){                                                                                                         //
	kotakTengah(5,3,7,5 ,65,44,66,45);kotakTengah(5,3,7,5 ,75 ,44,76 ,45);kotakTengah(5,3,7,5 ,85,44,86,45);                //
	kotakTengah(5,3,7,5 ,95,44,96,45);kotakTengah(5,3,7,5 ,105,44,106,45);kotakTengah(5,4,7,6 ,21,3,22 ,4 );                //
   kotakTengah(5,4,7,6 ,31,3 ,32, 4);kotakTengah(5,4,7,6 ,41 ,3 ,42 , 4);                                                  //
	kotakTengah(5,4,7,6 ,51,3 ,52, 4);kotakTengah(5,4,7,6 ,61 ,3 ,62 , 4);                                                  //
   for(int a=1;a<=43;a++){                                                                                                 //
   	textcolor(a);Sleep(30);                                                                                              //
      gotoxy(68,47);cprintf("%c%c%c",1,3,1);gotoxy( 78,47);cprintf("%c%c%c",1,3,1);gotoxy(88,47);cprintf("%c%c%c",1,3,1);  //
      gotoxy(98,47);cprintf("%c%c%c",1,3,1);gotoxy(108,47);cprintf("%c%c%c",1,3,1);gotoxy(24, 6);cprintf("%c%c%c",1,3,1);  //
      gotoxy(34, 6);cprintf("%c%c%c",1,3,1);gotoxy( 44, 6);cprintf("%c%c%c",1,3,1);                                        //
      gotoxy(54, 6);cprintf("%c%c%c",1,3,1);gotoxy( 64, 6);cprintf("%c%c%c",1,3,1);                                        //
   }                                                                                                                       //
}                                                                                                                          //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>KALENDER<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////////////////////////////////////
void kalender(int lebar,int panjang,int x,int y,int c,int d,int e,int f,int g,int h){              //
	for(int a=1;a<=lebar;a++){                                                                      //
   	for(int b=1;b<=panjang;b++){                                                                 //
      	textbackground(9);textcolor(9);gotoxy(x+a,y+b);cprintf("%c",219);                         //
         if(a==1||a==lebar||b==1||b==panjang){                                                     //
         	textcolor(13);gotoxy(x+a,y+b);cprintf("%c",219);                                       //
            gotoxy(x+3,y+c);cprintf("Minggu Senin Selasa Rabu kamis Jum'at Sabtu ");textcolor(30); //
   			gotoxy(x+3,y+d);cprintf("                1     2      3    4      5  ");               //
   			gotoxy(x+3,y+e);cprintf("  6      7      8     9     10   11     12  ");               //
   			gotoxy(x+3,y+f);cprintf(" 13     14     15    16     17   18     19  ");               //
   			gotoxy(x+3,y+g);cprintf(" 20     21     22    23     24   25     26  ");               //
   			gotoxy(x+3,y+h);cprintf(" 27     28     29    30     31              ");               //
         }                                                                                         //
      }printf("\n");                                                                               //
   }                                                                                               //
}                                                                                                  //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MENDAFTAR<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////////////
void mendaftar(){                                                               //
	for(int a=1;a<=54;a++){                                                      //
   	for(int b=1;b<=120;b++){                                                  //
      	textcolor(13);                                                         //
         if(a==1||a==3||a==54||a==52||b==1||b==3||b==120||b==118||a==14||a==16){//
         	cprintf("%c",219);Sleep(0.5);                                       //
         }else{                                                                 //
         	printf(" ");                                                        //
         }                                                                      //
      }                                                                         /////////////////////////////////////////////////////////////
   }textcolor(11);                                                                                                                         //
   gotoxy(6,5); cprintf(" ***    ***  ******   ******* ***  *** ***   ***    *******  ******* *******   ******   ********  ******  ***");  //
   gotoxy(6,6); cprintf(" ****  **** ******** *******  ***  *** ***  ***    *******  *******  ******** ******** ********  ******** ***");  //
   gotoxy(6,7); cprintf(" ********** ***  *** ***      ***  *** *** ***     ***      ***      ***  *** ***  *** ***       ***  *** ***");  //
   gotoxy(6,8); cprintf(" ********** ******** *******  ***  *** ******      *******  ******** *******  ******** ********  ******** ***");  //
   gotoxy(6,9); cprintf(" *** ** *** ********  ******* ***  *** ******       ******* ******** *******  ******** ********* ******** ***");  //
   gotoxy(6,10);cprintf(" ***    *** ***  ***      *** ***  *** *******          *** ***      ***  *** ***  *** ****  *** ***  *** ***");  //
   gotoxy(6,11);cprintf(" ***    *** ***  ***  ******* ******** *** ***      ******* *******  ******** ***  *** ********* ***  *** ***");  //
   gotoxy(6,12);cprintf(" ***    *** ***  *** *******   ******  ***  ***    ********  ******* *******  ***  ***  *******  ***  *** ***");  //
   kotakTengah(8,8,30,30,20,20,22,22);                                                                                                     //
   kotakTengah(8,8,30,30,70,20,72,22);                                        ///////////////////////////////////////////////////////////////
   kotakTengah(8,8,30,30,20,35,22,37);                                        //
   kotakTengah(8,8,30,30,70,35,72,37);textcolor(14);textbackground(9);        //
   gotoxy(32,26);cprintf("1. Buat Akun");gotoxy(83,26);cprintf("2. Pengguna");//
   gotoxy(33,41);cprintf("3. Admin")    ;gotoxy(83,41);cprintf("4. Keluar");  //
   gotoxy(53,33);printf("Masukan Pilihan : ");validasipilih();                //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>BUAT AKUN<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<////////////////////////////////////////////////
void akun(){                                                                                                                //
   bingkaiAkun();textcolor(11);                                                                                             //
   gotoxy(14,5); cprintf(" *********  ***    ***  ********  ***********      ********  ***    *** ***    *** ***    ***");  //
   gotoxy(14,6); cprintf(" ********** ***    *** **********  *********      ********** ***   ***  ***    *** ****   ***");  //
   gotoxy(14,7); cprintf(" ***    *** ***    *** ***    ***     ***         ***    *** ***  ***   ***    *** *****  ***");  //
   gotoxy(14,8); cprintf(" *********  ***    *** **********     ***         ********** *******    ***    *** **********");  //
   gotoxy(14,9); cprintf(" *********  ***    *** **********     ***         ********** *******    ***    *** **********");  //
   gotoxy(14,10);cprintf(" ***    *** ***    *** ***    ***     ***         ***    *** ***  ***   ***    *** ***  *****");  //
   gotoxy(14,11);cprintf(" ********** ********** ***    ***     ***         ***    *** ***   ***  ********** ***   ****");  //
   gotoxy(14,12);cprintf(" *********   ********  ***    ***     ***         ***    *** ***    ***  ********  ***    ***");  //
   for(int a=1;a<=25;a++){                                                                                                  //
   	for(int b=1;b<=49;b++){                                                 ////////////////////////////////////////////////
     		textcolor(13);gotoxy(5+b,18+a);cprintf("%c",219);                    //
      }                                                                       //
   }for(int a=1;a<=25;a++){                                                   //
   	for(int b=1;b<=49;b++){                                                 //
     		textcolor(9);gotoxy(7+b,20+a);cprintf("%c",219);                     //
      }                                                                       //
   }for(int a=1;a<=25;a++){                                                   //
   	for(int b=1;b<=49;b++){                                                 //
     		textcolor(13);gotoxy(64+b,18+a);cprintf("%c",219);                   //
      }                                                                       //
   }for(int a=1;a<=25;a++){                                                   //
   	for(int b=1;b<=49;b++){                                                 //
     		textcolor(9);gotoxy(66+b,20+a);cprintf("%c",219);                    //
      }                                                                       //
   }nama();                                                                   //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>NAMA<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////////////////
void nama(){                                                                                          //
   kotakTengah(3,1,10,8,26,20,27,21);gotoxy(28,22);printf("LENGKAPI");                                //
   textcolor(14);textbackground(9);                                                                   //
   gotoxy(9 ,25);cprintf("Nama Lengkap      :");gotoxy(29,25);cprintf("                          ");  //
   gotoxy(9 ,27);cprintf("Jenis Kelamin(L/P):");gotoxy(29,27);cprintf("                          ");  //
   gotoxy(9 ,29);cprintf("Usia              :");gotoxy(29,29);cprintf("                     Tahun");  //
   gotoxy(9 ,31);cprintf("Pekerjaan         :");gotoxy(29,31);cprintf("                          ");  //
   gotoxy(9 ,33);cprintf("Alamat            :");gotoxy(29,33);cprintf("Jln.                      ");  //
   gotoxy(9 ,35);cprintf("Kota Asal         :");gotoxy(29,35);cprintf("                          ");  //
   gotoxy(9 ,37);cprintf("No. Handphone     :");gotoxy(29,37);cprintf("                          ");  //
   gotoxy(9 ,39);cprintf("Nama Pengguna     :");gotoxy(29,39);cprintf("                          ");  //
   gotoxy(9 ,41);cprintf("Kata Sandi        :");gotoxy(29,41);cprintf("                          ");  //
   kotakTengah(3,1,11,9 ,26,42,27,43);gotoxy(28,44);printf("MENDAFTAR");                              //
   kotakTengah(3,1,29,27,15,48,16,49);gotoxy(17,50);printf("Tekan Enter untuk mendaftar");            //
	gotoxy(29,25);gets(nama2);                                                     //////////////////////
   while(true){                                                                   //
    	if(validasihuruf(nama2)==0&&strlen(nama2)<=25&&strlen(nama2)!=0){           //
        	jenisKelamin();                                                          //
      }else if(strlen(nama2)>25){                                                 //
     		gotoxy(14,47);printf("Nama Maksimal 25 Digit (Coba Lagi)");Sleep(2000);  //
        	gotoxy(14,47);printf("                                  ");              //
         gotoxy(29,25);printf("                          ");nama();               //
      }else if(strlen(nama2)<=2){                                                 //
     		gotoxy(15,47);printf("Nama Minimal 2 Digit (Coba Lagi)");Sleep(2000);    //
        	gotoxy(15,47);printf("                                ");                //
         gotoxy(29,25);printf("                          ");nama();               //
      }else{                                                                      //
       	gotoxy(15,47);printf("Masukan Tidak Valid (Coba Lagi)");Sleep(2000);     //
        	gotoxy(15,47);printf("                               ");                 //
         gotoxy(29,25);printf("                          ");nama();               //
      }                                                                           //
   }                                                                              //
}                                                                                 //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>JENIS KELAMIN<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////
void jenisKelamin(){                                                              //
	gotoxy(29,27);gets(jk1);                                                       ///////////
  	while(true){                                                                            //
   	if(strcmp(jk1,"L")==0||strcmp(jk1,"l")==0||strcmp(jk1,"P")==0||strcmp(jk1,"p")==0){  //
      	usia();                                                                           //
      }else{                                                                      ///////////
      	gotoxy(13,47);printf("Pilih L(Laki-Laki)/P(Perempuan)");Sleep(2000);     //
         gotoxy(13,47);printf("                               ");                 //
         gotoxy(29,27);printf("                   ");jenisKelamin();              //
      }                                                                           //
   }                                                                              //
}                                                                                 //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>USIA<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////
void usia(){                                                                   //
	gotoxy(29,29);gets(usia2);                                                  //
   while(true){                                                                //
   	if(validasiangka(usia2)==0&&strlen(usia2)==2&&strlen(usia2)!=0){         //
         usi=atoi(usia2);                                                      //
         pekerjaan();                                                          //
      }else if(strlen(usia2)==1){                                              //
     		gotoxy(14,47);printf("Minimal Usia 10 Tahun (Coba Lagi)");Sleep(2000);//
        	gotoxy(14,47);printf("                                 ");            //
         gotoxy(29,29);printf("              ");usia();                        //
      }else{                                                                   //
      	gotoxy(15,47);printf("Masukan Tidak Valid (Coba Lagi)");Sleep(2000);  //
         gotoxy(15,47);printf("                               ");              //
         gotoxy(29,29);printf("              ");usia();                        //
      }                                                                        //
   }                                                                           //
}                                                                              //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>PEKERJAAN<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////
void pekerjaan(){                                                                      //
	gotoxy(29,31);gets(pekerjaan2);                                                     //
   while(true){                                                                        //
	  	if(validasihuruf(pekerjaan2)==0&&strlen(pekerjaan2)<=25&&strlen(pekerjaan2)!=0){ //
       	alamat();                                                                     //
      }else if(strlen(pekerjaan2)>25){                                                 //
     		gotoxy(11,47);printf("Pekerjaan Maksimal 25 Digit (Coba Lagi)");Sleep(2000);  //
        	gotoxy(11,47);printf("                                       ");              //
         gotoxy(29,31);printf("                          ");pekerjaan();               //
      }else if(strlen(pekerjaan2)<=2){                                                 //
     		gotoxy(11,47);printf("Pekerjaan Minimal 2 Digit (Coba Lagi)");Sleep(2000);    //
        	gotoxy(11,47);printf("                                     ");                //
         gotoxy(29,31);printf("                          ");pekerjaan();               //
      }else{                                                                           //
        	gotoxy(15,47);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);           //
        	gotoxy(15,47);printf("                              ");                       //
         gotoxy(29,31);printf("                          ");pekerjaan();               //
      }                                                                                //
   }                                                                                   //
}                                                                                      //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>ALAMAT<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////
void alamat(){                                                                    //
	gotoxy(33,33);gets(almt);                                                      //
   while(true){                                                                   //
		if(validasialamat(almt)==0&&strlen(almt)<=25&&strlen(almt)!=0){             //
        	kotaasal();                                                              //
      }else if(strlen(almt)>25){                                                  //
     		gotoxy(12,47);printf("Alamat Maksimal 25 Digit (Coba Lagi)");Sleep(2000);//
        	gotoxy(12,47);printf("                                    ");            //
         gotoxy(29,33);printf("                      ");alamat();                 //
      }else{                                                                      //
        	gotoxy(15,47);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);      //
        	gotoxy(15,47);printf("                              ");                  //
         gotoxy(33,33);printf("                      ");alamat();                 //
      }                                                                           //
   }                                                                              //
}                                                                                 //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>KOTA ASAL<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<////////////////
void kotaasal(){                                                                            //
	gotoxy(29,35);gets(kota);                                                                //
   while(true){                                                                             //
   	if(validasihuruf(kota)==0&&strlen(kota)<=25&&strlen(kota)>=5&&strlen(kota)!=0){       //
      	nohp();                                                                            //
      }else if(strlen(kota)>25){                                                            //
     		gotoxy(10,47);printf("Nama Kota Maksimal 25 Digit (Coba Lagi)");Sleep(2000);       //
        	gotoxy(10,47);printf("                                       ");                   //
         gotoxy(29,35);printf("                         ");kotaasal();                      //
      }else if(strlen(kota)<=5){                                                            //
     		gotoxy(10,47);printf("Nama Kota Minimal 5 Digit (Coba Lagi)");Sleep(2000);         //
        	gotoxy(10,47);printf("                                     ");                     //
         gotoxy(29,35);printf("                         ");kotaasal();                      //
      }else{                                                                                //
      	gotoxy(15,47);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);                //
         gotoxy(15,47);printf("                              ");                            //
         gotoxy(29,35);printf("                         ");kotaasal();                      //
      }                                                                                     //
   }                                                                                        //
}                                                                                           //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>NO.HP<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////////////////////////////////
void nohp(){                                                                                                          //
	gotoxy(29,37);gets(nohp2);                                                                                         //
   while(true){                                                                                                       //
   	if(validasiangka(nohp2)==0&&strlen(nohp2)>=11&&strlen(nohp2)<=13&&(nohp2[0]=='0'&&nohp2[1]=='8'&&               //
      (nohp2[2]=='3'||nohp2[2]=='7'||nohp2[2]=='5'||nohp2[2]=='9'||nohp2[2]=='2'||nohp2[2]=='1'))&&strlen(nohp2)!=0){ //
      	username();                                                                                                  //
      }else if(strlen(nohp2)>13){                                                                                     //
     		gotoxy(8,47);printf("Nomor Handphone Maksimal 13 Digit (Coba Lagi)");Sleep(2000);                            //
        	gotoxy(8,47);printf("                                             ");                                        //
         gotoxy(29,37);printf("                          ");nohp();                                                   //
      }else{                                                                                                          //
      	gotoxy(15,47);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);                                          //
       	gotoxy(15,47);printf("                              ");                                                      //
         gotoxy(29,37);printf("                          ");nohp();                                                   //
      }                                                                                                               //
   }                                                                                                                  //
}                                                                                                                     //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>NAMA PENGGUNA<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////////////////////////////////
void username(){                                                                         //
	gotoxy(29,39);gets(user);                                                             //
   while(true){                                                                          //
   	if(validasiuser(user)==0&&strlen(user)<=20&&strlen(user)>=8){                      //
      	sandi();                                                                        //
   	}else if(strlen(user)>20){                                                         //
     		gotoxy(10,47);printf("Nama Pengguna Maksimal 20 Digit (Coba Lagi)");Sleep(2000);//
        	gotoxy(10,47);printf("                                           ");            //
         gotoxy(29,39);printf("                          ");username();                  //
      }else if(strlen(user)<8){                                                          //
     		gotoxy(11,47);printf("Nama Pengguna Minimal 8 Digit (Coba Lagi)");Sleep(2000);  //
        	gotoxy(11,47);printf("                                           ");            //
         gotoxy(29,39);printf("                          ");username();                  //
      }else{                                                                             //
      	gotoxy(15,47);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);             //
         gotoxy(15,47);printf("                                      ");                 //
         gotoxy(29,39);printf("                          ");username();                  //
      }                                                                                  //
   }                                                                                     //
}                                                                                        //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>KATA SANDI<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<</////////////
void sandi(){                                                                         //
	gotoxy(29,41);gets(sandi2);                                                        //
   while(true){                                                                       //
   	if(validasisandi(sandi2)==0&&strlen(sandi2)>=8&&strlen(sandi2)<=20){//
      	kotakTengah(3,1,18,16,80,20,81,21);gotoxy(82,22);printf("AKUN ANDA ADALAH"); //
   		gotoxy(71,25);printf("Nama Lengkap      : %s",nama2);                        //
  		   gotoxy(71,27);printf("Jenis Kelamin     : %s",jk1);                          //
   		gotoxy(71,29);printf("Usia              : %d Tahun",usi);                    //
   		gotoxy(71,31);printf("Pekerjaan         : %s",pekerjaan2);                   //
   		gotoxy(71,33);printf("Alamat            : Jln.%s",almt);                     //
   		gotoxy(71,35);printf("Kota Asal         : %s",kota);                         //
   		gotoxy(71,37);printf("No. Handphone     : %s",nohp2);                        //
   		gotoxy(71,39);printf("Nama Pengguna     : %s",user);                         /////////
   		gotoxy(71,41);printf("Kata Sandi        : %s",sandi2);                              //
   		kotakTengah(3,1,25,23,76,47,77,48);gotoxy(78,49);printf("Tekan Enter untuk masuk"); //
   		getch();clrscr();masuk();masuk2();                                                  //
      }else if(strlen(sandi2)>20){                                                    /////////
     		gotoxy(11,47);printf("Kata Sandi Maksimal 20 Digit (Coba Lagi)");Sleep(2000);//
        	gotoxy(11,47);printf("                                           ");         //
         gotoxy(29,41);printf("                         ");sandi();                   //
      }else if(strlen(sandi2)<8){                                                     //
     		gotoxy(12,47);printf("Kata Sandi Minimal 8 Digit (Coba Lagi)");Sleep(2000);  //
        	gotoxy(12,47);printf("                                           ");         //
         gotoxy(29,41);printf("                         ");sandi();                   //
      }else{                                                                          //
      	gotoxy(15,47);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);          //
         gotoxy(15,47);printf("                              ");                      //
         gotoxy(29,41);printf("                         ");sandi();                   //
      }                                                                               //
   }                                                                                  //
}                                                                                     //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MASUK<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void masuk(){                                                                                                                                                                                 //
   bingkaiMenu();textcolor(11);                                                                                                                                                               //
   gotoxy(4,6); cprintf(" ***    *** ");gotoxy(4,15);cprintf("  ********  ");gotoxy(4,24);cprintf("  ********* ");gotoxy(4,33);cprintf(" ***    *** ");gotoxy(4,42);cprintf(" ***    *** ");  //
   gotoxy(4,7); cprintf(" ****  **** ");gotoxy(4,16);cprintf(" ********** ");gotoxy(4,25);cprintf(" *********  ");gotoxy(4,34);cprintf(" ***    *** ");gotoxy(4,43);cprintf(" ***   ***  ");  //
   gotoxy(4,8); cprintf(" ********** ");gotoxy(4,17);cprintf(" ***    *** ");gotoxy(4,26);cprintf(" ***        ");gotoxy(4,35);cprintf(" ***    *** ");gotoxy(4,44);cprintf(" ***  ***   ");  //
   gotoxy(4,9); cprintf(" ********** ");gotoxy(4,18);cprintf(" ********** ");gotoxy(4,27);cprintf(" *********  ");gotoxy(4,36);cprintf(" ***    *** ");gotoxy(4,45);cprintf(" *******    ");  //
   gotoxy(4,10);cprintf(" *** ** *** ");gotoxy(4,19);cprintf(" ********** ");gotoxy(4,28);cprintf("  ********* ");gotoxy(4,37);cprintf(" ***    *** ");gotoxy(4,46);cprintf(" *******    ");  //
   gotoxy(4,11);cprintf(" ***    *** ");gotoxy(4,20);cprintf(" ***    *** ");gotoxy(4,29);cprintf("        *** ");gotoxy(4,38);cprintf(" ***    *** ");gotoxy(4,47);cprintf(" ***  ***   ");  //
   gotoxy(4,12);cprintf(" ***    *** ");gotoxy(4,21);cprintf(" ***    *** ");gotoxy(4,30);cprintf("  ********* ");gotoxy(4,39);cprintf(" ********** ");gotoxy(4,48);cprintf(" ***   ***  ");  //
   gotoxy(4,13);cprintf(" ***    *** ");gotoxy(4,22);cprintf(" ***    *** ");gotoxy(4,31);cprintf(" *********  ");gotoxy(4,40);cprintf("  ********  ");gotoxy(4,49);cprintf(" ***    *** ");  //
}                                                                                                                                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MASUK1<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void masuk1(){                                                                //
	masuk();masuk3();clrscr();menu();                                          //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>SEBELUM MASUK<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<////
void sblmmasuk(){                                                               //
	kotakTengah(5,4,7,6 ,19,3 ,20 ,4 );kotakTengah(5,4,7,6,29 ,3 ,30 ,4 );       //
   kotakTengah(5,4,7,6 ,39,3 ,40 ,4 );kotakTengah(5,4,7,6,49 ,3 ,50 ,4 );       //
   kotakTengah(5,4,7,6 ,59,3 ,60 ,4 );kotakTengah(5,4,7,6,69 ,3 ,70 ,4 );       //
   kotakTengah(5,4,7,6 ,79,3 ,80 ,4 );kotakTengah(5,4,7,6,89 ,3 ,90 ,4 );       //
   kotakTengah(5,4,7,6 ,99,3 ,100,4 );kotakTengah(5,4,7,6,109,3 ,110,4 );       //
   kotakTengah(5,3,7,5 ,21,14,22 ,15);kotakTengah(5,3,7,5,21 ,20,22 ,21);       //
   kotakTengah(5,3,7,5 ,21,26,22 ,27);kotakTengah(5,3,7,5,21 ,38,22 ,39);       //
   kotakTengah(5,3,7,5 ,21,44,22 ,45);kotakTengah(5,3,7,5,107,14,108,15);       //
   kotakTengah(5,3,7,5,107,20,108,21);kotakTengah(5,3,7,5,107,26,108,27);       //
   kotakTengah(5,3,7,5,107,38,108,39);kotakTengah(5,3,7,5,107,44,108,45);       //
   for(int a=1;a<=42;a++){                                                      ////////
   	textcolor(a);Sleep(30);                                                         //
      gotoxy(22 ,6 );cprintf("%c%c%c",1,3,1);gotoxy(32 ,6 );cprintf("%c%c%c",1,3,1);  //
      gotoxy(42 ,6 );cprintf("%c%c%c",1,3,1);gotoxy(52 ,6 );cprintf("%c%c%c",1,3,1);  //
      gotoxy(62 ,6 );cprintf("%c%c%c",1,3,1);gotoxy(72 ,6 );cprintf("%c%c%c",1,3,1);  //
      gotoxy(82 ,6 );cprintf("%c%c%c",1,3,1);gotoxy(92 ,6 );cprintf("%c%c%c",1,3,1);  //
      gotoxy(102,6 );cprintf("%c%c%c",1,3,1);gotoxy(112,6 );cprintf("%c%c%c",1,3,1);  //
      gotoxy(24 ,17);cprintf("%c%c%c",1,3,1);gotoxy(24 ,23);cprintf("%c%c%c",1,3,1);  //
      gotoxy(24 ,29);cprintf("%c%c%c",1,3,1);gotoxy(24 ,41);cprintf("%c%c%c",1,3,1);  //
      gotoxy(24 ,47);cprintf("%c%c%c",1,3,1);gotoxy(110,17);cprintf("%c%c%c",1,3,1);  //
      gotoxy(110,23);cprintf("%c%c%c",1,3,1);gotoxy(110,29);cprintf("%c%c%c",1,3,1);  //
      gotoxy(110,41);cprintf("%c%c%c",1,3,1);gotoxy(110,47);cprintf("%c%c%c",1,3,1);  //
   }                                                                                  //
	gotoxy(47,20);printf("Masukan Nama Pengguna : ");                            ////////
   gotoxy(47,22);printf("Masukan Kata Sandi    : ");                            //
   gotoxy(40,45);printf("Tekan 0 untuk mulai masuk, Tekan 98 untuk kembali : ");//
   while(true){                                                                 //
   	gotoxy(92,45);gets(pilih);                                                //
   	if(strcmp(pilih,"0")==0){                                                 //
   		break;                                                                 //
   	}else if(strcmp(pilih,"98")==0){                                          //
   		clrscr();mendaftar();                                                  //
   	}else{                                                                    //
      	gotoxy(45,47);printf("Masukan Tidak Valid (Coba Lagi)");Sleep(1500);   //
      	gotoxy(45,47);printf("                               ");               //
         gotoxy(92,45);printf("            ");                                  //
   	}                                                                         //
   }                                                                            //
}                                                                               //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MASUK2<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////////
void masuk2(){                                                                                 //
	bingkaiTengah();sblmmasuk();                                                                //
   while(true){                                                                                //
   	gotoxy(92,45);printf("            ");                                                    //
   	gotoxy(55,50);printf("Tekan Enter untuk masuk");                                         //
      gotoxy(71,20);gets(nama3);                                                               //
      if(strcmp(nama3,"98")==0||strcmp(sandi3,"98")==0){                                       //
      	clrscr();mendaftar();                                                                 //
      }gotoxy(71,22);gets(sandi3);                                                             //
   	if(strcmp(nama3,user)==0&&strcmp(sandi3,sandi2)==0){                                     //
   		gotoxy(58,30);printf("Anda Berhasil Masuk");                                          //
      	loading();clrscr();menu();                                                            //
   	}else{                                                                                   //
   		gotoxy(47,30);printf("Nama Pengguna & Kata Sandi Anda Salah(coba lagi)");Sleep(1500); //
      	gotoxy(47,30);printf("                                                ");             //
      	gotoxy(71,20);printf("                    ");                                         //
      	gotoxy(71,22);printf("                    ");                                         //
   	}                                                                                        //
   }                                                                                           //
}                                                                                              //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MASUK3<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////////
void masuk3(){                                                                                 //
	bingkaiTengah();sblmmasuk();                                                                //
   while(true){                                                                                //
   	gotoxy(92,45);printf("            ");                                                    //
   	gotoxy(55,50);printf("Tekan Enter untuk masuk");                                         //
   	gotoxy(71,20);gets(user);gotoxy(71,22);gets(sandi2);                                     //
   	if(strcmp(user,"rianhidayat")==0&&strcmp(sandi2,"20091999")==0||                         //
      strcmp(nama3,user)==0&&strcmp(sandi3,sandi2)==0){                                        //
   		gotoxy(58,30);printf("Anda Berhasil Masuk");                                          //
   		loading();clrscr();menu();                                                            //
   	}else if(strcmp(user,"98")==0||strcmp(sandi2,"98")==0){                                  //
   		clrscr();mendaftar();                                                                 //
   	}else{                                                                                   //                                                                             //
      	gotoxy(47,30);printf("Nama Pengguna & Kata Sandi Anda Salah(coba lagi)");Sleep(1500); //
         gotoxy(47,30);printf("                                                ");             //
      	gotoxy(71,20);printf("                    ");                                         //
      	gotoxy(71,22);printf("                    ");                                         //                                                                                        //
   	}                                                                                        //
   }                                                                                           //
}                                                                                              //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MASUK ADMIN<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////////
void masukadmin(){                                                                             //
	bingkaiTengah();sblmmasuk();                                                                //
   while(true){                                                                                //
   	gotoxy(92,45);printf("           ");                                                     //
   	gotoxy(55,50);printf("Tekan Enter untuk masuk");                                         //
   	gotoxy(71,20);gets(user);gotoxy(71,22);gets(sandi2);                                     //
   	if(strcmp(user,"rianhidayat")==0&&strcmp(sandi2,"20091999")==0){                         //
   		gotoxy(58,30);printf("Anda Berhasil Masuk");                                          //
   		loading();clrscr();menu2();                                                           //
   	}else if(strcmp(user,"98")==0||strcmp(sandi2,"98")==0){                                  //
   		clrscr();mendaftar();                                                                 //
   	}else{                                                                                   //                                                                            //
      	gotoxy(47,30);printf("Nama Pengguna & Kata Sandi Salah(coba lagi)");Sleep(1500);      //
         gotoxy(47,30);printf("                                                ");             //
         gotoxy(71,20);printf("                    ");                                         //
         gotoxy(71,22);printf("                    ");                                         //                                                                                       //
   	}                                                                                        //
   }                                                                                           //
}                                                                                              //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>ADMIN<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////////////////////////////////////////////////////////////////////////////////////////////////
void admin(){                                                                                                                                                                          //
   bingkaiMenu();textcolor(11);                                                                                                                                                        //
   gotoxy(4,6); cprintf("  ********  ");gotoxy(4,15);cprintf(" ********   ");gotoxy(4,24);cprintf(" ***    *** ");gotoxy(7,33);cprintf(" *** ");gotoxy(4,42);cprintf(" ***    *** ");  //
   gotoxy(4,7); cprintf(" ********** ");gotoxy(4,16);cprintf(" *********  ");gotoxy(4,25);cprintf(" ****  **** ");gotoxy(7,34);cprintf(" *** ");gotoxy(4,43);cprintf(" ****   *** ");  //
   gotoxy(4,8); cprintf(" ***    *** ");gotoxy(4,17);cprintf(" ***   **** ");gotoxy(4,26);cprintf(" ********** ");gotoxy(7,35);cprintf(" *** ");gotoxy(4,44);cprintf(" *****  *** ");  //
   gotoxy(4,9); cprintf(" ********** ");gotoxy(4,18);cprintf(" ***    *** ");gotoxy(4,27);cprintf(" ********** ");gotoxy(7,36);cprintf(" *** ");gotoxy(4,45);cprintf(" ********** ");  //
   gotoxy(4,10);cprintf(" ********** ");gotoxy(4,19);cprintf(" ***    *** ");gotoxy(4,28);cprintf(" *** ** *** ");gotoxy(7,37);cprintf(" *** ");gotoxy(4,46);cprintf(" ********** ");  //
   gotoxy(4,11);cprintf(" ***    *** ");gotoxy(4,20);cprintf(" ***   **** ");gotoxy(4,29);cprintf(" ***    *** ");gotoxy(7,38);cprintf(" *** ");gotoxy(4,47);cprintf(" ***  ***** ");  //
   gotoxy(4,12);cprintf(" ***    *** ");gotoxy(4,21);cprintf(" *********  ");gotoxy(4,30);cprintf(" ***    *** ");gotoxy(7,39);cprintf(" *** ");gotoxy(4,48);cprintf(" ***   **** ");  //
   gotoxy(4,13);cprintf(" ***    *** ");gotoxy(4,22);cprintf(" ********   ");gotoxy(4,31);cprintf(" ***    *** ");gotoxy(7,40);cprintf(" *** ");gotoxy(4,49);cprintf(" ***    *** ");  //
   masukadmin();clrscr();menu2();getch();                                                                                                                                              //
}                                                                                                                                                                                      //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MENU<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////////////////////////////////////////////////////////////////////////////////////////////////
void menu(){                                                                                                                                             //
	bingkaiMenu();textcolor(11);                                                                                                                          //
   gotoxy(4,9); cprintf(" ***    *** ");gotoxy(4,19);cprintf("  ********* ");gotoxy(4,29);cprintf(" ***    *** ");gotoxy(4,39);cprintf(" ***    *** ");  //
   gotoxy(4,10);cprintf(" ****  **** ");gotoxy(4,20);cprintf(" *********  ");gotoxy(4,30);cprintf(" ****   *** ");gotoxy(4,40);cprintf(" ***    *** ");  //
   gotoxy(4,11);cprintf(" ********** ");gotoxy(4,21);cprintf(" ***        ");gotoxy(4,31);cprintf(" *****  *** ");gotoxy(4,41);cprintf(" ***    *** ");  //
   gotoxy(4,12);cprintf(" ********** ");gotoxy(4,22);cprintf(" ********** ");gotoxy(4,32);cprintf(" ********** ");gotoxy(4,42);cprintf(" ***    *** ");  //
   gotoxy(4,13);cprintf(" *** ** *** ");gotoxy(4,23);cprintf(" ********** ");gotoxy(4,33);cprintf(" ********** ");gotoxy(4,43);cprintf(" ***    *** ");  //
   gotoxy(4,14);cprintf(" ***    *** ");gotoxy(4,24);cprintf(" ***        ");gotoxy(4,34);cprintf(" ***  ***** ");gotoxy(4,44);cprintf(" ***    *** ");  //
   gotoxy(4,15);cprintf(" ***    *** ");gotoxy(4,25);cprintf(" *********  ");gotoxy(4,35);cprintf(" ***   **** ");gotoxy(4,45);cprintf(" ********** ");  //
   gotoxy(4,16);cprintf(" ***    *** ");gotoxy(4,26);cprintf("  ********* ");gotoxy(4,36);cprintf(" ***    *** ");gotoxy(4,46);cprintf("  ********  ");  //
   kotakTengah(8,8,32,32,25,14,27,16);kotakTengah(8,8,32,32,25,26,27,28);                                                                                //
  	kotakTengah(8,8,32,32,25,39,27,41);kotakTengah(8,8,32,32,70,14,72,16);     /////////////////////////////////////////////////////////////////////////////
   kotakTengah(8,8,32,32,70,26,72,28);textcolor(14);textbackground(9);        //
   gotoxy(35,20);cprintf("1. Jadwal Pertandingan");                           //
  	gotoxy(35,32);cprintf("2. Bagan Pertandingan");                            //
  	gotoxy(35,45);cprintf("3. Profil Pemain");                                 //
  	gotoxy(75,20);cprintf("4. Perlengkapan Bulutangkis");                      //
  	gotoxy(75,32);cprintf("5. Keluar");hiasanmenu();                           //
  	gotoxy(75,6);printf("Masukan Pilihan : ");                                 //
   validasipilih2();                                                          //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MENU<2<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<////////////////////////////////////////////////////////////////////////////
void menu2(){                                                                                                                                            //
	bingkaiMenu();textcolor(11);                                                                                                                          //
   gotoxy(4,9); cprintf(" ***    *** ");gotoxy(4,19);cprintf("  ********* ");gotoxy(4,29);cprintf(" ***    *** ");gotoxy(4,39);cprintf(" ***    *** ");  //
   gotoxy(4,10);cprintf(" ****  **** ");gotoxy(4,20);cprintf(" *********  ");gotoxy(4,30);cprintf(" ****   *** ");gotoxy(4,40);cprintf(" ***    *** ");  //
   gotoxy(4,11);cprintf(" ********** ");gotoxy(4,21);cprintf(" ***        ");gotoxy(4,31);cprintf(" *****  *** ");gotoxy(4,41);cprintf(" ***    *** ");  //
   gotoxy(4,12);cprintf(" ********** ");gotoxy(4,22);cprintf(" ********** ");gotoxy(4,32);cprintf(" ********** ");gotoxy(4,42);cprintf(" ***    *** ");  //
   gotoxy(4,13);cprintf(" *** ** *** ");gotoxy(4,23);cprintf(" ********** ");gotoxy(4,33);cprintf(" ********** ");gotoxy(4,43);cprintf(" ***    *** ");  //
   gotoxy(4,14);cprintf(" ***    *** ");gotoxy(4,24);cprintf(" ***        ");gotoxy(4,34);cprintf(" ***  ***** ");gotoxy(4,44);cprintf(" ***    *** ");  //
   gotoxy(4,15);cprintf(" ***    *** ");gotoxy(4,25);cprintf(" *********  ");gotoxy(4,35);cprintf(" ***   **** ");gotoxy(4,45);cprintf(" ********** ");  //
   gotoxy(4,16);cprintf(" ***    *** ");gotoxy(4,26);cprintf("  ********* ");gotoxy(4,36);cprintf(" ***    *** ");gotoxy(4,46);cprintf("  ********  ");  //
   kotakTengah(8,8,32,32,25,14,27,16);kotakTengah(8,8,32,32,25,26,27,28);                                                                                //
  	kotakTengah(8,8,32,32,25,39,27,41);kotakTengah(8,8,32,32,70,14,72,16);     /////////////////////////////////////////////////////////////////////////////
   kotakTengah(8,8,32,32,70,26,72,28);textcolor(14);textbackground(9);        //
   gotoxy(35,20);cprintf("1. Jadwal Pertandingan");                           //
  	gotoxy(35,32);cprintf("2. Bagan Pertandingan");                            //
  	gotoxy(35,45);cprintf("//3. Profil Pemain");                               //
  	gotoxy(75,20);cprintf("4. Perubahan Stok");                                //
  	gotoxy(75,32);cprintf("5. Keluar");hiasanmenu();                           //
  	gotoxy(75,6);printf("Masukan Pilihan : ");                                 //
   validasiAdmin();                                                           //
}                                                                             //
                                                                              //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>JADWAL<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////////////
void jadwal(){                                                                                     //
	bingkaiAkun();textcolor(11);                                                                    //
   gotoxy(25,5); cprintf("  ********   ********  ********   ***     ***  ********  ***        ");  //
   gotoxy(25,6); cprintf("   ******** ********** *********  ***     *** ********** ***        ");  //
   gotoxy(25,7); cprintf("        *** ***    *** ***   **** ***     *** ***    *** ***        ");  //
   gotoxy(25,8); cprintf("        *** ********** ***    *** ***  *  *** ********** ***        ");  //
   gotoxy(25,9); cprintf("        *** ********** ***    *** *** *** *** ********** ***        ");  //
   gotoxy(25,10);cprintf("        *** ***    *** ***   **** *********** ***    *** ***        ");  //
   gotoxy(25,11);cprintf("  ********* ***    *** *********  ***** ***** ***    *** *********  ");  //
   gotoxy(25,12);cprintf(" *********  ***    *** ********    ***   ***  ***    *** ********** ");  //
   kotakTengah(6,6,39,39,10,17,11,18);kotakTengah(6,6,39,39,10,24,11,25);                          //
  	kotakTengah(6,6,39,39,10,31,11,32);kotakTengah(6,6,39,39,10,38,11,39);     ///////////////////////
   textcolor(14);textbackground(9);                                           //
   	gotoxy(20,21);cprintf("1. All England");                                //
  		gotoxy(20,28);cprintf("2. Indonesia Open");                             //
  		gotoxy(20,35);cprintf("3. China Open ");                                //
  		gotoxy(20,42);cprintf("4. Malaysia open");                              //
  		gotoxy(20,48);printf("Masukan Pilihan : ");                             //
      gotoxy(78,48);printf("Tekan 99 untuk kembali ke menu");                 //
      validasipilih3();                                                       //
   getch();                                                                   //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>JADWAL1<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////////////
void jadwal1(){                                                                                    //
	bingkaiAkun();textcolor(11);                                                                    //
   gotoxy(25,5); cprintf("  ********   ********  ********   ***     ***  ********  ***        ");  //
   gotoxy(25,6); cprintf("   ******** ********** *********  ***     *** ********** ***        ");  //
   gotoxy(25,7); cprintf("        *** ***    *** ***   **** ***     *** ***    *** ***        ");  //
   gotoxy(25,8); cprintf("        *** ********** ***    *** ***  *  *** ********** ***        ");  //
   gotoxy(25,9); cprintf("        *** ********** ***    *** *** *** *** ********** ***        ");  //
   gotoxy(25,10);cprintf("        *** ***    *** ***   **** *********** ***    *** ***        ");  //
   gotoxy(25,11);cprintf("  ********* ***    *** *********  ***** ***** ***    *** *********  ");  //
   gotoxy(25,12);cprintf(" *********  ***    *** ********    ***   ***  ***    *** ********** ");  //
   kotakTengah(6,6,39,39,10,17,11,18);kotakTengah(6,6,39,39,10,24,11,25);                          //
  	kotakTengah(6,6,39,39,10,31,11,32);kotakTengah(6,6,39,39,10,38,11,39);     ///////////////////////
   textcolor(14);textbackground(9);                                           //
   	gotoxy(20,21);cprintf("1. All England");                                //
  		gotoxy(20,28);cprintf("2. Indonesia Open");                             //
  		gotoxy(20,35);cprintf("3. China Open ");                                //
  		gotoxy(20,42);cprintf("4. Malaysia open");                              //
  		gotoxy(20,48);printf("Masukan Pilihan : ");                             //
      gotoxy(78,48);printf("Tekan 99 untuk kembali ke menu");                 //
      validasipilih32();                                                      //
   getch();                                                                   //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>BAGAN<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void bagan(){                                                                                                                                                                                 //
	bingkaiMenu();textcolor(11);                                                                                                                                                               //
   gotoxy(4,6); cprintf(" *********  ");gotoxy(4,15);cprintf("  ********  ");gotoxy(4,24);cprintf("  ********* ");gotoxy(4,33);cprintf("  ********  ");gotoxy(4,42);cprintf(" ***    *** ");  //
   gotoxy(4,7); cprintf(" ********** ");gotoxy(4,16);cprintf(" ********** ");gotoxy(4,25);cprintf(" *********  ");gotoxy(4,34);cprintf(" ********** ");gotoxy(4,43);cprintf(" ****   *** ");  //
   gotoxy(4,8); cprintf(" ***    *** ");gotoxy(4,17);cprintf(" ***    *** ");gotoxy(4,26);cprintf(" ***        ");gotoxy(4,35);cprintf(" ***    *** ");gotoxy(4,44);cprintf(" *****  *** ");  //
   gotoxy(4,9); cprintf(" *********  ");gotoxy(4,18);cprintf(" ********** ");gotoxy(4,27);cprintf(" *********  ");gotoxy(4,36);cprintf(" ********** ");gotoxy(4,45);cprintf(" ********** ");  //
   gotoxy(4,10);cprintf(" *********  ");gotoxy(4,19);cprintf(" ********** ");gotoxy(4,28);cprintf(" ********** ");gotoxy(4,37);cprintf(" ********** ");gotoxy(4,46);cprintf(" ********** ");  //
   gotoxy(4,11);cprintf(" ***    *** ");gotoxy(4,20);cprintf(" ***    *** ");gotoxy(4,29);cprintf(" ***    *** ");gotoxy(4,38);cprintf(" ***    *** ");gotoxy(4,47);cprintf(" ***  ***** ");  //
   gotoxy(4,12);cprintf(" ********** ");gotoxy(4,21);cprintf(" ***    *** ");gotoxy(4,30);cprintf(" ********** ");gotoxy(4,39);cprintf(" ***    *** ");gotoxy(4,48);cprintf(" ***   **** ");  //
   gotoxy(4,13);cprintf(" *********  ");gotoxy(4,22);cprintf(" ***    *** ");gotoxy(4,31);cprintf("  ********  ");gotoxy(4,40);cprintf(" ***    *** ");gotoxy(4,49);cprintf(" ***    *** ");  //
   kotakTengah(6,6,39,39,25,15,26,16);kotakTengah(6,6,39,39,25,22,26,23);                                                                                                                     //
  	kotakTengah(6,6,39,39,25,29,26,30);kotakTengah(6,6,39,39,25,36,26,37);     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   	textcolor(14);textbackground(9);                                        //
   	gotoxy(38,19);cprintf("1. All England");                                //
   	gotoxy(38,26);cprintf("   Indonesia Open");                             //
   	gotoxy(38,33);cprintf("   China Open ");                                //
   	gotoxy(38,40);cprintf("   Malaysia open");                              //
   	gotoxy(25,45);printf("Anda baru bisa melihat no.1 untuk ");             //
   	gotoxy(25,47);printf("bagan pertandingan & Live Skornya ");             //
   	gotoxy(25,49);printf("Lanjut");                                         //
   	getch();                                                                //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>CABANG<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void cabang(){                                                                //
   kotakTengah(6,6,39,39,71,12,72,13);kotakTengah(6,6,39,39,71,19,72,20);     //
  	kotakTengah(6,6,39,39,71,26,72,27);kotakTengah(6,6,39,39,71,33,72,34);     //
   kotakTengah(6,6,39,39,71,40,72,41);                                        //
   	textcolor(14);textbackground(9);                                        //
   	gotoxy(84,16);cprintf("1. Tunggal Putra");                              //
   	gotoxy(84,23);cprintf("2. Tunggal Putri");                              //
   	gotoxy(84,30);cprintf("3. Ganda Putra");                                //
   	gotoxy(84,37);cprintf("4. Ganda Putri");                                //
   	gotoxy(84,44);cprintf("5. Ganda Campuran");                             //
   	gotoxy(25,6);printf("Tekan 99 untuk kembali ke menu");                  //
   	gotoxy(80,6);printf("Masukan Pilihan : ");                              //
      while(true){gotoxy(99,6);gets(pilih);                                   //
      	if(strcmp(pilih,"1")==0){                                            //
      		clrscr();skor2();                                                 //
      	}else if(strcmp(pilih,"2")==0){                                      //
      		clrscr();skor2();                                                 //
      	}else if(strcmp(pilih,"3")==0){                                      //
      		clrscr();skor2();                                                 //
      	}else if(strcmp(pilih,"4")==0){                                      //
      		clrscr();skor2();                                                 //
      	}else if(strcmp(pilih,"5")==0){                                      //
      		clrscr();skor2();                                                 //
      	}else if(strcmp(pilih,"99")==0){                                     //
      		clrscr();menu2();getch();                                         //
      	}                                                                    //
      	else{                                                                //
      		while(true){                                                      //////
            	gotoxy(99,6);printf("                 ");                          //
         		gotoxy(80,49);printf("Masukan Tidak Valid(coba lagi)");Sleep(1000);//
         		gotoxy(80,49);printf("                              ");            //
         		cabang();                                                      //////
         	}                                                                 //
      	}                                                                    //
      }                                                                       //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>CABANG2<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void cabang2(){                                                               //
   kotakTengah(6,6,39,39,71,12,72,13);kotakTengah(6,6,39,39,71,19,72,20);     //
  	kotakTengah(6,6,39,39,71,26,72,27);kotakTengah(6,6,39,39,71,33,72,34);     //
   kotakTengah(6,6,39,39,71,40,72,41);                                        //
   	textcolor(14);textbackground(9);                                        //
   	gotoxy(84,16);cprintf("1. Tunggal Putra");                              //
   	gotoxy(84,23);cprintf("2. Tunggal Putri");                              //
   	gotoxy(84,30);cprintf("3. Ganda Putra");                                //
   	gotoxy(84,37);cprintf("4. Ganda Putri");                                //
   	gotoxy(84,44);cprintf("5. Ganda Campuran");                             //
   	gotoxy(25,6);printf("Tekan 99 untuk kembali ke menu");                  //
   	gotoxy(80,6);printf("Masukan Pilihan : ");                              //
      while(true){gotoxy(99,6);gets(pilih);                                   //
      	if(strcmp(pilih,"1")==0){                                            //
      		clrscr();skor();validasicabang();                                 //
      	}else if(strcmp(pilih,"2")==0){                                      //
      		clrscr();skor();validasicabang();                                 //
      	}else if(strcmp(pilih,"3")==0){                                      //
      		clrscr();skor();validasicabang();                                 //
      	}else if(strcmp(pilih,"4")==0){                                      //
      		clrscr();skor();validasicabang();                                 //
      	}else if(strcmp(pilih,"5")==0){                                      //
      		clrscr();skor();validasicabang();                                 //
      	}else if(strcmp(pilih,"99")==0){                                     //
      		clrscr();menu();getch();                                          //
      	}                                                                    //
      	else{                                                                //
      		while(true){                                                      //////
         		gotoxy(99,6);printf("                 ");                          //
         		gotoxy(80,49);printf("Masukan Tidak Valid(coba lagi)");Sleep(1000);//
         		gotoxy(80,49);printf("                              ");            //
         		cabang2();                                                     //////
         	}                                                                 //
      	}                                                                    //
      }                                                                       //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>ENGLAND<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void england(){                                                               //
	kalender(48,18,65,21,6,8,10,12,14,16);textcolor(11);                       //
   gotoxy(83,19);cprintf("ALL ENGLAND");                                      //
   gotoxy(68,24);cprintf("Januari                                2019");      //
   gotoxy(76,42);cprintf("Jadwal : 1-6 Januari 2019");                        //
   gotoxy(78,46);printf("Tekan 98 untuk sebelumnya : ");sblm();               //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>INDONESIA<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void indonesia(){                                                             //
	kalender(48,18,65,21,6,8,10,12,14,16);textcolor(11);                       //
   gotoxy(81,19);cprintf("INDONESIA OPEN");                                   //
   gotoxy(68,24);cprintf("Januari                                2019");      //
   gotoxy(76,42);cprintf("Jadwal : 8-13 Januari 2019");                       //
   gotoxy(78,46);printf("Tekan 98 untuk sebelumnya : ");sblm();               //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>CHINA<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void china(){                                                                 //
	kalender(48,18,65,21,6,8,10,12,14,16);textcolor(11);                       //
   gotoxy(83,19);cprintf("CHINA OPEN");                                       //
   gotoxy(68,24);cprintf("Januari                                2019");      //
   gotoxy(76,42);cprintf("Jadwal : 15-20 Januari 2019");                      //
   gotoxy(78,46);printf("Tekan 98 untuk sebelumnya : ");sblm();               //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MALAYSIA<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void malaysia(){                                                              //
	kalender(48,18,65,21,6,8,10,12,14,16);textcolor(11);                       //
   gotoxy(81,19);cprintf("MALAYSIA OPEN");                                    //
   gotoxy(68,24);cprintf("Januari                                2019");      //
   gotoxy(76,42);cprintf("Jadwal : 6-12 Januari 2019");                       //
   gotoxy(78,46);printf("Tekan 98 untuk sebelumnya : ");sblm();               //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>ENGLAND2<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void england2(){                                                              //
	kalender(48,18,65,21,6,8,10,12,14,16);textcolor(11);                       //
   gotoxy(83,19);cprintf("ALL ENGLAND");                                      //
   gotoxy(68,24);cprintf("Januari                                2019");      //
   gotoxy(76,42);cprintf("Jadwal : 1-6 Januari 2019");                        //
   gotoxy(78,46);printf("Tekan 98 untuk sebelumnya : ");sblm2();              //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>INDONESIA2<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void indonesia2(){                                                            //
	kalender(48,18,65,21,6,8,10,12,14,16);textcolor(11);                       //
   gotoxy(81,19);cprintf("INDONESIA OPEN");                                   //
   gotoxy(68,24);cprintf("Januari                                2019");      //
   gotoxy(76,42);cprintf("Jadwal : 8-13 Januari 2019");                       //
   gotoxy(78,46);printf("Tekan 98 untuk sebelumnya : ");sblm2();              //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>CHINA2<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void china2(){                                                                //
	kalender(48,18,65,21,6,8,10,12,14,16);textcolor(11);                       //
   gotoxy(83,19);cprintf("CHINA OPEN");                                       //
   gotoxy(68,24);cprintf("Januari                                2019");      //
   gotoxy(76,42);cprintf("Jadwal : 15-20 Januari 2019");                      //
   gotoxy(78,46);printf("Tekan 98 untuk sebelumnya : ");sblm2();              //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MALAYSIA2<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void malaysia2(){                                                             //
	kalender(48,18,65,21,6,8,10,12,14,16);textcolor(11);                       //
   gotoxy(81,19);cprintf("MALAYSIA OPEN");                                    //
   gotoxy(68,24);cprintf("Januari                                2019");      //
   gotoxy(76,42);cprintf("Jadwal : 6-12 Januari 2019");                       //
   gotoxy(78,46);printf("Tekan 98 untuk sebelumnya : ");sblm2();              //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>PROFIL<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void profil(){                                                                //
   bingkaiAwal();textcolor(11);                                               //
   gotoxy(7,5);cprintf("PROFIL PEMAIN INDONESIA");                            //
   kotakTengah(20,21,35,36,5 ,6,6 ,7);kotakTengah(20,21,35,36,5 ,28,6 ,29);   //
   kotakTengah(20,21,36,37,41,6,42,7);kotakTengah(20,21,36,37,41,28,42,29);   ////////////////////////////////////////////////////////////////////////////////////////////////////////////
   kotakTengah(20,21,35,36,78,6,79,7);kotakTengah(20,21,35,36,78,28,79,29);textcolor(11);                                                                                               //
   gotoxy(17,10);cprintf("TUNGGAL PUTRA");                   gotoxy(52,10 );cprintf("TUNGGAL PUTRI");                    gotoxy(90,10);cprintf("GANDA CAMPURAN");textcolor(14);         //
   gotoxy(8 ,13);cprintf("Nama        : Anthony S Ginting  ");gotoxy(44,13);cprintf("Nama        : Fitriani            ");gotoxy(81,13);cprintf("Nama        : Tontowi Ahmad       ");  //
   gotoxy(8 ,14);cprintf("Tempat lahir: Cimahi, Jawa Barat ");gotoxy(44,14);cprintf("Tempat lahir: Garut, Jawa Barat   ");gotoxy(81,14);cprintf("Tempat Lahir: -                   ");  //
   gotoxy(8 ,15);cprintf("Usia        : 22 Tahun           ");gotoxy(44,15);cprintf("Usia        : 20 Tahun            ");gotoxy(81,15);cprintf("Usia        : 30 Tahun            ");  //
   gotoxy(8 ,16);cprintf("Nomor Main  : Tunggal Putra      ");gotoxy(44,16);cprintf("Nomor Main  : Tunggal Putri       ");gotoxy(81,16);cprintf("Nomor Main  : Ganda Campuran      ");  //
   gotoxy(8 ,17);cprintf("Pegangan    : Kanan              ");gotoxy(44,17);cprintf("Pegangan    : Kanan               ");gotoxy(81,17);cprintf("Pegangan    : Kanan               ");  //
   gotoxy(8 ,18);cprintf("Rank BWF    : 9 Dunia            ");gotoxy(44,18);cprintf("Rank BWF    : 31 Dunia            ");gotoxy(81,18);cprintf("Rank BWF    : 3 Dunia             ");  //
   gotoxy(8 ,19);cprintf("Rank Terbaik: 8 Dunia            ");gotoxy(44,19);cprintf("Rank Terbaik: 20 Dunia            ");gotoxy(81,19);cprintf("Rank Terbaik: 1 Dunia             ");  //
   gotoxy(8 ,20);cprintf("Prestasi    : Gold Medal BATC    ");gotoxy(44,20);cprintf("Prestasi    : Bronze Medal BATC   ");gotoxy(81,20);cprintf("Pasangan    : Liliyana Natsir     ");  //
   gotoxy(8 ,21);cprintf("Terbaik       bronze Medal AGTeam");gotoxy(44,21);cprintf("Terbaik       Bronze Medal AG Team");gotoxy(81,21);cprintf("Prestasi    : Gold Medal Olimpic  ");  //
   gotoxy(8 ,22);cprintf("              Silver Medal TUC   ");gotoxy(44,22);cprintf("              QF TUC Team 2018    ");gotoxy(81,22);cprintf("Terbaik       Gold Medal BAC      ");  //
   gotoxy(8 ,23);cprintf("              Semifinal AG 2018  ");gotoxy(44,23);cprintf("              QF Taiwan Open 2018 ");gotoxy(81,23);cprintf("              17X Win Super Series");  //
   gotoxy(8 ,24);cprintf("              Win Japan Open 2018");gotoxy(44,24);cprintf("              Qf Korea Masters    ");gotoxy(81,24);cprintf("              Silver Medal AG     ");  //
   gotoxy(8 ,25);cprintf("Club Asal   : PSGS Bandung       ");gotoxy(44,25);cprintf("Club Asal   : Exist Jakarta       ");gotoxy(81,25);cprintf("Club Asal   : PB Djarum Kudus     ");  //
   textcolor(11);                                                                                                                                                                       //
   gotoxy(18,32);cprintf("GANDA PUTRA");                      gotoxy(53,32 );cprintf("GANDA PUTRI");                      gotoxy(90,32);cprintf("GANDA CAMPURAN");textcolor(14);        //
   gotoxy(8 ,34);cprintf("Nama        : Fajar Alfian       ");gotoxy(44,34);cprintf("Nama        : Ni Ketut Mahadewi I ");gotoxy(81,34);cprintf("Nama        : Marsheila Gischa I  ");  //
   gotoxy(8 ,35);cprintf("Tempat lahir: Majalaya,Jawa Barat");gotoxy(44,35);cprintf("Tempat lahir: Denpasar, Bali      ");gotoxy(81,35);cprintf("Tempat Lahir: Jakarta             ");  //
   gotoxy(8 ,36);cprintf("Usia        : 23 Tahun           ");gotoxy(44,36);cprintf("Usia        : 23 Tahun            ");gotoxy(81,36);cprintf("Usia        : 20 Tahun            ");  //
   gotoxy(8 ,37);cprintf("Nomor Main  : Ganda Putra        ");gotoxy(44,37);cprintf("Nomor Main  : Ganda Putri         ");gotoxy(81,37);cprintf("Nomor Main  : Ganda Campuran      ");  //
   gotoxy(8 ,38);cprintf("Pegangan    : Kanan              ");gotoxy(44,38);cprintf("Pegangan    : Kanan               ");gotoxy(81,38);cprintf("Pegangan    : Kanan               ");  //
   gotoxy(8 ,39);cprintf("Rank BWF    : 8 Dunia            ");gotoxy(44,39);cprintf("Rank BWF    : 14 Dunia            ");gotoxy(81,39);cprintf("Rank BWF    : 44 Dunia            ");  //
   gotoxy(8 ,40);cprintf("Rank Terbaik: 7 Dunia            ");gotoxy(44,40);cprintf("Rank Terbaik: 16 Dunia            ");gotoxy(81,40);cprintf("Rank Terbaik: 44 Dunia            ");  //
   gotoxy(8 ,41);cprintf("Pasangan    : M.Rian Ardianto    ");gotoxy(44,41);cprintf("Pasangan    : Anggia Sitta Awanda ");gotoxy(81,41);cprintf("Pasangan    : Alfian Eko Prasetyo ");  //
   gotoxy(8 ,42);cprintf("Prestasi    : Bronze Medal AGTeam");gotoxy(44,42);cprintf("Prestasi    : Bronze Medal AG Team");gotoxy(81,42);cprintf("Prestasi    : Win Vietnam Open    ");  //
   gotoxy(8 ,43);cprintf("Terbaik       Silver Medal TUC   ");gotoxy(44,43);cprintf("Terbaik       Bronze Medal BATC   ");gotoxy(81,43);cprintf("Terbaik       Win Taiwan Open     ");  //
   gotoxy(8 ,44);cprintf("              Silver Medal AG2018");gotoxy(44,44);cprintf("              SF Indonesia Open   ");gotoxy(81,44);cprintf("              Win India S100      ");  //
   gotoxy(8 ,45);cprintf("              Win Malaysia Master");gotoxy(44,45);cprintf("              Win Vietnam Open    ");gotoxy(81,45);cprintf("              Win Babel Open      ");  //
   gotoxy(8 ,46);cprintf("Club Asal   : PSGS Bandung       ");gotoxy(44,46);cprintf("Club Asal   : PB Djarum Kudus     ");gotoxy(81,46);cprintf("Club Asal   : PB Djarum Kudus     ");  //
   while(true){                                                                                                                                                                         //
   	gotoxy(80,5);printf("Tekan 99 untuk kembali ke menu");gotoxy(111,5);gets(keluar);                                                                                                 //
   	if(strcmp(keluar,"99")==0){                                                                                                                                                       //
   		clrscr();menu();                                                              ///////////////////////////////////////////////////////////////////////////////////////////////////
   	}else{                                                                           //
      	gotoxy(111,5);printf("     ");                                                //
      	gotoxy(44,5);printf("Masukan Tidak Valid(coba lagi)");Sleep(1500);            //
         gotoxy(44,5);printf("                              ");                        //
                                                                                       //
   	}                                                                                //
   }                                                                                   //
}                                                                                      //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>SKOR<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void skor(){                                                                           //
	bingkaiAwal();                                                                      //
   kotakTengah(6,4,20,18,6 ,11,7 ,12);kotakTengah(6,4,20,18,6 ,19,7 ,20);              //
  	kotakTengah(6,4,20,18,6 ,31,7 ,32);kotakTengah(6,4,20,18,6 ,39,7 ,40);              //
   kotakTengah(6,4,20,18,27,15,28,16);kotakTengah(6,4,20,18,27,35,28,36);              //
   kotakTengah(6,4,20,18,50,25,51,26);                                                 //
   kotakTengah(5,3,7,5 ,79,9 ,80 ,10);kotakTengah(5,3,7,5 ,89 ,9,90 ,10);              //
   kotakTengah(5,3,7,5 ,99,9 ,100,10);kotakTengah(5,3,7,5 ,109,9,110,10);              //
   kotakTengah(5,3,7,5 ,79,15,80 ,16);kotakTengah(5,3,7,5 ,89,15,90 ,16);              //
   kotakTengah(5,3,7,5 ,99,15,100,16);kotakTengah(5,3,7,5,109,15,110,16);              //
   kotakTengah(5,3,7,5 ,79,22,80 ,23);kotakTengah(5,3,7,5 ,89,22,90 ,23);              //
   kotakTengah(5,3,7,5 ,99,22,100,23);kotakTengah(5,3,7,5,109,22,110,23);              //
   kotakTengah(5,3,7,5 ,79,28,80 ,29);kotakTengah(5,3,7,5 ,89,28,90 ,29);              //
   kotakTengah(5,3,7,5 ,99,28,100,29);kotakTengah(5,3,7,5,109,28,110,29);              //
   kotakTengah(5,3,7,5 ,79,37,80 ,38);kotakTengah(5,3,7,5 ,89,37,90 ,38);              //
   kotakTengah(5,3,7,5 ,99,37,100,38);kotakTengah(5,3,7,5,109,37,110,38);              //
   kotakTengah(5,3,7,5 ,79,43,80 ,44);kotakTengah(5,3,7,5 ,89,43,90 ,44);              //
   kotakTengah(5,3,7,5 ,99,43,100,44);kotakTengah(5,3,7,5,109,43,110,44);textcolor(11);//
   gotoxy(111,39);printf("     ");gotoxy(111,40);printf("     ");                      //
   gotoxy(111,41);printf("     ");gotoxy(111,30);printf("     ");                      //
   gotoxy(111,31);printf("     ");gotoxy(111,32);printf("     ");                      //
   gotoxy(111,24);printf("     ");gotoxy(111,25);printf("     ");                      //
   gotoxy(111,26);printf("     ");gotoxy(111,17);printf("     ");                      //
   gotoxy(111,18);printf("     ");gotoxy(111,19);printf("     ");                      //
   gotoxy(111,11);printf("     ");gotoxy(111,12);printf("     ");                      //
   gotoxy(111,13);printf("     ");gotoxy(111,45);printf("     ");                      //
   gotoxy(111,46);printf("     ");gotoxy(111,47);printf("     ");                      //
   gotoxy(13,28);cprintf("SEMI FINAL");gotoxy(36,28);cprintf("FINAL");                 //
   gotoxy(7 ,9 );printf ("POOL ATAS ");gotoxy(7 ,48); printf("POOL BAWAH");            //
   gotoxy(94,8 );cprintf("SEMI FINAL");gotoxy(72,28);cprintf("JUARA");                 //
   gotoxy(96,36);cprintf("FINAL");                                                     //
   gotoxy(81,15);printf("Set 1     Set 2     set 3     Skor");                         //
   gotoxy(81,28);printf("Set 1     Set 2     set 3     Skor");                         //
   gotoxy(81,43);printf("Set 1     Set 2     set 3     Skor");                         //
   gotoxy(97,6 );printf("SKOR");textcolor(14);                                         //
   if(strcmp(pilih,"1")==0){                                                           //
     	gotoxy(10,6 );cprintf("TUNGGAL PUTRA (BAGAN PERTANDINGAN) - ALL ENGLAND");       //
   }else if(strcmp(pilih,"2")==0){                                                     //
     	gotoxy(10,6 );cprintf("TUNGGAL PUTRI (BAGAN PERTANDINGAN) - ALL ENGLAND");       //
   }else if(strcmp(pilih,"3")==0){                                                     //
     	gotoxy(10,6 );cprintf("GANDA PUTRA (BAGAN PERTANDINGAN) - ALL ENGLAND");         //
   }else if(strcmp(pilih,"4")==0){                                                     //
    	gotoxy(10,6 );cprintf("GANDA PUTRI (BAGAN PERTANDINGAN) - ALL ENGLAND");         //
   }else if(strcmp(pilih,"5")==0){                                                     //
     	gotoxy(10,6 );cprintf("GANDA CAMPURAN (BAGAN PERTANDINGAN) - ALL ENGLAND");      //
   }                                                                                   //
}                                                                                      //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>LIVE SKOR1<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//
void skor2(){                                                                          //
	skor();                                                                             //
   gotoxy(9,14);printf("                ");gotoxy(9,15);printf("                ");    //
   gotoxy(9,22);printf("                ");gotoxy(9,23);printf("                ");    //
   gotoxy(9,34);printf("                ");gotoxy(9,35);printf("                ");    //
   gotoxy(9,42);printf("                ");gotoxy(9,43);printf("                ");    //
                                                                                       //
   while(true){                                                                        //
   	gotoxy(9,14);gets(pemainA);                                                      //
   	if(validasihuruf(pemainA)==0&&strlen(pemainA)<=16&&strlen(pemainA)>=3){          //
   		break;                                                                        //
   	}else{                                                                           //
   		gotoxy(9,14);printf("                ");                                      //
   	}                                                                                //
   }while(true){                                                                       //
   	gotoxy(9,15);gets(negaraA[0]);                                                   //
      if(validasihuruf(negaraA[0])==0&&strlen(negaraA[0])<=16&&strlen(negaraA[0])>=3){ //
   		break;                                                                        //
   	}else{                                                                           //
   		gotoxy(9,15);printf("                ");                                      //
   	}                                                                                //
   }while(true){                                                                       //
   	gotoxy(9,22);gets(pemainB);                                                      //
   	if(validasihuruf(pemainB)==0&&strlen(pemainB)<=16&&strlen(pemainB)>=3){          //
   		break;                                                                        //
   	}else{                                                                           //
   		gotoxy(9,22);printf("                ");                                      //
   	}                                                                                //
   }while(true){                                                                       //
   	gotoxy(9,23);gets(negaraB[0]);                                                   //
      if(validasihuruf(negaraB[0])==0&&strlen(negaraB[0])<=16&&strlen(negaraB[0])>=3){ //
   		break;                                                                        //
   	}else{                                                                           //
   		gotoxy(9,23);printf("                ");                                      //
   	}                                                                                //
   }while(true){                                                                       //
   	gotoxy(9,34);gets(pemainC);                                                      //
   	if(validasihuruf(pemainC)==0&&strlen(pemainC)<=16&&strlen(pemainC)>=3){          //
   		break;                                                                        //
   	}else{                                                                           //
   		gotoxy(9,34);printf("                ");                                      //
   	}                                                                                //
   }while(true){                                                                       //
   	gotoxy(9,35);gets(negaraC[0]);                                                   //
      if(validasihuruf(negaraC[0])==0&&strlen(negaraC[0])<=16&&strlen(negaraC[0])>=3){ //
   		break;                                                                        //
   	}else{                                                                           //
   		gotoxy(9,35);printf("                ");                                      //
   	}                                                                                //
   }while(true){                                                                       //
   	gotoxy(9,42);gets(pemainD);                                                      //
   	if(validasihuruf(pemainD)==0&&strlen(pemainD)<=16&&strlen(pemainD)>=3){          //
   		break;                                                                        //
   	}else{                                                                           //
   		gotoxy(9,42);printf("                ");                                      //
   	}                                                                                //
   }while(true){                                                                       //
   	gotoxy(9,43);gets(negaraD[0]);                                                   //
      if(validasihuruf(negaraD[0])==0&&strlen(negaraD[0])<=16&&strlen(negaraD[0])>=3){ //
   		break;                                                                        //
   	}else{                                                                           //
   		gotoxy(9,43);printf("                ");                                      //
   	}                                                                                //
   }                                                                                   //
/////////////////////////////////////////////////////////////////////////////////////////
	for(int a=1;a<=60;a++){                                                         //
		gotoxy(113,12);gets(lskor);                                                  //
      if(strcmp(lskor,"1")==0){                                                    //
      	skorA++;                                                                  //
         gotoxy(83,12);printf("%d",skorA);                                         //
         gotoxy(111,12);printf("     ");                                           //
         if(skorA==21&&skorB<20||skorA>21&&skorA-skorB==2||skorA==30){             //
         	setA++;skorA=0;skorB=0;                                                //
         	while(a<=60){                                                          //
            	gotoxy(113,12);gets(lskor);                                         //
               gotoxy(111,12);printf("     ");                                     //
            	if(strcmp(lskor,"1")==0){                                           //
      				skorA++;                                                         //
         			gotoxy(93,12);printf("%d",skorA);                                //
                  gotoxy(111,12);printf("     ");                                  //
                  if(skorA==21&&skorB<20||skorA>21&&skorA-skorB==2||skorA==30){    //
                  	setA++;                                                       //
                  	if(setA==2){                                                  //
                     	gotoxy(30,18);printf("%s",pemainA);                        //
                        gotoxy(30,19);printf("%s",negaraA[0]);                     //
                  		skorA=0;skorB=0;skor3();                                   //
                  	}else if(setA==1&&setB==1){                                   //
                   		skorA=0;skorB=0;set3();                                    //
                  	}                                                             //
                  }                                                                //
               }else if(strcmp(lskor,"0")==0){                                     //
      				skorA+=0;                                                        //
         			gotoxy(111,12);printf("     ");gotoxy(93,12);printf("%d",skorA); //
      			}else{                                                              //
      				gotoxy(111,12);printf("          ");                             //
                  kotakTengah(5,0,1,0,115,9,0,0);                                  //
                  kotakTengah(5,0,1,0,117,9,0,0);                                  //
                  kotakTengah(5,0,1,0,119,9,0,0);                                  //
      			}gotoxy(113,18);gets(lskor);gotoxy(111,18);printf("     ");         //
               if(strcmp(lskor,"1")==0){                                           //
               	skorB++;                                                         //
                  gotoxy(93,18);printf("%d",skorB);gotoxy(111,18);printf("     "); //
               	if(skorB==21&&skorA<20||skorB>21&&skorB-skorA==2||skorB==30){    //
                  	setB++;                                                       //
                  	if(setB==2){                                                  //
                        gotoxy(30,18);printf("%s",pemainB);                        //
                        gotoxy(30,19);printf("%s",negaraB[0]);                     //
                  		skorA=0;skorB=0;skor3();                                   //
                  	}else if(setA==1&&setB==1){                                   //
                  		skorA=0;skorB=0;set3();                                    //
                  	}                                                             //
                  }                                                                //
               }else if(strcmp(lskor,"0")==0){                                     //
               	skorB+=0;                                                        //
               	gotoxy(111,18);printf("     ");gotoxy(93,18);printf("%d",skorB); //
            	}else{                                                              //
               	gotoxy(111,18);printf("          ");                             //
                  kotakTengah(5,0,1,0,115,15,0,0);                                 //
                  kotakTengah(5,0,1,0,117,15,0,0);                                 //
                  kotakTengah(5,0,1,0,119,15,0,0);                                 //
               }                                                                   //
            }                                                                      //
         }                                                                         //
                                                                                   //
      }else if(strcmp(lskor,"0")==0){                                              //
      	skorA+=0;                                                                 //
         gotoxy(111,12);printf("     ");gotoxy(83,12);printf("%d",skorA);          //
      }else{                                                                       //
      	gotoxy(111,12);printf("          ");                                      //
         kotakTengah(5,0,1,0,115,9,0,0);                                           //
         kotakTengah(5,0,1,0,117,9,0,0);                                           //
         kotakTengah(5,0,1,0,119,9,0,0);                                           //
      }                                                                            //
/////////////////////////////////////////////////////////////////////////////////////
      gotoxy(113,18);gets(lskor);                                                  //
      if(strcmp(lskor,"1")==0){                                                    //
      	skorB++;                                                                  //
         gotoxy(83,18);printf("%d",skorB);gotoxy(111,18);printf("     ");          //
         if(skorB==21&&skorA<20||skorB>21&&skorB-skorA==2||skorB==30){             //
         	setB++;skorA=0;skorB=0;                                                //
         	while(a<=60){                                                          //
            	gotoxy(113,18);gets(lskor);gotoxy(111,18);printf("     ");          //
            	if(strcmp(lskor,"1")==0){                                           //
      				skorB++;                                                         //
         			gotoxy(93,18);printf("%d",skorB);gotoxy(111,18);printf("     "); //
               	if(skorB==21&&skorA<20||skorB>21&&skorB-skorA==2||skorB==30){    //
               		setB++;                                                       //
                  	if(setB==2){                                                  //
                        gotoxy(30,18);printf("%s",pemainB);                        //
                        gotoxy(30,19);printf("%s",negaraB[0]);                     //
                  		skorA=0;skorB=0;skor3();                                   //
                  	}else if(setA==1&&setB==1){                                   //
                  		skorA=0;skorB=0;set3();                                    //
                  	}                                                             //
                  }                                                                //
               }else if(strcmp(lskor,"0")==0){                                     //
      				skorB+=0;                                                        //
         			gotoxy(111,18);printf("     ");gotoxy(93,18);printf("%d",skorB); //
      			}else{                                                              //
      				gotoxy(111,18);printf("          ");                             //
                  kotakTengah(5,0,1,0,115,15,0,0);                                 //
                  kotakTengah(5,0,1,0,117,15,0,0);                                 //
                  kotakTengah(5,0,1,0,119,15,0,0);                                 //
      			}gotoxy(113,12);gets(lskor);gotoxy(111,12);printf("     ");         //
               if(strcmp(lskor,"1")==0){                                           //
               	skorA++;                                                         //
                  gotoxy(93,12);printf("%d",skorA);gotoxy(111,12);printf("     "); //
               	if(skorA==21&&skorB<20||skorA>21&&skorA-skorB==2||skorA==30){    //
               		setA++;                                                       //
                  	if(setA==2){                                                  //
                        gotoxy(30,18);printf("%s",pemainA);                        //
                        gotoxy(30,19);printf("%s",negaraA[0]);                     //
                  		skorA=0;skorB=0;skor3();                                   //
                  	}else if(setA==1&&setB==1){                                   //
                    		skorA=0;skorB=0;set3();                                    //
                  	}                                                             //
                  }                                                                //
               }else if(strcmp(lskor,"0")==0){                                     //
                 	skorA+=0;                                                        //
                  gotoxy(111,12);printf("     ");gotoxy(93,12);printf("%d",skorA); //
               }else{                                                              //
                	gotoxy(111,12);printf("          ");                             //
                  kotakTengah(5,0,1,0,115,9,0,0);                                  //
                  kotakTengah(5,0,1,0,117,9,0,0);                                  //
                  kotakTengah(5,0,1,0,119,9,0,0);                                  //
     				}                                                                   //
            }                                                                      //
         }                                                                         //
                                                                                   //
      }else if(strcmp(lskor,"0")==0){                                              //
      	skorB+=0;                                                                 //
         gotoxy(83,18);printf("%d",skorB);                                         //
         gotoxy(111,18);printf("     ");                                           //
      }else{                                                                       //
      	gotoxy(111,18);printf("          ");                                      //
         kotakTengah(5,0,1,0,115,15,0,0);                                          //
         kotakTengah(5,0,1,0,117,15,0,0);                                          //
         kotakTengah(5,0,1,0,119,15,0,0);                                          //
      }                                                                            //
   }                                                                               //
}                                                                                  //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>LIVE SKOR2<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////
void skor3(){                                                                      //
	for(int a=1;a<=60;a++){                                                         //
		gotoxy(113,25);gets(lskor);                                                  //
      if(strcmp(lskor,"1")==0){                                                    //
      	skorA++;                                                                  //
         gotoxy(83,25);printf("%d",skorA);gotoxy(111,25);printf("     ");          //
         if(skorA==21&&skorB<20||skorA>21&&skorA-skorB==2||skorA==30){             //
         	setA1++;skorA=0;skorB=0;                                               //
         	while(a<=60){                                                          //
            	gotoxy(113,25);gets(lskor);gotoxy(111,25);printf("     ");          //
            	if(strcmp(lskor,"1")==0){                                           //
      				skorA++;                                                         //
         			gotoxy(93,25);printf("%d",skorA);gotoxy(111,25);printf("     "); //
                  if(skorA==21&&skorB<20||skorA>21&&skorA-skorB==2||skorA==30){    //
               		setA1++;                                                      //
                  	if(setA1==2){                                                 //
                     	gotoxy(30,38);printf("%s",pemainC);                        //
                        gotoxy(30,39);printf("%s",negaraC[0]);                     //
                  		skorA=0;skorB=0;skorfinal();                               //
                  	}else if(setA1==1&&setB1==1){                                 //
                  		skorA=0;skorB=0;set31();                                   //
                  	}                                                             //
                  }                                                                //
               }else if(strcmp(lskor,"0")==0){                                     //
      				skorA+=0;                                                        //
         			gotoxy(111,25);printf("     ");gotoxy(93,25);printf("%d",skorA); //
      			}else{                                                              //
      				gotoxy(111,25);printf("          ");                             //
                  kotakTengah(5,0,1,0,115,22,0,0);                                 //
                  kotakTengah(5,0,1,0,117,22,0,0);                                 //
                  kotakTengah(5,0,1,0,119,22,0,0);                                 //
      			}gotoxy(113,31);gets(lskor);gotoxy(111,31);printf("     ");         //
               if(strcmp(lskor,"1")==0){                                           //
               	skorB++;                                                         //
                  gotoxy(93,31);printf("%d",skorB);gotoxy(111,31);printf("     "); //
               	if(skorB==21&&skorA<20||skorB>21&&skorB-skorA==2||skorB==30){    //
                  	setB1++;                                                      //
                  	if(setB1==2){                                                  //
                     	gotoxy(30,38);printf("%s",pemainD);                        //
                        gotoxy(30,39);printf("%s",negaraD[0]);                     //
                  		skorA=0;skorB=0;skorfinal();                               //
                  	}else if(setA1==1&&setB1==1){                                 //
                  		skorA=0;skorB=0;set31();                                   //
                  	}                                                             //
                  }                                                                //
               }else if(strcmp(lskor,"0")==0){                                     //
               	skorB+=0;                                                        //
               	gotoxy(111,31);printf("     ");gotoxy(93,31);printf("%d",skorB); //
            	}else{                                                              //
               	gotoxy(111,31);printf("          ");                             //
                  kotakTengah(5,0,1,0,115,28,0,0);                                 //
                  kotakTengah(5,0,1,0,117,28,0,0);                                 //
                  kotakTengah(5,0,1,0,119,28,0,0);                                 //
               }                                                                   //
            }                                                                      //
         }                                                                         //
                                                                                   //
      }else if(strcmp(lskor,"0")==0){                                              //
      	skorA+=0;                                                                 //
         gotoxy(111,25);printf("     ");gotoxy(83,25);printf("%d",skorA);          //
      }else{                                                                       //
      	gotoxy(111,25);printf("          ");                                      //
         kotakTengah(5,0,1,0,115,22,0,0);                                          //
         kotakTengah(5,0,1,0,117,22,0,0);                                          //
         kotakTengah(5,0,1,0,119,22,0,0);                                          //
      }                                                                            //
/////////////////////////////////////////////////////////////////////////////////////
      gotoxy(113,31);gets(lskor);                                                  //
      if(strcmp(lskor,"1")==0){                                                    //
      	skorB++;                                                                  //
         gotoxy(83,31);printf("%d",skorB);gotoxy(111,31);printf("     ");          //
         if(skorB==21&&skorA<20||skorB>21&&skorB-skorA==2||skorB==30){             //
         	setB1++;skorA=0;skorB=0;                                               //
         	while(a<=60){                                                          //
            	gotoxy(113,31);gets(lskor);gotoxy(111,31);printf("     ");          //
            	if(strcmp(lskor,"1")==0){                                           //
      				skorB++;                                                         //
         			gotoxy(93,31);printf("%d",skorB);gotoxy(111,31);printf("     "); //
                  if(skorB==21&&skorA<20||skorB>21&&skorB-skorA==2||skorB==30){    //
               		setB1++;                                                      //
                     if(setB1==2){                                                 //
                     	gotoxy(30,38);printf("%s",pemainD);                        //
                        gotoxy(30,39);printf("%s",negaraD[0]);                     //
                  		skorA=0;skorB=0;skorfinal();                               //
                  	}else if(setA1==setB1){                                       //
                  		skorA=0;skorB=0;set31();                                   //
                  	}                                                             //
                  }                                                                //
               }else if(strcmp(lskor,"0")==0){                                     //
      				skorB+=0;                                                        //
         			gotoxy(111,31);printf("     ");gotoxy(93,31);printf("%d",skorB); //
      			}else{                                                              //
      				gotoxy(111,25);printf("          ");                             //
                  kotakTengah(5,0,1,0,115,22,0,0);                                 //
                  kotakTengah(5,0,1,0,117,22,0,0);                                 //
                  kotakTengah(5,0,1,0,119,22,0,0);                                 //
      			}gotoxy(113,25);gets(lskor);gotoxy(111,25);printf("     ");         //
               if(strcmp(lskor,"1")==0){                                           //
               	skorA++;                                                         //
                  gotoxy(93,25);printf("%d",skorA);gotoxy(112,25);printf("   ");   //
                  if(skorA==21&&skorB<20||skorA>21&&skorA-skorB==2||skorA==30){    //
               		setA1++;                                                      //
                  	if(setA1==2){                                                 //
                     	gotoxy(30,38);printf("%s",pemainC);                        //
                        gotoxy(30,39);printf("%s",negaraC[0]);                     //
                    		skorA=0;skorB=0;skorfinal();                               //
                  	}else if(setA1==1&&setB1==1){                                 //
                  		skorA=0;skorB=0;set31();                                   //
                  	}                                                             //
                  }                                                                //
               }else if(strcmp(lskor,"0")==0){                                     //
                 	skorA+=0;                                                        //
                  gotoxy(111,25);printf("     ");gotoxy(93,25);printf("%d",skorA); //
               }else{                                                              //
                	gotoxy(111,25);printf("          ");                             //
                  kotakTengah(5,0,1,0,115,22,0,0);                                 //
                  kotakTengah(5,0,1,0,117,22,0,0);                                 //
                  kotakTengah(5,0,1,0,119,22,0,0);                                 //
     				}                                                                   //
            }                                                                      //
         }                                                                         //
                                                                                   //
      }else if(strcmp(lskor,"0")==0){                                              //
      	skorB+=0;                                                                 //
         gotoxy(83,31);printf("%d",skorB);                                         //
         gotoxy(111,31);printf("     ");                                           //
      }else{                                                                       //
      	gotoxy(111,31);printf("          ");                                      //
         kotakTengah(5,0,1,0,115,28,0,0);                                          //
         kotakTengah(5,0,1,0,117,28,0,0);                                          //
         kotakTengah(5,0,1,0,119,28,0,0);                                          //
      }                                                                            //
   }                                                                               //
}                                                                                  //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>LIVE FINAl<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////
void skorfinal(){                                                                  //
	for(int a=1;a<=60;a++){                                                         //
		gotoxy(113,40);gets(lskor);                                                  //
      if(strcmp(lskor,"1")==0){                                                    //
      	skorX++;                                                                  //
         gotoxy(83,40);printf("%d",skorX);gotoxy(111,40);printf("     ");          //
         if(skorX==21&&skorY<20||skorX>21&&skorX-skorY==2||skorX==30){             //
         	setC++;skorX=0;skorY=0;                                                //
         	while(a<=60){                                                          //
            	gotoxy(113,40);gets(lskor);gotoxy(111,40);printf("     ");          //
            	if(strcmp(lskor,"1")==0){                                           //
      				skorX++;                                                         //
         			gotoxy(93,40);printf("%d",skorX);gotoxy(111,40);printf("     "); //
                  if(skorX==21&&skorY<20||skorX>21&&skorX-skorY==2||skorX==30){    //
               		setC++;                                                       //
                  	if(setC==2&&setA>setB){                                       //
                     	gotoxy(53,28);printf("%s",pemainA);                        //
                        gotoxy(53,29);printf("%s",negaraA[0]);                     //
                        skorA=0;skorB=0;setA=0;setA1=0;setB=0;setB1=0;             //
                        skorX=0;skorY=0;setC=0;setD=0;                             //
                  		getch();clrscr();bagan();cabang();                         //
                  	}else if(setC==1&&setD==1){                                   //
                  		skorX=0;skorY=0;setC=0;setD=0;set32();                     //
                  	}else{                                                        //
                     	gotoxy(53,28);printf("%s",pemainB);                        //
                        gotoxy(53,29);printf("%s",negaraB[0]);                     //
                  		getch();clrscr();bagan();cabang();                         //
                     }                                                             //
                  }                                                                //
               }else if(strcmp(lskor,"0")==0){                                     //
      				skorX+=0;                                                        //
         			gotoxy(111,40);printf("     ");gotoxy(93,40);printf("%d",skorA); //
      			}else{                                                              //
      				gotoxy(111,40);printf("          ");                             //
                  kotakTengah(5,0,1,0,115,37,0,0);                                 //
                  kotakTengah(5,0,1,0,117,37,0,0);                                 //
                  kotakTengah(5,0,1,0,119,37,0,0);                                 //
      			}gotoxy(113,46);gets(lskor);gotoxy(111,46);printf("     ");         //
               if(strcmp(lskor,"1")==0){                                           //
               	skorY++;                                                         //
                  gotoxy(93,46);printf("%d",skorY);gotoxy(111,46);printf("     "); //
               	if(skorY==21&&skorX<20||skorY>21&&skorY-skorX==2||skorY==30){    //
                  	setD++;                                                       //
                  	if(setD==2&&setA1>setB1){                                     //
								gotoxy(53,28);printf("%s",pemainC);                        //
                        gotoxy(53,29);printf("%s",negaraC[0]);                     //
                        skorA=0;skorB=0;setA=0;setA1=0;setB=0;setB1=0;             //
                        skorX=0;skorY=0;setC=0;setD=0;                             //
                  		getch();clrscr();bagan();cabang();                         //
                  	}else if(setC==1&&setD==1){                                   //
                  		skorX=0;skorY=0;setC=0;setD=0;set32();                     //
                  	}else{                                                        //
                     	gotoxy(53,28);printf("%s",pemainD);                        //
                        gotoxy(53,29);printf("%s",negaraD[0]);                     //
                  		getch();clrscr();bagan();cabang();                         //
                     }                                                             //
                  }                                                                //
               }else if(strcmp(lskor,"0")==0){                                     //
               	skorY+=0;                                                        //
               	gotoxy(111,46);printf("     ");gotoxy(93,46);printf("%d",skorB); //
            	}else{                                                              //
               	gotoxy(111,46);printf("          ");                             //
                  kotakTengah(5,0,1,0,115,43,0,0);                                 //
                  kotakTengah(5,0,1,0,117,43,0,0);                                 //
                  kotakTengah(5,0,1,0,119,43,0,0);                                 //
               }                                                                   //
            }                                                                      //
         }                                                                         //
                                                                                   //
      }else if(strcmp(lskor,"0")==0){                                              //
      	skorX+=0;                                                                 //
         gotoxy(111,40);printf("     ");gotoxy(83,40);printf("%d",skorX);          //
      }else{                                                                       //
      	gotoxy(111,40);printf("          ");                                      //
         kotakTengah(5,0,1,0,115,37,0,0);                                          //
         kotakTengah(5,0,1,0,117,37,0,0);                                          //
         kotakTengah(5,0,1,0,119,37,0,0);                                          //
      }                                                                            //
/////////////////////////////////////////////////////////////////////////////////////
      gotoxy(113,46);gets(lskor);                                                  //
      if(strcmp(lskor,"1")==0){                                                    //
      	skorY++;                                                                  //
         gotoxy(83,46);printf("%d",skorY);gotoxy(111,46);printf("     ");          //
         if(skorY==21&&skorX<20||skorY>21&&skorY-skorX==2||skorY==30){             //
         	setD++;skorX=0;skorY=0;                                                //
         	while(a<=60){                                                          //
            	gotoxy(113,46);gets(lskor);gotoxy(111,46);printf("     ");          //
            	if(strcmp(lskor,"1")==0){                                           //
      				skorY++;                                                         //
         			gotoxy(93,46);printf("%d",skorY);gotoxy(111,46);printf("     "); //
                  if(skorY==21&&skorX<20||skorY>21&&skorY-skorX==2||skorY==30){    //
               		setD++;                                                       //
                     if(setD==2&&setA1>setB1){                                     //
                     	gotoxy(53,28);printf("%s",pemainC);                        //
                        gotoxy(53,29);printf("%s",negaraC[0]);                     //
                        skorA=0;skorB=0;setA=0;setA1=0;setB=0;setB1=0;             //
                        skorX=0;skorY=0;setC=0;setD=0;                             //
                  		getch();clrscr();bagan();cabang();                         //
                  	}else if(setC==1&&setD==1){                                   //
                  		skorX=0;skorY=0;setC=0;setD=0;set32();                     //
                  	}else{                                                        //
                     	gotoxy(53,28);printf("%s",pemainD);                        //
                        gotoxy(53,29);printf("%s",negaraD[0]);                     //
                  		getch();clrscr();bagan();cabang();                         //
                     }                                                             //
                  }                                                                //
               }else if(strcmp(lskor,"0")==0){                                     //
      				skorY+=0;                                                        //
         			gotoxy(111,46);printf("     ");gotoxy(93,46);printf("%d",skorY); //
      			}else{                                                              //
      				gotoxy(111,46);printf("          ");                             //
                  kotakTengah(5,0,1,0,115,43,0,0);                                 //
                  kotakTengah(5,0,1,0,117,43,0,0);                                 //
                  kotakTengah(5,0,1,0,119,43,0,0);                                 //
      			}gotoxy(113,40);gets(lskor);gotoxy(111,40);printf("     ");         //
               if(strcmp(lskor,"1")==0){                                           //
               	skorX++;                                                         //
                  gotoxy(93,40);printf("%d",skorX);gotoxy(111,40);printf("     "); //
                  if(skorX==21&&skorY<20||skorX>21&&skorX-skorY==2||skorX==30){    //
               		setC++;                                                       //
                  	if(setC==2&&setA>setB){                                       //
								gotoxy(53,28);printf("%s",pemainA);                        //
                        gotoxy(53,29);printf("%s",negaraA[0]);                     //
                        skorA=0;skorB=0;setA=0;setA1=0;setB=0;setB1=0;             //
                        skorX=0;skorY=0;setC=0;setD=0;                             //
                  		getch();clrscr();bagan();cabang();                         //
                  	}else if(setC==1&&setD==1){                                   //
                  		skorX=0;skorY=0;setC=0;setD=0;set32();                     //
                  	}else{                                                        //
                     	gotoxy(53,28);printf("%s",pemainB);                        //
                        gotoxy(53,29);printf("%s",negaraB[0]);                     //
                  		getch();clrscr();bagan();cabang();                         //
                     }                                                             //
                  }                                                                //
               }else if(strcmp(lskor,"0")==0){                                     //
                 	skorX+=0;                                                        //
                  gotoxy(111,40);printf("     ");gotoxy(93,40);printf("%d",skorX); //
               }else{                                                              //
                	gotoxy(111,40);printf("          ");                             //
                  kotakTengah(5,0,1,0,115,37,0,0);                                 //
                  kotakTengah(5,0,1,0,117,37,0,0);                                 //
                  kotakTengah(5,0,1,0,119,37,0,0);                                 //
     				}                                                                   //
            }                                                                      //
         }                                                                         //
                                                                                   //
      }else if(strcmp(lskor,"0")==0){                                              //
      	skorY+=0;                                                                 //
         gotoxy(83,46);printf("%d",skorY);                                         //
         gotoxy(111,46);printf("     ");                                           //
      }else{                                                                       //
      	gotoxy(111,46);printf("          ");                                      //
         kotakTengah(5,0,1,0,115,43,0,0);                                          //
         kotakTengah(5,0,1,0,117,43,0,0);                                          //
         kotakTengah(5,0,1,0,119,43,0,0);                                          //
      }                                                                            //
   }                                                                               //
}                                                                                  //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>RUBBER(SET3)<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////
void set3(){                                                                       //
	for(int a=1;a<=60;a++){                                                         //
		gotoxy(113,12);gets(lskor);                                                  //
      if(strcmp(lskor,"1")==0){                                                    //
      	skorA++;                                                                  //
         gotoxy(103,12);printf("%d",skorA);gotoxy(111,12);printf("     ");         //
      }else if(strcmp(lskor,"0")==0){                                              //
      	skorA+=0;                                                                 //
         gotoxy(111,12);printf("     ");gotoxy(103,12);printf("%d",skorA);         //
      }else{                                                                       //
      	gotoxy(111,12);printf("          ");                                      //
         kotakTengah(5,0,1,0,115,9,0,0);                                           //
         kotakTengah(5,0,1,0,117,9,0,0);                                           //
         kotakTengah(5,0,1,0,119,9,0,0);                                           //
      }if(skorA==21&&skorB<20||skorA>21&&skorA-skorB==2||skorA==30){               //
      	gotoxy(30,18);printf("%s",pemainA);gotoxy(30,19);printf("%s",negaraA[0]); //
      	setA++;skorA=0;skorB=0;skor3();                                           //
      }gotoxy(113,18);gets(lskor);                                                 //
      if(strcmp(lskor,"1")==0){                                                    //
      	skorB++;                                                                  //
         gotoxy(103,18);printf("%d",skorB);gotoxy(111,18);printf("     ");         //
      }else if(strcmp(lskor,"0")==0){                                              //
      	skorB+=0;                                                                 //
         gotoxy(103,18);printf("%d",skorB);                                        //
         gotoxy(111,18);printf("     ");                                           //
      }else{                                                                       //
      	gotoxy(111,18);printf("          ");                                      //
         kotakTengah(5,0,1,0,115,15,0,0);                                          //
         kotakTengah(5,0,1,0,117,15,0,0);                                          //
         kotakTengah(5,0,1,0,119,15,0,0);                                          //
      }if(skorB==21&&skorA<20||skorB>21&&skorB-skorA==2||skorB==30){               //
      	gotoxy(30,18);printf("%s",pemainB);gotoxy(30,19);printf("%s",negaraB[0]); //
         setB++;skorA=0;skorB=0;skor3();                                           //
      }                                                                            //
   }                                                                               //
}                                                                                  //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>RUBBER(SET31)<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////
void set31(){                                                                      //
	for(int a=1;a<=60;a++){                                                         //
		gotoxy(113,25);gets(lskor);                                                  //
      if(strcmp(lskor,"1")==0){                                                    //
      	skorA++;                                                                  //
         gotoxy(103,25);printf("%d",skorA);gotoxy(111,25);printf("     ");         //
      }else if(strcmp(lskor,"0")==0){                                              //
      	skorA+=0;                                                                 //
         gotoxy(111,25);printf("     ");gotoxy(103,25);printf("%d",skorA);         //
      }else{                                                                       //
      	gotoxy(111,25);printf("          ");                                      //
         kotakTengah(5,0,1,0,115,22,0,0);                                          //
         kotakTengah(5,0,1,0,117,22,0,0);                                          //
         kotakTengah(5,0,1,0,119,22,0,0);                                          //
      }if(skorA==21&&skorB<20||skorA>21&&skorA-skorB==2||skorA==30){               //
      	gotoxy(30,38);printf("%s",pemainC);gotoxy(30,39);printf("%s",negaraC[0]); //
         setA1++;skorA=0;skorB=0;skorfinal();                                      //
      }gotoxy(113,31);gets(lskor);                                                 //
      if(strcmp(lskor,"1")==0){                                                    //
      	skorB++;                                                                  //
         gotoxy(103,31);printf("%d",skorB);gotoxy(111,31);printf("     ");         //
      }else if(strcmp(lskor,"0")==0){                                              //
      	skorB+=0;                                                                 //
         gotoxy(103,31);printf("%d",skorB);                                        //
         gotoxy(111,31);printf("     ");                                           //
      }else{                                                                       //
      	gotoxy(111,31);printf("          ");                                      //
         kotakTengah(5,0,1,0,115,28,0,0);                                          //
         kotakTengah(5,0,1,0,117,28,0,0);                                          //
         kotakTengah(5,0,1,0,119,28,0,0);                                          //
      }if(skorB==21&&skorA<20||skorB>21&&skorB-skorA==2||skorB==30){               //
      	gotoxy(30,38);printf("%s",pemainD);gotoxy(30,39);printf("%s",negaraD[0]); //
      	setB1++;skorA=0;skorB=0;skorfinal();                                      //
      }                                                                            //
   }                                                                               //
}//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>RUBBER(SET32)<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////
void set32(){                                                                      //
	for(int a=1;a<=60;a++){                                                         //
		gotoxy(113,40);gets(lskor);                                                  //
      if(strcmp(lskor,"1")==0){                                                    //
      	skorX++;                                                                  //
         gotoxy(103,40);printf("%d",skorX);gotoxy(111,40);printf("     ");         //
      }else if(strcmp(lskor,"0")==0){                                              //
      	skorX+=0;                                                                 //
         gotoxy(111,40);printf("     ");gotoxy(103,40);printf("%d",skorX);         //
      }else{                                                                       //
      	gotoxy(111,40);printf("          ");                                      //
         kotakTengah(5,0,1,0,115,37,0,0);                                          //
         kotakTengah(5,0,1,0,117,37,0,0);                                          //
         kotakTengah(5,0,1,0,119,37,0,0);                                          //
      }if(skorX==21&&skorY<20||skorX>21&&skorX-skorY==2||skorX==30){               //
      	setC++;                                                                   //
         if(setC==1&&setA>setB){                                                   //
         	gotoxy(53,28);printf("%s",pemainA);                                    //
            gotoxy(53,29);printf("%s ",negaraA[0]);                                //
            skorA=0;skorB=0;setA=0;setA1=0;setB=0;setB1=0;                         //
            skorX=0;skorY=0;setC=0;setD=0;                                         //
      		getch();clrscr();bagan();cabang();                                     //
         }else if(setC==1&&setA<setB){                                             //
      		gotoxy(53,28);printf("%s",pemainB);                                    //
            gotoxy(53,29);printf("%s ",negaraB[0]);                                //
            skorA=0;skorB=0;setA=0;setA1=0;setB=0;setB1=0;                         //
            skorX=0;skorY=0;setC=0;setD=0;                                         //
      		getch();clrscr();bagan();cabang();                                     //
         }                                                                         //
      }gotoxy(113,46);gets(lskor);                                                 //
      if(strcmp(lskor,"1")==0){                                                    //
      	skorY++;                                                                  //
         gotoxy(103,46);printf("%d",skorY);gotoxy(111,46);printf("     ");         //
      }else if(strcmp(lskor,"0")==0){                                              //
      	skorY+=0;                                                                 //
         gotoxy(103,46);printf("%d",skorY);                                        //
         gotoxy(111,46);printf("     ");                                           //
      }else{                                                                       //
      	gotoxy(111,46);printf("          ");                                      //
         kotakTengah(5,0,1,0,115,43,0,0);                                          //
         kotakTengah(5,0,1,0,117,43,0,0);                                          //
         kotakTengah(5,0,1,0,119,43,0,0);                                          //
      }if(skorY==21&&skorX<20||skorY>21&&skorY-skorX==2||skorY==30){               //
      	setD++;                                                                   //
         if(setD==1&&setA1>setB1){                                                 //
         	gotoxy(53,28);printf("%s",pemainC);                                    //
            gotoxy(53,29);printf("%s ",negaraC[0]);                                //
            skorA=0;skorB=0;setA=0;setA1=0;setB=0;setB1=0;                         //
            skorX=0;skorY=0;setC=0;setD=0;                                         //
      		getch();clrscr();bagan();cabang();	                                   //
      	}else if((setD==1&&setA1<setB1)){                                         //
      		gotoxy(53,28);printf("%s",pemainD);                                    //
            gotoxy(53,29);printf("%s ",negaraD[0]);                                //
            skorA=0;skorB=0;setA=0;setA1=0;setB=0;setB1=0;                         //
            skorX=0;skorY=0;setC=0;setD=0;                                         //
      		getch();clrscr();bagan();cabang();                                     //
         }                                                                         //
      }                                                                            //
   }                                                                               //
}                                                                                  //
                                                                                   //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>PERLENGKAPAN<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////////////////////
void perlengkapan(){                                                                                      //
	bingkaiAwal();textcolor(11);                                                                           //
   gotoxy(6,7);cprintf("PERLENGKAPAN BULUTANGKIS");gotoxy(93,7);cprintf("TRANSAKSI");                     //
   kotakTengah(35,36,35,36,5 ,10,6 ,11);kotakTengah(35,36,15,16,39,10,40,11);                             //
   kotakTengah(35,36,25,26,50,10,51,11);kotakTengah(1 ,0 ,69,0 ,6 ,17,6 ,9 );                             //
   kotakTengah(1 ,0 ,69,0 ,6 ,21,6 ,9 );kotakTengah(1 ,0 ,69,0 ,6 ,25,6 ,9 );                             //
   kotakTengah(1 ,0 ,69,0 ,6 ,29,6 ,9 );kotakTengah(1 ,0 ,69,0 ,6 ,33,6 ,9 );                             //
   kotakTengah(1 ,0 ,69,0 ,6 ,37,6 ,9 );kotakTengah(1 ,0 ,69,0 ,6 ,41,6 ,9 );                             //
   kotakTengah(1 ,0 ,71,0 ,5 ,45,5 ,9 );kotakTengah(35,0 ,1 ,0 ,75,10,75,10);                             //
   kotakTengah(35,0 ,1 ,0 ,10,10,10,10);pilihper();validasibeli();                                        //
}                                                                                                         //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>PERLENGKAPAN1<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////////////////////////////
void perlengkapan1(){                                                                                //
	bingkaiAwal();textcolor(11);                                                                      //
   gotoxy(6,7);cprintf("PERLENGKAPAN BULUTANGKIS");gotoxy(90,7);cprintf("PERUBAHAN STOK");           //
   kotakTengah(35,36,35,36,5 ,10,6 ,11);kotakTengah(35,36,15,16,39,10,40,11);                        //
   kotakTengah(35,36,25,26,50,10,51,11);kotakTengah(1 ,0 ,69,0 ,6 ,17,6 ,9 );                        //
   kotakTengah(1 ,0 ,69,0 ,6 ,21,6 ,9 );kotakTengah(1 ,0 ,69,0 ,6 ,25,6 ,9 );                        //
   kotakTengah(1 ,0 ,69,0 ,6 ,29,6 ,9 );kotakTengah(1 ,0 ,69,0 ,6 ,33,6 ,9 );                        //
   kotakTengah(1 ,0 ,69,0 ,6 ,37,6 ,9 );kotakTengah(1 ,0 ,69,0 ,6 ,41,6 ,9 );                        //
   kotakTengah(1 ,0 ,71,0 ,5 ,45,5 ,9 );kotakTengah(35,0 ,1 ,0 ,75,10,75,10);                        //
   kotakTengah(35,0 ,1 ,0 ,10,10,10,10);pilihper();                                                  //
}                                                                                                    //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>PILIHAN PERLENGKAPAN<<<<<<<<<<<<<<<<<<<<<<<<<<<<</////////////////////////////////////////////////////////////////////////////////
void pilihper(){                                                                                                                                             //
   char* per[7]={"Raket (Yonex)","Raket (Victor)","Shuttlecock","Sepatu (Merah/Putih)","sepatu (Hitam/Biru)","Jersey (Hijau/Putih)","jersey (Merah/Hitam)"}; //
   char* harga[7]={"Rp.160.000","Rp.185.000","Rp.100.000","Rp.225.000","Rp.175.000","Rp.150.000","Rp.130.000"};															 //
   int y=20;textcolor(11);                                                                                                                                   //
   gotoxy(8,14);cprintf("NO");gotoxy(20,14);cprintf("PERLENGKAPAN");gotoxy(44,14);cprintf("STOK");gotoxy(61,14);cprintf("HARGA");                            //
   for(int a=1;a<=7;a++){                                                                                                                                    //
   	gotoxy(9 ,y);cprintf("%d",a);                                                    ////////////////////////////////////////////////////////////////////////
      gotoxy(13,y);printf("%s",per[a-1]);                                              //
      gotoxy(45,y);printf("%d",stok[a-1]);                                             //
      gotoxy(59,y);printf("%s",harga[a-1]);                                            //
      y+=4;                                                                            //
   }                                                                                   //
}                                                                                      //
//>>>>>>>>>>>>>>>>>>>>>>>VALIDASI SEBELUM BELI<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////
void validasibeli(){                                                                   //
	gotoxy(79,11);printf("Apakah anda ingin membeli?(y/t):");gotoxy(112,11);gets(beli); //
   if(strcmp(beli,"y")==0||strcmp(beli,"Y")==0){                                       //
      gotoxy(20,49);printf("Tekan 99 untuk kembali ke menu : ");                       //
      kotakTengah(13,11,37,35,78,12,79,13);                                            //
      gotoxy(81,15);printf("Masukan Pilihan   : ");gotoxy(102,15);gets(pilih);         //
  		validasiper();                                                                   //
  	}else if(strcmp(beli,"t")==0||strcmp(beli,"T")==0){                                 //
  		clrscr();menu();validasipilih2();                                                //
   }else if(strcmp(pilih,"99")==0){                                                    //
      	clrscr();menu();						                                             //
   }else{                                                                              //
  		gotoxy(79 ,49);printf("Masukan Tidak Valid(coba lagi)");Sleep(1500);             //
     	gotoxy(79 ,49);printf("                              ");                         //
     	gotoxy(112,11);printf("     ");validasibeli();                                   //
   }                                                                                   //
}                                                                                      //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>VALIDASI BELI<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////
void validasiper(){                                                               //
   while(true){                                                                   //
   	if(strcmp(pilih,"1")==0){                                                   //
   		gotoxy(81,17);printf("Masukan Banyaknya : ");gotoxy(102,17);gets(banyak);//
         banyak2=atoi(banyak);                                                    //
      	if(banyak2>0&&banyak2<=20){                                              //
         	stok[0]-=banyak2;                                                     //
         	gotoxy(45,20);printf("  ");gotoxy(45,20);printf("%d",stok[0]);        //
        		total=160000*banyak2;                                                 //
         	gotoxy(81,19);printf("Total : %d",total);                             //
            total2+=total;belilagi();                                             //
      	}else1();                                                                //
		}else if(strcmp(pilih,"2")==0){                                             //
   		gotoxy(81,17);printf("Masukan Banyaknya : ");gotoxy(102,17);gets(banyak);//
			banyak2=atoi(banyak);                                                    //
         if(banyak2>0&&banyak2<=25){                                              //
        		stok[1]-=banyak2;                                                     //
         	gotoxy(45,24);printf("  ");gotoxy(45,24);printf("%d",stok[1]);        //
         	total=185000*banyak2;                                                 //
         	gotoxy(81,19);printf("Total : %d",total);                             //
            total2+=total;belilagi();                                             //
      	}else1();                                                                //
		}else if(strcmp(pilih,"3")==0){                                             //
   		gotoxy(81,17);printf("Masukan Banyaknya : ");gotoxy(102,17);gets(banyak);//
      	banyak2=atoi(banyak);                                                    //
      	if(banyak2>0&&banyak2<=50){                                              //
        		stok[2]-=banyak2;                                                     //
         	gotoxy(45,28);printf("  ");gotoxy(45,28);printf("%d",stok[2]);        //
         	total=100000*banyak2;                                                 //
         	gotoxy(81,19);printf("Total : %d",total);                             //
         	total2+=total;belilagi();                                             //
      	}else1();                                                                //
   	}else if(strcmp(pilih,"4")==0){                                             //
   		gotoxy(81,17);printf("Masukan Banyaknya : ");gotoxy(102,17);gets(banyak);//
      	banyak2=atoi(banyak);                                                    //
      	if(banyak2>0&&banyak2<=15){                                              //
            stok[3]-=banyak2;                                                     //
         	gotoxy(45,32);printf("  ");gotoxy(45,32);printf("%d",stok[3]);        //
        		total=225000*banyak2;                                                 //
         	gotoxy(81,19);printf("Total : %d",total);                             //
         	total2+=total;belilagi();                                             //
      	}else1();                                                                //
		}else if(strcmp(pilih,"5")==0){                                             //
   		gotoxy(81,17);printf("Masukan Banyaknya : ");gotoxy(102,17);gets(banyak);//
      	banyak2=atoi(banyak);                                                    //
      	if(banyak2>0&&banyak2<=10){                                              //
            stok[4]-=banyak2;                                                     //
         	gotoxy(45,36);printf("  ");gotoxy(45,36);printf("%d",stok[4]);        //
        		total=175000*banyak2;                                                 //
         	gotoxy(81,19);printf("Total : %d",total);                             //
         	total2+=total;belilagi();                                             //
      	}else1();                                                                //
		}else if(strcmp(pilih,"6")==0){                                             //
   		gotoxy(81,17);printf("Masukan Banyaknya : ");gotoxy(102,17);gets(banyak);//
      	banyak2=atoi(banyak);                                                    //
      	if(banyak2>0&&banyak2<=20){                                              //
        		stok[5]-=banyak2;                                                     //
         	gotoxy(45,40);printf("  ");gotoxy(45,40);printf("%d",stok[5]);        //
         	total=150000*banyak2;                                                 //
         	gotoxy(81,19);printf("Total : %d",total);                             //
         	total2+=total;belilagi();                                             //
      	}else1();                                                                //
		}else if(strcmp(pilih,"7")==0){                                             //
   		gotoxy(81,17);printf("Masukan Banyaknya : ");gotoxy(102,17);gets(banyak);//
      	banyak2=atoi(banyak);                                                    //
      	if(banyak2>0&&banyak2<=30){                                              //
        		stok[6]-=banyak2;                                                     //
         	gotoxy(45,44);printf("  ");gotoxy(45,44);printf("%d",stok[6]);        //
         	total=130000*banyak2;                                                 //
         	gotoxy(81,19);printf("Total : %d",total);                             //
            total2+=total;belilagi();                                             //
      	}else1();                                                                //
		}else if(strcmp(pilih,"99")==0){                                            //
      	clrscr();menu();						                                        //
      }else{                                                                      //
   		gotoxy(81 ,27);printf("Masukan Tidak Valid(coba lagi)");Sleep(1500);     //
      	gotoxy(81 ,27);printf("                              ");                 //
      	gotoxy(102,15);printf("            ");                                   //
         gotoxy(81 ,15);printf("Masukan Pilihan   : ");gotoxy(102,15);gets(pilih);//
         validasiper();                                                           //
   	}                                                                           //
   }                                                                              //
}                                                                                 //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>ELSE<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//////
void else1(){                                                                 //
	if(banyak2>20){                                                            //
      	gotoxy(81 ,27);printf("Stok Tidak Tersedia");Sleep(1500);            //
        	gotoxy(81 ,27);printf("                   ");                        //
         gotoxy(102,17);printf("            ");validasiper();                 //
   }else{                                                                     //
   	gotoxy(79 ,27);printf("Masukan Tidak Valid(coba lagi)");Sleep(1500);    //
      gotoxy(79 ,27);printf("                              ");                //
      gotoxy(102,17);printf("            ");validasiper();                    //
   }                                                                          //
}                                                                             //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>BELI LAGI<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////
void belilagi(){                                                                           //
	gotoxy(81,21);printf("Apakah ingin beli lagi?(y/t): ");gotoxy(112,21);gets(beli);       //
   if(strcmp(beli,"y")==0||strcmp(beli,"Y")==0){                                           //
   	kotakTengah(13,11,37,35,78,12,79,13);                                                //
      gotoxy(81,15);printf("Masukan Pilihan   : ");gotoxy(102,15);gets(pilih);             //
      validasiper();                                                                       //
   }else if(strcmp(beli,"t")==0||strcmp(beli,"T")==0){                                     //
   	banyak2=atoi(banyak);                                                                //
      gotoxy(81,23);printf("Total Bayar : %d  ",total2);                                   //
      while(true){                                                                         //
      	gotoxy(79,26);printf("Masukan Jumlah Uang : ");gotoxy(101,26);gets(uang2);        //
   		uang3=atoi(uang2);                                                                //
   		if(total2==uang3){                                                                //
         	kotakTengah(13,11,37,35,78,12,79,13);                                          //
            gotoxy(93,17);printf("TRANSAKSI");gotoxy(94,19);printf("SELESAI");             //
         	gotoxy(79,28);printf("Uang Pas");kotakTengah(13,11,37,35,78,28,79,29);         //
            gotoxy(79,28);printf("        ");gotoxy(79,26);printf("                     ");//
            gotoxy(101,26);printf("          ");gotoxy(90,27);printf("STRUK PEMBELIAN");   //
            gotoxy(81,31);printf("Nama Pembeli: %s",nama2);                                //
            gotoxy(81,33);printf("Alamat      : Jln.%s",almt);                             //
            gotoxy(81,35);printf("Total Bayar : %d",total2);                               //
            gotoxy(81,37);printf("Jumlah Uang : %d",uang3);                                //
            gotoxy(81,39);printf("Kembalian   : %d",uang3-total2);                         //
            gotoxy(79,43);printf("Perlengkapan yang sudah dibeli");                        //
            gotoxy(79,45);printf("akan dikirim ke alamat");                                //
            gotoxy(79,47);printf("yang tertera pada akun anda");                           //
         	gotoxy(54,49);gets(pilih);                                                     //
   			while(true){                                                                   //
   				if(strcmp(pilih,"99")==0){                                                  //
   					clrscr();menu();						                                        //
   				}else{                                                                      //
      				gotoxy(75,49);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);      //
         			gotoxy(75,49);printf("                              ");                  //
      				gotoxy(54,49);printf("                 ");                               //
      				gotoxy(54,49);gets(pilih);                                               //
      			}                                                                           //
   			}                                                                              //
      	}else if(total2<uang3){                                                           //
         	kotakTengah(13,11,37,35,78,12,79,13);                                          //
            gotoxy(93,17);printf("TRANSAKSI");gotoxy(94,19);printf("SELESAI");             //
            kotakTengah(13,11,37,35,78,28,79,29);                                          //
            gotoxy(79,28);printf("        ");gotoxy(79,26);printf("                     ");//
            gotoxy(101,26);printf("          ");gotoxy(90,27);printf("STRUK PEMBELIAN");   //
            gotoxy(81,31);printf("Nama Pembeli: %s",nama2);                                //
            gotoxy(81,33);printf("Alamat      : Jln.%s",almt);                             //
            gotoxy(81,35);printf("Total Bayar : %d",total2);                               //
            gotoxy(81,37);printf("Jumlah Uang : %d",uang3);                                //
            gotoxy(81,39);printf("Kembalian   : %d",uang3-total2);                         //
            gotoxy(79,43);printf("Perlengkapan yang sudah dibeli");                        //
            gotoxy(79,45);printf("akan dikirim ke alamat");                                //
            gotoxy(79,47);printf("yang tertera pada akun anda");                           //
         	gotoxy(54,49);gets(pilih);                                                     //
   			while(true){                                                                   //
   				if(strcmp(pilih,"99")==0){                                                  //
   					clrscr();menu();						                                        //
   				}else{                                                                      //
      				gotoxy(75,49);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);      //
         			gotoxy(75,49);printf("                              ");                  //
      				gotoxy(54,49);printf("                ");                                //
      				gotoxy(54,49);gets(pilih);                                               //
      			}                                                                           //
   			}                                                                              //
      	}else if(total2>uang3&&uang3>0){                                                  //
      		gotoxy(79,28);printf("Uang Anda Kurang");Sleep(1500);                          //
         	gotoxy(79,28);printf("                ");                                      //
         	gotoxy(101,26);printf("               ");                                      //
      	}else{                                                                            //
      		gotoxy(79,28);printf("Masukan Tidak Valid");Sleep(1500);                       //
         	gotoxy(79,28);printf("                   ");                                   //
         	gotoxy(101,26);printf("        ");                                             //
      	}                                                                                 //
      }                                                                                    //
   }else{                                                                                  //
   	gotoxy(79 ,49);printf("Masukan Tidak Valid(coba lagi)");Sleep(1500);                 //
      gotoxy(79 ,49);printf("                              ");                             //
      gotoxy(112,21);printf("   ");belilagi();                                             //
   }                                                                                       //
}                                                                                          //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>PERLENGKAPAN2<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////
void perlengkapan2(){                                                                      //
	perlengkapan1();tambahstok();                                                           //
                                                                                           //                                                                                    //
}                                                                                          //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>TAMBAH STOK<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////////////
void tambahstok(){                                                                                 //
   gotoxy(20,49);printf("Tekan 99 untuk kembali ke menu : ");                                      //
   gotoxy(79,11);printf("TAMBAH STOK : ");kotakTengah(13,11,37,35,78,12,79,13);                    //
   while(true){                                                                                    //
   gotoxy(81,15);printf("Masukan Pilihan     : ");gotoxy(104,15);gets(pilih);                      //
   if(strcmp(pilih,"1")==0){                                                                       //
     	while(true){                                                                                 //
  			gotoxy(81,17);printf("Masukan Jumlah Stok : ");gotoxy(104,17);gets(stok12);               //
     		if(validasiangka(stok12)==0&&strlen(stok12)!=0&&strlen(stok12)<=2&&strlen(stok12)>0){     //
     			c=atoi(stok12);stok[0]+=c;                                                             //
  				gotoxy(45,20);printf("%d",stok[0]);tambahlagi();                                       //
     		}else if(validasiangka(stok12)==0&&strlen(stok12)>=3){                                    //
     			gotoxy(79 ,27);printf("Maksimal Tambah 90 Stok");Sleep(2000);                          //
    			gotoxy(79 ,27);printf("                       ");                                      //
        		gotoxy(104,17);printf("          ");                                                   //
     		}else if(validasiangka(stok12)==0&&strlen(stok12)<0){                                     //
     			gotoxy(79 ,27);printf("Minimal Tambah 1 Stok");Sleep(2000);                            //
     			gotoxy(79 ,27);printf("                     ");                                        //
        		gotoxy(104,17);printf("          ");                                                   //
     		}else{                                                                                    //
     			gotoxy(81 ,27);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);                   //
    			gotoxy(81 ,27);printf("                              ");                               //
        		gotoxy(104,17);printf("          ");                                                   //
      	}                                                                                         //
      }                                                                                            //
   }else if(strcmp(pilih,"2")==0){                                                                 //
     	while(true){                                                                                 //
  			gotoxy(81,17);printf("Masukan Jumlah Stok : ");gotoxy(104,17);gets(stok12);               //
     		if(validasiangka(stok12)==0&&strlen(stok12)!=0&&strlen(stok12)<=2&&strlen(stok12)>0){     //
     			c=atoi(stok12);stok[1]+=c;                                                             //
  				gotoxy(45,24);printf("%d",stok[1]);tambahlagi();                                       //
     		}else if(validasiangka(stok12)==0&&strlen(stok12)>=3){                                    //
     			gotoxy(79 ,27);printf("Maksimal Tambah 90 Stok");Sleep(2000);                          //
    			gotoxy(79 ,27);printf("                       ");                                      //
        		gotoxy(104,17);printf("          ");                                                   //
     		}else if(validasiangka(stok12)==0&&strlen(stok12)<0){                                     //
     			gotoxy(79 ,27);printf("Minimal Tambah 1 Stok");Sleep(2000);                            //
     			gotoxy(79 ,27);printf("                     ");                                        //
        		gotoxy(104,17);printf("          ");                                                   //
     		}else{                                                                                    //
     			gotoxy(79 ,27);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);                   //
    			gotoxy(79 ,27);printf("                              ");                               //
        		gotoxy(104,17);printf("          ");                                                   //
      	}                                                                                         //
      }                                                                                            //
   }else if(strcmp(pilih,"3")==0){                                                                 //
     	while(true){                                                                                 //
  			gotoxy(81,17);printf("Masukan Jumlah Stok : ");gotoxy(104,17);gets(stok12);               //
     		if(validasiangka(stok12)==0&&strlen(stok12)!=0&&strlen(stok12)<=2&&strlen(stok12)>0){     //
     			c=atoi(stok12);stok[2]+=c;                                                             //
  				gotoxy(45,28);printf("%d",stok[2]);tambahlagi();                                       //
     		}else if(validasiangka(stok12)==0&&strlen(stok12)>=3){                                    //
     			gotoxy(79 ,27);printf("Maksimal Tambah 90 Stok");Sleep(2000);                          //
    			gotoxy(79 ,27);printf("                       ");                                      //
        		gotoxy(104,17);printf("          ");                                                   //
     		}else if(validasiangka(stok12)==0&&strlen(stok12)<0){                                     //
     			gotoxy(79 ,27);printf("Minimal Tambah 1 Stok");Sleep(2000);                            //
     			gotoxy(79 ,27);printf("                     ");                                        //
        		gotoxy(104,17);printf("          ");                                                   //
     		}else{                                                                                    //
     			gotoxy(79 ,27);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);                   //
    			gotoxy(79 ,27);printf("                              ");                               //
        		gotoxy(104,17);printf("          ");                                                   //
      	}                                                                                         //
      }                                                                                            //
   }else if(strcmp(pilih,"4")==0){                                                                 //
     	while(true){                                                                                 //
  			gotoxy(81,17);printf("Masukan Jumlah Stok : ");gotoxy(104,17);gets(stok12);               //
     		if(validasiangka(stok12)==0&&strlen(stok12)!=0&&strlen(stok12)<=2&&strlen(stok12)>0){     //
     			c=atoi(stok12);stok[3]+=c;                                                             //
  				gotoxy(45,32);printf("%d",stok[3]);tambahlagi();                                       //
     		}else if(validasiangka(stok12)==0&&strlen(stok12)>=3){                                    //
     			gotoxy(79 ,27);printf("Maksimal Tambah 90 Stok");Sleep(2000);                          //
    			gotoxy(79 ,27);printf("                       ");                                      //
        		gotoxy(104,17);printf("          ");                                                   //
     		}else if(validasiangka(stok12)==0&&strlen(stok12)<0){                                     //
     			gotoxy(79 ,27);printf("Minimal Tambah 1 Stok");Sleep(2000);                            //
     			gotoxy(79 ,27);printf("                     ");                                        //
        		gotoxy(104,17);printf("          ");                                                   //
     		}else{                                                                                    //
     			gotoxy(79 ,27);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);                   //
    			gotoxy(79 ,27);printf("                              ");                               //
        		gotoxy(104,17);printf("          ");                                                   //
      	}                                                                                         //
      }                                                                                            //
   }else if(strcmp(pilih,"5")==0){                                                                 //
     	while(true){                                                                                 //
  			gotoxy(81,17);printf("Masukan Jumlah Stok : ");gotoxy(104,17);gets(stok12);               //
     		if(validasiangka(stok12)==0&&strlen(stok12)!=0&&strlen(stok12)<=2&&strlen(stok12)>0){     //
     			c=atoi(stok12);stok[4]+=c;                                                             //
  				gotoxy(45,36);printf("%d",stok[4]);tambahlagi();                                       //
     		}else if(validasiangka(stok12)==0&&strlen(stok12)>=3){                                    //
     			gotoxy(79 ,27);printf("Maksimal Tambah 90 Stok");Sleep(2000);                          //
    			gotoxy(79 ,27);printf("                       ");                                      //
        		gotoxy(104,17);printf("          ");                                                   //
     		}else if(validasiangka(stok12)==0&&strlen(stok12)<0){                                     //
     			gotoxy(79 ,27);printf("Minimal Tambah 1 Stok");Sleep(2000);                            //
     			gotoxy(79 ,27);printf("                     ");                                        //
        		gotoxy(104,17);printf("          ");                                                   //
     		}else{                                                                                    //
     			gotoxy(79 ,27);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);                   //
    			gotoxy(79 ,27);printf("                              ");                               //
        		gotoxy(104,17);printf("          ");                                                   //
      	}                                                                                         //
      }                                                                                            //
   }else if(strcmp(pilih,"6")==0){                                                                 //
     	while(true){                                                                                 //
  			gotoxy(81,17);printf("Masukan Jumlah Stok : ");gotoxy(104,17);gets(stok12);               //
     		if(validasiangka(stok12)==0&&strlen(stok12)!=0&&strlen(stok12)<=2&&strlen(stok12)>0){     //
     			c=atoi(stok12);stok[5]+=c;                                                             //
  				gotoxy(45,40);printf("%d",stok[5]);tambahlagi();                                       //
     		}else if(validasiangka(stok12)==0&&strlen(stok12)>=3){                                    //
     			gotoxy(79 ,27);printf("Maksimal Tambah 90 Stok");Sleep(2000);                          //
    			gotoxy(79 ,27);printf("                       ");                                      //
        		gotoxy(104,17);printf("          ");                                                   //
     		}else if(validasiangka(stok12)==0&&strlen(stok12)<0){                                     //
     			gotoxy(79 ,27);printf("Minimal Tambah 1 Stok");Sleep(2000);                            //
     			gotoxy(79 ,27);printf("                     ");                                        //
        		gotoxy(104,17);printf("          ");                                                   //
     		}else{                                                                                    //
     			gotoxy(79 ,27);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);                   //
    			gotoxy(79 ,27);printf("                              ");                               //
        		gotoxy(104,17);printf("          ");                                                   //
      	}                                                                                         //
      }                                                                                            //
   }else if(strcmp(pilih,"7")==0){                                                                 //
     	while(true){                                                                                 //
  			gotoxy(81,17);printf("Masukan Jumlah Stok : ");gotoxy(104,17);gets(stok12);               //
     		if(validasiangka(stok12)==0&&strlen(stok12)!=0&&strlen(stok12)<=2&&strlen(stok12)>0){     //
     			c=atoi(stok12);stok[6]+=c;                                                             //
  				gotoxy(45,44);printf("%d",stok[6]);tambahlagi();                                       //
     		}else if(validasiangka(stok12)==0&&strlen(stok12)>=3){                                    //
     			gotoxy(79 ,27);printf("Maksimal Tambah 90 Stok");Sleep(2000);                          //
    			gotoxy(79 ,27);printf("                       ");                                      //
        		gotoxy(104,17);printf("          ");                                                   //
     		}else if(validasiangka(stok12)==0&&strlen(stok12)<0){                                     //
     			gotoxy(79 ,27);printf("Minimal Tambah 1 Stok");Sleep(2000);                            //
     			gotoxy(79 ,27);printf("                     ");                                        //
        		gotoxy(104,17);printf("          ");                                                   //
     		}else{                                                                                    //
     			gotoxy(79 ,27);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);                   //
    			gotoxy(79 ,27);printf("                              ");                               //
        		gotoxy(104,17);printf("          ");                                                   //
      	}                                                                                         //
      }                                                                                            //
   }else if(strcmp(pilih,"99")==0){                                                                //
  		clrscr();menu2();                                                                            //
  	}else{                                                                                          //
    	gotoxy(79,27);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);                          //
      gotoxy(79,27);printf("                              ");                                      //
    	gotoxy(104,15);printf("          ");                                                         //
   }                                                                                               //
   }                                                                                               //
}                                                                                                  //
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>TAMBAH LAGI<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<///////////////////////
void tambahlagi(){                                                                    //
	while(true){                                                                       //
   	gotoxy(81,19);printf("Tambah Stok Lagi? (y/t) : ");gotoxy(108,19);gets(tambah); //
      if(strcmp(tambah,"Y")==0||strcmp(tambah,"y")==0){                               //
         gotoxy(104,15);printf(" ");                                                  //
         gotoxy(104,17);printf(" ");                                                  //
         gotoxy(108,19);printf(" ");                                                  //
      	tambahstok();                                                                //
      }else if(strcmp(tambah,"T")==0||strcmp(tambah,"t")==0){                         //
         kotakTengah(13,11,37,35,78,12,79,13);                                        //
   		gotoxy(90,17);printf("PENAMBAHAN STOK");                                     //
   		gotoxy(94,19);printf("SELESAI");                                             //
         gotoxy(81,28);printf("==================================");                  //
         kotakTengah(13,11,37,35,78,30,79,31);                                        //
         gotoxy(94,35);printf("STOK");                                                //
         gotoxy(90,37);printf("TELAH TERSIMPAN");                                     //
         kotakTengah(5,3,7,5,78,44,79,45);kotakTengah(5,3,7,5,88,44,89,45);           //
         kotakTengah(5,3,7,5,98,44,99,45);kotakTengah(5,3,7,5,108,44,109,45);         //
         for(int a=1;a<=42;a++){                                                      //
				textcolor(a);Sleep(30);                                                   //
         	gotoxy(111,47);cprintf("%c%c%c",1,3,1);                                   //
            gotoxy(101,47);cprintf("%c%c%c",1,3,1);                                   //
         	gotoxy(91 ,47);cprintf("%c%c%c",1,3,1);                                   //
            gotoxy(81 ,47);cprintf("%c%c%c",1,3,1);                                   //
         }                                                                            //
         gotoxy(54,49);gets(pilih);                                                   //
         	while(true){                                                              //
   				if(strcmp(pilih,"99")==0){                                             //
   					clrscr();menu2();                                                   //
   				}else{                                                                 //
      				gotoxy(75,49);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000); //
         			gotoxy(75,49);printf("                              ");             //
      				gotoxy(54,49);printf("                ");gotoxy(54,49);gets(pilih); //
      			}                                                                      //
   			}                                                                         //
      }else if(strcmp(pilih,"99")==0){                                                //
   		clrscr();menu2();                                                            //
   	}else{                                                                          //
      	gotoxy(79 ,27);printf("Masukan Tidak Valid(Coba Lagi)");Sleep(2000);         //
         gotoxy(79 ,27);printf("                              ");                     //
      	gotoxy(108,19);printf("      ");                                             //
      }                                                                               //
   }                                                                                  //
}                                                                                     //                                                                                     //
////////////////////////////////////////////////////////////////////////////////////////
main(){
   system("color 1E");
   tampilanAwal();
getch();
}