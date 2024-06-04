#include <iostream>

const int32_t maxSize = 100001;
int* heap = new int[maxSize] {};
int heapSize = 0;

void insert(int item)
{
    heap[++heapSize] = item;

    int child = heapSize;
    int parent = child / 2;
    
    while ((child > 1) && (heap[parent] < heap[child]))
    {
        int temp = heap[parent];
        heap[parent] = heap[child];
        heap[child] = temp;

        child = parent;
        parent = child / 2;
    }
}

int deleteHeap()
{
    int result = heap[1];
    int temp = heap[1];
    heap[1] = heap[heapSize];
    heap[heapSize] = temp;

    heapSize--;
    if (heapSize < 0)
    {
        result = 0;
        heapSize = 0;
    }

    int parent = 1;
    int child = parent * 2;
    if ((child + 1) <= heapSize)
    {
        child = heap[child] > heap[child + 1] ? child : child + 1;
    }

    while ((child <= heapSize) && (heap[parent] < heap[child]))
    {
        int swapTemp = heap[parent];
        heap[parent] = heap[child];
        heap[child] = swapTemp;

        parent = child;
        child = child * 2;
        if ((child + 1) <= heapSize)
        {
            child = heap[child] > heap[child + 1] ? child : child + 1;
        }
    }

    return result;
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int count = 0;
    std::cin >> count;

    for (int i = 0; i < count; ++i)
    {
        int number = 0;
        std::cin >> number;

        if (number == 0)
        {
           std::cout << deleteHeap() << "\n";
        }
        else
        {
            insert(number);
        }
    }
    
    delete[] heap;
    return 0;
}
