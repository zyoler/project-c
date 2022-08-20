////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                            PROJEKAN  PERTAMA                               //
//                             ~ RUANG MELOW ~                                //
//                   GUDANGNYA NOVEL BEST SELLER INDOESIA                     //
//                                                                            //
//                             BY SELY AMALIA                                 //
//                       D3 MANAJEMEN INFORMATIKA                             //
//                           PUB A'19 NEOPYTHE                                //
//                                                                            //
//				   	  TUTOR PELATIH : KAK ELVINA FITRIANI                       //
//						  	TUTOR KHUSUS : TEH MIA S. SYAKILA                        //
//                                                                            //
//                          SCREEN BUFFER SIZE                                //
//                             WIDHT  : 170                                   //
//                             HEIGHT : 60                                    //
//                        AKSES ADMIN : amalia19                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////
#include <stdio>
#include <conio>
#include <windows>
////////////////////////////////////////////////////////////////////////////////
//                              PROTOTYPE                                     //
////////////////////////////////////////////////////////////////////////////////
void background();                       void tere();
void layer();                            void boy();
void welcome();                          void queen();
void admin();                            void asma();
void layeradmin();                       void andrea();
void beranda();                          void radit();
void pinjam();                           void kaka();
void dpenulis();                         void pra();
void ppenulis();                         void arumi();
void bjudul();                           void fiersa();
void djudul();                           bool valnama(char arr[]);
void pjudul();                           bool valangka(char arr[]);
void tangbal();
void btanggal();                         int valuang(char angka[]);
void strukbal();
void invalbal();
void pembayaran();
void pro();
void tentang();
void leave();
void tangpin();
void strukpin();
void invalpin();
void back();
void pronohp();
////////////////////////////////////////////////////////////////////////////////
//                           VARIABEL GLOBAL                                  //
////////////////////////////////////////////////////////////////////////////////
char katsan[10], namapeminjam[50], nohp[20], pilihpenulis[2];
char pilihberanda, pilihkeluar, pj, kembali;
//char ddtamppinjam[2], mmtamppinjam[2], yytamppinjam[2], ddtampbalik[2], mmtampbalik[2], yytampbalik[2];
char tampuang[9];
char penulis[20][40]={"Tere Liye","Boy Chandra","Queen Nakey","Fiersa Besari","Asma Nadia","Andrea Hirata","Pramodyea Ananta Toer","Raditya Dika","Arumi Ekowati","Kakadima"};
char judul[100][1000]={"Hafalan Sholat Delisa","Daun Yang Jatuh Tak Pernah Membenci Angin","Negeri Para Bedebah","Hujan","Negeri Di ujung Tanduk","Rembulan Tenggelam Di Wajahmu","Harga Sebuah Percaya","Dongeng-Dongeng Yang Tak Utuh","Surat Kecil Untuk Ayah","Pada Senja Yang Membawamu Pergi","Setelah Hujan reda","Origami Hati","Catatan Pendek Untuk Cinta Yang Panjang",
							  "Satu Hari Di 2018","Bad Taste","Unforgettable Memories","Friendshit","Princess-Princess","My Devil Butler","Haphephopbhia","SSSST!","Tapak Jejak","Sebelas-Sebelas","Arah Langkah","Catatan Juang","Konspirasi Alam Semesta","Garis Waktu","Hidup","Cinta Di Ujung Sajadah","Dokter Yang Dirindukan","Assalamu'alaikum, Beijing","Rumah Tanpa Jendela",
                       "From Me To You","Catatan Hati Bunda","Emak Ingin Naik Haji","Laskar Pelangi","Ayah","Edensor","Sang Pemimpi","Orang-Orang Biasa","Sirkus Pohon","Sebelas Patriot","Bumi Manusia","Anak Semua Bangsa","Jejak Langkah","Rumah Kaca","Gadis Pantai","Arus Balik","Perburuan","Kambing Jantan","Ubur-Ubur Lembur","Manusia Setengah Salmon","Marmut Merah Jambu","Koala Kumal","Cinta Brontosaurus",
							  "Radikus Makankakus","Teror Diari Tua","Love In Sydney","Sepertiga Malam Di Manhattan","Cinta Valenia","Road To Your Heart","Unforgotten Dream","NeoLiberty","Flash Drive","Bulan, Cinta, Dan Malam","Masa Depan","Untitled","Legion","Misteri Cermin Berhantu","Entangled"};
