//===========================================================================//
//==========                      FIRST PROJECT                    ==========//
//==========            CREATED BY KARTINI ROSADY TANJUNG          ==========//
//==========                     S1 - MANAJEMEN                    ==========//
//==========                    PUB'17 FIREWALL                    ==========//
//==========               UNIVERSITAS NASIONAL PASIM              ==========//
//===========================================================================//
// SCREEN BUFFER SIZE : Weight x Height : 140 x 50                           //
// WINDOW SIZE : Weight x Height : 140 x 50                    				  //
// USERNAME : KARTINITANJUNG                                                 //
// PASSWORD : 280800                                                         //
//===========================================================================//



#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <String.h>



////////////////////////////////////////////////////////////////////////////////
/////                              PROTOTYPE                                ////
////////////////////////////////////////////////////////////////////////////////



void bingkaipinggir();
void karjung();
void cemilan();
void login();
void user();
void hapus();
void hapus2();
void hapus3();
void bingkaidalam();
void awal();
void menu_admin();
void menu_user();
void informasi();
void pembelian();
void transaksi();
long transaksi(long lempar);
void penambahan_stok();
void table();
void kategori();
void kategori_user();
void profil_admin();
void profil_user();
void keluar();
int validasiAngka(char tamp[]);


////////////////////////////////////////////////////////////////////////////////
/////                           VARIABEL GLOBAL                            /////
////////////////////////////////////////////////////////////////////////////////



int cemilan1[3]={40,60,50};
char jumlah[100];
char pilih[100];
int kode[3]={101,102,103};
int harga[3]={30000,35000,50000};
int index=0;
long total=0;
long bayar=0;
char ulang[100];
int income=0;



////////////////////////////////////////////////////////////////////////////////
/////                                LOGIN                                 /////
////////////////////////////////////////////////////////////////////////////////



void login(){
   char username[30];
 	char password[30];
     awal();
     textcolor(23);
      for (int x=60;x<=100;x++){
        gotoxy(x,15);cprintf("%c",219);
        gotoxy(x,25);cprintf("%c",219);
    }
    for (int y=15;y<=25;y++){
        gotoxy(60,y);cprintf("%c",219);
        gotoxy(100,y);cprintf("%c",219);
    }
    y:gotoxy(65,19);cprintf("USERNAME : ");
    gotoxy(65,21);cprintf("PASSWORD : ");
    gotoxy(76,19);gets(username);
    gotoxy(76,21);gets(password);
    if( (strcmp(username,"KARTINITANJUNG")==0 || strcmp(username,"kartinitanjung")==0) && strcmp(password,"280800")==0){
    	for(int a=1,b=1;a<=100;a++){
			gotoxy(74,33);cprintf("Loading %d%",a);Sleep(20);
      	if(a%2==0){
      		textcolor(23);
   			gotoxy(b+54,35);cprintf("%c",219);Sleep(30);b++;
      	}
   	}
      clrscr();
      menu_admin();
    }
    else{
    	textcolor(12);
    	gotoxy(68,30);cprintf(" L O G I N  G A G A L !!!");Sleep(1000);
      gotoxy(68,30);cprintf("                         ");
      gotoxy(76,19);cprintf("                        ");
    	gotoxy(76,21);cprintf("                        ");
     	goto y;
    }
 }



void hak_akses(){

    char pilih [100];
     awal();
     textcolor(27);
     for(int x=15;x<=142;x++){
        gotoxy(x,10);cprintf("%c",206);Sleep(5);
        gotoxy(x,30);cprintf("%c",206);Sleep(5);
    }
    for(int y=7;y<=33;y++){
        gotoxy(15,y);cprintf("%c",206);Sleep(5);
        gotoxy(142,y);cprintf("%c",206);Sleep(5);
   }

   gotoxy(70,7);cprintf("SILAHKAN PILIH HAK AKSES");
   for(int x=40;x<=60;x++){
        gotoxy(x,14);cprintf("%c",219);
        gotoxy(x,19);cprintf("%c",219);
   }
   for(int y=14;y<=19;y++){
        gotoxy(40,y);cprintf("%c",219);
        gotoxy(60,y);cprintf("%c",219);
   }
   for(int x=100;x<=120;x++){
        gotoxy(x,14);cprintf("%c",219);
        gotoxy(x,19);cprintf("%c",219);
   }
   for(int y=14;y<=19;y++){
        gotoxy(100,y);cprintf("%c",219);
        gotoxy(120,y);cprintf("%c",219);
   }

   textcolor(23);
   gotoxy(47,17);cprintf("1.Admin");
   gotoxy(105,17);cprintf("2.Customer");
   gotoxy(77,20);cprintf("3.Keluar");
   x:gotoxy(75,27);cprintf("Pilih : ");gets(pilih);

    if(strcmp(pilih,"1")==0){
   		clrscr();
   		login();
    }else if(strcmp(pilih,"2")==0){
    		clrscr();
         menu_user();
         kategori_user();
    }else if(strcmp(pilih,"3")==0){
    		clrscr();
         keluar();

    }else{
        textcolor(12);
        gotoxy(82,27);cprintf("Invalid Input !!!");Sleep(1000);
        gotoxy(82,27);cprintf("                 ");
        goto x;
    }



}



////////////////////////////////////////////////////////////////////////////////
/////                               BINGKAI                                /////
////////////////////////////////////////////////////////////////////////////////



