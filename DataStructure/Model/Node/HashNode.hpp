//
//  HashNode.hpp
//  DataStructure
//
//  Created by Martinson, Branton on 5/3/18.
//  Copyright © 2018 Martinson, Branton. All rights reserved.
//

#ifndef HashNode_hpp
#define HashNode_hpp

#include "Node.hpp"
template <class Type>
class HashNode : public Node<Type>
{
private:
    long key;
public:
    HashNode();
    HashNode(Type data);
    
    long getKey() const;
    
};

template <class Type>
HashNode<Type> :: HashNode()
{
    this->key = 0;
}

template <class Type>
HashNode<Type> :: HashNode(Type data) : Node<Type>(data)
{
    this->key = (long) &data;
}

template <class Type>
long HashNode<Type> :: getKey() const
{
    return this->key;
}

#endif /* HashNode_hpp */
