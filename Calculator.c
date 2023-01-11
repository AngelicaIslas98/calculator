#include<stdio.h>
#include<stdlib.h>

float Calculate(float a, float b, char op);
float Add(float a, float b);
float Subtract(float a, float b);
float Multiply(float a, float b);
float Division(float a, float b);

int main(int argc, char const *argv[])
{
    float a,b,c;
    char op;

    if (argc < 4)
    {
        printf("insufficient input");
        return;
    }
    
    a=atof(argv[1]);
    b=atof(argv[3]);
    op = argv[2][0];
    c = Calculate(a,b,op);

    printf("Result is : %5.2f",c);
}

    float Calculate(float a, float b, char op)
    {
        switch (op)
        {
        case '+':
        return Add(a,b);
        case '-':
        return Subtract(a,b);
        case '*':
        return Multiply(a,b);
        case '/':
        return Division(a,b);
        }
        return 0.0;
    }


float Add(float a, float b)
{
    return a+b;
}

float Subtract(float a, float b)
{
    return a-b;
}

float Multiply(float a, float b)
{
    return a*b;
}

float Division(float a, float b)
{
    return a/b;
}
