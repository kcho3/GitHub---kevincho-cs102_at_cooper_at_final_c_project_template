#include "program.h"

int game(){

printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf("Welcome to Kevin and Jake's Virtual Game Center! We have 5 games available for you to play: AgeGuesser, PickUpBricks, GuessThatNumber, 21KaratMagic, and MadLibs. \n");

while(1) {

    printf("Which game would you like to play? AgeGuesser (A), PickUpBricks (P), GuessThatNumber (G), 21KaratMagic (T), or MadLibs (M)? Press E to end the game. \n");

    char response;

    scanf("%c", &response);

    if (response == 'a') {

        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        int age = 0;
        float number;
        int remainder;
        char answer[4];
        printf("Get your calculator out! We're about to guess your age with magic. Are you ready? \n");
        scanf("%s", answer);
        printf("Multiply the first digit of your age by 3.25. \n");
        printf("Add 4. \n");
        printf("Multiply by 8. \n");
        printf("Add that number to the following number: (260)x(the second digit of your age). \n");
        printf("Divide by 13. \n");
        printf("Add 19. \n");
        printf("Divide by 2. \n");
        printf("Enter the number you got, to 5 decimal places. \n");
        scanf("%f", &number);
        int newnumber = number - (279/26);
        while (newnumber !=0) {
             remainder = newnumber % 10;
             age = (age*10)+remainder;
             newnumber /= 10;
        }
        if (age < 10) {
             age = age*10;
         }
        printf("We guessed your age! It is %d! \n", age);
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");


}

    if (response == 'p') {

    int bricks = 101, choice, x;
    int lower = 1, upper;
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    printf("Ready to play Pick Up Bricks, a clever math game? The rules are as follows: The user and the computer will take turns picking up bricks. You can either pick up 1, 2, 3, 4, 5, 6, 7, 8, or 9 bricks on each turn. Whoever has     to pick up the last brick loses the game! Let's play. \n");

    while(1) {
        printf("Number of bricks = %d\n", bricks);
        printf("Pick up either 1, 2, 3, 4, 5, 6, 7, 8, or 9 bricks\n");
        scanf("%d", &choice);

        bricks = bricks - choice;

        if (bricks == 1) {
            printf("Number of bricks = %d\n", bricks);
            printf("The computer has to pick up the last brick. You win! \n");
            break;
         }

        printf("Number of bricks = %d\n", bricks);

        srand(time(NULL));

        if (bricks > 1 && bricks <= 9) {
            upper = (bricks-1);
         }

        if (bricks > 9) {
        upper = 9;
        }

        x = (rand() % (upper-lower+1)) + lower ;

        printf("The computer has picked up %d bricks\n", x);

        bricks = bricks - x;

        if (bricks == 1) {
            printf("Number of bricks = %d\n ", bricks);
            printf("You have to pick up the last brick. You lose. Good game! \n");
            break;
         }

   }

}

    if (response == 'g') {

        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        int randomNumber =0;
        int num =0;

        printf("Welcome to GuessThatNumber! \n");
        printf("Guess the number the computer is thinking of. It is between 1 and 50. \n");

        srand(time(NULL));
        randomNumber = (rand() % 50) + 1;

        while(1) {
             printf("Enter your guess: \n");
             scanf("%d",&num);

             if(randomNumber > num)
             {
                 printf("Too low! Try again! \n");
             }   

             if(randomNumber < num) {
                 printf("Too high! Try again! \n");
             }   

             if(randomNumber == num)
             {
             printf("You Won!\n");
             break;
             }   
 }   

}

    if (response == 't') {

      int a[22], b[22], c[22], choice;
      a[1]=5; a[8]=8; a[15]=80;
      a[2]=9; a[9]=97;    a[16]=16;
      a[3]=104;   a[10]=55;   a[17]=43;
      a[4]=33;    a[11]=11;   a[18]=44;
      a[5]=12;    a[12]=28;   a[19]=19;
      a[6]=4; a[13]=13;   a[20]=2;
      a[7]=1; a[14]=14;   a[21]=21;
      displayArray(a);
      printf("Pick one of the numbers above, and don't forget it! \n");
      printf("Which column is your number in? \n");
      scanf("%d", &choice);
      switch(choice)
      {
      case 1:
          b[1]=a[8];  b[8]=a[9];  b[15]=a[10];
          b[2]=a[11]; b[9]=a[12]; b[16]=a[13];
          b[3]=a[14]; b[10]=a[1]; b[17]=a[2];
          b[4]=a[3];  b[11]=a[4]; b[18]=a[5];
          b[5]=a[6];  b[12]=a[7]; b[19]=a[15];
          b[6]=a[16]; b[13]=a[17];    b[20]=a[18];
          b[7]=a[19]; b[14]=a[20];    b[21]=a[21];
          displayArray(b);
          printf("Which column is your number in? \n");
          scanf("%d", &choice);
          switch(choice)
          {
              case 1:
                  c[1]=b[8];  c[8]=b[9];  c[15]=b[10];
                  c[2]=b[11]; c[9]=b[12]; c[16]=b[13];
                  c[3]=b[14]; c[10]=b[1]; c[17]=b[2];
                  c[4]=b[3];  c[11]=b[4]; c[18]=b[5];
                  c[5]=b[6];  c[12]=b[7]; c[19]=b[15];
                  c[6]=b[16]; c[13]=b[17];    c[20]=b[18];
                  c[7]=b[19]; c[14]=b[20];    c[21]=b[21];
                  displayArray(c);
                  printf("Which column is your number in? \n");
                  scanf("%d", &choice);
                  switch(choice)
                  {
                      case 1:
                          printf("We guessed your number! Your number was: %d \n", c[4]);
                      break;
                      case 2:
                          printf("We guessed your number! Your number was: %d \n", c[11]);
                      break;
                      case 3:
                          printf("We guessed your number! Your number was: %d \n", c[18]);
                      break;

                  }
                  break;
              case 2:
                  c[1]=b[15]; c[8]=b[16]; c[15]=b[17];
                  c[2]=b[18]; c[9]=b[19]; c[16]=b[20];
                  c[3]=b[21]; c[10]=b[8]; c[17]=b[9];
                  c[4]=b[10]; c[11]=b[11];    c[18]=b[12];
                  c[5]=b[13]; c[12]=b[14];    c[19]=b[1];
                  c[6]=b[2];  c[13]=b[3]; c[20]=b[4];
                  c[7]=b[5];  c[14]=b[6]; c[21]=b[7];
                  displayArray(c);
                  printf("What column is your number in? \n");
                  scanf("%d", &choice);
                  switch (choice)
                  {
                      case 1:
                          printf("We guessed your number! Your number was: %d \n", c[4]);
                      break;
                      case 2:
                          printf("We guessed your number! Your number was: %d \n", c[11]);
                      break;
                      case 3:
                          printf("We guessed your number! Your number was: %d \n", c[18]);
                      break;

                  }
                  break;
              case 3:
                  c[1]=b[1];  c[8]=b[2];  c[15]=b[3];
                  c[2]=b[4];  c[9]=b[5];  c[16]=b[6];
                  c[3]=b[7];  c[10]=b[15];    c[17]=b[16];
                  c[4]=b[17]; c[11]=b[18];    c[18]=b[19];
                  c[5]=b[20]; c[12]=b[21];    c[19]=b[8];
                  c[6]=b[9];  c[13]=b[10];    c[20]=b[11];
                  c[7]=b[12]; c[14]=b[13];    c[21]=b[14];
                  displayArray(c);
                  printf("What column is your number in? \n?");
                  scanf("%d", &choice);
                  switch (choice)
                  {
                     case 1:
                          printf("We guessed your number! Your number was: %d \n", c[4]);
                     break;
                     case 2:
                          printf("We guessed your number! Your number was: %d \n", c[11]);
                     break;
                     case 3:
                         printf("We guessed your number! Your number was: %d \n", c[18]);
                     break;

                 }
                 break;
         }
         break;
     case 2:
         b[1]=a[15]; b[8]=a[16]; b[15]=a[17];
         b[2]=a[18]; b[9]=a[19]; b[16]=a[20];
         b[3]=a[21]; b[10]=a[8]; b[17]=a[9];
         b[4]=a[10]; b[11]=a[11];    b[18]=a[12];
         b[5]=a[13]; b[12]=a[14];    b[19]=a[1];
         b[6]=a[2];  b[13]=a[3]; b[20]=a[4];
         b[7]=a[5];  b[14]=a[6]; b[21]=a[7];
         displayArray(b);
         printf("Which column is your number in? \n");
         scanf("%d", &choice);
         switch(choice)
         {
             case 1:
                 c[1]=b[8];  c[8]=b[9];  c[15]=b[10];
                 c[2]=b[11]; c[9]=b[12]; c[16]=b[13];
                 c[3]=b[14]; c[10]=b[1]; c[17]=b[2];
                 c[4]=b[3];  c[11]=b[4]; c[18]=b[5];
                 c[5]=b[6];  c[12]=b[7]; c[19]=b[15];
                 c[6]=b[16]; c[13]=b[17];    c[20]=b[18];
                 c[7]=b[19]; c[14]=b[20];    c[21]=b[21];
                 displayArray(c);
                 printf("Which column is your number in? \n");
                 scanf("%d", &choice);
                 switch(choice)
                 {
                     case 1:
                         printf("We guessed your number! Your number was: %d \n", c[4]);
                     break;
                     case 2:
                         printf("We guessed your number! Your number was: %d \n", c[11]);
                     break;
                     case 3:
                         printf("We guessed your number! Your number was: %d \n", c[18]);
                     break;

                 }
                 break;
             case 2:
                 c[1]=b[15]; c[8]=b[16]; c[15]=b[17];
                 c[2]=b[18]; c[9]=b[19]; c[16]=b[20];
                 c[3]=b[21]; c[10]=b[8]; c[17]=b[9];
                 c[4]=b[10]; c[11]=b[11];    c[18]=b[12];
                 c[5]=b[13]; c[12]=b[14];    c[19]=b[1];
                 c[6]=b[2];  c[13]=b[3]; c[20]=b[4];
                 c[7]=b[5];  c[14]=b[6]; c[21]=b[7];
                 displayArray(c);
                 printf("What column is your number in? \n");
                 scanf("%d", &choice);
                 switch (choice)
                 {
                     case 1:
                         printf("We guessed your number! Your number was: %d \n", c[4]);
                     break;
                     case 2:
                         printf("We guessed your number! Your number was: %d \n", c[11]);
                     break;
                     case 3:
                         printf("We guessed your number! Your number was: %d \n", c[18]);
                     break;

                 }
                 break;
             case 3:
                 c[1]=b[1];  c[8]=b[2];  c[15]=b[3];
                 c[2]=b[4];  c[9]=b[5];  c[16]=b[6];
                 c[3]=b[7];  c[10]=b[15];    c[17]=b[16];
                 c[4]=b[17]; c[11]=b[18];    c[18]=b[19];
                 c[5]=b[20]; c[12]=b[21];    c[19]=b[8];
                 c[6]=b[9];  c[13]=b[10];    c[20]=b[11];
                 c[7]=b[12]; c[14]=b[13];    c[21]=b[14];
                 displayArray(c);
                 printf("What column is your number in? \n");
                 scanf("%d?", &choice);
                 switch (choice)
                 {
                     case 1:
                         printf("We guessed your number! Your number was: %d \n", c[4]);
                     break;
                     case 2:
                         printf("We guessed your number! Your number was: %d \n", c[11]);
                     break;
                     case 3:
                         printf("We guessed your number! Your number was: %d \n", c[18]);
                     break;

                 }
                 break;
         }
         break;
     case 3:
         b[1]=a[1];  b[8]=a[2];  b[15]=a[3];
         b[2]=a[4];  b[9]=a[5];  b[16]=a[6];
         b[3]=a[7];  b[10]=a[15];    b[17]=a[16];
         b[4]=a[17]; b[11]=a[18];    b[18]=a[19];
         b[5]=a[20]; b[12]=a[21];    b[19]=a[8];
         b[6]=a[9];  b[13]=a[10];    b[20]=a[11];
         b[7]=a[12]; b[14]=a[13];    b[21]=a[14];
         displayArray(b);
         printf("Which column is your number in? \n");
         scanf("%d", &choice);
         switch(choice)
         {
             case 1:
                 c[1]=b[8];  c[8]=b[9];  c[15]=b[10];
                 c[2]=b[11]; c[9]=b[12]; c[16]=b[13];
                 c[3]=b[14]; c[10]=b[1]; c[17]=b[2];
                 c[4]=b[3];  c[11]=b[4]; c[18]=b[5];
                 c[5]=b[6];  c[12]=b[7]; c[19]=b[15];
                 c[6]=b[16]; c[13]=b[17];    c[20]=b[18];
                 c[7]=b[19]; c[14]=b[20];    c[21]=b[21];
                 displayArray(c);
                 printf("Which column is your number in? \n");
                 scanf("%d", &choice);
                 switch(choice)
                 {
                     case 1:
                         printf("We guessed your number! Your number was: %d \n", c[4]);
                     break;
                     case 2:
                         printf("We guessed your number! Your number was: %d \n", c[11]);
                     break;
                     case 3:
                         printf("We guessed your number! Your number was: %d \n", c[18]);
                     break;
                     }
                 break;
             case 2:
                 c[1]=b[15]; c[8]=b[16]; c[15]=b[17];
                 c[2]=b[18]; c[9]=b[19]; c[16]=b[20];
                 c[3]=b[21]; c[10]=b[8]; c[17]=b[9];
                 c[4]=b[10]; c[11]=b[11];    c[18]=b[12];
                 c[5]=b[13]; c[12]=b[14];    c[19]=b[1];
                 c[6]=b[2];  c[13]=b[3]; c[20]=b[4];
                 c[7]=b[5];  c[14]=b[6]; c[21]=b[7];
                 displayArray(c);
                 printf("What column is your number in? \n");
                 scanf("%d", &choice);
                 switch (choice)
                 {
                     case 1:
                         printf("We guessed your number! Your number was: %d \n", c[4]);
                     break;
                     case 2:
                         printf("We guessed your number! Your number was: %d \n", c[11]);
                     break;
                     case 3:
                         printf("We guessed your number! Your number was: %d \n", c[18]);
                     break;

                 }
                 break;
             case 3:
                 c[1]=b[1];  c[8]=b[2];  c[15]=b[3];
                 c[2]=b[4];  c[9]=b[5];  c[16]=b[6];
                 c[3]=b[7];  c[10]=b[15];    c[17]=b[16];
                 c[4]=b[17]; c[11]=b[18];    c[18]=b[19];
                 c[5]=b[20]; c[12]=b[21];    c[19]=b[8];
                 c[6]=b[9];  c[13]=b[10];    c[20]=b[11];
                 c[7]=b[12]; c[14]=b[13];    c[21]=b[14];
                 displayArray(c);
                 printf("What column is your number in? \n");
                 scanf("%d", &choice);
                 switch (choice)
                 {
                     case 1:
                         printf("We guessed your number! Your number was: %d \n", c[4]);
                     break;
                     case 2:
                         printf("We guessed your number! Your number was: %d \n", c[11]);
                     break;
                     case 3:
                         printf("We guessed your number! Your number was: %d \n", c[18]);
                     break;

                 }
                 break;
         }
         break;

 }

}

    if (response == 'm') {

        printf("It's time to play MadLibs! Let's begin. \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        char place[25];
        char animal[25];
        char occupation[25];
        char adjective[25];
        char noun[25];
        char presenttenseverb[25];
        char task[25];
        char emotion[25];
        char celebrity[25];
        char award[25];
        char secondnoun[25];

        printf("Enter a place. \n");
        scanf("%s", place);

        printf("Enter an animal. \n");
        scanf("%s", animal);

        printf("Enter an occupation. \n");
        scanf("%s", occupation);

        printf("Enter an adjective. \n");
        scanf("%s", adjective);

        printf("Enter a noun. \n");
        scanf("%s", noun);

        printf("Enter a present-tense verb. \n");
        scanf("%s", presenttenseverb);

        printf("Enter a task. \n");
        scanf("%s", task);

        printf("Enter an emotion. \n");
        scanf("%s", emotion);

        printf("Enter a celebrity's first or last name. \n");
        scanf("%s", celebrity);

        printf("Enter an award. \n");
        scanf("%s", award);

        printf("Enter a noun. \n");
        scanf("%s", secondnoun);

        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf("Your story: \n"); 
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf("Yesterday was like any typical day in %s. ", place);
        printf("I woke up, walked the %s, ", animal);
        printf("showered, and then headed off to go do some %s. ", occupation);
        printf("The weather was honestly %s. I actually couldn't believe it. ", adjective);
        printf("It reminded me of my %s. That made me really miss home. ", noun);
        printf("But that feeling quickly vanished as I realized that today was the day that I was finally going to %s ", presenttenseverb);
        printf("my %s! ", task);
        printf("I couldn't have been more %s. ", emotion);
        printf("And on top of that, %s was going to present my ", celebrity);
        printf("%s to me! ", award);
        printf("I felt extremely accomplished as well as excited for the next %s that lay ahead. Who knows what the future will bring? \n", secondnoun);
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");

}

    if (response == 'e') {

        printf("Good game! Come back soon! \n");
        break;
}

}

return 0;

}
void displayArray(int a[])
{ 
     int i;
     for (i=1; i<=7; i++)
     {
         printf("%d\t%d\t%d\n",a[i],a[i+7],a[i+14]);
     }
 }