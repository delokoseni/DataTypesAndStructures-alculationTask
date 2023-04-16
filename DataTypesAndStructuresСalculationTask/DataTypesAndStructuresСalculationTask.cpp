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
    bst1.insert(5);
    bst1.insert(4);
    bst1.insert(11);
    bst1.insert(12);
    bst1.insert(85);
    bst1.insert(64);
    bst1.insert(9);
    bst1.insert(13);
    bst1.insert(12);
    bst1.insert(10);
    bst1.insert(7);
    bst1.display_tree();
    cout << bst.max_count_of_children() << endl;
    cout << bst1.max_count_of_children() << endl;
    //cout << bst.get_lvl_of_MCOC() << endl;
    //cout << bst1.get_lvl_of_MCOC() << endl;
    return 0;
}