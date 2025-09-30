#include <stdio.h>
#include <gtk/gtk.h>

static void activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *calculator;
    GtkWidget *numgrid; //the grid for numbers
    GtkWidget *numbut1;//button for 1
    GtkWidget *numbut2;//button for 2
    GtkWidget *numbut3;//button for 3
    GtkWidget *numbut4;//button for 4
    GtkWidget *numbut5;//button for 5
    GtkWidget *numbut6;//button for 6
    GtkWidget *numbut7;//button for 7
    GtkWidget *numbut8;//button for 8
    GtkWidget *numbut9;//button for 9
    GtkWidget *numbut0;//button for 0
    GtkWidget *decimalbut; //button for decimal ( . )
    GtkWidget *clearbut; //button to clear the screen
    GtkWidget *addbut; //button for addition
    GtkWidget *subtractbut; //button for subtraction
    GtkWidget *multiplbut; //button for multiply
    GtkWidget *divisionbut; //button to divide
    GtkWidget *percentbut; //button for percentage thingy



    //Create a new Window
    calculator= gtk_application_window_new (app);

    //Set the title of the window
    gtk_window_set_title (GTK_WINDOW (calculator),"CALCULATOR");
    //Set the size of the window (GTK_WINDOW(window) width, height)
    gtk_window_set_default_size (GTK_WINDOW(calculator), 300, 400);
    //makes the window visible
    gtk_window_present (GTK_WINDOW(calculator));

    numgrid=gtk_grid_new(); //Initializing the Grid
    gtk_window_set_child (GTK_WINDOW (calculator),numgrid);//Setting the grid as a child of the windows or subwindow


    //Initializing the button for 1
    numbut1 = gtk_button_new_with_label("1");
    //Placing the numbut1 on the grid
    gtk_grid_attach(GTK_GRID(numgrid),numbut1,0,0,1,1);

    //Initialising the button for 2
    numbut2 = gtk_button_new_with_label("2");
    //placing the numbut2 on the grid
    gtk_grid_attach(GTK_GRID(numgrid),numbut2,1,0,1,1);

    //Initialising the button for 3
    numbut3 =gtk_button_new_with_label("3");
    //placing the numbut3 on the grid
    gtk_grid_attach(GTK_GRID(numgrid),numbut3,2,0,1,1);

    //Initialising the button for 4
    numbut4 = gtk_button_new_with_label("4");
    //placing the numbut4 on the grid
    gtk_grid_attach(GTK_GRID(numgrid),numbut4,0,1,1,1);

    //Intialising the button for 5
    numbut5 =gtk_button_new_with_label("5");
    //placing the numbut5 on the grid
    gtk_grid_attach(GTK_GRID(numgrid),numbut5,1,1,1,1);

    //Intialising the button for 6
    numbut6 =gtk_button_new_with_label("6");
    //placing the numbut6 on the grid
    gtk_grid_attach(GTK_GRID(numgrid),numbut6,2,1,1,1);

    //Initialising the button for 7
    numbut7 = gtk_button_new_with_label("7");
    //placing the numbut7 on the grid
    gtk_grid_attach(GTK_GRID(numgrid),numbut7,0,2,1,1);

    //Initialising the button for 8
    numbut8 = gtk_button_new_with_label("8");
    //placing the numbut8 on the grid
    gtk_grid_attach(GTK_GRID(numgrid),numbut8,1,2,1,1);

    //Initialsing the button for 9
    numbut9 = gtk_button_new_with_label("9");
    //placing the numbut9 on the grid
    gtk_grid_attach(GTK_GRID(numgrid),numbut9,2,2,1,1);

    //Intialising the button for 0
    numbut0 = gtk_button_new_with_label("0");
    //placing the numbut0 on the grid
    gtk_grid_attach(GTK_GRID(numgrid),numbut0,1,3,1,1);

    //Initialising the button for decimal 9 ( . )
    decimalbut = gtk_button_new_with_label(".");
    //Placing the decimalbut on the grid
    gtk_grid_attach(GTK_GRID(numgrid),decimalbut,0,3,1,1);

    //Intialising the button to clear the display
    percentbut = gtk_button_new_with_label("%");
    //Placing the clear button on the grid
    gtk_grid_attach(GTK_GRID(numgrid),percentbut,2,3,1,1);

    //Initiliasising the button for addition
    addbut = gtk_button_new_with_label("+");
    //Placing the addition button on the grid
    gtk_grid_attach(GTK_GRID(numgrid),addbut,3,0,1,1);


}
//This block is used to initialise the GUI and will be used for only that other work mainly happens in different functions
int main(int argc, char **argv) {
    GtkApplication *app;
    int status;

    app= gtk_application_new ("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
    status = g_application_run (G_APPLICATION (app), argc, argv);
    g_object_unref (app);

    return status;
}
