#include "BST.h"
#include <iostream>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "russian");
    BST bst, bst1;
    ifstream inputfile("input.dat");
    bst.input_from_file(&inputfile);
    bst.display_tree();
    bst1.insert(64);
    bst1.insert(85);
    bst1.insert(11);
    bst1.insert(10);
    bst1.insert(1);
    bst1.insert(5);
    bst1.insert(9);
    bst1.insert(12);
    bst1.display_tree();
    cout << bst.max_count_of_children() << endl;
    cout << bst1.max_count_of_children() << endl;
    cout << bst.count_of_children() << endl;
    cout << bst1.count_of_children() << endl;
    return 0;
}