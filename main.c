#include <stdio.h>
#include <time.h>

int step = -1;
int choice;

void clrScrn();

void delay(int sec);

void menu(int started);

int main(void) {

  do {
    if(step == -1){
      menu(0);
    } else {
      menu(1);
    }

    scanf("%d", &choice);
    switch(choice) {
        case 1:
          printf("You haven't dranken anything yet.\n");
          break;
        case 2:
          step++;
          printf("You opened the energy drink!\n");
          break;
        case 3:
          printf("What is there to digest?\n");
          break;
        case 4:
          printf("There is nothing to drink.\n");
          break;
        default:
          printf("Bob ross doesn't know how to do that.\n");
    }
    step++;
  } while(step == 0);

  while(step == 1) {
    menu(1);

    scanf("%d", &choice);
    switch(choice) {
        case 1:
          printf("You haven't dranken anything yet.\n");
          break;
        case 2:
          printf("There is nothing to open.\n");
          break;
        case 3:
          printf("What is there to digest?\n");
          break;
        case 4:
          step++;
          printf("You drank the energy drink!\n");
          break;
        default:
          printf("Bob ross doesn't know how to do that.\n");
    }
  }

  while(step == 2) {
    menu(1);

    scanf("%d", &choice);
    switch(choice) {
        case 1:
          printf("You haven't dranken anything yet.\n");
          break;
        case 2:
          printf("There is nothing to open.\n");
          break;
        case 3:
          step++;
          printf("You are digesting the energy drink!\n");
          break;
        case 4:
          printf("There is nothing to drink.\n");
          break;
        default:
          printf("Bob ross doesn't know how to do that.\n");
    }
  }

  while(step == 3) {
    menu(1);

    scanf("%d", &choice);
    switch(choice) {
        case 1:
          step++;
          printf("You peed the energy drink!\n");
          break;
        case 2:
          printf("There's nothing to open.\n");
          break;
        case 3:
          printf("What is there to digest?\n");
          break;
        case 4:
          printf("There is nothing to drink.\n");
          break;
        default:
          printf("Bob ross doesn't know how to do that.");
    }
  }

  printf("\n");
  printf("\n");
  printf("\n");

  printf("You succsessfully drank the Bob Ross Positve Energy Drink!\n");

  return 0;
}

void menu(int started)  {
  if(started == 1) {clrScrn();}
  printf("\n");
  printf("===================================\n");
  printf("   Bob Ross With an Energy Drink\n");
  printf("===================================\n");
  putchar('\n');

  printf("1. Pee the energy drink\n2. Open the energy drink\n3. Digest the energy drink\n4. Drink the energy Drink\n");
}

void clrScrn()  {
  for(int i = 0; i <= 2; i++) {
    printf("\n");
  }
}