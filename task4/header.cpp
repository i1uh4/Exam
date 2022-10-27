#include "header.h"

void add(NODE** pphead, int_t value) {
    while (*pphead) {
        pphead = &((*pphead) -> next);
    }
    NODE* pnew = new NODE;
    pnew -> value = value;
    pnew -> next = *pphead;
    *pphead = pnew;
}

void print(const NODE* phead) {
    while (phead) {
        std::cout << phead -> value << " ";
        phead = phead->next;
    }
    std::cout << "\n";
}
