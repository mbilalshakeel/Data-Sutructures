#include"queue.h"
CircularQueue::CircularQueue(int size)
{
	this->size = size + 1;
	data = new int[size];
	r_ind = f_ind =n_elements= 0;
}
CircularQueue::~CircularQueue()
{
	//delete [] data;
}
CircularQueue::CircularQueue(const CircularQueue& q)
{
	data = NULL;
	operator=(q);
}
void CircularQueue::push(int val)
{
	if (full())
		throw("CircularQueue Overflow");
	r_ind = (r_ind + 1) % size;
	data[r_ind] = val;
}