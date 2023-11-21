#include <stdio.h>
#include <stdlib.h>



typedef struct Node
{
    int constt;
    int expo;
    struct Node* next;
} Node;

void insert_Poly(int constt, int expo, Node* head){
    Node* temp_head = head;
    while (1){
        if(temp_head->next == NULL){
            Node* new_Node = (Node*)malloc(sizeof(Node));
            new_Node->constt = constt;
            new_Node->expo = expo;
            new_Node->next = NULL;
            temp_head->next = new_Node;
            break;
        }
        temp_head = temp_head->next;
    }
}

void print_LL(Node* head){
    if(head == NULL){
        printf("Error in printing.");
        return;
    }
    while (head != NULL)
    {
        printf("%dx^%d", head->constt, head->expo);
        head = head->next;
        if(head != NULL){
            printf(" %c ", '+');
        }
    }
    printf("\n");
}


int main()
{
    int constt, expo;
    Node *head = (Node*)malloc(sizeof(Node));
    head->next = NULL;

    // poly = 2x^2 + 3x^1 + 4
    constt = 2;
    expo = 2;
    insert_Poly(constt, expo, head);
    constt = 3;
    expo = 1;
    insert_Poly(constt, expo, head);
    constt = 4;
    expo = 0;
    insert_Poly(constt, expo, head);
    
    print_LL(head->next);
    return 0;
}