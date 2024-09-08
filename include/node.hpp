#include "cond.hpp"
#include <iostream>
#include <vector>
#include <utility>
#include <exception>

#define DEBUG 


void xo_err(const std::exception& e){
  std::cerr << "XO_err: " << e.what() << std::endl;
}

//нужно строить линии из а в б и оценивать их ебать я гений
class node{ //ориентированный ацикличный граф
  node *parent = nullptr;
  int cell;
  int score;
  public:
    node (int pos_n) : cell(pos_n){
      score = 0;  
    };
    node(node &p, int pos_n) : parent(&p), cell(pos_n) {
      score = 0;
    };
    int get_cell(){
      return cell;
    };
    int get_score(){
      return score;
    }
    node operator=(node &n){
      if(this == &n) return *this;
      this->cell = n.cell;
      this->score = n.score;
      this->parent = n.parent;
      return *this;
    }
    friend node operator-=(node &n, int s){
      n.score-=s;
      return n;
    }

    friend std::ostream& operator<<(std::ostream& os, node& obj){
      os << obj.get_cell() << " | " << obj.get_score() << std::endl;
      return os;
    }
};

bool inline is_win(char player_char, kf &keymap){
  for(auto j = 0; j < win_cond_crate.size(); ++j){
      if(keymap[win_cond_crate[j][0][0]][win_cond_crate[j][0][1]] == player_char &&
         keymap[win_cond_crate[j][1][0]][win_cond_crate[j][1][1]] == player_char &&
         keymap[win_cond_crate[j][2][0]][win_cond_crate[j][2][1]] == player_char)
         return true; 
  }
  return false;
}

int search_position(char player_char, kf &keymap){
  int answer = 1;
  std::vector<node> score_table;
  auto n = 0;
  for(auto j = 0; j < 3; ++j){
    for(auto i = 0; i < 3; ++i){
      if(keymap[j][i] == EMPTY_CHAR) 
        score_table.push_back(node(n));
      //std::cout << score_table[n];
      //throw std::runtime_error("vec err");
      n++;
    }
  }
/*
Debug section for 'score' output;
*/
#ifdef DEBUG
  std::cout << "Score table: \n";
  for(node i : score_table){
    std::cout << i.get_cell() + 1 << " | " << i.get_score() << std::endl;
  }
  is_win(X_CHAR, keymap);
#endif //DEBUG


  return answer;
}


