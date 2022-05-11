/*#include <stdio.h>

int main(){

  int a = 52,b = 6, c;

  c = a+b;
  printf("a+b = %d \n",c);
  c = a-b;
  printf("a-b = %d \n",c);
  c = a*b;
  printf("a*b = %d \n",c);
  c = a/b;
  printf("a/b = %d \n",c);
  c = a%b;
  printf("remainder when divided by b = %d \n",c);

  return 0;
}*/ //MATTE MED C +,-,*,/,%;//

/*#include <stdio.h>
 int main(){

   int a = 5, b = 10, c = 5;

   printf("%d == %d is %d \n", a, c, a == c);
   printf("%d != %d is %d \n", a, b, a !=b);
   printf("%d > %d is %d \n", c, b, c>b);
   printf("%d < %d is %d \n", b, a, b<a);
   return 0;
 }*/ //JOBBE MED OPERATORS "==, !=, <, >, >=, <=";//

 #include <stdio.h>
 int main(){

int number;
printf("Enter a number between 1 to 7: ",);
scanf("%d", &number  );

switch(number){

  case 1:
  printf("Sunday");
  break;

  case 2:
  printf("Monday");
  break;


  case 3:
  printf("Tuesday");
  break;


  case 4:
  printf("wensday");
  break;


  case 5:
  printf("thursday");
  break;


  case 6:
  printf("Friday");
  break;


  case 7:
  printf("Saturday");
  break;

  default:
  printf("Invalid Number, Try Again");

}



  return 0;
}
