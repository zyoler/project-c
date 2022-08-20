#include <stdio.h>
#include <conio.h>
#include <windows.h>

//    //    //////  //////// //    // //    //  //    //////
///  ///    //      //    // //    // ///  ///  //    //   //
////////    //////  //////// //////// ////////  //    ///////
// // //    //      //    // //    // // // //  //    /////
//    //    //      //    // //    // //    //  //    //  //

///////////////////////Format Aplikasi//////////////////////////////////////////
int lb=40;
int xb=32;
int yb=20;     
//////////////////////////////program///////////////////////////////////////////
void head();               void quizz2(int);
void cover();              void score();
void judul();              void profil();
void menu();               void rank();
void buat();               void search();
void login();              void navigasi();
void beranda();            void go();
void quizz(int);           
///////////////////////////////style////////////////////////////////////////////                         
void sberanda();           void sbuat();
void sprofil();            void squizz();
void smenu();              void sscore();
void ssoal();
/////////////////////////////Lain-lain//////////////////////////////////////////
void kotak(int,int,int,int,int);                        
void kotak2(int,int,int,int,int,int);       
void tulis(int,int,int,char*);
void tulis2(int,int,int,char);               
void ketik(int,char*,int,int,int,int);                                                                       
void notif_box(int,char*,char*,int,int);
void text_box(int,char*,char*,int);
void true_box();
void false_box(char*);
void false_again_box();
void color(int); 
void warna(int,int);
void asci(int,int);
void asci2(int);        
void read_arsip();
////////////////////////////////Kunci///////////////////////////////////////////
int isprima(int);          int faktorial(int);
int kpk(int,int,int);      int hitung(int,int,int,int,int);
int kunci6(int,int,int);   int kunci7(int,int,int);
////////////////////////////////Validasi////////////////////////////////////////
int v_nama(char*);         int v_jk(char*);           
int v_angka(char*);        int v_user(char*);
int v_kosong(char*);       int v_pass(char*);
int v_tgl(char*);          int v_konfir(char*);
int v_hp(char*);           int v_alamat(char*);   
/////////////////////////////Char Global////////////////////////////////////////
char data[100][8][50];     char jawab[50][5];
char to;                   char input_tema[3]="1";                                     
/////////////////////////////Int Global/////////////////////////////////////////
int akun=0;                int angka[100][5];
int index=0;               int bahas;
int kunci[50];             int log=0;
int nilai[100]={0};        int training1=1;
int banyak[100]={0};       int training2=1;
int akun2=0;               int cekk=1;
int profil2=0;             int counter;
int type_quizz;            int cek_soal[10];
/////////////////////////////Warna//////////////////////////////////////////////
int red=12;                int green=10;
int blue=11;               int yellow=14;
int dark_red=4;            int violet=13;
int dark_blue=9;           int black=16; 
int white=15;              
//////////////////////////////Tema//////////////////////////////////////////////                     
int bordir=dark_blue;      int nb_color=red;
int body=dark_blue;        int correct_text=green;
int in_box=white;          int incorrect_text=red;
int main_text=yellow;      int choise=white;            
int second_text=yellow;    int in_text=dark_blue;
int board=blue;            int board2=yellow;
int score_body=white;
//////////////////////////////Arsip/////////////////////////////////////////////
FILE *Fprofil;             FILE *Fscore;            
FILE *Fakun;               FILE *Fbanyak;               
FILE *Fcount;              FILE *Fsearch;               
/////////Main///////////////////////////////////////////////////////////////////
main(){                   //
	//system("color 345"); //
   //warna(1,20);         //
   //asci(1,3);           //
   //int cek;asci2(cek);  //
   //grup();              //
   //sberanda();          //
   //sdetail();           //
   //quizz();             //
   cover();               //
	getch();               //
}                         //
/////////////////////////////////Program////////////////////////////////////////
void judul(){
   color(body);textcolor(second_text);
   gotoxy(3+lb/2,4);cprintf("                                  Q U I Z Z               ");
   gotoxy(3+lb/2,6);cprintf("                      L O G I K A  M A T E M A T I K A    ");
   gotoxy(3+lb/2,8);cprintf("                                                          ");
}
void head(){
	gotoxy(4,5);printf("Akun : %s",data[akun2][0]);
   color(body);
	tulis(4,3,10,"Search : ");color(black);cprintf("                        ");
   color(red);tulis(72+lb,4,10,"1 2 3");
}
void cover(){
	system("color 17");
	textcolor(9);
   int k=475;
   judul();
   gotoxy(29+lb/2,35);printf("Input data from Database...");
   kotak(30+lb/2,30,22,3,12);
   kotak2(31+lb/2,31,20,1,10,100);
   read_arsip();
   tulis(30+lb/2,37,14,"Press any key to continue");
   getch();
   menu();
}
void menu(){
	clrscr();
   if (strcmp(input_tema,"1")==0){
      system("color 97");     
   }else if (strcmp(input_tema,"2")==0){
      system("color C7");
   }else if (strcmp(input_tema,"3")==0){
      system("color D0");
   }
	char pilih;
	smenu();
   judul();
	color(body);tulis(33+lb/2,19,30,"Sudah punya akun??");
   color(choise);tulis(38+lb/2,22,black,"1.Sudah");
   tulis(38+lb/2,27,black,"2.Belum");
   int loop=0;
   do{
   	color(black);tulis(38+lb/2,32,main_text,"Pilih : ");printf(" ");
      gotoxy(46+lb/2,32);pilih=getche();
   	if(pilih=='1'){
   		login();
   	}else if(pilih=='2'){
   		buat();
   	}else{
      	notif_box(1,"Pilih 1 atau 2 !! "," ",in_box,blue);
      }
      loop=1;
   }while(pilih!='1'&&pilih!='2');
}
void buat(){
	training1=0;
   training2=0;
   int cek=0,v=0,h=0,count=0,ver=yb;
   sbuat();
   kotak2(29,18,52,18,board,0); //board
   //navigasi();
   judul();
   	
      for(int index=0;index<8;index++,ver+=2){
      	gotoxy(h+xb+22,ver);color(in_box);cprintf("                         ");
      }
      color(board);
   	tulis(h+xb,v+yb,   main_text,"Nama                : ");
   	tulis(h+xb,v+2+yb, main_text,"Tanggal lahir       : ");
   	tulis(h+xb,v+4+yb, main_text,"Jenis kelamin       : ");
   	tulis(h+xb,v+6+yb, main_text,"Alamat              : ");
   	tulis(h+xb,v+8+yb, main_text,"No.Hp               : ");
   	tulis(h+xb,v+10+yb,main_text,"Buat username       : ");
   	tulis(h+xb,v+12+yb,main_text,"Buat password       : ");
   	tulis(h+xb,v+14+yb,main_text,"Konfirmasi password : ");
      int loop=0;
      do{
         gotoxy(h+xb+22,yb+v);color(in_box);cprintf("                         ");
      	color(in_box);ketik(1,data[akun][0],25,22+xb,32+20+xb,yb+v);
      }while(v_kosong(data[akun][0])==0||v_nama(data[akun][0])==0);
      do{
      	gotoxy(h+xb+22,yb+v+2);color(in_box);cprintf("                         ");
      	color(in_box);ketik(1,data[akun][1],25,22+xb,32+20+xb,yb+v+2);
      }while(v_kosong(data[akun][1])==0||v_tgl(data[akun][1])==0);
      do{
      	gotoxy(h+xb+22,yb+v+4);color(in_box);cprintf("                         ");
      	color(in_box);ketik(1,data[akun][2],25,22+xb,32+20+xb,yb+v+4);

      }while(v_kosong(data[akun][2])==0||v_jk(data[akun][2])==0);
      do{
      	gotoxy(h+xb+22,yb+v+6);color(in_box);cprintf("                         ");
      	color(in_box);ketik(1,data[akun][3],25,22+xb,32+20+xb,yb+v+6);
      }while(v_kosong(data[akun][3])==0||v_alamat(data[akun][3])==0);
      do{
      	gotoxy(h+xb+22,yb+v+8);color(in_box);cprintf("                         ");
      	color(in_box);ketik(1,data[akun][4],25,22+xb,32+20+xb,yb+v+8);
      }while(v_kosong(data[akun][4])==0||v_angka(data[akun][4])==0||v_hp(data[akun][4])==0);
      do{
      	gotoxy(h+xb+22,yb+v+10);color(in_box);cprintf("                         ");
      	color(in_box);ketik(1,data[akun][5],25,22+xb,32+20+xb,yb+v+10);
      }while(v_kosong(data[akun][5])==0||v_user(data[akun][5])==0);
   	do{
         gotoxy(h+xb+22,yb+v+14);color(in_box);cprintf("                         ");
      do{
      	gotoxy(h+xb+22,yb+v+12);color(in_box);cprintf("                         ");
      	color(in_box);ketik(2,data[akun][6],25,22+xb,32+20+xb,yb+v+12);
      }while(v_kosong(data[akun][6])==0||v_pass(data[akun][6])==0);
      do{
      	gotoxy(h+xb+22,yb+v+14);color(in_box);cprintf("                         ");
      	color(in_box);ketik(2,data[akun][7],25,22+xb,32+20+xb,yb+v+14);
      }while(v_kosong(data[akun][7])==0);
   	}while(v_konfir(data[akun][7])==0);
   Fprofil=fopen("profil.txt","a");
   for(int index=0;index<5;index++){
   	fprintf(Fprofil,"%s\n",data[akun][index]);
   }
   fclose(Fprofil);

   Fakun=fopen("akun.txt","a");
      for(int index=5;index<7;index++){
   		fprintf(Fakun,"%s\n",data[akun][index]);
      }
   fclose(Fakun);
   akun++;
   Fcount=fopen("count.txt","w");
   	fprintf(Fcount,"%d",akun);
   fclose(Fcount);
   profil2=akun-1;
   akun2=akun-1;
   printf("Akun ke %d telah dibuat",akun);
   log=1;
   training1=1;
   training2=1;
   beranda();
}
void login(){
	char sandi2[20],name2[20];
   int cek=0;
   int count=0;
   //sbuat();
   
   kotak2(2,1,78+lb,8,body,0); //Judul
   kotak2(30,16,60,24,body,0); //Body
   kotak2(30+2,20,56,17,board,0); //board
   //navigasi();
   read_arsip();
   judul();
   training1=0;
   training2=0;
   do{
   	color(board);
   	tulis(xb+8,yb+6,main_text,"Masukkan username : ");kotak2(xb+28,yb+4,xb-6,3,white,0);//color(in_box);cprintf("                           ");
      color(board);
   	tulis(xb+8,yb+10,main_text,"Masukkan password : ");kotak2(xb+28,yb+8,xb-6,3,white,0);//color(in_box);cprintf("                           ");
      	color(in_box);ketik(1,name2,25,30+xb,30+xb+25,yb+6);
      	color(in_box);ketik(2,sandi2,25,30+xb,30+xb+25,yb+10);

   	for(int a=0;a<=akun;a++){
   		if(strcmp(name2,data[a][5])==0 && strcmp(sandi2,data[a][6])==0&&name2[0]!=NULL){
         	cek=1;
            akun2=a;
            profil2=a;
            log=1;
         	break;
      	}
   	}
      if(cek==0){
         color(blue);
         tulis(xb+14,yb+16,red,"Username atau password salah");Sleep(1000);
         tulis(xb+14,yb+16,red,"                            ");
      	//notif_box(1,"Username atau Password salah "," ",in_box,blue);     
      }
   }while(cek==0);
   training1=0;
   training2=0;
   beranda();
   getch();
}
void beranda(){
	sberanda();
   head();
   navigasi();
   if(training1==1){
   Sleep(1000);
   text_box(1,"Tekan tombol (Home)","untuk ke menu utama",1);
   }

   go();
}
void navigasi(){
	color(choise);
   tulis(10,20,black,"1.Quizz");
   tulis(10,25,black,"2.Profil");
   tulis(10,30,black,"3.Rank");
   if(log==1){
   	tulis(10,35,black,"4.Logout");
   }else{
      tulis(10,35,black,"4.Login");
   }
   tulis(10,40,black,"5.Exit");
   color(black);tulis(15,42,main_text,"");printf(" ");
}
void go(){
   char pilih;
   int count=0;
   color(black);tulis(15,42,main_text,"");textbackground(main_text);cprintf(" ");
   if(training2==1){
   	Sleep(1000);
   	text_box(1,"Tekan tombol (Ctrl+S)","untuk searching",2);
   }
   if(log==1){
   	textbackground(body);tulis(4,3,10,"Search : ");color(black);cprintf("                        ");
   }
   do{

      do{
      gotoxy(15,42);pilih=getche();
      if(pilih=='4'){
      		log=0;
      		menu();
      }
      if(log==0&&pilih!='4'){
   		notif_box(1,"Login terlebih dahulu"," ",in_box,body);
         count=1;
      }else if(log==1){
   		if(pilih=='1'){
   			quizz(1);
   		}else if(pilih=='2'){
      		profil();
   		}else if(pilih=='3'){
      		rank();
   		}else if(pilih=='5'){
            exit(0);
         }else if(pilih==19){
   			search();
   		}
      }
      }while(true);

   }while(count==1);
}
void profil(){
   char pilih;
   int h=0,v=0,tamp=0,a;
   sprofil();
   kotak2(8,23,15,3,main_text,0); //Pilihan
   kotak2(29,18,50,15,board,0); //board
   navigasi();
   color(body);
   read_arsip();
   head();
   color(board);
	tulis(h+xb,v+yb+0, main_text,"Nama            : ");cprintf("%s",data[profil2][0]);
   tulis(h+xb,v+yb+2, main_text,"Tanggal lahir   : ");cprintf("%s",data[profil2][1]);
   tulis(h+xb,v+yb+4, main_text,"Jenis kelamin   : ");cprintf("%s",data[profil2][2]);
   tulis(h+xb,v+yb+6, main_text,"Alamat          : ");cprintf("%s",data[profil2][3]);
   tulis(h+xb,v+yb+8, main_text,"No.Hp           : ");cprintf("%s",data[profil2][4]);
   tulis(h+xb,v+yb+10,main_text,"Nilai terbaru   : ");cprintf("%d",nilai[profil2]);
   tulis(h+xb,v+yb+12,main_text,"Test            : ");cprintf("%dX",banyak[profil2]);
   color(choise);
   profil2=akun2;
   go();
}
void quizz(int t){
   type_quizz=t;
   squizz();
   char pilih_jawaban[1];
   int pilih;
   srand(time(0));
   char lagi;
   nilai[akun2]=100;
/////////////////////////////////Soal 1/////////////////////////////////////////
   counter=0;
   do{
      counter++;
   	if(type_quizz==1){
   		angka[0][0]=rand()%100,angka[0][1]=rand()%100;
         cek_soal[0]++;
   	}
   	kunci[0]=isprima(angka[0][0]);
   	kotak2(8,18,15,3,main_text,0); //Pilihan
   	navigasi();
   	ssoal();
   	color(board);
   	gotoxy(xb,yb);textcolor(main_text);cprintf("No.1");
   	gotoxy(xb,yb+2);textcolor(main_text);cprintf("Apakah angka %d termasuk bilangan Prima?",angka[0][0]);
   	tulis(xb,yb+4,main_text,"1.Ya");
   	tulis(xb,yb+6,main_text,"2.Tidak");
   	color(board2);
      tulis(xb,yb+18,main_text,"Bobot soal : 1 ");textcolor(dark_red);cprintf("%c",3);
   	if(type_quizz==1){
         color(in_box);tulis(xb,yb+10,black,"    ");
         ketik(1,jawab[0],4,xb,xb+4,yb+10);
         if(atoi(jawab[0])!=kunci[0]){
            nilai[akun2]-=10;
            if(counter<2){
               false_box(&lagi);
               if(lagi=='Y'||lagi=='y'){
                  nilai[akun2]-=10;
                  nilai[akun2]+=10;
               }
            }else{
               false_again_box();
            }
         }else{
            true_box();
            lagi='T';
         }
      }else if(type_quizz==2 && cek_soal[0]>0){
   		if(atoi(jawab[0])==kunci[0]){
            gotoxy(xb,yb+18);textcolor(correct_text);cprintf("Jawaban anda : %d",atoi(jawab[0]));
            gotoxy(xb,yb+20);textcolor(correct_text);cprintf("Kunci        : %d",kunci[0]);
         }else{
            gotoxy(xb,yb+18);textcolor(incorrect_text);cprintf("Jawaban anda : %d",atoi(jawab[0]));
            gotoxy(xb,yb+20);textcolor(incorrect_text);cprintf("Kunci        : %d",kunci[0]);
         }
      	getch();
   	}
      if(nilai[akun2]<=0){
      	goto s;
      }
   }while(lagi=='Y'&&counter<2||lagi=='y'&&counter<2);
/////////////////////////////////Soal 2/////////////////////////////////////////
   counter=0;
   do{
      counter++;
   	if(type_quizz==1){
   		angka[1][0]=rand()%10,angka[1][1]=rand()%10,angka[1][2]=rand()%10,angka[1][3]=rand()%10,angka[1][4]=rand()%10;
         cek_soal[1]++;
   	}
   	kunci[1]=hitung(angka[1][0],angka[1][1],angka[1][2],angka[1][3],angka[1][4]);
		ssoal();
      color(board);
   	gotoxy(xb,yb);textcolor(main_text);cprintf("No.2");
   	gotoxy(xb,yb+2);textcolor(main_text);cprintf("Hasil dari %d + %d x %d - %d x %d adalah? ",angka[1][0],angka[1][1],angka[1][2],angka[1][3],angka[1][4]);
   	color(board2);
      tulis(xb,yb+18,main_text,"Bobot soal : 2 ");textcolor(dark_red);cprintf("%c",3);
   	if(type_quizz==1){
         color(in_box);tulis(xb,yb+10,black,"    ");
         ketik(1,jawab[1],4,xb,xb+4,yb+10);
         if(atoi(jawab[1])!=kunci[1]){
            nilai[akun2]-=20;
            if(counter<2){
               false_box(&lagi);
               if(lagi=='Y'||lagi=='y'){
                  nilai[akun2]-=10;
                  nilai[akun2]+=20;
               }
            }else{
               false_again_box();
            }
         }else{
            true_box();
            lagi='T';
         }
      }else if(type_quizz==2 && cek_soal[1]>0){
   		if(atoi(jawab[1])==kunci[1]){
   			gotoxy(xb,yb+18);textcolor(correct_text);cprintf("Jawaban anda : %d",atoi(jawab[1]));
            gotoxy(xb,yb+20);textcolor(correct_text);cprintf("Kunci        : %d",kunci[1]);
   		}else{
   			gotoxy(xb,yb+18);textcolor(incorrect_text);cprintf("Jawaban anda : %d",atoi(jawab[1]));
            gotoxy(xb,yb+20);textcolor(incorrect_text);cprintf("Kunci        : %d",kunci[1]);
   		}
      	getch();
   	}
      if(nilai[akun2]<=0){
      	goto s;
      }
   }while(lagi=='Y'&&counter<2||lagi=='y'&&counter<2);
/////////////////////////////////Soal 3/////////////////////////////////////////
   counter=0;
   do{
      counter++;
   	if(type_quizz==1){
   		angka[2][0]=rand()%8+2,angka[2][1]=rand()%8+2,angka[2][2]=rand()%8+1;
         cek_soal[2]++;
   	}
   	kunci[2]=kpk(angka[2][0],angka[2][1],angka[2][2]);
   	ssoal();
      color(board);
   	gotoxy(xb,yb);textcolor(main_text);cprintf("No.3");
   	gotoxy(xb,yb+2);textcolor(main_text);cprintf("Jika a pergi kuliah setiap %d hari sekali sedangkan b setiap %d hari",angka[2][0],angka[2][1]);
   	gotoxy(xb,yb+4);textcolor(main_text);cprintf("sekali dan mereka telah bertemu di Kampus pada hari ke %d, pada",angka[2][2]);
   	gotoxy(xb,yb+6);textcolor(main_text);cprintf("hari ke berapa mereka akan bertemu kembali?");
   	color(board2);
      tulis(xb,yb+18,main_text,"Bobot soal : 3 ");textcolor(dark_red);cprintf("%c",3);
   	if(type_quizz==1){
         color(in_box);tulis(xb,yb+10,black,"    ");
         ketik(1,jawab[2],4,xb,xb+4,yb+10);
         if(atoi(jawab[2])!=kunci[2]){
            nilai[akun2]-=30;
            if(counter<2){
               false_box(&lagi);
               if(lagi=='Y'||lagi=='y'){
                  nilai[akun2]-=10;
                  nilai[akun2]+=30;
               }
            }else{
               false_again_box();
            }
         }else{
            true_box();
            lagi='T';
         }
      }
      else if(type_quizz==2 && cek_soal[2]>0){
   		if(atoi(jawab[2])==kunci[2]){
            gotoxy(xb,yb+18);textcolor(correct_text);cprintf("Jawaban anda : %d",atoi(jawab[2]));
            gotoxy(xb,yb+20);textcolor(correct_text);cprintf("Kunci        : %d",kunci[2]);
         }else{
            gotoxy(xb,yb+18);textcolor(incorrect_text);cprintf("Jawaban anda : %d",atoi(jawab[2]));
            gotoxy(xb,yb+20);textcolor(incorrect_text);cprintf("Kunci        : %d",kunci[2]);
         }
      	getch();
   	}
      if(nilai[akun2]<=0){
      	goto s;
      }
   }while(lagi=='Y'&&counter<2||lagi=='y'&&counter<2);
/////////////////////////////////Soal 4/////////////////////////////////////////
   counter=0;
   do{
      counter++;
      if(type_quizz==1){
   	  angka[3][0]=rand()%5+5,angka[3][1]=rand()%5+2;
        cek_soal[3]++;
      }
      if (angka[3][0]<=angka[3][1]){
         angka[3][0]+=3;
      }
      kunci[3]=faktorial(angka[3][0])/faktorial(angka[3][1]);
      ssoal();
      color(board);
      gotoxy(xb,yb);textcolor(main_text);cprintf("No.4");
      gotoxy(xb,yb+2);textcolor(main_text);cprintf("Berapakah nilai dari %d! / %d! ?? ",angka[3][0],angka[3][1]);
      color(board2);
      tulis(xb,yb+18,main_text,"Bobot soal : 3 ");textcolor(dark_red);cprintf("%c",3);
      if(type_quizz==1){
         color(in_box);tulis(xb,yb+10,black,"    ");
         ketik(1,jawab[3],4,xb,xb+4,yb+10);
         if(atoi(jawab[3])!=kunci[3]){
            nilai[akun2]-=30;
            if(counter<2){
               false_box(&lagi);
               if(lagi=='Y'||lagi=='y'){
                  nilai[akun2]-=10;
                  nilai[akun2]+=30;
               }
            }else{
               false_again_box();
            }
         }else{
            true_box();
            lagi='T';
         }
      }
      if(type_quizz==2 && cek_soal[3]>0){
   	  if(atoi(jawab[3])==kunci[3]){
            gotoxy(xb,yb+18);textcolor(correct_text);cprintf("Jawaban anda : %d",atoi(jawab[3]));
            gotoxy(xb,yb+20);textcolor(correct_text);cprintf("Kunci        : %d",kunci[3]);
         }else{
            gotoxy(xb,yb+18);textcolor(incorrect_text);cprintf("Jawaban anda : %d",atoi(jawab[3]));
            gotoxy(xb,yb+20);textcolor(incorrect_text);cprintf("Kunci        : %d",kunci[3]);
         }
         getch();
      }
      if(nilai[akun2]<=0){
   	  goto s;
      }
   }while(lagi=='Y'&&counter<2||lagi=='y'&&counter<2);
/////////////////////////////////Soal 5/////////////////////////////////////////
   counter=0;
   do{
      counter++;
      if(type_quizz==1){
   	  angka[4][0]=rand()%5+1,angka[4][1]=rand()%7+6,angka[4][2]=rand()%60+60;
        cek_soal[4]++;
      }
      kunci[4]=(angka[4][1]-angka[4][0])*angka[4][2];
      ssoal();
      color(board);
      gotoxy(xb,yb);textcolor(main_text);cprintf("No.5");
      gotoxy(xb,yb+2);textcolor(main_text);cprintf("Seorang anak ingin pergi ke Bandung, dia berangkat pukul %d am,jika",angka[4][0]);
      gotoxy(xb,yb+4);textcolor(main_text);cprintf("bus melaju dengan kecepatan %d km/jam dan dia sampai di Bandung",angka[4][2]);
      gotoxy(xb,yb+6);textcolor(main_text);cprintf("pukul %d am, berapa jarak dari rumahnya ke Bandung?",angka[4][1]);
      color(board2);
      tulis(xb,yb+18,main_text,"Bobot soal : 3 ");textcolor(dark_red);cprintf("%c",3);
      if(type_quizz==1){
         color(in_box);tulis(xb,yb+10,black,"    ");
         ketik(1,jawab[4],4,xb,xb+4,yb+10);
         if(atoi(jawab[4])!=kunci[4]){
            nilai[akun2]-=30;
            if(counter<2){
               false_box(&lagi);
               if(lagi=='Y'||lagi=='y'){
                  nilai[akun2]-=10;
                  nilai[akun2]+=20;
               }
            }else{
               false_again_box();
            }
         }else{
            true_box();
            lagi='T';
         }
      }else if(type_quizz==2 && cek_soal[4]>0){
   	  if(atoi(jawab[4])==kunci[4]){
            gotoxy(xb,yb+18);textcolor(correct_text);cprintf("Jawaban anda : %d",atoi(jawab[4]));
            gotoxy(xb,yb+20);textcolor(correct_text);cprintf("Kunci        : %d",kunci[4]);
         }else{
            gotoxy(xb,yb+18);textcolor(incorrect_text);cprintf("Jawaban anda : %d",atoi(jawab[4]));
            gotoxy(xb,yb+20);textcolor(incorrect_text);cprintf("Kunci        : %d",kunci[4]);
         }getch();
      }
      if(nilai[akun2]<=0){
        goto s;
      }
   }while(lagi=='Y'&&counter<2||lagi=='y'&&counter<2);
/////////////////////////////////Soal 6/////////////////////////////////////////
   counter=0;
   do{
      counter++;
      if(type_quizz==1){
         angka[5][0]=rand()%20+140,angka[5][1]=rand()%30+60,angka[5][2]=rand()%70+60;
         cek_soal[5]++;
         if(angka[5][1]>=angka[5][2]){
            angka[5][2]+=30;
         }
         
      }
      kunci[5]=kunci6(angka[5][2],angka[5][1],angka[5][0]);
      ssoal();
      color(board);
      gotoxy(xb,yb);textcolor(main_text);cprintf("No.6");
      gotoxy(xb,yb+2);textcolor(main_text);cprintf("Sebuah truk melaju dengan kecepatan %d Km/jam, di belakangnya",angka[5][1]);
      gotoxy(xb,yb+4);textcolor(main_text);cprintf("mobil sedan melaju dengan kecepatan %d Km/jam, jika jarak mobil",angka[5][2]);
      gotoxy(xb,yb+6);textcolor(main_text);cprintf("dan truk adalah %d Km/jam, minimal butuh berapa jam agar mobil",angka[5][0]);
      gotoxy(xb,yb+8);textcolor(main_text);cprintf("dapat menyusul truk ?");
      color(board2);
      tulis(xb,yb+18,main_text,"Bobot soal : 3 ");textcolor(dark_red);cprintf("%c",3);
      if(type_quizz==1){
         color(in_box);tulis(xb,yb+10,black,"    ");
         ketik(1,jawab[5],4,xb,xb+4,yb+10);
         if(atoi(jawab[5])!=kunci[5]){
            nilai[akun2]-=30;
            if(counter<2){
               false_box(&lagi);
               if(lagi=='Y'||lagi=='y'){
                  nilai[akun2]-=10;
                  nilai[akun2]+=20;
               }
            }else{
               false_again_box();
            }
         }else{
            true_box();
            lagi='T';
         }
      }else if(type_quizz==2 && cek_soal[5]>0){
        if(atoi(jawab[5])==kunci[5]){
            gotoxy(xb,yb+18);textcolor(correct_text);cprintf("Jawaban anda : %d",atoi(jawab[5]));
            gotoxy(xb,yb+20);textcolor(correct_text);cprintf("Kunci        : %d",kunci[5]);
         }else{
            gotoxy(xb,yb+18);textcolor(incorrect_text);cprintf("Jawaban anda : %d",atoi(jawab[5]));
            gotoxy(xb,yb+20);textcolor(incorrect_text);cprintf("Kunci        : %d",kunci[5]);
         }
        getch();
      }
      if(type_quizz==2 ){
         for(int a=0;a<10;a++){
            cek_soal[a]=0;
         }
      }
      if(nilai[akun2]<=0){
        goto s;
      }

   }while(lagi=='Y'&&counter<2||lagi=='y'&&counter<2);
/////////////////////////////////Soal 7/////////////////////////////////////////   
   counter=0;
   do{
      counter++;
      if(type_quizz==1){
         angka[6][0]=rand()%5+40,angka[6][1]=rand()%5+40,angka[6][2]=rand()%3+2;
         cek_soal[6]++;
         if(angka[6][1]<=angka[6][2])
           angka[6][1]+=10;
      }
      kunci[6]=kunci7(angka[6][0],angka[6][1],angka[6][2]);
      ssoal();
      color(board);
      gotoxy(xb,yb);textcolor(main_text);cprintf("No.7");
      gotoxy(xb,yb+2);textcolor(main_text);cprintf("%d Siswa memiliki rata-rata nilai %d, kemudian datang 1 siswa, jika",angka[6][2],angka[6][0]);
      gotoxy(xb,yb+4);textcolor(main_text);cprintf("rata-rata sekarang menjadi %d, berapakah nilai 1 siswa tersebut? ",angka[6][1]);
      color(board2);
      tulis(xb,yb+18,main_text,"Bobot soal : 3 ");textcolor(dark_red);cprintf("%c",3);
      if(type_quizz==1){
         color(in_box);tulis(xb,yb+10,black,"    ");
         ketik(1,jawab[6],4,xb,xb+4,yb+10);
         if(atoi(jawab[6])!=kunci[6]){
            nilai[akun2]-=30;
            if(counter<2){
               false_box(&lagi);
               if(lagi=='Y'||lagi=='y'){
                  nilai[akun2]-=10;
                  nilai[akun2]+=20;
               }
            }else{
               false_again_box();
            }
         }else{
            true_box();
            lagi='T';
         }
         s:
         if(nilai[akun2]<=0){
            notif_box(1,"Point anda habis"," ",in_box,body);
         }
         if(lagi=='T'||nilai[akun2]<=0){
            if(nilai[akun2]<0){
               nilai[akun2]=0;
            }
            Fscore=fopen("score.txt","w");
               fprintf(Fscore," \n");
            fclose(Fscore);

            for(int a=0;a<=akun;a++){
               Fscore=fopen("score.txt","a");
                  fprintf(Fscore,"%d\n",nilai[a]);
               fclose(Fscore);
            }

            banyak[akun2]++;
            Fbanyak=fopen("banyak.txt","w");
               fprintf(Fbanyak," \n");
            fclose(Fbanyak);
            for(int a=0;a<=akun;a++){
               Fbanyak=fopen("banyak.txt","a");
                  fprintf(Fbanyak,"%d\n",banyak[a]);
               fclose(Fbanyak);
            }
            
         }
         score();

      }else if(type_quizz==2 && cek_soal[6]>0){
        if(atoi(jawab[6])==kunci[6]){
            gotoxy(xb,yb+18);textcolor(correct_text);cprintf("Jawaban anda : %d",atoi(jawab[6]));
            gotoxy(xb,yb+20);textcolor(correct_text);cprintf("Kunci        : %d",kunci[6]);
         }else{
            gotoxy(xb,yb+18);textcolor(incorrect_text);cprintf("Jawaban anda : %d",atoi(jawab[6]));
            gotoxy(xb,yb+20);textcolor(incorrect_text);cprintf("Kunci        : %d",kunci[6]);
         }
        go();
      }
   }while(lagi=='Y'&&counter<2||lagi=='y'&&counter<2);
   
}
void score(){
	char pilih;
   int x_score=35,y_score=20;
   kotak2(x_score,y_score,56,15,score_body,0);
   navigasi();
   head();

   color(score_body);tulis((x_score*2+56)/2-10+5,y_score+2,black,"Nilai : ");
   for(int per=0;per<=nilai[akun2];per++){
   	color(black);
      if(per<60){
   		gotoxy(x_score+2+25+5,y_score+2);textcolor(incorrect_text);cprintf("%d",per);Sleep(10);
      }else{
         gotoxy(x_score+2+25+5,y_score+2);textcolor(green);cprintf("%d",per);Sleep(10);
      }
   }
   for (int i = 0; i < nilai[akun2]; ++i){
      printf("%c", i);
   }
   color(black);
   tulis((x_score*2+56)/2-4,y_score+8,main_text," 1.Detail");
   tulis((x_score*2+56)/2-8,y_score+10,main_text," 2.Kerjakan ulang ");
   //tulis((x_score*2+56)/2-4,y_score+12,main_text,"3.");
   tulis((x_score*2+56)/2-1,y_score+14,in_box," ");
   gotoxy((x_score*2+56)/2-1,y_score*2+14);textcolor(main_text);pilih=getche();
   if(pilih=='1'){
   	nilai[akun2]=0;
   	quizz(2);
   }else if(pilih=='2'){
   	nilai[akun2]=0;
   	quizz(1);
   }
}
void rank(){
   char d_rank[100][100],tamp2[100];
   int n_rank[100],tamp,pilih;
   sprofil();
   kotak2(8,28,15,3,main_text,0); 
   kotak2(29,18,50,22,board,0); //board
   navigasi();
   read_arsip();
   head();
   for(int a=0;a<=akun;a++){
   	strcpy(d_rank[a],data[a][0]);
      n_rank[a]=nilai[a];
   }
   for(int a=0;a<=akun;a++){
   	for(int b=a;b<=akun;b++){
      	if(n_rank[a]<n_rank[b]){
         	tamp=n_rank[a];
            n_rank[a]=n_rank[b];
            n_rank[b]=tamp;
            strcpy(tamp2,d_rank[a]);
            strcpy(d_rank[a],d_rank[b]);
            strcpy(d_rank[b],tamp2);
         }
   	}
   }
   for(int a=0;a<10;a++){
      color(board);
   	gotoxy(xb,a*2+yb);cprintf("%d. %s",a+1,d_rank[a]);
      gotoxy(30+lb,a*2+yb);cprintf("%d",n_rank[a]);
   }
   go();
}
void search(){
	int cek=1;
	char cari[20],coba[20];
   color(body);
   gotoxy(4,5);printf("Akun : %s",data[akun2][0]);
   do{
	tulis(4,3,10,"Search : ");color(in_box);cprintf("                        ");
   ketik(1,cari,23,13,13+23,3);
   Fsearch=fopen("search.txt","w");
   	fprintf(Fsearch,"%s",cari);
   fclose(Fsearch);
   Fsearch=fopen("search.txt","r");
   	fprintf(Fsearch,"%[^\n]\n",&cari);
   fclose(Fsearch);
   int a=0;
   for(;a<=akun;a++){
   	if(strcmp(cari,data[a][0])==0||strcmp(cari,strupr(data[a][0]))==0||strcmp(cari,strlwr(data[a][0]))==0){
   		profil2=a;
         cek=1;
         break;
      }else{
      	cek=0;
      }
   }
   if(cek==0){
   	notif_box(1,"Nama tidak ditemukan"," ",in_box,body);
   }
   }while(cek==0);
   profil();
}
//////////////////////////////////////////////////////////////////////////
void true_box(){
   int x=20,y=15;
	kotak2(70-x,36-y,36,5,green,0);
   color(green);tulis((89-x)-18/2,39-y,main_text,"Jawaban anda benar");Sleep(1000);
}
void false_box(char *in){
   int x=20,y=15;
   kotak2(70-x,36-y,36,9,red,0);
   kotak2(86-x,41-y,2,1,in_box,0);
         color(incorrect_text);tulis((89-x)-18/2,38-y,main_text,"Jawaban anda salah");
         color(incorrect_text);tulis((89-x)-23/2,40-y,main_text,"Kesempatan kedua(Y/T)??");
   int cek=0;
   do{
      color(in_box);ketik(1,in,2,67,67+2,27);
      if(strcmp(in,"Y")!=0&&strcmp(in,"y")!=0&&strcmp(in,"T")!=0&&strcmp(in,"t")!=0){
         cek=1;
         gotoxy(81-x,29);textbackground(incorrect_text);textcolor(main_text);cprintf("'Y' atau 'T' !!");Sleep(1000);
         gotoxy(81-x,29);textbackground(incorrect_text);cprintf("               ");
         textbackground(in_box);gotoxy(87-x,27);cprintf("  ");
      }else{
         cek=0;
      }
   }while(cek==1);
   //kotak2(70-x,36-y,36,9,body,0);
}
void false_again_box(){
   int x=20,y=15;
   kotak2(70-x,36-y,36,5,red,0);
   color(red);tulis((89-x)-18/2,39-y,main_text,"Anda salah lagi");Sleep(1000);
   kotak2(70-x,36-y,36,5,body,0);

}
void notif_box(int type,char *pesan,char *pesan2,int clr,int clr2){
	kotak2(lb+44,36,30,5,nb_color,0); 
   if(type==1){
   	if(strcmp(pesan2," ")==0){
   		tulis(lb+60-strlen(pesan)/2,39,main_text,pesan);
      }else{
      	tulis(lb+60-strlen(pesan)/2,38,main_text,pesan);
         tulis(lb+60-strlen(pesan2)/2,40,main_text,pesan2);
      }
   }
   Sleep(1000);
   kotak2(lb+44,36,30,5,clr2,0);
}
void text_box(int type,char *pesan,char *pesan2,int clr){
   char in;
	kotak2(84-30,36-15,30,5,green,0); 
   if(type==1){
   	if(strcmp(pesan2," ")==0){
   		tulis(100-strlen(pesan)/2,39-15,main_text,pesan);
      }else{
      	tulis((100-30)-strlen(pesan)/2,38-15,main_text,pesan);
         tulis((100-30)-strlen(pesan2)/2,40-15,main_text,pesan2);
      }
   }
   do{
   	in=getch();
      if(in==71&&clr==1){
   		kotak2(84-30,36-15,30,5,body,0);
         training1=0;
      	go();
   	}
   	if(in==19&&clr==2){
   		kotak2(84-30,36-15,30,5,body,0);
         training2=0;
      	search();
   	}
   }while(in!=19&&in!=71||in!=71&&clr==2||in!=19&&clr==1);
}

