#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

////////////////////////////////////////////////////////////////////////////////
//////////////////////   MUHAMMAD NURFAADIL  ///////////////////////////////////
//////////////////////         D3-MI         ///////////////////////////////////
//////////////////////    F I R E W A L L    ///////////////////////////////////
//////////////////////         2019          ///////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//Spesifikasi Program
////////////////////////////////////////////////////////////////////////////////
//Windows Size dan Screen Buffer Size
//Width	:	165
//Height	:	55
//Font
//Type : Raster Font
//Size : 8 x 12
//Colors
//Screen Backgrpund, R : 12  G : 12  B : 45
////////////////////////////////////////////////////////////////////////////////
//======================    FIREWOLF APP.  ===================================//
//Program ini merupakan aplikasi admin warnet, dalam program ini terdapat lapor-
//an penghasilan, transaksi rental komputer, pengaturan keadaan warnet (seperti
//jumlah komputer yang tersedia, status billing, admin dan reset penghasilan).
////////////////////////////////////////////////////////////////////////////////

////////////////////////    VARIABEL GLOBAL   //////////////////////////////////
//variabel character atau string
char inUser[300], inPass[300], vrPass[300], pick[2];
char gmUser[300], gmPass[300];
char paketPC[6][30];
char pbulan[12][13]={{"Januari"},{"Pebruari"},{"Maret"},{"April"},{"Mei"},
							{"Juni"},{"Juli"},{"Agustus"},{"September"},{"Oktober"},
                     {"Nopember"},{"Desember"}};
//variabel integer
int durasi[6];
int hargaPaket[6];
int pengunjung=0;
int pendapatan=0;
int inC=0;
int stockPC, indexCari=0;
int cekVal, tamWaktu[7], tnow;
//variabel boolean
bool cekKomputer=false;

//variabel File
FILE *inClient, *inBilling, *inLaporan, *inStock, *inAdmin,*inPaket, *inTamp;

//konstanta
const int maxStock=24;

////////////////////////   VARIABEL STRUKTUR  //////////////////////////////////
struct stat
{
	int  no;
   char user[300];
   char paket[30];
   int  price;
	bool cek;
   int  tanggal;
   int  bulan;
   int  tahun;
   int  jam;
   int  menit;
   int  detik;
   int  durasi;
   int  tdurasi;
   int  jamOut;
};stat kompi[100], client[1000];

struct tm *waktu0;

////////////////////////       PROTOTYPE      //////////////////////////////////
//PROSEDUR
void bismillah();
void mFrame();
void lFrame();
void login();
void billingo2(int x, int y);
void start();
void menuAwal();
void pc(int x, int y, int no);
void big_pc(int x, int y, int no);
void screenpc(int x, int y, bool check);
void big_screenpc(int x, int y, bool check);
void menuBilling();
void menuBillingPilih();
void menuBillingRental();
void menuBillingPindah();
void menuBillingTambah();
void menuBillingLogOut();
void prosesRentalPC(int komp, int pil, char userr[30]);
void prosesTambahRental(int komp, int pil);
void bayarRental(int pil, int komp, int mode);
void simpanDataRental();
void pure(int ixC);
void pure2(int ixC);
void menuBillingStatus();
void menuBillingRefresh();
void menuLaporan();
void menuLaporanDetail();
void frameLaporanDetail();
void hideLaporan();
void printLaporan(int l);
void cetakLaporanPendapatan(int ip);
void menuLaporanGrafik();
void menuSetting();
void isiMenuSetting1();
void isiMenuSetting2();
void isiMenuSetting3();
void isiMenuSetting4();
void isiMenuSetting();
void menuTentang();
void frame6();
void frame5();
void frame4();
void frame3();
void popup();
void big_popup();
void big_popup2();
void mini_popup();
void popupinfo();
void warning();
void warning2();
void nol(int x, int y);
void satu(int x, int y);
void dua(int x, int y);
void tiga(int x, int y);
void empat(int x, int y);
void lima(int x, int y);
void enam(int x, int y);
void tujuh(int x, int y);
void delapan(int x, int y);
void sembilan(int x, int y);
void printAngka(int x, int y, int num, int mod);
void loadData();
void saveData(int x);
void close();

void cekAscii();
void cekData();
void cekWarna();

//FUNGSI
int valPC(int num);
int valcekPC(int num);
int valAngka(char num[300]);
int valClient(char num[300]);
bool valUser(char inPUT[300]);
bool valPass(char inPUT[300]);
bool valPaket(char inps[300]);

//fungsi input berbatas
char* input(int x, int y, int batas, int tipe);

main()
{
//menuAwal();
login();
//menuLaporanDetail();
getch();
}
////////////////////////     FRAME  UTAMA     //////////////////////////////////
void mFrame()
{

   textcolor(15);
	for(int x=1;x<165;x++)
   {
   	gotoxy(x,  1);cprintf("%c",219);
		gotoxy(x, 55);cprintf("%c",219);
   }
   for(int x=2;x<55;x++)
   {
   	gotoxy(1  , x);cprintf("%c",219);
		gotoxy(164, x);cprintf("%c",219);
   }
}
///////////////////////       FRAME LOGIN        ///////////////////////////////
void lFrame()
{
   textcolor(15);
	for(int x=64;x<99;x++)
   {
   	gotoxy(x, 36);cprintf("%c",219);
		gotoxy(x, 45);cprintf("%c",219);
   }
   for(int x=36;x<46;x++)
   {
   	gotoxy(64, x);cprintf("%c",219);
		gotoxy(98, x);cprintf("%c",219);
   }
}
///////////////////////        L O G I N         ///////////////////////////////
void loadData()
{
   int xP=0, t[25], u=0, nkn;
   inClient=fopen("db_nopc.txt","r");
   if(inClient!=NULL)
   {
   	while(!feof(inClient))
   	{
			fscanf(inClient,"%d\n",&t[xP]);
      	xP++;
      }
   }
   fclose(inClient);
   xP--;
   inClient=fopen("db_client.txt","r");
   if(inClient!=NULL)
   {
   	for(int z=0;z<t[xP];z++)
   	{
      	if(z==t[u])
         {
         	fscanf(inClient,"%[^#]#%[^#]#%d#%d#%d#%d#%d#%d#%d\n", kompi[z].user, kompi[z].paket, nkn, kompi[z].jam, kompi[z].menit, kompi[z].detik, kompi[z].durasi, kompi[z].jamOut);
            if(nkn==1)
            {
            	kompi[z].cek=true;
            }
            u++;
      	}
   	}
   }
   fclose(inClient);			 		//variabel untuk kordinat gambar PC
   inPaket=fopen("db_paket.txt","r");
   int bb=0;
   while(!feof(inPaket))
   {
   	fscanf(inPaket,"%[^#]#%d#%d\n", &paketPC[bb],&hargaPaket[bb],&durasi[bb]);
   	bb++;
   }
   fclose(inPaket);
   inStock=fopen("db_stock.txt","r");
   fscanf(inStock,"%d",&stockPC);
   fclose(inStock);
   inLaporan=fopen("db_dlaporan.txt","r");
   int x=0;
   while(!feof(inLaporan))
	{
   	fscanf(inLaporan,"%[^#]#%[^#]#%d#%d#%d\n", &client[x].user, &client[x].paket, &client[x].jam, &client[x].menit, &client[x].price);
		x++;
   }
   fclose(inLaporan);
}

