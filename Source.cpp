#include "Header.h"

int main(void)
{
  int lowTestA = 1;
  int lowTestD = 1;
  int highTestA = MAX_STACK;
  int highTestD = MAX_STACK;
  bool firePower_flag;

  attack(MIN_ATTACK, MIN_DEFEND, 0);
  attack(MAX_ATTACK, MAX_DEFEND, 0);
}



int roll()
{
  return rand() % 6 + 1;
}

  /* Takes the number of armies on both sides, returns a win or loss for
     the attacker. */
int attack(attacker int, defender int, bool fpFlag)
{
  int a1,a2,a3,d1,d2;

      /* Roll Defender */
  d1 = roll();
  d2 = roll();

  if (d1 == DIE_MAX && d2 == DIE_MAX)
  {
    return false;  //No amount of rerolling will help the attacker.
  }

    /* Order the pair for later matching against attacker dice */
  if (d1 < d2)
  {

  }

    /* Roll Attacker */
  a1 = roll();
  a2 = roll();
  a3 = roll();

  while(


    /* Re-roll Attacker's lowest die */
  for ()
  {

  }

  return true;
}