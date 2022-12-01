#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void movie_data();
void first_city();
void second_city();
void third_city();
void signup();
void mangluru_details();
void surathkal_details();
void shimogg_details();
int s=0,m=0,sh=0;
int seat[20],n=0;
char id[20];
char password[20];
int fi11=0,fi12=0,fi13=0,movie=0;
void menubar();
char choice;
void Seat_list1();
void Seat_list2();
void Seat_list3();
int loginmenu();
int loginp();
void signup();
void Seat_list4();
void Seat_list5();
void Seat_list6();
void Seat_list7();
int seatf1[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int seatf2[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int seatf3[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int seatf4[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int seatf5[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int seatf6[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int seatf7[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int main()
{
    int l;
    t:
        system("cls");
    int temp=loginmenu();
    if(temp==2)
    {
        signup();
         printf("You have Signed up successfully!\n Now You can log in.\m");
        goto t;
    }
     else if(temp==1)
    {
     l=loginp();
    }
     else
     {
        exit(0);
     }
   if(l==1)
   {
       system("cls");
       menubar();
   }
 system("cls");
 if(s==1)
    surathkal_details();
 else if(m==1)
    mangluru_details();
 else if(sh==1)
    shimogg_details();
 return 0;
}
void signup()
{
     fflush(stdin);
    printf("Enter The Id      :-");
    fgets(id,20,stdin);
    fflush(stdin);
    printf("Enter The Password:-");
    fgets(password,20,stdin);
}
int loginp()
{
    int temp1=0,temp2=0;
    char id1[20],password1[20];
    printf("Enter The id :-");
    fflush(stdin);
    fgets(id1,20,stdin);
    if(strcmp(id,id1)==0)
    {
        temp1=1;
    }
    else
    {printf("Incorrect id ! \n");
        loginp();}
    fflush(stdin);
    printf("Enter The Password :- ");
    fgets(password1,20,stdin);
    if(strcmp(password1,password)==0)
    {
        temp2=1;
    }
    else
    {
       printf("Incorrect password ! \n");
        loginp();}
    if(temp1==1&&temp2==1)
    {
        printf("You Have Successfully Login :-");
        return 1;
    }
}
int loginmenu()
{
    int login_signup_choice;
	printf("                        Login/SignUp\n");
	printf(" ==================================================================\n");
	printf("||                      1- Login                                  ||\n");
	printf("||                      2- SignUp                                 ||\n");
	printf("||                      3- Exit                                   ||\n");
	printf("||================================================================||\n");
	printf("  Enter your choice: ");
	scanf("%d",&login_signup_choice);
	return login_signup_choice;
}
void surathkal_details()
{
    printf("\t\t-----------------------------------------\n");
    printf("\t\tDetails Of Your Ticket Booking :-\n");
    printf("\t\t-----------------------------------------\n");
    printf("\t\t-----------------------------------------\n");
     printf("\t\tID           \t:- %s",id);
    if(movie==1)
    {
     printf("\t\tMovie Name   \t:- Age Of Ultron\n");
     if(fi11==1)
     printf("\t\tTiming       \t:- 10:00 am to 11:30 am\n");
     if(fi11==2)
     printf("\t\tTiming       \t:- 2:00 pm to 3:30 pm\n");
     if(fi11==3)
     printf("\t\tTiming       \t:- 7:00 pm to 8:30 pm\n");
    }
    else if(movie==2)
    {
     printf("\t\tMovie Name   \t:- Infinity War\n");
     if(fi12==1)
     printf("\t\tTiming       \t:- 11:30 am to 1:00 am\n");
     else if(fi12==2)
     printf("\t\tTiming       \t:- 3:30 pm to 5:00 pm\n");
     else if(fi12==3)
     printf("\t\tTiming       \t:- 7:00 pm to 8:30 pm\n");
    }
    else if(movie==3)
    {
     printf("\t\tMovie Name   \t:- End Game\n");
     if(fi13==1)
     printf("\t\tTiming       \t:- 10:00 pm to 11:30 pm\n");
     else if(fi13==2)
     printf("\t\tTiming       \t:- 12:00 am to 1:30 am\n");
    }
    printf("\t\t-----------------------------------------\n");
    printf("\t\tTotal Booked Seats :- %d\n",n);
    printf("\t\tSeats Number       :- ");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",seat[i]);
        if(i!=n-1)
        printf(",");
    }
    printf("\n\t\t-----------------------------------------\n");
}
void mangluru_details()
{
     printf("\t\t-----------------------------------------\n");
    printf("\t\tDetails Of Your Ticket Booking :-\n");
     printf("\t\t-----------------------------------------\n");
     printf("\t\tID           \t:- %s",id);
    if(movie==1)
    {
     printf("\t\tMovie Name \t:- Kantara\n");
     if(fi11==1)
     printf("\t\tTiming     \t:- 10:00 am to 11:30 am\n");
     if(fi11==2)
     printf("\t\tTiming     \t:- 2:00 pm to 3:30 pm\n");
     if(fi11==3)
     printf("\t\tTiming     \t:- 7:00 pm to 8:30 pm\n");
    }
    else if(movie==2)
    {
     printf("\t\tMovie Name \t:- Gandhadagudi\n");
     if(fi12==1)
     printf("\t\tTiming     \t:- 10:00 pm to 11:30 pm\n");
     else if(fi12==2)
     printf("\t\tTiming     \t:- 2:00 am to 3:30 am\n");
     else if(fi12==3)
     printf("\t\tTiming     \t:- 3:30 am to 5:00 pm\n");
    }
     printf("\t\t-----------------------------------------\n");
    printf("\t\tTotal Booked Seats :- %d\n",n);
    printf("\t\tSeats Number       :- ");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",seat[i]);
        if(i!=n-1)
        printf(",");
    }
     printf("\n\t\t-----------------------------------------\n");
}
void shimogg_details()
{
     printf("\t\t-----------------------------------------\n");
    printf("\t\tDetails Of Your Ticket Booking :-\n");
     printf("\t\t-----------------------------------------\n");
     printf("\t\tID           \t:- %s",id);
    if(movie==1)
    {
     printf("\t\tMovie Name \t:- Ghost In House\n");
     if(fi11==1)
     printf("\t\tTiming     \t:- 10:00 am to 11:30 am\n");
     if(fi11==2)
     printf("\t\tTiming     \t:- 2:00 pm to 3:30 pm\n");
     if(fi11==3)
     printf("\t\tTiming     \t:- 7:00 pm to 8:30 pm\n");
    }
    else if(movie==2)
    {
     printf("\t\tMovie Name \t:-  Creature\n");
     if(fi12==1)
     printf("\t\tTiming     \t:-  10:00 pm to 11:30 pm\n");
     else if(fi12==2)
     printf("\t\tTiming     \t:-  2:00 am to 3:30 am\n");
     else if(fi12==3)
     printf("\t\tTiming     \t:-  3:30 am to 5:00 pm\n");
    }
    printf("\t\t-----------------------------------------\n");
    printf("\t\tTotal Booked Seats \t:- %d\n",n);
    printf("\t\tSeats Number       \t:- ");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",seat[i]);
        if(i!=n-1)
        printf(",");
    }
     printf("\n\t\t-----------------------------------------\n");
}
 void menubar()
 {
   printf("Enter The city among given optios\n");
    printf(" ======================================================================\n");
    printf("||                      1- Surathkal                                  ||\n");
	printf("||                      2- Mangluru                                   ||\n");
	printf("||                      3- Shivmogg                                   ||\n");
	printf("||=====================================================================\n");
   int city;
   scanf("%d",&city);
   if(city==1)
   {
    first_city();
    s=1;
   }
   else if(city==2)
   {
    second_city();
    m=1;
   }
   else if(city==3)
   {
     third_city();
     sh=1;
   }
   else
   {
   printf("Invalid optios");
   }
   }
   void third_city()
   {
     int s1;
     int fi;
     printf("Available Movies are\n");
      printf(" =========================================================================\n");
    printf("||                      1- Ghost in house                                 ||\n");
	printf("||                      2- Creature                                       ||\n");
	printf("||==========================================================================\n");
     scanf("%d",&fi);
     movie=fi;
     int i=0;
     if(fi==1)
     {
       int fit1;
       printf("available time are\n");
    printf("======================================================================\n");
    printf("||                      1-  10:00 am to 11:30 am                     ||\n");
	printf("||                      2-  2:00  pm to 3:30  pm                     ||\n");
	printf("||                      3-  7:00 pm  to 8:30  pm                     ||\n");
	printf("||=====================================================================\n");
       printf("Enter Your optios\n");
       scanf("%d",&fit1);
       fi11=fit1;
        printf("How Many Seats You Want to book\n");
       int x;
       scanf("%d",&x);
       n=x;
       while(x--)
       {
       system("cls");
       printf("\n");
       Seat_list6();
       printf("\n");
       printf("Enter The Seat Number among available seats\n");
       scanf("%d",&s1);
       seat[i]=s1;
       i++;
       seatf6[s1-1]=0;
       printf("\n");
        printf("\n");
     }
     }
     else if(fi==2)
     {
       int fit2;
       printf("available time are\n");
       printf("======================================================================\n");
    printf("||                      1-  10:00 pm to 11:30 pm                       ||\n");
	printf("||                      2-  2:00 am to 3:30 am                         ||\n");
	printf("||                      3-  3:30 am to 5:00 pm                         ||\n");
	printf("||=======================================================================\n");
       printf("Enter Your optios\n");
       scanf("%d",&fit2);
       fi12=fit2;
        printf("How Many Seats You Want to book\n");
       int x;
       scanf("%d",&x);
       n=x;
       while(x--)
       {
               system("cls");
       printf("\n");
       Seat_list7();
       printf("\n");
       printf("Enter The Seat Number among available seats\n");
       scanf("%d",&s1);
       seat[i]=s1;
       i++;
       seatf7[s1-1]=0;
       printf("\n");
        printf("\n");
     }
      }
   else
   {
     printf("Please enter the valid choices\n");
   }
   printf("\nDo You Want to fix your booking: Y for yes or N for no\n");
       fflush(stdin);
       scanf(" %c",&choice);
       if(choice=='Y')
       printf("\nYou Have Booked Successfully");
       else
       printf("Welcome\n");
   }
   void second_city()
   {
    int fi;
    int s1;
     printf("Available Movies are\n");
           printf(" =========================================================================\n");
    printf("||                      1- Kantara                                             ||\n");
	printf("||                      2- Gandhadagudi                                        ||\n");
	printf("||===============================================================================\n");
     scanf("%d",&fi);
     movie=fi;
     if(fi==1)
     {
       int fit1;
       printf("available time are\n");
        printf("======================================================================\n");
    printf("||                      1-  10:00 am to 11:30 am                        ||\n");
	printf("||                      2-  2:00 pm to 3:30 pm                          ||\n");
	printf("||                      3-  7:00 pm to 8:30 pm                          ||\n");
	printf("||========================================================================\n");
       printf("Enter Your optios\n");
       scanf("%d",&fit1);
       fi11=fit1;
        printf("How Many Seats You Want to book\n");
       int x;
       scanf("%d",&x);
       n=x;
       int i=0;
       while(x--)
       {
       system("cls");
       printf("\n");
       Seat_list4();
       printf("\n");
       printf("\nEnter The Seat Number among available seats\n");
       scanf("%d",&s1);
       seat[i]=s1;
       i++;
       seatf4[s1-1]=0;
       printf("\n");
        printf("\n");
     }
     }
     else if(fi==2)
     {

       int fit2;
       printf("available time are\n");
       printf("=======================================================================\n");
    printf("||                      1-  10:00 pm to 11:30 pm                        ||\n");
	printf("||                      2-  2:00 am to 3:30 am                          ||\n");
	printf("||                      3-  3:30 am to 5:00 pm                          ||\n");
	printf("||========================================================================\n");
       printf("Enter Your optios\n");
       scanf("%d",&fit2);
       fi12=fit2;
        printf("How Many Seats You Want to book\n");
       int x;
       scanf("%d",&x);
       n=x;
       int i=0;
       while(x--)
       {
       system("cls");
       printf("\n");
       Seat_list5();
       printf("\n");
       printf("\nEnter The Seat Number among available seats\n");
       scanf("%d",&s1);
       seat[i]=s1;
       i++;
       seatf5[s1-1]=0;
       printf("\n");
        printf("\n");
     }
       }
   else
   {
     printf("Please enter the valid choices\n");
   }
   printf("Do You Want to fix your booking: Y for yes or N for no\n");
       fflush(stdin);
       scanf(" %c",&choice);
       if(choice=='Y')
       printf("\nYou Have Booked Successfully");
       else
       printf("Welcome\n");
   }
   void first_city()
   {
    int fi;
     printf("Available Movies are\n");
      printf("========================================================================\n");
    printf("||                      1-  Age of ultron                               ||\n");
	printf("||                      2-  Infinity War                                ||\n");
	printf("||                      3-  Endgame                                     ||\n");
	printf("||========================================================================\n");
     scanf("%d",&fi);
     movie=fi;
     int i=0;
     if(fi==1)
     {
       int s1;
       int fit1;
       printf("available time are\n");
       printf("=======================================================================\n");
    printf("||                      1-  10:00 am to 11:30 am                        ||\n");
	printf("||                      2-  2:00 pm to 3:30 pm                          ||\n");
	printf("||                      3-  7:00 pm to 8:30 pm                          ||\n");
	printf("||========================================================================\n");
       printf("Enter Your optios\n");
       scanf("%d",&fit1);
       fi11=fit1;
       printf("How Many Seats You Want to book\n");
       int x;
       scanf("%d",&x);
       n=x;
       while(x--)
       {
       system("cls");
       printf("\n");
       Seat_list1();
       printf("\n");
       printf("\nEnter The Seat Number among available seats\n");
       scanf("%d",&s1);
       seat[i]=s1;
       i++;
       seatf1[s1-1]=0;
       printf("\n");
       }
     }
     else if(fi==2)
     {
     int s1;
       int fit2;
       printf("available time are\n");
       printf("=======================================================================\n");
    printf("||                      1-  11:30 am to 1:00 am                         ||\n");
	printf("||                      2-  3:30 pm to 5:00 pm                          ||\n");
	printf("||                      3-  5:00 pm to 6:30 pm                          ||\n");
	printf("||========================================================================\n");
       printf("Enter Your optios\n");
       scanf("%d",&fit2);
       fi12=fit2;
        printf("How Many Seats You Want to book\n");
       int x;
       scanf("%d",&x);
       n=x;
       while(x--)
       {
       system("cls");
       printf("\n");
       Seat_list2();
       printf("\n");
       printf("\nEnter The Seat Number among available seats\n");
       scanf("%d",&s1);
       seat[i]=s1;
       i++;
       seatf2[s1-1]=0;
       printf("\n");
        printf("\n");
     }}
   else if(fi==3)
   {

   int s1;
       int fit3;
       printf("available time are\n");
        printf("=======================================================================\n");
    printf("||                      1-  10:00 pm to 11:30 pm                          ||\n");
	printf("||                      2-  2:00 am to 1:30 am                            ||\n");
	printf("||========================================================================\n");
       printf("Enter Your optios\n");
       scanf("%d",&fit3);
       fi13=fit3;
        printf("\nHow Many Seats You Want to book\n");
       int x;
       scanf("%d",&x);
       n=x;
       while(x--)
       {
        system("cls");
       printf("\n");
       Seat_list3();
       printf("\n");
       printf("\nEnter The Seat Number among available seats\n");
       scanf("%d",&s1);
       seat[i]=s1;
       i++;
       printf("\n");
       seatf3[s1-1]=0;
        printf("\n");
   }}
   else
   {
     printf("Please enter the valid choices\n");
   }
   fflush(stdin);
   printf("\nDo You Want to fix your booking: Y or yes or N for no\n");
       scanf(" %c",&choice);
       if(choice=='Y')
       printf("\nYou Have Booked Successfully");
       else
       printf("Welcome\n");
   }
   void Seat_list1()
   {
   printf("\t******************************************************************************\n");
   for(int i=0;i<10;i++)
   {
   printf("\t%d   |",seatf1[i]);
   }
   printf("\n");
    printf("\t******************************************************************************\n");
   for(int i=10;i<20;i++)
   {
   printf("\t%d   |",seatf1[i]);
   }
    printf("\n\t******************************************************************************\n");
   }
    void Seat_list2()
   {
     printf("\t******************************************************************************\n");
   for(int i=0;i<10;i++)
   {
   printf("\t%d   |",seatf2[i]);
   }
   printf("\n");
    printf("\t******************************************************************************\n");
   for(int i=10;i<20;i++)
   {
   printf("\t%d   |",seatf2[i]);
   }
    printf("\n\t******************************************************************************\n");
   }
    void Seat_list3()
   {
    printf("\t******************************************************************************\n");
   for(int i=0;i<10;i++)
   {
   printf("\t%d   |",seatf3[i]);
   }
   printf("\n");
    printf("\t******************************************************************************\n");
   for(int i=10;i<20;i++)
   {
   printf("\t%d   |",seatf3[i]);
   }
    printf("\n\t******************************************************************************\n");
   }
   void Seat_list4()
   {
   printf("\t******************************************************************************\n");
   for(int i=0;i<10;i++)
   {
   printf("\t%d   |",seatf4[i]);
   }
   printf("\n");
    printf("\t******************************************************************************\n");
   for(int i=10;i<20;i++)
   {
   printf("\t%d   |",seatf4[i]);
   }
    printf("\n\t******************************************************************************\n");
   }
    void Seat_list5()
   {
   printf("\t******************************************************************************\n");
   for(int i=0;i<10;i++)
   {
   printf("\t%d   |",seatf5[i]);
   }
   printf("\n");
    printf("\t******************************************************************************\n");
   for(int i=10;i<20;i++)
   {
   printf("\t%d   |",seatf5[i]);
   }
    printf("\n\t******************************************************************************\n");
   }
    void Seat_list6()
   {
    printf("\t******************************************************************************\n");
   for(int i=0;i<10;i++)
   {
   printf("\t%d   |",seatf6[i]);
   }
   printf("\n");
    printf("\t******************************************************************************\n");
   for(int i=10;i<20;i++)
   {
   printf("\t%d   |",seatf6[i]);
   }
    printf("\n\t******************************************************************************\n");
  }
   void Seat_list7()
   {
   printf("\t******************************************************************************\n");
   for(int i=0;i<10;i++)
   {
   printf("\t%d   |",seatf7[i]);
   }
   printf("\n");
    printf("\t******************************************************************************\n");
   for(int i=10;i<20;i++)
   {
   printf("\t%d   |",seatf7[i]);
   }
    printf("\n\t******************************************************************************\n");
   }
