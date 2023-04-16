#pragma once
#include "node.h"
#include<iostream>
#include <fstream>

using namespace std;

class BST {
private:
	node Node;
	node* root;
	void makeEmpty(node* t); //�������� ������
	node* insert(int x, node* t); //���������� ���� � �������� ������
	node* findMin(node* t); //����� � �������� ������ min
	node* findMax(node* t); //����� � �������� ������ max
	node* remove(int x, node* t); //�������� ������� �� ��������� ������
	void inorder(node* t); //������������ ����� ��������� ������
	node* find(node* t, int x); //����� � �������� ������
	void print_tree(node* t, int l); //������ ��������� ������ � ���� ������ ����������� �� -90 ��������
public:
	BST(); //����������� ������
	~BST(); //���������� ������
	void insert(int x); //���������� ���� � �������� ������
	void remove(int x); //�������� ������� �� ��������� ������
	void display(); //������ ��������� ������ � ���� ������� ���������������� �� �����������
	bool search(int x); //����� � �������� ������
	void display_tree(); //������ ��������� ������ � ���� ������ ����������� �� -90 ��������
	bool is_empty(); //�������� ������� ��������� ������
	void output_to_file(ofstream* filename); //����� ������ � ����
	void input_from_file(ifstream* filename); //����� ������ �� �����
	int max_count_of_children(); //���������� ������� �� ���� � �������� ���������� ����� ��������
	int get_lvl_of_MCOC(int max_count_of_children, node* t);
	int get_lvl_of_MCOC();
};