int selisih=0, telat=0, bayardenda=0, denda=300, tamp=0, uang=0;
int ddpinjam, mmpinjam, yypinjam, dd7, mm7, yy7, ddbalik, mmbalik, yybalik;
int kembalian, bayar;
////////////////////////////////////////////////////////////////////////////////
//                  BACKGROUND - LAYER - WELCOME - BACK                       //
////////////////////////////////////////////////////////////////////////////////
void back(){
		textbackground(7); textcolor(0);
		gotoxy(70,50);cprintf("Tekan '0' Untuk Kembali Ke Beranda");
      gotoxy(103,50);kembali=getch();
      if(kembali=='0'){
      		layer(); beranda();
      }else {
      		gotoxy(73,51);cprintf("Hanya Tekan '0'");Sleep(1000);
            gotoxy(73,51);cprintf("                ");
            back();
      }

}
void background(){
		textcolor(7);       //lightgray
		for (int a=1; a<=170; a++){
   			for (int b=1; b<=60; b++){
      				gotoxy(a,b); cprintf("%c",219);
      		}
  		 }
   	textcolor(0);    //magenta
      for (int a=3; a<=168; a++){
        	 	gotoxy(a,3);  cprintf("%c",219);
        	 	gotoxy(a,4);  cprintf("%c",219);
         	gotoxy(a,57); cprintf("%c",219);
        	 	gotoxy(a,58); cprintf("%c",219);
   	} for (int b=3; b<=58 ;b++){
      		gotoxy(3,b);   cprintf("%c",219);
         	gotoxy(4,b);   cprintf("%c",219);
         	gotoxy(5,b);   cprintf("%c",219);
         	gotoxy(166,b); cprintf("%c",219);
         	gotoxy(167,b); cprintf("%c",219);
            gotoxy(168,b); cprintf("%c",219);
  	 	}
      textcolor(6);    //brown
      for (int a=6; a<=165; a++){
        	 	gotoxy(a,5);  cprintf("%c",219);
         	gotoxy(a,56); cprintf("%c",219);
   	} for (int b=5; b<=56 ;b++){
         	gotoxy(6,b);   cprintf("%c",219);
         	gotoxy(7,b);   cprintf("%c",219);
         	gotoxy(164,b); cprintf("%c",219);
         	gotoxy(165,b); cprintf("%c",219);
  	 	}
}
void layer(){
      textcolor(7); textbackground(7);
		for (int a=9; a<=162; a++){
   			for (int b=7; b<=54; b++){
      				gotoxy(a,b); cprintf(" ");
      		}
      }
}
void welcome(){
	for(int a=1; a<=32; a++){
   		textbackground(7);
   		textcolor(a); Sleep(90);
			gotoxy(30,18); cprintf("##### ##### ##        #     ##     ##     #   ######     #####      #   ######    #     ##   ## #######     #####  ## ");
         gotoxy(30,19); cprintf("##    ##    ##       ###    ###   ###    ###  ######     ##   #    ###  ######   ###    ###  ## ##          ##   # ## ");
         gotoxy(30,20); cprintf("##### ####  ##      ## ##   ## ### ##   ## ##   ##       ##   #   ## ##   ##    ## ##   ## # ## ## ####     ##   # ## ");
         gotoxy(30,21); cprintf("   ## ##    ##     #######  ##  #  ##  #######  ##       ##   #  #######  ##   #######  ##  ### ##   ##     ##   # ## ");
         gotoxy(30,22); cprintf("##### ##### ##### ##     ## ##     ## ##     ## ##       #####  ##     ## ##  ##     ## ##   ## #######     #####  ## ");

         gotoxy(40,28); cprintf(" ############      ");
         gotoxy(40,29); cprintf("###############    ");
         gotoxy(40,30); cprintf("####         ####  ");
         gotoxy(40,31); cprintf("####   ##     #### ");
         gotoxy(40,32); cprintf("####   ###     ####");
         gotoxy(40,33); cprintf("####   ####    ####");
         gotoxy(40,34); cprintf("####   ###     ####");
         gotoxy(40,35); cprintf("####   ##     #### ");
         gotoxy(40,36); cprintf("####         ####  ");
         gotoxy(40,37); cprintf("###############    ");
         gotoxy(40,38); cprintf("#############      ");
         gotoxy(40,39); cprintf("####   ####        ");
         gotoxy(40,40); cprintf("####     ####      ");
         gotoxy(40,41); cprintf("####       ####    ");
         gotoxy(40,42); cprintf("####         ####  ");
         gotoxy(40,43); cprintf("####           ####");

         gotoxy(67,29); cprintf("##----##             #             ##---##         #####  ");
         gotoxy(67,30); cprintf("##----##            ###            ###--##        ##---## ");
         gotoxy(67,31); cprintf("##----##           ##--#           ####-##        ##----  ");
         gotoxy(67,32); cprintf("##----##          #######          ##-####        ##--### ");
         gotoxy(67,33); cprintf("##----##         ##------#         ##--###        ##---## ");
         gotoxy(67,34); cprintf(" ######         ##--------#        ##---##         #####  ");

         gotoxy(60,36); cprintf(" ##---------##   #########  ##--------   ##########    ##---------##     ");
         gotoxy(60,37); cprintf("####-------#### #########_ ###--------  ############  ###----#----###    ");
         gotoxy(60,38); cprintf("#####-----##### ###------- ###-------- ###--------### ###---###---###    ");
         gotoxy(60,39); cprintf("###-##---##-### ######---- ###-------- ###--------### ###--##-##--###    ");
         gotoxy(60,40); cprintf("###--##-##--### ######---- ###-------- ###--------### ###-##---##-###    ");
         gotoxy(60,41); cprintf("###---###---### ###------- ###-------- ###--------### #####-----#####    ");
         gotoxy(60,42); cprintf("###----#----### #########_ ###########  ############  ####-------####    ");
         gotoxy(60,43); cprintf("###---------###  #########  ##########   ##########    ##---------##     ");
   }     textbackground(7); textcolor(0); Sleep(50);
   		gotoxy(40,46); cprintf("G U D A N G N Y A    N O V E L    B E S T     S E L L E R    I N D O N E S I A");
	int y=0;
   for (int x=1; x<=100; x++){
         if(x%5==0){  y++;  }
         gotoxy(77,51); cprintf("Mohon Menunggu ");
         gotoxy(70,53); cprintf("%d%",x);
         gotoxy(75+y,53); cprintf("%c",219);
         Sleep(60);
   }
         layer();
      	admin();
}
////////////////////////////////////////////////////////////////////////////////
//                  AKSES ADMIN - LAYER ADMIN                                 //
////////////////////////////////////////////////////////////////////////////////
void admin(){
      int kesem=0;
		do{   textcolor(0);
      		for (int a=52; a<=100; a++){
        	 			gotoxy(a,28); cprintf("%c",219);
         			gotoxy(a,34); cprintf("%c",219);
   			} for (int b=28; b<=34 ;b++){
         			gotoxy(52,b); cprintf("%c",219);
         			gotoxy(53,b); cprintf("%c",219);
         			gotoxy(99,b); cprintf("%c",219);
         			gotoxy(100,b); cprintf("%c",219);
  	 			}
            textcolor(6);
            for (int a=54; a<=98; a++){
   					for (int b=29; b<=33; b++){
      						gotoxy(a,b); cprintf("%c",219);
      				}
  		 		}

      		textbackground(6); textcolor(0);
         	gotoxy(60,31);cprintf("Masukkan Kode Akses Admin : ");

            int x=0; textbackground(6); textcolor(0);
            gotoxy(88,31); katsan[x]=getch();
            while(katsan[x]!=13){
            		if(katsan[x]==8){
                        x--;
                        if(x<0){
                        	x=0;
                        }  gotoxy(88+x,31); cprintf(" ");
                  } else {
                        cprintf("*"); x++;
                  }

                  if(x>8){
                  	x=8; gotoxy(96,31); cprintf(" ");
                  }  gotoxy(88+x,31); katsan[x]=getch();
				} katsan[x]=NULL;

            textbackground(7);
            if(strlen(katsan)<=8 && strcmp(katsan,"amalia19")==0){
            		gotoxy(47,36);cprintf("Selamat datang di Ruang Mellow ! Gudangnya Novel Best Seller !"); Sleep(2000);
            	  	layeradmin(); beranda();
            } else {
                  gotoxy(62,36);cprintf("Kode Yang Dimasukkan Salah !!"); Sleep(400);
                  gotoxy(62,36);cprintf("                             "); Sleep(250);
                  gotoxy(62,36);cprintf("Kode Yang Dimasukkan Salah !!"); Sleep(600);
                  gotoxy(62,36);cprintf("                             "); Sleep(300);
            		kesem++; layeradmin();
            }
      } while(kesem<3);
      			textcolor(0); textbackground(7);
					gotoxy(60,36);cprintf("Kesempatan Habis ! Akses Diblokir !");Sleep(500);
               gotoxy(60,36);cprintf("                                   ");Sleep(250);
               gotoxy(60,36);cprintf("Kesempatan Habis ! Akses Diblokir !");Sleep(600);
               gotoxy(60,36);cprintf("                                   ");Sleep(250);
         		for (int x=7; x>=1; x--){
							gotoxy(53,38);cprintf("Tunggu Dalam %d Detik Untuk Mengakses Aplikasi",x); Sleep(1100);
               }     layeradmin();  admin();
}

