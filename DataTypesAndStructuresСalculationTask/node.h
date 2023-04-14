#pragma once

class node
{
	friend class BST;
	int data;		//Поле данных
	node* left;		//Указатель на левого потомка
	node* right;	//Указатель на правого потомка
};

