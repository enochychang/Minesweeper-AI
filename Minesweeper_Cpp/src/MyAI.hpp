// ======================================================================
// FILE:        MyAI.hpp
//
// AUTHOR:      Jian Li
//
// DESCRIPTION: This file contains your agent class, which you will
//              implement. You are responsible for implementing the
//              'getAction' function and any helper methods you feel you
//              need.
//
// NOTES:       - If you are having trouble understanding how the shell
//                works, look at the other parts of the code, as well as
//                the documentation.
//
//              - You are only allowed to make changes to this portion of
//                the code. Any changes to other portions of the code will
//                be lost when the tournament runs your code.
// ======================================================================

#ifndef MINE_SWEEPER_CPP_SHELL_MYAI_HPP
#define MINE_SWEEPER_CPP_SHELL_MYAI_HPP

#include "Agent.hpp"
#include <iostream> // temporary use
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <random>
#include <string>

  #include <time.h>

using namespace std;

class MyAI : public Agent
{
public:
    MyAI ( int _rowDimension, int _colDimension, int _totalMines, int _agentX, int _agentY );

    Action getAction ( int number ) override;


    // ======================================================================
    // YOUR CODE BEGINS
    // ======================================================================
    vector<vector<string>> board;
    void printBoard();
  
    vector<vector<int>> safe;
    vector<vector<int>> safeUncovered;
  
    /* 
    
    <   < > < > < >                             >
    
    */
  
    int startingX;
    int startingY;
  
    vector<vector<int>> frontier;
    vector<int> frontierNum;
  
    int mineCount;
  
    vector<vector<int>> flagThese;
    
    vector<vector<int>> bNeighborhood;
    vector<vector<int>> unmarkedNeighbors;
  
//returns effective label BUT updates correct unmarkedNeighbors
  int effectiveLabelCalc(int label, int x1, int y1);
  
  bool neighborBomb(int x1, int y1);
  //
    
    int coveredTilesLeft;
  
  
    bool zero;
    
  bool checkifanystars();
    // ======================================================================
    // YOUR CODE ENDS
    // ======================================================================
};

#endif //MINE_SWEEPER_CPP_SHELL_MYAI_HPP
