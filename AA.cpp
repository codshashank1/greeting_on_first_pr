// #include <iostream>
// using namespace std;
// #include <stack>

// You have to grow from inside out ! None can teach you, none can make you spiritual ! There's no other teacher but your own soul !"
//                           - Swami Vivekananda.

// struct node{
// 	int data;
// 	node* next;
// };

// class myStack
// {
// 	node* tope;
// public:

// 	myStack(): tope(NULL){}
// 	void push(int x){
// 		node* temp = new node;
// 		temp->data = x;
// 		temp->next = tope;
// 		tope = temp;		
// 	}
// 	void pop(){
// 		if(tope == NULL)
// 			return;
// 		node* temp = tope;
// 		tope = temp->next;
// 		delete(temp);
// 	}
// 	bool isEmpty(){
// 		if(tope == NULL)
// 			return true;
// 		else 
// 			return false;
// 	}
// 	int top(){
// 		if(tope != NULL)
// 			return tope->data;
// 		else
// 			return 0;
// 	}
// 	void displayStack(){
// 		node* temp = tope;
// 		while(temp != NULL){
// 			cout << temp->data << " ";
// 			temp = temp->next;
// 		}
// 		cout << "\n";
// 	}
// 	~myStack(){}
	
// };

// void reverse(string &k){

// }

// int main(){

// 	string s;
// 	cin >> s;
// 	reverse(s);

// 	S1.push(3);
// 	S1.push(22);
// 	S1.push(87);
// 	S1.push(3);
// 	S1.push(22);
// 	S1.push(87);
// 	S1.pop();
// 	S1.displayStack();




// 	return 0;

// }


#include <bits/stdc++.h>
using namespace std;
 
void fun(int& a) { a += 110; }
 
int main()
{
    int x = 10;
    fun(x);
    cout << "New value of x is " << x;
    return 0;

    char buff[6];
    strcpy(buff,"hello");
    const char* str = buff;
    str[0] = 'M';
    str = "Mello";
    buff[0] = 'H';
}