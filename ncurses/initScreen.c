#include <ncurses.h>

int main(){
  char letter;

  initscr();
  printw("Press Any Key..");
  refresh();

  letter = getch();
  clear();
  printw("You Pushed: '%c'",letter);
  refresh();

  getch();
  endwin();

  return 0;
}
