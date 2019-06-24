#include <ncurses.h>
#include <iostream>
#include "view/Home.hpp"

int main()
{	

    HomeView* home;
	home = HomeView::HomeViewCreate();

	home->render();



	return 0;
}