#include <iostream>
#include <math.h>

//#include "Source.cpp"

#define MAX_STACK 12
#define DIE_MIN 1
#define DIE_MAX 6
#define MIN_ATTACK 2
#define MIN_DEFEND 1
#define ONE_MILLION 10000000

enum roll_result { ATTACKER_WINS_TWO = 0, ATTACKER_WINS_ONE,
  DEFENDER_WINS_ONE,  DEFENDER_WINS_TWO, BOTH_LOSE_ONE};

roll_result attack(int attacker, int defender, bool fpFlag);


/* class Board
{
  //42 Territories
  //2 to 6 players
  //5 dice (3 attack, 2 defend)
  //turn order
  //card Turn In
  //Risk cards
  //Nuclear Risk cards
}*/

/*
class Player
{
  //player color
  //player cards
  //player Nuclear cards

}
                    */