void bingkaipinggir(){
	textcolor(27);
	for(int a=1;a<=120;a++){
   	gotoxy(a,1);cprintf("%c",219);
      gotoxy(a,2);cprintf("%c",219);
      gotoxy(a,49);cprintf("%c",219);
      gotoxy(a,50);cprintf("%c",219);
   }
   for(int b=1;b<=50;b++){
   	gotoxy(1,b);cprintf("%c",219);
      gotoxy(2,b);cprintf("%c",219);
      gotoxy(119,b);cprintf("%c",219);
      gotoxy(120,b);cprintf("%c",219);
   }
   karjung();
   user();
   login();

}



void awal(){
	 textcolor(27);
    for (int x=3;x<=155;x++){
        gotoxy(x,3);cprintf("%c",219);
        gotoxy(x,40);cprintf("%c",219);
    }
    for(int y=3;y<=40;y++){
        gotoxy(3,y);cprintf("%c",219);
        gotoxy(155,y);cprintf("%c",219);
   }
}



void user(){
	textcolor(27);
	for(int x=40;x<=80;x++){
   	gotoxy(x,13);cprintf("%c",219);
      gotoxy(x,21);cprintf("%c",219);
   }
   for(int x=13;x<=21;x++){
   	gotoxy(40,x);cprintf("%c",219);
      gotoxy(80,x);cprintf("%c",219);
   }
}



////////////////////////////////////////////////////////////////////////////////
/////                                 HAPUS                                /////
////////////////////////////////////////////////////////////////////////////////



void hapus(){
	for(int s=3; s<48; s++){
   	for(int ss=3; ss<200; ss++){
      	gotoxy(ss,s);printf(" ");
      }
   }
}



void hapus2(){
	for(int s=5; s<5; s++){
   	for(int ss=40; ss<118; ss++){
      	gotoxy(ss,s);printf(" ");
      }
   }

}



void hapus3(){
	for(int s=4; s<40; s++){
   	for(int ss=55; ss<147; ss++){
      	gotoxy(ss,s);printf(" ");
      }
   }

}



void hapus4(){
	for(int s=30; s<40; s++){
   	for(int ss=55; ss<147; ss++){
      	gotoxy(ss,s);printf(" ");
      }
   }

}



void hapus5(){
	for(int s=27; s<35; s++){
   	for(int ss=55; ss<147; ss++){
      	gotoxy(ss,s);printf(" ");
      }
   }

}



////////////////////////////////////////////////////////////////////////////////
/////                               MENU UTAMA                             /////
////////////////////////////////////////////////////////////////////////////////



void menu_admin(){
	 awal();
    textcolor(27);
    for(int y=3;y<=40;y++){
        gotoxy(50,y);cprintf("%c",219);
        gotoxy(52,y);cprintf("%c",219);
   }
   for (int x=3;x<=50;x++){
        gotoxy(x,7);cprintf("%c",219);

    }
    for(int x=0 ;x<=9;x++){
    gotoxy(14,4);cprintf("MM MM   EEEE   NN  N   U   U");
    gotoxy(14,5);cprintf("M M M  EEEE    N N N   U   U");
    gotoxy(14,6);cprintf("M   M   EEEE   N  NN    UUU ");
    }

    for(int x=10;x<=42;x++){
        gotoxy(x,11);cprintf("%c",219);
        gotoxy(x,14);cprintf("%c",219);
   }
   for(int y=11;y<=14;y++){
        gotoxy(12,y);cprintf("%c",219);
        gotoxy(40,y);cprintf("%c",219);
   }
    for(int x=10;x<=42;x++){
        gotoxy(x,16);cprintf("%c",219);
        gotoxy(x,19);cprintf("%c",219);
   }
   for(int y=16;y<=19;y++){
        gotoxy(12,y);cprintf("%c",219);
        gotoxy(40,y);cprintf("%c",219);
   }
   for(int x=10;x<=42;x++){
        gotoxy(x,21);cprintf("%c",219);
        gotoxy(x,24);cprintf("%c",219);
   }
   for(int y=21;y<=24;y++){
        gotoxy(12,y);cprintf("%c",219);
        gotoxy(40,y);cprintf("%c",219);
   }
    for(int x=10;x<=42;x++){
        gotoxy(x,26);cprintf("%c",219);
        gotoxy(x,29);cprintf("%c",219);
   }
   for(int y=26;y<=29;y++){
        gotoxy(12,y);cprintf("%c",219);
        gotoxy(40,y);cprintf("%c",219);
   }
   kategori();
   char pilih [100];
	b: gotoxy(20,35);printf("Pilih : ");gets(pilih);

   if(strcmp(pilih,"1")==0){

   	informasi();
   	gotoxy(75,37);cprintf(" Tekan Sembarang Untuk ke Menu Utama ");getch();
      clrscr();
      menu_admin();

    }else if(strcmp(pilih,"2")==0){

         profil_admin();
         gotoxy(60,37);printf(" Tekan Sembarang Untuk ke Menu Utama ");getch();
         clrscr();
      	menu_admin();

    }else if(strcmp(pilih,"3")==0){

         penambahan_stok();getch();
         hapus2();

    }else if(strcmp(pilih,"0")==0){
    		clrscr();
         hak_akses();

    }else{
    	  textcolor(12);
        gotoxy(27,35);cprintf("Invalid Input!!!");Sleep(1000);
        gotoxy(27,35);cprintf("                 ");
        goto b;
    }


}



void kategori(){
 	gotoxy(16,13);cprintf("1.Informasi Cemilan");
   gotoxy(16,18);cprintf("2.Profil Toko");
   gotoxy(16,23);cprintf("3.Penambahan Stok");
   gotoxy(16,28);cprintf("0.Kembali");
}



