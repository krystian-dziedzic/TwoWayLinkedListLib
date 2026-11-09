#include "linked_list.hpp"
#include <vector>

int main(void)
{

	linked_list<const char*> list;
	

	list.push_back("a1");
	list.push_back("a2");
	list.push_back("a3");
	list.push_back("a4");
	list.push_back("a5");
	list.push_back("a6");
	list.push_back("a7");
	list.push_back("a8");
	list.push_back("a9");

	list.display_list();
	std::cout << list[5];
}