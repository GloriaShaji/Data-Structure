#include <stdio.h>
#include <stdlib.h>

struct Node {
int data; 
struct Node* link; 
};
struct Node* start = NULL;
struct Node* getnode() 
{
int item;
printf("\n Enter the value to insert: ");
scanf("%d", &item); 
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
if (new_node == NULL) {
printf("\n Memory allocation failed!\n");
exit(1); 
}
new_node->data = item; 
new_node->link = NULL;
return new_node;
}


void insertTail() {
struct Node* new_node = getnode(); 
if (start == NULL) {

start = new_node;
} else {
struct Node* ptr = start; 
while (ptr->link != NULL) {
ptr = ptr->link;
}

ptr->link = new_node;
}
}

void deleteAtHead() {
if (start == NULL) {
printf("Queue is empty!!!!\n");
} else {
struct Node* ptr = start; 
start = start->link; 
free(ptr); 
printf("\n\t Node dequeued!!!!\n");
}
}



void traverse() {
if (start == NULL) {
printf("List is empty.\n");
} else {
struct Node* ptr = start; 
while (ptr != NULL) {
printf("-> %d", ptr->data); 
ptr = ptr->link; 

}
}
}

void freeList() {
while (start != NULL) {
deleteAtHead();
}
}

int main() {
int choice;
while (1) {

printf("\nLINKED LIST USING QUEUE MENU\n");
printf("1. Enqueue\n");
printf("2. Dequeue\n");
printf("3. Traverse List\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
insertTail(); 
printf("\n\tNode Enqueued!!!!.\n");
break;
case 2:
deleteAtHead();
break;
case 3:
printf("\n\tCurrent List: \n");
traverse(); 
break;
case 4:
printf("Exiting program.\n");

freeList(); 
exit(0); 
default:
printf("Invalid choice! Please choose a valid option.\n");
}
}
return 0;
}
