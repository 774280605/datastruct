#pragma once

class MyList{
public:
	MyList();
	virtual ~MyList();

	void add(int data);
	void remove(int data);

	bool find(int data);

	void append(int data);

	class Node{
	public:
		Node(int data, Node* next){
			this->data = data;
			this->next = next;
		}

		int data;
		Node* next{ nullptr };
	};

private:


	Node* root{ nullptr };

};
