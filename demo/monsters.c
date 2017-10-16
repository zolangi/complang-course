#include <stdio.h>
void main(void)
{
  typedef enum {ZOMBIE, VAMPIRE, WEREWOLF} Monster;
  Monster m = WEREWOLF;

  switch(m) {
    case ZOMBIE:
      printf("Zombie; get shotgun\n");
      break;
    case VAMPIRE:
      printf("Vampire; get wood stakes\n");
      break;
    case WEREWOLF:
      printf("Werewolf; get chocolate\n");
      break;
    default:
      printf("Unknown monster; call in Godzilla\n");
  }
}
  
