#include<stdio.h>
#include<conio.h>
int gcd(int a,int b){
   int gcd,temp = 0;
   while((b % a)!=0){
      temp=b % a;
      b = a;
      a = temp;
   }
   return(a);
}
int main(){
   int a,b,lcm;
   printf("\n Enter two numbers to find LCM and GCD:");
   scanf("%d%d", &a, &b);
   printf("\n GCD of %d and %d is %d",a,b,gcd(a,b));
   lcm = a * b/gcd(a,b);
   printf("\n LCM of %d and %d is %d",a,b,lcm);
   return 0;
}