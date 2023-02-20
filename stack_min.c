#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct stack 
{
    int item[10];
    int index;
};
void initialize(struct stack *s)
{
    s->index=-1;
}
void 
