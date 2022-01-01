#include<stdio.h>

/*the main function */
int main() {
   //variable declaration
   char o ;
   float num1, num2;
   printf("Select an operator either +,-,* or / \n");
   scanf("%c",&o);
   printf("Enter Two values : ");
   scanf("%f,%f",&num1,&num2);
   switch(o){
   //addition statement
   case'+':printf("The addition result is : %.1f+%.1f=%.1f\n",num1,num2,num1+num2);break;
   //subtraction statement
   case'-':printf("The subtraction result is: %.1f-%.1f=%.1f\n",num1,num2,num1-num2);break;
   //multiplication statement
   case'*':printf("The multiplication result is: %.1f*%.1f=%.1f\n",num1,num2,num1*num2);break;
   //division statement
   case'/':printf("The division result is: %.1f/%.1f=%.2f\n",num1,num2,num1/num2);break;
   default:printf("Error!! operator is not available");break;
   //Amal Kalaepeh Calculator :)
   }
}
