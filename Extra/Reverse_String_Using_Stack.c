#include<stdio.h>
#include<string.h>

#define MAX_SIZE 100

struct Stack{
    int top;
    char items[MAX_SIZE];
};

void push(struct Stack *stack, char c);
void pop(struct Stack *stack);
void reverse(char *str);

int main(){
    char str[MAX_SIZE];

    printf("Enter a string: ");
    gets(str);

    printf("\nOriginal string: %s", str);

    reverse(str);

    printf("\nReversed string: %s", str);

    return 0;
}

void push(struct Stack *stack, char c){
    if (stack->top == -1){
        printf("\nStack Overflow!");
        return '\0';
    }
    return stack->items[++stack->top] = c;
}