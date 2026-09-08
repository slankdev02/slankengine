#include <slankengine/slankengine.h>
#include <iostream>

int main() {

    Screen screen(800, 800, "slankengine window");

    RGBA backgroundColor{25, 25, 35, 255};
    screen.setBackgroundColor(backgroundColor);

    while (screen.isRunning) {
        screen.Update();
    }
    
    return 0;
}