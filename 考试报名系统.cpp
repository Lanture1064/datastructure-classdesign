#include <iostream>
#include <string>
using namespace std;

template <class T>
struct chainNode
{
	//Data member
	T data;
	chainNode<T> *next;
	
	//Constuct Function
	chainNode(){}
	chainNode(const T &data)
	    {this->data = data}
	chainNode(const T &data, chainNode<T> *next)
	    {this->data = data; this->next = next;}
};

class studentData