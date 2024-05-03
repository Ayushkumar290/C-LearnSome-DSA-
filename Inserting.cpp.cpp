#include <stdlib.h>
#include <stdio.h>

struct Node {   //DECLARING NODE
    int data;
    struct Node* link;
};

struct Node* head = NULL; // Initially, the list is empty

void insert(int x) {
    Node* temp = (Node*)malloc(sizeof(struct Node));
    if (temp == NULL) {
        printf("Memory allocation error!\n");
        return;
    }

    temp->data = x;
    temp->link = head;
    head = temp;
}

void printList() { 
    Node* temp = head;
    printf("List is: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main() {        // empty list;
    int n, x;

    printf("How many numbers in the list?\n");
    scanf("%d", &n);

    for (int count = 0; count < n; count++) {
        printf("Enter the number: ");
        scanf("%d", &x);
        insert(x);
    }

    printList();

    return 0;
}

