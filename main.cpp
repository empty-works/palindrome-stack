#include <iostream>
#include <stack>
#include <queue>
#include <cctype>
#include <vector>
#include <string>
#include <iomanip>

bool IsPalindrome(const std::string &palin) {
	
	std::stack<char> pal_stack {};
	std::queue<char> pal_queue {};
	for(auto &pal_char : palin) {
		if(std::isalpha(pal_char)) {
			pal_stack.push(std::toupper(pal_char));
			pal_queue.push(std::toupper(pal_char));
		}
	}
	while(!pal_stack.empty() && !pal_queue.empty()) {
		if(pal_stack.top() != pal_queue.front()) {
			return false;
		}
		else {
			pal_stack.pop();
			pal_queue.pop();
		}
	}
	
	return true;	
}

int main() {
	
	std::vector<std::string> pal_vec {
		"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana", "avid diva", "Amore, Roma", "A Toyota's a toyota", 
		"A Santa at NASA", "C++", "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", 
		"palindrome"
	};

	std::cout << std::boolalpha;
	std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
	for(const auto &s : pal_vec) {
		std::cout << std::setw(8) << std::left << IsPalindrome(s) << s << std::endl;
	}
	
	std::cout << std::endl;
	return 0;
}
