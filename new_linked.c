#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    struct node* newnode;
    struct node* current;
    struct node* head = NULL;
    int i, n;

    // Prompt for the size of the linked list
    printf("Enter the size of the linked list: ");
    scanf("%d", &n);

    // Creating the linked list
    for(i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node)); // Allocate memory for new node
        
        // Check if memory allocation was successful
        if (newnode == NULL) {
            printf("Memory allocation failed. Exiting program.\n");
            return 1; // Exit if memory allocation fails
        }

        // Prompt for data to store in the node
        printf("Enter the data for node %d: ", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        // If it's the first node, set both head and current
        if(head == NULL) {
            head = newnode;
            current = newnode;
        } else {
            // Otherwise, link the new node to the list and move the current pointer
            current->next = newnode;
            current = newnode;
        }
    }

    // Print the linked list
    printf("\nLinked list: ");
    for(current = head; current != NULL; current = current->next) {
        printf("%d ", current->data);
    }
    printf("\n");

    // Free the allocated memory (good practice)
    current = head;
    while(current != NULL) {
        struct node* temp = current;
        current = current->next;
        free(temp); // Free each node
    }

    return 0;
}
