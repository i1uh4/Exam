#ifndef HEADER_H
#define HEADER_H

#include <iostream>

typedef int int_t;

typedef struct Node{
    int_t value;
    struct Node* next;
}NODE;

void add(NODE** pphead, int_t value);
void print(const NODE* phead);

#endif
