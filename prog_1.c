#include <stdio.h>
#include <string.h>

#define SIZE 100

// Stack structure
struct Stack
{
    char arr[SIZE];
    int top;
};

// initialize stack
void init(struct Stack *s)
{
    s->top = -1;
}

// check if stack is empty
int isEmpty(struct Stack *s)
{
    return s->top == -1;
}

// push element
void push(struct Stack *s, char ch)
{
    if (s->top < SIZE - 1)
    {
        s->top++;
        s->arr[s->top] = ch;
    }
}

// pop element
char pop(struct Stack *s)
{
    if (!isEmpty(s))
    {
        char temp = s->arr[s->top];
        s->top--;
        return temp;
    }
    return '\0';
}

// check matching brackets
int match(char open, char close)
{
    if (open == '(' && close == ')')
        return 1;
    if (open == '{' && close == '}')
        return 1;
    if (open == '[' && close == ']')
        return 1;
    return 0;
}

// function to check balanced expression
int checkBalanced(char exp[])
{

    struct Stack s;
    init(&s);

    for (int i = 0; i < strlen(exp); i++)
    {

        char ch = exp[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            push(&s, ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {

            if (isEmpty(&s))
                return 0;

            char top = pop(&s);

            if (!match(top, ch))
                return 0;
        }
    }

    if (isEmpty(&s))
        return 1;
    else
        return 0;
}

int main()
{

    char exp1[] = "a + (b - c) * (d";
    char exp2[] = "m + [a - b * (c + d * {m)]";
    char exp3[] = "a + (b - c)";

    printf("Expression 1: %s\n", exp1);
    if (checkBalanced(exp1))
        printf("Balanced\n\n");
    else
        printf("Not Balanced\n\n");

    printf("Expression 2: %s\n", exp2);
    if (checkBalanced(exp2))
        printf("Balanced\n\n");
    else
        printf("Not Balanced\n\n");

    printf("Expression 3: %s\n", exp3);
    if (checkBalanced(exp3))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}
