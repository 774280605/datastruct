#pragma once

class MyList{
public:
	MyList();
	virtual ~MyList();

	void add(int data);



	class Node{
	public:
		int data;
		Node* next{ nullptr };
	};

private:


	Node* root{ nullptr };

};
