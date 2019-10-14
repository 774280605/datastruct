#include "MyList.h"

MyList::MyList(){

}

MyList::~MyList(){

}

void MyList::add(int data){
	root = new Node(data, root);
}

void MyList::remove(int data){
	if(root->data==data) {
		auto tmp = root;
		root = root->next;
		delete tmp;
		return;
	}
	
	for (auto tmp=root, next=tmp->next;
		next!=nullptr;
		tmp=tmp->next,next=next->next) {
		if(next->data==data) {
			tmp->next = next->next;
			delete next;
			break;
		}
	}
}