/////////////////////////Validasi//////////////////////////////////////////////
int v_kosong(char input[]){
	int valid;
   if(strcmp(input,"")==0){
      notif_box(1,"Tidak boleh kosong"," ",in_box,body);return 0;
   }else if(input[0]==' '){
         notif_box(1,"Karakter pertama","tidak boleh spasi",in_box,body);return 0;
   }else{
   	return 1;
   }
}
int v_nama(char input[]){
   int valid=1;

   if(!(input[0]>='A'&& input[0]<='Z' || input[0]>='a'&& input[0]<='z')){
      notif_box(1,"Karakter pertama harus","berupa huruf",in_box,body);return 0;  
   }
   if(input[strlen(input)-1]==' '){
      notif_box(1,"Karakter terakhir tidak","boleh spasi",in_box,body);return 0;
   }
   for(int a=0;input[a]!=NULL;a++){
         if(input[a]==' ' && input[a-1]==' '){
            notif_box(1,"Tidak boleh ada dua","spasi berurutan",in_box,body);return 0;
         }
         if(input[a]>='A'&& input[a]<='Z' || input[a]>='a'&& input[a]<='z' || input[a]==' ' || input[a]=='.' || input[a]==',' || input[a]=='\''){
            valid=1;
         }else{
            notif_box(1,"Invalid karakter"," ",in_box,body);return 0;
         }
   }return valid;
}
int v_tgl(char input[]){
   int valid=1;
   for(int a=0;input[a]!=NULL;a++){
      if(a==2||a==5)continue;
      if(input[a]<'0'||input[a]>'9'){
         notif_box(1,"Input harus berupa angka"," ",in_box,body);return 0;
      }
   }
   if(strlen(input)!=10 && strlen(input)>0 || input[2]!='-' || input[5]!='-'){
      notif_box(1,"Format (DD-MM-YYYY)"," ",in_box,body);return 0;
   }else if(input[0]>'3' || input[0]=='3' && input[1]>'1'){
      notif_box(1,"Tanggal maksimal sampai 31"," ",in_box,body);return 0;
   }else if(input[3]>'1' || input[3]=='1' && input[4]>'2'){
      notif_box(1,"Bulan maksimal sampai 12"," ",in_box,body);return 0;
   }else if(input[0]=='0' && input[1]=='0'){
      notif_box(1,"Tanggal tidak boleh 0"," ",in_box,body);return 0;
   }else if(input[3]=='0' && input[4]=='0'){
      notif_box(1,"Bulan tidak boleh 0"," ",in_box,body);return 0;
   }else if(input[3]=='0' && input[4]>'2' && input[0]=='2' && input[1]>'9'){
      notif_box(1,"Tanngal dan bulan","tidak sesuai",in_box,body);return 0;
   }else if(input[3]=='0' && (input[4]>'2' || input[4]>'4' || input[4]>'6' || input[4]>'9') && input[0]=='3' && input[1]=='1'){
      notif_box(1,"Tanngal dan bulan","tidak sesuai",in_box,body);return 0;
   }else if(input[3]=='1' && input[4]=='1' && input[0]=='3' && input[1]=='1'){
      notif_box(1,"Tanngal dan bulan","tidak sesuai",in_box,body);return 0;
   }else if(input[strlen(input)-1]==' '){
      notif_box(1,"Karakter terakhir tidak","boleh spasi",in_box,body);return 0;
   }
   return valid;
}
int v_jk(char input[]){
   if(strcmp(input,"L")!=0&&strcmp(data[akun][2],"P")!=0&&strcmp(input,"")!=0){
      notif_box(1,"Cukup ketikkan","P atau L (kapital)",in_box,body);
      return 0;
   }else{
      return 1;
   }
}
int v_alamat(char input[]){
   int valid=1;
   if(!(input[0]>='A'&& input[0]<='Z' || input[0]>='a'&& input[0]<='z')){
      notif_box(1,"Karakter pertama harus","berupa huruf",in_box,body);return 0;  
   }
   if(input[strlen(input)-1]==' '){
      notif_box(1,"Karakter terakhir tidak","boleh spasi",in_box,body);return 0;
   }
   for(int a=0;input[a]!=NULL;a++){
         if(input[a]==' ' && input[a-1]==' '){
            notif_box(1,"Tidak boleh ada dua","spasi berurutan",in_box,body);return 0;
         }
         if(input[a]>='A'&& input[a]<='Z' || input[a]>='a'&& input[a]<='z' || input[a]=='.' ||  input[a]==' '){
            valid=1;
         }else if(input[a]==',' || input[a]>='0' && input[a]<='9' || input[a]==39){
            valid=1;
         }else{
            notif_box(1,"Invalid karakter"," ",in_box,body);return 0;
         }
   }return valid;
}
int v_angka(char input[]){
	int valid;
	for(int a=0;input[a]!=NULL;a++){
   	if(input[a]<'0'||input[a]>'9'){
         notif_box(1,"Input harus berupa angka","tanpa spasi",in_box,body);
      	return 0;
      }else{
      	valid=1;
      }
   }
   return valid;
}
int v_hp(char input[]){
   int valid;
	if(strlen(input)<11||strlen(input)>13&&strlen(input)>0){
   	notif_box(1,"Jumlah digit dari 11-13"," ",in_box,body);
		return 0;
   }else if(input[0]!='0'||input[1]!='8'&&strlen(input)>0){
      notif_box(1,"Nomer Hp harus diawali (08)"," ",in_box,body);
		return 0;
   }else if(input[2]!='1' && input[2]!='2' && input[2]!='3' && input[2]!='5' && input[2]!='7' && input[2]!='9'){
      notif_box(1,"Nomer tidak valid"," ",in_box,body);
      return 0;
   }else{
   	valid=1;
   }
   return valid;
}
int v_user(char input[]){
   int valid=1;
	int a=0;
   for(int a=0;input[a]!=NULL;a++){
   	if((input[a]>='A'&& input[a]<='Z') || (input[a]>='a'&& input[a]<='z') ||input[a]>='0'&&input[a]<='9'){
         valid=1;
      }else{
      	notif_box(1,"Input harus berupa huruf dan","angka, tanpa spasi",in_box,body);
      	return 0;
      }
   }
   for(;a<akun;a++){
   	if(strcmp(input,data[a][5])==0){
         notif_box(1,"Username sudah digunakan"," ",in_box,body);
         valid=0;
         break;
      }else{
      	valid=1;
      }
   }
   return valid;
}
int v_pass(char input[]){
	int valid;
   for(int a=0;input[a]!=NULL;a++){
   	if((input[a]>='A'&& input[a]<='Z') || (input[a]>='a'&& input[a]<='z') ||input[a]>='0'&&input[a]<='9'){
         valid=1;
      }else{
      	notif_box(1,"Input harus berupa huruf dan","angka, tanpa spasi",in_box,body);
      	return 0;
      }
   }
   if(strlen(input)<8||strlen(input)>12&&strlen(input)>0){
   	notif_box(1,"Jumlah digit dari 8-12"," ",in_box,body);
		return 0;
   }
   return valid;
}
int v_konfir(char input[]){
    int valid=0;
    if(strcmp(data[akun][6],data[akun][7])==0){
    	valid=1;
    }else{
    	notif_box(1,"Password dan konfirmasi","tidak cocok !!!",in_box,body);
    	valid=0;
    }
    return valid;
}

