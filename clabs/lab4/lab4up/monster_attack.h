#ifndef MONSTER_ATTACK
#define MONSTER_ATTACK

typedef struct monster_attack
{
  int attack_id;
  char monster_name[10];
  char monster_loc[10];
  int victim_num;
} MA;

#endif
