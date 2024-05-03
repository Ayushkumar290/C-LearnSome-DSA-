# C-LearnSome-DSA-
   * We are learing c/c++ DSA and this repo is for you to learn DSA
      enjoy your Lerning   

#Linked LIST    

* What is Linked List
* Arrys vs Linked List
* Inserting a Node at the Begining

# What is Linked List  
 * A linked list is a fundamental data structure in computer science.  
   It consists of nodes where each node contains data and a reference (link) to the next node in the sequence.  
   This allows for dynamic memory allocation and efficient insertion and deletion operations compared to arrays.
![![Singlelinkedlist](https://github.com/Ayushkumar290/C-LearnSome-DSA-/assets/143092664/6c71ae83-4f06-47f9-976b-674f619baa2b)
 * Node Structure: A node in a linked list typically consists of two components:  
 * Data: It holds the actual value or data associated with the node.  
 * Next Pointer: It stores the memory address (reference) of the next node in the sequence.  
 * Head and Tail: The linked list is accessed through the head node, which points to the first node in the list. The last node in the list points to NULL or nullptr, indicating the end of the list. This node is known as the tail node.

   
 * **Why linked list data structure needed?**    
   ** **Dynamic Data structure**: The size of memory can be allocated or de-allocated at run time based on the operation insertion or deletion.  
   ** **Ease of Insertion/Deletion**: The insertion and deletion of elements are simpler than arrays since no elements need to be shifted after insertion and deletion, Just the address needed to be updated.  
   ** **Efficient Memory Utilization**: As we know Linked List is a dynamic data structure the size increases or decreases as per the requirement so this avoids the wastage of memory.   
   ** **Implementation**: Various advanced data structures can be implemented using a linked list like a stack, queue, graph, hash maps, etc.
   
# **Arrys vs Linked List**    
**Linked List:**  
   * Data Structure: Non-contiguous  
   * Memory Allocation: Dynamic  
   * Insertion/Deletion: Efficient  
   * Access: Sequential  
**Array:**  
   * Data Structure: Contiguous  
   * Memory Allocation: Static  
   * Insertion/Deletion: Inefficient  
   * Access: Random  
# **Inserting a Node at the Begining**  
  **Header inclusions:**
~~~
**C**
#include <stdlib.h>  
#include <stdio.h>  
Use code with caution.  
content_copy  
~~~
These lines include standard C libraries:  

<stdlib.h>: Provides functions for memory allocation (like malloc) used to create the linked list nodes.  
<stdio.h>: Provides input/output functions (like printf and scanf) used for printing messages and getting user input.  
Node structure:  
~~~  
**C**  
struct Node {  
  int data;  
  struct Node* link;  
};  
Use code with caution.  
content_copy  
~~~  
This defines a structure called Node which represents a single element in the linked list. It has two members:  
  
data: An integer variable to store the actual data value in the list.  
link: A pointer to another Node structure. This pointer will point to the next node in the list, creating the linked structure.  
Global variable:    
~~~  
**C**  
struct Node* head = NULL;  
Use code with caution.  
content_copy    
~~~
This declares a global variable named head. It's a pointer to a Node structure and is initialized to NULL. This head pointer will always point to the first node (head) of the linked list. Initially, the list is empty, so it points to NULL.  

Insert function:  
~~~  
**C**    
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
Use code with caution.
content_copy
~~~
This function insert(x) takes an integer x as input and inserts a new node with that value at the beginning of the linked list. Here's what it does:  
  
Allocate memory: It allocates memory for a new node using malloc and casts it to a Node pointer. It checks if the allocation fails (returns NULL).  
Set data and link: If memory allocation is successful, it sets the data member of the new node to x and the link member to the current head (which might be NULL for an empty list).  
Update head: Finally, it updates the head pointer to point to the newly created node, making it the new head of the list.  
Print function:  
~~~  
**C**  
void printList() {
  Node* temp = head;
  printf("List is: ");
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->link;
  }
  printf("\n");
}
Use code with caution.
content_copy
~~~  
This function printList iterates through the linked list and prints the data of each node.  

Start at head: It creates a temporary pointer temp that starts by pointing to the head of the list.
Loop and print: It uses a while loop that continues as long as temp is not NULL (meaning it hasn't reached the end of the list). Inside the loop, it prints the data of the current node (temp->data) followed by a space. Then, it moves temp to point to the next node   using temp = temp->link.  
Print newline: After the loop finishes iterating through all nodes, it prints a newline character.  
Main function:  
~~~  
**C**
int main() {
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

Use code with caution.
content_copy
~~~  
This is the main function where the program execution starts.    

Get list size: It prompts the user to enter the number of elements they want in the list and stores it in n.    
Input loop: It uses a for loop to iterate n times. In each iteration:    
It prompts the user to enter a number and stores it in x.      
It calls the insert(x) function to insert the entered number into the linked list.    
Print list: After the loop finishes adding elements, it calls the printList function to print the contents of the linked list.    
Exit: Finally, it returns 0 to indicate successful program flag    

**SOURCE CODE LINK -** Inserting.cpp.cpp
