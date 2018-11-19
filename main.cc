#include <iostream>
#include <queue>
#include <stack>
#include "vector.h"
#include "string.h"

class Node
{
	public:
		int val;
		Node* left;
		Node* right;
		Node(int val, Node* left, Node* right) : val(val), left(left), right(right){}
		Node(int val) : val(val), left(nullptr), right(nullptr) {}
};


vector<string> splitStr(const char* str, char delimiter)
{
	vector<string> split;
	string s(str);
	uint32_t trail = 1;
	for(uint32_t i = 1; i < s.length(); i++)
	{
		if(str[i] == delimiter)
		{
			split.push_back(s.substr(trail, i - trail));
			trail = i + 1;
		}
		else if (str[i+1] == '\0')
		{
			split.push_back(s.substr(trail, i + 1 - trail ));
		}
	}
	return split;
}

// int main() 
// { 
//     Node *root = new Node(1,nullptr,nullptr); 
//     root->left = new Node(2,nullptr,nullptr); 
//     root->right = new Node(3,nullptr,nullptr); 
//     root->left->left = new Node(4,nullptr,nullptr); 
//     root->left->right = new Node(5,nullptr,nullptr); 
//     root->left->right->right = new Node(15,nullptr,nullptr); 
//     root->right->left = new Node(6,nullptr,nullptr); 
//     root->right->right = new Node(7,nullptr,nullptr); 
//     root->right->left->right = new Node(8,nullptr,nullptr); 
  	
//     std::queue<Node*> dfs;
//     dfs.push(root);

//     int depth = -1;
//     while(!dfs.empty())
//     {
//     	int depth_size = dfs.size();
//     	while( depth_size > 0 )
// 		{
// 	    	Node* cur = dfs.front();
// 	    	dfs.pop();
// 	    	std::cout<< cur->val <<" ";
// 	    	if(cur->left != nullptr)
// 	    	{
// 	    		dfs.push(cur->left);
// 	    	}
// 	    	if(cur->right != nullptr)
// 	    	{
// 	    		dfs.push(cur->right);
// 	    	}
// 			depth_size--;
// 		}
// 		std::cout<<std::endl;
// 		depth++;
//     }
//     // std::cout<<depth<<std::endl;
  
//     return 0; 
// } 

int main()
{
	vector<string> spl = splitStr("/user/etc/sbin/ls/", '/');
	std::cout<< spl.size()<<std::endl;
	for(int i = 0; i < spl.size(); i ++)
	{
		std::cout << spl[i].c_str()<< " ";
	}
	std::cout<<std::endl;
}