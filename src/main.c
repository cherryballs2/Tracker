#include "config.h"
#if gui == SDL
#include "gui-sdl.h"
#endif
int main() {
    init_gui(); 
    while  (1) {
        // Main Loop
    }
    return 0;
}