void kategori_user(){
 	gotoxy(16,13);cprintf("1.Informasi Cemilan");
   gotoxy(16,18);cprintf("2.Pembelian Cemilan");
   gotoxy(16,23);cprintf("3.Profil Toko");
   gotoxy(16,28);cprintf("0.Kembali");
}



void menu_user(){
	awal();
   textcolor(27);
   for(int y=3;y<=40;y++){
        gotoxy(50,y);cprintf("%c",219);
        gotoxy(52,y);cprintf("%c",219);
   }

   for (int x=3;x<=50;x++){
        gotoxy(x,7);cprintf("%c",219);

   }

   for(int x=0 ;x<=9;x++){
    gotoxy(14,4);cprintf("MM MM   EEEE   NN  N   U   U");
    gotoxy(14,5);cprintf("M M M  EEEE    N N N   U   U");
    gotoxy(14,6);cprintf("M   M   EEEE   N  NN    UUU ");
   }

   for(int x=10;x<=42;x++){
        gotoxy(x,11);cprintf("%c",219);
        gotoxy(x,14);cprintf("%c",219);
   }

   for(int y=11;y<=14;y++){
        gotoxy(12,y);cprintf("%c",219);
        gotoxy(40,y);cprintf("%c",219);
   }

   for(int x=10;x<=42;x++){
        gotoxy(x,16);cprintf("%c",219);
        gotoxy(x,19);cprintf("%c",219);
   }

   for(int y=16;y<=19;y++){
        gotoxy(12,y);cprintf("%c",219);
        gotoxy(40,y);cprintf("%c",219);
	}

   for(int x=10;x<=42;x++){
        gotoxy(x,21);cprintf("%c",219);
        gotoxy(x,24);cprintf("%c",219);
   }

   for(int y=21;y<=24;y++){
        gotoxy(12,y);cprintf("%c",219);
        gotoxy(40,y);cprintf("%c",219);
   }

   for(int x=10;x<=42;x++){
        gotoxy(x,26);cprintf("%c",219);
        gotoxy(x,29);cprintf("%c",219);
   }

   for(int y=26;y<=29;y++){
        gotoxy(12,y);cprintf("%c",219);
        gotoxy(40,y);cprintf("%c",219);
   }
   	kategori_user();
   	char pilih [100];
		b: gotoxy(20,35);printf("Pilih : ");gets(pilih);


   if(strcmp(pilih,"1")==0){

   	informasi();
   	gotoxy(75,37);cprintf(" Tekan Sembarang Untuk ke Menu Utama ");getch();
     	clrscr();
      menu_user();

   }else if(strcmp(pilih,"2")==0){

   	pembelian();getch();
      hapus2();
      gotoxy(28,35);printf(" ");//

   }else if(strcmp(pilih,"3")==0){

      profil_user();
      gotoxy(60,37);printf(" Tekan Sembarang Untuk ke Menu Utama ");getch();
      clrscr();
      menu_admin();

   }else if(strcmp(pilih,"0")==0){

   	clrscr();
      hak_akses();

   }else{
   	textcolor(12);
      gotoxy(27,35);cprintf("Invalid Input!!!");Sleep(1000);
      gotoxy(27,35);cprintf("                 ");
      goto b;
   }


}



////////////////////////////////////////////////////////////////////////////////
/////                              PROFIL TOKO                             /////
////////////////////////////////////////////////////////////////////////////////



void profil_admin(){
	textcolor(27);
   gotoxy(95,9);cprintf(" KARJUNG CEMILAN ");
   gotoxy(62,13);cprintf(" Cemilan Atau Makanan Ringan Merupakan Makanan Yang Bermaksud Untuk Menghilangkan");
   gotoxy(55,14);cprintf(" Rasa Lapar Seseorang Sementara Waktu.");
   gotoxy(92,14);cprintf(" Saat Ini Banyak Cemilan Yang Beredar Mempunyai Bentuk,");
   gotoxy(55,15);cprintf(" Rasa, Pengemasan, Dan Tampilan Yang Berbeda.");
   gotoxy(55,16);cprintf(" Hal Ini Banyak Menarik Perhatian Konsumen");
	gotoxy(97,16);cprintf(" Namun, Banyaknya Jenis Cemilan Yang Beredar Tidak");
   gotoxy(55,17);cprintf(" Mementingkan Kandungan Gizi Dan Kesehatannya");
   gotoxy(100,17);cprintf(" Melainkan Mementingkan Harga Yang Murah Dan Enak.");
	gotoxy(62,20);cprintf(" Karjung Cemilan Adalah Toko Yang Menjual Berbagai Cemilan Sehat Dan Bergizi");
   gotoxy(55,21);cprintf(" Bahan Bahan Yang Digunakan Adalah Bahan Bahan Yang Berkualitas Dan Terjamin");
   gotoxy(55,22);cprintf(" Tidak Hanya Sehat Dan Bergizi, Cemilannya Juga Memiliki Rasa Yang Enak Dan Harga Yang Terjangkau");
   gotoxy(55,23);cprintf(" Dihasilkan Oleh Produsen Yang Terpercaya,");
   gotoxy(96,23);cprintf(" Memproduksi Cemilan Yang Sehat Dan Terjamin");
   gotoxy(55,24);cprintf(" Dan Juga Menggugah Kreasi Hidangan");
   gotoxy(58,27);cprintf(" Yuk!! Nikmati Cemilan Sehat Dan Bergizi Dengan Penuh Kegembiraan Hanya Di Karjung Cemilan");
   gotoxy(85,33);cprintf(" Tidak Menerima Pesanan Online !!!");
   gotoxy(75,37);printf("Tekan sembarang tombol untuk kembali kemenu utama!!!");getch();
   clrscr();
   menu_admin();

}



