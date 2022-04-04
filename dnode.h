/*************************************************************************
      Hunter Stout    -   4/3/2022
      dnode.h         -   Node header & template file.
*************************************************************************/

#ifndef DNODE_H 
#define DNODE_H

template<class T>
class node{
    public:

        //*** Constructor ***

        node(T d = T(), node* p = NULL, node* n = NULL) {data_field = d; previousPtr = p; nextPtr = n;} //(Constructor, sets data/head/tail to NULL.)

        //*** Data & Pointer Getters ***

        T data() {return data_field;} //(Data, returns data at current pointer.)
        node* next() {return nextPtr;} //(Next, returns link of next node or NULL.)
        node* previous() {return previousPtr;} //(Previous, returns link of previous node or NULL.)

        //*** Data & Pointer Setters ***

        void set_data(T d) {data_field = d;} //(Set_data, sets data at current pointer.)
        void set_next(node* n) {nextPtr = n;} //(Set_next, sets link of next node or NULL.)
        void set_previous(node* p) {previousPtr = p;} //(Set_previous, sets link of previous node or NULL.)

    private:
        T data_field;
        node* nextPtr;
        node* previousPtr;
};
#endif