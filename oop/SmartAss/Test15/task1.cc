#include <iostream>
#include <memory> // для std::shared_ptr
 
class Item
{
public:
	Item() { std::cout << "Item acquired\n"; }
	~Item() { std::cout << "Item destroyed\n"; }
};
 
int main()
{
	Item *item = new Item;

    /*было
    std::shared_ptr<Item> ptr1(item);
	std::shared_ptr<Item> ptr2(item);
    */  //  стало
	std::shared_ptr<Item> ptr1(item);
	auto ptr2 = std::move(ptr1);
 
	return 0;
}