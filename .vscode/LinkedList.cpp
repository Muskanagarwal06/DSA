#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct Node{
	string data;
	struct Node * next;
};

void trav(struct Node * ptr){
	while(ptr != NULL){
		cout<<ptr -> data;
		ptr = ptr -> next;
	}
}
int main(){
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	
	// head = (struct Node *)malloc(sizeof(struct Node));
	// second = (struct Node *)malloc(sizeof(struct Node));
	// third = (struct Node *)malloc(sizeof(struct Node));
	// fourth= (struct Node *)malloc(sizeof(struct Node));

    // we would use new instead of malloc in C++ because malloc is a C function abd doesnt call constructors

	head = new Node;
	second = new Node;
	third = new Node;
	fourth = new Node;
	
	head -> data = "First Node -> ";
	head -> next = second;
	
	second -> data = "Second Node -> ";
    second -> next = third;
	
	third -> data = "Third Node -> ";
	third -> next = fourth;
	
	fourth -> data = "fourth Node -> NULL";
	fourth -> next = NULL;
	
	trav(head);
	
	
}