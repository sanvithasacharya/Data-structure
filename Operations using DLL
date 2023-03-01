#include<stdio.h>
#include<stdlib.h>
//Doubly Linked list(DLL) OF Employee Data with the fields: SSN,Name,Dept
//Designation,Sal, Phno
struct node
{
char ssn[10],name[10],dept[15],desig[10],phno[15];
int sal;
struct node *llink;
struct node *rlink;
};
typedef struct node *NODE;
NODE temp, FIRST=NULL,END=NULL;
NODE getnode()
{
NODE x;
x=(NODE)malloc(sizeof(struct node));
return x;
}
void read()
{
temp = getnode();
temp->llink=NULL;
temp->rlink=NULL;
printf("Enter SSN:");
scanf("%s",temp->ssn);
printf("Enter name:");
scanf("%s",temp->name);
printf("Enter Dept:");
scanf("%s",temp->dept);
printf("Enter Designation:");
scanf("%s",temp->desig);
printf("Enter phno:");
scanf("%s",temp->phno);
printf("Enter salary:");
scanf("%d",&temp->sal);

return;
}
void Create_DLL()
{
int n,i=1;
printf("Enter the number of employees\n");
scanf("%d",&n);
while(1<=n)
{
printf("Enter the details of %d employee\n",i++);
read();
if(FIRST==NULL)
{
FIRST=temp;
END=temp;
}
else
{
END->rlink=temp;
temp->llink=END;
END=temp;
}
}
}
void display_count()
{
temp=FIRST;
int count=1;
printf("Employee Details:\n");
if(FIRST==NULL)
{
printf("The employee detail is NULL and count is %d\n", count-1);
}
else
{
while(temp != END)
{
count ++;
printf("%s\t%s\t%s\t%s\t%s\t%d\n",temp->ssn,temp->name,temp->dept,temp->desig,temp->phno,temp->sal);
temp=temp->rlink;
}
printf("%s\t%s\t%s\t%s\t%s\t%d\n",temp->ssn,temp->name,temp->dept,temp->desig,temp->phno,temp->sal);
printf("Employee count is %d\n",count);
}
return;
}
void Insertionfront()
{
printf("Enter the details of the employee\n");
read();
if(FIRST==NULL)
FIRST=temp;
else
{
temp->rlink=FIRST;
FIRST->llink=temp;
FIRST=temp;
}
}
void Insertionend()
{
printf("Enter the details of the new employee\n");
read();
if(FIRST==NULL)
{
FIRST=temp;
END=temp;
}
else
{
END->rlink=temp;
temp->llink=END;
END=temp;
}
return;

}
void Deletionfront()
{
temp=FIRST;
if(FIRST==NULL)
{
printf("List is empty\n");
}
else if(FIRST==END)
{
printf("Deleted element is %s\n",temp->ssn);
FIRST=NULL;
END=NULL;
free(temp);
}
else 
{
printf("Deleted element is %s\n",temp->ssn);
FIRST=FIRST->rlink;
FIRST->llink=NULL;
free(temp);
}
return;
}
void Deletionend()
{
temp=END;
if(FIRST==NULL)
{
printf("List is empty\n");
}
else if(FIRST==END)
{
printf("Deleted element is %s\n",temp->ssn);
FIRST=NULL;
END=NULL;
free(temp);
}
else
{
printf("Deleted element is %s\n",temp->ssn);
END=END->llink;
END->rlink=NULL;
free(temp);
}
return;
}
void main()
{
int choice;
while(1)
{
printf("----------MENU----------\n");
printf("1-Create DLL of N employees");
printf("\n2-Display DLL");
printf("\n3-Insertion at front");
printf("\n4-Insertion at end");
printf("\n5-Deletion at front");
printf("\n6-Deletion at end");
printf("\n7-Exit\n");
printf("-------------------------\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1: Create_DLL();
break;
case 2: display_count();
break;
case 3: Insertionfront();
break;
case 4: Insertionend();
break;
case 5: Deletionfront();
break;
case 6: Deletionend();
break;
case 7: return;
default: printf("Invalid choice\n");
}
}
}
