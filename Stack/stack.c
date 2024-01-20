#include <stdio.h>

// remove the element of the stack
void pop(int* top){
    if(*top <= 0){
        printf("***Stack is Empty***\n");
        return;
    }else
        (*top)--;
}

// push fucntion of stack
void push(int stack[], int* top, int elem, int size){
    if(*top > size){
        printf("***Stack is full***\n");
        return;
    }else{
        stack[(*top)] = elem;
        (*top)++;
    }

}
// display the stack
void display(int *top, int stack[]){
    if(*top == 0){
        printf("****No element is Stack.****\n");
    }
    else{
        printf("This is stack values:");
        for(int i = *top ; i >= 0; i--){
            printf("%d, ", stack[i]);
        }
    }

}

int main() {
    int stack[10];
    int top = 0;

    pop(&top);
    push(stack, &top, 5, 10);
    push(stack, &top, 2, 10);
    push(stack, &top, 3, 10);
    push(stack, &top, 4, 10);
    push(stack, &top, 99, 10);
    push(stack, &top, 7, 10);
    push(stack, &top, 6, 10);
    push(stack, &top, 10, 10);
    push(stack, &top, 8, 10);
    push(stack, &top, 8, 10);
    push(stack, &top, 5, 10);
    push(stack, &top, 6, 10);
    pop(&top);





    display(&top, stack);






}