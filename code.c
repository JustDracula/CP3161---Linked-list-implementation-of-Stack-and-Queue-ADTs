#include <stdio.h>

#include<stdlib.h>

void push();
void pop();
void display();
void isfull();
void isempty();
void peak();

struct node {
  int data;
  struct node * next;
};
struct node * temp;
int count, n;

int main() {
  int choice;
  printf("LINKED LIST IMPLEMENTATION USING STACKS\n\n");
  printf("enter the size of stack\n");
  scanf("%d", & n);
  do {
    printf("\n1.Insert\n2.Delete\n3.Display\n 4.isempty\n 5.isfull\n 6.peak\n 7. Exit\n\n");
    printf("Enter your choice:");
    scanf("%d", & choice);

    switch (choice) {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      isempty();
      break;
    case 5:
      isfull();
      break;
    case 6:
      peak();
      break;
    case 7:
      exit(0);
      break;
    default:
      printf("Sorry, invalid choice!\n");
      break;
    }
  } while (choice != 7);
  return 0;
}

void push() {
  int data;
  struct node * pointer = (struct node * ) malloc(sizeof(struct node));
  if (count == n) {
    printf("Stack overflow");
  } else {
    printf("Enter the element to be inserted: ");
    scanf("%d", & data);
    if (temp == NULL) {
      pointer -> data = data;
      pointer -> next = NULL;
      temp = pointer;
      count++;
    } else {
      pointer -> data = data;
      pointer -> next = temp;
      temp = pointer;
      count++;
    }
  }
}

void pop() {
  int item;
  struct node * pointer;
  if (temp == NULL) {
    printf("Stack Underflow\n");
  } else {
    item = temp -> data;
    pointer = temp;
    temp = temp -> next;
    free(pointer);
    printf("The deleted item is %d\n", item);
    count--;
  }
}

void display() {
  int i;
  struct node * pointer;
  pointer = temp;
  if (pointer == NULL) {

    printf("Stack underflow\n");
  } else {

    printf("The elements of the stack are:\n");
    while (pointer != NULL) {

      printf("%d\n", pointer -> data);
      pointer = pointer -> next;
    }
  }
}

void isempty() {
  if (temp == NULL) {
    printf("Stack is empty\n");
  } else {
    printf("stack is not empty");
  }
}

void isfull() {
  if (count == n) {
    printf("stack is full");
  } else {
    printf("stack is not full");
  }
}

void peak() {
  struct node * pointer;
  pointer = temp;

  if (pointer == NULL) {
    printf("Stack underflow\n");
  } else {
    printf("elemant is %d", pointer -> data);
  }

}

#queue

#include <stdio.h>

#include <stdlib.h>

struct node {
  int data;
  struct node * link;
}* front, * rear;

int count, n;

void insert();
void delet();
void display();
void isfull();
void isempty();
void frontf();
void rearf();

int main() {
  int choice;
  printf("LINKED LIST IMPLEMENTATION OF QUEUES\n\n");
  printf("enter the size of queue\n");
  scanf("%d", & n);

  do {
    printf("\nenter your choice\n");
    printf("\n1. Insert\n2. Delete\n3. Display\n4.isfull\n 5.isempty\n 6.front\n 7.rear\n 8.Exit\n\n");
    printf("Enter your choice:");
    scanf("%d", & choice);

    switch (choice) {
    case 1:
      insert();
      break;
    case 2:
      delet();
      break;
    case 3:
      display();
      break;
    case 4:
      isfull();
      break;
    case 5:
      isempty();
      break;
    case 6:
      frontf();
      break;
    case 7:
      rearf();
      break;
    case 8:
      exit(0);
      break;
    default:
      printf("Sorry, invalid choice!\n");
      break;
    }
  } while (choice != 8);
  return 0;
}

void insert() {
  struct node * temp;

  temp = (struct node * ) malloc(sizeof(struct node));

  temp -> link = NULL;

  if (count == n) {
    printf("queue is overflow");
  } else {
    printf("Enter the element to be inserted in the queue: ");
    scanf("%d", & temp -> data);
    if (rear == NULL) {
      front = rear = temp;
      count++;
    } else {
      rear -> link = temp;
      rear = temp;
      count++;
    }
  }

}
void delet() {
  struct node * temp;
  temp = front;
  if (front == NULL) {
    printf("Queue underflow\n");
    front = rear = NULL;
  } else {
    printf("The deleted element from the queue is: %d\n", front -> data);
    front = front -> link;
    count--;
    free(temp);
  }
}

void display() {
  struct node * temp;
  temp = front;
  int cnt = 0;
  if (front == NULL) {
    printf("Queue underflow\n");
  } else {
    printf("The elements of the stack are:\n");
    while (temp) {
      printf("%d\n", temp -> data);
      temp = temp -> link;
      cnt++;
    }
  }
}

void isfull() {
  if (count == n) {
    printf("queue is full");
  } else {
    printf("queue is not full");
  }
}

void isempty() {
  if (front == NULL && rear == NULL) {
    printf("Queue is empty\n");
  } else {
    printf("Queue is not empty");
  }

}

void frontf() {
  if (front == NULL && rear == NULL) {
    printf("Queue is empty\n");
  } else {
    printf("front is :%d", front -> data);
  }
}
void rearf() {
  if (front == NULL && rear == NULL) {
    printf("Queue is empty\n");
  } else {
    printf("rear is :%d", rear -> data);
  }

}