//Assignment 8
//Implement the Priority Queue ADT using the NodeListG explained in lesson 7, posted in: https:www.jjay-csci373.org/course-materials/lesson-7 example 2.
//The elements of the Priority Queue can be of any type (you must use OOP with templates).
//Test the Priority Queue operations in the main function for class Point2D (You can find in the textbook the implementation of the Point2D class, and comparators LeftRight and BottomUp), make sure that we can use the Priority Queue for both Comparators as follows:
// ListPriorityQueueG <Pont2D, LeftRight, ListPriorityQueueException>
// ListPriorityQueueG <Pont2D, BottomUp, ListPriorityQueueException>

#include <iostream>
#include "NodeListG.h" // Include NodeListG header file
#include "Point2D.h"
#include "ListPriorityQueueG.h"
#include "ListPriorityQueueException.h"
using namespace std;

int main(){

  NodeListG<int> nl;

  nl.insertFront(2);

  nl.insertFront(3);

  nl.insertFront(4);
  nl.insertBack(200);

  nl.print();


  nl.eraseBack();
  nl.eraseFront();

  nl.print();


ListPriorityQueueG <Point2D, LeftRight, PriorityQueueException> test;
Point2D testing1(1,1);
Point2D testing2(2,2);

test.size();
test.insert(testing2);

test.insert(testing1);
cout<<test.size()<<endl;

cout<<test.size()<<endl;


ListPriorityQueueG <Point2D, BottomUp, PriorityQueueException> test2;
test2.insert(testing1);

test2.print();
test.print();


  return 0;
}
