#pragma once

class node
{
	friend class BST;	// ласс BST объ€влен как дружественный
	int data;			//ѕоле данных
	node* left;			//”казатель на левого потомка
	node* right;		//”казатель на правого потомка
};

