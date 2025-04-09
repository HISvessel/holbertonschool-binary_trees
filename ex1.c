#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}Node;

Node *createNode(int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL)
	{
		printf("Memory allocation failed.\n");
		exit(1);
	}
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}

void PrintPostOrder(Node *h)
{
	if (h == NULL)
	{
		return;
	}

	PrintPostOrder(h->left);
	PrintPostOrder(h->right);
	printf("%d ",h->data);
}

int main()
{
	Node *root = createNode(10);
	Node *Left = createNode (5);
	Node *Right = createNode(15);
	Node *LeftL = createNode(2);
	Node *LeftR = createNode(7);
	Node *RightL = createNode(20);

	root->left = Left;
	root->right = Right;
	Left->left = LeftL;
	Left->right = LeftR;
	Right->left = RightL;

	free(LeftL);
	free(Left);
	free(LeftR);
	free(root);
	free(Right);
	free(RightL);
}
