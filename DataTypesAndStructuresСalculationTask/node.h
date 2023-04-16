#pragma once

class node
{
	friend class BST;	//Класс BST объявлен как дружественный
private:
	int data;			//Поле данных
	int level = 0;			//Поле уровня
	node* left;			//Указатель на левого потомка
	node* right;		//Указатель на правого потомка
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

