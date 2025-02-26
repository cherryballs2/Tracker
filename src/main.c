#include "config.h"
#if GUI == GTK
#include "gui-gtk.h"
#endif

int main() {
    init_gui(); 
    while  (1) {
        // Main Loop
    }
    return 0;
}