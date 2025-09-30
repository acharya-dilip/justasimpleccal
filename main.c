#include <stdio.h>
#include <gtk/gtk.h>



static void activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *calculator;
    GtkWidget *displaybar; //a display bar to see what's happening
    GtkWidget *calbuttongrid; //the grid for buttons
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
    GtkWidget *multiplybut; //button for multiply
    GtkWidget *dividebut; //button to divide
    GtkWidget *percentbut; //button for percentage thingy
    GtkWidget *resultbut; //button for getting the result
    GtkWidget *modbut; //button for mod operation or getting remainder operation
    GtkWidget *squarebut; //button for squaring



    //Create a new Window
    calculator= gtk_application_window_new (app);

    //Set the title of the window
    gtk_window_set_title (GTK_WINDOW (calculator),"CALCULATOR");
    //Set the size of the window (GTK_WINDOW(window) width, height)
    gtk_window_set_default_size (GTK_WINDOW(calculator), 200, 240);
    //makes the window visible
    gtk_window_present (GTK_WINDOW(calculator));

    calbuttongrid=gtk_grid_new(); //Initializing the calbutton grid Grid
    gtk_window_set_child (GTK_WINDOW (calculator),calbuttongrid);//setting the main grid ass the child of main window

    //DISPLAY BAR

    //initialising display bar
    displaybar = gtk_entry_new();
    //Making the entry ready-only so you can't directly type stuff into it
    gtk_editable_set_editable(GTK_EDITABLE(displaybar),FALSE);
    //Placing displaybar on grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),displaybar,0,0,4,1);


    //PROTOTYPE helper for BUTTONS that move them in entire rows or columns together
    int moverow = 2;
    int movecol = 0;

    //BASIC ARITHMATIC OPERATORS
    //Initiliasising the button for addition
    addbut = gtk_button_new_with_label("+");
    //Placing the addition button on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),addbut,3+movecol,0+moverow,1,1);

    //Init for subtract button
    subtractbut = gtk_button_new_with_label("-");
    //Placing the button on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),subtractbut,3+movecol,1+moverow,1,1);

    //Init for Multiply button
    multiplybut = gtk_button_new_with_label("×");
    //placing the multiply button on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),multiplybut,3+movecol,2+moverow,1,1);

    //Init for divide button
    dividebut = gtk_button_new_with_label("÷");
    //Placing the divide button on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),dividebut,3+movecol,3+moverow,1,1);


    //THE NUMBER BUTTONS

    //Initializing the button for 1
    numbut1 = gtk_button_new_with_label("1");
    //Placing the numbut1 on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),numbut1,0+movecol,1+moverow,1,1);

    //Initialising the button for 2
    numbut2 = gtk_button_new_with_label("2");
    //placing the numbut2 on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),numbut2,1+movecol,1+moverow,1,1);

    //Initialising the button for 3
    numbut3 =gtk_button_new_with_label("3");
    //placing the numbut3 on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),numbut3,2+movecol,1+moverow,1,1);

    //Initialising the button for 4
    numbut4 = gtk_button_new_with_label("4");
    //placing the numbut4 on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),numbut4,0+movecol,2+moverow,1,1);

    //Intialising the button for 5
    numbut5 =gtk_button_new_with_label("5");
    //placing the numbut5 on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),numbut5,1+movecol,2+moverow,1,1);

    //Intialising the button for 6
    numbut6 =gtk_button_new_with_label("6");
    //placing the numbut6 on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),numbut6,2+movecol,2+moverow,1,1);

    //Initialising the button for 7
    numbut7 = gtk_button_new_with_label("7");
    //placing the numbut7 on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),numbut7,0+movecol,3+moverow,1,1);

    //Initialising the button for 8
    numbut8 = gtk_button_new_with_label("8");
    //placing the numbut8 on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),numbut8,1+movecol,3+moverow,1,1);

    //Initialsing the button for 9
    numbut9 = gtk_button_new_with_label("9");
    //placing the numbut9 on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),numbut9,2+movecol,3+moverow,1,1);

    //Intialising the button for 0
    numbut0 = gtk_button_new_with_label("0");
    //placing the numbut0 on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),numbut0,1+movecol,4+moverow,1,1);

    //OTHER MISC BUTTONS

    //init of clear display button
    clearbut = gtk_button_new_with_label("C");
    //Placing clearbutton on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),clearbut,0+movecol,0+moverow,1,1);

    //init of square button
    squarebut = gtk_button_new_with_label("x²");
    //placing the square button on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),squarebut,1+movecol,0+moverow,1,1);

    //init of MOD button
    modbut = gtk_button_new_with_label("mod");
    //placing mod button on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),modbut,2+movecol,0+moverow,1,1);

    //Initialising the button for decimal ( . )
    decimalbut = gtk_button_new_with_label(".");
    //Placing the decimalbut on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),decimalbut,0+movecol,4+moverow,1,1);

    //Intialising the button to clear the display
    percentbut = gtk_button_new_with_label("%");
    //Placing the clear button on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),percentbut,2+movecol,4+moverow,1,1);

    //Init for the = or the result button
    resultbut = gtk_button_new_with_label("=");
    //Placing button on the grid
    gtk_grid_attach(GTK_GRID(calbuttongrid),resultbut,3+movecol,4+moverow,1,1);



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