void login()
{
   int xP=0, t[25], nkn;
   loadData();
   start();
   //bismillah();
   inAdmin=fopen("db_admin.txt","r");
   fscanf(inAdmin,"%[^#]#%s",&gmUser,&gmPass);
   fclose(inAdmin);
   /*
   */
   //gotoxy(5,5);printf("%s %s", gmUser, gmPass);
   gotoxy(64,46);printf("0 untuk Keluar Program");
	a:
   gotoxy(68,39);printf("username : ");
   gotoxy(68,42);printf("password : ");
   strcpy(inUser,input(79, 39, 13, 1));
   if(strcmp(inUser,"0")==0)
   {
   	exit(0);
   }
	strcpy(inPass,input(79, 42, 13, 0));
   if(strcmp(inPass,"0")==0)
   {
   	exit(0);
   }
   if(strcmp(inUser,gmUser)==0 && strcmp(inPass,gmPass)==0)
   {
      clrscr();
   	menuAwal();
		getch();
   }
   else if(strcmp(inUser,gmUser)!=0 && strcmp(inPass,gmPass)==0)
   {
       for(int x=0; x<7; x++)
      {
         textcolor(x);
      	gotoxy(76,48);cprintf("Username Salah");Sleep(200);
      }
   }
   else if(strcmp(inUser,gmUser)==0 && strcmp(inPass,gmPass)!=0)
   {
      for(int x=0; x<7; x++)
      {
         textcolor(x);
      	gotoxy(76,48);cprintf("Password Salah");Sleep(200);
      }
   }
   else
   {
      for(int x=0; x<7; x++)
      {
         textcolor(x);
      	gotoxy(72,48);cprintf("Username dan Password Salah");Sleep(200);
      }
   }
   	clrscr();
      start();
   	goto a;
}
/////////////////////      UNTUK START LOGIN      ///////////////////////////////
void start()
{
	mFrame();
	billingo2(67, 4);
   lFrame();
}
///////////////////////     M E N U  -  M E N U    /////////////////////////////
//MENU AWAL
void menuAwal()
{
   char cl[50]={"  T  E  R  I  M  A    K  A  S  I  H  "};
	mFrame();
   billingo2(67,13);
	frame6();
   gotoxy( 8 ,52);printf("1. Billing");
	gotoxy(36 ,52);printf("2. Laporan");
   gotoxy(62 ,52);printf("3. Setting");
   gotoxy(90 ,52);printf("4. Info");
   gotoxy(117,52);printf("5. Exit");
   a:
	gotoxy(143,52);printf("Pilih : ");
	strcpy(pick,input(151, 52, 1, 1));
   if(strcmp(pick,"1")==0)
   {
   	menuBilling();
   }
   else if(strcmp(pick,"2")==0)
   {
   	menuLaporan();
   }
   else if(strcmp(pick,"3")==0)
   {
   	menuSetting();
   }
   else if(strcmp(pick,"4")==0)
   {
		menuTentang();
   }
   else if(strcmp(pick,"5")==0)
	{
      clrscr();
      textcolor(11);
      for(int x=0; cl[x]!=NULL; x++)
      {
      	gotoxy(65+x,25); cprintf("%c", cl[x]);Sleep(100);
      }
      Sleep(1200);
      //kclose();
   	exit(0);
   }
   else
	{
   	gotoxy(146,52);printf(" ");
 		goto a;
   }
}
//Menu Billing
void menuBilling()
{
   menuBillingRefresh();
   int xP=0, yP=0;
	clrscr();
   if(stockPC==0)
   {
      billingo2(67, 13);
   }
   else
   {
   	for(int x=0; x<stockPC; x++, xP+=20)
   	{
      	if(x%8==0 && x!=0)
      	{
      		xP=0;
         	yP+=14;
  	   	}
      	pc(xP,yP,x+1);
      	screenpc(xP,yP,kompi[x].cek);
   	}
   }
   textbackground(0);
   mFrame();
	frame4();
   gotoxy( 20, 52);printf("1. Rental");
	gotoxy( 54, 52);printf("2. Status");
	gotoxy( 94, 52);printf("0. Kembali");
   gotoxy(128, 52);printf("Pilih : ");strcpy(pick,input(136, 52, 1, 1));
   if(strcmp(pick,"1")==0)
   {
      menuBillingPilih();
   }
   else if(strcmp(pick,"2")==0)
   {
      menuBillingStatus();
   }
   else if(strcmp(pick,"0")==0)
   {

      clrscr();
		menuAwal();
   }
   else
   {
      //ditambah kodingan warning input
      //warning();
   	menuBilling();
   }
}
void menuBillingPilih()
{
	popup();
   gotoxy(72, 20);printf("1. Rental      "); gotoxy(90, 20);printf("3. Tambah");
   gotoxy(72, 22);printf("2. Pindah PC");    gotoxy(90, 22);printf("4. Logoff");
   gotoxy(78, 24);printf("0. Kembali  ");
   gotoxy(78, 26);printf("   Pilih : ");
   while(true)
   {
   	strcpy(pick,input(89,26,1,1));
      if(strcmp(pick,"1")==0)
      {
      	menuBillingRental();
      }
      else if(strcmp(pick,"2")==0)
      {
      	menuBillingPindah();
      }
      else if(strcmp(pick,"3")==0)
      {
      	menuBillingTambah();
      }
      else if(strcmp(pick,"4")==0)
      {
      	menuBillingLogOut();
      }
      else if(strcmp(pick,"0")==0)
      {
      	menuBilling();
      }
      gotoxy(89,26);printf(" ");
   }
}
void menuBillingRental()
{
      char inius[30];
      int indexTimpa, timpa=0;
		popup();
      gotoxy(76, 22);printf("Masukan No PC : ");
		strcpy(pick,input(92,22,2,1));
      if(valcekPC(atoi(pick))==-1)
      {
         gotoxy(76, 24);printf("PC yang anda cari tidak ada");Sleep(1000);
      	menuBilling();
      }
      else if(kompi[atoi(pick)-1].cek==true)
   	{
         indexTimpa=atoi(pick)-1;
         gotoxy(76, 22);printf("                           ");
   		gotoxy(73, 20);printf("  PC yang anda pilih sedang");
         gotoxy(73, 22);printf("digunakan, teruskan (y/n) ?");
         strcpy(pick,input(101,22,1,1));
         if(strcmp(pick,"y")==0 || strcmp(pick,"Y")==0)
         {
            timpa=1;
				goto nextRental;
         }
         else
         {
         	menuBilling();
         }
	   }
      else
      {
         nextRental:
         indexCari=atoi(pick)-1;
         if(timpa==1)
         {
         	indexCari=indexTimpa;
         }
         popup();
	      do
         {
         	gotoxy(73, 22);printf("Masukan Nama  : ");
         	strcpy(inius,input(89,22,15,1));
            if(valClient(inius)==2)
            {
               gotoxy(73, 22);printf("                              ");
					gotoxy(73, 22);printf(" M i n .  4  K a r a k t e r  ");Sleep(1000);
               gotoxy(73, 22);printf("                              ");
            }
            else if(valClient(inius)==1)
            {
               gotoxy(73, 22);printf("                               ");
					gotoxy(73, 22);printf(" Harap Input Nama dengan Benar ");Sleep(1000);
               gotoxy(73, 22);printf("                               ");
               gotoxy(73, 22);printf("                               ");
					gotoxy(73, 22);printf(" Boleh  menggunakan  @,  _,  ' ");Sleep(1000);
               gotoxy(73, 22);printf("                               ");
            }
         }while(valClient(inius)!=0);
         popupinfo();
			gotoxy(72, 16);printf("P I L I H  P A K E T");
         //dil, jadiin dinamis
         /*
         inPaket=fopen("db_paket.txt","r");
         int bb=0;
         while(!feof(inPaket))
         {
         	fscanf(inPaket,"%[^#]#%d#%d\n", &paketPC[bb],&hargaPaket[bb],&durasi[bb]);
            bb++;
         }
         fclose(inPaket);
			*/
         gotoxy(64, 22);printf("1. %s", paketPC[0]);
         gotoxy(64, 25);printf("2. %s", paketPC[1]);
         gotoxy(64, 28);printf("3. %s", paketPC[2]);
         gotoxy(64, 31);printf("4. %s", paketPC[3]);
         gotoxy(64, 34);printf("5. %s", paketPC[4]);
         gotoxy(88, 36);printf("0. untuk kembali");
         a:
         textcolor(15);
         gotoxy(74, 40);printf("P I L I H  : ");strcpy(pick,input(87, 40, 1, 1));
         if(atoi(pick)>0 && atoi(pick)<6)
         {
            int ppaket=atoi(pick)-1;
         	popup();
            textcolor(15);
         	gotoxy(70, 22);printf("Anda yakin memilih %s ?",paketPC[ppaket]);
            l:
				gotoxy(76, 23);printf("   ( Y / N ) ? : ");
            strcpy(pick,input(92, 23, 1, 1));
            if(strcmp(pick,"Y")==0 || strcmp(pick,"y")==0)
            {
               gotoxy(5,5);printf("%d %d %s",indexCari,ppaket,inius);getch();
               prosesRentalPC(indexCari,ppaket,inius);
               menuBilling();
            }
            else if(strcmp(pick,"N")==0 || strcmp(pick,"n")==0)
            {
            	menuBilling();
            }
            else
            {
               //diisi pake kodingan warning input
               //warning();
               gotoxy(92, 23);printf(" ");
         		goto l;
            }
            }
         else if(strcmp(pick,"0")==0)
         {
         	menuBilling();
         }
         else
         {
            gotoxy(87, 40);printf(" ");
         	goto a;
         }
      }
}
void menuBillingPindah()
{
	popup();
   gotoxy(73, 20);printf("Masukan No PC Awal   : ");
   strcpy(pick,input(96,20,2,1));
   if(valcekPC(atoi(pick))==-1)
   {
   	gotoxy(76, 24);printf("PC yang anda cari tidak ada");Sleep(1000);
      menuBilling();
   }
   else if(kompi[atoi(pick)-1].cek==false)
   {
   	gotoxy(76, 24);printf("PC yang anda pilih kosong.");Sleep(1000);
      menuBilling();
   }
   indexCari=atoi(pick)-1;
   gotoxy(73, 22);printf("Masukan No PC Tujuan : ");
   strcpy(pick,input(96,22,2,1));
   if(valcekPC(atoi(pick))==-1)
   {
   	gotoxy(76, 24);printf("PC yang anda cari tidak ada");Sleep(1000);
      menuBilling();
   }
   else
   {
		kompi[atoi(pick)-1].no=kompi[indexCari].no;
      strcpy(kompi[atoi(pick)-1].user,kompi[indexCari].user);
      strcpy(kompi[atoi(pick)-1].paket,kompi[indexCari].paket);
      kompi[atoi(pick)-1].jam=kompi[indexCari].jam;
      kompi[atoi(pick)-1].menit=kompi[indexCari].menit;
      kompi[atoi(pick)-1].cek=true;
      kompi[indexCari].cek=false;
		kompi[atoi(pick)-1].durasi=kompi[indexCari].durasi;
		kompi[atoi(pick)-1].jamOut=kompi[indexCari].jamOut;
      pure(indexCari);
      gotoxy(5,5);printf(" %d  %s", atoi(pick),kompi[atoi(pick)-1].user);getch();
   }
   menuBilling();
}
void menuBillingTambah()
{
	char inius[30];
   popup();
   gotoxy(76, 22);printf("Masukan No PC : ");
   strcpy(pick,input(92,22,2,1));
   if(valcekPC(atoi(pick))==-1)
   {
   	gotoxy(71, 24);printf("PC yang anda cari tidak ada");Sleep(1000);
      menuBilling();
   }
   else if(kompi[atoi(pick)-1].cek==false)
   {
   	gotoxy(71, 24);printf("PC yang anda pilih kosong. ");Sleep(1000);
      menuBilling();
   }
   else
   {
   	indexCari=atoi(pick)-1;
      popupinfo();
      gotoxy(72, 16);printf("P I L I H  P A K E T");
      gotoxy(64, 22);printf("1. %s", paketPC[0]);
      gotoxy(64, 25);printf("2. %s", paketPC[1]);
      gotoxy(64, 28);printf("3. %s", paketPC[2]);
      gotoxy(64, 31);printf("4. %s", paketPC[3]);
      gotoxy(64, 34);printf("5. %s", paketPC[4]);
      gotoxy(88, 36);printf("0. untuk kembali");
      a:
      textcolor(15);
      gotoxy(74, 40);printf("P I L I H  : ");strcpy(pick,input(87, 40, 1, 1));
      if(atoi(pick)>0 && atoi(pick)<6)
      {
      	int ppaket=atoi(pick);
         popup();
         textcolor(15);
         gotoxy(70, 22);printf("Anda yakin memilih %s ?",paketPC[atoi(pick)-1]);
         l:
         gotoxy(76, 23);printf("   ( Y / N ) ? : ");strcpy(pick,input(92, 23, 1, 1));
         if(strcmp(pick,"Y")==0 || strcmp(pick,"y")==0)
         {
            bayarRental(ppaket-1, indexCari, 0);
         	//prosesTambahRental(indexCari,ppaket-1);
            menuBilling();
         }
         else if(strcmp(pick,"N")==0 || strcmp(pick,"n")==0)
         {
         	menuBilling();
         }
         else
         {
         	//diisi pake kodingan warning input
            //warning();
            gotoxy(92, 23);printf(" ");
            goto l;
         }
      }
      else if(strcmp(pick,"0")==0)
      {
      menuBilling();
      }
      else
      {
      	gotoxy(87, 40);printf(" ");
         goto a;
      }
   }
}
void menuBillingLogOut()
{
      char inius[30];
      int icx;
		popup();
      gotoxy(76, 22);printf("Masukan No PC : ");
		strcpy(pick,input(92,22,2,1));
      icx=atoi(pick)-1;
      if(valcekPC(atoi(pick))==-1)
      {
         gotoxy(76, 24);printf("PC yang anda cari tidak ada");Sleep(1000);
      	menuBilling();
      }
      else if(kompi[atoi(pick)-1].cek==false)
   	{
   		gotoxy(73, 24);printf("PC yang anda pilih kosong. ");Sleep(1000);
      	menuBilling();
	   }
      else
      {
         	popup();
            textcolor(15);
         	gotoxy(74, 22);printf("Anda yakin akan log out ?");
            l:
				gotoxy(78, 23);printf("   ( Y / N ) ? : ");strcpy(pick,input(95, 23, 1, 1));
            if(strcmp(pick,"Y")==0 || strcmp(pick,"y")==0)
            {
               pure(icx);
               menuBilling();
            }
            else if(strcmp(pick,"N")==0 || strcmp(pick,"n")==0)
            {
            	menuBilling();
            }
            else
            {
               //diisi pake kodingan warning input
               //warning();
               gotoxy(92, 23);printf(" ");
         		goto l;
            }
      }
}
void prosesRentalPC(int komp, int pil, char userr[30])      //fungsi untuk mengisi status PC, parameter komp untuk index pc, pil untuk index paket rental
{                                                           //parameter char untuk menerima data nama inputan user
   //mengambil waktu dari sistem PC
   pure(komp);
   int temp[3], tdate;
   time_t in;
   in=time(NULL);
   waktu0=localtime(&in);
   tamWaktu[0]=waktu0->tm_mday;         //mengambil tanggal
   tamWaktu[1]=waktu0->tm_mon+1;        //mengambil bulan ditambah 1 karena mulai dari 0
   tamWaktu[2]=1900+waktu0->tm_year;    //mengambil tahun ditambah 1900 karena sistem mensetting default untuk mulai tahun dari tahun 1900
   tamWaktu[3]=waktu0->tm_hour;         //mengambil jam
   tamWaktu[4]=waktu0->tm_min;          //mengambil menit
   tamWaktu[5]=waktu0->tm_sec;          //mengambil detik
   tamWaktu[6]=tamWaktu[3]*60+tamWaktu[4]+durasi[pil];  //untuk perhitungan waktu mulai di tambah durasi
   temp[0]=tamWaktu[6]/60;
   if(temp[0]>23)
   {
      tdate=tamWaktu[0]+1;
      temp[3]=(tamWaktu[6]-24*60)/60;
   }
	kompi[komp].no=komp+1;
   strcpy(kompi[komp].user,userr);
   strcpy(kompi[komp].paket,paketPC[pil]);
   kompi[komp].cek=true;
   kompi[komp].jam=tamWaktu[3];
   kompi[komp].menit=tamWaktu[4];
	kompi[komp].detik=tamWaktu[5];
   kompi[komp].durasi=durasi[pil]+1;
   kompi[komp].tdurasi=kompi[komp].durasi;
   kompi[komp].jamOut=tamWaktu[3]*3600+tamWaktu[4]*60+tamWaktu[5]+durasi[pil]*60;
   bayarRental(pil,komp,1);
}
void prosesTambahRental(int komp, int pil)      //fungsi untuk mengisi status PC, parameter komp untuk index pc, pil untuk index paket rental
{
	//mengambil waktu dari sistem PC

   int temp[6], tbef;
   time_t in;
   in=time(NULL);
   waktu0=localtime(&in);
   temp[0]=waktu0->tm_hour;         //mengambil jam
   temp[1]=waktu0->tm_min;				////mengambil menit
   temp[2]=waktu0->tm_sec;          //mengambil detik
   temp[3]=waktu0->tm_year+1900;
   temp[4]=waktu0->tm_mon+1;
   temp[5]=waktu0->tm_mday;
   tnow=temp[0]*3600+temp[1]*60+temp[2];
   tbef=kompi[komp].jam*3600+kompi[komp].menit*60+kompi[komp].detik;
	kompi[komp].durasi=(kompi[komp].durasi*60)-(tnow-tbef); //untuk perhitungan durasi sebelumnya ditambah durasi tambahan
   kompi[komp].durasi/=60;
	strcpy(kompi[komp].paket,paketPC[pil]);
   kompi[komp].cek=true;
   kompi[komp].jam=temp[0];
   kompi[komp].menit=temp[1];
   kompi[komp].detik=temp[2];
   kompi[komp].durasi+=durasi[pil]+60;       //ditambah 60 karena agar refresh status tidak langsung berkurang
   kompi[komp].tdurasi=kompi[komp].durasi;
   strcpy(client[pengunjung].user, kompi[komp].user);
   	strcpy(client[pengunjung].paket, kompi[komp].paket);
   	client[pengunjung].jam=kompi[komp].jam;
   	client[pengunjung].menit=kompi[komp].menit;
   	client[pengunjung].price=hargaPaket[pil];
   /*
   //bayarRental(pil,komp,0);

   inClient=   fopen("db_nopc.txt","a");
   fprintf(inClient,"%d\n", kompi[komp].no);
   fclose(inClient);
   inClient=   fopen("db_client.txt","a");
   int nkn=0;
   if(kompi[komp].cek=true)
   {
   	nkn=1;
   }
   fprintf(inClient,"%s#%s#%d#%d#%d#%d#%d#%d\n", kompi[komp].user, kompi[komp].paket, nkn, kompi[komp].jam, kompi[komp].menit, kompi[komp].detik, kompi[komp].durasi, kompi[komp].jamOut);
   fclose(inClient);

   inBilling=fopen("db_dlaporan.txt","a");
   fprintf(inBilling,"%s#%s#%d#%d#%d\n", kompi[komp].user, kompi[komp].paket, kompi[komp].jam, kompi[komp].menit, hargaPaket[pil]);
	fclose(inBilling);
   */
}
void bayarRental(int pil, int komp, int mode)
{
   char tam[32];
	popupinfo();
	gotoxy(72, 16);printf(" P E M B A Y A R A N ");
   gotoxy(64, 22);printf("T o t a l  B a y a r : Rp. %9d  ", hargaPaket[pil]);
   gotoxy(64, 28);printf("H a r g a  B a y a r : Rp.      ");
   gotoxy(64, 34);printf("K e m b a l i a n    : Rp.      ");
	gotoxy(88, 36);printf("0. untuk kembali");
   gotoxy(64, 40);printf("   B i l l i n g o !  2 0 1 9    ");
   do
   {
   	gotoxy(64, 28);printf("H a r g a  B a y a r : Rp.         ");
   	strcpy(tam,input(95, 28, 9, 1));
      if(strcmp(tam,"0")==0)
      {
         gotoxy(64, 40);printf("                                 ");
         gotoxy(64, 40);printf("    Transaksi  di  Batalkan      ");Sleep(1000);
         getch();
      	menuBilling();
      }
		else if(valAngka(tam)!=0)
      {
         gotoxy(64, 40);printf("                                 ");
         gotoxy(64, 40);printf("    Silahkan  Masukan  Angka     ");Sleep(1000);
			gotoxy(64, 40);printf("                                 ");
         gotoxy(64, 40);printf("   B i l l i n g o !  2 0 1 9    ");
      }
      else if(atoi(tam)<hargaPaket[pil])
      {
         gotoxy(64, 40);printf("                                 ");
         gotoxy(64, 40);printf("  U a n g   A n d a  K u r a n g ");Sleep(1000);
         gotoxy(64, 40);printf("                                 ");
         gotoxy(64, 40);printf("   B i l l i n g o !  2 0 1 9    ");
      }
   }
   while(valAngka(tam)!=0 || atoi(tam)<hargaPaket[pil]);
   gotoxy(64, 28);printf("                                   ");
   gotoxy(64, 28);printf("H a r g a  B a y a r : Rp. %9d     ", atoi(tam));
   gotoxy(64, 34);printf("K e m b a l i a n    : Rp. %9d     ", atoi(tam)-hargaPaket[pil]);
   /*
   inClient=   fopen("db_nopc.txt","a");
   fprintf(inClient,"%d\n", kompi[komp].no);
   fclose(inClient);
   inClient=   fopen("db_client.txt","a");
   int nkn=0;
   if(kompi[komp].cek=true)
   {
   	nkn=1;
   }
   fprintf(inClient,"%s#%s#%d#%d#%d#%d#%d#%d#%d\n", kompi[komp].user, kompi[komp].paket, nkn, kompi[komp].jam, kompi[komp].menit, kompi[komp].detik, kompi[komp].durasi, kompi[komp].jamOut);
   fclose(inClient);
   */
   if(mode==1)
   {
   	strcpy(client[pengunjung].user, kompi[komp].user);
   	strcpy(client[pengunjung].paket, kompi[komp].paket);
   	client[pengunjung].jam=kompi[komp].jam;
   	client[pengunjung].menit=kompi[komp].menit;
   	client[pengunjung].price=hargaPaket[pil];
   }
   else
   {
      prosesTambahRental(komp,pil);
   }
   pengunjung++;
   pendapatan+=hargaPaket[pil];
   /*
   inLaporan=fopen("db_laporan.txt","w");
   fprintf(inLaporan,"%d#%d", pengunjung, pendapatan);
   fclose(inLaporan);
   inBilling=fopen("db_dlaporan.txt","a");
   fprintf(inBilling,"%s#%s#%d#%d#%d\n", kompi[komp].user, kompi[komp].paket, kompi[komp].jam, kompi[komp].menit, hargaPaket[pil]);
	fclose(inBilling);
   */
   getch();
}
void pure(int ixC)
{
	kompi[ixC].no=NULL;
   strcpy(kompi[ixC].user,"");
   strcpy(kompi[ixC].paket,"");
   kompi[ixC].cek=false;
   kompi[ixC].jam=NULL;
   kompi[ixC].menit=NULL;
   kompi[ixC].detik=NULL;
   kompi[ixC].durasi=NULL;
   kompi[ixC].tdurasi=NULL;
   kompi[ixC].jamOut=NULL;
}
void pure2(int ixC)
{
	client[ixC].no=NULL;
   strcpy(client[ixC].user,"");
   strcpy(client[ixC].paket,"");
   client[ixC].cek=false;
   client[ixC].jam=NULL;
   client[ixC].menit=NULL;
   client[ixC].detik=NULL;
   client[ixC].durasi=NULL;
   client[ixC].tdurasi=NULL;
   client[ixC].jamOut=NULL;
}
void menuBillingStatus()
{
	popup();
   gotoxy(73, 22);printf("Masukan No PC        : ");
   strcpy(pick,input(96,22,2,1));
   if(valcekPC(atoi(pick))==-1)
   {
   	gotoxy(74, 24);printf("PC yang anda cari tidak ada");Sleep(1000);
      menuBilling();
   }
   else if(kompi[atoi(pick)-1].cek==false)
   {
   	gotoxy(74, 24);printf("PC yang anda pilih kosong.");Sleep(1000);
      menuBilling();
   }
	indexCari=atoi(pick)-1;
   popupinfo();
   gotoxy(72, 16);printf("  I N F O R M A S I  ");
	gotoxy(64, 22);printf("No PC       :  %d", kompi[indexCari].no);
   gotoxy(64, 25);printf("Nama User   :  %s" , kompi[indexCari].user);
   gotoxy(64, 28);printf("Jenis Paket :  %s" , kompi[indexCari].paket);
   gotoxy(64, 31);printf("Jam Masuk   :  %d:%d", kompi[indexCari].jam, kompi[indexCari].menit);
   if(kompi[indexCari].menit<10)
   {
		gotoxy(82,31);printf("0%d",kompi[indexCari].menit);
   }
   gotoxy(64, 34);printf("Durasi      :  %d menit" , kompi[indexCari].tdurasi);
   gotoxy(88, 36);printf("0. untuk kembali");
	gotoxy(74, 40);printf("P I L I H  : ");
   do
   {
   	strcpy(pick,input(87, 40, 1, 1));
   	if(strcmp(pick,"0")==0)
	   {
   		menuBilling();
	   }
      gotoxy(87,40);printf(" ");
   }while(true);
}
void menuBillingRefresh()
{
   int a, b, c, d;
   time_t tes;
   tes=time(NULL);
	waktu0=localtime(&tes);
	a=waktu0->tm_hour;
	b=waktu0->tm_min;
   c=waktu0->tm_sec;
	tnow=a*3600+b*60+c;	//nilai banding waktu sekarang dengan rental
   for(int x=0; x<stockPC; x++)
   {
      d=kompi[x].jam*3600+kompi[x].menit*60+kompi[x].detik;
   	if(tnow>=kompi[x].jamOut)             // kondisi untuk logout otomatis
	   {                    // gunakan perulangan untuk mengecek semua pc, dengan batas pc yang tersedia
   		pure(x);
	   }
      kompi[x].tdurasi=kompi[x].durasi*60-(tnow-d);
      kompi[x].tdurasi/=60;
   }
}
void menuLaporan(){
   clrscr();
   /*
   inLaporan=fopen("db_laporan.txt","r");
   fscanf(inLaporan,"%d#%d", &pengunjung, &pendapatan);
   fclose(inLaporan);
   */
   mFrame();
   frame3();
   textcolor(15);
   for(int x=12; x<152; x++)
   {
   	gotoxy(x, 9);cprintf("%c", 219);
      gotoxy(x,25);cprintf("%c", 219);
      if(x<28)
      {
      	gotoxy( 12,x-3);cprintf("%c", 219);
         gotoxy(151,x-3);cprintf("%c", 219);
      }
   }
   for(int x=92; x<132; x++)
   {
      gotoxy(x,28);cprintf("%c", 219);
      gotoxy(x,42);cprintf("%c", 219);
      if(x<106)
      {
      	gotoxy( 92,x-64);cprintf("%c", 219);
         gotoxy(131,x-64);cprintf("%c", 219);
      }
   }
   gotoxy(64,11);printf("   P  E  N  D  A  P  A  T  A  N   ");
   gotoxy(64,12);printf("----------------------------------");
   gotoxy(15,13);printf("%c%c%c%c%c%c          ", 219, 219, 219, 219, 219, 219);
   gotoxy(15,14);printf("%c     %c  %c%c%c%c%c ", 219, 219, 219, 219, 219, 219, 219);
   gotoxy(15,15);printf("%c     %c  %c    %c", 219, 219, 219, 219);
   gotoxy(15,16);printf("%c     %c  %c    %c", 219, 219, 219, 219);
   gotoxy(15,17);printf("%c     %c  %c    %c", 219, 219, 219, 219);
   gotoxy(15,18);printf("%c%c%c%c%c%c   %c    %c", 219, 219, 219, 219, 219, 219, 219, 219, 219);
   gotoxy(15,19);printf("%c     %c  %c%c%c%c%c ", 219, 219, 219, 219, 219, 219, 219);
   gotoxy(15,20);printf("%c     %c  %c      ", 219, 219, 219);
   gotoxy(15,21);printf("%c     %c  %c        ", 219, 219, 219);
   gotoxy(15,22);printf("%c     %c  %c       %c", 219, 219, 219, 219);
   printAngka(142, 13, pendapatan, 1);
   gotoxy(95,30);printf("   P  E  N  G  U  N  J  U  N  G   ");
   gotoxy(95,31);printf("----------------------------------");
   printAngka(122, 31, pengunjung, 0);
   gotoxy( 15, 52);printf("1. Detail  Pendapatan");
	gotoxy( 72, 52);printf("0. Kembali");
   gotoxy(132, 52);printf("Pilih : ");
   while(true)
   {
   	gotoxy(140, 52);printf(" ");
   	strcpy(pick,input(140, 52, 1, 1));
   	if(strcmp(pick,"1")==0)
	   {
   		menuLaporanDetail();
	   }
   	else if(strcmp(pick,"0")==0)
	   {
      	clrscr();
      	menuAwal();
	   }
   }
}
void menuLaporanDetail()
{
   //loadData();
   clrscr();
   frameLaporanDetail();
   int c=0;
   do{
      hideLaporan();
      printLaporan(c);
      gotoxy(144, 52);printf(" ");
   	strcpy(pick,input(144, 52, 1, 1));
   	if(strcmp(pick,"N")==0 || strcmp(pick,"n")==0)
	   {
         if(pengunjung>11)
         {
         	c++;
         }
	   }
      if(strcmp(pick,"B")==0 || strcmp(pick,"b")==0)
      {
         c--;
         if(c<0)
         {
         	c=0;
         }
      }
   }while(strcmp(pick,"0")!=0);
   clrscr();
   menuLaporan();
}
void frameLaporanDetail()
{
	mFrame();
   billingo2(20,13);
	textcolor(15);
   frame4();
   gotoxy( 12, 52);printf("B. Sebelumnya");
   gotoxy( 53, 52);printf("N. Selanjutnya");
   gotoxy( 95, 52);printf("0. Kembali");
   gotoxy(136, 52);printf("Pilih :");
   for(int m=70; m<155; m++)
   {
   	gotoxy(m, 9);cprintf("%c", 205);
      gotoxy(m,13);cprintf("%c", 205);
      gotoxy(m,41);cprintf("%c", 205);
      gotoxy(m,45);cprintf("%c", 205);
      if(m<105)
      {
      	gotoxy( 69,m-60);cprintf("%c",186);
         gotoxy(128,m-60);cprintf("%c",186);
         gotoxy(155,m-60);cprintf("%c",186);
      }
      if(m<101)
      {
         gotoxy( 75,m-60);cprintf("%c",186);
         gotoxy( 91,m-60);cprintf("%c",186);
         gotoxy(105,m-60);cprintf("%c",186);
      }
   }
   gotoxy( 75, 9);cprintf("%c", 203);
   gotoxy( 91, 9);cprintf("%c", 203);
   gotoxy(105, 9);cprintf("%c", 203);
   gotoxy(128, 9);cprintf("%c", 203);
   gotoxy(105, 9);cprintf("%c", 203);
   gotoxy( 75,13);cprintf("%c", 206);
   gotoxy( 91,13);cprintf("%c", 206);
   gotoxy(105,13);cprintf("%c", 206);
   gotoxy(128,13);cprintf("%c", 206);
   gotoxy(105,13);cprintf("%c", 206);
   gotoxy( 75,41);cprintf("%c", 202);
   gotoxy( 91,41);cprintf("%c", 202);
   gotoxy(105,41);cprintf("%c", 202);
   gotoxy(128,41);cprintf("%c", 206);
   gotoxy(128,45);cprintf("%c", 202);
	gotoxy(155,41);cprintf("%c", 185);
   gotoxy(155, 9);cprintf("%c",187); //kanan atas
	gotoxy(155,45);cprintf("%c",188); //kanan bawah
   gotoxy( 69, 9);cprintf("%c",201); //kiri atas
   gotoxy( 69,45);cprintf("%c",200); //kiri bawah
   gotoxy( 69,13);cprintf("%c",204); //kiri sambungan
   gotoxy( 69,41);cprintf("%c",204); //kiri sambungan
   gotoxy(155,13);cprintf("%c",185); //kanan sambungan
   gotoxy( 86,  6);cprintf("R  I  N  C  I  A  N    P  E  N  D  A  P  A  T  A  N");
   gotoxy( 86,  7);cprintf("---------------------------------------------------");
   gotoxy( 71, 11);cprintf("N O");
   gotoxy( 79, 11);cprintf("N  A  M  A ");
   gotoxy( 94, 11);cprintf("W A K T U");
   gotoxy(113, 11);cprintf("P A K E T");
   gotoxy(134, 11);cprintf("H A R G A ( Rp. )");
   gotoxy( 79, 43);cprintf("J U M L A H  P E M A S U K A N  ( Rp. )");
}
void printLaporan(int l)
{
   l=l*13;
   int jpend=0;
	for(int m=0; m<26 && l<pengunjung; m+=2, l++)
   {
   	gotoxy( 72,15+m);printf("%2d", l+1);
      gotoxy( 78,15+m);printf("%s", client[l].user);
      gotoxy( 95,15+m);printf("%2d:%2d", client[l].jam, client[l].menit);
      gotoxy(112,15+m);printf("%s", client[l].paket);
		gotoxy(142,15+m);printf("%9d",client[l].price);
      jpend+=client[l].price;
      Sleep(250);
   }
   gotoxy(142, 43);printf("%9d",jpend);
}
void hideLaporan()
{
	for(int m=0; m<26; m+=2)
   {
      gotoxy( 72,15+m);printf("   ");
      gotoxy( 77,15+m);printf("             ");
      gotoxy( 95,15+m);printf("       ");
      gotoxy(108,15+m);printf("                   ");
		gotoxy(130,15+m);printf("                        ");
   }
}
void menuSetting()
{
	isiMenuSetting();
   a:
   textcolor(15);
	gotoxy(143,52);printf("Pilih : ");
	strcpy(pick,input(151, 52, 1, 1));
   if(strcmp(pick,"1")==0)
   {
   	isiMenuSetting1();
   }
   else if(strcmp(pick,"2")==0)
   {
      isiMenuSetting2();
   }
   else if(strcmp(pick,"3")==0)
   {
   	isiMenuSetting3();
   }
   else if(strcmp(pick,"4")==0)
   {
   	isiMenuSetting4();
   }
   else if(strcmp(pick,"0")==0)
   {
		clrscr();
      menuAwal();
   }
   else
   {
   	gotoxy(148, 52);printf(" ");
      goto a;
   }
}
void isiMenuSetting()
{
   clrscr();
	mFrame();
   billingo2(67,13);
   frame6();
   gotoxy( 8 ,52);printf("1. Akun Admin");
	gotoxy(35 ,52);printf("2. Ubah Paket");
   gotoxy(61 ,52);printf("3. Ubah Stock");
   gotoxy(87 ,52);printf("4. Reset Setting");
   gotoxy(117,52);printf("0. Kembali");
   gotoxy(143,52);printf("Pilih : ");
}
void isiMenuSetting1()
{
		isiMenuSetting();
      inAdmin=fopen("db_admin.txt","r");
   	fscanf(inAdmin,"%[^#]#%s",&gmUser,&gmPass);
   	fclose(inAdmin);
      big_popup();
      gotoxy(72, 16);printf("A  D  M  I  N");
      gotoxy(62, 23);printf("Username Lama : ");
      gotoxy(62, 26);printf("Username Baru : ");
      gotoxy(62, 29);printf("Password Lama : ");
      gotoxy(62, 32);printf("Password Baru : ");
      gotoxy(62, 35);printf("Ver. Password : ");
      gotoxy(70, 41);printf("0 untuk kembali ");
      do
      {
         gotoxy(62, 23);printf("                             ");
         gotoxy(62, 23);printf("Username Lama :              ");
      	strcpy(inUser,input(78, 23, 13, 1));
         if(strcmp(inUser,"0")==0)
	      {
   	   	menuSetting();
         }
         else if(strcmp(inUser,gmUser)!=0)
         {
         	gotoxy(62, 23);printf("                             ");
            gotoxy(62, 23);printf("    Data Input Tidak Sama    ");Sleep(1000);
         }
      }
      while(strcmp(inUser,gmUser)!=0);
      do
      {
         gotoxy(62, 26);printf("                             ");
         gotoxy(62, 26);printf("Username Baru : ");
      	strcpy(inUser,input(78, 26, 13, 1));
         if(strcmp(inUser,"0")==0)
	      {
   	   	menuSetting();
         }
         else if(strlen(inUser)<6)
         {
         	gotoxy(62, 26);printf("                             ");
            gotoxy(62, 26);printf(" M i n .  6  K a r a k t e r ");Sleep(1000);
         }
         else if(valUser(inUser))
         {
         	gotoxy(62, 26);printf("                             ");
            gotoxy(62, 26);printf(" I n v a l i d    I n p u t  ");Sleep(1000);
         }
      }
      while(valUser(inUser));
      do
      {
      	gotoxy(62, 29);printf("                             ");
         gotoxy(62, 29);printf("Password Lama : ");
      	strcpy(inPass,input(78, 29, 13, 1));
         if(strcmp(inPass,"0")==0)
	      {
   	   	menuSetting();
         }
         else if(strcmp(inPass,gmPass)!=0)
         {
         	gotoxy(62, 29);printf("                             ");
            gotoxy(62, 29);printf("    Data Input Tidak Sama    ");Sleep(1000);
         }
      }
      while(strcmp(inPass,gmPass)!=0);
      do
      {
      	gotoxy(62, 32);printf("                             ");
			gotoxy(62, 32);printf("Password Baru : ");
      	strcpy(inPass,input(78, 32, 13, 1));
         if(strcmp(inPass,"0")==0)
	      {
   	   	menuSetting();
         }
         else if(strlen(inPass)<6)
         {
         	gotoxy(62, 32);printf("                             ");
            gotoxy(62, 32);printf(" M i n .  6  K a r a k t e r ");Sleep(1000);
         }else if(valPass(inPass))
         {
         	gotoxy(62, 32);printf("                             ");
            gotoxy(62, 32);printf(" I n v a l i d    I n p u t  ");Sleep(1000);
         }
      }
      while(valPass(inPass));
      strcpy(vrPass, inPass);
      do
      {
      	gotoxy(62, 35);printf("                             ");
         gotoxy(62, 35);printf("Ver. Password : ");
      	strcpy(inPass,input(78, 35, 13, 1));
         if(strcmp(inPass,"0")==0)
	      {
   	   	menuSetting();
         }
         else if(strcmp(inPass,vrPass)!=0)
         {
         	gotoxy(62, 35);printf("                             ");
            gotoxy(62, 35);printf("    Data Input Tidak Sama    ");Sleep(1000);
         }
      }
      while(strcmp(inPass,vrPass)!=0);
      gotoxy(68, 41);printf("Simpan (Y/N)  :    ");
      do
      {
         gotoxy(84,41);printf(" ");
      	strcpy(pick, input(84, 41, 1, 1));
      	if(strcmp(pick,"Y")==0 || strcmp(pick,"y")==0)
      	{
      		strcpy(gmUser,inUser);
         	strcpy(gmPass,inPass);
            inAdmin=fopen("db_admin.txt","w+");
            fprintf(inAdmin,"%s#%s", gmUser, gmPass);
            fclose(inAdmin);
         	menuSetting();
      	}
      	else if (strcmp(pick,"N")==0 || strcmp(pick,"n")==0)
      	{
      		menuSetting();
      	}
      }while(strcmp(pick,"Y")!=0 || strcmp(pick,"y")!=0 || strcmp(pick,"N")!=0 || strcmp(pick,"n")!=0);
}
void isiMenuSetting2()
{
   int indexU;
   char tamInput[4][20];
   /*
   inPaket=fopen("db_paket.txt","r");
   int bb=0;
   while(!feof(inPaket))
   {
   	fscanf(inPaket,"%[^#]#%d#%d\n", &paketPC[bb],&hargaPaket[bb],&durasi[bb]);
   	bb++;
   }
   fclose(inPaket);
   */
	isiMenuSetting();
      big_popup2();
      gotoxy(65, 16);printf("U  B  A  H    P  A  K  E  T");
      gotoxy(62, 23);printf("Paket 1 : %s", paketPC[0]);
      gotoxy(62, 26);printf("Paket 2 : %s", paketPC[1]);
      gotoxy(62, 29);printf("Paket 3 : %s", paketPC[2]);
      gotoxy(62, 32);printf("Paket 4 : %s", paketPC[3]);
      gotoxy(62, 35);printf("Paket 5 : %s", paketPC[4]);
      gotoxy(70, 38);printf("0 untuk kembali ");
      gotoxy(70, 41);printf("Pilih  Paket  : ");
      while(true)
      {
      	strcpy(pick, input(86, 41, 1, 1));
      	if(strcmp(pick,"1")==0)
	      {
   	   	indexU=0;
      	}
      	else if(strcmp(pick,"2")==0)
	      {
   	   	indexU=1;
      	}
      	else if(strcmp(pick,"3")==0)
	      {
   	   	indexU=2;
      	}
      	else if(strcmp(pick,"4")==0)
	      {
   	   	indexU=3;
      	}
      	else if(strcmp(pick,"5")==0)
	      {
   	   	indexU=4;
      	}
      	else if(strcmp(pick,"0")==0)
	      {
   	   	menuSetting();
      	}
      	else
	      {
   	      isiMenuSetting2();
      	}
         break;
      }
      popupinfo();
      gotoxy(73, 16);printf("U B A H   P A K E T");
      gotoxy(64, 23);printf("NAMA PAKET   : ");
      gotoxy(64, 26);printf("DURASI PAKET :      menit");
      gotoxy(64, 29);printf("HARGA        : Rp. ");
      gotoxy(88, 36);printf("0. untuk kembali");
      do
      {
         gotoxy(64, 23);printf("NAMA PAKET   :            ");
         strcpy(tamInput[0], input(79, 23, 13, 1));
         if(valPaket(tamInput[0])==true)
         {
				gotoxy(79,23);printf("Invalid Input");Sleep(750);
            gotoxy(79,23);printf("             ");
         }
         else if(strcmp(tamInput[0],"0")==0)
         {
         	menuSetting();
         }
      }
      while(valPaket(tamInput[0])==true);
      int dur;
      do
      {
         gotoxy(64, 26);printf("DURASI PAKET :      menit");
         strcpy(tamInput[1], input(79, 26, 3, 1));

         if(strcmp(tamInput[1],"0")==0)
         {
         	menuSetting();
         }
         else if(valAngka(tamInput[1])==1 || atoi(tamInput[1])<0)
         {
         	gotoxy(64, 26);printf("                          ");
            gotoxy(64, 26);printf("Durasi Min 1 Max 999 Menit");Sleep(1000);
            gotoxy(64, 26);printf("                          ");
         }
      }
      while(valAngka(tamInput[1])!=0);
      do
      {
      	gotoxy(64, 29);printf("HARGA        : Rp. ");
         strcpy(tamInput[2], input(84, 29, 5, 1));
         if(strcmp(tamInput[1],"0")==0)
         {
         	menuSetting();
         }
         else if(valAngka(tamInput[2])==1 || atoi(tamInput[1])<0)
         {
            gotoxy(64, 29);printf("                          ");
				gotoxy(64, 29);printf("Masukan Harga dengan Benar");Sleep(1000);
            gotoxy(64, 29);printf("                          ");
         }
      }
      while(valAngka(tamInput[2])!=0);
      gotoxy(74, 40);printf("SIMPAN (Y/N)  : ");
      strcpy(pick, input(91, 40, 1, 1));
      if(strcmp(pick,"Y")==0 || strcmp(pick,"y")==0)
      {
      	strcpy(paketPC[indexU],tamInput[0]);
         durasi[indexU]=atoi(tamInput[1]);
         hargaPaket[indexU]=atoi(tamInput[2]);
         /*
			inPaket=fopen("db_paket.txt","w");
         for(int x=0; x<5; x++)
         {
         	fprintf(inPaket,"%s#%d#%d\n", paketPC[x], hargaPaket[x], durasi[x]);
         }
         fclose(inPaket);
         */
         menuSetting();
      }
      else if (strcmp(pick,"N")==0 || strcmp(pick,"n")==0)
      {
      	menuSetting();
      }
}
void isiMenuSetting3()
{
		isiMenuSetting();
      mini_popup();
      gotoxy(65, 16);printf("U  B  A  H    S  T  O  C  K");
      gotoxy(70, 27);printf("0 untuk kembali ");
      p1:
      do
      {
      	gotoxy(62, 22);printf("Masukan stock : ");
      	strcpy(inUser,input(78, 22, 2, 1));
         if(valAngka(inUser)!=0)
         {
         	gotoxy(62, 22);printf("                             ");
				gotoxy(62, 22);printf("   Hanya  Masukan  Angka     ");Sleep(1000);
         	gotoxy(62, 22);printf("                             ");
         }
      }while(valAngka(inUser)!=0);
      if(strcmp(inUser,"0")==0)
      {
      	menuSetting();
      }
      else if(atoi(inUser)<0 || atoi(inUser)>24)
      {
         gotoxy(62, 22);printf("                             ");
			gotoxy(62, 22);printf(" Min : 1 PC  dan Max : 24 PC ");Sleep(1000);
         gotoxy(62, 22);printf("                             ");
         //warning2();
			goto p1;
      }
      gotoxy(70, 27);printf("Simpan (Y/N)  :    ");
      strcpy(pick,input(87, 27, 1, 1));
      if(strcmp(pick,"Y")==0 || strcmp(pick,"y")==0)
      {
      	stockPC=atoi(inUser);
         /*
         inStock=fopen("db_stock.txt","w+");
         fprintf(inStock,"%d",stockPC);
         fclose(inStock);
         */
         menuSetting();
      }
      else if (strcmp(pick,"N")==0 || strcmp(pick,"n")==0)
      {
      	menuSetting();
      }
      else
      {
      	//warning();
         goto p1;
      }
}
void isiMenuSetting4()
{
      mini_popup();
      gotoxy(64, 16);printf("S E T T I N G   D E F A U L T");
      gotoxy(70, 27);printf("0 untuk kembali ");
      gotoxy(62, 21);printf("  Anda yakin akan merubah  semua");
      gotoxy(62, 23);printf("settingan ke default ? ( Y/N )");
      while(true)
      {
      	gotoxy(93,23);printf(" ");
      	strcpy(inUser,input(93, 23, 1, 1));
      	if(strcmp(inUser,"0")==0)
      	{
      		menuSetting();
      	}
      	else if(strcmp(inUser,"Y")==0 || strcmp(inUser,"y")==0)
      	{
            /*
         	inAdmin=fopen("db_admin.txt","w");
         	fprintf(inAdmin,"Admin#123456");
         	fclose(inAdmin);
         	inStock=fopen("db_stock.txt","w");
         	fprintf(inStock,"0");
         	fclose(inStock);
         	inLaporan=fopen("db_laporan.txt","w");
         	fprintf(inLaporan,"0#0");
         	fclose(inLaporan);
         	inPaket=fopen("db_paket.txt","w");
         	fprintf(inPaket,"Paket 2000#2000#40\n"
         						 "Paket 1 Jam#3000#60\n"
									 "Paket 2 Jam#5000#120\n"
									 "Paket 3 Jam#8000#180\n"
									 "Paket 5 Jam#10000#300\n");
         	fclose(inPaket);
         	inClient=fopen("db_nopc.txt","w+");
         	fclose(inClient);
				inClient=fopen("db_client.txt","w+");
         	fclose(inClient);
         	inBilling=fopen("db_dlaporan.txt","w+");
         	fclose(inBilling);
            */

            strcpy(paketPC[0],"Paket 2000");//{"Paket 1 Jam"},{"Paket 2 Jam"},{"Paket 3 Jam"},{"Paket 5 Jam"}};
            strcpy(paketPC[1],"Paket 1 Jam");
            strcpy(paketPC[2],"Paket 2 Jam");
            strcpy(paketPC[3],"Paket 3 Jam");
            strcpy(paketPC[4],"Paket 5 Jam");
            hargaPaket[0]=2000;
            hargaPaket[1]=3000;
            hargaPaket[2]=5000;
            hargaPaket[3]=8000;
            hargaPaket[4]=10000;
         	for(int x=0; x<stockPC; x++)
         	{
         		pure(x);
         	}
            for(int x=0;x<pengunjung;x++)
            {
            	pure2(x);
            }
            pendapatan=0;
            pengunjung=0;
            inC=0;
            indexCari=0;
         	menuSetting();
      	}
      	else if (strcmp(inUser,"N")==0 || strcmp(inUser,"n")==0)
      	{
      		menuSetting();
      	}
      }
}
void menuTentang()   ///FUNGSI UNTUK MENAMPILKAN MENU TENTANG APLIKASI
{
   clrscr();
	mFrame();
   textcolor(15);
	for(int x=2;x<164;x++)
   {
   	gotoxy(x,  49);cprintf("%c",219);
      if(x<60)
      {
      	gotoxy(x, 52);printf("%c", 175);
      }
      else if(x>100)
      {
         gotoxy(x, 52);printf("%c", 174);
      }
   }
   textcolor(15);
   for(int x=14; x<150; x++)
   {
   	gotoxy(x, 5);cprintf("%c",205);
      gotoxy(x,11);cprintf("%c",205);
      gotoxy(x,46);cprintf("%c",205);
      if(x<54)
      {
      	gotoxy( 13,x-8);cprintf("%c", 186);
         gotoxy(150,x-8);cprintf("%c", 186);
      }
   }
   gotoxy(150, 5);cprintf("%c",187); //kanan atas
	gotoxy(150,46);cprintf("%c",188); //kanan bawah
   gotoxy( 13, 5);cprintf("%c",201); //kiri atas
   gotoxy( 13,46);cprintf("%c",200); //kiri bawah
   gotoxy( 13, 11);cprintf("%c",204); //kiri sambungan
   gotoxy(150, 11);cprintf("%c",185); //kanan sambungan
   gotoxy( 64,52);cprintf("Tekan sembarang key untuk kembali.");
   textcolor(11);
   gotoxy( 64, 8);cprintf("A  B  O  U  T   T  H  E    A  P  P");
   gotoxy( 64, 9);cprintf("----------------------------------");
	gotoxy( 18,15);cprintf("    Aplikasi Billingo! Server merupakan prototype untuk billing admin warnet, beberapa fitur yang di  miliki oleh  aplikasi ini,");
	gotoxy( 18,17);cprintf("yaitu :                                                                                                                         ");
   gotoxy( 18,21);cprintf("        1. Fitur Billing, seperti rental, pindah pc dan status PC Client.                                                       ");
   gotoxy( 18,23);cprintf("        2. Fitur Laporan, terdiri dari laporan pendapatan dan grafik pengunjung warnet.                                         ");
   gotoxy( 18,25);cprintf("        3. Fitur Setting, terdiri dari setting admin, paket dan stok PC Client.                                                 ");
   gotoxy( 18,29);cprintf("    Aplikasi ini dibuat dengan Bahasa Pemrograman Bahasa C dengan tujuan untuk memenuhi tugas UAS Pelatihan Pemrograman \"Program");
   gotoxy( 18,31);cprintf("PUB\" untuk angkatan ke 17 yaitu membuat suatu projek program dari Bahasa Pemrograman Bahasa C.                                   ");
   gotoxy( 18,33);cprintf("    Terimakasih telah mencoba program sederhana ini.                                                                            ");
   gotoxy( 18,37);cprintf("                                                                                                 Bandung,   Januari 2019        ");
   gotoxy( 18,39);cprintf("                                                                                                         Creator,               ");
   gotoxy( 18,43);cprintf("                                                                                                    Muhammad Nurfaadil          ");
   gotoxy(1,1);getch();
   clrscr();
   menuAwal();
}
/////////////////////   BINGKAI-BINGKAI MENU    ////////////////////////////////
//BINGKAI 6 BUAH
void frame6()
{
	textcolor(15);
	for(int x=2;x<164;x++)
   {
   	gotoxy(x,  49);cprintf("%c",219);
   }
   for(int x=50;x<55;x++)
   {
   	gotoxy(27 , x);cprintf("%c",219);
		gotoxy(54 , x);cprintf("%c",219);
      gotoxy(81 , x);cprintf("%c",219);
      gotoxy(108, x);cprintf("%c",219);
      gotoxy(135, x);cprintf("%c",219);
   }
}
//BINGKAI 5 BUAH
void frame5()
{
	textcolor(15);
	for(int x=2;x<164;x++)
   {
   	gotoxy(x,  49);cprintf("%c",219);
   }
   for(int x=50;x<55;x++)
   {
   	gotoxy(33 , x);cprintf("%c",219);
		gotoxy(66 , x);cprintf("%c",219);
      gotoxy(99 , x);cprintf("%c",219);
      gotoxy(132, x);cprintf("%c",219);
   }
}
//BINGKAI 4 BUAH
void frame4()
{
	textcolor(15);
	for(int x=2;x<164;x++)
   {
   	gotoxy(x,  49);cprintf("%c",219);
   }
   for(int x=50;x<55;x++)
   {
		gotoxy(40 , x);cprintf("%c",219);
      gotoxy(81 , x);cprintf("%c",219);
      gotoxy(120, x);cprintf("%c",219);
   }
}
//BINGKAI 3 BUAH
void frame3()
{
	textcolor(15);
	for(int x=2;x<164;x++)
   {
   	gotoxy(x,  49);cprintf("%c",219);
   }
   for(int x=50;x<55;x++)
   {
		gotoxy(54 , x);cprintf("%c",219);
      gotoxy(108, x);cprintf("%c",219);
   }
}

