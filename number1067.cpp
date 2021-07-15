 #include<stdio.h>
 
 int main()
 {
     long long int a;
     scanf("%lld", &a);
     if(a/1<0)
     {
         if(a%2==0)
         {
             printf("minus\neven\n");
         }
         else
         {
             printf("minus\nodd\n");
         }
     }
     else
     {
         if(a%2==0)
         {
             printf("plus\neven\n");
         }
         else
         {
             printf("plus\nodd\n");
         }
         
     }
     return 0;
 }
