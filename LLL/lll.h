/*
Author: Montana Esguerra
Date: 10/6/21
Filename: lll.h
Description: This is the header file for the singly linked list of int data
*/

#ifndef LLL_H
#define LLL_H

struct node{
    int data;
    node* next;
};

class lll
{
private:
    /* data */
    node* head;
public:

    //Default Constructor for lll
    lll(/* args */);

    //Destructor for lll
    ~lll();

    //Prints the lll starting from the head
    int print();

    //Adds an element at the head of the list
    int insert(int in);
};
#endif