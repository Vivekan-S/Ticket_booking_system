//Online Movie Ticket Booking System
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>

COORD coordinates={0,0};
char movie[4][30]={"Comrade In America (U)","Skyscraper (U)","Karnan (U/A)","Sultan (U)"};
char time_A[3][10]={"11:10 AM","04:30 PM","09:50 PM"};
char time_B[3][10]={"10:40 AM","03:15 PM","08:45 PM"};
char time_C[3][10]={"11:35 AM","03:50 PM","10:15 PM"};
char time_D[3][10]={"12:45 PM","06:15 PM","10:00 PM"};
int movie_num;
int movie_time;
void movie_list_main();
void movie_list_sub();
void book();
void cancel();
void booking_list();
void display();
void set_color(int sample);
void gotoxy(int x,int y);

struct node
{
 char name[10][30];
 char code;
 int seats;
 float price;
 float tprice;
 struct node *next;
};
struct node *head,*new,*cur;

void main()
{
 int n;
 head=NULL;
 while(1)
 {
  system("cls");
  system("COLOR FC");
  set_color(0);delay(500);printf("\n\t----------------------------------------------------------------------------------------------------------");
  set_color(4);delay(100);printf("\n\n\t\t\t\t\t   ONLINE MOVIE TICKET BOOKING SYSTEM   \t\t\t\t\t\n");
  set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
  printf("\n\n\t\t");set_color(1);delay(200);printf("1) Movie List\n\t\t");set_color(1);delay(200);printf("2) Ticket Booking\n\t\t");set_color(1);delay(200);
  printf("3) Ticket Cancellation\n\t\t");set_color(1);delay(200);printf("4) Booking List\n\t\t");set_color(1);delay(200);printf("5) Exit");
  set_color(2);delay(200);printf("\n\n\t\tEnter your choice ( 1 to 5 ) : ");set_color(0);
  scanf("%d",&n);
  switch(n)
  {
   case 1:
          movie_list_main();
          break;

   case 2:
          book();
          break;

   case 3:
          cancel();
          break;

   case 4:
          booking_list();
          break;

   case 5:
          set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
          set_color(4);delay(100);printf("\n\n\t\t\t\t\t     Thank You For Visiting Us !     \t\t\t\t\t\n");
          set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
          set_color(1);delay(200);printf("\n");set_color(0);
          exit(0);
          break;

   default:
          set_color(2);delay(200);printf("\n\n\t\tEnter the Correct Choice ! ");
          break;
  }
  getch();
 }
 getch();
}

void movie_list_main()
{
 system("cls");
 set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
 set_color(4);delay(100);printf("\n\n\t\t\t\t\t\t       Movie List       \t\t\t\t\t\t\n");
 set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
 set_color(0);delay(200);printf("\n\n\t\t1)  -->");set_color(12);printf("  Name :           ");set_color(1);printf("%s",movie[0]);
 set_color(12);delay(200);printf("\n\t\t\t Details :        ");set_color(1);printf("2 Hour 14 Minutes , Malayalam");
 set_color(12);delay(200);printf("\n\t\t\t Show Timings :   ");set_color(0);printf("1) ");set_color(1);printf("%s",time_A[0]);set_color(0);printf("\t2) ");set_color(1);printf("%s",time_A[1]);set_color(0);printf("\t3) ");set_color(1);printf("%s",time_A[2]);
 set_color(1);delay(200);printf("\n");
 set_color(0);delay(200);printf("\n\n\t\t2)  -->");set_color(12);printf("  Name :           ");set_color(1);printf("%s",movie[1]);
 set_color(12);delay(200);printf("\n\t\t\t Details :        ");set_color(1);printf("1 Hour 42 Minutes , English");
 set_color(12);delay(200);printf("\n\t\t\t Show Timings :   ");set_color(0);printf("1) ");set_color(1);printf("%s",time_B[0]);set_color(0);printf("\t2) ");set_color(1);printf("%s",time_B[1]);set_color(0);printf("\t3) ");set_color(1);printf("%s",time_B[2]);
 set_color(1);delay(200);printf("\n");
 set_color(0);delay(200);printf("\n\n\t\t3)  -->");set_color(12);printf("  Name :           ");set_color(1);printf("%s",movie[2]);
 set_color(12);delay(200);printf("\n\t\t\t Details :        ");set_color(1);printf("2 Hour 38 Minutes , Tamil");
 set_color(12);delay(200);printf("\n\t\t\t Show Timings :   ");set_color(0);printf("1) ");set_color(1);printf("%s",time_C[0]);set_color(0);printf("\t2) ");set_color(1);printf("%s",time_C[1]);set_color(0);printf("\t3) ");set_color(1);printf("%s",time_C[2]);
 set_color(1);delay(200);printf("\n");
 set_color(0);delay(200);printf("\n\n\t\t4)  -->");set_color(12);printf("  Name :           ");set_color(1);printf("%s",movie[3]);
 set_color(12);delay(200);printf("\n\t\t\t Details :        ");set_color(1);printf("2 Hour 25 Minutes , Tamil");
 set_color(12);delay(200);printf("\n\t\t\t Show Timings :   ");set_color(0);printf("1) ");set_color(1);printf("%s",time_D[0]);set_color(0);printf("\t2) ");set_color(1);printf("%s",time_D[1]);set_color(0);printf("\t3) ");set_color(1);printf("%s",time_D[2]);
 set_color(2);delay(200);printf("\n\n\n\t\tPress Enter to Continue : ");set_color(0);
 return;
}

