#include <ncurses.h>
#include <iostream>


int main()
{	
	initscr();			/* Start curses mode 		  */
    WINDOW * win = newwin(1, 15, 5, 5);
    printw("\t\t\tBem vindo ao Sistema.");
    refresh();
    wprintw(win, "AGORA VAI!");
    wrefresh(win);

    int ch;
    
    for(;;){
        if(!((ch=getch())== 'y')){
            printw("Trollo\n");
        }
        else
        {
            printw("Boa");
            break;
        }
        refresh();
    }

	
	endwin();			/* End curses mode		  */

	return 0;
}