#pragma once
#include <vector>
#define X_CHAR 'X'
#define O_CHAR 'O'
#define EMPTY_CHAR '?'
#define RESER_CHAR '+'

typedef std::vector<std::vector<char>> kf;

const std::vector<std::vector<std::vector<int>>> //!!!! ЕБАНУТАЯ ВЕЩЬ ПИЗДЕЦ
  win_cond_crate(
    {  //first vector
      { //1 second crate
        {0,0},
        {0,1},
        {0,2},
      },
      { //2
        {1,0},
        {1,1},
        {1,2}
      },
      { //3
        {2,0},
        {2,1},
        {2,2}
      },
      {//4
        {0,0},
        {1,0},
        {2,0}
      },
      {//5
        {0,1},
        {1,1},
        {2,1}
      },
      {//6
        {0,2},
        {1,2},
        {2,2}
      },
      {//7
        {0,0},
        {1,1},
        {2,2},
      },
      {//8
        {0,2},
        {1,1},
        {2,0}
      }
    }   
  );

// //+++
// //???
// //???
// const kf c1 = {
//   {RESER_CHAR,RESER_CHAR,RESER_CHAR},
//   {EMPTY_CHAR,EMPTY_CHAR,EMPTY_CHAR},
//   {EMPTY_CHAR,EMPTY_CHAR,EMPTY_CHAR}
// };
// ///??? 
// ///+++
// ///???
// const kf c2 = {
//   {EMPTY_CHAR,EMPTY_CHAR,EMPTY_CHAR},
//   {RESER_CHAR,RESER_CHAR,RESER_CHAR},
//   {EMPTY_CHAR,EMPTY_CHAR,EMPTY_CHAR}
// };
// /// ???
// /// ???
// /// +++
// const kf c3 = {
//   {EMPTY_CHAR,EMPTY_CHAR,EMPTY_CHAR},
//   {EMPTY_CHAR,EMPTY_CHAR,EMPTY_CHAR},
//   {RESER_CHAR,RESER_CHAR,RESER_CHAR}
// };
// const kf c4 = {
//   {RESER_CHAR,EMPTY_CHAR,EMPTY_CHAR},
//   {RESER_CHAR,EMPTY_CHAR,EMPTY_CHAR},
//   {RESER_CHAR,EMPTY_CHAR,EMPTY_CHAR},
// };
// const kf c5 = {
//   {EMPTY_CHAR,RESER_CHAR,EMPTY_CHAR},
//   {EMPTY_CHAR,RESER_CHAR,EMPTY_CHAR},
//   {EMPTY_CHAR,RESER_CHAR,EMPTY_CHAR}
// };
// const kf c6 = {
//   {EMPTY_CHAR,EMPTY_CHAR,RESER_CHAR},
//   {EMPTY_CHAR,EMPTY_CHAR,RESER_CHAR},
//   {EMPTY_CHAR,EMPTY_CHAR,RESER_CHAR}
// };
// const kf c7 = {
//   {RESER_CHAR,EMPTY_CHAR,EMPTY_CHAR},
//   {EMPTY_CHAR,RESER_CHAR,EMPTY_CHAR},
//   {EMPTY_CHAR,EMPTY_CHAR,RESER_CHAR}
// };
// const kf c8 = {
//   {EMPTY_CHAR,EMPTY_CHAR,RESER_CHAR},
//   {EMPTY_CHAR,RESER_CHAR,EMPTY_CHAR},
//   {RESER_CHAR,EMPTY_CHAR,EMPTY_CHAR}
// };








