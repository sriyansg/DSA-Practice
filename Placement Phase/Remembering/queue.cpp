#include <bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int front,rear,size;
    unsigned capacity;
    int* array;
};

Queue* createQueue(int capacity
{
    Queue* queue=new Queue();
    queue->capacity=10;
    queue->front=queue->size=0;
    queue->rear=capacity-1;
    queue->array=new int[queue->capacity];
}

int isFull(Queue* queue)
{
    return(queue->size==queue->capacity);
}

int isEmpty(Queue* queue)
{
    return(queue->size==0);
}

void enqueue(Queue* queue,int item)
{
    if(isFull(queue))
    {
        return;
    }
    queue->rear=item;
    
}



int main() {
 
  

  return 0;
}