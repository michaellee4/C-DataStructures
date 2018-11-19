#include "hashmap.h"
#include <iostream>
int main()
{
	Hashmap<int, int> h;
	for (int i = 0; i < 300; i += 2)
	{
		h[i] = i;
		h.insert(i+1, i+1);
	}
	// h.clear();
	for(int i = 301; i< 400; i ++)
	{
		h.at(i);
	}
	for(int i = 200; i < 300; i++)
	{
		h.erase(i);
	}
	std::cout<<h.getSize()<<std::endl;
}