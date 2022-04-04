/*************************************************************************
      Hunter Stout    -   4/3/2022
      nodeiterator.h  -   Node iterator header & template file.
*************************************************************************/

#ifndef NODEITERATOR_H
#define NODEITERATOR_H
#include "dnode.h"

template<class T>class dlist; 

template<class T>
class node_iterator{

    public:
        friend class dlist<T>;

        //*** Iterator Helpers ***

        node_iterator(node<T>* c = NULL) {current = c;} //(Current, returns current index number.)
        bool operator == (node_iterator other)const {return current == other.current;} //(==, Overloads to compare iterator pointers.)
        bool operator != (node_iterator other)const {return current != other.current;} //(!=, Overloads to compare iterator pointers.)
        T operator * ()const {return current -> data();} //(*, Overloads to output data at index pointer.)
        node_iterator operator ++ () {current = current -> next(); return *this;} //(++, Overloads to move index pointer.) (PREFIX)
        node_iterator operator -- () {current = current -> previous(); return *this;} //(--, Overloads to move index pointer.) (PREFIX)

    private:
        node<T>* current;
};
#endif