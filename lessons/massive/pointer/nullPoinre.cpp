#include <iostream>

void doAnything(int *ptr) {
    if (ptr)
		std::cout << "you passed in\n";
	else
		std::cout << "you passed in a null pointer\n";
 
}

int main() {
    int *ptr(0);
    int ptr1;
    ptr1 =0;

    if (ptr1)
		std::cout << "ptr is pointing to an int value.\n";
	else
		std::cout << "ptr is a null pointer.\n";
    
    int *ptr2 = nullptr;
    if(ptr2) {
        std::cout << "ptr is pointing\n";
    } else {
        std::cout << "ptr is null pointer\n";
    }

    doAnything(nullptr);

    

    return 0;
}