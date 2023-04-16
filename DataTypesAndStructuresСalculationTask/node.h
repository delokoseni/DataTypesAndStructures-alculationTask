#pragma once

class node
{
	friend class BST;	// ласс BST объ€влен как дружественный
private:
	int data;			//ѕоле данных
	node* left;			//”казатель на левого потомка
	node* right;		//”казатель на правого потомка
	int count_of_children() {
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
};