void layeradmin(){textcolor(7);textbackground(7); int a=30;
		gotoxy(a,24); cprintf("                                                                                        ");
      gotoxy(a,25); cprintf("                                                                                        ");
      gotoxy(a,26); cprintf("                                                                                        ");
		gotoxy(a,27); cprintf("                                                                                        ");
      gotoxy(a,28); cprintf("                                                                                        ");
      gotoxy(a,29); cprintf("                                                                                        ");
      gotoxy(a,30); cprintf("                                                                                        ");
      gotoxy(a,31); cprintf("                                                                                        ");
      gotoxy(a,32); cprintf("                                                                                        ");
      gotoxy(a,33); cprintf("                                                                                        ");
      gotoxy(a,34); cprintf("                                                                                        ");
      gotoxy(a,35); cprintf("                                                                                        ");
      gotoxy(a,36); cprintf("                                                                                        ");
      gotoxy(a,37); cprintf("                                                                                        ");
      gotoxy(a,38); cprintf("                                                                                        ");
      gotoxy(a,39); cprintf("                                                                                        ");
      gotoxy(a,40); cprintf("                                                                                        ");
}
////////////////////////////////////////////////////////////////////////////////
//                                BERANDA                                     //
////////////////////////////////////////////////////////////////////////////////
void beranda(){
 		textcolor(6);
      for (int a=69; a<=88; a++){
      		for (int b=14; b<=18; b++){
            		gotoxy(a,b); cprintf("%c",219);
            }
		}
      textbackground(6); textcolor(0);
      gotoxy(71,16); cprintf("1. Meminjam Buku");
      for (int a=67; a<=90; a++){
        	 	gotoxy(a,13); cprintf("%c",219);
         	gotoxy(a,19); cprintf("%c",219);
   	} for (int b=13; b<=19; b++){
         	gotoxy(67,b); cprintf("%c",219);
         	gotoxy(68,b); cprintf("%c",219);
         	gotoxy(89,b); cprintf("%c",219);
         	gotoxy(90,b); cprintf("%c",219);
  	 	}

      textcolor(6);
      for (int a=33; a<=57; a++){
      		for (int b=27; b<=31; b++){
            		gotoxy(a,b); cprintf("%c",219);
            }
		}
      textbackground(6); textcolor(0);
      gotoxy(35,29); cprintf("2. Mengembalikan Buku");
      for (int a=31; a<=59; a++){
        	 	gotoxy(a,26); cprintf("%c",219);
         	gotoxy(a,32); cprintf("%c",219);
   	} for (int b=26; b<=32 ;b++){
         	gotoxy(31,b); cprintf("%c",219);
         	gotoxy(32,b); cprintf("%c",219);
         	gotoxy(58,b); cprintf("%c",219);
         	gotoxy(59,b); cprintf("%c",219);
  	 	}

      textcolor(6);
      for (int a=103; a<=126; a++){
      		for (int b=27; b<=31; b++){
            		gotoxy(a,b); cprintf("%c",219);
            }
		}
      textbackground(6); textcolor(0);
      gotoxy(105,29);cprintf("3. Tentang Aplikasi");
      for (int a=101; a<=128; a++){
        	 	gotoxy(a,26); cprintf("%c",219);
         	gotoxy(a,32); cprintf("%c",219);
   	} for (int b=26; b<=32 ;b++){
         	gotoxy(101,b); cprintf("%c",219);
         	gotoxy(102,b); cprintf("%c",219);
         	gotoxy(127,b); cprintf("%c",219);
         	gotoxy(128,b); cprintf("%c",219);
  	 	}

      textcolor(6);
      for (int a=48; a<=74; a++){
      		for (int b=43; b<=47; b++){
            		gotoxy(a,b); cprintf("%c",219);
            }
		}
      textbackground(6); textcolor(0);
      gotoxy(50,45); cprintf("4. Prosedur Peminjaman ");
      for (int a=46; a<=76; a++){
        	 	gotoxy(a,42); cprintf("%c",219);
         	gotoxy(a,48); cprintf("%c",219);
   	} for (int b=42; b<=48 ;b++){
         	gotoxy(46,b); cprintf("%c",219);
         	gotoxy(47,b); cprintf("%c",219);
         	gotoxy(75,b); cprintf("%c",219);
         	gotoxy(76,b); cprintf("%c",219);
  	 	}

      textcolor(6);
      for (int a=98; a<=110; a++){
      		for (int b=43; b<=47; b++){
            		gotoxy(a,b); cprintf("%c",219);
            }
		}
      textbackground(6); textcolor(0);
      gotoxy(100,45);cprintf("5. Keluar");
      for (int a=96; a<=112; a++){
        	 	gotoxy(a,42); cprintf("%c",219);
         	gotoxy(a,48); cprintf("%c",219);
   	} for (int b=42; b<=48 ;b++){
         	gotoxy(96,b); cprintf("%c",219);
         	gotoxy(97,b); cprintf("%c",219);
         	gotoxy(111,b); cprintf("%c",219);
         	gotoxy(112,b); cprintf("%c",219);
  	 	}

      textbackground(7); textcolor(0);
   	gotoxy(72,33); cprintf("Pilih (nomor) : "); pilihberanda=getch();
   	if (pilihberanda=='1'){
            layer(); pinjam();
   	} else if (pilihberanda=='2'){
            layer(); tangbal();
   	} else if (pilihberanda=='3'){
            layer(); tentang();
   	} else if (pilihberanda=='4'){
            layer(); pro();
   	} else if (pilihberanda=='5'){
      		layer(); leave();
   	} else {
   			gotoxy(65,36);cprintf("Masukkan Angka 1, 2, 3, 4 Atau 5 !"); Sleep(1100);
      		gotoxy(65,36);cprintf("                                  "); Sleep(200);
            beranda();
   	}
}
////////////////////////////////////////////////////////////////////////////////
//          PINJAM - DPENULIS - PPENULIS - BJUDUL - DJUDUL - PJUDUL           //
////////////////////////////////////////////////////////////////////////////////
void pinjam(){
      textcolor(0);
      for (int a=52; a<=112; a++){
      		for (int b=24; b<=36; b++){
            		gotoxy(a,b); cprintf("%c",219);
            }
      }
		textcolor(6);
      for (int a=52; a<=112; a++){
      		gotoxy(a,24); cprintf("%c",219);
            gotoxy(a,30); cprintf("%c",219);
            gotoxy(a,36); cprintf("%c",219);
      } for (int b=24; b<=36 ;b++){
      		gotoxy(52,b); cprintf("%c",219);
            gotoxy(53,b); cprintf("%c",219);
            gotoxy(111,b); cprintf("%c",219);
            gotoxy(112,b); cprintf("%c",219);
      }
      textbackground(7); textcolor(0);
      gotoxy(60,22);cprintf("Masukkan Nama Dan No.Hp Dengan Benar");
      textbackground(0); textcolor(6);
		gotoxy(55,27);cprintf("Nama Peminjam            : ");
   	gotoxy(55,33);cprintf("Nomor Hp.                : ");

   bool cek=true;
   while(cek){
   	 gotoxy(84,27); gets(namapeminjam);
      if(valnama(namapeminjam)==false){
      	textcolor(6); textbackground(0);
         gotoxy(84,27);cprintf("  Masukkan Nama Anda ! ");Sleep(1000);
        	gotoxy(84,27);cprintf("                       ");
      }else{
      	cek=false;
      }
   }
   pronohp();
      layeradmin();  dpenulis();
}


