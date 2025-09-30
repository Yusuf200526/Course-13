//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

#include <iostream>
#include "clsMyString.h"

using namespace std;

int main()
{

    cout << "\n\n\t\t\t\t\t\t Undo/Redo Project\n\n";

    clsMyString S1;

    S1.Value = "Mohamad";

    cout << S1.Value;
    cout << endl << S1.Value;

    S1.Value = "Ali";

    cout << endl << S1.Value;

    S1.Undo();

    cout << endl << S1.Value;
    
    S1.Undo();

    cout << endl << S1.Value;

    S1.Redo();

    cout << endl << S1.Value;

    S1.Redo();

    cout << endl << S1.Value;


    system("pause>0");

    return 0;
}

