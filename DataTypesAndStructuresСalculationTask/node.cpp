#include "node.h"
#include <iostream>
#include <iomanip>
using namespace std;

//Определяет количество потомков
int node::count_of_children() {
	int count = 0;
	if (this->left) {
		count++;
		if (this->left->left)
			count++;
		if (this->left->right)
			count++;
	}
	if (this->right) {
		count++;
		if (this->right->left)
			count++;
		if (this->right->right)
			count++;
	}
	return count;
}

void node::print_pic(char rorl) {
	if (this == NULL) 
		return;
	if (rorl == (char)"r")
		cout << " --- " << this->data;
	if (rorl == (char)"l") {
		cout << "|" << data << endl;
	}
	if (right)
		right->print_pic((char)"r");
	if (left)
		left->print_pic((char)"l");
}