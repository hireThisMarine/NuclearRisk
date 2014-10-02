#include "Header.h"


int main(void)
{
  int lowTestA = 1;
  int lowTestD = 1;
  int highTestA = MAX_STACK;
  int highTestD = MAX_STACK;
  bool firePower_flag = false;

  attack(MIN_ATTACK, MIN_DEFEND, firePower_flag);
  attack(MAX_ATTACK, MAX_DEFEND, firePower_flag);

  std::cout << 

  getchar();
}

int roll()
{
  return rand() % 6 + 1;
}

  /* Takes the number of armies on both sides, returns a win or loss for
     the attacker. */
roll_result attack(int attacker, int defender, bool fpFlag)
{
  int a1,a2,a3,d1,d2;
  int result = 0;

      /* Roll Defender */
  d1 = roll();
  d2 = roll();

  if (d1 == DIE_MAX && d2 == DIE_MAX)
  {
    return DEFENDER_WINS_TWO;  //No amount of rerolling will help the attacker.
  }

    /* Order the pair for later matching against attacker dice */
  if(d2 > d1) //xor swap to have higher die first
  {
    d2 ^= d1;
    d1 ^= d2;
    d2 ^= d1;
  }

    /* Roll Attacker */
  a1 = roll();
  a2 = roll();
  a3 = roll();

  if( a3 > a2)
  {
    a3 ^= a2;
    a2 ^= a3;
    a3 ^= a2;
  }

  if( a2 > a1)
  {
    a2 ^= a1;
    a1 ^= a2;
    a2 ^= a1;
  }

    /* Now that a1, a2, and a3 are ordered, compare them against the defending dice */
  if (a1 > d1)
    result += 1;
  if (a2 > a2)
    result += 10;

  switch(result)
  {
    case 0:
            return DEFENDER_WINS_TWO;
            break;
    case 11:
            return ATTACKER_WINS_TWO;
            break;
    case 1:
    case 10:
            return BOTH_LOSE_ONE; 
  }

}