void pronohp(){
	bool cek=true;
   while(cek){
   	 gotoxy(84,33); gets(nohp);
      if(valangka(nohp)==false){
      	textcolor(6); textbackground(0);
         gotoxy(84,33);cprintf("  Masukkan No.Hp Anda ! ");Sleep(1000);
        	gotoxy(84,33);cprintf("                        ");
      }else{
      	cek=false;
      }
   }
}

void dpenulis(){
		textcolor(0);
      for (int a=54; a<=116; a++){
      		for (int b=8; b<=54; b++){
            		gotoxy(a,b); cprintf("%c",219);
            }
      }
      textcolor(6);
      for(int a=54; a<=116; a++){
      		gotoxy(a,8); cprintf("%c",219);
            gotoxy(a,14);cprintf("%c",219);
            gotoxy(a,18);cprintf("%c",219);
            gotoxy(a,22);cprintf("%c",219);
            gotoxy(a,26);cprintf("%c",219);
            gotoxy(a,30);cprintf("%c",219);
            gotoxy(a,34);cprintf("%c",219);
            gotoxy(a,38);cprintf("%c",219);
            gotoxy(a,42);cprintf("%c",219);
            gotoxy(a,46);cprintf("%c",219);
            gotoxy(a,50);cprintf("%c",219);
            gotoxy(a,54);cprintf("%c",219);
      } for (int b=8; b<=54; b++){
      		gotoxy(54,b);cprintf("%c",219);
            gotoxy(55,b);cprintf("%c",219);
            gotoxy(115,b);cprintf("%c",219);
            gotoxy(116,b);cprintf("%c",219);
      }

      textcolor(6);textbackground(0);
      gotoxy(60,10);cprintf("                            ");
      gotoxy(60,11);cprintf("Pilih Nomor Penulis Novel : ");
      gotoxy(60,12);cprintf("                            ");
		gotoxy(60,16);cprintf("      1.  %s",penulis[0]);
   	gotoxy(60,20);cprintf("      2.  %s",penulis[1]);
   	gotoxy(60,24);cprintf("      3.  %s",penulis[2]);
   	gotoxy(60,28);cprintf("      4.  %s",penulis[3]);
   	gotoxy(60,32);cprintf("      5.  %s",penulis[4]);
   	gotoxy(60,36);cprintf("      6.  %s",penulis[5]);
   	gotoxy(60,40);cprintf("      7.  %s",penulis[6]);
   	gotoxy(60,44);cprintf("      8.  %s",penulis[7]);
   	gotoxy(60,48);cprintf("      9.  %s",penulis[8]);
   	gotoxy(60,52);cprintf("     10.  %s",penulis[9]);
   	ppenulis();
}

void ppenulis(){
		textcolor(6);textbackground(0);
   	gotoxy(90,11); gets(pilihpenulis);

      	if        (strcmp(pilihpenulis,"1")==0){  layer();	  tere();
   		} else if (strcmp(pilihpenulis,"2")==0){  layer();   boy();
   		} else if (strcmp(pilihpenulis,"3")==0){  layer();	  queen();
   		} else if (strcmp(pilihpenulis,"4")==0){  layer();	  fiersa();
   		} else if (strcmp(pilihpenulis,"5")==0){  layer();	  asma();
   		} else if (strcmp(pilihpenulis,"6")==0){  layer();   andrea();
   		} else if (strcmp(pilihpenulis,"7")==0){  layer();	  pra();
   		} else if (strcmp(pilihpenulis,"8")==0){  layer();   radit();
   		} else if (strcmp(pilihpenulis,"9")==0){  layer();	  arumi();
   		} else if (strcmp(pilihpenulis,"10")==0){ layer();   kaka();
   		} else {
         		textcolor(6);textbackground(0);
      			gotoxy(90,11);cprintf("Inputan Nomor Salah !");Sleep(1000);
   				gotoxy(90,11);cprintf("                     ");Sleep(100);
      			ppenulis();
   		}
}

void bjudul(){
      textcolor(0);
      for (int a=54; a<=116; a++){
      		for (int b=11; b<=45; b++){
            		gotoxy(a,b); cprintf("%c",219);
            }
      }
      textcolor(6);
      for(int a=54; a<=116; a++){
      		gotoxy(a,11);cprintf("%c",219);
            gotoxy(a,17);cprintf("%c",219);
            gotoxy(a,21);cprintf("%c",219);
            gotoxy(a,25);cprintf("%c",219);
            gotoxy(a,29);cprintf("%c",219);
            gotoxy(a,33);cprintf("%c",219);
            gotoxy(a,37);cprintf("%c",219);
            gotoxy(a,41);cprintf("%c",219);
            gotoxy(a,45);cprintf("%c",219);
      } for (int b=11; b<=45; b++){
      		gotoxy(54,b);cprintf("%c",219);
      		gotoxy(55,b);cprintf("%c",219);
      		gotoxy(115,b);cprintf("%c",219);
      		gotoxy(116,b);cprintf("%c",219);
      }
}

void pjudul(){
		textcolor(6);textbackground(0);
   	gotoxy(90,14); pj=getche();
   		if (pj=='1' || pj=='2' || pj=='3' || pj=='4' || pj=='5' || pj=='6' || pj=='7'){
         		layer(); tangpin();
         } else {
         		textcolor(6);textbackground(0);
      			gotoxy(90,14);cprintf("Inputan Nomor Salah !");Sleep(1000);
   				gotoxy(90,14);cprintf("                     ");Sleep(200);
      			pjudul();
         }
}

