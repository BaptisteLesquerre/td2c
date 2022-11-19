#include <iostream>

class Game{
public
  Game(int score=0,int moves=0,std::vector<int> evolvtab={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0});
  void changetab(int u);
  void up(std::vector<int> evolvtab);
  void down(std::vector<int> evolvtab);
  void right(std::vector<int> evolvtab);
  void left(std::vector<int> evolvtab);
  void quit(std::vector<int> evolvtab);
  void incr_moves(int moves);
  void incr_score(int score);
  void affichage(std::vector<int> evolvtab);
  void assignu();
  int getu();
  int getscore();
  int getmoves();
private
  int _u;
  int _score;
  int _moves;
  std::vector<int> _evolvtab;   
};