void movie_list_sub()
{
 system("cls");
 set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
 set_color(4);delay(100);printf("\n\n\t\t\t\t\t\t       Movie List       \t\t\t\t\t\t\n");
 set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
 set_color(0);delay(200);printf("\n\n\t\t1)  -->");set_color(12);printf("  Name :           ");set_color(1);printf("%s",movie[0]);
 set_color(12);delay(200);printf("\n\t\t\t Details :        ");set_color(1);printf("2 Hour 14 Minutes , Malayalam");
 set_color(12);delay(200);printf("\n\t\t\t Show Timings :   ");set_color(0);printf("1) ");set_color(1);printf("%s",time_A[0]);set_color(0);printf("\t2) ");set_color(1);printf("%s",time_A[1]);set_color(0);printf("\t3) ");set_color(1);printf("%s",time_A[2]);
 set_color(1);delay(200);printf("\n");
 set_color(0);delay(200);printf("\n\n\t\t2)  -->");set_color(12);printf("  Name :           ");set_color(1);printf("%s",movie[1]);
 set_color(12);delay(200);printf("\n\t\t\t Details :        ");set_color(1);printf("1 Hour 42 Minutes , English");
 set_color(12);delay(200);printf("\n\t\t\t Show Timings :   ");set_color(0);printf("1) ");set_color(1);printf("%s",time_B[0]);set_color(0);printf("\t2) ");set_color(1);printf("%s",time_B[1]);set_color(0);printf("\t3) ");set_color(1);printf("%s",time_B[2]);
 set_color(1);delay(200);printf("\n");
 set_color(0);delay(200);printf("\n\n\t\t3)  -->");set_color(12);printf("  Name :           ");set_color(1);printf("%s",movie[2]);
 set_color(12);delay(200);printf("\n\t\t\t Details :        ");set_color(1);printf("2 Hour 38 Minutes , Tamil");
 set_color(12);delay(200);printf("\n\t\t\t Show Timings :   ");set_color(0);printf("1) ");set_color(1);printf("%s",time_C[0]);set_color(0);printf("\t2) ");set_color(1);printf("%s",time_C[1]);set_color(0);printf("\t3) ");set_color(1);printf("%s",time_C[2]);
 set_color(1);delay(200);printf("\n");
 set_color(0);delay(200);printf("\n\n\t\t4)  -->");set_color(12);printf("  Name :           ");set_color(1);printf("%s",movie[3]);
 set_color(12);delay(200);printf("\n\t\t\t Details :        ");set_color(1);printf("2 Hour 25 Minutes , Tamil");
 set_color(12);delay(200);printf("\n\t\t\t Show Timings :   ");set_color(0);printf("1) ");set_color(1);printf("%s",time_D[0]);set_color(0);printf("\t2) ");set_color(1);printf("%s",time_D[1]);set_color(0);printf("\t3) ");set_color(1);printf("%s",time_D[2]);
}

