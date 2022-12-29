#pragma once
#include <iostream>
#include <string>
using namespace std;

class NodeClass
{
public:
    struct node
    {
        int data;
        node* left;
        node* right;
        int height;
    };

    virtual node* insert(int x, node* t) = 0;
    virtual node* remove(int x, node* t) = 0;
    virtual int findIndex(int x, node* t, int i = 0) = 0;
};

