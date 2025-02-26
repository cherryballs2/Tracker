#include "config.h"
#include "gui-gtk.h"
#include <gtk-4.0/gtk/gtk.h>

int init_gui() {
    gtk_init(0, 0);
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Hello World");
    gtk_widget_show(window);
    gtk_main();
    return 0;
}