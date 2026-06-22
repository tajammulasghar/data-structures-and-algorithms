#include <iostream>
using namespace std;

int main()
{
    int queue[5];
    int front = 0;
    int rear = 0;
    int size = 5;
    queue[rear] = 1;
    rear = (rear + 1) % size;
    queue[rear] = 2;
    rear = (rear + 1) % size;
    queue[rear] = 3;
    rear = (rear + 1) % size;
    while (front != rear)
    {
        cout << queue[front] << " ";
        front = (front + 1) % size;
    }
    cout << "This program uses a circular array to store queue values and remove them in order.";
    return 0;
}
