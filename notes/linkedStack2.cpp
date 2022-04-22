#include <iostream>
using namespace std; 

class LinkedStack {
	
	private:
	//define node data structure for each element in our linked list
	struct Node {
		int val;
		Node* next;
	};
	
	//private variables of the LinkedStack class
	Node* head = nullptr;
	int sz = 0;

	public:
	//destructor to delete the new data ounce linked list leaves scope 
	//data allocated on new is NOT DELETED 
	~LinkedStack() { 
		for (int i=0; i < sz; i ++) { 

		}
	}

	//adds element to top of stack
	void push (int num) {	
		Node* temp = new Node;
		temp -> val = num;
		temp -> next = head;
		head = temp;
		sz++;
	}

	//gives user access to size of stack	
	int size() {
		return sz;	
	}

	//removes top element and returns its value
	int pop () {
		if (sz==0) {
			throw;
		}
		int val;
		Node* dead = head;
		val = head->val;
		head = head->next;
		std::cout << val << std::endl;
		sz--;
		return dead -> val; 
		delete dead;
	}

		
};

int main () {
	LinkedStack stack;
	for (int i=0; i <20; i++) {
		stack.push(i);
	}
	printf ("The stack has %d elements!\n", stack.size());
	while (stack.size() > 0) {
		cout << stack.pop() << endl;
	}
	return 0;
}
