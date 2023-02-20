#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0
struct stack
{
    char item[SIZE];
    int index;
};
void initialize()
{
    int index=-1;
}
int isempty()
{
    if(s.index==-1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void push(char x)
{
    if(s.index==SIZE-1)
    {
        printf("Stack overflow");
        exit(1);
    }
    else
    {
        s.index=s.index+1;
        s.item[s.index]=x;
    }
}
char pop()
{
    if(isempty())
    {
        printf("Stack Underflow");
        exit(1);
    }
    else
    {
        char y=s.item[s.index];
        s.index=s.index-1;
        return y;
    }
}
int main()
{   
    char a;
    struct stack s;
    initialize();
    push
}