void tere(){
		bjudul();        //1
		textcolor(6); textbackground(0);
      gotoxy(60,13);cprintf("                          ");
      gotoxy(60,14);cprintf("Pilih Nomor Judul Novel : ");
      gotoxy(60,15);cprintf("                          ");
		gotoxy(60,19);cprintf("      1.  %s",judul[0]);
   	gotoxy(60,23);cprintf("      2.  %s",judul[1]);
   	gotoxy(60,27);cprintf("      3.  %s",judul[2]);
   	gotoxy(60,31);cprintf("      4.  %s",judul[3]);
   	gotoxy(60,35);cprintf("      5.  %s",judul[4]);
   	gotoxy(60,39);cprintf("      6.  %s",judul[5]);
   	gotoxy(60,43);cprintf("      7.  %s",judul[6]);
   	pjudul();
}
void boy(){           //2
		bjudul();
		textcolor(6);textbackground(0);
      gotoxy(60,13);cprintf("                          ");
      gotoxy(60,14);cprintf("Pilih Nomor Judul Novel : ");
      gotoxy(60,15);cprintf("                          ");
		gotoxy(60,19);cprintf("      1.  %s",judul[7]);
   	gotoxy(60,23);cprintf("      2.  %s",judul[8]);
   	gotoxy(60,27);cprintf("      3.  %s",judul[9]);
   	gotoxy(60,31);cprintf("      4.  %s",judul[10]);
   	gotoxy(60,35);cprintf("      5.  %s",judul[11]);
   	gotoxy(60,39);cprintf("      6.  %s",judul[12]);
   	gotoxy(60,43);cprintf("      7.  %s",judul[13]);
   	pjudul();
}
void queen(){         //3
		bjudul();
		textcolor(6);textbackground(0);
      gotoxy(60,13);cprintf("                          ");
      gotoxy(60,14);cprintf("Pilih Nomor Judul Novel : ");
      gotoxy(60,15);cprintf("                          ");
		gotoxy(60,19);cprintf("      1.  %s",judul[14]);
   	gotoxy(60,23);cprintf("      2.  %s",judul[15]);
   	gotoxy(60,27);cprintf("      3.  %s",judul[16]);
   	gotoxy(60,31);cprintf("      4.  %s",judul[17]);
   	gotoxy(60,35);cprintf("      5.  %s",judul[18]);
   	gotoxy(60,39);cprintf("      6.  %s",judul[19]);
   	gotoxy(60,43);cprintf("      7.  %s",judul[20]);
   	pjudul();
}
void fiersa(){          //4
      bjudul();
		textcolor(6);textbackground(0);
      gotoxy(60,13);cprintf("                          ");
      gotoxy(60,14);cprintf("Pilih Nomor Judul Novel : ");
      gotoxy(60,15);cprintf("                          ");
		gotoxy(60,19);cprintf("      1.  %s",judul[21]);
   	gotoxy(60,23);cprintf("      2.  %s",judul[22]);
   	gotoxy(60,27);cprintf("      3.  %s",judul[23]);
   	gotoxy(60,31);cprintf("      4.  %s",judul[24]);
   	gotoxy(60,35);cprintf("      5.  %s",judul[25]);
   	gotoxy(60,39);cprintf("      6.  %s",judul[26]);
   	gotoxy(60,43);cprintf("      7.  %s",judul[27]);
   	pjudul();
}
void asma(){           //5
      bjudul();
		textcolor(6);textbackground(0);
      gotoxy(60,13);cprintf("                          ");
      gotoxy(60,14);cprintf("Pilih Nomor Judul Novel : ");
      gotoxy(60,15);cprintf("                          ");
		gotoxy(60,19);cprintf("      1.  %s",judul[28]);
   	gotoxy(60,23);cprintf("      2.  %s",judul[29]);
   	gotoxy(60,27);cprintf("      3.  %s",judul[30]);
   	gotoxy(60,31);cprintf("      4.  %s",judul[31]);
   	gotoxy(60,35);cprintf("      5.  %s",judul[32]);
   	gotoxy(60,39);cprintf("      6.  %s",judul[33]);
   	gotoxy(60,43);cprintf("      7.  %s",judul[34]);
   	pjudul();
}
void andrea(){            //6
      bjudul();
		textcolor(6);textbackground(0);
      gotoxy(60,13);cprintf("                          ");
      gotoxy(60,14);cprintf("Pilih Nomor Judul Novel : ");
      gotoxy(60,15);cprintf("                          ");
		gotoxy(60,19);cprintf("      1.  %s",judul[35]);
   	gotoxy(60,23);cprintf("      2.  %s",judul[36]);
   	gotoxy(60,27);cprintf("      3.  %s",judul[37]);
   	gotoxy(60,31);cprintf("      4.  %s",judul[38]);
   	gotoxy(60,35);cprintf("      5.  %s",judul[39]);
   	gotoxy(60,39);cprintf("      6.  %s",judul[40]);
   	gotoxy(60,43);cprintf("      7.  %s",judul[41]);
   	pjudul();
}
void pra(){              //7
      bjudul();
		textcolor(6);textbackground(0);
      gotoxy(60,13);cprintf("                          ");
      gotoxy(60,14);cprintf("Pilih Nomor Judul Novel : ");
      gotoxy(60,15);cprintf("                          ");
		gotoxy(60,19);cprintf("      1.  %s",judul[42]);
   	gotoxy(60,23);cprintf("      2.  %s",judul[43]);
   	gotoxy(60,27);cprintf("      3.  %s",judul[44]);
   	gotoxy(60,31);cprintf("      4.  %s",judul[45]);
   	gotoxy(60,35);cprintf("      5.  %s",judul[46]);
   	gotoxy(60,39);cprintf("      6.  %s",judul[47]);
   	gotoxy(60,43);cprintf("      7.  %s",judul[48]);
   	pjudul();
}
void radit(){           //8
      bjudul();
		textcolor(6);textbackground(0);
      gotoxy(60,13);cprintf("                          ");
      gotoxy(60,14);cprintf("Pilih Nomor Judul Novel : ");
      gotoxy(60,15);cprintf("                          ");
		gotoxy(60,19);cprintf("      1.  %s",judul[49]);
   	gotoxy(60,23);cprintf("      2.  %s",judul[50]);
   	gotoxy(60,27);cprintf("      3.  %s",judul[51]);
   	gotoxy(60,31);cprintf("      4.  %s",judul[52]);
   	gotoxy(60,35);cprintf("      5.  %s",judul[53]);
   	gotoxy(60,39);cprintf("      6.  %s",judul[54]);
   	gotoxy(60,43);cprintf("      7.  %s",judul[55]);
   	pjudul();
}
void arumi(){            //9
      bjudul();
		textcolor(6);textbackground(0);
      gotoxy(60,13);cprintf("                          ");
      gotoxy(60,14);cprintf("Pilih Nomor Judul Novel : ");
      gotoxy(60,15);cprintf("                          ");
		gotoxy(60,19);cprintf("      1.  %s",judul[56]);
   	gotoxy(60,23);cprintf("      2.  %s",judul[57]);
   	gotoxy(60,27);cprintf("      3.  %s",judul[58]);
   	gotoxy(60,31);cprintf("      4.  %s",judul[59]);
   	gotoxy(60,35);cprintf("      5.  %s",judul[60]);
   	gotoxy(60,39);cprintf("      6.  %s",judul[61]);
   	gotoxy(60,43);cprintf("      7.  %s",judul[61]);
   	pjudul();
}
void kaka(){               //10
      bjudul();
		textcolor(6);textbackground(0);
      gotoxy(60,13);cprintf("                          ");
      gotoxy(60,14);cprintf("Pilih Nomor Judul Novel : ");
      gotoxy(60,15);cprintf("                          ");
		gotoxy(60,19);cprintf("      1.  %s",judul[63]);
   	gotoxy(60,23);cprintf("      2.  %s",judul[64]);
   	gotoxy(60,27);cprintf("      3.  %s",judul[64]);
   	gotoxy(60,31);cprintf("      4.  %s",judul[66]);
   	gotoxy(60,35);cprintf("      5.  %s",judul[67]);
   	gotoxy(60,39);cprintf("      6.  %s",judul[68]);
   	gotoxy(60,43);cprintf("      7.  %s",judul[69]);
   	pjudul();

}
////////////////////////////////////////////////////////////////////////////////
//               BTANGGAL - TANGPIN - STRUKPIN - INVALPIN                     //
////////////////////////////////////////////////////////////////////////////////
void btanggal(){
		textcolor(6);
      for (int a=56; a<=115; a++){
      		for (int b=27; b<=31; b++){
            		gotoxy(a,b); cprintf("%c",219);
            }
		}
		textcolor(0);
      for (int a=54; a<=117; a++){
      		gotoxy(a,26); cprintf("%c",219);
            gotoxy(a,32); cprintf("%c",219);
      } for (int b=26; b<=32 ;b++){
      		gotoxy(54,b); cprintf("%c",219);
            gotoxy(55,b); cprintf("%c",219);
            gotoxy(116,b); cprintf("%c",219);
            gotoxy(117,b); cprintf("%c",219);
      }
}