void book()
{
 int i;
 new=(struct node *)malloc(sizeof(struct node));
 movie_list_sub();
 set_color(0);delay(100);printf("\n\n\n\t----------------------------------------------------------------------------------------------------------");
 set_color(4);delay(100);printf("\n\n\t\t\t\t\t\t     Ticket Booking     \t\t\t\t\t\t\n");
 set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
 set_color(2);delay(200);printf("\n\n\t\tEnter the Movie Number ( 1 to 4 ) : ");set_color(0);
 scanf("%d",&movie_num);
 if(movie_num!=1&&movie_num!=2&&movie_num!=3&&movie_num!=4)
 {
  set_color(2);delay(200);printf("\n\n\t\tEnter the Correct Movie Number ! ");set_color(0);
  return;
 }
 set_color(2);delay(200);printf("\n\t\tEnter the Show Timing ( 1 to 3 ) : ");set_color(0);
 scanf("%d",&movie_time);
 if(movie_time!=1&&movie_time!=2&&movie_time!=3)
 {
  set_color(2);delay(200);printf("\n\n\t\tEnter the Correct Show Timing ! ");set_color(0);
  return;
 }
 system("cls");
 set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
 set_color(4);delay(100);printf("\n\n\t\t\t\t\t\t     Ticket Booking     \t\t\t\t\t\t\n");
 set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
 set_color(0);delay(200);printf("\n\n\t\tMovie Name :            ");set_color(1);printf("%s",movie[movie_num-1]);
 if(movie_num==1)
 {
  set_color(0);delay(200);printf("\n\n\t\tShow Timing :           ");set_color(1);printf("%s",time_A[movie_time-1]);
  new->code=0;
 }
 if(movie_num==2)
 {
  set_color(0);delay(200);printf("\n\n\t\tShow Timing :           ");set_color(1);printf("%s",time_B[movie_time-1]);
  new->code=1;
 }
 if(movie_num==3)
 {
  set_color(0);delay(200);printf("\n\n\t\tShow Timing :           ");set_color(1);printf("%s",time_C[movie_time-1]);
  new->code=2;
 }
 if(movie_num==4)
 {
  set_color(0);delay(200);printf("\n\n\t\tShow Timing :           ");set_color(1);printf("%s",time_D[movie_time-1]);
  new->code=3;
 }
 set_color(0);delay(100);printf("\n\n\n\t----------------------------------------------------------------------------------------------------------");
 set_color(1);delay(200);printf("\n\n\t\tEnter Your Name :       ");set_color(0);
 fflush(stdin);
 gets(new->name);
 set_color(1);delay(200);printf("\n\t\tEnter No of Seats :     ");set_color(0);
 scanf("%d",&new->seats);
 if(head==NULL)
 {
  head=new;
  new->next=NULL;
 }
 else
 {
  new->next=head;
  head=new;
 }
 system("cls");
 if (head==NULL)
 {
  set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
  set_color(4);delay(100);printf("\n\n\t\t\t\t\t     Ticket Confirmation ( TM / C / R )    \t\t\t\t\t\n");
  set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
  set_color(1);delay(200);printf("\n\n\t\tEmpty List !");
 }
 else
 display();
}

void cancel()
{
 system("cls");
 set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
 set_color(4);delay(100);printf("\n\n\t\t\t\t\t\t     Ticket Cancellation     \t\t\t\t\t\t\n");
 set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
 cur=head;
 if(head==NULL)
 {
  set_color(1);delay(200);printf("\n\n\t\tEmpty List !");
 }
 else
 {
  head=head->next;
  free(cur);
  set_color(1);delay(200);printf("\n\n\t\tCurrent ticket booking has been cancelled !\n\n\t\tThank You !");
 }
 set_color(0);delay(100);printf("\n\n\n\t----------------------------------------------------------------------------------------------------------");
 set_color(2);delay(200);printf("\n\n\n\t\tPress Enter to Continue : ");set_color(0);
 return;
}