////////////////////////////  C  L  O  S  E      ///////////////////////////////
void close()
{

   int nkn=0;
	inClient=fopen("db_client.txt","w+");
   inTamp=fopen("db_nopc.txt","w+");
   for(int v=0; v<stockPC; v++)
   {
   	if(kompi[v].no!=NULL)
      {
      	if(kompi[v].cek==true)
         {
         	nkn=1;
         }
      	fprintf(inTamp,"%d\n",kompi[v].no);
         fprintf(inClient,"%s#%s#%d#%d#%d#%d#%d#%d#%d\n", kompi[v].user, kompi[v].paket, nkn, kompi[v].jam, kompi[v].menit, kompi[v].detik, kompi[v].durasi, kompi[v].jamOut);
      }
   }
   fclose(inClient);
   fclose(inTamp);
   inTamp=fopen("db_start.txt","w+");
   fprintf(inTamp,"1");
   fclose(inTamp);
}
//////////////////////////    T A M P I L A N     //////////////////////////////
/////////////////////////   T A M P I L A N  P C  /////////////////////////////
//logo flat
void billingo2(int x, int y)
{
	gotoxy(x, 1+y);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c         %c%c%c", 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220);
	gotoxy(x, 2+y);printf(" %c%c            %c%c         %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x, 3+y);printf(" %c%c            %c%c         %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x, 4+y);printf(" %c%c            %c%c         %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x, 5+y);printf(" %c%c            %c%c         %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x, 6+y);printf(" %c%c            %c%c         %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x, 7+y);printf(" %c%c            %c%c         %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x, 8+y);printf(" %c%c            %c%c         %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x, 9+y);printf(" %c%c            %c%c         %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x,10+y);printf(" %c%c            %c%c         %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x,11+y);printf(" %c%c            %c%c         %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x,12+y);printf(" %c%c            %c%c         %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x,13+y);printf(" %c%c            %c%c         %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x,14+y);printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c   %c %c", 222, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 221, 222);
	gotoxy(x,15+y);printf(" %c%c                  %c%c   %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x,16+y);printf(" %c%c                  %c%c   %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x,17+y);printf(" %c%c                  %c%c   %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x,18+y);printf(" %c%c                  %c%c   %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x,19+y);printf(" %c%c                  %c%c   %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x,20+y);printf(" %c%c                  %c%c   %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x,21+y);printf(" %c%c                  %c%c   %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x,22+y);printf(" %c%c                  %c%c   %c%c%c", 222, 219, 219, 219, 223, 223, 223);
	gotoxy(x,23+y);printf(" %c%c                  %c%c      ", 222, 219, 219, 219);
	gotoxy(x,24+y);printf(" %c%c                  %c%c   %c%c%c", 222, 219, 219, 219, 220, 220, 220);
	gotoxy(x,25+y);printf(" %c%c                  %c%c   %c %c", 222, 219, 219, 219, 221, 222);
	gotoxy(x,26+y);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c", 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223, 223);

	gotoxy(x,29+y);printf("  B  I  L  L  I  N  G  O  !  ");
}
//gambar pc
void pc(int x, int y, int no)
{
	gotoxy(6+x, 5+y); printf("===============");
	gotoxy(6+x, 6+y); printf("=             =");
   gotoxy(6+x, 7+y); printf("=             =");
   gotoxy(6+x, 8+y); printf("=             =");
   gotoxy(6+x, 9+y); printf("=             =");
   gotoxy(6+x,10+y); printf("=             =");
   gotoxy(6+x,11+y); printf("===============");
   gotoxy(6+x,12+y); printf("      ====     ");
   gotoxy(6+x,13+y); printf("===============");
   gotoxy(6+x,14+y);printf("==  P C - %2d ==", no);
	gotoxy(6+x,15+y); printf("===============");
}
//warna pc
void screenpc(int x, int y, bool check)
{
   textbackground(4);
   if(check==true)
   {
   	textbackground(2);
   }
	gotoxy(7+x, 6+y); cprintf("             ");
   gotoxy(7+x, 7+y); cprintf("             ");
   gotoxy(7+x, 8+y); cprintf("             ");
   gotoxy(7+x, 9+y); cprintf("             ");
   gotoxy(7+x,10+y); cprintf("             ");
}
//tampilan angka
void nol(int x, int y)
{
	gotoxy(x,1+y);printf(" %c%c%c%c%c ", 219, 219, 219, 219, 219, 219);
   gotoxy(x,2+y);printf("%c     %c", 219, 219);
   gotoxy(x,3+y);printf("%c     %c", 219, 219);
   gotoxy(x,4+y);printf("%c     %c", 219, 219);
   gotoxy(x,5+y);printf("%c     %c", 219, 219);
   gotoxy(x,6+y);printf("%c     %c", 219, 219);
   gotoxy(x,7+y);printf("%c     %c", 219, 219);
   gotoxy(x,8+y);printf("%c     %c", 219, 219);
   gotoxy(x,9+y);printf(" %c%c%c%c%c ", 219, 219, 219, 219, 219, 219);
}
void satu(int x, int y)
{
	gotoxy(x,1+y);printf("  %c%c   ", 219, 219);
   gotoxy(x,2+y);printf("   %c   ", 219);
   gotoxy(x,3+y);printf("   %c   ", 219);
   gotoxy(x,4+y);printf("   %c   ", 219);
   gotoxy(x,5+y);printf("   %c   ", 219);
   gotoxy(x,6+y);printf("   %c   ", 219);
   gotoxy(x,7+y);printf("   %c   ", 219);
   gotoxy(x,8+y);printf("   %c   ", 219);
   gotoxy(x,9+y);printf(" %c%c%c%c%c ", 219, 219, 219, 219, 219);
}
void dua(int x, int y)
{
	gotoxy(x,1+y);printf("%c%c%c%c%c%c ", 219, 219, 219, 219, 219, 219);
   gotoxy(x,2+y);printf("%c     %c", 219, 219);
   gotoxy(x,3+y);printf("      %c", 219);
   gotoxy(x,4+y);printf("      %c", 219);
   gotoxy(x,5+y);printf(" %c%c%c%c%c ", 219, 219, 219, 219, 219);
   gotoxy(x,6+y);printf("%c      ", 219);
   gotoxy(x,7+y);printf("%c      ", 219);
   gotoxy(x,8+y);printf("%c     %c", 219, 219);
   gotoxy(x,9+y);printf(" %c%c%c%c%c%c", 219, 219, 219, 219, 219, 219);
}
void tiga(int x, int y)
{
   gotoxy(x,1+y);printf(" %c%c%c%c%c ", 219, 219, 219, 219, 219);
   gotoxy(x,2+y);printf("%c     %c", 219, 219);
   gotoxy(x,3+y);printf("      %c", 219);
   gotoxy(x,4+y);printf("      %c", 219);
   gotoxy(x,5+y);printf(" %c%c%c%c%c%c", 219, 219, 219, 219, 219, 219);
   gotoxy(x,6+y);printf("      %c", 219);
   gotoxy(x,7+y);printf("      %c", 219);
   gotoxy(x,8+y);printf("%c     %c", 219, 219);
   gotoxy(x,9+y);printf(" %c%c%c%c%c ", 219, 219, 219, 219, 219);
}
void empat(int x, int y)
{
   gotoxy(x,1+y);printf("%c     %c", 219, 219);
   gotoxy(x,2+y);printf("%c     %c", 219, 219);
   gotoxy(x,3+y);printf("%c     %c", 219, 219);
   gotoxy(x,4+y);printf("%c     %c", 219, 219);
   gotoxy(x,5+y);printf(" %c%c%c%c%c%c", 219, 219, 219, 219, 219, 219);
   gotoxy(x,6+y);printf("      %c", 219);
   gotoxy(x,7+y);printf("      %c", 219);
   gotoxy(x,8+y);printf("      %c", 219);
   gotoxy(x,9+y);printf("      %c", 219);
}
void lima(int x, int y)
{
 	gotoxy(x,1+y);printf("%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219);
   gotoxy(x,2+y);printf("%c     %c", 219, 219);
   gotoxy(x,3+y);printf("%c      ", 219);
   gotoxy(x,4+y);printf("%c%c%c%c%c%c ", 219, 219, 219, 219, 219, 219, 219);
   gotoxy(x,5+y);printf("      %c", 219);
   gotoxy(x,6+y);printf("      %c", 219);
   gotoxy(x,7+y);printf("      %c", 219);
   gotoxy(x,8+y);printf("%c     %c", 219, 219);
   gotoxy(x,9+y);printf("%c%c%c%c%c%c ", 219, 219, 219, 219, 219, 219);
}
void enam(int x, int y)
{
   gotoxy(x,1+y);printf(" %c%c%c%c%c ", 219, 219, 219, 219, 219);
   gotoxy(x,2+y);printf("%c     %c", 219, 219);
   gotoxy(x,3+y);printf("%c      ", 219);
   gotoxy(x,4+y);printf("%c      ", 219);
   gotoxy(x,5+y);printf("%c%c%c%c%c%c ", 219, 219, 219, 219, 219, 219, 219);
   gotoxy(x,6+y);printf("%c     %c", 219, 219);
   gotoxy(x,7+y);printf("%c     %c", 219, 219);
   gotoxy(x,8+y);printf("%c     %c", 219, 219);
   gotoxy(x,9+y);printf(" %c%c%c%c%c ", 219, 219, 219, 219, 219);
}
void tujuh(int x, int y)
{
	gotoxy(x,1+y);printf(" %c%c%c%c%c ", 219, 219, 219, 219, 219);
   gotoxy(x,2+y);printf("%c     %c", 219, 219);
   gotoxy(x,3+y);printf("      %c", 219);
   gotoxy(x,4+y);printf("      %c", 219);
   gotoxy(x,5+y);printf("      %c", 219);
   gotoxy(x,6+y);printf("      %c", 219);
   gotoxy(x,7+y);printf("      %c", 219);
   gotoxy(x,8+y);printf("      %c", 219);
   gotoxy(x,9+y);printf("      %c", 219);
}
void delapan(int x, int y)
{
   gotoxy(x,1+y);printf(" %c%c%c%c%c ", 219, 219, 219, 219, 219);
   gotoxy(x,2+y);printf("%c     %c", 219, 219);
   gotoxy(x,3+y);printf("%c     %c", 219, 219);
   gotoxy(x,4+y);printf("%c     %c", 219, 219);
   gotoxy(x,5+y);printf(" %c%c%c%c%c ", 219, 219, 219, 219, 219);
   gotoxy(x,6+y);printf("%c     %c", 219, 219);
   gotoxy(x,7+y);printf("%c     %c", 219, 219);
   gotoxy(x,8+y);printf("%c     %c", 219, 219);
   gotoxy(x,9+y);printf(" %c%c%c%c%c ", 219, 219, 219, 219, 219);
}
void sembilan(int x, int y)
{
   gotoxy(x,1+y);printf(" %c%c%c%c%c ", 219, 219, 219, 219, 219);
   gotoxy(x,2+y);printf("%c     %c", 219, 219);
   gotoxy(x,3+y);printf("%c     %c", 219, 219);
   gotoxy(x,4+y);printf("%c     %c", 219, 219);
   gotoxy(x,5+y);printf(" %c%c%c%c%c%c", 219, 219, 219, 219, 219, 219);
   gotoxy(x,6+y);printf("      %c", 219);
   gotoxy(x,7+y);printf("      %c", 219);
   gotoxy(x,8+y);printf("%c     %c", 219, 219);
   gotoxy(x,9+y);printf(" %c%c%c%c%c ", 219, 219, 219, 219, 219);
}
void printAngka(int x, int y, int num, int mod)  //
{
	int tamp, count=1;;
   if(num==0)
   {
   	nol(x,y);
   }
   else
   {
   	for(int c=x; num>0; c-=9, count++, num/=10)
     	{
			tamp=num%10;
      	if(count%4==0 && mod==1)
	      {
   	      c+=6;
      		gotoxy(c,y+9);printf("%c", 219);
         	count=1;
         	c-=9;
	      }
         if(tamp==0)
	      {
   	      nol(c,y);
      	}
      	else if(tamp==1)
	      {
   	      satu(c,y);
      	}
      	else if(tamp==2)
      	{
         	dua(c,y);
      	}
      	else if(tamp==3)
      	{
         	tiga(c,y);
	      }
   	   else if(tamp==4)
      	{
         	empat(c,y);
	      }
   	   else if(tamp==5)
      	{
         	lima(c,y);
	      }
   	   else if(tamp==6)
      	{
	         enam(c,y);
   	   }
      	else if(tamp==7)
	      {
   	      tujuh(c,y);
      	}
      	else if(tamp==8)
	      {
   	      delapan(c,y);
      	}
      	else if(tamp==9)
	      {
   	      sembilan(c,y);
      	}
	   }
   }
}
//////////////////// T A M P I L A N   P O P  U P /////////////////////////////
//pop up cek
void popup()
{
   textcolor(15);
   for(int x=67; x<106; x++)
   {
		gotoxy(x, 16);cprintf("%c", 219);
   	for(int y=17; y<28; y++)
   	{
   		gotoxy(67,  y);cprintf("%c                                     %c",219,219);
   	}
   	gotoxy(x, 28);cprintf("%c", 219);
	}
}
//pop up info
void popupinfo()
{
   textcolor(15);
   for(int x=59; x<106; x++)
   {
		gotoxy(x, 13);cprintf("%c", 219);
   	for(int y=14; y<43; y++)
   	{
         if(y==19 || y==37)
         {
				gotoxy(x,  y);cprintf("%c",219);
         }
   		else
         {
         	gotoxy(59,  y);cprintf("%c                                             %c",219,219);
			}
   	}
   	gotoxy(x, 43);cprintf("%c", 219);
	}
}
//pop up besar
void big_popup()
{
   textcolor(15);
   for(int x=59; x<98; x++)
   {
		gotoxy(x, 13);cprintf("%c", 219);
   	for(int y=14; y<43; y++)
   	{
         if(y==19 || y==39)
         {
				gotoxy(x,  y);cprintf("%c",219);
         }
   		else
         {
         	gotoxy(59,  y);cprintf("%c                                     %c",219,219);
			}
   	}
   	gotoxy(x, 43);cprintf("%c", 219);
	}
}
//pop up besar v2
void big_popup2()
{
   textcolor(15);
   for(int x=59; x<98; x++)
   {
		gotoxy(x, 13);cprintf("%c", 219);
   	for(int y=14; y<43; y++)
   	{
         if(y==19 || y==39)
         {
				gotoxy(x,  y);cprintf("%c",219);
         }
   		else
         {
         	gotoxy(59,  y);cprintf("%c                                     %c",219,219);
			}
   	}
   	gotoxy(x, 43);cprintf("%c", 219);
	}
}
//pop up kecill
void mini_popup()
{
   textcolor(15);
   for(int x=59; x<98; x++)
   {
		gotoxy(x, 13);cprintf("%c", 219);
   	for(int y=14; y<30; y++)
   	{
         if(y==19 || y==25)
         {
				gotoxy(x,  y);cprintf("%c",219);
         }
   		else
         {
         	gotoxy(59,  y);cprintf("%c                                     %c",219,219);
			}
   	}
   	gotoxy(x, 30);cprintf("%c", 219);
	}
}
/////////////////////////// T A M P I L A N  W A R N I N G //////////////////////
//warning input
//gagal wee warning ne
void warning()
{
   char warnn[100];
   strcpy(warnn,"Inputan anda kosong, kurang dari   "
   				 "6 karakter atau mengandung karakter"
                "yang tidak diperbolehkan           ");
   textcolor(5);
   textbackground(7);
   for(int x=125, y=45, z=0; warnn[z]!=NULL ; x++, z++)
   {
   	if(x-35==125)
      {
      	x=125;
         y++;
      }
		gotoxy(x ,y);cprintf("%c",warnn[z]);Sleep(50);
   }
   textcolor(15);
   textbackground(0);
   for(int x=125, y=45; x<161 ; x++)
   {
		gotoxy(x ,y+0);cprintf(" ");Sleep(50);
      gotoxy(x ,y+1);cprintf(" ");Sleep(50);
      gotoxy(x ,y+2);cprintf(" ");Sleep(50);
   }
}
void warning2()
{
   char warnn[100];
   strcpy(warnn,"Inputan anda tidak sama");
   textcolor(4);
   textbackground(7);
   for(int x=125, y=45, z=0; warnn[z]!=NULL ; x++, z++)
   {
   	if(x-35==125)
      {
      	x=125;
         y++;
      }
		gotoxy(x ,y);cprintf("%c",warnn[z]);Sleep(50);
   }
   textcolor(15);
   textbackground(0);
   for(int x=125, y=45, z=0; warnn[z]!=NULL ; x++, z++)
   {
   	if(x-35==125)
      {
      	x=125;
         y++;
      }
		gotoxy(x ,y);cprintf(" ");Sleep(50);
   }
}
//////////////////////// F U N G S I  I N P U T  ///////////////////////////////
char* input(int x, int y, int batas, int tipe)
//Fungsi untuk inputan berbatas
//ket. param = x & y : posisi kursor | batas	: max input
//             batas : max input     | tipe=1 untuk print karakter, tipe!=1 untuk print bintang
{
   char name[300];
   int o=0;
	gotoxy(x,y);name[o]=getch();
   while(name[o]!=13){
   	if(name[o]==8)
      {
      	o--;
      	if(o<0)
         {
         	o=0;
         }
         gotoxy(x+o,y);printf(" ");
      }
      else
      {
      	if(tipe==1)
      	{
      		gotoxy(x+o,y);printf("%c",name[o]);
      	}
      	else
	      {
   	      gotoxy(x+o,y);printf("*");
      	}
         o++;
      }
      if(o>batas)
      {
      	o=batas;
         gotoxy(x+batas,y);printf(" ");
      }
      gotoxy(x+o,y);name[o]=getch();
   }name[o]=NULL;
   return name;
}

////////////////////////     V A L I D A S I     ///////////////////////////////
//validasi tambah stock PC
int valPC(int num)
{
	if(num>0 && num<=maxStock || num<stockPC)
   {
   	return num;
   }return -1;
}
//validasi stock PC ada
int valcekPC(int num)
{
	if(num>0 && num<=maxStock && num<=stockPC)
   {
   	return num;
   }return -1;
}
//validasi Angka
int valAngka(char num[30])
{
	for(int x=0; num[x]!=NULL; x++)
	{
      if( num[0]=='0' ||num[x]<48||num[x]>57)
      {
      	return 1;
      }
   }
   return 0;
}
//validasi input user admin
bool valPass(char inPUT[300])
{
   int x;
   for(x=0; inPUT[x]!=NULL; x++)
   {
      if (47<inPUT[x] && inPUT[x]<127 || strlen(inPUT)<6 || strcmp(inPUT,"")==0)
      {
      	return true;
      }
   }
   if(x<5)
   {
   	return true;
   }
   return false;
}
//validasi input password
bool valUser(char inPUT[300])
{
	for(int x=0; inPUT[x]!=NULL; x++)
   {
      if (95>inPUT[x] && inPUT[x]>90 || inPUT[x]!=96 || inPUT[x]>122 || 65>inPUT[x] && inPUT[x]>57
      	 || 34	<inPUT[x] && inPUT[x]<58 && x==0 && inPUT[x]!='_' || strlen(inPUT)<6 || strcmp(inPUT,"")==0
          || inPUT[strlen(inPUT)-1]==' ' || inPUT[strlen(inPUT)-1]=='_' || inPUT[strlen(inPUT)-1]==96
			 || inPUT[x-1]==' ' && inPUT[x]==' ' || inPUT[x-1]=='_' && inPUT[x]=='_' || inPUT[x-1]==96 && inPUT[x]==96)
      {
      	return true;
      }
   }
   return false;
}
//validasi input char paket
bool valPaket(char num[300])
{
	for(int x=0; num[x]!=NULL; x++)
   {
      if(!(num[0]>96 && num[0]<123 || num[0]>64 && num[0]<91) || num[x]>90 && num[x]<95 || num[x]>122 || num[x]<63)
      	{
      		return true;
      	}
   }
   return false;
}
//validasi nama client
int valClient(char num[300])
{
   if(strlen(num)<4)
   {
		for(int x=0; num[x]!=NULL; x++)
   	{
      	if(!(num[0]>96 && num[0]<123 || num[0]>64 && num[0]<91) || num[x]>90 && num[x]<95 || num[x]>122 || num[x]<63)
      	{
      		return 1;
      	}
   	}
   return 2;
   }
   return 0;
}
////////////////////////          C E K          ///////////////////////////////
void cekAscii()
{
	for(int x=0; x<255; x++)
   {
		printf("%d %c\t",x,x);
      if(x%8==7)
      {
   		printf("\n");
      }
   }
}
void cekWarna()
{
   for(int x=0; x<25; x++)
   {
      textbackground(x);
      textcolor(15);
		cprintf("%d ini background",x);
      printf("\n");
      textbackground(0);
      textcolor(x);
      cprintf("%d ini foreground",x);
      printf("\n");
   }
}
void cekData()
{
	//prepareData();
   printf("Nama Admin             : %s\n", gmUser);
   printf("Password Admin         : %s\n", gmPass);
   printf("Stock PC               : %d\n", stockPC);
   for(int j=0; j<5; j++)
   {
   	printf("Paket %d                : %s\n", j, paketPC[j]);
      printf("Harga Paket %d          : %d\n", j, hargaPaket[j]);
      printf("Durasi Paket %d         : %d\n", j, durasi[j]);
   }
   for(int j=0; j<stockPC; j++)
   {
      if(kompi[j].no!=NULL)
      {
   		printf("No PC %d                : %d\n", j, kompi[j].no);
      	printf("User  %d                : %s\n", j, kompi[j].user);
      	printf("Paket %d                : %s\n", j, kompi[j].paket);
         if(kompi[j].cek==true)
         {
				printf("Status %d               : Online\n",j);
         }
			else
         {
				printf("Status %d               : Offline\n",j);
         }
      	printf("Jam Masuk %d            : %d\n", j, kompi[j].jam);
      	printf("Menit Masuk %d          : %d\n", j, kompi[j].menit);
      	printf("Detik Masuk %d          : %d\n", j, kompi[j].detik);
      	printf("Durasi %d               : %d\n", j, kompi[j].durasi);
      	printf("Waktu Keluar %d (detik) : %d\n", j, kompi[j].jamOut);
      }
   }
   //getch();
   //clrscr();
   //login();
}
void bismillah()
{
   int key;
	inTamp=fopen("db_start.txt","r");
   fscanf(inTamp,"%d",&key);
   fclose(inTamp);
   if(key==0)
   {
   	inAdmin=fopen("db_admin.txt","w");
      fprintf(inAdmin,"Admin#123456");
      fclose(inAdmin);
      inStock=fopen("db_stock.txt","w");
      fprintf(inStock,"0");
      fclose(inStock);
      inLaporan=fopen("db_laporan.txt","w");
      fprintf(inLaporan,"0#0");
      fclose(inLaporan);
      inPaket=fopen("db_paket.txt","w");
      fprintf(inPaket,	"Paket 2000#2000#40\n"
      						"Paket 1 Jam#3000#60\n"
                        "Paket 2 Jam#5000#120\n"
                        "Paket 3 Jam#8000#180\n"
                        "Paket 5 Jam#10000#300\n");
      fclose(inPaket);
      inClient=fopen("db_nopc.txt","w+");
      fclose(inClient);
      inClient=fopen("db_client.txt","w+");
      fclose(inClient);
      inBilling=fopen("db_dlaporan.txt","w+");
      fclose(inBilling);
   }
   inTamp=fopen("db_start.txt","w");
   fprintf(inTamp,"1");
   fclose(inTamp);
}