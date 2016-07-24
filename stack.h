#ifndef __STACK_H__
#define __STACK_H__

class Stack_layer 
{
	public:
		int num;
		class Stack_layer *next;
};

class Stack 
{
    enum { STACK_SIZE = 100 };

//    int stk[STACK_SIZE];
    
	int sp;
	Stack_layer *top;

public:
	/*Constructor*/
    Stack() {
		sp = -1;
		top = 0;
	}

    void push(int x) {
		Stack_layer *new_layer = new Stack_layer;
		new_layer->num = x;
		new_layer->next = 0;

		if(!top) top = new_layer;
		else {
			new_layer->next = top;
			top = new_layer;
		}
		sp++;
//		stk[++sp] = x;
    }

    int pop() {
		if(!top) return -1;
		else {
			int temp;
			class Stack_layer *temp_layer;
			temp = top->num;
			temp_layer = top;
			top = top->next;
			delete temp_layer;
			sp--;
			return temp;
		}
//		return stk[sp--];
    }
};

#endif
