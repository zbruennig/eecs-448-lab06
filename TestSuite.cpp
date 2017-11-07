/**
* @file TestSuite.cpp
* @author Zachary Bruennig
* @date 11/06/2017
* @brief Implementation of the Test Suite
*/

using namespace std;

#include "TestSuite.h"
#include <stdlib.h>
#include <vector>

void TestSuite::runTests(){

  //Some fancy formatted strings with color to make reading output easier
  string pass = "\033[1;32mPASSED\033[0m\n";
  string fail = "\033[1;31mFAILED\033[0m\n";

  cout << "\033[1;37m" << "                                                                     Tests" << "\033[0m\n\n";

  cout << "isEmpty should return true on an empty list:                         ";
  cout << (isEmpty_ShouldReturnTrueOnAnEmptyList() ? pass : fail);

  cout << "isEmpty should return false on a non-empty list:                     ";
  cout << (isEmpty_ShouldReturnFalseOnANonEmptyList() ? pass : fail);

  cout << "size should return zero on an empty list:                            ";
  cout << (size_ShouldReturnZeroOnAnEmptyList() ? pass : fail);

  cout << "size should return one on a list with one element:                   ";
  cout << (size_ShouldReturnOneOnAListWithOneElement() ? pass : fail);

  cout << "size should return five on a list with five elements:                ";
  cout << (size_ShouldReturnFiveOnAListWithFiveElements() ? pass : fail);

  cout << "search should return false on an empty list:                         ";
  cout << (search_ShouldReturnFalseOnAnEmptyList() ? pass : fail);

  cout << "search should return false on a list that doesn't contain the value: ";
  cout << (search_ShouldReturnFalseOnANonEmptyListThatDoesntContainValue() ? pass : fail);

  cout << "search should return true on a list containing the value:            ";
  cout << (search_ShouldReturnTrueOnAListContainingTheValue() ? pass : fail);

  cout << "search should return true on a list containing the value many times: ";
  cout << (search_ShouldReturnTrueOnAListContainingTheValueManyTimes() ? pass : fail);

  cout << "search should return true when the value is at the front:            ";
  cout << (search_ShouldReturnTrueWhenTheValueIsAtTheFront() ? pass : fail);

  cout << "search should return true when the value is at the back:             ";
  cout << (search_ShouldReturnTrueWhenTheValueIsAtTheBack() ? pass : fail);

  cout << "addBack should increment size after it is called:                    ";
  cout << (addBack_ShouldIncrementSizeAfterItIsCalled() ? pass : fail);

  cout << "addBack should correctly add the int to the back of the list:        ";
  cout << (addBack_ShouldCorrectlyAddTheIntToTheBackOfTheList() ? pass : fail);

  cout << "addBack should not change any other values:                          ";
  cout << (addBack_ShouldNotChangeAnyOtherValues() ? pass : fail);

  cout << "addFront should increment size after it is called:                   ";
  cout << (addFront_ShouldIncrementSizeAfterItIsCalled() ? pass : fail);

  cout << "addFront should correctly add the int to the back of the list:       ";
  cout << (addFront_ShouldCorrectlyAddTheIntToTheFrontOfTheList() ? pass : fail);

  cout << "addFront should  not change any other values:                        ";
  cout << (addFront_ShouldNotChangeAnyOtherValues() ? pass : fail);

  cout << "removeFront should return false on an empty list :                   ";
  cout << (removeFront_shouldReturnFalseOnAnEmptyList() ? pass : fail);

  cout << "removeFront should return true on a non-empty list:                  ";
  cout << (removeFront_shouldReturnTrueOnANonEmptyList() ? pass : fail);

  cout << "removeFront should decrement size after it is called:                ";
  cout << (removeFront_ShouldDecrementSizeAfterItIsCalled() ? pass : fail);

  cout << "removeFront should remove the correct int:                           ";
  cout << (removeFront_ShouldRemoveTheCorrectInt() ? pass : fail);

  cout << "removeFront should not change any other values:                      ";
  cout << (removeFront_ShouldNotChangeAnyOtherValues() ? pass : fail);

  cout << "removeBack should return false on an empty list:                     ";
  cout << (removeBack_shouldReturnFalseOnAnEmptyList() ? pass : fail);

  cout << "removeBack should return true on a non-empty list:                   ";
  cout << (removeBack_ShouldReturnTrueOnANonEmptyList() ? pass : fail);

  cout << "removeBack should decrement size after it is called:                 ";
  cout << (removeBack_ShouldDecrementSizeAfterItIsCalled() ? pass : fail);

  cout << "removeBack should remove the correct int:                            ";
  cout << (removeBack_ShouldRemoveTheCorrectInt() ? pass : fail);

  cout << "removeBack should not change any other values:                       ";
  cout << (removeBack_ShouldNotChangeAnyOtherValues() ? pass : fail);
}

