/*CS 3034 Lab 4: Linked List

Write a C program that keeps a linked list of monster attack structs.

// You will need to code a way to show data for each monster attack (a function that displays the data in a way somewhat analogous to a Java toString() method.)
 After each menu option, you should see output for each attack, in the same way you see output for each int in the example code.
 You will also need to write a function to take user input for each monster attack.
 You will probably need to use strncpy to copy the input strings to the strings in the struct.
// Use malloc() to allocate space on the heap for each monster attack.
You may use char arrays with fixed lengths for the monster name and attack location in your struct.
However, if you want to refine this a little, try this: use char pointers for the strings in the struct,
take the strings from input and find the \0 to locate the end of each string,
and use malloc() to allocate space for the strings based on the actual lengths of the input strings.
// The search function should search for a monster attack by its id.
Similarly, the insert before and insert after functions should insert before or after attacks based on their ids.
//  Turn in your code and a screenshot of the output from a sample run*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "linked_list.c"
#include "monster_attack.h"

void show_menu()
{
    printf("\n--- C Linked List Demonstration --- \n\n");
    printf("0.quit\n");
    printf("1.Prepend an Element\n");
    printf("2.Append an Element\n");
    printf("3.Search for an Element\n");
    printf("4.Insert After an Element\n");
    printf("5.Insert Before an Element\n");
    printf("6.Remove Front Node\n");
    printf("7.Remove Back Node\n");
    printf("8.Remove Any Node\n");
    printf("9.Sort the List\n");
    printf("10.Reverse the Linked List\n");
}

struct monster_attack askforMonster( struct monster_attack data ) {
  data = *(struct monster_attack *) malloc(sizeof(struct monster_attack));
  printf("Please enter the Attack ID#: \n");
  scanf("%d",&data.attack_id);
  printf("Please enter the Monster's Name: \n");
  scanf("%s", data.monster_name);
  printf("Please enter the Monster's Location\n");
  scanf("%s", data.monster_loc);
  printf("Please enter the amount of victims this monster has: \n");
  scanf("%d", &data.victim_num);

  return data;
}

int main()
{
    int command;
    struct monster_attack data;

    node* head = NULL;
    node* tmp = NULL;

    do {
		show_menu();
        printf("\nEnter a command(0-10,0 to quit): ");
        scanf("%d",&command);

        switch(command)
        {
        case 1: //Prepend an Element
            printf("Enter the information for Prepend: \n");
            askforMonster(data);
            head = prepend(head,&data);
            traverse(head);
            break;
        case 2: //Append an Element
            printf("Enter the information for Append: \n");
            askforMonster(data);
            head = append(head,&data);
            traverse(head);
            break;
        case 3: //Search for an Element
            printf("Search for Attack ID#: \n");
            scanf("%d",&data.attack_id);
            tmp = search(head,data);
            if(tmp != NULL)
            {
                printf("Element with value %d found.",data.attack_id);
            }
            else
            {
                printf("Element with value %d not found.",data.attack_id);
            }
            break;
        case 4: //Insert After an Element
            printf("Enter the Monster's Attack ID# after which you would like to insert the new value: ");
            scanf("%d",&data.attack_id);
            tmp = search(head,data);
            if(tmp != NULL)
            {
                printf("Enter the value to insert: ");
                askforMonster(data);
                head = insert_after(head,&data,tmp);
                if(head != NULL)
                    traverse(head);
            }
            else
            {
                printf("Monster with Attack ID#%d was not found.",data.attack_id);
            }
            break;
        case 5: //Insert Before an Element
            printf("Enter the element value before which you would like to insert a new value: ");
            scanf("%d",&data.attack_id);
            tmp = search(head,data);
            if(tmp != NULL)
            {
                printf("Enter the value to insert: ");
                askforMonster(data);
                head = insert_before(head,&data,tmp);

                if(head != NULL)
                    traverse(head);
            }
            else
            {
                printf("Element with value %d not found.",data.attack_id);
            }
            break;
        case 6: //Remove Front Node
            head = remove_front(head);
            if(head != NULL)
                traverse(head);
            break;
        case 7: //Remove Back Node
            head = remove_back(head);
            if(head != NULL)
                traverse(head);
            break;
        case 8: //Remove Any Node
            printf("Enter the element value to remove: ");
            scanf("%d",&data.attack_id);
            tmp = search(head,data);
            if(tmp != NULL)
            {
                remove_any(head,tmp);
                if(head != NULL)
                    traverse(head);
            }
            else
            {
                printf("Element with value %d not found.",data.attack_id);
            }
            break;
        case 9: //Sort the List
            head = insertion_sort(head);
            if(head != NULL)
                traverse(head);
            break;
        case 10: //Reverse the List
            head = reverse(head);
            if(head != NULL)
                traverse(head);
            break;
        }

    } while(command != 0);
    clear(head);
    return 0;
}
