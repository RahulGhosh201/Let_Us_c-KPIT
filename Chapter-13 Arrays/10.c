#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct
{
    int data[MAX_SIZE];
    int front;
    int rear;
} Deque;

// Initialize a deque
void initDeque(Deque *deque)
{
    deque->front = -1;
    deque->rear = -1;
}

// Check if the deque is empty
int isEmpty(Deque *deque)
{
    return (deque->front == -1 && deque->rear == -1);
}

// Check if the deque is full
int isFull(Deque *deque)
{
    return ((deque->rear + 1) % MAX_SIZE == deque->front);
}

// Insert element from the left side of the deque (enqueue front)
void insertFront(Deque *deque, int element)
{
    if (isFull(deque))
    {
        printf("Deque is full. Cannot insert.\n");
        return;
    }
    if (isEmpty(deque))
    {
        deque->front = 0;
        deque->rear = 0;
    }
    else
    {
        deque->front = (deque->front - 1 + MAX_SIZE) % MAX_SIZE;
    }
    deque->data[deque->front] = element;
}

// Insert element from the right side of the deque (enqueue rear)
void insertRear(Deque *deque, int element)
{
    if (isFull(deque))
    {
        printf("Deque is full. Cannot insert.\n");
        return;
    }
    if (isEmpty(deque))
    {
        deque->front = 0;
        deque->rear = 0;
    }
    else
    {
        deque->rear = (deque->rear + 1) % MAX_SIZE;
    }
    deque->data[deque->rear] = element;
}

// Remove element from the left side of the deque (dequeue front)
int removeFront(Deque *deque)
{
    if (isEmpty(deque))
    {
        printf("Deque is empty. Cannot remove.\n");
        return -1;
    }
    int element = deque->data[deque->front];
    if (deque->front == deque->rear)
    {
        // Only one element left in the deque
        deque->front = -1;
        deque->rear = -1;
    }
    else
    {
        deque->front = (deque->front + 1) % MAX_SIZE;
    }
    return element;
}

// Remove element from the right side of the deque (dequeue rear)
int removeRear(Deque *deque)
{
    if (isEmpty(deque))
    {
        printf("Deque is empty. Cannot remove.\n");
        return -1;
    }
    int element = deque->data[deque->rear];
    if (deque->front == deque->rear)
    {
        // Only one element left in the deque
        deque->front = -1;
        deque->rear = -1;
    }
    else
    {
        deque->rear = (deque->rear - 1 + MAX_SIZE) % MAX_SIZE;
    }
    return element;
}

// Display elements of the deque
void displayDeque(Deque *deque)
{
    if (isEmpty(deque))
    {
        printf("Deque is empty.\n");
        return;
    }
    printf("Elements in deque: ");
    int i = deque->front;
    while (i != deque->rear)
    {
        printf("%d ", deque->data[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("%d\n", deque->data[i]);
}

int main()
{
    Deque deque;
    initDeque(&deque);

    insertFront(&deque, 1);
    insertRear(&deque, 2);
    insertFront(&deque, 3);
    insertRear(&deque, 4);

    displayDeque(&deque);

    printf("Removed element from the front: %d\n", removeFront(&deque));
    printf("Removed element from the rear: %d\n", removeRear(&deque));

    displayDeque(&deque);

    return 0;
}
