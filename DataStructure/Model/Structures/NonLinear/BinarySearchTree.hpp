//
//  BinarySearchTree.hpp
//  DataStructure
//
//  Created by Martinson, Branton on 3/29/18.
//  Copyright © 2018 Martinson, Branton. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <iostream>
#include "tree.hpp"
using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChildI(BinaryTreeNode<Type> * current);
    
    void removeNode(BinarTreeNode<Type> * removeMe);
    
public:
    
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    void setRoot(BinaryTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type vaalue);
    
    type findMinimum();
    Type findMaximum();
};







template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current == nullptr)
    {
        this->root = insertMe;
    {
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getData())
            {
                current = current->getLeftNode();
            }
            else if(itemToInsert > current->getData())
            {
                current = current->getRightNode();
            }
            else //Remove cerr after verification of understanding
            {
                cerr<< "Item exists already - Exiting insert" << endl;
                delete insertMe;
                return; //Okay because it is returning NOTHING
            }
        }
        
        if (previous->getData() > itemToInsert)
        {
            previous->setLeftNode(insertMe);
        }
        else
        {
            previous->setRightNode(insertMe);
        }
        insertMe->setRootNode(Previous);
    }
}


#endif /* BinarySearchTree_hpp */
