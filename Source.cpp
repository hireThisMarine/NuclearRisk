#include "Header.h"


int main(void)
{
  int lowTestA = 1;
  int lowTestD = 1;
  int highTestA = MAX_STACK;
  int highTestD = MAX_STACK;
  bool firePower_flag = false;

  roll_result alpha = attack(MAX_STACK, MAX_STACK, firePower_flag);

  firePower_flag = true;

  roll_result bravo = attack(MAX_STACK, MAX_STACK, firePower_flag);

  getchar();
}

int roll()
{
  return rand() % 6 + 1;
}

void mySwap(int * a, int * b)
{
  if(a != b)
  {
    *b ^= *a;
    *a ^= *b;
    *b ^= *a;
  }
}

  /* Takes the number of armies on both sides, returns a win or loss for
     the attacker. */
roll_result attack(int attacker, int defender, bool fpFlag)
{
  int a1,a2,a3,d1,d2;
  int result = 0;

  while(attacker >= MIN_ATTACK && defender >= MIN_DEFEND)
  {
        /* Roll Defender */
    d1 = roll();

    if(defender > 1)
      d2 = roll();
    else
      d2 = 0;

    if (d1 == DIE_MAX && d2 == DIE_MAX)
    {
      return DEFENDER_WINS_TWO;  //No amount of rerolling will help the attacker.
    }

      /* Order the pair for later matching against attacker dice */
    if(d2 > d1) //xor swap to have higher die first
    {
      mySwap(&d2, &d1);
    }

      /* Roll Attacker */
    a1 = roll();

    if(attacker >= 3)
      a2 = roll();
    else 
      a2 = 0;

    if(attacker >= 4)
      a3 = roll();
    else 
      a3 = 0;

    if( a3 > a2)
    {
      mySwap(&a3, &a2);
    }

    if( a2 > a1)
    {
      mySwap(&a2, &a1);
    }

      // Now that a1, a2, and a3 are ordered, compare them against the defending dice
    if (a1 > d1)
      defender--;
    else
      attacker--;
    if (a2 > d2)
      defender--;
    else
      attacker--;


  }

}

