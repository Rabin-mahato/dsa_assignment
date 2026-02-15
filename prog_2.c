#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define SIZE 100

// Stack for characters (operators)
struct StackChar
{
    char arr[SIZE];
    int top;
};

// Stack for integers (evaluation)
struct StackInt
{
    int arr[SIZE];
    int top;
};

/* ---------- Character Stack Functions ---------- */

void initChar(struct StackChar *s)
{
    s->top = -1;
}

int isEmptyChar(struct StackChar *s)
{
    return s->top == -1;
}

void pushChar(struct StackChar *s, char ch)
{
    s->arr[++(s->top)] = ch;
}

char popChar(struct StackChar *s)
{
    return s->arr[(s->top)--];
}

char peekChar(struct StackChar *s)
{
    return s->arr[s->top];
}

/* ---------- Integer Stack Functions ---------- */

void initInt(struct StackInt *s)
{
    s->top = -1;
}

void pushInt(struct StackInt *s, int value)
{
    s->arr[++(s->top)] = value;
}

int popInt(struct StackInt *s)
{
    return s->arr[(s->top)--];
}

/* ---------- Utility Functions ---------- */

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

int applyOperator(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '^':
        return pow(a, b);
    }
    return 0;
}

/* ---------- Infix to Postfix ---------- */

void infixToPostfix(char infix[], char postfix[])
{

    struct StackChar s;
    initChar(&s);

    int k = 0;

    for (int i = 0; i < strlen(infix); i++)
    {

        char ch = infix[i];

        if (isdigit(ch))
        {
            postfix[k++] = ch;
        }
        else if (ch == '(')
        {
            pushChar(&s, ch);
        }
        else if (ch == ')')
        {

            while (!isEmptyChar(&s) && peekChar(&s) != '(')
            {
                postfix[k++] = popChar(&s);
            }
            popChar(&s);
        }
        else
        {
            while (!isEmptyChar(&s) &&
                   precedence(peekChar(&s)) >= precedence(ch))
            {
                postfix[k++] = popChar(&s);
            }
            pushChar(&s, ch);
        }
    }

    while (!isEmptyChar(&s))
    {
        postfix[k++] = popChar(&s);
    }

    postfix[k] = '\0';
}

/* ---------- Postfix Evaluation ---------- */

int evaluatePostfix(char postfix[])
{

    struct StackInt s;
    initInt(&s);

    for (int i = 0; i < strlen(postfix); i++)
    {

        char ch = postfix[i];

        if (isdigit(ch))
        {
            pushInt(&s, ch - '0');
        }
        else
        {
            int b = popInt(&s);
            int a = popInt(&s);
            int result = applyOperator(a, b, ch);
            pushInt(&s, result);
        }
    }

    return popInt(&s);
}

/* ---------- Main ---------- */

int main()
{

    char infix[] = "3+(2*4)";
    char postfix[SIZE];

    printf("Infix Expression: %s\n", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix Expression: %s\n", postfix);

    int result = evaluatePostfix(postfix);

    printf("Evaluated Result: %d\n", result);

    return 0;
}
