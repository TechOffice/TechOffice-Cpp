#include <iostream>
#include <gtk/gtk.h>


int main(){
	std::cout << "Testing" << std::endl;

    GtkWidget *window;
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_widget_show (window);

    gtk_main ();

    return 0;

}