void tangpin(){
	btanggal();
   textcolor(0); textbackground(7);
   gotoxy(54,24);cprintf("Masukkan Waktunya Dengan Benar dan Tekan Enter Untuk Melanjutkan");
	textbackground(6);  textcolor(0);
	gotoxy(59,29); cprintf("Tanggal Peminjaman Buku (dd/mm/yyyy) : _  / _  / ____ ");
	gotoxy(98,29);cscanf("%d",&ddpinjam);
   gotoxy(103,29);cscanf("%d",&mmpinjam);
   gotoxy(108,29);cscanf("%d",&yypinjam);

   dd7=ddpinjam+7;
   mm7=mmpinjam;
   yy7=yypinjam;

   if(mmpinjam==2){
   	if(yypinjam%400==0 || (yypinjam%100!=0 && yypinjam%4==0)){
         if(ddpinjam>29){
         	invalpin();
         } else{
            if (dd7>29){ dd7-=29; mm7++;  }
            strukpin();
         }
   	} else if(yypinjam%400!=0){
         if(ddpinjam>28){
         	invalpin();
         }else{
           	if (dd7>28){ dd7-=28; mm7++;  }
            strukpin();
         }
      }

   } else if(mmpinjam==1 || mmpinjam==3 || mmpinjam==5 || mmpinjam==7 || mmpinjam==8 || mmpinjam==10 || mmpinjam==12){
      	if(ddpinjam>31){
         	invalpin();
         }else{
            if (dd7>31){  dd7-=31; mm7++;
               if (mm7>12){	mm7-=12; yy7++; }
            }
            strukpin();
         }

   }  else if(mmpinjam==4 || mmpinjam==6 || mmpinjam==9 || mmpinjam==11){
      	if(ddpinjam>30){
         	invalpin();
         }else{
            if (dd7>30){  dd7-=30; mm7++;  }
            strukpin();
      	}
   }  else {
   	gotoxy(60,34);cprintf("Waktu Peminjaman Tidak Ada Dalam Kalender ! "); Sleep(1000);
      gotoxy(60,34);cprintf("                                            ");
      layeradmin(); tangpin();
   }
}

