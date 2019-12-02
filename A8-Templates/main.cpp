#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <math.h>

//#include "queueType.h"

//int capacity = 10;

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



int main()
{
	cout << "--------------------------------------------------------" << endl;
	cout << "-                Assignment 8 - Template               -" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "-              George Good - CS1C 2:30 M/W             -" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "This program will test Templates using a Queue container." << endl;
	//cout << "This program will be using the STL <queue> class for its queue." << endl;
	cout << "The program will create a character queue, an int queue, and" << endl;
	cout << "a double queue and then test them by adding and removing elements" << endl;
	cout << "printing whenever a change is made." << endl;

	cout << "Program Start!" << endl;
//*
	queueType<char> charQ;
	
	queueType<int> intQ;
		
	queueType<double> doubleQ;
//
	cout << "Objects Declared! Beginning Char Queue..." << endl << endl;
	cout << "Testing isEmpty: " << charQ.isEmpty() << endl;
	cout << "Testing isFull: " << charQ.isFull() << endl;
	charQ.enqueue('a');
	charQ.printQueue();
	charQ.enqueue('b');
	charQ.printQueue();
	charQ.enqueue('c');
	charQ.printQueue();
	charQ.enqueue('d');
	charQ.printQueue();
	charQ.enqueue('e');
	charQ.printQueue();
	charQ.enqueue('f');
	charQ.printQueue();
	charQ.dequeue();
	charQ.printQueue();
	charQ.dequeue();
	charQ.printQueue();
	charQ.dequeue();
	charQ.printQueue();
	charQ.enqueue('g');
	charQ.printQueue();
	charQ.enqueue('h');
	charQ.printQueue();
	
	cout << endl << "Testing front method: " << charQ.getFront() << endl;
	
	charQ.enqueue('i');
	charQ.printQueue();
	charQ.enqueue('j');
	charQ.dequeue();
	charQ.printQueue();
	charQ.dequeue();
	charQ.printQueue();
	charQ.dequeue();
	charQ.printQueue();
	charQ.dequeue();
	charQ.printQueue();
	charQ.dequeue();
	charQ.printQueue();
	charQ.dequeue();
	charQ.printQueue();
	charQ.dequeue();
	charQ.printQueue();
	charQ.dequeue();
	charQ.printQueue();
	
	cout << "Testing isEmpty: " << charQ.isEmpty() << endl;
	cout << "Testing isFull: " << charQ.isFull() << endl;
	
	cout << endl << "Char queue Finished. Beginning Int Queue..." << endl;
	
	intQ.enqueue(1);
	intQ.printQueue();
	intQ.enqueue(2);
	intQ.printQueue();
	intQ.enqueue(3);
	intQ.printQueue();
	intQ.enqueue(4);
	intQ.printQueue();
	intQ.enqueue(5);
	intQ.printQueue();
	intQ.enqueue(6);
	intQ.printQueue();
	intQ.dequeue();
	intQ.printQueue();
	intQ.dequeue();
	intQ.printQueue();
	intQ.enqueue(7);
	intQ.printQueue();
	intQ.enqueue(8);
	intQ.printQueue();
	intQ.enqueue(9);
	intQ.printQueue();	
	intQ.dequeue();
	intQ.printQueue();
	intQ.dequeue();
	intQ.printQueue();
	intQ.dequeue();
	intQ.printQueue();
	intQ.dequeue();
	intQ.printQueue();

	cout << endl << "Int queue Finished. Beginning Double Queue..." << endl;
//*/
	doubleQ.enqueue(1.1);
	doubleQ.printQueue();
	doubleQ.enqueue(2.1);
	doubleQ.printQueue();
	doubleQ.enqueue(3.3);
	doubleQ.printQueue();
	doubleQ.enqueue(4.4);
	doubleQ.printQueue();
	doubleQ.enqueue(5.5);
	doubleQ.printQueue();
	doubleQ.enqueue(6.6);
	doubleQ.printQueue();
	doubleQ.dequeue();
	doubleQ.printQueue();
	doubleQ.enqueue(7.7);
	doubleQ.printQueue();
	doubleQ.enqueue(8.8);
	doubleQ.printQueue();
	doubleQ.dequeue();
	doubleQ.printQueue();
	doubleQ.dequeue();
	doubleQ.printQueue();
	doubleQ.dequeue();
	doubleQ.printQueue();
	doubleQ.dequeue();
	doubleQ.printQueue();
	doubleQ.dequeue();
	doubleQ.printQueue();

	cout << endl << "Finished!" << endl << "Program End" << endl;

	return 0;
}

template <class dataType>
queueType<dataType>::queueType()
{
	array = new dataType[20];
	cap = 20;
	front = 0;
	back = -1;
	size = 0;
}

template <class dataType>
void queueType<dataType>::dequeue()
{

	if (isEmpty())
	{

		cout << "Queue is Empty! Cannot remove an element." << endl;

	} else { 

	cout << "Removing " << array[front] << endl;

	front = (front + 1);
	//size--;

	}

}

template <class dataType>
void queueType<dataType>::enqueue(dataType item)
{

	if (isFull())
	{

		cout << "Queue is Full! Cannot add another element." << endl;
	
	} else {

	cout << "Inserting " << item << endl;

	back = (back + 1);
	array[back] = item;
	size++;

	}

}

template <class dataType>
dataType queueType<dataType>::getFront()
{
	dataType n;
	
	if (isEmpty())
	{

		cout << "Queue is Empty! Cannot return value." << endl;
		return n;

	} else {

	return array[front];
	
	}

}

template <class dataType>
int queueType<dataType>::queueSize()
{

	return size;

}

template <class dataType>
bool queueType<dataType>::isEmpty()
{

	return (queueSize() == 0);

}

template <class dataType>
bool queueType<dataType>::isFull()
{

	return (queueSize() == cap);

}

template <class dataType>
void queueType<dataType>::printQueue()
{
	cout << "Printing Queue... ";
	
	for (int i=front;i<size;i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;	
}