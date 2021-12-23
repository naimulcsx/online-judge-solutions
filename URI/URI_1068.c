#include <stdio.h>
#define MAX 100000

typedef struct {
    char list[MAX];
    int top;
} Stack;

// function prototypes
void init(Stack *);
void push(Stack *, char);
char pop(Stack *);
int isValidExp(char *, Stack *);
int isEmpty(Stack *);
char stackTop(Stack *);
int isMatch(char, char);

int main(void) {

    char exp[1000];
    
    while(scanf(" %[^\n]", exp) != EOF) {
        Stack s1;
        init(&s1);

        if (isValidExp(exp, &s1))
            printf("correct\n");
        else 
            printf("incorrect\n");
    }

    return 0;
}

void init(Stack *sp) {
    sp->top = -1;
}

void push(Stack *sp, char value) {
    if (sp->top == MAX - 1) {
        printf("Stack overflow");
        return;
    }

    sp->top++;
    sp->list[sp->top] = value;
}

char pop(Stack *sp) {
    if (sp->top == -1) {
        printf("Stack Underflow");
        return -1;
    }

    int result = sp->list[sp->top];
    sp->top--;
    return result;
}

int isEmpty(Stack *sp) {
    return (sp->top == -1) ? 1 : 0;
}

char stackTop(Stack *sp) {
    return sp->list[sp->top];
}

int isMatch(char a, char b) {
    if (a == '(' && b == ')') return 1;
    return 0;
}

int isValidExp(char *exp, Stack *sp) {
    int valid = 1;

    for (int i = 0; exp[i] != '\0'; i++) {
        if ( exp[i] == '(' ) {
            push(sp, exp[i]);
        } else if (exp[i] == ')') {
            if ( isEmpty(sp) ) {
                valid = 0;
                break;
            } else if ( isMatch(stackTop(sp), exp[i]) ) {
                pop(sp);
            } else {
                valid = 0;
                break;
            }
        }
    }

    if ( valid && !isEmpty(sp) )
        valid = 0;

    return valid;
}