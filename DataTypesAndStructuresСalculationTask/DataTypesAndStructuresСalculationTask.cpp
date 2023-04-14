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
    bst1.display_tree();
    return 0;
}