#include<stdio.h>
#include<stdlib.h>
struct node
{
char usn[20],name[20],branch[5],phno[12];
int sem;
struct node *link;
};
typedef struct node *NODE;
NODE temp,FIRST=NULL;
NODE getnode()
{
NODE x;
x=(NODE)malloc(sizeof(struct node));
return;
}
void read()
{
temp=getnode();
temp->link=NULL;
printf("Enter USN:");
scanf("%s",temp->usn);
printf("Enter Name:");
scanf("%s",temp->name);
printf("Enter Branch:");
scanf("%s",temp->branch);
printf("Enter Phno:");
scanf("%d",&temp->sem);
}
void Create_SLL()
{
int n,i=1;
printf("Enter the number of students:\n");
scanf("%d",&n);
while(i<=n)
{
printf("\nEnter the Details of the %d student\n",i++);
read();
if(FIRST=NULL)
FIRST=temp;
else
{
temp->link=FIRST;
FIRST=temp;
}
}
}
void display_count(NODE FIRST)
{
temp=FIRST;
int count=1;
printf("Student Details:\n");
if(FIRST==NULL)
{
printf("Student detail is NULL and count is %d\n",count-1);
}
else
{
while(temp->link!=NULL)
{
count++;
printf("%s\t%s\t%s\t%s\t%d\n",temp->usn,temp->name,temp->branch,temp->phno,temp->sem);
temp=temp->link;
}
printf("%s\t%s\t%s\t%s\t%d",temp->usn,temp->name,temp->branch,temp->phno,temp->sem);
printf("\nStudent count:%d\n",count);
}
return;
}
void Insertionfront()
{
printf("Enter the details of the student\n");
read();
if(FIRST==NULL)
FIRST=temp;
else
{
temp->link=FIRST;
FIRST=temp;
}
}
NODE Insertionend(NODE FIRST)
{
NODE last=FIRST;
printf("Enter the details of the new student:\n");
read();
if(last!=NULL)
{
while(last->link!=NULL)
{
last=last->link;
}
last->link=temp;
}
else
{
FIRST = temp;
}
return FIRST;
}
void Deletionfront()
{
temp=FIRST;
if(FIRST==NULL)
{
printf("List is empty\n");
}
else
{
printf("Deleted element is %s\n",temp->usn);
FIRST=temp->link;
free(temp);
}
return;
}
void Deletionend()
{
NODE pre=NULL;
temp = FIRST;
if(FIRST==NULL)
{
printf("List is empty\n");
}
else if(temp->link==NULL)
{
printf("Deleted element is %s\n",temp->usn);
free(temp);
FIRST=NULL;
}
else
{
while(temp->link!=NULL)
{
pre=temp;
temp=temp->link;
}
pre->link=NULL;
printf("Deleted element is %s\n",temp->usn);
free(temp);
}
return;
}
void main()
{
int choice;
while(1)
{
printf("--------MENU--------\n");
printf("1-Create a SLL of N students\n");
printf("2-Display SLL\n");
printf("3-Insertion at front\n");
printf("4-Insertion at end\n");
printf("5-Deletion at front\n");
printf("6-Deletion at end\n");
printf("7-EXIT\n");
printf("-------------------\n");
printf("\nEnter your choice :");
scanf("%d",&choice);
switch(choice)
{
case 1: Create_SLL();
break;
case 2: display_count(FIRST);
break;
case 3: Insertionfront();
break;
case 4: FIRST=Insertionend(FIRST);
break;
case 5: Deletionfront();
break;
case 6: Deletionend();
break;
case 7: return;
default: printf("\nInvalid choice\n");
}
}
}


