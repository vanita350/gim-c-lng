#include<stdio.h>
int main(){
	int rollnumber;
	printf("enter the rollnumber:");
	scanf("%d",&rollnumber);
	
   int maths,science,gujarati,english,hindi,total,precentage;
   
   printf("enter the maths:");
   scanf("%d",&maths);
   printf("enter the science:");
   scanf("%d",&science);
   printf("enter the gujarati:");
   scanf("%d",&gujarati);
   printf("enter the english:");
   scanf("%d",&english);
   printf("enter the hindi:");
   scanf("%d",&hindi);
   
   
   total=maths+science+gujarati+english+hindi;
   
   printf("total mark:%d\n",total);
   
  printf("precentage:%d",precentage);
   
}
