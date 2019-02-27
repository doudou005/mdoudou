//marie souley doudou

#include <stdio.h>
#include <cs50.h>
 int main (void)
 {
     int a=500;
     int b=250;
     int c=200;
     int d=100;
     int e=50;
     int f=25;
     int g=10;
     int h=5;
     ;
     int i=0;
     int n;
   do
   {
       n=get_int("The amount is: ");
   }
  while (n<=5);

  while (n>=a)
  {
      n=n-a;
      i++;
  }
  while (n>=b)
  {
      n=n-b;
      i++;
  }
  while (n>=c)
  {
      n=n-c;
      i++;
  }
  while (n>=d)
  {
      n=n-d;
      i++;
  }
  while  (n>=e)
  {
      n=n-e;
      i++;
  }
  while (n>=f)
  {
      n=n-f;
      i++;
  }
  while (n>=g)
 {
     n=n-g;
     i++;
 }
 while (n>=h)
 {
     n=n-h;
     i++;
 }
 while (n>=i)
 {
     n=n-i;
     i++;
 }
 printf("%i \n",i);
 }
