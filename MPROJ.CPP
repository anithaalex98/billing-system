//header files
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip.h>

class Item
{
 protected:
	   char item_name[30];
	   float price;
	   int quantity;
 public:
	 void enterValue(char nm[],float p,int q)
	 {
	  strcpy(item_name,nm);
	  price=p;
	  quantity=q;
	 }
	 float calTotal()
	 {
	  float temp;
	  temp=price*quantity;
	  return(temp);
	 }
	 char * retname()
	 {
	  return(item_name);
	 }
	 float retprice()
	 {
	  return(price);
	 }
	 int retQty()
	 {
	  return(quantity);
	 }
};//end of class Item

//global declaration
Item iobj;
Item temp_obj[20];

//Function to display & calculate cost of selected dairy product
Item displayDairy()
{
 int quantity=1,ch;
 cout<<"\n\t**********DAIRY PRODUCTS**********";
 cout<<"\n\tSr No.\t\t\tNAME\t\t\tPRICE";
 cout<<"\n\t1.\t\t\tAmul Paneer(200gm)\tRs. 67.32";
 cout<<"\n\t2.\t\t\tAmul Butter(100g) \tRs. 43.56";
 cout<<"\n\t3.\t\t\tAmul Cheese(100g) \tRs. 63.36";
 cout<<"\n\t4.\t\t\tAmul Ghee(1L)     \tRs. 445";
 cout<<"\n\t5.\t\t\tAmul Curd(1L)     \tRs. 55";
 cout<<"\nEnter your choice(1-5):";
 cin>>ch;
 cout<<"\nEnter quantity:";
 cin>>quantity;
 getch();
 switch(ch)
 {
  case 1: iobj.enterValue("Amul Paneer(200gm)",67.32,quantity);
	  return(iobj);

  case 2: iobj.enterValue("Amul Butter(100g) ",43.56,quantity);
	  return(iobj);

  case 3: iobj.enterValue("Amul Cheese(100g) ",63.36,quantity);
	  return(iobj);

  case 4: iobj.enterValue("Amul Ghee(1L)     ",445.00,quantity);
	  return(iobj);

  case 5: iobj.enterValue("Amul Curd(1L)     ",55.00,quantity);
	  return(iobj);

  default: cout<<"Wrong Choice!";
	   return(iobj);
 }//switch
}//end of function displayDairy()

//Function to display & calculate cost of selected Snacks & Cold Drinks
Item displaySnacks()
{
 int ch;
 int quantity=1;
 cout<<"\n\t**********SNACKS & COLD DRINKS**********";
 cout<<"\n\tSr No.\t\t\tNAME\t\t\tPRICE";
 cout<<"\n\t1.\t\t\tKurkure Solid Masti\tRs. 10";
 cout<<"\n\t2.\t\t\tLays Salted        \tRs. 20";
 cout<<"\n\t3.\t\t\tBingo Mad Angles   \tRs. 10";
 cout<<"\n\t4.\t\t\tThumbs Up          \tRs. 40";
 cout<<"\n\t5.\t\t\tCoke               \tRs. 40";
 cout<<"\n\t6.\t\t\tMaaza              \tRs. 20";
 cout<<"\n\t7.\t\t\tFruiti             \tRs. 10";
 cout<<"\nEnter your choice(1-7):";
 cin>>ch;
 cout<<"\nEnter quantity:";
 cin>>quantity;
 getch();
 switch(ch)
 {
  case 1: iobj.enterValue("Kurkure Solid Masti",10.00,quantity);
	  return(iobj);

  case 2: iobj.enterValue("Lays Salted        ",20.00,quantity);
	  return(iobj);

  case 3: iobj.enterValue("Bingo Mad Angles   ",10.00,quantity);
	  return(iobj);

  case 4: iobj.enterValue("Thumbs Up          ",40.00,quantity);
	  return(iobj);

  case 5: iobj.enterValue("Coke               ",40.00,quantity);
	  return(iobj);

  case 6: iobj.enterValue("Mazza              ",20.00,quantity);
	  return(iobj);

  case 7: iobj.enterValue("Fruiti             ",10.00,quantity);
	  return(iobj);

  default: cout<<"Wrong Choice!";
	   return(iobj);
 }//switch
}//end of function displaySnacks()

