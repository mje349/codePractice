/*
 * Author: Montana Esguerra
 * Date: 10/6/21
 * Filename: main.cpp
 */

#include "lll.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    lll testList;

    cout << "Test" << endl;

    if(testList.print())
        cout << "Empty List" << endl;

    //After insert
    cout << "After insert" << endl;
    testList.insert(1);

    if(testList.print())
        cout << "Empty List" << endl;

    testList.insert(2);
    testList.insert(3);
    testList.insert(4);

    if(testList.print())
        cout << "Empty List" << endl;

    return 0;
}
