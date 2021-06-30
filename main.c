#include <stdio.h>
#include<math.h>


int main(void) {
  float a,b,c,discriminant,root1,root2;
  printf("Enter the coefficient of x^2 : ");
  scanf("%f",&a);
  printf("Enter the coefficient of x : ");
  scanf("%f",&b);
  printf("Enter the value of constant : ");
  scanf("%f",&c);
  discriminant=sqrt(b*b-4*a*c);
  root1=(-b-sqrt(discriminant))/(2*a);
  root2=(-b+sqrt(b*b-4*a*c))/(2*a);
  printf("\nDiscriminant is:%f",discriminant);
  printf("\nThe value of first root is :%f",root1);
  printf("\nThe value of second root is :%f",root2);

  return 0;
}