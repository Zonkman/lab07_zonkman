
#include "utility.h"


IntAndNode* listComparison(LinkedList* list , CompOperType opType, bool headCanBeNull /*false by default*/) {
  
  //the assertions are here now yes
  assert(list!=NULL);
  //keep this code dry
  Node* lHead = list->head;
  
  if (!headCanBeNull){
  assert(lHead != NULL);
  }

  Node* bestNodePtr = lHead;
  int val = lHead->data;
  //wow! a new kind of "for" loop. i swear i'm so used to ints as iterators.
  //anyway, this boi starts right past the head, and keeps iterating until it finds NULL
  for (Node* element = lHead->next; element != NULL; element = element->next)
  {
    int compVal = element->data;
    switch(opType) //use appropriate one of three operations to modify the variables.
    {
      case(CompOperType::lessThan):
        if (compVal < val){
	  bestNodePtr = element;
	  val = compVal;
	}
	break;
     
      case(CompOperType::greaterThan):
	if (compVal > val){
	  bestNodePtr = element;
	  val = compVal;
	}
        break;

      case(CompOperType::sum): //it doesn't matter really what bestNodePtr is, so we never change it
	val += compVal;
	break;
      
      default:
	break;
    }
  }
  
  IntAndNode* result;
  result = new IntAndNode(val, bestNodePtr);
  return result;


}
