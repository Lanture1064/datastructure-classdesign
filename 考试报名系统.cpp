#include <iostream>
#include <string>
using namespace std;

typedef struct Lnode
{
	int i_StudentTestID;
	string s_StudentName;
	bool b_StudentGender;
	int i_StudentAge;
	string s_ApplyIntention;
	struct Lnode *next;
}NODE;

class LinkList
{
private:
	NODE *head;
public:
	LinkList(){head = nullptr;}
	~LinkList();
	bool clearList();
	bool IsEmpty(){return head == nullptr;}
	int ListLength();
	bool Insert();
	bool Erase();
	bool Search(string name);
	
};

linkList::linkList()
{
	cout <<"正在建立一位同学的档案" << endl;
}

bool linklist::clearList()
{

}

linkList::~linkList()
{
}