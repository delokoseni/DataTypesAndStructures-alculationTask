#pragma once

class node
{
	friend class BST;	//����� BST �������� ��� �������������
private:
	int data;			//���� ������
	int level = 0;		//���� ������
	node* left;			//��������� �� ������ �������
	node* right;		//��������� �� ������� �������
public:
	int count_of_children(); //���������� ���������� ��������
	void print_pic(char rorl);
};

