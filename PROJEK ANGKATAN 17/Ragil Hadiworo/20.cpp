////////////////////////////////////////////////////////////////
//                      SCREEN LAYOUT                         //
//                  SCREEN BUFFER (W x H)                     //
//                        700 x 700                           //
//                  WINDOW SIZE ( W x H)                      //
//                        120 x 55                            //
////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
////////////////////// GLOBAL VARIABLES ////////////////////////
//------------------------------------------------------------//
int ret_CHP;
int indexNc=0;
int indexNacc=0;
int indexNCR=0;
int inSLmv=1;
int inSLstd=1;
int inSLset=1;
int indexU=0;
int indexP=0;
//------------------------------------------------------------//
//------------------------------------------------------------//
///////////////////// PROTOTYPE of MENU ////////////////////////
//------------------------------------------------------------//
void lang();
void id_mainmenu();
void en_mainmenu();
//------------------------------------------------------------//
/////////////////// PROTOTYPE of CONTENTS //////////////////////
//------------------------------------------------------------//
//void id_login();
//void en_login();
void signUP();
void chaptcha();
int chaptchaR();
void inputSRNM();
void inputUNAME();
void inputPASSW();
void inputEMAIL();
void inputPHONE();
void inpCHP();
void chk_SGI();
//int cSGI();
void en_content();
void en_showoff();
void en_showlist();
void trailers();
void en_logout();
void en_buy1();
void en_buy2(char data);
void signIN();
void seatsel();
void seatsel(int loop,int schd);
int randomb();
//------------------------------------------------------------//
//////////////////// PROTOTYPE of VISUALS //////////////////////
//------------------------------------------------------------//
void kotak(int x,int l,int y);
void title();
void margin();
void del();
void delV();
void greeting();
void greeting_ID();
void vis_SignUp();
void box_form(int coX,int coY);
void boxpopup();
void box_form(int coX,int coY);
void box_form2(int coX,int coY);
void loading();
void vis_CRT();
void vis_animSGI();
void vis_animSGIff();
//------------------------------------------------------------//
/////////////////// PROTOTYPE of VALIDITE //////////////////////
//------------------------------------------------------------//
int validate_Cc(char data,int coX,int indexA,int indexC);
int validate_NODPL(int indexA);
int validate_un(char data,int coX);
int validate_pw(char data,int coX);
int validate_em(int data);
int validate_PH(int data);
//------------------------------------------------------------//
///////////////////////// DATABASE /////////////////////////////
//------------------------------------------------------------//
char surname[30][26];
char uname[30][11];
char password[30][11];
char email[30][25];
char phone[30][14];
char unameQuery[11];
char passwQuery[11];
char movie[5][50];
int seat1_14[30]={0};
int seat1_16[30]={0};
int seat1_20[30]={0};
int seat1_22[30]={0};
int seat2_14[30]={0};
int seat2_16[30]={0};
int seat2_20[30]={0};
int seat2_22[30]={0};
int seat3_14[30]={0};
int seat3_16[30]={0};
int seat3_20[30]={0};
int seat3_22[30]={0};
char cc_num[16];
//------------------------------------------------------------//
///////////////// FUNCTIONS AND PROCEDURES /////////////////////
//------------------------------------------------------------//
//|||||||||||||||||||||||| MARGIN ||||||||||||||||||||||||||||//
void margin(){
   textbackground(14);
   	for(int a=1;a<=18;a++){
         for(int v=1;v<=50;v++){
      		textcolor(6);
         	if((a==1&&v==1)||a==18){
            	gotoxy(a,v);textcolor(1);cprintf("%c",178);
         	}
        		else{
         		gotoxy(a,v);cprintf("%c",219);
         	}
      	}printf("\n");
      }
      for(int b=50; b>0; b--){
      		textcolor(1);
            gotoxy(115,b);cprintf("%c",178);
      }
      for(int q=1;q<=115;q++){
      	textcolor(1);
         for(int f=1;f<=8;f++){
      		if(f==1||f==8){
					gotoxy(q,f);cprintf("%c",175);
            }else{
            	gotoxy(q,f);cprintf("%c",219);
            }
         }printf("\n");
       }
       for(int d=0;d<=95;d++){
       	for(int e=9;e<=50;e++){
       	textcolor(6);
			gotoxy(d+19,e);cprintf("%c",219);
         }printf("\n");
       }
      	for(int c=1;c<=115;c++){
      	textcolor(1);
      	gotoxy(c,51);cprintf("%c",174);
         gotoxy(c,52);cprintf("%c",219);
         gotoxy(c,53);cprintf("%c",219);
         gotoxy(c,54);cprintf("%c",174);
       }
       title();en_mainmenu();
}
//||||||||||||||||||||||||| TITLE ||||||||||||||||||||||||||||//
void title(){
  	textbackground(1);
	textcolor(15);
   gotoxy(49,3);cprintf("E-TICKET APLICATION");
   gotoxy(51,4);cprintf("#PHOEN1X CINEMA");
   gotoxy(41,5);cprintf("WATCH YOUR GREATEST AND LATEST MOVIE");
   gotoxy(44,52);cprintf("Copyright 2019 - Ragil Hadiworo");

}
//|||||||||||||||||||||||||| LANG ||||||||||||||||||||||||||||//
void lang(){
int select;
	textbackground(6);
   textcolor(15);
   gotoxy(50,30);cprintf("PILIH BAHASA / CHOOSE LANGUAGE");
   gotoxy(55,31);cprintf("1. BAHASA INDONESIA");
   gotoxy(59,32);cprintf("2. ENGLISH");
   gotoxy(64,34);select=getche();
   switch(select){
   	case '1':del();greeting_ID();id_mainmenu();break;
    case '2':del();greeting();en_mainmenu();break;
      default:	for(int a=1;a<=5;a++){
      				if(a==2 || a==4){
               		textcolor(15);gotoxy(49,35);cprintf("INPUT TIDAK SESUAI / INVALID INPUT");
               	}else{
               		for(int a=49;a<=85;a++){
                     	textcolor(6);gotoxy(a,35);cprintf("%c",219);
                     }
                  }
                  Sleep(500);
      			}del();lang();
   }
}
//|||||||||||||||||||||| ID. MAIN MENU |||||||||||||||||||||||//
void id_mainmenu(){
	char input;int conv;
gotoxy(5,13);textcolor(15);textbackground(1);cprintf("1. DAFTAR");
gotoxy(5,22);textcolor(15);textbackground(1);cprintf("2. MASUK");
gotoxy(5,31);textcolor(15);textbackground(1);cprintf("ESC KELUAR");
gotoxy(7,47);textcolor(15);textbackground(1);cprintf("PILIH:");
gotoxy(9,48);/*textcolor(15);textbackground(1);*/input=getche();
		conv=input;
		if (conv==49){
      	for(int load=0;load<2;load++){
				Sleep(1000);
			}//id_signup();
		}else if (conv==50){
      	for(int load=0;load<2;load++){
				Sleep(1000);
			}//id_login();
		}else if(conv==27){
			boxpopup();
			textcolor(15);textbackground(4);
			gotoxy(65,26);cprintf("Pesan");
			gotoxy(48,34);textcolor(15);textbackground(0);cprintf("TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI");
		for(int load=0;load<2;load++){
		Sleep(1000);
			}exit(0);
		}else{
      	for(int a=1;a<=5;a++){
         	textbackground(1);
         	if(a==2 || a==4){
         		textcolor(15);gotoxy(4,48);cprintf("TIDAK SESUAI");
         	}else{
         		for(int a=4;a<=15;a++){
           		 	textcolor(1);gotoxy(a,48);cprintf("%c",219);
            	}
            }Sleep(500);
		}id_mainmenu();

	}
}
//|||||||||||||||||||||| EN. MAIN MENU |||||||||||||||||||||||//
void en_mainmenu(){
	kotak(2,0,6);
  kotak(2,9,15);
  kotak(2,18,24);
  kotak(2,36,39);
	char input;int conv;
gotoxy(5,13);textcolor(15);textbackground(1);cprintf("1. SIGN-UP");
gotoxy(5,22);textcolor(15);textbackground(1);cprintf("2. SIGN-IN");
gotoxy(6,31);textcolor(15);textbackground(1);cprintf("ESC EXIT");
gotoxy(6,47);textcolor(15);textbackground(1);cprintf("CHOICE:");
gotoxy(9,48);/*textcolor(15);textbackground(1);*/input=getche();
		conv=input;
		if (conv==49){
      	inputSRNM();
		}else if (conv==50){
      	signIN();
		}else if(conv==27){
			boxpopup();
			textcolor(15);textbackground(4);
			gotoxy(65,26);cprintf("Message");
			gotoxy(54,34);textcolor(15);textbackground(0);cprintf("THANKS FOR USING THIS PROGRAM");
			for(int load=0;load<2;load++){
				Sleep(1000);
			}exit(0);
		}else{
			for(int a=1;a<=5;a++){
				textbackground(1);
         	if(a==2 || a==4){
         		textcolor(15);gotoxy(6,48);cprintf("INVALID");
         	}else{
         		for(int a=4;a<=15;a++){
           		 	textcolor(1);gotoxy(a,48);cprintf("%c",219);
            	}
            }Sleep(500);
			}
			en_mainmenu();
		}
}
//|||||||||||||||||||||| INPUT SURNAME |||||||||||||||||||||||//
void inputSRNM(){
	vis_SignUp();
	int retcheck;
	int loop=1;
	int x=50;
	char rre;
	while(loop!=0){
			textcolor(15);
			textbackground(3);
			gotoxy(x,20);surname[indexNacc][indexNc]=getch();
			rre=surname[indexNacc][indexNc];
			retcheck=validate_Cc(rre,x,indexNacc,indexNc);
			if(retcheck==0){
				textcolor(15);textbackground(3);
				gotoxy(x,20);cprintf("%c",surname[indexNacc][indexNc]);
				indexNc++;x++;
			}else if(retcheck==99){
				box_form2(x,20);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(x,20);cprintf("Max. 25 ch.");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(x,20);cprintf("           ");
						}
					}
					Sleep(500);
				}
				loop=1;
			}else if(retcheck==13){
				surname[indexNacc][indexNc]=NULL;
				indexNc=0;
				loop=0;
			}else if(retcheck==8&&x>50){
				indexNc-=1;x-=1;
				textbackground(3);textcolor(15);gotoxy(x,20);cprintf(" ");
			}else{
				box_form2(x,20);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(x,20);cprintf("INVALID");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(x,20);cprintf("       ");
						}
					}
					Sleep(500);
				}
				loop=1;
			}
	}
	inputUNAME();
}
//||||||||||||||||||||||| INPUT UNAME ||||||||||||||||||||||||//
void inputUNAME(){
	int retcheck;
	int loop=1;
	int x=50;
	char rre;
	int counter=0;
	while(loop!=0){
			textcolor(15);
			textbackground(3);
			gotoxy(x,22);uname[indexNacc][indexNc]=getch();
			rre=uname[indexNacc][indexNc];
			retcheck=validate_un(rre,x);
			//printf("%i",retcheck);
			if(retcheck==0){
				textcolor(15);textbackground(3);
				gotoxy(x,22);cprintf("%c",uname[indexNacc][indexNc]);
				indexNc++;x++;
			}else if(retcheck==13){
				uname[indexNacc][indexNc]=NULL;
				indexNc=0;
				loop=0;
			}else if(retcheck==99){
				box_form2(x,22);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(x,22);cprintf("Max. 10 ch.");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(x,22);cprintf("           ");
						}
					}
					Sleep(500);
				}
				loop=1;
			}else if(retcheck==8&&x>=50){
				indexNc-=1;x-=1;
				textbackground(3);textcolor(15);gotoxy(x,22);cprintf(" ");
			}else{
				box_form2(x,22);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(x,22);cprintf("INVALID");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(x,22);cprintf("       ");
						}
					}
					Sleep(500);
				}
				loop=1;
			}
	}
	if(indexNacc==0){inputPASSW();}
	else{
		for(int iA=0;iA<indexNacc;iA++){
			//if(surname[indexNacc]==surname[iA]){
			if(strcmp(uname[indexNacc],uname[iA])==0){
				counter++;break;
			}else{
				counter+=0;
			}
		}	
			if(counter==0){
				inputPASSW();
			}
			else{
				box_form2(x,22);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(50,22);cprintf("USERNAME ALREADY TAKEN");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(50,22);cprintf("                      ");
						}
					}
					Sleep(500);
				}
				inputUNAME();
			}
	}
	
}
//|||||||||||||||||||||| INPUT PASSWORD|||||||||||||||||||||||//
void inputPASSW(){
	int retcheck;
	int loop=1;
	int x=50;
	char rre;
	while(loop!=0){
			textcolor(15);
			textbackground(3);
			gotoxy(x,24);password[indexNacc][indexNc]=getch();
			rre=password[indexNacc][indexNc];
			retcheck=validate_pw(rre,x);
			//printf("%i",retcheck);
			if(retcheck==0){
				textcolor(15);textbackground(3);
				gotoxy(x,24);cprintf("%c",password[indexNacc][indexNc]);
				indexNc++;x++;
			}else if(retcheck==13){
				password[indexNacc][indexNc]=NULL;
				loop=0;
				indexNc=0;
			}else if(retcheck==99){
				box_form2(x,24);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(x,24);cprintf("Max. 10 ch.");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(x,24);cprintf("           ");
						}
					}
					Sleep(500);
				}
				loop=1;
			}else if(retcheck==8&&x>=50){
				indexNc-=1;x-=1;
				textbackground(3);textcolor(15);gotoxy(x,24);cprintf(" ");
			}else{
				box_form2(x,24);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(x,24);cprintf("INVALID");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(x,24);cprintf("       ");
						}
					}
					Sleep(500);
				}
				loop=1;
			}
	}
	inputEMAIL();
}
//|||||||||||||||||||||| INPUT E-MAIL |||||||||||||||||||||||//
void inputEMAIL(){
	int retcheck;
	int loop=0;
	int x=50;
	char rre;
	while(loop<=25){
			textcolor(15);
			textbackground(3);
			gotoxy(x,26);email[indexNacc][indexNc]=getch();
			int cv=email[indexNacc][indexNc];
			if(cv==8&&(loop>0&&loop<=25)){
				indexNc-=1;x-=1;
				textbackground(3);textcolor(15);gotoxy(x,26);cprintf(" ");
				loop-=1;
			}else if(cv==13&&(loop>0&&loop<=25)){
				email[indexNacc][indexNc]=NULL;
				indexNc=0;
				loop=27;
			}else if(loop==25&&(cv!=13||cv!=8)){
				box_form2(x,26);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(x,26);cprintf("Max. 25 ch.");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(x,26);cprintf("           ");
						}
					}
					Sleep(500);
				}
			}else if((cv==13||cv==8)&&loop==0){
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(x,26);cprintf("INVALID");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(x,26);cprintf("       ");
						}
					}
					Sleep(500);
				}
			}else{
				textcolor(15);textbackground(3);
				gotoxy(x,26);cprintf("%c",email[indexNacc][indexNc]);
				indexNc++;x++;
				loop++;
			}
	}
	retcheck=validate_em(indexNacc);
		if(retcheck==0){
			box_form2(x,26);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(x,26);cprintf("Done");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(x,26);cprintf("              ");
						}
					}
					Sleep(500);
				}
		}
		else{
			box_form2(x,26);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(50,26);cprintf("INVALID FORMAT            ");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(50,26);cprintf("                          ");
						}
					}
					Sleep(500);
				}
		inputEMAIL();
		}
		inputPHONE();
}
//|||||||||||||||||||||| INPUT PHONE |||||||||||||||||||||||//
void inputPHONE(){
	int retcheck;
	int loop=0;
	int x=52;
	char rre;
	indexNc=0;
	textcolor(15);textbackground(3);gotoxy(50,28);cprintf("08");
	while(loop<=12){
			textcolor(15);
			textbackground(3);
			gotoxy(x,28);phone[indexNacc][indexNc]=getch();
			int cv=phone[indexNacc][indexNc];
			if(cv==8&&(loop>0&&loop<=12)){
				indexNc-=1;x-=1;
				textbackground(3);textcolor(15);gotoxy(x,28);cprintf(" ");
				loop-=1;
			}else if(cv==13&&(loop>8&&loop<=12)){
				phone[indexNacc][indexNc]=NULL;
				indexNc=0;
				loop=27;
			}else if(loop==12&&(cv!=13||cv!=8)){
				box_form2(x,28);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(x,28);cprintf("Max. 13 ch.");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(x,28);cprintf("           ");
						}
					}
					Sleep(500);
				}
			}else if((cv==13)&&(loop>=0&&loop<=8)){
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(x,28);cprintf("INVALID");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(x,28);cprintf("       ");
						}
					}
					Sleep(500);
				}
			}else{
				textcolor(15);textbackground(3);
				gotoxy(x,28);cprintf("%c",phone[indexNacc][indexNc]);
				indexNc++;x++;
				loop++;
			}
	}
	retcheck=validate_PH(indexNacc);
		if(retcheck==0){
			box_form2(x,28);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(x,28);cprintf("Done");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(x,28);cprintf("              ");
						}
					}
					Sleep(500);
				}
		}
		else{
			box_form2(x,28);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(50,28);cprintf("INVALID FORMAT%i           ",retcheck);
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(50,28);cprintf("                          ");
						}
					}
					Sleep(500);
				}
		inputPHONE();
		}
	inpCHP();
}
//||||||||||||||||||INPUT AND MATCH CHAPTCHA |||||||||||||||||//
void inpCHP(){
	char chpt[4];
	int loop=0;
	int x=50;
	while(loop<=3){
			textcolor(15);
			textbackground(3);
			gotoxy(x,35);chpt[indexNc]=getch();
			int cv=chpt[indexNc];
			if(cv==8&&(loop>0&&loop<3)){
				indexNc-=1;x-=1;
				textbackground(3);textcolor(15);gotoxy(x,35);cprintf(" ");
				loop-=1;
			}else if(cv==13&&loop==3){
				chpt[indexNc]=NULL;
				indexNc=0;
				loop=27;
			}else if(cv==13&&loop>=0&&loop<3){
				box_form2(x,35);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(x,35);cprintf("NOT MATCH?");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(x,35);cprintf("           ");
						}
					}
					Sleep(500);
				}
			}else if(loop==3&&(cv!=13||cv!=8)){
				box_form2(x,35);
				for(int a=1;a<=3;a++){
					textbackground(3);
					if(a==2){
						textcolor(14);gotoxy(x,35);cprintf("NOT MATCH?");
					}else{
						for(int a=50;a<=60;a++){
						textcolor(3);gotoxy(x,35);cprintf("           ");
						}
					}
					Sleep(500);
				}
			}else if(loop>=0&&loop<3&&(chpt[indexNc]>='0'&&chpt[indexNc]<='9')){
				textcolor(15);textbackground(3);
				gotoxy(x,35);cprintf("%c",chpt[indexNc]);
				indexNc++;x++;
				loop++;
			}
	}
	int yyy=atoi(chpt);
	if(yyy==ret_CHP){
		textcolor(4);textbackground(7);
		gotoxy(54,38);cprintf("ENTER TO CREATE ACCOUNT");
		indexNacc++;
		int error=1;
		do{
			char confirm;
			gotoxy(78,38);confirm=getch();
			int confirmcv=confirm;
			if(confirmcv==13){
				del();loading();vis_CRT();
				error=0;
				break;
			}else{
				error++;
			}
		}while(error!=0);


	}else{
		box_form2(x,35);
		for(int a=1;a<=3;a++){
			textbackground(3);
			if(a==2){
				textcolor(14);gotoxy(x,35);cprintf("NOT MATCH?");
			}else{
				for(int a=50;a<=60;a++){
				textcolor(3);gotoxy(x,35);cprintf("           ");
				}
			}
			Sleep(500);
		}
		inpCHP();
	}

}
//||||||||||||||||||||| Visuals SIGN UP ||||||||||||||||||||||//
void vis_SignUp(){
   for(int row=14;row<=40;row++){
   	for(int clm=27;clm<=107;clm++){
         if(row>=14&&row<=17){
            textcolor(3);
				gotoxy(clm,row);cprintf("%c",219);
         }
         else{
            textcolor(7);
      		gotoxy(clm,row);cprintf("%c",219);
      	}
      }
      printf("\n");
   }
   textcolor(15);textbackground(3);
   gotoxy(59,15);cprintf("SIGN UP ACCOUNT");
	textcolor(4);textbackground(7);
	gotoxy(30,20);cprintf("YOUR SURNAME       :");
	gotoxy(30,22);cprintf("USERNAME           :");//gotoxy(50,23);cprintf("10 chars maximum, incl. numbers");
	gotoxy(30,24);cprintf("DESIRED PASSWORD   :");//gotoxy(50,25);cprintf("10 chars maximum, all chars supportted");
	gotoxy(30,26);cprintf("E-MAIL ADDRESS     :");//gotoxy(50,27);cprintf("Example : someone@example.com");
	gotoxy(30,28);cprintf("PHONE NUMBER       :");
	textcolor(4);textbackground(7);chaptcha();textcolor(4);textbackground(7);
	gotoxy(30,35);cprintf("CHAPTCHA           :");//gotoxy(50,36);cprintf("Just to make sure you're not a robot");
	box_form(50,20);box_form(50,22);box_form(50,24);box_form(50,26);box_form(50,28);box_form(50,35);textcolor(15);textbackground(3);gotoxy(50,28);cprintf("08");
}
//||||||||||||||||||||| Already Created ||||||||||||||||||||||//
void vis_CRT(){
   boxpopup();
   textcolor(15);textbackground(4);
   gotoxy(65,26);cprintf("Message");
			gotoxy(54,34);textcolor(15);textbackground(0);cprintf("ACCOUNT HAS BEEN CREATED");
			gotoxy(54,35);textcolor(15);textbackground(0);cprintf("Redirecting to main menu");
	for(int a=0;a<2;a++){
		Sleep(500);
	}
	del();delV();
	en_mainmenu();
}
//||||||||||||||||||||| FREAKIN' SIGNIN ||||||||||||||||||||||//
void signIN(){
	delV();
	char nop=' ';
	int x=66;
   boxpopup();
   textcolor(15);textbackground(4);
   gotoxy(65,26);cprintf("SignIn Account");
   box_form2(66,34);box_form2(66,36);
			gotoxy(54,34);textcolor(15);textbackground(0);cprintf("Username : ");
			gotoxy(54,36);textcolor(15);textbackground(0);cprintf("Password : ");
	
	while(indexU<=11){
		textcolor(15);textbackground(3);
		gotoxy(x,34);unameQuery[indexU]=getch();
		nop=unameQuery[indexU];
		if(nop==13&&(indexU>0&&indexU<=11)){
			unameQuery[indexU]=NULL;
			indexU=0;
			break;
		}else if(nop==13&&indexU==0){
			gotoxy(x,34);textcolor(14);cprintf("Invalid");Sleep(500);
			gotoxy(x,34);textcolor(3);cprintf("       ");
		}else if(nop==8&&indexU==0){
			gotoxy(x,34);textcolor(14);cprintf("Invalid");Sleep(500);
			gotoxy(x,34);textcolor(3);cprintf("       ");
		}else if(nop==8&&(indexU>0&&indexU<=11)){
			x--;indexU--;
			gotoxy(x,34);textcolor(3);cprintf(" ");
		}else{
			gotoxy(x,34);cprintf("%c",unameQuery[indexU]);
			x++;indexU++;
		}
	}
	x=66;
	while(indexP<=11){
		textcolor(15);textbackground(3);
		gotoxy(x,36);passwQuery[indexP]=getch();
		nop=passwQuery[indexP];
		nop=passwQuery[indexP];
		if(nop==13&&(indexP>0&&indexP<=11)){
			passwQuery[indexP]=NULL;
			indexP=0;
			break;
		}else if(nop==13&&indexP==0){
			gotoxy(x,36);textcolor(14);cprintf("Invalid");Sleep(500);
			gotoxy(x,36);textcolor(3);cprintf("       ");
		}else if(nop==8&&indexP==0){
			gotoxy(x,36);textcolor(14);cprintf("Invalid");Sleep(500);
			gotoxy(x,36);textcolor(3);cprintf("       ");
		}else if(nop==8&&(indexP>0&&indexP<=11)){
			x--;indexP--;
			gotoxy(x,36);textcolor(3);cprintf(" ");
		}else{
			gotoxy(x,36);cprintf("*");
			x++;indexP++;
		}
		
	}
	del();loading();
	//int note=cSGI();
	int iA=0;
	while(iA<=indexNacc){
		if((strcmp(uname[iA],unameQuery)==0)&&(strcmp(password[iA],passwQuery))==0){
			vis_animSGI();
			iA=0;
			break;
		}else{ //if((strcmp(uname[iA],unameQuery)!=0)||(strcmp(password[iA],passwQuery))!=0){
			iA+=1;
		}
	}
			vis_animSGIff();
}
//||||||||||||||||||||| ANIM_SGI ||||||||||||||||||||||//
/*int cSGI(){
	int something=0;
	for(int iA=0;iA<30;iA++){
		if((strcmp(uname[iA],unameQuery)==0)&&(strcmp(password[iA],passwQuery))==0){
			something+=0;
			break;
		}else if((strcmp(uname[iA],unameQuery)!=0)||(strcmp(password[iA],passwQuery))!=0){
			something=1;
		}
	}
	return something;
}*/
void vis_animSGI(){
   boxpopup();
   textcolor(15);textbackground(4);
		gotoxy(65,26);cprintf("Message");
		gotoxy(54,34);textcolor(15);textbackground(0);cprintf("SUCCESSFULLY SIGNED IN");
		gotoxy(54,36);textcolor(15);textbackground(0);cprintf("Preparing Content...");
	for(int a=0;a<2;a++){
		Sleep(500);
	}
	del();delV();
	en_showlist();
}
void vis_animSGIff(){
   boxpopup();
   textcolor(15);textbackground(4);
		gotoxy(65,26);cprintf("Message");
		gotoxy(59,34);textcolor(15);textbackground(0);cprintf("FAILED TO LOGIN");
		gotoxy(58,36);textcolor(15);textbackground(0);cprintf("Relogin needed...");
	for(int a=0;a<2;a++){
		Sleep(500);
	}
	del();delV();
	en_mainmenu();
}
//||||||||||||||||||||| ENGLISH CONTENT ||||||||||||||||||||||//
void en_content(){
	kotak(2,0,6);
	kotak(2,9,15);
	kotak(2,18,24);
	kotak(2,36,39);
	gotoxy(5,13);textcolor(15);textbackground(1);cprintf("N - Next");
	gotoxy(5,22);textcolor(15);textbackground(1);cprintf("P - Previous");
	gotoxy(5,31);textcolor(15);textbackground(1);cprintf("Esc - Logout");
	gotoxy(7,47);textcolor(15);textbackground(1);cprintf("PILIH:");
	en_showoff();
}
//||||||||||||||||||||| ENGLISH SHOWMV ||||||||||||||||||||||//
void en_showoff(){
	kotak(2,0,6);
	kotak(2,9,15);
	kotak(2,18,24);
	kotak(2,36,39);
	gotoxy(5,13);textcolor(15);textbackground(1);cprintf("N - Next");
	gotoxy(4,22);textcolor(15);textbackground(1);cprintf("P - Previous");
	gotoxy(4,31);textcolor(15);textbackground(1);cprintf("Esc - Logout");
	gotoxy(7,47);textcolor(15);textbackground(1);cprintf("PILIH:");
}
//||||||||||||||||||||| ENGLISH SHOWLST ||||||||||||||||||||||//
void en_showlist(){
	en_showoff();
	char option;
	for(int Vbox=11;Vbox<=16;Vbox++){
		for(int Hbox=21;Hbox<=26;Hbox++){
			textcolor(1);gotoxy(Hbox,Vbox);cprintf("%c",219);
		}
	}
	for(int c=1;c<=115;c++){
      	textcolor(1);
      	gotoxy(c,51);cprintf("%c",174);
         gotoxy(c,52);cprintf("%c",219);
         gotoxy(c,53);cprintf("%c",219);
         gotoxy(c,54);cprintf("%c",174);
		 
    }
	textbackground(1);
	textcolor(15);
	gotoxy(40,52);cprintf("[B] for Buy Tickets and [T] to watch trailers");
	if(inSLmv==1){
		textcolor(1);textbackground(6);
		gotoxy(28,13);cprintf("GLASS (2019)");
		textcolor(1);gotoxy(21,19);cprintf("Thriller, Action, Sci-Fi, Mistery, Fantasy, Drama");
		textcolor(0);gotoxy(28,17);cprintf("Rating : 5.3/10");
		textcolor(1);gotoxy(21,19);cprintf("Security guard David Dunn uses his supernatural abilities to track Kevin Wendell Crumb,"); 
		textcolor(1);gotoxy(21,20);cprintf("a disturbed man who has twenty-four personalities.");
		textcolor(0);gotoxy(21,21);cprintf("Director: M. Night Shyamalan");
		textcolor(0);gotoxy(21,22);cprintf("Writer: M. Night Shyamalan");
		textcolor(0);gotoxy(21,23);cprintf("Stars: James McAvoy, Bruce Willis, Samuel L. Jackson");
	}else if(inSLmv==2){
		textcolor(1);textbackground(6);
		gotoxy(28,13);cprintf("THE UPSIDE (2019)");
		textcolor(1);gotoxy(21,19);cprintf("Comedy, Drama");
		textcolor(0);gotoxy(28,17);cprintf("Rating : 4.3/10");
		textcolor(1);gotoxy(21,19);cprintf("A comedic look at the relationship between a wealthy man with quadriplegia and "); 
		textcolor(1);gotoxy(21,20);cprintf("an unemployed man with a criminal record who's hired to help him.");
		textcolor(0);gotoxy(21,21);cprintf("Director: Neil Burger");
		textcolor(0);gotoxy(21,22);cprintf("Writer: Jon Hartmere, Éric Toledano");
		textcolor(0);gotoxy(21,23);cprintf("Stars: Kevin Hart, Bryan Cranston, Nicole Kidman");
	}else if(inSLmv==3){
		textcolor(1);textbackground(6);
		gotoxy(28,13);cprintf("DREADOUT (2019)");
		textcolor(1);gotoxy(21,19);cprintf("Adventure, Fantasy, Horror, Thriller");
		textcolor(0);gotoxy(28,17);cprintf("Rating : 5.4/10");
		textcolor(1);gotoxy(21,19);cprintf("Jessica, Beni, Dian, Alex, Erik, and Linda want to increase their popularity "); 
		textcolor(1);gotoxy(21,20);cprintf("through recording their adventures to upload to their social media accounts. ");
		textcolor(1);gotoxy(21,21);cprintf("They chose to go to an abandoned apartment famous for its awesomeness.");
		textcolor(1);gotoxy(21,22);cprintf("Linda manages to persuade Kang Heri, security guard, to enter the apartment.");
		textcolor(1);gotoxy(21,23);cprintf("Linda and friends found one apartment unit which is given a police line.");
		textcolor(1);gotoxy(21,24);cprintf("Encouraged by curiosity, they brake down the door of the apartment unit. ");
		textcolor(1);gotoxy(21,25);cprintf("When they are researching the room, they find an old parchment, which only ");
		textcolor(1);gotoxy(21,26);cprintf("Linda could read. After Linda reads the writing on the parchment, suddenly");
		textcolor(1);gotoxy(21,27);cprintf("a portal open. Inadvertently Linda and her friends have opened the door to ");
		textcolor(1);gotoxy(21,28);cprintf("the magical world and anger the portal guardian supernatural creatures.");
		textcolor(0);gotoxy(21,29);cprintf("Director: Kimo Stamboel");
		textcolor(0);gotoxy(21,30);cprintf("Writer: Kimo Stamboel");
		textcolor(0);gotoxy(21,31);cprintf("Stars: Caitlin Halderman, Jefri Nichol, Marsha Aruan");
	}else if(inSLmv==4){
		textcolor(1);textbackground(6);
		gotoxy(28,13);cprintf("ESCAPE ROOM (2019)");
		textcolor(1);gotoxy(21,19);cprintf("Horror, Psychological Horror, Thriller, Sci-Fi");
		textcolor(0);gotoxy(28,17);cprintf("Rating : 5.0/10");
		textcolor(1);gotoxy(21,19);cprintf("Six adventurous strangers travel to a mysterious building to experience "); 
		textcolor(1);gotoxy(21,20);cprintf("the escape room -- a game where players compete to solve a series of puzzles ");
		textcolor(1);gotoxy(21,21);cprintf("to win $10,000. What starts out as seemingly innocent fun soon turns into ");
		textcolor(1);gotoxy(21,22);cprintf("a living nightmare as the four men and two women discover each room is ");
		textcolor(1);gotoxy(21,23);cprintf("an elaborate trap that's part of a sadistic game of life or death.");
		textcolor(0);gotoxy(21,29);cprintf("Director: Adam Robitel");
		textcolor(0);gotoxy(21,22);cprintf("Writer: Bragi F. Schut, Maria Melnik");
		textcolor(0);gotoxy(21,23);cprintf("Stars: Taylor Russell, Logan Miller, Jay Ellis ");
	}else if(inSLmv==5){
		textcolor(1);textbackground(6);
		gotoxy(28,13);cprintf("MATA BATIN 2 (2019)");
		textcolor(1);gotoxy(21,19);cprintf("Adventure, Fantasy, Horror, Thriller");
		textcolor(0);gotoxy(28,17);cprintf("Rating : 4.9/10");
		textcolor(1);gotoxy(21,19);cprintf("After her sister died, Alia decides to start a new life by living in an "); 
		textcolor(1);gotoxy(21,20);cprintf("orphanage owned by Mrs Laksmi and Mr Fadli as well as doing social work there.");
		textcolor(1);gotoxy(21,21);cprintf("But Alia feels something wrong with the orphanage. Moreover, Nadia, one of ");
		textcolor(1);gotoxy(21,22);cprintf("the orphanage who apparently also has an inner eyes like Alia, can hears");
		textcolor(1);gotoxy(21,23);cprintf("mysterious voices asking for help from all over the walls of the house. Alia ");
		textcolor(1);gotoxy(21,24);cprintf("and Nadia open a mysterious locked room. Since then disasters begin. It turns");
		textcolor(1);gotoxy(21,25);cprintf("out that Alia and Nadia had made a big mistake and releases Darmah, a vengeful");
		textcolor(1);gotoxy(21,26);cprintf("spirit that was deliberately locked in the room. Together with Mrs Windu,");
		textcolor(1);gotoxy(21,27);cprintf("the paranormal and mentor of her inner eyes, Alia must confront Darmah and ");
		textcolor(1);gotoxy(21,28);cprintf("save the orphanage.");
		textcolor(0);gotoxy(21,29);cprintf("Director: Rocky Soraya");
		textcolor(0);gotoxy(21,30);cprintf("Writer: Riheam Junianti, Rocky Soraya");
		textcolor(0);gotoxy(21,31);cprintf("Stars: Jessica Mila, Nabilah Ratna Ayu Azalia, Sophia Latjuba");
	}
	int loop=1;
		while(loop!=0){
			gotoxy(9,48);textcolor(15);textbackground(1);option=getche();
			if(inSLmv==1&&(option=='P'||option=='p')){
				loop=0;inSLmv=5;delV();del();en_showlist();
			}else if(inSLmv!=1&&(option=='P'||option=='p')){
				loop=0;inSLmv--;delV();del();en_showlist();
			}else if(inSLmv==5&&(option=='N'||option=='n')){
				loop=0;inSLmv=1;delV();del();en_showlist();
			}else if(inSLmv!=5&&(option=='N'||option=='n')){
				loop=0;inSLmv++;delV();del();en_showlist();
			}else if(option==27){
				loop=0;
				boxpopup();
				char opt;
				textcolor(15);textbackground(4);
				gotoxy(65,26);cprintf("Exit");
				int nxtlp=1;
				while(nxtlp!=0){
					gotoxy(48,34);textcolor(15);textbackground(0);cprintf("ARE YOU SURE WANT TO LOGOUT?[Y/N]");
					gotoxy(61,35);opt=getch();
					if(opt=='Y'||opt=='y'){
						nxtlp=0;
						en_logout();
					}else if(opt=='N'||opt=='n'){
						nxtlp=0;
						delV();del();en_showlist();
					}else{
						nxtlp=1;
						gotoxy(61,35);cprintf("Oops!");
						gotoxy(61,35);textcolor(0);cprintf("     ");
					}
				}
			}else if(option=='B'||option=='b'){
				loop=0;delV();del();en_buy1();
			}else if(option=='t'||option=='T'){
				loop=0;trailers();delV();del();en_showlist();
			}else{
				for(int a=1;a<=5;a++){
					textbackground(1);
					if(a==2 || a==4){
						textcolor(15);gotoxy(6,48);cprintf("INVALID");
					}else{
						for(int a=4;a<=15;a++){
							textcolor(1);gotoxy(a,48);cprintf("%c",219);
						}
					}
					Sleep(500);
				}
				loop=1;
			}
		}
}
//|||||||||||||||||||||||||| en.BUY |||||||||||||||||||||||||||//
void en_buy1(){
	int mv1=35000,mv2=35000,mv3=45000,mv4=40000,mv5=40000;
	textcolor(1);
	kotak(21,1,5);kotak(39,1,5),kotak(57,1,5);
	char select;
	if(inSLmv==1){
		delV();
		textcolor(15);textbackground(1);
		gotoxy(24,13);cprintf("STUDIO  1");
		gotoxy(42,13);cprintf("STUDIO  2");
		gotoxy(59,13);cprintf("STUDIO  3");
		textcolor(0);textbackground(6);
		gotoxy(25,17);cprintf("1. 14:00");
		gotoxy(25,18);cprintf("2. 16:00");
		gotoxy(25,19);cprintf("3. 22:00");
		textcolor(15);
		gotoxy(48,32);cprintf("WHICH SCHEDULE THAT YOU WANT?");
		int loop=1;
		while(loop!=0){
			gotoxy(61,34);select=getche();
			if(select>='1'&&select<='3'){
				en_buy2(select);loop=0;
			}else{
				gotoxy(64,34);cprintf("Oops!");Sleep(500);
				gotoxy(64,34);textcolor(6);cprintf("     ");
				loop=1;
			}
		}
	}else if(inSLmv==2){
		delV();
		textcolor(15);textbackground(1);
		gotoxy(24,13);cprintf("STUDIO  1");
		gotoxy(42,13);cprintf("STUDIO  2");
		gotoxy(59,13);cprintf("STUDIO  3");
		textcolor(0);textbackground(6);
		gotoxy(42,17);cprintf("1. 14:00");
		gotoxy(42,18);cprintf("2. 20:00");
		gotoxy(42,19);cprintf("3. 22:00");
		textcolor(15);
		gotoxy(48,32);cprintf("WHICH SCHEDULE THAT YOU WANT?");
		int loop=1;
		while(loop!=0){
			gotoxy(61,34);select=getche();
			if(select>='1'&&select<='3'){
				en_buy2(select);loop=0;
			}else{
				gotoxy(64,34);cprintf("Oops!");Sleep(500);
				gotoxy(64,34);textcolor(6);cprintf("     ");
				loop=1;
			}
		}
	}else if(inSLmv==3){
		delV();
		textcolor(15);textbackground(1);
		gotoxy(24,13);cprintf("STUDIO  1");
		gotoxy(42,13);cprintf("STUDIO  2");
		gotoxy(59,13);cprintf("STUDIO  3");
		textcolor(0);textbackground(6);
		gotoxy(42,17);cprintf("1. 16:00");
		gotoxy(42,18);cprintf("2. 20:00");
		textcolor(15);
		gotoxy(48,32);cprintf("WHICH SCHEDULE THAT YOU WANT?");
		int loop=1;
		while(loop!=0){
			gotoxy(61,34);select=getche();
			if(select>='1'&&select<='3'){
				en_buy2(select);loop=0;
			}else{
				gotoxy(64,34);cprintf("Oops!");Sleep(500);
				gotoxy(64,34);textcolor(6);cprintf("     ");
				loop=1;
			}
		}
		//gotoxy(42,19);cprintf("3. 22:00");
	}else if(inSLmv==4){
		delV();
		textcolor(15);textbackground(1);
		gotoxy(24,13);cprintf("STUDIO  1");
		gotoxy(42,13);cprintf("STUDIO  2");
		gotoxy(59,13);cprintf("STUDIO  3");
		textcolor(0);textbackground(6);
		gotoxy(59,18);cprintf("2. 14:00");
		gotoxy(42,17);cprintf("1. 16:00");
		textcolor(15);
		gotoxy(48,32);cprintf("WHICH SCHEDULE THAT YOU WANT?");
		int loop=1;
		while(loop!=0){
			gotoxy(61,34);select=getche();
			if(select>='1'&&select<='3'){
				en_buy2(select);loop=0;
			}else{
				gotoxy(64,34);cprintf("Oops!");Sleep(500);
				gotoxy(64,34);textcolor(6);cprintf("     ");
				loop=1;
			}
		}
	}else if(inSLmv==5){
		delV();
		textcolor(15);textbackground(1);
		gotoxy(24,13);cprintf("STUDIO  1");
		gotoxy(42,13);cprintf("STUDIO  2");
		gotoxy(59,13);cprintf("STUDIO  3");
		textcolor(0);textbackground(6);
		gotoxy(59,18);cprintf("2. 22:00");
		gotoxy(24,17);cprintf("1. 20:00");
		int loop=1;
		while(loop!=0){
			gotoxy(61,34);select=getche();
			if(select>='1'&&select<='3'){
				en_buy2(select);loop=0;
			}else{
				gotoxy(64,34);cprintf("Oops!");Sleep(500);
				gotoxy(64,34);textcolor(6);cprintf("     ");
				loop=1;
			}
		}
	}
}
//|||||||||||||||||||||||| en.BUY 2 ||||||||||||||||||||||||||//
void en_buy2(char data){
	//int cvt=atoi(data)
	int idxst=0;
   int cv;
	int idxcc=0;
	int xst=58;
	int xcc=58;
	char howmany[3];
	int atHM;
	textbackground(6);textcolor(0);
	if(inSLmv==1){
		boxpopup();
		textcolor(15);textbackground(4);
		gotoxy(60,26);cprintf("How Many Tickets?");
		gotoxy(54,30);textcolor(15);textbackground(0);cprintf("How many tickets that you want?");
		gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		int tlp=1;
		while(tlp!=0){
			gotoxy(xst,32);howmany[idxst]=getche();
			cv=howmany[idxst];
				if((idxst>0&&idxst<=2)&&cv==13){
					textcolor(15);textbackground(9);
					howmany[idxst]=NULL;
					tlp=0;
				}else if((idxst>0&&idxst<=2)&&cv==8){
					idxst-=1;
					xst--;
					gotoxy(xst,31);textcolor(9);cprintf(" ");
				}/*else if(idxst==2&&cv==13){
					howmany[idxst]=NULL;
					tlp=0;
				}*/else if(idxst==0&&cv==8){
					textcolor(15);textbackground(9);
					gotoxy(xst,32);cprintf("Oops!");Sleep(500);
					gotoxy(xst,32);textcolor(9);cprintf("     ");
				}else if((idxst>=0&&idxst<=2)&&howmany[idxst]>='0'&&howmany[idxst]<='9'){
					textbackground(15);textcolor(9);
					gotoxy(xst,32);cprintf("%c",howmany[idxst]);
					xst++;
					idxst++;
				}else{
					textcolor(15);textbackground(9);
					gotoxy(xst,32);cprintf("Oops!");Sleep(500);
					gotoxy(xst,32);textcolor(9);cprintf("     ");
					xst--;idxst--;
				}
			}atHM=atoi(howmany);
				if(data=='1'){
				boxpopup();
				textcolor(15);textbackground(4);
				gotoxy(65,26);cprintf("Payment");
				gotoxy(58,30);textcolor(15);textbackground(0);cprintf("Your Credit Card Number");
				gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
					int xlp=1;
					while(xlp!=0){
						gotoxy(xcc,32);cc_num[idxcc]=getche();
						cv=cc_num[idxcc];
							if((idxcc>=0&&idxcc<=8)&&cv==13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Min 10");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if(idxcc==12&&cv!=13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Max 13");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>0&&idxcc<=12)&&cv==8){
								idxcc-=1;
								xcc--;
								gotoxy(xcc,32);textcolor(9);cprintf(" ");
							}else if((idxcc>8&&idxcc<=12)&&cv==13){
								cc_num[idxcc]=NULL;
								indexNCR++;
								xlp=0;
							}else if(idxcc==0&&cv==8){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>=0&&idxcc<12)&&cc_num[idxcc]>='0'&&cc_num[idxcc]<='9'){
								textbackground(15);textcolor(9);
								gotoxy(xcc,32);cprintf("%c",cc_num[idxcc]);
								xcc++;
								idxcc++;
							}else{
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
								xcc--;idxcc--;
							}
						}
				del();
				seatsel(atHM,114);
				}
				else if(data=='2'){
				boxpopup();
				textcolor(15);textbackground(4);
				gotoxy(65,26);cprintf("Payment");
				gotoxy(58,30);textcolor(15);textbackground(0);cprintf("Your Credit Card Number");
				gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
					int xlp=1;
					while(xlp!=0){
						gotoxy(xcc,32);cc_num[idxcc]=getche();
						cv=cc_num[idxcc];
							if((idxcc>=0&&idxcc<=8)&&cv==13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Min 10");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if(idxcc==12&&cv!=13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Max 13");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>0&&idxcc<=12)&&cv==8){
								idxcc-=1;
								xcc--;
								gotoxy(xcc,32);textcolor(9);cprintf(" ");
							}else if((idxcc>8&&idxcc<=12)&&cv==13){
								cc_num[idxcc]=NULL;
								indexNCR++;
								xlp=0;
							}else if(idxcc==0&&cv==8){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>=0&&idxcc<12)&&cc_num[idxcc]>='0'&&cc_num[idxcc]<='9'){
								textbackground(15);textcolor(9);
								gotoxy(xcc,32);cprintf("%c",cc_num[idxcc]);
								xcc++;
								idxcc++;
							}else{
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
								xcc--;idxcc--;
							}
						}
				del();
				seatsel(atHM,116);
				}
				else if(data=='3'){
				boxpopup();
				textcolor(15);textbackground(4);
				gotoxy(65,26);cprintf("Payment");
				gotoxy(58,30);textcolor(15);textbackground(0);cprintf("Your Credit Card Number");
				gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
					int xlp=1;
					while(xlp!=0){
						gotoxy(xcc,32);cc_num[idxcc]=getche();
						cv=cc_num[idxcc];
							if((idxcc>=0&&idxcc<=8)&&cv==13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Min 10");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if(idxcc==12&&cv!=13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Max 13");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>0&&idxcc<=12)&&cv==8){
								idxcc-=1;
								xcc--;
								gotoxy(xcc,32);textcolor(9);cprintf(" ");
							}else if((idxcc>8&&idxcc<=12)&&cv==13){
								cc_num[idxcc]=NULL;
								indexNCR++;
								xlp=0;
							}else if(idxcc==0&&cv==8){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>=0&&idxcc<12)&&cc_num[idxcc]>='0'&&cc_num[idxcc]<='9'){
								textbackground(15);textcolor(9);
								gotoxy(xcc,32);cprintf("%c",cc_num[idxcc]);
								xcc++;
								idxcc++;
							}else{
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
								xcc--;idxcc--;
							}
						}
				del();
				seatsel(atHM,122);
				}

	}
	else if(inSLmv==2){
		boxpopup();
		textcolor(15);textbackground(4);
		gotoxy(60,26);cprintf("How Many Tickets?");
		gotoxy(54,30);textcolor(15);textbackground(0);cprintf("How many tickets that you want?");
		gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		int tlp=1;
		while(tlp!=0){
			gotoxy(xst,32);howmany[idxst]=getche();
			cv=howmany[idxst];
				if((idxst>0&&idxst<=2)&&cv==13){
					textcolor(15);textbackground(9);
					howmany[idxst]=NULL;
					tlp=0;
				}else if((idxst>0&&idxst<=2)&&cv==8){
					idxst-=1;
					xst--;
					gotoxy(xst,31);textcolor(9);cprintf(" ");
				}/*else if(idxst==2&&cv==13){
					howmany[idxst]=NULL;
					tlp=0;
				}*/else if(idxst==0&&cv==8){
					textcolor(15);textbackground(9);
					gotoxy(xst,32);cprintf("Oops!");Sleep(500);
					gotoxy(xst,32);textcolor(9);cprintf("     ");
				}else if((idxst>=0&&idxst<=2)&&howmany[idxst]>='0'&&howmany[idxst]<='9'){
					textbackground(15);textcolor(9);
					gotoxy(xst,32);cprintf("%c",howmany[idxst]);
					xst++;
					idxst++;
				}else{
					textcolor(15);textbackground(9);
					gotoxy(xst,32);cprintf("Oops!");Sleep(500);
					gotoxy(xst,32);textcolor(9);cprintf("     ");
					xst--;idxst--;
				}
			}atHM=atoi(howmany);
				if(data=='1'){
				boxpopup();
				textcolor(15);textbackground(4);
				gotoxy(65,26);cprintf("Payment");
				gotoxy(58,30);textcolor(15);textbackground(0);cprintf("Your Credit Card Number");
				gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
					int xlp=1;
					while(xlp!=0){
						gotoxy(xcc,32);cc_num[idxcc]=getche();
						cv=cc_num[idxcc];
							if((idxcc>=0&&idxcc<=8)&&cv==13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Min 10");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if(idxcc==12&&cv!=13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Max 13");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>0&&idxcc<=12)&&cv==8){
								idxcc-=1;
								xcc--;
								gotoxy(xcc,32);textcolor(9);cprintf(" ");
							}else if((idxcc>8&&idxcc<=12)&&cv==13){
								cc_num[idxcc]=NULL;
								indexNCR++;
								xlp=0;
							}else if(idxcc==0&&cv==8){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>=0&&idxcc<12)&&cc_num[idxcc]>='0'&&cc_num[idxcc]<='9'){
								textbackground(15);textcolor(9);
								gotoxy(xcc,32);cprintf("%c",cc_num[idxcc]);
								xcc++;
								idxcc++;
							}else{
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
								xcc--;idxcc--;
							}
						}
				del();
				seatsel(atHM,214);
				}
				else if(data=='2'){
				boxpopup();
				textcolor(15);textbackground(4);
				gotoxy(65,26);cprintf("Payment");
				gotoxy(58,30);textcolor(15);textbackground(0);cprintf("Your Credit Card Number");
				gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
					int xlp=1;
					while(xlp!=0){
						gotoxy(xcc,32);cc_num[idxcc]=getche();
						cv=cc_num[idxcc];
							if((idxcc>=0&&idxcc<=8)&&cv==13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Min 10");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if(idxcc==12&&cv!=13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Max 13");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>0&&idxcc<=12)&&cv==8){
								idxcc-=1;
								xcc--;
								gotoxy(xcc,32);textcolor(9);cprintf(" ");
							}else if((idxcc>8&&idxcc<=12)&&cv==13){
								cc_num[idxcc]=NULL;
								indexNCR++;
								xlp=0;
							}else if(idxcc==0&&cv==8){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>=0&&idxcc<12)&&cc_num[idxcc]>='0'&&cc_num[idxcc]<='9'){
								textbackground(15);textcolor(9);
								gotoxy(xcc,32);cprintf("%c",cc_num[idxcc]);
								xcc++;
								idxcc++;
							}else{
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
								xcc--;idxcc--;
							}
						}
				del();
				seatsel(atHM,220);
				}
				else if(data=='3'){
				boxpopup();
				textcolor(15);textbackground(4);
				gotoxy(65,26);cprintf("Payment");
				gotoxy(58,30);textcolor(15);textbackground(0);cprintf("Your Credit Card Number");
				gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
					int xlp=1;
					while(xlp!=0){
						gotoxy(xcc,32);cc_num[idxcc]=getche();
						cv=cc_num[idxcc];
							if((idxcc>=0&&idxcc<=8)&&cv==13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Min 10");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if(idxcc==12&&cv!=13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Max 13");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>0&&idxcc<=12)&&cv==8){
								idxcc-=1;
								xcc--;
								gotoxy(xcc,32);textcolor(9);cprintf(" ");
							}else if((idxcc>8&&idxcc<=12)&&cv==13){
								cc_num[idxcc]=NULL;
								indexNCR++;
								xlp=0;
							}else if(idxcc==0&&cv==8){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>=0&&idxcc<12)&&cc_num[idxcc]>='0'&&cc_num[idxcc]<='9'){
								textbackground(15);textcolor(9);
								gotoxy(xcc,32);cprintf("%c",cc_num[idxcc]);
								xcc++;
								idxcc++;
							}else{
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
								xcc--;idxcc--;
							}
						}
				del();
				seatsel(atHM,222);
				}

	}
	else if(inSLmv==3){
		boxpopup();
		textcolor(15);textbackground(4);
		gotoxy(60,26);cprintf("How Many Tickets?");
		gotoxy(54,30);textcolor(15);textbackground(0);cprintf("How many tickets that you want?");
		gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		int tlp=1;
		while(tlp!=0){
			gotoxy(xst,32);howmany[idxst]=getche();
			cv=howmany[idxst];
				if((idxst>0&&idxst<=2)&&cv==13){
					textcolor(15);textbackground(9);
					howmany[idxst]=NULL;
					tlp=0;
				}else if((idxst>0&&idxst<=2)&&cv==8){
					idxst-=1;
					xst--;
					gotoxy(xst,31);textcolor(9);cprintf(" ");
				}/*else if(idxst==2&&cv==13){
					howmany[idxst]=NULL;
					tlp=0;
				}*/else if(idxst==0&&cv==8){
					textcolor(15);textbackground(9);
					gotoxy(xst,32);cprintf("Oops!");Sleep(500);
					gotoxy(xst,32);textcolor(9);cprintf("     ");
				}else if((idxst>=0&&idxst<=2)&&howmany[idxst]>='0'&&howmany[idxst]<='9'){
					textbackground(15);textcolor(9);
					gotoxy(xst,32);cprintf("%c",howmany[idxst]);
					xst++;
					idxst++;
				}else{
					textcolor(15);textbackground(9);
					gotoxy(xst,32);cprintf("Oops!");Sleep(500);
					gotoxy(xst,32);textcolor(9);cprintf("     ");
					xst--;idxst--;
				}
			}atHM=atoi(howmany);
				if(data=='1'){
				boxpopup();
				textcolor(15);textbackground(4);
				gotoxy(65,26);cprintf("Payment");
				gotoxy(58,30);textcolor(15);textbackground(0);cprintf("Your Credit Card Number");
				gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
					int xlp=1;
					while(xlp!=0){
						gotoxy(xcc,32);cc_num[idxcc]=getche();
						cv=cc_num[idxcc];
							if((idxcc>=0&&idxcc<=8)&&cv==13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Min 10");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if(idxcc==12&&cv!=13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Max 13");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>0&&idxcc<=12)&&cv==8){
								idxcc-=1;
								xcc--;
								gotoxy(xcc,32);textcolor(9);cprintf(" ");
							}else if((idxcc>8&&idxcc<=12)&&cv==13){
								cc_num[idxcc]=NULL;
								indexNCR++;
								xlp=0;
							}else if(idxcc==0&&cv==8){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>=0&&idxcc<12)&&cc_num[idxcc]>='0'&&cc_num[idxcc]<='9'){
								textbackground(15);textcolor(9);
								gotoxy(xcc,32);cprintf("%c",cc_num[idxcc]);
								xcc++;
								idxcc++;
							}else{
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
								xcc--;idxcc--;
							}
						}
				del();
				seatsel(atHM,316);
				}
				else if(data=='2'){
				boxpopup();
				textcolor(15);textbackground(4);
				gotoxy(65,26);cprintf("Payment");
				gotoxy(58,30);textcolor(15);textbackground(0);cprintf("Your Credit Card Number");
				gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
					int xlp=1;
					while(xlp!=0){
						gotoxy(xcc,32);cc_num[idxcc]=getche();
						cv=cc_num[idxcc];
							if((idxcc>=0&&idxcc<=8)&&cv==13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Min 10");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if(idxcc==12&&cv!=13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Max 13");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>0&&idxcc<=12)&&cv==8){
								idxcc-=1;
								xcc--;
								gotoxy(xcc,32);textcolor(9);cprintf(" ");
							}else if((idxcc>8&&idxcc<=12)&&cv==13){
								cc_num[idxcc]=NULL;
								indexNCR++;
								xlp=0;
							}else if(idxcc==0&&cv==8){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>=0&&idxcc<12)&&cc_num[idxcc]>='0'&&cc_num[idxcc]<='9'){
								textbackground(15);textcolor(9);
								gotoxy(xcc,32);cprintf("%c",cc_num[idxcc]);
								xcc++;
								idxcc++;
							}else{
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
								xcc--;idxcc--;
							}
						}
				del();
				seatsel(atHM,320);
				}
	}
	else if(inSLmv==4){
		boxpopup();
		textcolor(15);textbackground(4);
		gotoxy(60,26);cprintf("How Many Tickets?");
		gotoxy(54,30);textcolor(15);textbackground(0);cprintf("How many tickets that you want?");
		gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		int tlp=1;
		while(tlp!=0){
			gotoxy(xst,32);howmany[idxst]=getche();
			cv=howmany[idxst];
				if((idxst>0&&idxst<=2)&&cv==13){
					textcolor(15);textbackground(9);
					howmany[idxst]=NULL;
					tlp=0;
				}else if((idxst>0&&idxst<=2)&&cv==8){
					idxst-=1;
					xst--;
					gotoxy(xst,31);textcolor(9);cprintf(" ");
				}/*else if(idxst==2&&cv==13){
					howmany[idxst]=NULL;
					tlp=0;
				}*/else if(idxst==0&&cv==8){
					textcolor(15);textbackground(9);
					gotoxy(xst,32);cprintf("Oops!");Sleep(500);
					gotoxy(xst,32);textcolor(9);cprintf("     ");
				}else if((idxst>=0&&idxst<=2)&&howmany[idxst]>='0'&&howmany[idxst]<='9'){
					textbackground(15);textcolor(9);
					gotoxy(xst,32);cprintf("%c",howmany[idxst]);
					xst++;
					idxst++;
				}else{
					textcolor(15);textbackground(9);
					gotoxy(xst,32);cprintf("Oops!");Sleep(500);
					gotoxy(xst,32);textcolor(9);cprintf("     ");
					xst--;idxst--;
				}
			}atHM=atoi(howmany);
				if(data=='1'){
				boxpopup();
				textcolor(15);textbackground(4);
				gotoxy(65,26);cprintf("Payment");
				gotoxy(58,30);textcolor(15);textbackground(0);cprintf("Your Credit Card Number");
				gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
					int xlp=1;
					while(xlp!=0){
						gotoxy(xcc,32);cc_num[idxcc]=getche();
						cv=cc_num[idxcc];
							if((idxcc>=0&&idxcc<=8)&&cv==13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Min 10");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if(idxcc==12&&cv!=13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Max 13");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>0&&idxcc<=12)&&cv==8){
								idxcc-=1;
								xcc--;
								gotoxy(xcc,32);textcolor(9);cprintf(" ");
							}else if((idxcc>8&&idxcc<=12)&&cv==13){
								cc_num[idxcc]=NULL;
								indexNCR++;
								xlp=0;
							}else if(idxcc==0&&cv==8){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>=0&&idxcc<12)&&cc_num[idxcc]>='0'&&cc_num[idxcc]<='9'){
								textbackground(15);textcolor(9);
								gotoxy(xcc,32);cprintf("%c",cc_num[idxcc]);
								xcc++;
								idxcc++;
							}else{
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
								xcc--;idxcc--;
							}
						}
				del();
				seatsel(atHM,216);
				}
				else if(data=='2'){
				boxpopup();
				textcolor(15);textbackground(4);
				gotoxy(65,26);cprintf("Payment");
				gotoxy(58,30);textcolor(15);textbackground(0);cprintf("Your Credit Card Number");
				gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
					int xlp=1;
					while(xlp!=0){
						gotoxy(xcc,32);cc_num[idxcc]=getche();
						cv=cc_num[idxcc];
							if((idxcc>=0&&idxcc<=8)&&cv==13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Min 10");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if(idxcc==12&&cv!=13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Max 13");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>0&&idxcc<=12)&&cv==8){
								idxcc-=1;
								xcc--;
								gotoxy(xcc,32);textcolor(9);cprintf(" ");
							}else if((idxcc>8&&idxcc<=12)&&cv==13){
								cc_num[idxcc]=NULL;
								indexNCR++;
								xlp=0;
							}else if(idxcc==0&&cv==8){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>=0&&idxcc<12)&&cc_num[idxcc]>='0'&&cc_num[idxcc]<='9'){
								textbackground(15);textcolor(9);
								gotoxy(xcc,32);cprintf("%c",cc_num[idxcc]);
								xcc++;
								idxcc++;
							}else{
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
								xcc--;idxcc--;
							}
						}
				del();
				seatsel(atHM,314);
				}
	}
	else if(inSLmv==5){
		boxpopup();
		textcolor(15);textbackground(4);
		gotoxy(60,26);cprintf("How Many Tickets?");
		gotoxy(54,30);textcolor(15);textbackground(0);cprintf("How many tickets that you want?");
		gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		int tlp=1;
		while(tlp!=0){
			gotoxy(xst,32);howmany[idxst]=getche();
			cv=howmany[idxst];
				if((idxst>0&&idxst<=2)&&cv==13){
					textcolor(15);textbackground(9);
					howmany[idxst]=NULL;
					tlp=0;
				}else if((idxst>0&&idxst<=2)&&cv==8){
					idxst-=1;
					xst--;
					gotoxy(xst,31);textcolor(9);cprintf(" ");
				}/*else if(idxst==2&&cv==13){
					howmany[idxst]=NULL;
					tlp=0;
				}*/else if(idxst==0&&cv==8){
					textcolor(15);textbackground(9);
					gotoxy(xst,32);cprintf("Oops!");Sleep(500);
					gotoxy(xst,32);textcolor(9);cprintf("     ");
				}else if((idxst>=0&&idxst<=2)&&howmany[idxst]>='0'&&howmany[idxst]<='9'){
					textbackground(15);textcolor(9);
					gotoxy(xst,32);cprintf("%c",howmany[idxst]);
					xst++;
					idxst++;
				}else{
					textcolor(15);textbackground(9);
					gotoxy(xst,32);cprintf("Oops!");Sleep(500);
					gotoxy(xst,32);textcolor(9);cprintf("     ");
					xst--;idxst--;
				}
			}atHM=atoi(howmany);
				if(data=='1'){
				boxpopup();
				textcolor(15);textbackground(4);
				gotoxy(65,26);cprintf("Payment");
				gotoxy(58,30);textcolor(15);textbackground(0);cprintf("Your Credit Card Number");
				gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
					int xlp=1;
					while(xlp!=0){
						gotoxy(xcc,32);cc_num[idxcc]=getche();
						cv=cc_num[idxcc];
							if((idxcc>=0&&idxcc<=8)&&cv==13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Min 10");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if(idxcc==12&&cv!=13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Max 13");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>0&&idxcc<=12)&&cv==8){
								idxcc-=1;
								xcc--;
								gotoxy(xcc,32);textcolor(9);cprintf(" ");
							}else if((idxcc>8&&idxcc<=12)&&cv==13){
								cc_num[idxcc]=NULL;
								indexNCR++;
								xlp=0;
							}else if(idxcc==0&&cv==8){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>=0&&idxcc<12)&&cc_num[idxcc]>='0'&&cc_num[idxcc]<='9'){
								textbackground(15);textcolor(9);
								gotoxy(xcc,32);cprintf("%c",cc_num[idxcc]);
								xcc++;
								idxcc++;
							}else{
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
								xcc--;idxcc--;
							}
						}
				del();
				seatsel(atHM,120);
				}
				else if(data=='2'){
				boxpopup();
				textcolor(15);textbackground(4);
				gotoxy(65,26);cprintf("Payment");
				gotoxy(58,30);textcolor(15);textbackground(0);cprintf("Your Credit Card Number");
				gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
					int xlp=1;
					while(xlp!=0){
						gotoxy(xcc,32);cc_num[idxcc]=getche();
						cv=cc_num[idxcc];
							if((idxcc>=0&&idxcc<=8)&&cv==13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Min 10");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if(idxcc==12&&cv!=13){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Max 13");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>0&&idxcc<=12)&&cv==8){
								idxcc-=1;
								xcc--;
								gotoxy(xcc,32);textcolor(9);cprintf(" ");
							}else if((idxcc>8&&idxcc<=12)&&cv==13){
								cc_num[idxcc]=NULL;
								indexNCR++;
								xlp=0;
							}else if(idxcc==0&&cv==8){
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
							}else if((idxcc>=0&&idxcc<12)&&cc_num[idxcc]>='0'&&cc_num[idxcc]<='9'){
								textbackground(15);textcolor(9);
								gotoxy(xcc,32);cprintf("%c",cc_num[idxcc]);
								xcc++;
								idxcc++;
							}else{
								textcolor(15);textbackground(9);
								gotoxy(xcc,32);cprintf("Oops!");Sleep(500);
								gotoxy(xcc,32);textcolor(9);cprintf("     ");
								xcc--;idxcc--;
							}
						}
				del();
				seatsel(atHM,322);
				}
	}
}
//||||||||||||||||||||| select seat ||||||||||||||||||||||//
void seatsel(int loop,int schd){
	int idx=0;
	char select[3];
	int x=58;
	int cv;
	int sel=1;
	textcolor(0);textbackground(6);
	if(schd==114){
		boxpopup();
			textcolor(15);textbackground(4);
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		while(sel<=loop){
			gotoxy(x,32);select[idx]=getche();
			cv=select[idx];
			if(idx==0&&cv==13){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>0&&idx<=2)&&cv==8){
				idx-=1;
				x--;
				gotoxy(x,32);textcolor(6);cprintf(" ");
			}else if((idx>0&&idx<=2)&&cv==13){
				select[idx]=NULL;
					int myseat=atoi(select);
					//for(int x=0;x<30;x++){
						if(seat1_14[myseat-1]==0){
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,32);textcolor(15);textbackground(0);cprintf("Seat %i has booked by you",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								seat1_14[myseat-1]=1;
								sel++;x=58;
								boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
							
						}else{
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,34);textcolor(15);textbackground(0);cprintf("Seat %i has taken by other",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								sel+=0;x=58;
							boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
						}
					//}
					idx=0;
			}else if(idx==0&&cv==8){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>=0&&idx<2)&&select[idx]>='0'&&select[idx]<='9'){
				textbackground(6);textcolor(0);
				gotoxy(x,32);cprintf("%c",select[idx]);
				x++;
				idx++;
			}else{
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
				x--;idx--;
			}
		}
			
	}
	else if(schd==116){
		boxpopup();
			textcolor(15);textbackground(4);
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		while(sel<=loop){
			gotoxy(x,32);select[idx]=getche();
			cv=select[idx];
			if(idx==0&&cv==13){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>0&&idx<=2)&&cv==8){
				idx-=1;
				x--;
				gotoxy(x,32);textcolor(6);cprintf(" ");
			}else if((idx>0&&idx<=2)&&cv==13){
				select[idx]=NULL;
					int myseat=atoi(select);
					//for(int x=0;x<30;x++){
						if(seat1_16[myseat-1]==0){
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,32);textcolor(15);textbackground(0);cprintf("Seat %i has booked by you",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								seat1_16[myseat-1]=1;
								sel++;x=58;
								boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
							
						}else{
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,34);textcolor(15);textbackground(0);cprintf("Seat %i has taken by other",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								sel+=0;x=58;
							boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
						}
					//}
					idx=0;
			}else if(idx==0&&cv==8){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>=0&&idx<2)&&select[idx]>='0'&&select[idx]<='9'){
				textbackground(6);textcolor(0);
				gotoxy(x,32);cprintf("%c",select[idx]);
				x++;
				idx++;
			}else{
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
				x--;idx--;
			}
		}
			
	}
	else if(schd==122){
		boxpopup();
			textcolor(15);textbackground(4);
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		while(sel<=loop){
			gotoxy(x,32);select[idx]=getche();
			cv=select[idx];
			if(idx==0&&cv==13){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>0&&idx<=2)&&cv==8){
				idx-=1;
				x--;
				gotoxy(x,32);textcolor(6);cprintf(" ");
			}else if((idx>0&&idx<=2)&&cv==13){
				select[idx]=NULL;
					int myseat=atoi(select);
					//for(int x=0;x<30;x++){
						if(seat1_22[myseat-1]==0){
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,32);textcolor(15);textbackground(0);cprintf("Seat %i has booked by you",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								seat1_22[myseat-1]=1;
								sel++;x=58;
								boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
							
						}else{
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,34);textcolor(15);textbackground(0);cprintf("Seat %i has taken by other",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								sel+=0;x=58;
							boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
						}
					//}
					idx=0;
			}else if(idx==0&&cv==8){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>=0&&idx<2)&&select[idx]>='0'&&select[idx]<='9'){
				textbackground(6);textcolor(0);
				gotoxy(x,32);cprintf("%c",select[idx]);
				x++;
				idx++;
			}else{
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
				x--;idx--;
			}
		}
			
	}
	else if(schd==214){
		boxpopup();
			textcolor(15);textbackground(4);
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		while(sel<=loop){
			gotoxy(x,32);select[idx]=getche();
			cv=select[idx];
			if(idx==0&&cv==13){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>0&&idx<=2)&&cv==8){
				idx-=1;
				x--;
				gotoxy(x,32);textcolor(6);cprintf(" ");
			}else if((idx>0&&idx<=2)&&cv==13){
				select[idx]=NULL;
					int myseat=atoi(select);
					//for(int x=0;x<30;x++){
						if(seat2_14[myseat-1]==0){
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,32);textcolor(15);textbackground(0);cprintf("Seat %i has booked by you",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								seat2_14[myseat-1]=1;
								sel++;x=58;
								boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
							
						}else{
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,34);textcolor(15);textbackground(0);cprintf("Seat %i has taken by other",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								sel+=0;x=58;
							boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
						}
					//}
					idx=0;
			}else if(idx==0&&cv==8){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>=0&&idx<2)&&select[idx]>='0'&&select[idx]<='9'){
				textbackground(6);textcolor(0);
				gotoxy(x,32);cprintf("%c",select[idx]);
				x++;
				idx++;
			}else{
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
				x--;idx--;
			}
		}
			
	}
	else if(schd==220){
		boxpopup();
			textcolor(15);textbackground(4);
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		while(sel<=loop){
			gotoxy(x,32);select[idx]=getche();
			cv=select[idx];
			if(idx==0&&cv==13){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>0&&idx<=2)&&cv==8){
				idx-=1;
				x--;
				gotoxy(x,32);textcolor(6);cprintf(" ");
			}else if((idx>0&&idx<=2)&&cv==13){
				select[idx]=NULL;
					int myseat=atoi(select);
					//for(int x=0;x<30;x++){
						if(seat2_20[myseat-1]==0){
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,32);textcolor(15);textbackground(0);cprintf("Seat %i has booked by you",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								seat2_20[myseat-1]=1;
								sel++;x=58;
								boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
							
						}else{
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,34);textcolor(15);textbackground(0);cprintf("Seat %i has taken by other",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								sel+=0;x=58;
							boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
						}
					//}
					idx=0;
			}else if(idx==0&&cv==8){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>=0&&idx<2)&&select[idx]>='0'&&select[idx]<='9'){
				textbackground(6);textcolor(0);
				gotoxy(x,32);cprintf("%c",select[idx]);
				x++;
				idx++;
			}else{
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
				x--;idx--;
			}
		}
			
	}
	else if(schd==222){
		boxpopup();
			textcolor(15);textbackground(4);
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		while(sel<=loop){
			gotoxy(x,32);select[idx]=getche();
			cv=select[idx];
			if(idx==0&&cv==13){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>0&&idx<=2)&&cv==8){
				idx-=1;
				x--;
				gotoxy(x,32);textcolor(6);cprintf(" ");
			}else if((idx>0&&idx<=2)&&cv==13){
				select[idx]=NULL;
					int myseat=atoi(select);
					//for(int x=0;x<30;x++){
						if(seat2_22[myseat-1]==0){
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,32);textcolor(15);textbackground(0);cprintf("Seat %i has booked by you",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								seat2_22[myseat-1]=1;
								sel++;x=58;
								boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
							
						}else{
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,34);textcolor(15);textbackground(0);cprintf("Seat %i has taken by other",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								sel+=0;x=58;
							boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
						}
					//}
					idx=0;
			}else if(idx==0&&cv==8){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>=0&&idx<2)&&select[idx]>='0'&&select[idx]<='9'){
				textbackground(6);textcolor(0);
				gotoxy(x,32);cprintf("%c",select[idx]);
				x++;
				idx++;
			}else{
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
				x--;idx--;
			}
		}
			
	}
	else if(schd==316){
		boxpopup();
			textcolor(15);textbackground(4);
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		while(sel<=loop){
			gotoxy(x,32);select[idx]=getche();
			cv=select[idx];
			if(idx==0&&cv==13){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>0&&idx<=2)&&cv==8){
				idx-=1;
				x--;
				gotoxy(x,32);textcolor(6);cprintf(" ");
			}else if((idx>0&&idx<=2)&&cv==13){
				select[idx]=NULL;
					int myseat=atoi(select);
					//for(int x=0;x<30;x++){
						if(seat3_16[myseat-1]==0){
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,32);textcolor(15);textbackground(0);cprintf("Seat %i has booked by you",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								seat3_16[myseat-1]=1;
								sel++;x=58;
								boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
							
						}else{
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,34);textcolor(15);textbackground(0);cprintf("Seat %i has taken by other",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								sel+=0;x=58;
							boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
						}
					//}
					idx=0;
			}else if(idx==0&&cv==8){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>=0&&idx<2)&&select[idx]>='0'&&select[idx]<='9'){
				textbackground(6);textcolor(0);
				gotoxy(x,32);cprintf("%c",select[idx]);
				x++;
				idx++;
			}else{
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
				x--;idx--;
			}
		}
			
	}
	else if(schd==320){
		boxpopup();
			textcolor(15);textbackground(4);
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		while(sel<=loop){
			gotoxy(x,32);select[idx]=getche();
			cv=select[idx];
			if(idx==0&&cv==13){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>0&&idx<=2)&&cv==8){
				idx-=1;
				x--;
				gotoxy(x,32);textcolor(6);cprintf(" ");
			}else if((idx>0&&idx<=2)&&cv==13){
				select[idx]=NULL;
					int myseat=atoi(select);
					//for(int x=0;x<30;x++){
						if(seat3_20[myseat-1]==0){
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,32);textcolor(15);textbackground(0);cprintf("Seat %i has booked by you",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								seat3_20[myseat-1]=1;
								sel++;x=58;
								boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
							
						}else{
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,34);textcolor(15);textbackground(0);cprintf("Seat %i has taken by other",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								sel+=0;x=58;
							boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
						}
					//}
					idx=0;
			}else if(idx==0&&cv==8){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>=0&&idx<2)&&select[idx]>='0'&&select[idx]<='9'){
				textbackground(6);textcolor(0);
				gotoxy(x,32);cprintf("%c",select[idx]);
				x++;
				idx++;
			}else{
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
				x--;idx--;
			}
		}
			
	}
	else if(schd==216){
		boxpopup();
			textcolor(15);textbackground(4);
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		while(sel<=loop){
			gotoxy(x,32);select[idx]=getche();
			cv=select[idx];
			if(idx==0&&cv==13){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>0&&idx<=2)&&cv==8){
				idx-=1;
				x--;
				gotoxy(x,32);textcolor(6);cprintf(" ");
			}else if((idx>0&&idx<=2)&&cv==13){
				select[idx]=NULL;
					int myseat=atoi(select);
					//for(int x=0;x<30;x++){
						if(seat2_16[myseat-1]==0){
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,32);textcolor(15);textbackground(0);cprintf("Seat %i has booked by you",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								seat2_16[myseat-1]=1;
								sel++;x=58;
								boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
							
						}else{
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,34);textcolor(15);textbackground(0);cprintf("Seat %i has taken by other",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								sel+=0;x=58;
							boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
						}
					//}
					idx=0;
			}else if(idx==0&&cv==8){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>=0&&idx<2)&&select[idx]>='0'&&select[idx]<='9'){
				textbackground(6);textcolor(0);
				gotoxy(x,32);cprintf("%c",select[idx]);
				x++;
				idx++;
			}else{
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
				x--;idx--;
			}
		}
			
	}
	else if(schd==314){
		boxpopup();
			textcolor(15);textbackground(4);
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		while(sel<=loop){
			gotoxy(x,32);select[idx]=getche();
			cv=select[idx];
			if(idx==0&&cv==13){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>0&&idx<=2)&&cv==8){
				idx-=1;
				x--;
				gotoxy(x,32);textcolor(6);cprintf(" ");
			}else if((idx>0&&idx<=2)&&cv==13){
				select[idx]=NULL;
					int myseat=atoi(select);
					//for(int x=0;x<30;x++){
						if(seat3_14[myseat-1]==0){
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,32);textcolor(15);textbackground(0);cprintf("Seat %i has booked by you",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								seat3_14[myseat-1]=1;
								sel++;x=58;
								boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
							
						}else{
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,34);textcolor(15);textbackground(0);cprintf("Seat %i has taken by other",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								sel+=0;x=58;
							boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
						}
					//}
					idx=0;
			}else if(idx==0&&cv==8){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>=0&&idx<2)&&select[idx]>='0'&&select[idx]<='9'){
				textbackground(6);textcolor(0);
				gotoxy(x,32);cprintf("%c",select[idx]);
				x++;
				idx++;
			}else{
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
				x--;idx--;
			}
		}
			
	}
	else if(schd==120){
		boxpopup();
			textcolor(15);textbackground(4);
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		while(sel<=loop){
			gotoxy(x,32);select[idx]=getche();
			cv=select[idx];
			if(idx==0&&cv==13){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>0&&idx<=2)&&cv==8){
				idx-=1;
				x--;
				gotoxy(x,32);textcolor(6);cprintf(" ");
			}else if((idx>0&&idx<=2)&&cv==13){
				select[idx]=NULL;
					int myseat=atoi(select);
					//for(int x=0;x<30;x++){
						if(seat1_20[myseat-1]==0){
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,32);textcolor(15);textbackground(0);cprintf("Seat %i has booked by you",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								seat1_20[myseat-1]=1;
								sel++;x=58;
								boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
							
						}else{
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,34);textcolor(15);textbackground(0);cprintf("Seat %i has taken by other",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								sel+=0;x=58;
							boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
						}
					//}
					idx=0;
			}else if(idx==0&&cv==8){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>=0&&idx<2)&&select[idx]>='0'&&select[idx]<='9'){
				textbackground(6);textcolor(0);
				gotoxy(x,32);cprintf("%c",select[idx]);
				x++;
				idx++;
			}else{
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
				x--;idx--;
			}
		}
			
	}
	else if(schd==322){
		boxpopup();
			textcolor(15);textbackground(4);
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
		while(sel<=loop){
			gotoxy(x,32);select[idx]=getche();
			cv=select[idx];
			if(idx==0&&cv==13){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>0&&idx<=2)&&cv==8){
				idx-=1;
				x--;
				gotoxy(x,32);textcolor(6);cprintf(" ");
			}else if((idx>0&&idx<=2)&&cv==13){
				select[idx]=NULL;
					int myseat=atoi(select);
					//for(int x=0;x<30;x++){
						if(seat3_22[myseat-1]==0){
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,32);textcolor(15);textbackground(0);cprintf("Seat %i has booked by you",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								seat3_22[myseat-1]=1;
								sel++;x=58;
								boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
							
						}else{
							boxpopup();
							textcolor(15);textbackground(4);
							gotoxy(65,26);cprintf("Message");
							gotoxy(54,34);textcolor(15);textbackground(0);cprintf("Seat %i has taken by other",myseat);
								for(int load=0;load<2;load++){
									Sleep(500);
								}
								sel+=0;x=58;
							boxpopup();
			gotoxy(59,26);cprintf("Select seat number");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Which seat do you want (1-30)");
			gotoxy(58,32);textcolor(9);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
			
						}
					//}
					idx=0;
			}else if(idx==0&&cv==8){
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
			}else if((idx>=0&&idx<2)&&select[idx]>='0'&&select[idx]<='9'){
				textbackground(6);textcolor(0);
				gotoxy(x,32);cprintf("%c",select[idx]);
				x++;
				idx++;
			}else{
				gotoxy(x,32);cprintf("Oops!");Sleep(500);
				gotoxy(x,32);textcolor(6);cprintf("     ");
				x--;idx--;
			}
		}
			
	}
		boxpopup();
		textcolor(15);textbackground(4);
			gotoxy(59,26);cprintf("Message");
			gotoxy(54,30);textcolor(15);textbackground(0);cprintf("Your booking code is ready");
			gotoxy(54,32);textcolor(9);cprintf("Booking Code : %i",randomb());
			getch();delV();del();en_showlist();
}
//|||||||||||||||||||||||| en.LOGOUT ||||||||||||||||||||||||||//
void en_logout(){
	boxpopup();
	textcolor(15);textbackground(4);
	gotoxy(65,26);cprintf("Message");
	gotoxy(54,34);textcolor(15);textbackground(0);cprintf("GOODBYE, SEE YOU LATER");
		for(int load=0;load<2;load++){
			Sleep(500);
		}
		del();
		greeting();
	en_mainmenu();
}
//|||||||||||||||||||||||| TRAILERS ||||||||||||||||||||||||||//
void trailers(){
   if(inSLmv==1){
	   system("cmd /c start https://www.youtube.com/watch?v=95ghQs5AmNk");
   }else if(inSLmv==2){
	   system("cmd /c start https://www.youtube.com/watch?v=Dt1EEV-Szu4");
   }else if(inSLmv==3){
	   system("cmd /c start https://www.youtube.com/watch?v=N9ymyIhAUV0");
   }else if(inSLmv==4){
	   system("cmd /c start https://www.youtube.com/watch?v=6dSKUoV0SNI");
   }else if(inSLmv==5){
	   system("cmd /c start https://www.youtube.com/watch?v=Ka_sXVHV17Y");
   }
}
//|||||||||||||||||||||||| BOX FORM ||||||||||||||||||||||||||//
void box_form(int coX,int coY){
   //textcolor(3);textbackground(7);
	for (int g=1;g<=36;g++){
   	textcolor(3);gotoxy(coX,coY);cprintf("%c",219);
      coX++;
   }
}
//||||||||||||||||||||||| BOX FORM2 ||||||||||||||||||||||||||//
void box_form2(int coX,int coY){
   textcolor(3);
   int b=coX;
	for (int g=coX;g<=b+15;g++){
   	textcolor(3);gotoxy(coX,coY);cprintf("%c",219);
      coX++;
   }
}
//|||||||||||||||||||||||| CHAPTCHA ||||||||||||||||||||||||||//
void chaptcha(){
	int randomL;
	for(int box=1;box<=9;box++){
		gotoxy(50+box,31);cprintf("%c",219);
		gotoxy(50+box,32);cprintf("%c",219);
		gotoxy(50+box,33);cprintf("%c",219);
	}
	ret_CHP=chaptchaR();
	textcolor(15);textbackground(4);gotoxy(53,32);cprintf("%i %i %i",ret_CHP/100%10,ret_CHP/10%10,ret_CHP%10);
}
//||||||||||||||||||||||| F CHAPTCHA |||||||||||||||||||||||||//
int chaptchaR(){
	int randomL;
	srand(time(0));
	rand;
	randomL=rand()%((999-111)+1)+111;
	return randomL;
}   
//||||||||||||||||||||||| random |||||||||||||||||||||||||//
int randomb(){
	int randomL;
	srand(time(0));
	rand;
	randomL=rand()%((9999-1111)+1)+1111;
	return randomL;
}  
//||||||||||||||||||||||| BOX POPUP ||||||||||||||||||||||||||//
void boxpopup(){
	textbackground(6);
	for (int x=38;x<=98;x++){
		for(int y=24;y<=39;y++){
			if(x==38 || y==24 || x==98 || y==39){
				gotoxy(x,y);textcolor(1);cprintf("%c",249);
			}else if(y>=25 && y<=28){
				gotoxy(x,y);textcolor(4);cprintf("%c",219);
			}else{
				gotoxy(x,y);textcolor(0);cprintf("%c",219);
			}
		}

	}

}
//||||||||||||||||||||||||| DELETE |||||||||||||||||||||||||||//
void del(){
textbackground(6);
		for(int d=0;d<=90;d++){
         for(int e=0;e<=41;e++){
       		textcolor(6);
				gotoxy(d+19,e+9);cprintf(" ");
       	}
      }
}
//||||||||||||||||||||||||| DELETE |||||||||||||||||||||||||||//
void delV(){
	for(int a=0;a<=18;a++){
         for(int v=9;v<=50;v++){
      		textcolor(6);
         	if((a==1&&v==1)||a==18){
            	gotoxy(a,v);textcolor(1);cprintf("%c",178);
         	}
        		else{
         		gotoxy(a,v);cprintf("%c",219);
         	}
      	}printf("\n");
    }
}
//||||||||||||||||||||||| ID. SIGN |||||||||||||||||||||||||||//
void signUP(){
	textbackground(6);textcolor(15);
   gotoxy(49,50);cprintf("");
}
//||||||||||||||||||||||| GREETING |||||||||||||||||||||||||||//
void greeting(){
	for(int col=20;col>0;col--){
   	textcolor(col);textbackground(6);
      for(int y=20;y<40;y++){
      	for(int x=50;x<85;x++){
         	if(x==50 || x==84 || y==20 || y==39){
            	gotoxy(x,y);cprintf("%c",178);
            }
         }
         printf("\n");
         Sleep(6);
      }
      gotoxy(60,24);cprintf("  ##       ##");
      gotoxy(60,25);cprintf("  ##       ##");
      gotoxy(60,26);cprintf("###############");
      gotoxy(60,27);cprintf("  ##       ##");
      gotoxy(60,28);cprintf("  ##       ##");
      gotoxy(60,29);cprintf("###############");
      gotoxy(60,30);cprintf("  ##       ##");
      gotoxy(60,31);cprintf("  ##       ##");
      Sleep(5);
      textcolor(col);textbackground(6);gotoxy(63,34);cprintf("WELCOME TO");
		textcolor(col);textbackground(6);gotoxy(60,35);cprintf("#PHOEN1X CINEMA");
   }
  
}
//||||||||||||||||||||||| GREETING |||||||||||||||||||||||||||//
void greeting_ID(){
	for(int col=20;col>0;col--){
   	textcolor(col);textbackground(6);
      for(int y=20;y<40;y++){
      	for(int x=50;x<85;x++){
         	if(x==50 || x==84 || y==20 || y==39){
            	gotoxy(x,y);cprintf("%c",178);
            }
         }
         printf("\n");
         Sleep(6);
      }
      gotoxy(60,24);cprintf("  ##       ##");
      gotoxy(60,25);cprintf("  ##       ##");
      gotoxy(60,26);cprintf("###############");
      gotoxy(60,27);cprintf("  ##       ##");
      gotoxy(60,28);cprintf("  ##       ##");
      gotoxy(60,29);cprintf("###############");
      gotoxy(60,30);cprintf("  ##       ##");
      gotoxy(60,31);cprintf("  ##       ##");
      Sleep(5);
      textcolor(col);textbackground(6);gotoxy(63,34);cprintf("SELAMAT DATANG DI");
		textcolor(col);textbackground(6);gotoxy(60,35);cprintf("#PHOEN1X CINEMA");
   }
  kotak(2,0,6);
  kotak(2,9,15);
  kotak(2,18,24);
  //kotak(2,27,33);
  kotak(2,36,39);
  //char df[5]="DAFTAR";
  //char lg[5]=
}
//||||||||||||||||||||||| LOADING |||||||||||||||||||||||||||//
void loading(){
	for(int col=20;col>0;col--){
   	textcolor(col);textbackground(6);
      gotoxy(60,24);cprintf("  ##       ##");
      gotoxy(60,25);cprintf("  ##       ##");
      gotoxy(60,26);cprintf("###############");
      gotoxy(60,27);cprintf("  ##       ##");
      gotoxy(60,28);cprintf("  ##       ##");
      gotoxy(60,29);cprintf("###############");
      gotoxy(60,30);cprintf("  ##       ##");
      gotoxy(60,31);cprintf("  ##       ##");
      Sleep(5);
   }
}
//||||||||||||||||||||||| ID.MENU  |||||||||||||||||||||||||||//