//Function to display & calculate cost of selected Vegetables & Fruits
Item displayVeg()
{
 int quantity=1,ch;
 cout<<"\n\t**********VEGETABLES & FRUITS**********";
 cout<<"\n\tSr No.\t\t\tNAME\t\t\tPRICE";
 cout<<"\n\t1.\t\t\tCabbage(per piece) \tRs. 35";
 cout<<"\n\t2.\t\t\tOrange(1kg)        \tRs. 180";
 cout<<"\n\t3.\t\t\tTomato(1kg)        \tRs. 22";
 cout<<"\n\t4.\t\t\tOnion(1kg)         \tRs. 50";
 cout<<"\n\t5.\t\t\tPotato(1kg)        \tRs. 40";
 cout<<"\n\t6.\t\t\tKiwi               \tRs. 40";
 cout<<"\n\t7.\t\t\tApple(1kg)         \tRs. 100";
 cout<<"\nEnter your choice(1-7):";
 cin>>ch;
 cout<<"\nEnter quantity:";
 cin>>quantity;
 getch();
 switch(ch)
 {
  case 1: iobj.enterValue("Cabbage            ",35.00,quantity);
	  return(iobj);

  case 2: iobj.enterValue("Orange             ",180.00,quantity);
	  return(iobj);

  case 3: iobj.enterValue("Tomato             ",22.00,quantity);
	  return(iobj);

  case 4: iobj.enterValue("Onion              ",50.00,quantity);
	  return(iobj);

  case 5: iobj.enterValue("Potato             ",40.00,quantity);
	  return(iobj);

  case 6: iobj.enterValue("Kiwi               ",40.00,quantity);
	  return(iobj);

  case 7: iobj.enterValue("Apple              ",100.00,quantity);
	  return(iobj);

  default: cout<<"Wrong Choice!";
	   return(iobj);
 }//switch
}//end of function displayVeg()

//Function to place order and calculate Bill
void place_order()
{
 int choice;
 char ch;
 int c=0;
 float tprice=0.00,temp=0.00;
 do
 {
  clrscr();
  cout<<"\n\t**********MENU**********\n";
  cout<<"\n\t1.Dairy\n\t2.Snacks and Cold Drinks\n\t3.Vegetable and Fruits";
  cout<<"\n\tEnter your choice(1-3):";
  cin>>choice;
  switch(choice)
  {
   case 1: clrscr();
	   temp_obj[c]=displayDairy();
	   temp=temp_obj[c].calTotal();
	   getch();
	   break;
   case 2: clrscr();
	   temp_obj[c]=displaySnacks();
	   temp=temp_obj[c].calTotal();
	   getch();
	   break;
   case 3: clrscr();
	   temp_obj[c]=displayVeg();
	   temp=temp_obj[c].calTotal();
	   getch();
	   break;
   default: cout<<"\n\tWrong Choice!";
  }//switch
  tprice=tprice+temp;    //calculating total amount
  cout<<"\nDo you want to continue(Type 'y'/'Y'for Yes or 'n' for No):";
  ch=getche();
  c++;
 }while(ch=='y'||ch=='Y'); //do-while
 cout<<"Thank you for shopping!\n";
 //displaying bill
 clrscr();
 cout << "\n******************************INVOICE******************************\n";
 cout << "\nSr no.\tItem Name\t\tPrice(per item)\tQuantity\tAmount(in Rs)";
 for(int x=0;x<c;x++)
 {
   cout<<"\n";
   cout<<x+1;
   cout<<"\t"<<temp_obj[x].retname();
   cout<<"\t"<<setprecision(2)<<temp_obj[x].retprice();
   cout<<"\t\t"<<temp_obj[x].retQty();
   cout<<"\t\t"<<setprecision(2)<<temp_obj[x].calTotal();
   cout<<"\n";
 }//for loop
 cout<<"\n\n\t\t\tTotal price=Rs."<<setprecision(2)<<tprice;
 getch();
}//end of function place_order()

//main function
void main()
{
 clrscr();
 int ch;
 do
 {
  clrscr();
  cout<<"\n\tWELCOME TO SUPERMARKET BILLING SYSTEM!";
  cout<<"\n\n\t1. PLACE ORDER\n\t2. EXIT";
  cout<<"\n\nENTER YOUR CHOICE(1-2):";
  cin>>ch;
  switch(ch)
  {
   case 1:      clrscr();
		place_order();
		getch();
		break;
   case 2:	exit(0);
  }
 }while(ch!=2);
 getch();
}//main