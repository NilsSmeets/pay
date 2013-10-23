#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string Name;
    int i;
    float Payed;
    char next;
    float Total;
    float Average;
    int Number;
    cout << "Hoeveel personen? ";
    cin >> Number;
    cout << "\n";
    string Names[Number];
    float Money[Number];
    

    for (i=0;i<Number;i++)
    {
          cout << "Naam van de persoon: ";
          cin >> Name;
          Names[i]=Name;
          cout << "\n";
          cout << "Betaald Bedrag: ";
          cin >> Payed;
          Money[i]=Payed;
          cout << "\n";
    }
    for (int j=0;j<i;j++)
    {
        Total=Total+Money[j];
    }
    Average=Total/i;
    for (int j=0;j<i;j++)
    {
        Money[j]=Average-Money[j];
        if (Money[j]>0)
        {
                       cout << Names[j] << " moet nog " << Money[j] << " betalen.";
        }
        else if (Money[j]<0)
        {
             Money[j]=-Money[j];
             cout << Names[j] << " moet nog " << Money[j] << " terug krijgen.";
        }
        else
        {
            cout << Names[j] << " moet nog niets meer betalen.";
        }
        cout << "\n";
    }	
    system("PAUSE");
    return 0;
}
