#include "header.h"

int main() {
    NODE* list = nullptr;
//Пример заполнения: заполнит от 0 до 9
    for (int i = 0; i < 10; ++i) {
        add(&list, i);
    }
    print(list);

//Ниже вы можете сами заполнить список
//    int_t inp;
//    std::cout << "Input elements of list or 0 if you want to exit:\n";
//    std::cin >> inp;
//    while (inp != 0) {
//        add(&list, inp);
//        std::cin >> inp;
//    }
//    print(list);
    return 0;
}