void invalpin(){
		textbackground(7); textcolor(0);
		gotoxy(60,34);cprintf("Waktu Peminjaman Tidak Ada Dalam Kalender ! "); Sleep(1000);
      gotoxy(60,34);cprintf("                                            ");
      layer(); tangpin();
}
void strukpin(){
		textcolor(6);
      for (int a=40; a<=130; a++){
      		for (int b=18; b<=42; b++){
            		gotoxy(a,b); cprintf("%c",219);
            }
		}
      textcolor(0);
      for(int a=40; a<=130; a++){
      		gotoxy(a,18); cprintf("%c",219);
         	gotoxy(a,42); cprintf("%c",219);
      } for (int b=18; b<=42; b++){
      		gotoxy(40,b); cprintf("%c",219);
         	gotoxy(41,b); cprintf("%c",219);
         	gotoxy(129,b);cprintf("%c",219);
         	gotoxy(130,b);cprintf("%c",219);
      }
      textbackground(6); int a=50;
		gotoxy(a,23);cprintf("                 Bukti Peminjaman ");
   	gotoxy(a,24);cprintf("                    Ruang Melow    ");
   	gotoxy(a,26);cprintf("Nama                            : %s ",namapeminjam);
   	gotoxy(a,27);cprintf("Nomor Hp.                       : %s ",nohp);

   	gotoxy(a,29);cprintf("Tanggal Peminjaman (dd/mm/yyyy) : %d/%d/%d",ddpinjam,mmpinjam,yypinjam);
   	gotoxy(a,30);cprintf("Masa Peminjaman Sampai Pada     : %d/%d/%d",dd7,mm7,yy7);
   	gotoxy(a,32);cprintf("           Batas Peminjaman Selama 1 Minggu  ");
   	gotoxy(a,33);cprintf(" Melebihi Masa Peminjaman Dikenakan Denda Rp 300,00 /hari");
   	gotoxy(a,34);cprintf("        Terima Kasih Telah Menggunakan Ruang Melow   ");
      back();
}
////////////////////////////////////////////////////////////////////////////////
//               TANGBAL - STRUKBAL - INVALBAL - BAYAR                        //
////////////////////////////////////////////////////////////////////////////////
void tangbal(){
		btanggal();
      textcolor(0); textbackground(7);
      gotoxy(54,24);cprintf("Masukkan Waktunya Dengan Benar dan Tekan Enter Untuk Melanjutkan");
      textbackground(6); textcolor(0);
   	gotoxy(59,29);cprintf("Tanggal Pengembalian Buku (dd/mm/yyyy) :  _  / _  / ____");
      gotoxy(101,29); cscanf("%d",&ddbalik);
      gotoxy(106,29); cscanf("%d",&mmbalik);
      gotoxy(111,29); cscanf("%d",&yybalik);

   	if(yybalik<yypinjam ){
   			invalbal();
   	}else if(yybalik==yypinjam && mmbalik<mmpinjam ){
   			invalbal();
   	}else if(yybalik==yypinjam && mmbalik==mmpinjam && ddbalik<ddpinjam){
   			invalbal();
   	}else if(yybalik==yy7 && mmbalik==mm7 && ddbalik<dd7){
      		denda=0;
      }
   telat=0;
	if(yybalik>yy7){
		if (mmbalik>=mm7){
            bayardenda=150000;
      } else if (mmbalik<mm7){
      	 	if (mm7==2){
            		if(yybalik%400 || (yybalik%100!=0 && yybalik%4==0)){
                  		telat=29-dd7;
                  } else {
                  		telat=28-dd7;
                  }
            } else if(mm7==1 || mm7==3 || mm7==5 || mm7==7 || mm7==8 || mm7==10 || mm7==12){
            		telat=31-dd7;
            } else if(mm7==4 || mm7==6 || mm7==9 || mm7==11){
            		telat=30-dd7;
            } mm7++;
            for (int b=mm7; b<=12; b++){
            		if (b==2){
                  			if(yybalik%400 && yybalik%100!=0 && yybalik%4==0){
                           		telat+=29;
                           } else {
                           		telat+=28;
                           }
                  } else if (b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12){
                  		telat+=31;
                  } else if (b==4 || b==6 || b==9 || b==11){
                  		telat+=30;
                  }
            }                //4
            for (int c=1; c<mmbalik; c++){
            		if (c==2){
                  			if(yybalik%400 && yybalik%100!=0 && yybalik%4==0 ){
                           		telat+=29;
                           } else {
                           		telat+=28;
                           }
                  } else if (c==1 || c==3 || c==5 || c==7 || c==8 || c==10 || c==12){
                  		telat+=31;
                  } else if (c==4 || c==6 || c==9 || c==11){
                  		telat+=30;
                  }
            }
            telat+=ddbalik;
   	}

	}else if(yybalik==yy7){
   	if(mmbalik==mm7 && ddbalik>dd7){
      	if(ddbalik>dd7){
      		telat=ddbalik-dd7;
         }
      }else if (mmbalik>mm7){
      		if (mm7==2){
            		if(yybalik%400 && yybalik%100!=0 && yybalik%4==0){
                  		telat=29-dd7;
                  } else {
                  		telat=28-dd7;
                  }
            } else if(mm7==1 || mm7==3 || mm7==5 || mm7==7 || mm7==8 || mm7==10 || mm7==12){
            		telat=31-dd7;
            } else if(mm7==4 || mm7==6 || mm7==9 || mm7==11){
            		telat=30-dd7;
            } mm7++;
            for (int a=mm7, x=mmbalik; a<x; a++){
            		if (a==2){
                  			if(yybalik%400 && yybalik%100!=0 && yybalik%4==0){
                           	  	telat+=29;
                           } else {
                           	 	telat+=28;
                           }
                  } else if (a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12){
                  		telat+=31;
                  } else if (a==4 || a==6 || a==9 || a==11){
                  		telat+=30;
                  }
            }
      	telat+=ddbalik;
      }
	}
   layer(); strukbal();
}
void invalbal(){
		textbackground(7); textcolor(0);
   	gotoxy(60,34);cprintf("Waktu Pengembalian Tidak Valid !"); Sleep(1100);
      gotoxy(55,22);cprintf("                                "); Sleep(300);
      layer(); tangbal();
}
void strukbal(){
		int denda=400;
   	if (telat>0){
      		if (mmbalik>=mm7 && yybalik>yy7){
      				bayardenda=150000;
      		} else {
            		bayardenda=denda*telat;
      		}
   	}
      textcolor(6);
      for (int a=40; a<=115; a++){
      		for (int b=17; b<=40; b++){
            		gotoxy(a,b); cprintf("%c",219);
            }
		}
      textcolor(0);
      for(int a=40; a<=115; a++){
      	gotoxy(a,17);cprintf("%c",219);
         gotoxy(a,40);cprintf("%c",219);
      } for (int b=17; b<=40; b++){
      	gotoxy(40,b);cprintf("%c",219);
         gotoxy(41,b);cprintf("%c",219);
         gotoxy(114,b);cprintf("%c",219);
         gotoxy(115,b);cprintf("%c",219);
      }
            textbackground(6); textcolor(0); int a=50;
   			gotoxy(a,23);cprintf("                Bukti Pengembalian");
   			gotoxy(a,24);cprintf("       Ruang Melow, Gudangnya Novel Best Seller");
   			gotoxy(a,27);cprintf("Nama                           : %s",namapeminjam);
   			gotoxy(a,28);cprintf("Nomor Hp.                      : %s",nohp);

   			gotoxy(a,30);cprintf("Tanggal Peminjaman             : %d/%d/%d",ddpinjam,mmpinjam,yypinjam);
   			gotoxy(a,31);cprintf("Masa Peminjaman Sampai         : %d/%d/%d",dd7,mm7,yy7);
            gotoxy(a,32);cprintf("Tanggal Pengembalian           : %d/%d/%d",ddbalik,mmbalik,yybalik);
      if (mmbalik>=mm7 && yybalik>yy7){
      		gotoxy(a,33);cprintf("  Anda terlambat mengembalikan lebih dari 1 tahun !");
      		gotoxy(a,34);cprintf("Denda                          : Rp %d",bayardenda);  pembayaran();
      } else if(telat>0){
      		gotoxy(a,33);cprintf("Anda Telat                     : %d hari ",telat);
      		gotoxy(a,34);cprintf("Denda                          : Rp %d,00",bayardenda); pembayaran();
      } else{
      		gotoxy(a,33);cprintf("Mengembalikan Dalam Masa Peminjaman, Anda Bebas Denda ^_^");
      }
            layer(); beranda();
}

