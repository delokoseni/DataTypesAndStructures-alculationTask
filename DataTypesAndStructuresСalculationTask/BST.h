#pragma once
#include "node.h"
#include<iostream>
#include <fstream>

using namespace std;

class BST {
private:
	node Node;
	node* root;
	void makeEmpty(node* t); //Удаление дерева
	node* insert(int x, node* t); //Добавление узла в бинарное дерево
	node* findMin(node* t); //Поиск в бинарном дереве min
	node* findMax(node* t); //Поиск в бинарном дереве max
	node* remove(int x, node* t); //Удаление вершины из бинарного дерева
	void inorder(node* t); //Симметричный обход бинарного дерева
	node* find(node* t, int x); //Поиск в бинарном дереве
	void print_tree(node* t, int l); //Печать бинарного дерева
	int max_children(int n); //Используется get_lvl_of_max_children() и get_max_children()
public:
	BST(); //Конструктор класса
	~BST(); //Деструктор класса
	void insert(int x); //Добавление узла в бинарное дерево
	void remove(int x); //Удаление вершины из бинарного дерева
	void display(); //Печать бинарного дерева в виде массива отсортированного по возрастанию
	bool search(int x); //Поиск в бинарном дереве
	void display_tree(); //Печать бинарного дерева в виде дерева повернутого на -90 градусов
	bool is_empty(); //Проверка пустоты бинарного дерева
	void output_to_file(ofstream* filename); //Метод вывода в файл
	void input_from_file(ifstream* filename); //Метод чтения из файла
	int get_lvl_of_max_children(); //Определяет уровень узла у которого наибольшее число потомков
	int get_max_children(); //Определяет наибольшее число потомков
	void print_pic();
};

