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

void insertAtHead() {
struct Node* new_node = getnode(); 
if (start == NULL) {

start = new_node;
} else {

new_node->link = start;

start = new_node;
}
}

void deleteAtHead() {
if (start == NULL) {
printf("Stack Underflow!!Elements cannot popped out of the stack!!\n");
} else {
struct Node* ptr = start; 
start = start->link; 
free(ptr); 
printf("\n\t Node popped out!!!!!\n");
}
}

void traverse() {
if (start == NULL) {
printf("Stack is empty.\n");
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

printf("\nLINKED LIST USING STACK MENU\n");
printf("1. Push\n");
printf("2. Pop\n");
printf("3. Traverse List\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
insertAtHead();
printf("\n\tNode pushed into the stack!!!!\n");
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
