/*************************************************************************
      Hunter Stout    -   4/3/2022
      dlist.h         -   Linked list header file.
*************************************************************************/

#ifndef DLIST_H
#define DLIST_H
#include "dnode.h"
#include "nodeiterator.h"

template<class T>
class dlist{
    public: 
        typedef node_iterator<T> iterator;

        //*** Constructor & Big 3 ***

        dlist() {head = tail = NULL;} //(Constructor, sets pointers to NULL.)
        ~dlist() {erase();} //(Deconstructor, frees memory, calls erase.)
        dlist (const dlist& other); //(Copy constructor, copies list.)
        dlist& operator = (const dlist& other); //(Assignment constructor, frees memory then copies list.)

        //*** Helpers ***

        void front_insert(const T& data); //(Front insert, inserts node at the front of list.)
        void rear_insert(const T& data); //(Rear insert, inserts node at the end of list.)

        void front_remove(); //(Front remove, removes node at the front of list.)
        void rear_remove(); //(Rear remove, removes node at the end of list.)

        void show()const; //(Show, displays entire list.)
        void reverse_show()const; //(Reverse show, displays entire list in reverse.)

        int size(); //(Size, returns size of list via integer.)

        //*** Iterator Helpers ***

        iterator begin()const {return iterator(head);} //(Begin, returns the start (head) for iterator class.)
        iterator end()const {return iterator(NULL);} //(End, returns the end (NULL) for iterator class.)

        iterator r_begin()const {return iterator(tail);} //(R_begin, returns the reverse start (tail) for iterator class.)
        iterator r_end()const {return iterator(NULL);} //(R_end, returns the reverse end (NULL) for iterator class.)

        void insert_before(iterator index, const T& data); //(Insert before, creates node & inserts data before the index number.)
        void insert_after(iterator index, const T& data); //(Insert after, creates node & inserts data after the index number.)
        void remove(iterator index); //(Remove, removes node at the index number.)

    private:
        node<T>* head;
        node<T>* tail;

        void erase(); //(Deconstructor, Used to simplify code for the big 3).
};
#include "dlist.template"
#endif