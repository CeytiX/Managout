#ifndef MANAGOUT_H_INCLUDED
#define MANAGOUT_H_INCLUDED

#include <iostream>
#include <string>

namespace Mng
{
	std::string const COLOR_BLACK 		("\033[2;30m");
	std::string const COLOR_RED 		("\033[2;31m");
	std::string const COLOR_GREEN		("\033[2;32m");
	std::string const COLOR_YELLOW		("\033[2;33m");
	std::string const COLOR_BLUE		("\033[2;34m");
	std::string const COLOR_MAGENTA		("\033[2;35m");
	std::string const COLOR_CYAN		("\033[2;36m");
	std::string const COLOR_GREY		("\033[2;37m");
	
	std::string const COLOR_LIGHTGREY	("\033[0;30m");
	std::string const COLOR_LIGHTRED	("\033[0;31m");
	std::string const COLOR_LIGHTGREEN	("\033[0;32m");
	std::string const COLOR_LIGHTYELLOW	("\033[0;33m");
	std::string const COLOR_LIGHTBLUE	("\033[0;34m");
	std::string const COLOR_LIGHTMAGENTA("\033[0;35m");
	std::string const COLOR_LIGHTCYAN	("\033[0;36m");
	std::string const COLOR_WHITE		("\033[0;37m");
	
	std::string const FONT_BLACK 		("\033[2;40m");
	std::string const FONT_RED 			("\033[2;41m");
	std::string const FONT_GREEN		("\033[2;42m");
	std::string const FONT_YELLOW		("\033[2;43m");
	std::string const FONT_BLUE			("\033[2;44m");
	std::string const FONT_MAGENTA		("\033[2;45m");
	std::string const FONT_CYAN			("\033[2;46m");
	std::string const FONT_GREY			("\033[2;47m");
	
	std::string const FONT_LIGHTGREY	("\033[0;40m");
	std::string const FONT_LIGHTRED		("\033[0;41m");
	std::string const FONT_LIGHTGREEN	("\033[0;42m");
	std::string const FONT_LIGHTYELLOW	("\033[0;43m");
	std::string const FONT_LIGHTBLUE	("\033[0;44m");
	std::string const FONT_LIGHTMAGENTA	("\033[0;45m");
	std::string const FONT_LIGHTCYAN	("\033[0;46m");
	std::string const FONT_WHITE		("\033[0;47m");
	
	std::string const EFFECT_VOID		("\033[0m");
	std::string const EFFECT_BOLD		("\033[1m");
	std::string const EFFECT_UNDERLINED	("\033[4m");
	std::string const EFFECT_REVERSE	("\033[7m");
	std::string const EFFECT_STRIPED	("\033[9m");
	std::string const EFFECT_CLEAR		("\033[2J;\033[1;1H");
	
	void set(std::string effet)
	{
		std::cout << effet;
	}
}

#endif
