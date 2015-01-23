#include <stdlib.h>
#include "linkedList.h"

/*
 * Inserts the new key at the beginning of the list.
 * Returns the updated pointer to the first element of the list.
 */
LLElement * LLInsertAtBeginning(LLElement * first, int key) {
    LLElement * begin; 
    begin = (LLElement *)malloc(sizeof(LLElement));
    if(begin != NULL) {
        begin->next = first;
        begin->key = key;
        first = begin;
    }
    return first;
}

/*
 * Inserts the new key at the end of the list.
 * Returns the updated pointer to the first element of the list.
 */
LLElement * LLInsertAtEnd(LLElement * first, int key) {
    // TODO To be implemented
   LLElement *new;
   LLElement **temp;
   new = (LLElement*)malloc(sizeof(LLElement));
   if(new != NULL){
       temp = &first;
       while(*temp != NULL)
       {
           temp = &((*temp)->next);
       }
       new->next = NULL;
       new->key = key;
       *temp = new;
   }
    

    return first;
}

/*
 * Inserts the new key at the specified positon of the list.
 * Position is zero-based, meaning that the first element is at position 0,
 * analogous to what happens in arrays.
 * 
 * Returns the updated pointer to the first element of the list.
 */
LLElement * LLInsertAtPosition(LLElement * first, int key, int position) {
    LLElement *new;
    LLElement **temp;
    new = (LLElement *)malloc(sizeof(LLElement));
    int i;
    if(new != NULL){
        temp = &first;
        for(i=0;i<position;i++){
            temp = &((*temp)->next);
        }
        new->next=*temp;
        new->key=key;
        
            
    }
  
    // TODO To be implemented
    return first;
    
}

/*
 * Returns the size of the list.
 */
int LLSize(LLElement * first) {
   int dim = 0;
    for(dim = 0; first != NULL; dim++){
        first = first->next; 
    }
        
    return dim;
}   

/*
 * Returns the key at the specified position.
 */ 
int LLGetKey(LLElement * first, int position) {
    // TODO To be implemented
    int i;
    for(i=0;i<position;i++)
    {
        first=first->next;
    }
    return first->key;
}

/*
 * Returns the position of the first element, starting from startPosition, that
 * has the specified key.
 * Returns -1 if not found. 
 */ 
int LLFindKey(LLElement * first, int key, int startPosition) {
    // TODO To be implemented
    int r = -1;
    int i;
    for(i=0;i<startPosition;i++)
    {
        first=first->next;
    }
    while(first != NULL && r == -1)
    {
        if(first->key=key){
            r = i;
        }
        first=first->next;
        i++;
    }
    
    return r;
}

/*
 * Remove the first element of the list.
 * Returns the updated pointer to the first element of the list.
 */
LLElement * LLRemoveFirst(LLElement * first) {
    LLElement *delete;
    if(first!=NULL){
        delete = first;
        first = first->next;
        free(delete);
     }
     return first;
}

/*
 * Remove the last element of the list.
 * Returns the updated pointer to the first element of the list.
 */
LLElement * LLRemoveLast(LLElement * first) {
    // TODO To be implemented
    LLElement **delete;
    if(first!=NULL){
        delete = &first;
        while((*delete)->next != NULL){
            delete= &((*delete)->next);
        }
        free(*delete);
        *delete=NULL;
    }
return first;
}

/*
 * Remove the element at the specified position.
 * Position is zero-based, meaning that the first element is at position 0,
 * analogous to what happens in arrays.
 * 
 * Returns the updated pointer to the first element of the list.
 */
LLElement * LLRemoveAtPosition(LLElement * first, int position) {

    
    return NULL;
}

/* Empties the list */
LLElement * LLEmptyList(LLElement *first) {

    return NULL;
}




