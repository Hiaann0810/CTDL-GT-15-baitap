//https://gochocit.com/ky-thuat-lap-trinh/ngan-xep-stack-la-gi-cach-xay-dung-ngan-xep
#include <iostream>
using namespace std;

#define max 10000
int Stack[max];
int Top;


void StackInit() {
	Top = -1;
}

void push(int V) {
	if (Top > max - 1) {
		cout << "Stack is full";
	}
	else {
		Top++;
		Stack[Top] = V;
	}
}

int pop() {
	if (Top == -1) {
		cout << "Stack is empty";
		return -1;
	}
	else {
		int res = Stack[Top];
		Top--;
		return res;
	}
}

int empty() {
	if (Top == -1) {
		return 0;
	}
	return 1;
}

int size() {
	return Top + 1;
}


int top() {
	if (Top == -1) {
		cout << "Stack is empty";
		return -1;
	}
	else {
		int res = Stack[Top];
		return res;
	}
}
int main() {
	//init Stack
	StackInit();

	push(5);
	push(21);
	push(10);
	push(99);
	push(101);

	cout << "Size of Stack = " << size() << endl;
	
	cout << pop() << endl;
	cout << pop() << endl;
	
	cout << "Size of Stack after pop = " << size() << endl;
	system("pause");
}