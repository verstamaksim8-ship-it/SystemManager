#include <iostream>
#include <conio.h>
#include <windows.h>

void off() {
    system("shutdown /s /t 10");
}

void reset_system() {
    system("shutdown /r /t 0");
}

void night_work() {
    system("rundll32.exe powrprof.dll,SetSuspendState 0,1,0");
}

int main() {
	setlocale(LC_ALL, "RU");

    std::cout << R"( 
             ________       ___    ___ ________  _________  _______   _____ ______      
            |\   ____\     |\  \  /  /|\   ____\|\___   ___\\  ___ \ |\   _ \  _   \    
            \ \  \___|_    \ \  \/  / | \  \___|\|___ \  \_\ \   __/|\ \  \\\__\ \  \   
             \ \_____  \    \ \    / / \ \_____  \   \ \  \ \ \  \_|/_\ \  \\|__| \  \  
              \|____|\  \    \/  /  /   \|____|\  \   \ \  \ \ \  \_|\ \ \  \    \ \  \ 
                ____\_\  \ __/  / /       ____\_\  \   \ \__\ \ \_______\ \__\    \ \__\
               |\_________\\___/ /       |\_________\   \|__|  \|_______|\|__|     \|__|
               \|_________\|___|/        \|_________|                                   
                                                                            
)";
    std::cout << "                                                                   by VERSTA" << std::endl;

    std::cout << "                  +--------------+     +-----------------+     +-----------------+" << std::endl;
    std::cout << "                  | 1.Выключение |     | 2. Перезагрузка |     | 3. Спящий режим |" << std::endl;
    std::cout << "                  +--------------+     +-----------------+     +-----------------+" << std::endl;
    std::cout << "Нажмите нужную клавишу";

    while (true) {
        int claw_user = _getch();
        if (claw_user == '1') {
            off();
        }
        else if (claw_user == '2') {
            reset_system();
        }
        else if (claw_user == '3') {
            night_work();
        }
    }

	return 0;
}