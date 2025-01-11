
#include "include/list.h"

int main(int arg_count, char *args[])
{

    if(arg_count > 1)
    {
        List list;

        list.name = string(args[1]);
        list.print_menu();
    }
    else
    {
        cout << "Username not supplied..exiting the program" << endl;

    }
    return 0;
}
