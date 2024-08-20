#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*User Defined GameStatus Variables*/
enum GameStatus {CONTINUE,GAME_WON,GAME_LOST};

/*User Defined Round Status Variables*/
enum RoundStatus {DRAW,WON,LOST};

/*User Defined Possible shapes variable*/
enum Shape {ROCK,PAPER,SCISSORS};

/*Function Prototype*/
enum Shape computerPlayRandomShape(void);
enum RoundStatus getRoundStatus(enum Shape,enum Shape);
enum Shape convertIntToShape(int);
char* getStringFromShape(enum Shape);


/*main function*/
int main(void){
  /*Randomization based on the Current Time*/
  srand(time(NULL)); 
  enum GameStatus gameStatus = CONTINUE;
  /*Best of 3 game*/
  int bestOfN=3;
  /*Wining Thresold*/
  int winThresold=(bestOfN/2)+1;


  /*Decleare win count for both player and Computer*/
  int playerWinCount = 0;
  int computerWinCoint = 0;

  int roundNum=0;


  /*while game not complete*/
  while(CONTINUE==gameStatus){
    printf("=========================Round==> %d===========================",roundNum+1);
    printf("%s","Enter 0 (ROCK),1 (PAPER),2 (SCISSOR)");

    int playerShapeInt=-1;
    scanf("%d",&playerShapeInt);

    enum Shape playerShape = convertIntToShape(playerShapeInt);

    enum Shape computerShape = computerPlayRandomShape();

    enum RoundStatus roundStatus = getRoundStatus(playerShape,computerShape);

    switch(roundStatus){
      case DRAW:
        printf("It is a draw\n");
        break;
      case WON:
        printf("Player Won\n");
        /*increament the winCount*/
        if(++playerWinCount == winThresold){
          gameStatus = GAME_WON;
        }
        break;
       case LOST:
        printf("Player Lost \n");
        if (++computerWinCoint == winThresold){
          gameStatus = GAME_LOST;
        }
        break;
    }
    
  }

  switch (gameStatus){
    case GAME_WON:
      printf("**Best of %d games is WON by Player**\n",bestOfN);
      break;
    case GAME_LOST:
      printf("** Best of %d game is WON by the Computer**\n",bestOfN);
      break;
    case CONTINUE:
    default:
      printf("Error!\n");
  }
  return 0;
}

enum Shape computerPlayRandomShape(void){
  enum Shape randomShape = convertIntToShape(rand() % 3);
  printf("Computer Player %s\n",getStringFromShape(randomShape));
  return randomShape;
}

enum RoundStatus getRoundStatus(enum Shape playerShape, enum Shape computerShape){
  if (playerShape == computerShape) {
    return DRAW;
  }else if ((playerShape == ROCK && computerShape == SCISSORS)
        || (playerShape == SCISSORS && computerShape == PAPER)
        || (playerShape == PAPER && computerShape == ROCK)){
    return WON;
        }else {
      return LOST;
        }
}

enum Shape convertIntToShape(int shapeValue){
  return (enum Shape) shapeValue;
}

char * getStringFromShape(enum Shape shape){
  switch(shape){
    case ROCK:
      return "ROCK";
    case PAPER:
      return "PAPER";
    case SCISSORS:
      return "SCISSORS";
  }
  return "";
}
