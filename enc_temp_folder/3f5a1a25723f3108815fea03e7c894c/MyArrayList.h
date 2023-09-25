#pragma once

#include <iostream>

template<typename Type>
class MyArrayList
{
private:
    Type* list;
    int capacity;
    int size;
public:
    MyArrayList(int capacity = 16) : list(new Type[capacity]), capacity(capacity), size(0)
    {
        // Other initialization code (if needed) goes here
    }

    ~MyArrayList()
    {
        delete[] list;
    }

    void insert(Type item, int index)
    {
        if (index > size || index < 0) {
            return;
        }
        if (size == capacity) {
            resize();
        }
        // shift elements
        for (int i = size; i > index; i--) {
            list[i] = list[i - 1];
        }
        // place the item
        list[index] = item;
        size++;
    }

    void resize()
    {
        // Implementation of the resize method goes here
    }

    int getSize() 
    {
        return size;
    }
};