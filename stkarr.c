#include <stdio.h>
int stack[100],choice,top,x,n,i;
void push(void);
void pop(void);
void display(void);

int main()
{
    top=-1;
    printf("Enter the size\n");
    scanf("%d",&n);
    printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit\n\t");
    
    do
    {
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: printf("Exit\n");
                    break;
            default: printf("Enter valid choice\n");
        }
    }
    while(choice!=4);
    return 0;
}

void push()
{
    if(top>=n-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter the value of element to be pushed:\n");
        scanf("%d",&x);
        top=top+1;
        stack[top]=x;
    }
}

void pop()
{
     if(top<=-1)
     {
         printf("\nStack Underflow\n");
     }
     else
     {
         printf("\nThe element to be popped is %d:",stack[top]);
          top=top-1;
     }
}

void display()
{
    if(top>=0)
    {
    printf("The elements in the stack :\n");
    for(i=top;i>=0;i--)
    printf("\n%d",stack[i]);
    printf("\n Press Next Choice");
    
    }
    else
    {
        printf("\nThe stack is empty");
    }
}
            