void profil_user(){
	textcolor(27);
   gotoxy(95,9);cprintf(" KARJUNG CEMILAN ");
   gotoxy(62,13);cprintf(" Cemilan Atau Makanan Ringan Merupakan Makanan Yang Bermaksud Untuk Menghilangkan");
   gotoxy(55,14);cprintf(" Rasa Lapar Seseorang Sementara Waktu.");
   gotoxy(92,14);cprintf(" Saat Ini Banyak Cemilan Yang Beredar Mempunyai Bentuk,");
   gotoxy(55,15);cprintf(" Rasa, Pengemasan, Dan Tampilan Yang Berbeda.");
   gotoxy(55,16);cprintf(" Hal Ini Banyak Menarik Perhatian Konsumen");
	gotoxy(97,16);cprintf(" Namun, Banyaknya Jenis Cemilan Yang Beredar Tidak");
   gotoxy(55,17);cprintf(" Mementingkan Kandungan Gizi Dan Kesehatannya");
   gotoxy(100,17);cprintf(" Melainkan Mementingkan Harga Yang Murah Dan Enak.");
	gotoxy(62,20);cprintf(" Karjung Cemilan Adalah Toko Yang Menjual Berbagai Cemilan Sehat Dan Bergizi");
   gotoxy(55,21);cprintf(" Bahan Bahan Yang Digunakan Adalah Bahan Bahan Yang Berkualitas Dan Terjamin");
   gotoxy(55,22);cprintf(" Tidak Hanya Sehat Dan Bergizi, Cemilannya Juga Memiliki Rasa Yang Enak Dan Harga Yang Terjangkau");
   gotoxy(55,23);cprintf(" Dihasilkan Oleh Produsen Yang Terpercaya,");
   gotoxy(96,23);cprintf(" Memproduksi Cemilan Yang Sehat Dan Terjamin");
   gotoxy(55,24);cprintf(" Dan Juga Menggugah Kreasi Hidangan");
   gotoxy(58,27);cprintf(" Yuk!! Nikmati Cemilan Sehat Dan Bergizi Dengan Penuh Kegembiraan Hanya Di Karjung Cemilan");
   gotoxy(85,33);cprintf(" Tidak Menerima Pesanan Online !!!");
   gotoxy(75,37);printf("Tekan sembarang tombol untuk kembali kemenu utama!!!");getch();
   clrscr();
   menu_user();
}



////////////////////////////////////////////////////////////////////////////////
/////                               INFORMASI                              /////
////////////////////////////////////////////////////////////////////////////////



void informasi(){
	textcolor(27);
   gotoxy(65,8);cprintf("     Karjung Cemilan Menjual 3 Macam Cemilan, Yaitu : ");
   gotoxy(70,12);cprintf("1. Frozen Chocolate Banana ");
   gotoxy(70,13);cprintf("   Komposisi : ");
   gotoxy(70,14);cprintf("   - Pisang");
   gotoxy(70,15);cprintf("   - Meses warna warni");
   gotoxy(70,16);cprintf("   - Keju");
   gotoxy(70,17);cprintf("   - Kacang mete (Yang Sudah Di Haluskan)");
	gotoxy(70,18);cprintf("   - Dark cooking chocolate (lelehkan)");
   gotoxy(70,21);cprintf("2. Popsicle Buah Segar ");
   gotoxy(70,22);cprintf("   Komposisi : ");
   gotoxy(70,23);cprintf("   - Kiwi");
   gotoxy(70,24);cprintf("   - Nanas");
   gotoxy(70,25);cprintf("   - semangka");
   gotoxy(70,27);cprintf("3. Alpukat Crispy ");
   gotoxy(70,28);cprintf("   Komposisi : ");
   gotoxy(70,29);cprintf("   - Tepung terigu");
   gotoxy(70,30);cprintf("   - Garam");
   gotoxy(70,31);cprintf("   - Telur");
   gotoxy(70,32);cprintf("   - Tepung roti");
   gotoxy(70,33);cprintf("   - Alpukat Matang");
}



////////////////////////////////////////////////////////////////////////////////
/////                         PEMBELIAN & TRANSAKSI                        /////
////////////////////////////////////////////////////////////////////////////////



