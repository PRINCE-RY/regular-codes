#include<stdio.h>
int grs(int basic,int h,int da)
{
   int gros=(basic+h+da);
   return gros;
}
#include<stdio.h>
  2 #include<math.h>
  3 void sim(int p,float r,int t)
  4 {
       5    int si;
         6    si=(p*r*t)/100;
	   7    printf("simple interest: %d\n",si);
	     8 }
  9 void com(int p,float r,int t)
 10 {
     11  double ci=(p* pow(1+r/100,t))-p;
      12    printf("compound interest: %d\n",ci);
       13 }
 14 int main()
 15 {
     16    int principle;
      17    int time;
       18    float rate;
        19    printf("enter the values:");
	 20    scanf("%d",&principle);
	  21    scanf("%f",&rate);
	   22    scanf("%d",&time);
	    23    sim(principle,rate,time);
	     24    com(principle,rate,time);
	      25    return 0;
	       26 }int ded(int pf,int da)
{
   int dedu=pf+it;
   return dedu;
}
int nets()
{
   int nety=gros-dedu;
   return nety;
}
void printdata(int eid)
{
   printf("Details of employee salary slip\n");
   printf("*******************************\n");
   printf("employee id:%d\n",eid);
   printf("gross salary:%d\n",gros);
   printf("deduction:%d\n",dedu);
   printf("net salary:%d\n",nety);
   printf("*******************************");
}
int main()
{
   int b,hra,d;
   printf("enter the basic:");
   scanf("%d",&b);
   printf("enter the hra:");
   scanf("%d",&hra);
   printf("enter the da:");
   scanf("%d",&da);
   grs(b,hra,da);
   printf("enter the pf:");
   scanf("%d",&pf);
   printf("enter the income tax:");
   scanf("%d",&it);
   ded(pf,it);
   nets();
   printdata(06);
   return 0;
}

