#pragma once

class node
{
	friend class BST;	//Класс BST объявлен как дружественный
private:
	int data;			//Поле данных
	int level = 0;		//Поле уровня
	node* left;			//Указатель на левого потомка
	node* right;		//Указатель на правого потомка
public:
	int count_of_children(); //Определяет количество потомков
	void print_pic(char rorl);
};