void pembelian(){
	awal();
	char kode[100];
   char jml[100];

   textcolor(27);
  	gotoxy(80,8);cprintf(" BERIKUT DAFTAR HARGA CEMILAM YANG TERSEDIA DITOKO ");

	gotoxy(63,10),printf("  _______________________________________________________________________________  ");
   gotoxy(63,11),printf("||                 |                           |               |                 ||");
   gotoxy(63,12),printf("||   Kode Cemilan  |       Nama Cemilan        |  Harga/Porsi  |  Stok Tersedia  ||");
   gotoxy(63,13),printf("||_________________|___________________________|_______________|_________________||");
	gotoxy(63,14),printf("||                 |                           |               |                 ||");
	gotoxy(63,15),printf("||                 |                           |               |                 ||");
	gotoxy(63,16),printf("||       101       |  Frozen Chocolate Banana  |   Rp.30.000   |                 ||");
	gotoxy(63,17),printf("||       102       |  Popsicle Buah Segar      |   Rp.35.000   |                 ||");
	gotoxy(63,18),printf("||       103       |  Alpukat Crispy           |   Rp.50.000   |                 ||");
	gotoxy(63,19),printf("||                 |                           |               |                 ||");
	gotoxy(63,20),printf("||                 |                           |               |                 ||");
	gotoxy(63,21),printf("||                 |                           |               |                 ||");
	gotoxy(63,22),printf("||                 |                           |               |                 ||");
	gotoxy(63,23),printf("||_________________|___________________________|_______________|_________________||");
   gotoxy(135,16);printf("%d",cemilan1[0]);
   gotoxy(135,17);printf("%d",cemilan1[1]);
   gotoxy(135,18);printf("%d",cemilan1[2]);
   gotoxy(90,30);printf("1. BELI");
   gotoxy(90,31);printf("2. KEMBALI KEMENU UTAMA");
   z: gotoxy(90,35);printf(" MASUKKAN PILIHAN : "); gets(pilih);

   int pilih1=atoi(pilih);
   	switch(pilih1){
   	case 1:
      	hapus4();
         go:
       	gotoxy(85,28);printf("Masukan kode barang : ");
       	gets(kode);

   	if (strcmp(kode,"101")==0){
      	ok:
      	gotoxy(85,30);printf("Masukan jumlah yang ingin dibeli : ");

          do{
         	gotoxy(120,30);gets(jml);
            if(validasiAngka(jml)!=0){
            	for(int x=0; x<strlen(jml);x++){
               	gotoxy(120+x,30);printf(" ");
               }
            }
         }while(validasiAngka(jml)!=0);

     		if (cemilan1[0]>0){
      		int jumbrg=atoi(jml);
      		 	if(jumbrg>=1&&jumbrg<=cemilan1[0]){
             		cemilan1[0]-=jumbrg;
             		bayar=harga[0]*jumbrg;
                  gotoxy(135,16); cprintf("%d",cemilan1[0]);
                  total+=bayar;
                  lagi:
						gotoxy(85,33); cprintf("Apakah anda ingin membeli lagi ? (Y/N) : "); gotoxy(126,33); gets(ulang);
						if(strcmp(ulang,"Y")==0 || strcmp(ulang,"y")==0){
  			 				hapus5();
                  	goto go;

     					 }else if(strcmp(ulang,"N")==0 || strcmp(ulang,"n")==0){
                   	clrscr();
        				 	transaksi(total);

     					 }else{
         				for(int x=0; x<strlen(ulang); x++){
                     	gotoxy(126+x,33); printf(" ");
                     }
                  	goto lagi;
     					 }



             	}else	if(jumbrg>=1&&jumbrg>=cemilan1[0]){
               	textcolor(12);
             		gotoxy(88,33); cprintf("Permintaan melebihi stok !!!");Sleep(2000);
                  gotoxy(88,33); cprintf("                            ");
                  gotoxy(119,30);printf("                             ");
                  goto ok;

             	}else{
                 	hapus3();
                  pembelian();
               }

         }else{
            textcolor(12);
      		gotoxy(88,33);cprintf(" Maaf stok habis,silahkan beli yang lain !!!");Sleep(2000);
            hapus5();
         	goto go;
         }
    	}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

		if (strcmp(kode,"102")==0){
      	gotoxy(85,30);printf("Masukan jumlah yang ingin dibeli : ");

         do{
         	gotoxy(120,30);gets(jml);
            if(validasiAngka(jml)!=0){
            	for(int x=0; x<strlen(jml);x++){
               	gotoxy(120+x,30);printf(" ");
               }
            }
         }while(validasiAngka(jml)!=0);

   		if (cemilan1[1]>0){
      		int jumbrg=atoi(jml);
      		 	if(jumbrg>=1&&jumbrg<=cemilan1[1]){
             		cemilan1[1]-=jumbrg;
             		bayar=harga[1]*jumbrg;
                  gotoxy(135,17); cprintf("%d",cemilan1[1]);
                  total+=bayar;
                  lagi2:
						gotoxy(85,33); cprintf("Apakah anda ingin membeli lagi ? (Y/N) : "); gotoxy(126,33); gets(ulang);
						if(strcmp(ulang,"Y")==0 || strcmp(ulang,"y")==0){
  			 				hapus5();
                  	goto go;

     					 }else if(strcmp(ulang,"N")==0 || strcmp(ulang,"n")==0){
                   	clrscr();
        				 	transaksi(total);

     					 }else{
         				for(int x=0; x<strlen(ulang); x++){
                     	gotoxy(126+x,33); printf(" ");
                     }
                  	goto lagi2;
     					 }

            	}else	if(jumbrg>=1&&jumbrg>=cemilan1[1]){
            		textcolor(12);
               	gotoxy(88,33); cprintf("Permintaan melebihi stok !!!");Sleep(2000);
                  gotoxy(88,33); cprintf("                            ");
                  gotoxy(119,30);printf("                              ");
                  goto ok;

             	}

      	}else{
         	textcolor(12);
         	gotoxy(88,33);cprintf(" Maaf stok habis,silahkan beli yang lain !!!"); Sleep(2000);
            hapus5();
            goto go;

         }
   	 }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

		if (strcmp(kode,"103")==0){
    		gotoxy(85,30);printf("Masukan jumlah yang ingin dibeli : ");

         do{
         	gotoxy(120,30);gets(jml);
            if(validasiAngka(jml)!=0){
            	for(int x=0; x<strlen(jml);x++){
               	gotoxy(120+x,30);printf(" ");
               }
            }
         }while(validasiAngka(jml)!=0);

   		if (cemilan1[2]>0){
      		int jumbrg=atoi(jml);
      		 	if(jumbrg>=1&&jumbrg<=cemilan1[2]){
             		cemilan1[2]-=jumbrg;
             		bayar=harga[2]*jumbrg;
                  gotoxy(135,18); cprintf("%d",cemilan1[2]);
                  total+=bayar;
                  lagi3:
						gotoxy(85,33); cprintf("Apakah anda ingin membeli lagi ? (Y/N) : "); gotoxy(126,33); gets(ulang);
						if(strcmp(ulang,"Y")==0 || strcmp(ulang,"y")==0){
  			 				hapus5();
                  	goto go;

     					 }else if(strcmp(ulang,"N")==0 || strcmp(ulang,"n")==0){
                   	clrscr();
        				 	transaksi(total);

     					 }else{
         				for(int x=0; x<strlen(ulang); x++){
                     	gotoxy(126+x,33); printf(" ");
                     }
                  	goto lagi3;
     					 }


             	}else	if(jumbrg>=1&&jumbrg>=cemilan1[2]){
               	textcolor(12);
                  gotoxy(88,33); cprintf("Permintaan melebihi stok !!!");Sleep(2000);
                  gotoxy(88,33); cprintf("                            ");
                  gotoxy(119,30);printf("                              ");
                  goto ok;

             	}

      	}else{
         	textcolor(12);
         	gotoxy(35,35);cprintf(" Maaf stok habis,silahkan beli yang lain !!!");Sleep(1000);
            hapus5();
            goto go;


       }
       }
       else{
       	textcolor(12);
       	gotoxy(106,28);cprintf("Invalid Input !!!");Sleep(1000);
         gotoxy(106,28);cprintf("                 ");
         goto go;

       }
      break;
      case 2:
      clrscr();
      menu_user();
      break;
      default:
       textcolor(12);
     	 gotoxy(109,35);cprintf(" Invalid Input !!!");Sleep(1000);
       gotoxy(109,35);printf("                               ");
       goto z;



   }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////




void transaksi(){

	textcolor(7);gotoxy(22,9);cprintf("   TTTTTTTTTT   RRRRRRRR        AAA      NN    NN   SSSSSSSS      AAA      KK    KKK   SSSSSSSS  IIIIIIIIII");Sleep(5);
   textcolor(7);gotoxy(23,10);cprintf("      TT      RR      RR      AAAAA     NNN   NN  SSS           AAAAA     KK  KK     SSS            II    ");Sleep(5);
   textcolor(5);gotoxy(23,11);cprintf("      TT      RRRRRRRRR      AA   AA    NN N  NN  SSSSSSSSS    AA   AA    KK KK      SSSSSSSSS      II    ");Sleep(5);
   textcolor(5);gotoxy(23,12);cprintf("      TT      RR RRRR       AAAAAAAAA   NN  N NN  SSSSSSSSS   AAAAAAAAA   KK  KK     SSSSSSSSS      II    ");Sleep(5);
   textcolor(9);gotoxy(23,13);cprintf("      TT      RR    RRR    AAAA   AAAA  NN   NNN        SSS  AAAA   AAAA  KK   KK          SSS      II    ");Sleep(5);
   textcolor(9);gotoxy(23,14);cprintf("      TT      RR     RRR   AAAA   AAAA  NN    NN  SSSSSSSS   AAAA   AAAA  KK    KKK  SSSSSSSS   IIIIIIIIII");Sleep(5);

}



long transaksi(long lempar){
awal(); transaksi();
long total=lempar;

char uang[100];
int jumlahs=0;
int kembalian=0;
int kurang=0;
	gotoxy(35,20); cprintf("Total Yang Harus anda bayar     =Rp.%ld",total);

int salah=1,batas=25,jug=10;
	while(salah!=0){
   gotoxy(35,batas); cprintf("Masukan Uang Anda              =Rp."); gets(uang);

   	if(strlen(uang)>10){
      	textcolor(12);
         gotoxy(70,35);cprintf("Inputan maksimal 10 digit !!!");Sleep(1000);
         getch();
         clrscr();
         transaksi(total);

      }else if(strcmp(uang," ")==0){
      	textcolor(12);
         gotoxy(70,35);cprintf("Maaf inputan anda tidak tepat !!!");Sleep(1000);
         getch();
         clrscr();
         transaksi(total);

      }else if(uang[0]=='\0'){
      	textcolor(12);
         gotoxy(75,batas);cprintf("MOHON UNTUK DIISI!!!") ;
         getch();
         clrscr();
         transaksi(total);
		}

		for(int y=0;uang[y]!='\0';y++){
 			if(!(uang[y]>='0'&&uang[y]<='9')||(uang[0]=='0')){
         	textcolor(12);
         	gotoxy(75,35);cprintf("Maaf inputan anda tidak tepat !!!");Sleep(1000);
            getch();
            clrscr();
            transaksi(total);
  			  	jumlahs++;
        	}
		}


	if(jumlahs==0){
		bayar=atoi(uang);
 		if(bayar>=0){
  			if(bayar==total){
         	textcolor(12);
     			gotoxy(60,jug+26); cprintf("UANG ANDA PASS !!!");
     			salah=0;
            income+=(total);
             gotoxy(50,38);cprintf("Tekan sembarang tombol untuk kembali ke menu utama");
				 getch();
				 clrscr();
				 menu_user();

 	 		}else if(bayar>total){
  				kembalian=bayar-total;
  				gotoxy(45,jug+19); cprintf("Kembalian anda Rp.%ld - Rp.%ld = Rp.%ld",bayar,total,kembalian);
      		salah=0;
           	 gotoxy(50,38);printf("Tekan sembarang tombol untuk kembali ke menu utama");
				 getch();
             clrscr();
             menu_user();

    		}else if(bayar<total){
  				kurang=total-bayar;
   			gotoxy(35,batas+2); cprintf("Uang yang dimasukan kurang Rp.%ld",kurang);
            total=kurang;

 		}else if(bayar<0){
 			transaksi(total);
 		}
 			batas=batas+3;
 			jug=jug+3;
	}else{
   	transaksi(total);
 	}
 }
}



}



////////////////////////////////////////////////////////////////////////////////
/////                            PENAMBAHAN STOK                           /////
////////////////////////////////////////////////////////////////////////////////



void penambahan_stok(){

textcolor(27);
  	gotoxy(97,8);cprintf(" PENAMBAHAN STOK ");


   gotoxy(63,10),printf("  _______________________________________________________________________________  ");
   gotoxy(63,11),printf("||                 |                           |               |                 ||");
   gotoxy(63,12),printf("||   Kode Cemilan  |       NAMA CEMILAN        |  HARGA/Porsi  |  Stok Tersedia  ||");
   gotoxy(63,13),printf("||_________________|___________________________|_______________|_________________||");
	gotoxy(63,14),printf("||                 |                           |               |                 ||");
	gotoxy(63,15),printf("||                 |                           |               |                 ||");
	gotoxy(63,16),printf("||       101       |  Frozen Chocolate Banana  |   Rp.30.000   |                 ||");
	gotoxy(63,17),printf("||       102       |  Popsicle Buah Segar      |   Rp.35.000   |                 ||");
	gotoxy(63,18),printf("||       103       |  Alpukat Crispy           |   Rp.50.000   |                 ||");
	gotoxy(63,19),printf("||                 |                           |               |                 ||");
	gotoxy(63,20),printf("||                 |                           |               |                 ||");
	gotoxy(63,21),printf("||                 |                           |               |                 ||");
	gotoxy(63,22),printf("||                 |                           |               |                 ||");
	gotoxy(63,23),printf("||_________________|___________________________|_______________|_________________||");
   gotoxy(135,16);printf("%d",cemilan1[0]);
   gotoxy(135,17);printf("%d",cemilan1[1]);
   gotoxy(135,18);printf("%d",cemilan1[2]);
   char kode[100];
   char barangs[100];
   int barang;
   	r:gotoxy(90,27);printf("Masukan Kode Barang : ");gets(kode);
   	if(strcmp(kode,"101")==0){
      	gotoxy(90,30);printf("Masukan Banyak Stok : ");
         do{
         	gotoxy(112,30);gets(barangs);
            if(validasiAngka(barangs)!=0){
            	for(int x=0; x<strlen(barangs);x++){
               	gotoxy(112+x,30);printf(" ");
               }
            }
         }while(validasiAngka(barangs)!=0);
         barang=atoi(barangs);
         cemilan1[0]=cemilan1[0]+barang;
         gotoxy(90,32);printf("Penambahan Stok Selesai "); getch();
         table(); getch();
         clrscr();
         menu_admin();


      }else if(strcmp(kode,"102")==0){
      	gotoxy(90,30);printf("Masukan Banyak Stok : ");gets(barangs);
      	cemilan1[1]=cemilan1[1]+barang;
         gotoxy(90,32);printf("Penambahan Stok Selesai ");
         table(); getch();
         clrscr();
         menu_admin();

      }else if(strcmp(kode,"103")==0){
      	gotoxy(90,30);printf("Masukan Banyak Stok : ");("%d",&barang);
      	cemilan1[2]=cemilan1[2]+barang;
         gotoxy(90,32);printf("Penambahan Stok Selesai ");
         table(); getch();
         clrscr();
         menu_admin();
      }
      else{
      	textcolor(12);
      	gotoxy(111,27);cprintf("Input Invalid !!!");Sleep(1000);
         gotoxy(111,27);cprintf("                  ");
         goto r;



      }

}



void table(){

   textcolor(27);
   gotoxy(97,8);cprintf(" PENAMBAHAN STOK ");

   gotoxy(63,10),printf("  _______________________________________________________________________________  ");
   gotoxy(63,11),printf("||                 |                           |               |                 ||");
   gotoxy(63,12),printf("||   Kode Cemilan  |       NAMA CEMILAN        |  HARGA/Porsi  |  Stok Tersedia  ||");
   gotoxy(63,13),printf("||_________________|___________________________|_______________|_________________||");
	gotoxy(63,14),printf("||                 |                           |               |                 ||");
	gotoxy(63,15),printf("||                 |                           |               |                 ||");
	gotoxy(63,16),printf("||       101       |  Frozen Chocolate Banana  |   Rp.30.000   |                 ||");
	gotoxy(63,17),printf("||       102       |  Popsicle Buah Segar      |   Rp.35.000   |                 ||");
	gotoxy(63,18),printf("||       103       |  Alpukat Crispy           |   Rp.50.000   |                 ||");
	gotoxy(63,19),printf("||                 |                           |               |                 ||");
	gotoxy(63,20),printf("||                 |                           |               |                 ||");
	gotoxy(63,21),printf("||                 |                           |               |                 ||");
	gotoxy(63,22),printf("||                 |                           |               |                 ||");
	gotoxy(63,23),printf("||_________________|___________________________|_______________|_________________||");
   gotoxy(135,16);printf("%d",cemilan1[0]);
   gotoxy(135,17);printf("%d",cemilan1[1]);
   gotoxy(135,18);printf("%d",cemilan1[2]);
}



////////////////////////////////////////////////////////////////////////////////
/////                                 JUDUL                                /////
////////////////////////////////////////////////////////////////////////////////



void karjung(){
	awal();
	for(int a=1; a<=20; a++){

   textcolor(27+a);gotoxy(22,9);cprintf(" KK     KK      AA      RRRRRRRR     JJJJJJ   UU      UU  NN     NN   GGGGGGG  ");Sleep(5);
   textcolor(27+a);gotoxy(22,10);cprintf(" KK    KK      AAAA     RR     RR         JJ  UU      UU  NN     NN  GG        ");Sleep(5);
   textcolor(27+a);gotoxy(22,11);cprintf(" KK   KK      AA  AA    RR     RR         JJ  UU      UU  NNN    NN  GG        ");Sleep(5);
   textcolor(27+a);gotoxy(22,12);cprintf(" KK  KK      AA    AA   RR     RR         JJ  UU      UU  NN N   NN  GG        ");Sleep(5);
   textcolor(27+a);gotoxy(22,13);cprintf(" KK KK      AA      AA  RRRRRRRR          JJ  UU      UU  NN  N  NN  GG  GGGGG ");Sleep(5);
   textcolor(27+a);gotoxy(22,14);cprintf(" KK  KK     AA AAAA AA  RR  RR            JJ  UU      UU  NN   N NN  GG  GGGGG ");Sleep(5);
   textcolor(27+a);gotoxy(22,15);cprintf(" KK   KK    AA      AA  RR   RR           JJ  UU      UU  NN    NNN  GG     GG ");Sleep(5);
   textcolor(27+a);gotoxy(23,16);cprintf("KK    KK   AA      AA  RR    RR   J      JJ  UU      UU  NN     NN  GG     GG ");Sleep(5);
   textcolor(27+a);gotoxy(23,17);cprintf("KK     KK  AA      AA  RR     RR  JJJJJJJJ    UUUUUUUU   NN     NN   GGGGGGG  ");Sleep(5);
	}
   cemilan();
}



void cemilan(){
	for(int b=1; b<=20; b++){

   textcolor(27+b);gotoxy(50,25);cprintf(" CCCCCCCCC   EEEEEEEEE  MM       MN  IIIIIIIIII  LL              AA      NN      NN");Sleep(5);
   textcolor(27+b);gotoxy(50,26);cprintf("CCCCCCCCCC  EEEEEEEEEE  MMM     MMM     IIII     LL             AAAA     NNN     NN");Sleep(5);
   textcolor(27+b);gotoxy(50,27);cprintf("CC          EE          MM MM MM MM     IIII     LL            AA  AA    NNN     NN");Sleep(5);
   textcolor(27+b);gotoxy(50,28);cprintf("CC          EE          MM  MMM  MM     IIII     LL           AA    AA   NN N    NN");Sleep(5);
   textcolor(27+b);gotoxy(50,29);cprintf("CC          EEEEEEEEEE  MM   M   MM     IIII     LL          AA      AA  NN  N   NN");Sleep(5);
   textcolor(27+b);gotoxy(50,30);cprintf("CC          EE          MM   M   MM     IIII     LL          AA AAAA AA  NN   N  NN");Sleep(5);
   textcolor(27+b);gotoxy(50,31);cprintf("CC          EE          MM       MM     IIII     LL          AA      AA  NN    N NN");Sleep(5);
   textcolor(27+b);gotoxy(50,32);cprintf("CCCCCCCCCC  EEEEEEEEEE  MM       MM     IIII     LL      LL  AA      AA  NN     NNN");Sleep(5);
   textcolor(27+b);gotoxy(50,33);cprintf(" CCCCCCCCC   EEEEEEEEE  MM       MM  IIIIIIIIII  LLLLLLLLLL  AA      AA  NN      NN");Sleep(5);
   }
   hapus();
   awal();
   hak_akses();
}



////////////////////////////////////////////////////////////////////////////////
/////                                 KELUAR                               /////
////////////////////////////////////////////////////////////////////////////////



void keluar() {
awal();
   char pilih[100];

   textcolor(27);
   k :gotoxy(65,16); cprintf("ANDA YAKIN INGIN KELUAR? (Y/N) : "); gets(pilih);

   if ((strcmp(pilih,"y")==0) || (strcmp(pilih,"Y")==0)){
   	gotoxy(75,20);cprintf("TERIMA KASIH");Sleep(3000);
   	for(int s=5;s>=0;s--){
      	textcolor(6);
   		gotoxy(65,30);cprintf("PROGRAM AKAN KELUAR DALAM %d",s);Sleep(1000);
      	if(s==1){
      	exit(0);
      	}
		}
   }
   else if ((strcmp(pilih,"n")==0) || (strcmp(pilih,"N")==0)){
   	hapus2();
      clrscr();
      hak_akses();

	}
   else {
   	textcolor(12);
      gotoxy(97,16);cprintf("INPUTAN SALAH!!");Sleep(500);
      gotoxy(97,16);cprintf("                          ");
      goto k;
   }
}

int validasiAngka(char tamp[]){
	for(int x=0; x<strlen(tamp); x++){
   	if(!(tamp[x]>47 && tamp[x]<58)){
      	return 1;
      }
   }return 0;
}

main(){

   karjung();

getch();
}