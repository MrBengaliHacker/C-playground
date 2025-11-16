#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head = NULL;

void createList();
void displayList();

int main()
{
  createList();
  displayList();
  return 0;
}

void createList()
{
  struct node *newnode, *temp;
  int choice = 1;

  temp = head;

  while (choice)
  {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if (head == NULL)
    {
      head = temp = newnode;
    }
    else
    {
      temp->next = newnode;
      temp = newnode;
    }

    printf("Do you want to continue (0,1)?");
    scanf("%d", &choice);
  }
}

void displayList()
{
  struct node *temp = head;

  printf("\nLinked List: ");
  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
}