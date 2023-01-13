#include<stdio.h>
#include<stdlib.h>
void addNode(int);
//Represent a node of singly linked list
struct node
{
int data;
struct node*next;
};
//Represent the head and tail of the singly linked list
struct node *head,*tail = NULL;
void create()
{
int i,n,ele;
printf("Enter number of nodes to be created\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element to be inserted in SLL\n");
scanf("%d",&ele);
addNode(ele);
}
}
//addNod() will add a new node to the link
void addNode(int data)
{
//create a new node
struct node *newNode = (struct node*)malloc(sizeof(struct node));
newNode -> data = data;
newNode -> next = NULL;
//checks if the list is empty
if(head == NULL)
{
//If list is empty,both head and tail will point to new node
head = newNode;
tail = newNode;
}
else {
//newNode will be added after tail such that tail's next will point to newNode
tail->next = newNode;
//newNode will become new tail of the list 
tail = newNode;
}
}
//display() will display all the nodes present in the list
void display()
{
//Node current will point to head
struct node*current = head;
if(head == NULL)
{
printf("List is empty");
return;
}
printf("Nodes of singly linked list:\n");
while(current!=NULL)
{
//Prints each node by increasing pointer
printf("%d",current->data);
current = current->next;
}
printf("\n");
}
void search()
{
struct node *ptr;
int item,i=0,flag=0,loc;
ptr=head;
if(ptr==NULL)
{
printf("\nEmpty List\n");
}
printf("\nEnter item which you want to search?\n");
scanf("%d",&item);
while(ptr!=NULL)
{
if(ptr->data == item)
{
printf("Item found at location %d", i+1);
flag=1;
}
i++;
ptr = ptr->next;

if(flag == 0)
{
printf("Item is not found\n");
}
}
}
int main()
{
int choice;
while(1)
{
printf("\nSLL OPERATION\n");
printf("\t1. Create a SLL stack of N integers");
printf("\t2. Display of SLL");
printf("\t3. Linear Search");
printf("\t4. Exit");
printf("\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:create();
break;
case 2: display();
break;
case 3: search();
break;
case 4: return 0;
break;
default: printf("\nEnter a valid choice:\n");
}
}
return 0;
}
