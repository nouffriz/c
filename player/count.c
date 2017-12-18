#include <stdio.h>
int a=10;/*global variable*/
int b=10;
int main(void) {
	  int c=20;/*local variable*/
	  int d=20;
	  int g=a+b;
	  int e=c+d;
	  {
	  	int h=30;/*block scope*/
	  	int s=50;
	  	int j=h+s;
	  	 printf("the value of j is=%d\n",j);
	  }
	  printf("the value of g is=%d\n",g);
	  printf("the value of e is=%d\n",e);
	  return 0;
}