void pembayaran(){  int a=50;
		textbackground(6); textcolor(0);
      gotoxy(a,35);cprintf("                                              ");
      gotoxy(a,35);cprintf("Masukkan Uang Anda             : Rp ");
      gotoxy(a+36,35);gets(tampuang);
      if(valuang(tampuang)==0){
      		gotoxy(a,37);cprintf("              Inputan Salah                !!!       "); Sleep(2000);
            gotoxy(a,37);cprintf("                                                      ");
            gotoxy(a+35,35);cprintf("                          ");
            pembayaran();
      }else{
            uang=atoi(tampuang);
      	if (uang>=bayardenda){
      		kembalian=uang-bayardenda;
            gotoxy(a,36);cprintf("Kembalian                      : Rp %d",kembalian);
      	}  else if(uang<bayardenda){
            kembalian=bayardenda-uang;
      		gotoxy(a,37);cprintf("Uang Anda Kurang               : Rp %d",kembalian); Sleep(2000);
            gotoxy(a,37);cprintf("                                                      ");
            gotoxy(a+35,35);cprintf("                          ");
            pembayaran();
      	} else{
            gotoxy(a,37);cprintf("     ");
            //gotoxy(a,37);cprintf("                                                      ");
            //gotoxy(a+35,35);cprintf("                          ");
         }
      }
         gotoxy(a,38);cprintf("    Terima Kasih Telah Menggunakan Aplikasi Ruang Melow");
			back();
}
////////////////////////////////////////////////////////////////////////////////
//                               PROSEDUR                                     //
////////////////////////////////////////////////////////////////////////////////
void pro(){
		textcolor(0);
      for (int a=20; a<=150; a++){
      		for (int b=23; b<=44; b++){
            		gotoxy(a,b); cprintf("%c",219);
            }
		}
      textcolor(6);
      for(int a=20; a<=150; a++){
      	gotoxy(a,23);cprintf("%c",219);
         gotoxy(a,44);cprintf("%c",219);
      } for (int b=23; b<=44; b++){
      	gotoxy(20,b);cprintf("%c",219);
         gotoxy(21,b);cprintf("%c",219);
         gotoxy(149,b);cprintf("%c",219);
         gotoxy(150,b);cprintf("%c",219);
      }
		textbackground(0); textcolor(6); int a=30, b=90;
		gotoxy(55,25); cprintf("PROSEDUR PEMINJAMAN DAN PENGEMBALIAN DI RUANG MELOW");
      gotoxy(a+8,29); cprintf("Peminjaman Buku");
      gotoxy(a,31); cprintf("1. Admin mencatat nama dan NIK dari peminjam;");
      gotoxy(a,32); cprintf("2. Peminjam diberikan struk peminjaman dimana");
      gotoxy(a,33); cprintf("   termuat nama, NIK, tanggal peminjaman serta");
      gotoxy(a,34); cprintf("   masa peminjaman.");
      gotoxy(b+8,29); cprintf("Pengembalian Buku");
      gotoxy(b,31); cprintf("1. Admin mencatat tanggal pengembalian;");
      gotoxy(b,32); cprintf("2. Jika peminjam mengembalikan buku");
      gotoxy(b,33); cprintf("   dalam masa peminjama, maka peminjam");
      gotoxy(b,34); cprintf("   bebas dari denda;");
      gotoxy(b,35); cprintf("3. Jika peminjam mengembalikan buku lebih");
      gotoxy(b,36); cprintf("   dari masa peminjaman, maka peminjam");
      gotoxy(b,37); cprintf("   dikenakan denda sebesar Rp 400,00/hari;");
      gotoxy(b,38); cprintf("4. Jika peminjam mengembalikan buku lebih dari");
      gotoxy(b,39); cprintf("   1 tahun, maka peminjam harus membayar denda");
      gotoxy(b,40); cprintf("   sebesar Rp 150.000,00;");
      gotoxy(b,41); cprintf("5. Peminjam diberikan struk pengembalian.");
      back();
}
////////////////////////////////////////////////////////////////////////////////
//                       TENTANG APLIKASI                                     //
////////////////////////////////////////////////////////////////////////////////
void tentang(){
		textcolor(0);
      for (int a=40; a<=125; a++){
      		for (int b=24; b<=36; b++){
            		gotoxy(a,b); cprintf("%c",219);
            }
		}
      textcolor(6);
      for(int a=40; a<=125; a++){
      	gotoxy(a,24);cprintf("%c",219);
         gotoxy(a,36);cprintf("%c",219);
      } for (int b=24; b<=36; b++){
      	gotoxy(40,b);cprintf("%c",219);
         gotoxy(41,b);cprintf("%c",219);
         gotoxy(124,b);cprintf("%c",219);
         gotoxy(125,b);cprintf("%c",219);
      }  textcolor(6); textbackground(0);int x=45;
		gotoxy(x+5,27);cprintf("  Aplikasi Ruang Melow adalah aplikasi yang khusus dibuat untuk admin");
      gotoxy(x,28);cprintf("sebagai  alat  bantu  pencatatan  buku yang dipinjam maupun dikembalikan.");
   	gotoxy(x,29);cprintf("Aplikasi ini dikembangkan oleh siswi aktif  sebagai Ujian  Akhir Semester");
      gotoxy(x,30);cprintf("walaupun sang developer menyadari banyak keslahan serta  kekurangan dalam");
      gotoxy(x,31);cprintf("penggunaan aplikasi  ini. Semoga sang  developer bisa  mengupdate aplikasi");
      gotoxy(x,32);cprintf("ini sehingga  aplikasi ini  bisa digunakan oleh semua kalangan masyarakat.");
      gotoxy(x,33);cprintf("            Terima ksih telah menggunakan aplikasi ini.                   ");

      back();
}
////////////////////////////////////////////////////////////////////////////////
//                         KELUAR                                             //
////////////////////////////////////////////////////////////////////////////////
void leave(){
		textcolor(0); textbackground(7);
		gotoxy(80,39); cprintf("\nAnda yakin ingin keluar? (y/t): "); pilihkeluar=getch(); Sleep(200);
	if(pilihkeluar=='Y' || pilihkeluar=='y'){
      	for(int a=1; a<=20; a++){
				textcolor(a);Sleep(80);textbackground(7);
            gotoxy(30,27); cprintf(" ######## ###### ####### ########  #       #       #          ##   ##      #      ####### ######## ##    ## ");
      		gotoxy(30,28); cprintf("  ######  ###         ##  ######  ###     ###     ###         ##  ##      ###     ##       ######  ##    ## ");
      		gotoxy(30,29); cprintf("    ##    #####  #######    ##    ## ## ## ##    ## ##        ## ##      ## ##    #######    ##    ######## ");
      		gotoxy(30,30); cprintf("    ##    ####   ###        ##    ##  ###  ##   #######       ####      #######   #######    ##    ######## ");
            textcolor(0);textbackground(7);
      		gotoxy(30,31); cprintf("    ##    ###    ## ##    ######  ##   #   ##  ##     ##      ## ##    ##     ##       ##  ######  ##    ## ");
      		gotoxy(30,32); cprintf("    ##    ###### ##   ## ######## ##       ## ##       ##     ##   ## ##       ## ####### ######## ##    ## ");
      	}
   			gotoxy(50,34); cprintf("Kami Senang");Sleep(1000);
      		gotoxy(50,36); cprintf("       Melayani Anda");  Sleep(1200);
      		exit(0);
   } else if (pilihkeluar=='T' || pilihkeluar=='t'){
      		layer();
      		beranda();
   } else {
   			textbackground(7); textcolor(0);
   			gotoxy(78,41);cprintf ("Hanya pilih ya (y) atau tidak (t) "); Sleep(1200);
      		gotoxy(78,41);cprintf ("                                    ");
            gotoxy(111,39);cprintf("  ");
      		leave();
   }
}
////////////////////////////////////////////////////////////////////////////////
//                               VALIDASI                                     //
////////////////////////////////////////////////////////////////////////////////
bool valnama(char arr[]){
	if(arr[0]==' ' ||arr[strlen(arr)-1]==' '||arr[0]=='-'||arr[strlen(arr)-1]=='-'||arr[0]=='\''||arr[strlen(arr)-1]=='\''){
			return false;
   }if (strlen(arr)<3){
   		return false;
   }
	for(int a=0;arr[a]!=NULL;a++){
   	if(!(arr[a] >='A' && arr[a] <='Z' || arr[a]>='a' &&arr[a] <='z' ||arr[a] ==' '&&arr[a+1]!=' '||arr[a]=='-'&&arr[a+1]!='-'&&arr[a-1]!='-'&&arr[a-1]!=' '&&arr[a+1]!=' '||arr[a]=='\''&&arr[a+1]!='\''&&arr[a-1]!='\''&&arr[a-1]!=' '&&arr[a+1]!=' ')){
        	return false;
      }
	}
   return true;
}

bool valangka(char arr[]){
	if(arr[0]=='0'||arr[0]==' '||arr[strlen(arr)-1]==' '){
   		return false;
	}
	for(int a=0;arr[a]!=NULL;a++){
   	if(!(arr[a] >='0' && arr[a] <='9')){
        return false;
      }
	}
   return true;
}

int valuang(char angka[100]){
	for(int a=0;a<strlen(angka);a++){
   	if(!(angka[a]>='0' && angka[a]<='9')){
      	return 0;
      }
   }return 1;
}
////////////////////////////////////////////////////////////////////////////////
//                                  MAIN                                      //
////////////////////////////////////////////////////////////////////////////////
main(){
	background();
   welcome();
getch();
}
////////////////////////////////////////////////////////////////////////////////
