#pragma once

class node
{
	friend class BST;	//����� BST �������� ��� �������������
	int data;			//���� ������
	node* left;			//��������� �� ������ �������
	node* right;		//��������� �� ������� �������
};

