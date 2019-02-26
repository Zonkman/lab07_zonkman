//ok it looks like we need a utility junk because I am not copying a "for" loop 10 times
#include "linkedList.h"
#include "linkedListFuncs.h"
#include <cassert>


struct IntAndNode {

  int intVal;
  Node* nodeVal;

  IntAndNode(int intToAdd, Node* nodePtrToAdd){
    intVal = intToAdd;
    nodeVal = nodePtrToAdd;
  }

};

enum class CompOperType { lessThan, greaterThan, sum}; //this is important for the listComparison cases


IntAndNode* listComparison(LinkedList* list , CompOperType opType, bool headCanBeNull = false);
 
