#include "linked_list.hpp"

int main(void)
{
	linked_list<int> list;

	list.push_front(true);
	list.push_back(false);
	list.push_back(false);
	list.push_back(false);
	list.push_back(false);
	list.push_back(false);
	list.push_back(false);
	list.push_back(false);
	list.push_back(false);
	list.display_list();


	for (const auto& i : list)
	{
		std::cout << "dupa \n";
	}
}