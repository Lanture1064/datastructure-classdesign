#include <iostream>
#include <string>
using namespace std;

struct sData
{
	string studentName;
	string studentAge;
	string studentGender;
	string studentID;
	string applyIntention;
};

struct chainNode
{
	sData studentData; 
	chainNode *next = nullptr;

	chainNode(){}
	chainNode(sData Input)
	    {this->studentData = Input}
	chainNode(sData Input,chainNode *next)
	    {this->studentData = Input; this->next = next}
};

class chain
{
public:
	chain(int initialCapacity = 10);
	chain(const chain&);
	~chain();

	bool empty()const{return listSize == 0;}
	int size() const {return listSize;}

}
