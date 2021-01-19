#include<ctype.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#define stack_size 25
int elem,i;
char str[25],res[25];//arrays to be used for storing the operands and the result
char stack[25];//used for storing the operators
int top;//points to the top most element in a stack

void push(char ele)//func to push into the stack
{
   if(top==stack_size-1)//checking if the array is full
       printf("\n Overflow.\n");
   else//if not full the element is inserted
   {
      top++;
     stack[top]=ele;
   }
}

char pop()//func to pop from the stack
{
  if(top==-1)//checking if the queue is empty 
  {
    printf("\nUnderflow.\n");
    return (-1);
  }
  else//if not then the element is popped
    return (stack[top--]);
}

double compute(char symbol,double op1,double op2)//computing the operands and the operators specified 
{
    switch(symbol)
    {
        case'+':return op1+op2;
        case'-':return op1-op2;
        case'*':return op1*op2;
        case'/':return op1/op2;
        case'$':
        case'^':return pow(op1,op2);
    }
}

void post_eval()//for evaluating a postfix string
{
    char symbol;
    double op1,op2,res;
    for(i=0;i<strlen(str);i++)
    {
        symbol=str[i];
        if(isdigit(symbol))//operand
            push((int)(symbol-'0'));
        else//opeartor-binary
        {
            op2=pop();
            op1=pop();
            res=compute(symbol,op1,op2);
            push(res);
        } 
    }
    res=pop();
    printf("The result is %f\n",res);
}

void pre_eval() //for evaluating prefix exp
{ 
     char symbol; 
     double op1,op2,res; 
     for(i=strlen(str)-1;i>=0;i--) 
     {
        symbol=str[i]; 
        if(isdigit(symbol)) //operand 
            push((int)(symbol-'0')); 
        else //opeartor-binary 
        { 
            op1=pop(); 
            op2=pop(); 
            res=compute(symbol,op1,op2); 
            push(res); 
        } 
     } 
     res=pop(); 
     printf("The result is %f\n",res); 
}

int main()
{    
    top=-1;
    int choice = 0;
    printf("Enter the choice: 1)Postfix evaluation 2)Prefix evaluation\n");
    scanf("%d", &choice);
    if(choice == 1){
	    printf("Enter a valid postfix expression: \n");
	    scanf("%s",str);
	    post_eval();
    }
    else if(choice == 2){
        printf("Enter a valid prefix expression: \n"); 
        scanf("%s",str); 
        pre_eval(); 
    }
    else
        printf("Invalid choice\n");
    return 0;
}


