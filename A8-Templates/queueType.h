#include <iostream>
#include <cstdlib>

#include <cstring>
using namespace std;


template <class dataType>
class queueType
{
public:
	queueType(); 	

//	~queue();   				

	void enqueue(dataType);
	void dequeue();
	dataType getFront();
	bool isEmpty();
	bool isFull();
	int queueSize();
	void printQueue();

private:
	dataType *array;	
	int cap;	
	int front;	
	int back;		
	int size;		

};


