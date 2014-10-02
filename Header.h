#include <iostream>
#include <math.h>

//#include "Source.cpp"

#define MAX_STACK 12
#define DIE_MIN 1
#define DIE_MAX 6
#define MIN_ATTACK 2
#define MIN_DEFEND 1
#define MAX_ATTACK 12
#define MAX_DEFEND 12

enum roll_result { ATTACKER_WINS_TWO, ATTACKER_WINS_ONE,
  DEFENDER_WINS_ONE_,  DEFENDER_WINS_TWO, BOTH_LOSE_ONE};

roll_result attack(int attacker, int defender, bool fpFlag);
                    