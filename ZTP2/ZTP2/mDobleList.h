#ifndef _MDOBLELIST_
#define _MDOBLELIST_


template <class TYPE>

class DobleList{
public:
	class DobleNode{
	public:
		TYPE data;
		DobleNode *next = nullptr;
		DobleNode *previous = nullptr;
	public:
		DobleNode(const TYPE &ndata) : data(ndata){

		}
	};
	DobleList *first = nullptr;
public:
	bool empty()const{
		return first == nullptr;
	}
	unsigned int Size()const{
		unsigned int i = 0;
		DobleNode  *temp = first;
		while (temp != nullptr){
			temp = temp->next;
			i++;
		}
		return i;
	}
	DobleNode* end()const{
		DobleNode  *temp = first;
		while (temp != nullptr){
			if (temp->next == nullptr){
				return temp;
			}
			temp = temp->next;
		}
	}
	void pushback(const TYPE &data){
		DobleNode* temp = first;
		DobleNode* newnode = new DobleNode(data);
		if (temp == nullptr){
			first = newnode;
		}
		else{
			while (temp->next != nullptr){
				temp = temp->next;
			}
			temp->next = newnode;
			newnode->previous = temp;
		}
	}
	void pushfront(const TYPE &data){
		DobleNode* temp = first;
		DobleNode* newnode = new DobleNode(data);
		if (temp == nullptr){
			first = newnode;
		}
		else{
			newnode->next = temp;
			temp->previous = newnode;
			first = newnode;
		}
	}

	void pop_back(){
		if (first != nullptr){
			if (first->next != nullptr){
				DobleNode* temp = first;
				DobleNode* temp2 = first;
				while (temp->next != nullptr){
					temp = temp->next;
				}
				while (temp2->next != temp){
					temp2 = temp2->next;
				}
				temp2->next = nullptr;
				delete temp;
			}
			else{
				DobleNode* temp = first;
				first = nullptr;
				delete temp;

			}
		}
	}
	bool pop_front(){
		DobleNode* temp = first;
		if (first != nullptr){
			if (first != nullptr && first->next != nullptr){
				first = first->next;
				first->previous = nullptr;
				delete temp;

			}
			else{
				DobleNode* temp = first;
				first = nullptr;
				delete temp;
			}
			return true;
		}
		return false;
	}
	void erase(DobleNode* othernode){
		if (Size() > 1 && othernode != first){
			if (othernode->previous == nullptr){
				first = othernode->next;
				first->previous = nullptr;
			}
			else if (othernode->next == nullptr){
				othernode->previous->next = nullptr;
			}
			else{
				othernode->previous->next = othernode->next;
				othernode->next->previous = othernode->previous;
			}
			delete othernode;
		}
		else{
			first = nullptr;
			delete othernode;
		}
	}
	void insert(DobleNode* newnodo, TYPE Data){
		DobleNode* nnode = new DobleNode(Data);
		if (first != nullptr){
			if (newnodo->previous == nullptr){
				nnode->next = newnodo;
				newnodo->previous = nnode;
				first = nnode;
			}
			else{
				nnode->previous = newnodo->previous;
				newnodo->previous->next = nnode;
				newnodo->previous = nnode;
				nnode->next = newnodo;
			}
		}
		else{
			first = nnode;
		}
	}

	// Exercise 4

	/*unsigned int delNodes(unsigned int start, unsigned int todelete){
		int count = 0;

		if (start > Size() || todelete = 0){
			return 0;
		}
		Doblelist <TYPE>* 





	}*/







};











#endif