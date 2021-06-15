#include "Queue.h"
#ifndef Stack_h
#define Stack_h

struct stack {
    int size;
    int top;
    struct Node** s;
};

void Stackcreate(struct stack* st, int size)
{
    //printf("Enter size of stack\n");
    //scanf_s("%d", &st->size);
    st->size = size;
    st->top = -1;
    st->s = (struct Node**)malloc(st->size * sizeof(struct Node*));
}

void Display(struct stack st)
{
    int i;
    for (i = st.top; i >= 0; i--)
    {
        printf("%d ", st.s[i]);
    }
    printf("\n");
}

void push(struct stack* st, struct Node *x)
{
    if (st->top == st->size - 1)
    {
        printf("stack overflow\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

struct Node * pop(struct stack* st)
{
    struct Node* x = NULL;
    if (st->top == -1)
    {
        printf("stack underflow\n");
    }
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

/*
int peek(struct stack st, int pos)
{
    int x = -1;
    if (st.top - pos + 1 < 0)
    {
        printf("Invalid position");
    }
    else
    {
        x = st.s[st.top - pos + 1];
    }
    return x;
}

int stacktop(struct stack st)
{
    if (st.top == -1)
    {
        return 1;
    }
    else
    {
        return st.s[st.top];
    }
}
*/

int isEmpty(struct stack st)
{
    if (st.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack st)
{
    if (st.top == st.size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

#endif // Stack_h
