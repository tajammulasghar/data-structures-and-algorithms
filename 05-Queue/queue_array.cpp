#include <iostream>
using namespace std;

int main()
{
    int queue[5];
    int front = 0;
    int rear = 0;
    queue[rear++] = 1;
    queue[rear++] = 2;
    queue[rear++] = 3;
    while (front < rear)
    {
        cout << queue[front++] << " ";
    }
    cout << "This program enqueues values in an array and dequeues them in the same order.";
    return 0;
}
