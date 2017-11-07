/**
* @file TestSuite.h
* @author Zachary Bruennig
* @date 11/06/2017
* @brief Test suite for LinkedListOfInts
*/

#ifndef TEST_SUITE_H
#define TEST_SUITE_H

#include <iostream>
#include "LinkedListOfInts.h"

class TestSuite
{
  public:

  /** @pre None.
  *   @post The results of all the tests in this file will be output to console
  */
  void runTests();

  private:

  bool isEmpty_ShouldReturnTrueOnAnEmptyList();
  bool isEmpty_ShouldReturnFalseOnANonEmptyList();

  bool size_ShouldReturnZeroOnAnEmptyList();
  bool size_ShouldReturnOneOnAListWithOneElement();
  bool size_ShouldReturnFiveOnAListWithFiveElements();

  bool search_ShouldReturnFalseOnAnEmptyList();
  bool search_ShouldReturnFalseOnANonEmptyListThatDoesntContainValue();
  bool search_ShouldReturnTrueOnAListContainingTheValue();
  bool search_ShouldReturnTrueOnAListContainingTheValueManyTimes();
  bool search_ShouldReturnTrueWhenTheValueIsAtTheFront();
  bool search_ShouldReturnTrueWhenTheValueIsAtTheBack();

  bool addBack_ShouldIncrementSizeAfterItIsCalled();
  bool addBack_ShouldCorrectlyAddTheIntToTheBackOfTheList();
  bool addBack_ShouldNotChangeAnyOtherValues();

  bool addFront_ShouldIncrementSizeAfterItIsCalled();
  bool addFront_ShouldCorrectlyAddTheIntToTheFrontOfTheList();
  bool addFront_ShouldNotChangeAnyOtherValues();

  bool removeFront_shouldReturnFalseOnAnEmptyList();
  bool removeFront_shouldReturnTrueOnANonEmptyList();
  bool removeFront_ShouldDecrementSizeAfterItIsCalled();
  bool removeFront_ShouldRemoveTheCorrectInt();
  bool removeFront_ShouldNotChangeAnyOtherValues();

  bool removeBack_shouldReturnFalseOnAnEmptyList();
  bool removeBack_ShouldReturnTrueOnANonEmptyList();
  bool removeBack_ShouldDecrementSizeAfterItIsCalled();
  bool removeBack_ShouldRemoveTheCorrectInt();
  bool removeBack_ShouldNotChangeAnyOtherValues();

};
#endif
