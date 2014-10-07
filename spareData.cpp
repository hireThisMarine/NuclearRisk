/*
  if(alpha == ATTACKER_WINS_TWO )
    std::cout << ATTACKER_WINS_TWO << std::endl;
  if(alpha == ATTACKER_WINS_ONE )
    std::cout << ATTACKER_WINS_ONE << std::endl;
  if(alpha == BOTH_LOSE_ONE)
    std::cout << BOTH_LOSE_ONE << std::endl;
  if(alpha == DEFENDER_WINS_ONE)
    std::cout << DEFENDER_WINS_ONE << std::endl;
  if(alpha == DEFENDER_WINS_TWO)
    std::cout << DEFENDER_WINS_TWO << std::endl;

  if(bravo == ATTACKER_WINS_TWO )
    std::cout << ATTACKER_WINS_TWO << std::endl;
  if(bravo == ATTACKER_WINS_ONE )
    std::cout << ATTACKER_WINS_ONE << std::endl;
  if(bravo == BOTH_LOSE_ONE)
    std::cout << BOTH_LOSE_ONE << std::endl;
  if(bravo == DEFENDER_WINS_ONE)
    std::cout << DEFENDER_WINS_ONE << std::endl;
  if(bravo == DEFENDER_WINS_TWO)
    std::cout << DEFENDER_WINS_TWO << std::endl;



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

*/