bool TestSuite::isEmpty_ShouldReturnTrueOnAnEmptyList(){
  LinkedListOfInts testList;

  return testList.isEmpty();
}

bool TestSuite::isEmpty_ShouldReturnFalseOnANonEmptyList(){
  LinkedListOfInts testList;
  testList.addBack(4);

  return !testList.isEmpty();
}

bool TestSuite::size_ShouldReturnZeroOnAnEmptyList(){
  LinkedListOfInts testList;

  return testList.size() == 0;
}

bool TestSuite::size_ShouldReturnOneOnAListWithOneElement(){
  LinkedListOfInts testList;
  testList.addBack(3);

  return testList.size() == 1;
}

bool TestSuite::size_ShouldReturnFiveOnAListWithFiveElements(){
  LinkedListOfInts testList;

  testList.addBack(1);
  testList.addBack(2);
  testList.addBack(3);
  testList.addBack(2);
  testList.addBack(1);

  return testList.size() == 5;
}

bool TestSuite::search_ShouldReturnFalseOnAnEmptyList(){
  LinkedListOfInts testList;

  return !testList.search(4);
}

bool TestSuite::search_ShouldReturnFalseOnANonEmptyListThatDoesntContainValue(){
  LinkedListOfInts testList;

  testList.addBack(4);
  testList.addBack(10);
  testList.addBack(11);

  return !testList.search(500);
}

bool TestSuite::search_ShouldReturnTrueOnAListContainingTheValue(){
  LinkedListOfInts testList;

  testList.addBack(0);
  testList.addBack(-50);

  return testList.search(-50);

  return true;
}

bool TestSuite::search_ShouldReturnTrueOnAListContainingTheValueManyTimes(){
  LinkedListOfInts testList;

  testList.addBack(2);
  testList.addBack(2);
  testList.addBack(2);
  testList.addBack(2);
  testList.addBack(2);

  return testList.search(2);
}

bool TestSuite::search_ShouldReturnTrueWhenTheValueIsAtTheFront(){
  LinkedListOfInts testList;

  testList.addBack(6);
  testList.addBack(5);
  testList.addBack(4);
  testList.addBack(3);
  testList.addBack(2);
  testList.addBack(1);

  return testList.search(1);
}

bool TestSuite::search_ShouldReturnTrueWhenTheValueIsAtTheBack(){
  LinkedListOfInts testList;

  testList.addBack(6);
  testList.addBack(5);
  testList.addBack(4);
  testList.addBack(3);
  testList.addBack(2);
  testList.addBack(1);

  return testList.search(6);
}

bool TestSuite::addBack_ShouldIncrementSizeAfterItIsCalled(){
  LinkedListOfInts testList;

  int size = testList.size();
  testList.addBack(30);


  return testList.size() == size+1;
}

bool TestSuite::addBack_ShouldCorrectlyAddTheIntToTheBackOfTheList(){
  LinkedListOfInts testList;

  testList.addBack(1);
  testList.addBack(2);
  testList.addBack(3);
  testList.addBack(4);
  vector<int> testVector = testList.toVector();

  return testVector.back() == 4;
}

