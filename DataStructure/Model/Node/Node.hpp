//
//  Node.hpp
//  DataStructure
//
//  Created by Martinson, Branton on 2/8/18.
//  Copyright © 2018 Martinson, Branton. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

template <class Type>
Node
{
  //This section is available to ALL subclasses of Node
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};

template <class Type>
Node<Type> :: Node()
{
    //Needed for default constructor complilation
    //Since when we createe a structure it does not have an item to store yet
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}

template <class Type>
void Node<type> :: setData(Type data)
{
    this->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}
#endif /* Node_hpp */
