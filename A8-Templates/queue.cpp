#include "queueType.h"

template <class dataType>
queueType<dataType>::queueType()
{
	array = new dataType[20];
	cap = 10;
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
	if (isEmpty())
	{

		cout << "Queue is Empty! Cannot return value." << endl;

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
	
	for (int i=0;i<size;i++)
	{
		
	}
		
}