bool TestSuite::addBack_ShouldNotChangeAnyOtherValues(){
  LinkedListOfInts testList;

  testList.addBack(1);
  testList.addBack(2);
  testList.addBack(3);
  vector<int> before = testList.toVector();
  testList.addBack(4);
  vector<int> after = testList.toVector();

  after.pop_back();

  return before == after;
}

bool TestSuite::addFront_ShouldIncrementSizeAfterItIsCalled(){
  LinkedListOfInts testList;
  int size = testList.size();
  testList.addFront(25);

  return testList.size() == size+1;
}

bool TestSuite::addFront_ShouldCorrectlyAddTheIntToTheFrontOfTheList(){
  LinkedListOfInts testList;

  testList.addFront(11);
  testList.addFront(12);
  testList.addFront(13);
  testList.addFront(14);
  vector<int> testVector = testList.toVector();

  return testVector.front() == 14;
}

bool TestSuite::addFront_ShouldNotChangeAnyOtherValues(){
  LinkedListOfInts testList;

  testList.addFront(31);
  testList.addFront(32);
  testList.addFront(33);
  vector<int> before = testList.toVector();
  testList.addFront(34);
  vector<int> after = testList.toVector();

  return before.at(0)==after.at(1) && before.at(1) == after.at(2) &&
  before.at(2) == after.at(3);
}

bool TestSuite::removeFront_shouldReturnFalseOnAnEmptyList(){
  LinkedListOfInts testList;

  return !testList.removeFront();
}

bool TestSuite::removeFront_shouldReturnTrueOnANonEmptyList(){
  LinkedListOfInts testList;

  testList.addFront(4444);
  testList.addFront(3333);
  testList.addFront(2221);

  return testList.removeFront();
}

bool TestSuite::removeFront_ShouldDecrementSizeAfterItIsCalled(){
  LinkedListOfInts testList;

  testList.addFront(2);
  testList.addFront(-2);
  testList.addFront(-222);
  int prevSize = testList.size();
  testList.removeFront();
  return testList.size() == prevSize-1;
}

bool TestSuite::removeFront_ShouldRemoveTheCorrectInt(){
  LinkedListOfInts testList;

  testList.addFront(1);
  testList.addFront(2);
  testList.addFront(3);
  testList.addFront(4);
  testList.removeFront();

  return testList.search(4);
}

bool TestSuite::removeFront_ShouldNotChangeAnyOtherValues(){
  LinkedListOfInts testList;

  testList.addFront(101);
  testList.addFront(102);
  testList.addFront(103);
  testList.addFront(104);
  testList.removeFront();
  vector<int> testVector = testList.toVector();
  return testVector.at(0)==103 && testVector.at(1)==102 && testVector.at(2)==101;
}

bool TestSuite::removeBack_shouldReturnFalseOnAnEmptyList(){
  LinkedListOfInts testList;

  return !testList.removeBack();
}

bool TestSuite::removeBack_ShouldReturnTrueOnANonEmptyList(){
  LinkedListOfInts testList;

  testList.addFront(5);
  testList.addFront(11);
  testList.addFront(150);
  testList.addFront(1337);

  return testList.removeBack();
}

bool TestSuite::removeBack_ShouldDecrementSizeAfterItIsCalled(){
  LinkedListOfInts testList;

  testList.addFront(-50);
  testList.addFront(-500);
  testList.addFront(500);
  int prevSize = testList.size();
  testList.removeBack();

  return testList.size() == prevSize-1;
}

bool TestSuite::removeBack_ShouldRemoveTheCorrectInt(){
  LinkedListOfInts testList;

  testList.addFront(192);
  testList.addFront(168);
  testList.addFront(1);
  testList.addFront(1);
  testList.removeBack();

  return testList.search(192);
}

bool TestSuite::removeBack_ShouldNotChangeAnyOtherValues(){
  LinkedListOfInts testList;

  testList.addFront(101);
  testList.addFront(102);
  testList.addFront(103);
  testList.addFront(104);
  testList.removeBack();
  vector<int> testVector = testList.toVector();
  return testVector.at(0)==104 && testVector.at(1)==103 && testVector.at(2)==102;
}
