#include <slankengine/slankengine.h>


int main() {

    Screen screen(800, 800, "slankengine window");

    screen.setBackgroundColor(RGBA{25, 25, 45, 255});

    while (screen.isRunning) {
        screen.Update();
    }
    
    return 0;
}