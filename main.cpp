#include <iostream>
#include <stack>
#include <queue>
#include <cctype>
#include <vector>
#include <string>

bool IsPalindrome(const std::string &palin) {
	
	bool is_palindrome {true};
	std::stack<char> pal_stack {};
	std::queue<char> pal_queue {};
	for(auto &pal_char : palin) {
		if(std::isalpha(pal_char)) {
			pal_stack.push(std::toupper(pal_char));
			pal_queue.push(std::toupper(pal_char));
		}
		//if(pal_stack.pop() == 
	}
	
}

int main() {

	
	return 0;
}