//------------------------------------------------------------//
//|||||||||||||||||||||||| KOTAK  ||||||||||||||||||||||||||||//
void kotak(int x,int l,int y){
	textcolor(1);
   for(int r=l;r<=y;r++){
      	gotoxy(x,r+10);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   		Sleep(15);
   }
}
//||||||||||||||| VALIDATION OF CHARACTER  |||||||||||||||||||//
int validate_Cc(char data,int coX,int indexA,int indexC){
	int error=0;
	int cvt=data;
	if(coX==75&&cvt==13||cvt==8){
		error=cvt;
	}else if(coX==75&&(cvt!=13||cvt!=8)){
		error=99;
	}else if(surname[indexA][indexC-1]==' '&&data==' '){
		error=9;
	}else if((coX>50&&coX<75)&&data==' '){
		error=0;
	}else if((cvt>=65&&cvt<=90)&&coX!=75){
		error=0;
	}else if((cvt>=97&&cvt<=122)&&coX!=75){
		error=0;
	}else if(coX==50&&data==' '){
		error=9;
	}else if(surname[indexA][indexC-1]==39&&surname[indexA][indexC]==39){
		error=9;
	}else if(cvt==39){
		error=0;
	}else if((cvt==13||cvt==8)&&coX!=50){
		error=cvt;
	}else{
		error=9;
	}
	return error;
}
//||||||||||||| USERNAME CAN'T DUPLICATED  ||||||||||||||||||//
int validate_NODPL(int indexA){
	int error=0;
	int counter=0;
	int a=indexA;
	int b=0;
	for(int iA=0;iA<indexA;iA++){
		if(surname[a]==surname[iA]){
			counter++;
		}else{
			counter+=0;
		}
	}
	if(counter==0){
		error=0;
	}else{
		error=1;
	}
	return error;
}
//||||||||||||||| VALIDATION OF USERNAME  |||||||||||||||||||//
int validate_un(char data,int coX){
	int error=0;
	int cvt=data;
	if(coX==60&&(cvt==13||cvt==8)){
		error=cvt;
	}else if(coX==60&&(cvt!=13||cvt!=8)){
		error=99;
	}else if((cvt>=65&&cvt<=90)&&coX!=60){
		error=0;
	}else if((cvt>=97&&cvt<=122)&&coX!=60){
		error=0;
	}else if((data>='0'&&data<='9')&&coX!=60){
		error=0;
	}else if(data=='_'){
		error=0;
	}else if((cvt==13||cvt==8)&&coX>50){
		error=cvt;
	}else{
		error=9;
	}
	return error;
}
//||||||||||||||| VALIDATION OF PASSWORD  |||||||||||||||||||//
int validate_pw(char data,int coX){
	int error=0;
	int cvt=data;
	if((cvt==13||cvt==8)&&coX>50){
		error=cvt;
	}else if(coX==60&&(cvt!=13||cvt!=8)){
		error=99;
	}else if(coX==50&&(cvt==13||cvt==8)){
		error=9;
	}else{
		error=0;
	}
	return error;
}
//||||||||||||||| VALIDATION OF EMAIL  |||||||||||||||||||//
int validate_em(int data){
	int error=0;
	int counterAT=0;
	for(int a=0;email[data][a]!=NULL;a++){
		if(email[data][a]=='@'){
			counterAT++;
		}else{
			counterAT+=0;
		}
	}
	if(counterAT==1){
		for(int a=0;email[data][a]!=NULL;a++){
			if(email[data][a]=='.'&&email[data][a-1]=='.'){
				error++;
			}else if(email[data][a]=='_'&&email[data][a-1]=='_'){
				error++;
			}else if(email[data][a]>='0'&&email[data][a]<='9'){
				error+=0;
			}else if(email[data][a]>='a'&&email[data][a]<='z'){
				error+=0;
			}else if(email[data][a]>='A'&&email[data][a]<='Z'){
				error+=0;
			}else if(email[data][a]=='.'){
				error+=0;
			}else if(email[data][a]=='_'){
				error+=0;
			}else if(email[data][a]=='@'&&email[data][a-1]!='@'){
				error+=0;
			}else{
				error++;
			}
		}
	}else{
		error++;
	}
	return error;
}
//||||||||||||||| VALIDATION OF PHONE  |||||||||||||||||||//
int validate_PH(int data){
	int error=0;
	//int cvt=data;
	char cphone[14]="08";
	strcat(cphone,phone[data]);
	for(int i=0;cphone[i]!=NULL;i++){
		phone[data][i]=cphone[i];
	}
	for(int x=0;phone[data][x]!=NULL;x++){
		if(phone[data][x]>='0'&&phone[data][x]<='9'){
			error+=0;
		}else{
			error++;
		}
	}
	return error;
}
//------------------------------------------------------------//
/////////////////////////// MAIN ///////////////////////////////
//------------------------------------------------------------//
main(){
	system("TITLE Ragil Hadiworo Project - #PHOEN1X CINEMA");
	//margin();
   //vis_SignUp();
   //id_greeting();
   en_showlist();
   getch();
}
//------------------------------------------------------------//