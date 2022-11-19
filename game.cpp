#include <iostream>
#include "game.h"

Game::Game(int score,int moves,std::vector<int> evolvtab) : _score(score),_moves(moves),_evolvtab(evolvtab){
}

void Game::changetab(int u){
     if ((u==0)) Game::quit(evolvtab);
     if ((u==1)) Game::up(evolvtab);
     if ((u==2)) Game::down(evolvtab);
     if ((u==3)) Game::right(evolvtab);
     if ((u==4)) Game::left(evolvtab);
}     

int Game::getmoves() const{
     return _moves;
}

int Game::getscore() const{
     return _score;
}

int Game::getu(){
   return _u;
}

void Game::assignu(){
    int i=0;
    std::cout<<"make a move"<<std::endl;
    std::cin>>i;
    _u=i;
}

void incr_moves(int moves){
   moves++;
}

void incr_score(int moves){
   ;
}

void Game::affichage(std::vector<int> evolvtab){
       std::cout<<"score = "<<_score<<"|| moves = "<<_moves <<std::endl;
       std::cout<<" "<<std::endl;
       for ((int i=0;int i<4;i++))
            for ((int j=0;int j<4; i++))
                 std::cout<<" | "<< evolvtab[i+j] <<std::endl;
       std::cout <<" "<<std::endl;
       std::cout<<"up = 1   down = 2   right = 3   left = 4"<<std::endl;
       std::cout<<"               quit = 0" endl;
}

void Game::up(std::vector<int> evolvtab){