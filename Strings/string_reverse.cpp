/*Name of the author:Bhagyashree N M
Date:30th Oct 2021*/

//C++ program to find the reverse of a string
/*Adding header files to access various functions in the program*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int main()
/*main() function where the execution of the program begins and here we will be finding the reverse of a string without using user defined functions*/
{
  clrscr();//clearing the screen
  char str1[20],str2[20];
  int i,n,j;
  cout<<"Enter the String :\n";
  cin>>str1;
  for(i=0;str1[i]!='\0';i++);
  n=i; //Finding the length of the string
  for(i=n-1,j=0;i>=0;i--,j++)    /*reversing operation for string1 and pasting it to string2*/
     str2[j]=str1[i];
  str2[j]='\0';
  cout<<"The Reversed String is :"<<str2;
  getch();
  return 0;
 }
