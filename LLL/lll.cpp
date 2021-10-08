/*
 * Author: Montana Esguerra
 * Date: 10/6/21
 * Filename: lll.cpp
 * Description: Implementation file for the singly linked list
 */

#include "lll.h"
#include <cstdlib>
#include <iostream>

//Default Constructor
lll::lll()
{
    head = NULL;
}

//Destructor TODO
lll::~lll()
{
    //TODO call remove_all()
}


//Prints the entire list starting from the head
int lll::print()
{
    //check if the list is empty first
    if(!head)
        return 1;
    //Print here

    node* current = head;

    while(current)
    {
        std::cout << current->data << " ";
        current = current->next;
    }

    std::cout << std::endl;

    return 0;
}

//Adds an element at the head of the list - a stack implementation of lll
int lll::insert(int in)
{
    //If the list is empty, add at the head
    if(!head)
    {
        head = new node;
        head->data = in;
        head->next = NULL;
        return 0;
    }

    //create a temp node that creates the new node to be inserted
    //have the temp node point to the list and switch head to temp
    node* temp = new node;
    temp->data = in;
    temp->next = head;
    head = temp;

    return 0;
}


