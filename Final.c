#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void display();
//Holding until proven concept has worked, then implement generics
void enqueue(int);
void dequeue();
int size();

int main()
{
printf("Help Me");
    enqueue(1);
    enqueue(2);
    enqueue(3);
    printf("%d\n", size());
    
    
    /*
    int n, ch;
    do
    {
        printf("\n\nQueue Menu\n1. Add \n2. Remove\n3. Display\n4. Size\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number ");
                scanf("%d", &n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf(size());
                break;
        }
    }while (ch != 0);
    */
}

// Change data type of parameters once it has been proven that it works
void enqueue(int item)
{
    struct node *nptr = malloc(sizeof(struct node));
    nptr->data = item;
    nptr->next = NULL;
    if (rear == NULL)
    {
        front = nptr;
        rear = nptr;
    }
    else
    {
        rear->next = nptr;
        rear = rear->next;
    }
}

void display()
{
    struct node *temp;
    temp = front;
    printf("\n");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

int size()
{
    struct node *temp;
    temp = front;
    int counter = 0;
    while (temp != NULL)
    {
        counter++;
    }
    return counter;
}

void dequeue()
{
    if (front == NULL)
    {
        printf("\n\nqueue is empty \n");
    }
    else
    {
        struct node *temp;
        temp = front;
        front = front->next;
        printf("\n\n%d deleted", temp->data);
        free(temp);
    }
}

