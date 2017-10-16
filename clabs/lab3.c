#include <stdio.h>
#include <stdlib.h>

struct monster_attack {
  int attack_id;
  char monster_name[10];
  char monster_loc[10];
  int victim_num;
};

typedef struct monster_attack MA;

void printAttackInfo(struct monster_attack *ptr, int num_attacks){
  struct monster_attack *curr_attack;
  for(int i = 0; i < num_attacks; i++){
    printf("AttackId #: %d\n", curr_attack->attack_id);
    printf("Monster Name: %s\n", curr_attack->monster_name);
    printf("Monster Location: %s\n", curr_attack->monster_loc);
    printf("This Monster has %d victim(s)\n", curr_attack->victim_num);
  }
}

int totalVictims (struct monster_attack *ptr, int num_attacks){
  int total_vic = 0;
  for(int i = 0; i < num_attacks; i++){
    total_vic = total_vic + ptr[i].victim_num;
  }
  printf("Total Number of victims: %d\n", total_vic);
  return total_vic;
}

/*
//  Uses a separate function to print out information for each attack.
This function should /////////////take a pointer to the array and the length of the array as parameters.
Use a loop that uses pointer arithmetic, rather than array subscripts, to step through the array.
//  Compiles successfully with gcc in Fedora 26 as c11 (This requirement will be understood and not restated for future C labs)       */


void userInput(struct monster_attack *attacks, int num_attacks) {
  printf("Welcom User! Please enter a number of attacks you will be inserting: ");
  scanf("%d", &num_attacks);

  struct monster_attack *curr_attack;

  for(int i = 0; i < num_attacks; i++) {
    curr_attack = attacks + 1;
    attacks[i].attack_id = i+1;
    printf("Enter the monster name: \n");
    scanf("%s", attacks[i].monster_name);
    printf("Enter the monster location: \n");
    scanf("%s", attacks[i].monster_loc);
    printf("Enter the number of victims this monster has: \n");
    scanf("%d", &attacks[i].victim_num);
  }


   printAttackInfo(attacks, num_attacks);
  // curr_attack++;

 // totalVictims(attacks, num_attacks);
}

int main(void){
  int num_i = 0;
  int *num_attacks;
  num_attacks = &num_i;

  // struct monster_attack *curr_attack;
  struct monster_attack *attacks = (struct monster_attack *) malloc(*num_attacks * sizeof(struct monster_attack));

  userInput(attacks, *num_attacks);
  return 0;
}
