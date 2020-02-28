//File: CLL_Node.h
//Author: Jairun Diemert
//Class: COP3530
//Project: Class work
//Description: This is the header file for the CLL_Node class

#ifndef CLL_NODE_H
#define CLL_NODE_H

#include <iostream>
using namespace std;

class CLL_Node
 {
  int  data;
  CLL_Node *next;
	CLL_Node *previous;
	CLL_Node *currNodePtr;
	CLL_Node *newNodePtr;
	CLL_Node *head = NULL;
	CLL_Node *tail = NULL;  //nullptr for C++11

  public :
  CLL_Node(){};
  void  create();
  void  insert();
  void  del();
  void  display();
	void  size();
	void  displayBackward();
	void  searchList();
	void  replace();
};


#endif 