///////////////Read_Arsip/////////////////////////////
void read_arsip(){                                  //  
   Fcount=fopen("count.txt","r");                   //
   	fscanf(Fcount,"%d",&akun);                    //
   fclose(Fcount);                                  //
                                                    //
   Fprofil=fopen("profil.txt","r");                 //
   	for(int b=0;b<akun;b++){                      //
      	for(int a=0;a<5;a++){                      //
   			fscanf(Fprofil,"%[^\n]\n",&data[b][a]); //
      	}                                          //
      }                                             //
   fclose(Fprofil);                                 //
                                                    //
   Fakun=fopen("akun.txt","r");                     //
      for(int a=0;a<=akun;a++){                     //
   		fscanf(Fakun,"%s",&data[a][5]);            //
         fscanf(Fakun,"%s",&data[a][6]);            //
      }                                             //
   fclose(Fakun);                                   //
                                                    //
   Fbanyak=fopen("banyak.txt","r");                 //
      for(int a=0;a<=akun;a++){                     //
         fscanf(Fbanyak,"%d",&banyak[a]);           //
      }                                             //
   fclose(Fbanyak);                                 //
                                                    //
   Fscore=fopen("score.txt","r");                   //
      for(int a=0;a<=akun;a++){                     //
      	fscanf(Fscore,"%d",&nilai[a]);             //
      }                                             //
   fclose(Fscore);                                  //
                                                    //                                                 //
}                                                   //
//////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
void tulis(int x,int y,int c,char* d){
	gotoxy(x,y);textcolor(c);cprintf("%s",d);
}
void ketik(int type,char arr[],int batas,int left,int right,int top){
   int x=left,y=top;
   index=0;
   do{
   	textcolor(in_text);gotoxy(x,y);arr[index]=getche();index++;x++;
      if(type==2&&arr[index-1]==9){
      	arr[index-1]=NULL;
      	cekk=0;
         break;
      }
      if(arr[index-1]==19&&log==1){
         x--;
         index--;
         gotoxy(x,y);textbackground(in_box);cprintf(" ");
      	search();
      }
      if(arr[index-1]==71){
         x--;
         index--;
         gotoxy(x,y);textbackground(in_box);cprintf(" ");
      	if(log==1){
            go();
         }else{
            menu();
         }
      }
      if(index>=batas && arr[index-1]!=8 && arr[index-1]!=13){
      	x--;
         index--;
         gotoxy(x,y);textbackground(in_box);cprintf(" ");
      }else if(arr[index-1]==13){
      	arr[index-1]=NULL;
         break;

      }
      else if(arr[index-1]==8){
         x-=2;
         index-=2;
         if(index<0){
         	x++;
            index++;
         }
         gotoxy(x,y);textbackground(in_box);cprintf(" ");

      }else if(type==2){
         if(arr[index-1]==32){
            gotoxy(x-1,y);textbackground(in_box);cprintf(" ");   
         }else{
            gotoxy(x-1,y);textbackground(in_box);cprintf("*");
         }
      }
	}while(arr[index-1]!=13);
   index=0;
}
void tulis2(int x,int y,int c,char d){
	gotoxy(x,y);textcolor(c);cprintf("%c",d);
}
void color(int bg){
	textcolor(14);textbackground(bg);
}
///////////////////////////////////Style////////////////////////////////////////
void kotak (int P_awal,int L_awal,int panjang,int lebar,int bg){
	for(int a=1;a<=lebar;a++){
		for(int b=1;b<=panjang;b++){
      	if(a==1||b==1||a==lebar||b==panjang){
      		gotoxy(b+P_awal,a+L_awal);textcolor(bordir);cprintf("%c",475);
      	}else{
         	gotoxy(b+P_awal,a+L_awal);textbackground(bg);cprintf(" ");
         }
      }
      if(a!=lebar)
      	printf("\n");
      else
      	gotoxy(panjang/2,lebar/2);
	}
}
void kotak2 (int P_awal,int L_awal,int panjang,int lebar,int bg,int sleep){
	for(int a=1;a<=lebar;a++){
		for(int b=1;b<=panjang;b++){
      	gotoxy(b+P_awal,a+L_awal);textbackground(bg);cprintf(" ");Sleep(sleep);
      }
      if(a!=lebar)
      	printf("\n");
      else
      	gotoxy(panjang/2,lebar/2);
	}
}
void sberanda(){
   kotak2(2,1,78+lb,8,body,0); //Judul
   kotak2(27,16,70+lb-21,26,body,0); //Body
   kotak2(69+lb,2,9,4,red,0); //Logo
   kotak2(6,16,19,26,body,0); //Menu
   kotak2(8,18,15,3,choise,0); //Pilihan
   kotak2(8,23,15,3,choise,0); //Pilihan
   kotak2(8,28,15,3,choise,0); //Pilihan
   kotak2(8,33,15,3,choise,0); //Pilihan
   kotak2(8,38,15,3,choise,0); //Pilihan
}
void sprofil(){
   kotak2(2,1,78+lb,8,body,0); //Judul
   kotak2(27,16,70+lb-21,26,body,0); //Body
   kotak2(69+lb,2,9,4,red,0); //Logo
   kotak2(6,16,19,26,body,0); //Menu
   kotak2(8,18,15,3,choise,0); //Pilihan
   kotak2(8,23,15,3,choise,0); //Pilihan
   kotak2(8,28,15,3,choise,0); //Pilihan
   kotak2(8,33,15,3,choise,0); //Pilihan
   kotak2(8,38,15,3,choise,0); //Pilihan

}
void smenu(){
   kotak2(2,1,78+lb,8,body,0); //Judul
   kotak2(46,16,lb-10,20,body,0); //Body
   kotak2(31+lb/2,20,20,3,choise,0); //Pilihan
   kotak2(31+lb/2,25,20,3,choise,0); //Pilihan
   kotak2(35+lb/2,30,12,3,black,0); //Select
}
void sbuat(){
   kotak2(2,1,78+lb,8,body,0); //Judul
   kotak2(10,16,85+lb-21,26,body,0); //Body
   //kotak2(6,16,19,26,body,0); //Menu
   //kotak2(8,18,15,3,choise,0); //Pilihan
   //kotak2(8,23,15,3,choise,0); //Pilihan
   //kotak2(8,28,15,3,choise,0); //Pilihan
   //kotak2(8,33,15,3,choise,0); //Pilihan
   //kotak2(8,38,15,3,choise,0); //Pilihan
}
void squizz(){
   kotak2(2,1,78+lb,8,body,0); //Judul
   kotak2(27,16,70+lb-21,26,body,0); //Body
   kotak2(69+lb,2,9,4,red,0); //Logo
   kotak2(6,16,19,26,body,0); //Menu
   kotak2(8,18,15,3,choise,0); //Pilihan
   kotak2(8,23,15,3,choise,0); //Pilihan
   kotak2(8,28,15,3,choise,0); //Pilihan
   kotak2(8,33,15,3,choise,0); //Pilihan
   kotak2(8,38,15,3,choise,0); //Pilihan
}
void ssoal(){
   kotak2(27,16,70,26,body,0); //body
   kotak2(29,18,70,15,board,0); //board
   kotak2(29,36,35,5,board2,0); //board
   head();
      if(type_quizz==1){
         for(int a=0;a<10;a++){
            textbackground(main_text);textcolor(black);gotoxy(xb+a,yb+20);cprintf("%c",3);
         }
         for(int a=0;a<nilai[akun2]/10;a++){
            textbackground(main_text);textcolor(dark_red);gotoxy(xb+a,yb+20);cprintf("%c",3);
         }
      }
}  
/////////////////////////////////////////Cek////////////////////////////////////
void asci(int a,int b){
	for(int c=a;c<=b;c++){
		printf("%d %c\n",c,c);
	}
}
void asci2(int a){
	for(int b=0;b<10;b++){
   	a=getche();
      printf("%d",a);
   }

}
void warna(int a,int b){
	for(int c=a;c<=b;c++){
      textcolor(c);cprintf("%d. %c\n",c,475);
   }
}
////////////////////////////////////////Kunci///////////////////////////////////
int isprima(int a){
	int c=0;
	for(int b=1;b<=a;b++){
   	if(a%b==0){
      	if(c==1&&b>1&&b<a)
         	bahas=b;
         c++;
      }
   }
   if(c==2)
   	return 1;
   else
   	return 2;
}
int hitung(int a,int b,int c,int d,int e){
	return a+b*c-d*e;
}
int kpk(int a,int b,int d){
   int c=a;
	for(;c%b!=0;c+=a){}
   return c+d;
}
int faktorial(int a){
	if(a==1){
   	return 1;
   }else{
   	return a*faktorial(a-1);
   }
}

int kunci6(int a,int b,int c){
	int tamp=0,tamp2=c;
   for(int d=1;tamp<tamp2;d++){
   	tamp+=a;
      tamp2+=b;
      if(tamp>=tamp2){
      	return d;
      }
   }
}
int kunci7(int a,int b,int c){
	return b*(c+1)-a*c;
}