void booking_list()
{
 system("cls");
 set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
 set_color(4);delay(100);printf("\n\n\t\t\t\t\t\t     Booking List     \t\t\t\t\t\t\n");
 set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
 if(head==NULL)
 {
  set_color(1);delay(200);printf("\n\n\t\tEmpty List !");
 }
 else
 {
  cur=head;
  set_color(0);delay(200);printf("\n\n\t\tCustomer Name   \t\t\tMovie          \t\t\t\tNo of Seats");
  set_color(0);delay(100);printf("\n\n\n\t----------------------------------------------------------------------------------------------------------");
  while(cur!=NULL)
  {
   set_color(0);delay(200);printf("\n\n\t\t%s",cur->name);
   if(cur->code==0)
   {
    set_color(1);delay(200);printf("\t\t\t    %s       ",movie[0]);
    set_color(12);delay(200);printf("\t\t\t\t   %d       ",cur->seats);
   }
   if(cur->code==1)
   {
    set_color(1);delay(200);printf("\t\t\t    %s       ",movie[1]);
    set_color(12);delay(200);printf("\t\t\t\t   %d       ",cur->seats);
   }
   if(cur->code==2)
   {
    set_color(1);delay(200);printf("\t\t\t\t    %s       ",movie[2]);
    set_color(12);delay(200);printf("\t\t\t\t   %d       ",cur->seats);
   }
   if(cur->code==3)
   {
    set_color(1);delay(200);printf("\t\t\t    %s       ",movie[3]);
    set_color(12);delay(200);printf("\t\t\t\t   %d       ",cur->seats);
   }
   cur=cur->next;
  }
 }
 set_color(0);delay(100);printf("\n\n\n\t----------------------------------------------------------------------------------------------------------");
 set_color(2);delay(200);printf("\n\n\n\t\tPress Enter to Continue : ");set_color(0);
 return;
}

void display()
{
 cur=head;
 set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
 set_color(4);delay(100);printf("\n\n\t\t\t\t\t     Ticket Confirmation ( TM / C / R )    \t\t\t\t\t\n");
 set_color(0);delay(100);printf("\n\t----------------------------------------------------------------------------------------------------------");
 if(cur!=NULL)
 {
  set_color(0);delay(200);printf("\n\n\t\tCustomer Name :    ");set_color(12);printf("%s",cur->name);
  if(movie_num==1)
  {
   set_color(0);delay(200);printf("\n\n\t\tMovie Name :       ");set_color(12);printf("%s",movie[movie_num-1]);
   set_color(0);delay(200);printf("\n\n\t\tShow Timing :      ");set_color(12);printf("%s",time_A[movie_time-1]);
   cur->price=130.65;
   cur->tprice=130.65*cur->seats;
  }
  if(movie_num==2)
  {
   set_color(0);delay(200);printf("\n\n\t\tMovie Name :       ");set_color(12);printf("%s",movie[movie_num-1]);
   set_color(0);delay(200);printf("\n\n\t\tShow Timing :      ");set_color(12);printf("%s",time_B[movie_time-1]);
   cur->price=130.65;
   cur->tprice=130.65*cur->seats;
  }
  if(movie_num==3)
  {
   set_color(0);delay(200);printf("\n\n\t\tMovie Name :       ");set_color(12);printf("%s",movie[movie_num-1]);
   set_color(0);delay(200);printf("\n\n\t\tShow Timing :      ");set_color(12);printf("%s",time_C[movie_time-1]);
   cur->price=150.25;
   cur->tprice=150.25*cur->seats;
  }
  if(movie_num==4)
  {
   set_color(0);delay(200);printf("\n\n\t\tMovie Name :       ");set_color(12);printf("%s",movie[movie_num-1]);
   set_color(0);delay(200);printf("\n\n\t\tShow Timing :      ");set_color(12);printf("%s",time_D[movie_time-1]);
   cur->price=150.25;
   cur->tprice=150.25*cur->seats;
  }
  set_color(0);delay(200);printf("\n\n\t\tNo of Seats :      ");set_color(12);printf("%d",cur->seats);
  set_color(0);delay(200);printf("\n\n\t\tTicket Price :     ");set_color(6);printf("Rs %.2f",cur->price);
  set_color(0);delay(200);printf("\n\n\t\tTotal Price :      ");set_color(1);printf("Rs %.2f",cur->tprice);
  set_color(0);delay(100);printf("\n\n\n\t----------------------------------------------------------------------------------------------------------");
  set_color(2);delay(200);printf("\n\n\n\t\tPress Enter to Continue : ");set_color(0);
  return;
  cur=cur->next;
 }
}

void set_color(int sample)
{
 WORD w_color;
 HANDLE h_std_out=GetStdHandle(STD_OUTPUT_HANDLE);
 CONSOLE_SCREEN_BUFFER_INFO csbi;
 if(GetConsoleScreenBufferInfo(h_std_out,&csbi))
 {
  w_color=(csbi.wAttributes&0xF0)+(sample&0x0F);
  SetConsoleTextAttribute(h_std_out,w_color);
 }
 return;
}

void gotoxy(int x,int y)
{
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void delay(unsigned int milli_sec)
{
 clock_t goal=milli_sec+clock();
 while(goal>clock());
}
