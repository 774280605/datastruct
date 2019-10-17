#include "MyList.h"
#include <cstdio>

MyList::MyList(){

}

MyList::~MyList(){

}

void MyList::add(int data){
	root = new Node(data, root);
	count_++;
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

bool MyList::find(int data){
	for (auto tmp=root;tmp!= nullptr;tmp=tmp->next){
		if(tmp->data==data){
			return true;
		}
	}
	return false;
}

void MyList::append(int data){
	if(!root){
		add(data);
		return;
	}

	Node* tmp = nullptr,*next=nullptr;
	for (tmp = root, next=tmp->next; 
		next != nullptr; 
		tmp = tmp->next,next=tmp->next);
	tmp->next = new  Node(data,nullptr);
}

int MyList::size(){
	return count_;
}

void MyList::forwardData(int data){
	if (root&& root->data == data)
		return;

	if(root->next &&  root->next->data==data){
		auto tmp = root->next->next;
		root->next->next = root;
		root = root->next;
		root->next->next = tmp;
		return;
	}

	Node* current = nullptr, * next = nullptr, * third = nullptr;
	for (current=root,next=current->next,third=next->next;
		third!=nullptr;
		current=current->next,next=current->next,third=next->next){
		if(data==third->data){
			current->next = third;
			next->next = third->next;
			third->next = next;
			break;
		}
	}

}

void MyList::printList(){
	for (auto tmp=root;tmp!=nullptr;tmp=tmp->next){
		printf("%d\n");
	}
}

void MyList::swap(int src, int dest){
	auto src_p = findByData(src);
	auto dest_p = findByData(dest);
	if(src_p== dest_p || src_p==nullptr || dest_p==nullptr)
		return;

	if(src_p!= root && dest_p!=root){
		auto tmp_src = src_p->next->next;
		src_p->next->next = dest_p->next->next;
		dest_p->next->next = tmp_src;

		auto tmp = src_p->next;
		src_p->next = dest_p->next;
		dest_p->next = tmp;
		return;
	}
	if(src_p==root){
		auto tmp = src_p->next;
		src_p->next = dest_p->next->next;
		dest_p->next->next = tmp;

		root = dest_p->next;
		dest_p->next = src_p;
		return;
	}

	if(dest_p==root){
		auto tmp = dest_p->next;
		dest_p->next = src_p->next->next;
		src_p->next->next = tmp;

		root = src_p->next;
		src_p->next = dest_p;
		return;
	}
	

}

MyList::Node* MyList::findByData(int data){
	if (data == root->data)
		return root;

	if (data == root->next->data)
		return root->next;

	Node* tmp = nullptr, * next = nullptr;
	for (tmp=root,next=tmp->next;
		next!=nullptr;
		tmp=tmp->next,next=tmp->next){
		if(next->data==data){
			return tmp;
		}
	}
	return nullptr;
}
