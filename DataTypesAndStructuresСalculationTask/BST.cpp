#include "BST.h"

//�������� ������
void BST::makeEmpty(node* t) {
	if (t->left)
		makeEmpty(t->left);
	if (t->right)
		makeEmpty(t->right);
	delete t;
}

//���������� ���� � �������� ������
node* BST::insert(int x, node* t)
{
	if (t == NULL)
	{
		t = new node;
		t->data = x;
		t->left = t->right = NULL;
	}
	else if (x < t->data)
		t->left = insert(x, t->left);
	else if (x > t->data)
		t->right = insert(x, t->right);
	return t;
}

//����� � �������� ������ min
node* BST::findMin(node* t)
{
	if (t == NULL)
		return NULL;
	else if (t->left == NULL)
		return t;
	else
		return findMin(t->left);
}

//����� � �������� ������ max
node* BST::findMax(node* t) {
	if (t == NULL)
		return NULL;
	else if (t->right == NULL)
		return t;
	else
		return findMax(t->right);
}

//�������� ������� �� ��������� ������
node* BST::remove(int x, node* t) {
	node* temp;
	if (t == NULL)
		return NULL;
	else if (x < t->data)
		t->left = remove(x, t->left);
	else if (x > t->data)
		t->right = remove(x, t->right);
	else if (t->left && t->right)
	{
		temp = findMin(t->right);
		t->data = temp->data;
		t->right = remove(t->data, t->right);
	}
	else
	{
		temp = t;
		if (t->left == NULL)
			t = t->right;
		else if (t->right == NULL)
			t = t->left;
		delete temp;
	}
	return t;
}

//������������ ����� ��������� ������
void BST::inorder(node* t) {
	if (t == NULL)
		return;
	inorder(t->left);
	cout << t->data << " ";
	inorder(t->right);
}

//����� � �������� ������
node* BST::find(node* t, int x) {
	if (t == NULL)
		return NULL;
	else if (x < t->data)
		return find(t->left, x);
	else if (x > t->data)
		return find(t->right, x);
	else
		return t;
}

//������ ��������� ������ � ���� ������ ����������� �� -90 ��������
void BST::print_tree(node* t, int l) {
	if (t == NULL)
		return;
	print_tree(t->right, l + 1);
	for (int i = 0; i < l; ++i)
		cout << "\t";
	cout << t->data << endl;
	print_tree(t->left, l + 1);
}

//����������� ������
BST::BST() {
	Node = node();
	root = NULL;
}

//���������� ������
BST::~BST() {
	Node.~node();
	makeEmpty(root);
	root = nullptr;
}

//���������� ���� � �������� ������.
void BST::insert(int x) {
	root = insert(x, root);
}

//�������� ������� �� ��������� ������
void BST::remove(int x) {
	root = remove(x, root);
}
//������ ��������� ������ � ���� ������� ���������������� �� �����������
void BST::display() {
	inorder(root);
	cout << endl;
}

//����� � �������� ������
bool BST::search(int x) {
	if (find(root, x))
		return true;
	else
		return false;
}

//������ ��������� ������ � ���� ������ ����������� �� -90 ��������
void BST::display_tree() {
	cout << endl << endl;
	print_tree(root, 0);
	cout << endl << endl;
}

//�������� ������� ��������� ������
bool BST::is_empty() {
	return !root;
}

//����� ������ � ����
void BST::output_to_file(ofstream* filename) {

}

//����� ������ �� �����
void BST::input_from_file(ifstream* filename) {
	int buffer;
	while (!(*filename).eof()) {
		*filename >> buffer;
		this->insert(buffer);
	}
}

static int lvl = 0;
//���������� ������������ ����� �������� ������ ���� �� ���� ��������� �������
int BST::max_count_of_children() {
	int count, count1;
	if (root == NULL)
		return 0;
	count = root->count_of_children();
	count1 = count;
	if (root->left) {
		count1 = root->left->count_of_children();
		if (count1 > count)
			count  = count1;
	}
	if (root->right) {
		count1 = root->right->count_of_children();
		if (count1 > count)
			count = count1;
	}
	return count;
}

int BST::get_lvl_of_MCOC() {
	int level = 0;
	int max_count_of_children = this->max_count_of_children();
	level = this->get_lvl_of_MCOC(max_count_of_children, root);
	return level;
}

int BST::get_lvl_of_MCOC(int max_count_of_children, node* t) {
	static int level = 0, count = 0;
	if (t == NULL)
		return 0;
	count = t->count_of_children();
	level++;
	if(count == max_count_of_children)
		return level;
	//level--;
	this->get_lvl_of_MCOC(max_count_of_children, t->left);
	this->get_lvl_of_MCOC(max_count_of_children, t->right);
}