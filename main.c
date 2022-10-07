#include <stdio.h>

int main() {
 char operator;
  double first, second;
  printf("select an operator (+ ,/ ,*,-)");
  scanf("%s",&operator);
  
  printf("Enter two number one by one");
 scanf("%lf %lf",&first,&second );
    
  switch(operator)
{
    case'+':
      printf("%lf + %lf = %lf",first ,second ,(first + second));
      break;

    case'-':
      printf("%lf - %lf = %lf",first ,second ,(first - second));
      break;

    case'*':
      printf("%lf * %lf = %lf",first ,second ,(first * second));
      break;  

    case'/':

      if (second != 0.0)
        
      printf("%lf / %lf = %lf",first ,second ,(first / second));

      else
        printf("Divide by zero situation");
      break;
      default:
        printf("invaild operator");

  return 0;
 }
}