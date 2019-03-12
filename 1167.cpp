#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int value;
	Node * next;
	Node(int value = 0, Node * next = nullptr){
		this->value = value;
		this->next = next;
		
	}
};

struct CircularList
{
	Node * head;
	CircularList(){
		head = nullptr;
	}

void push_back(int value){
	if(head == nullptr){
		head = new Node(value);
		head->next = head;
		return;
	}
	if(head->next == head){
		auto node = new Node(value);
		head->next = node;
		node->next = head;
		return;

	}
	auto node = head;
	while(node->next!=head){
		node = node->next;
	}
	auto no = new Node(value);
	node->next = no;
	no->next = head;
}
int size(){
	auto node = head;
	int cont = 0;
	while(node->next!=head){
		cont++;
		node = node->next;
	}
	return cont;

}
void print(){
	auto node = head;
	while(node->next!=head){
		cout << node->value << " ";
		node = node->next;
	}cout << node->value;
	cout << endl;
}

Node * begin(){
		return head->next;
}
void erase(Node * node){
	if(head == nullptr)
		return;
	if(node == head){
		if(head-next == head){
			delete head;
			head = nullptr;
		}
		while(node!=head)
		auto aux = head;
		head = aux->next;
		delete aux;


	}
	if(node == head->next){
		node = head->next;
		head->next = head;
		delete node;
		return;
	}
	auto aux = head;
	while(aux->next->next != node){
		aux = aux->next;
	}
	delete aux->next->next;
	aux->next = head;

}

};
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	CircularList lista;
	lista.push_back(3);
	lista.push_back(5);
	lista.push_back(7);
	lista.push_back(9);
	lista.push_back(11);
	lista.push_back(23);

	lista.erase(lista.begin());

	lista.print();
}