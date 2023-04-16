#pragma once

class node
{
	friend class BST;	//����� BST �������� ��� �������������
private:
	int data;			//���� ������
	node* left;			//��������� �� ������ �������
	node* right;		//��������� �� ������� �������
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

