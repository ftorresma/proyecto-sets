#include <iostream>

using namespace std;


void printNTimes ( char * msg = " \ n", int n = 1)
{
    for ( int i = 0; i < n ; ++ i )
    {
        cout << msg <<endl;
    }
}

int main()
{
    char *lista=new char[5];
    lista="hola mundo";
    printNTimes();
    delete lista;
}
