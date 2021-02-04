#pragma once

#include<iterator>
#include<utility>

//Template Key,Value
template<typename TKey, typename TValue>
class AVL
{
private:
	//A struct node in tree to hold value
	struct NODE {

		std::pair<TKey, TValue> Pair;
		int Height;
		NODE* Left;
		NODE* Right;

	};

	NODE* Root;
	int Size;

public:

	AVL() {
		//initial Root and Size;
		Root = nullptr;
		Size = {};
	}

	//TODO: Create a fully qualified constructor
};