#include<iostream
>
using namespace std;

int main()
{
    int x[3][3], z[3][3], c[3][3];
    
    cout << "PRIMERA MATRIZ " << endl << endl;
    cout << "Ingrese los elementos de la matriz: " << endl;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> x[i][j];
        }
    }
    
    cout << "SEGUNDA MATRIZ " << endl << endl;
    cout << "Ingrese elementos: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> z[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                c[i][j] += x[i][k] * z[k][j];
            }
        }
    }
    
    cout << "\nMatriz A:      Matriz B:      Resultado: " << endl;
    for (int i = 0; i < 3; i++)
    {
    	
        for (int j = 0; j < 3; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << "         "; 
        
        
        for (int j = 0; j < 3; j++)
        {
            cout << z[i][j] << " ";
        }
        cout << "         ";
        
       
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

