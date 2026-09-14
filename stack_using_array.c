#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;

void push();
void pop();
void peek();
void display();
void main(){
	int choice;
	while (1){
		printf("****STACK OPERATIONS****\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Peek\n");
		printf("4. Display\n");
		printf("5. Exit\n");
		printf("\nEnter ur choice(1-5): ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				printf("\nExiting program.....");
				exit(0);
			default:
				printf("\nInvalid choice!!!\nPlease enter number btw 1-5\n\n");
		}
	}
}
void push(){
	int val;
	if(top==MAX-1)
		printf("\nStack Overflow!!!!\nCannot push more elements....!!!\n\n");
	else{
		printf("\nEnter value to push : ");
		scanf("%d",&val);
		top++;
		stack[top]=val;
		printf("%d succesfully pushed onto the stack...\n\n",val);
	}}
void pop(){
	if(top==-1)
		printf("\nStack Underflow!!!!\nStack is empty....!!!\n\n");
	else{
		printf("\nPopped element %d \n\n",stack[top]);
		top--;
	}}
void peek(){
	if(top==-1)
		printf("\nStack is Empty. no elements\n\n");
	else
		printf("\nTop Element : %d\n\n",stack[top]);
}
void display(){
	if(top==-1)
                printf("\nStack is empty....!!!\n\n");
	else{
		printf("\nStack elements (from top to bottom) : \n");
		for(int i=top;i>=0;i--)
			printf("%d   ",stack[i]);
		printf("\n-----------------------------\n\n");
	}}


