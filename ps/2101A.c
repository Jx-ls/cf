#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	int data;
	int posx;
	int posy;
	struct _node *next;
} Node;

typedef Node* NodePtr;

NodePtr createNode(int data, int posx, int posy) {
	NodePtr new_node = (NodePtr) malloc (sizeof(Node));
	if (!new_node) {
		printf("Mem alloc failed");
		exit 1;
	}
	new_node -> data = data;
	new_node -> posx = posx;
	new_node -> posy = posy;
	new_node -> next = NULL;
	return newNode;
}
/*
 -	base case: if side_len is 1 then make node with val 0 at pos (0,0)
 -	if side_len is even then 
  	
 
 */
int counter = 1;
void pattern(NodePtr* head, int side_len) {
	// base case
	if (side_len == 1) {
		head -> next = createNode(0,0,0); 
		counter = 1;
	} 
	// recursive call
	pattern(head, side_len - 1); 
	// if side_len is even
	if (side_len % 2 == 0) {
		
	}
}

void print(NodePtr head) {
	
}

int main() {
	//int n;
	//scanf("%d", &n);
	//int A[n];
	NodePtr head = (NodePtr) malloc(sizeof(node));
	if (!head) {
		printf("mem alloc failed");
		exit 2;
	}

	pattern(head, 2);

	printf("%ld", sizeof(node));
	//for (int i = 0; i < n; i++) scanf("%d", A + i);
	//for (int i = 0; i < n; i++) {
		//print(A[i]);
	//}
}
