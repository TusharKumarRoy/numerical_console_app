#include<bits/stdc++.h>
#include "Non_Linear_Equations/Bisection.hpp"
#include "Non_Linear_Equations/FalsePosition.hpp"
#include "Non_Linear_Equations/Secant.hpp"
#include "Non_Linear_Equations/NewtonRaphson.hpp"

using namespace std;

void Linear()
{
    cout << endl;
    cout << endl;
    cout << "=>=>=>=>=>=>=>=>=>=>>=> Linear Methods <=<=<=<=<=<=<=<=<=<=<="<< endl;   
    cout << "  1. Jacobi Iterative             2. Gauss Seidel Iterative" << endl;
    cout << "  3. Gauss Elimiantion            4. Gauss Jordan Eliminaiton" << endl;
    cout << "  5. LU Factorization             6. Go Back" <<endl;
    cout << "  7. Exit" << endl;
    cout << endl;

    string choice;

    while(true)
    {
        cout << "choice : ";
        cin >> choice;
        cout << endl;
        if(choice != "1" && choice != "2" && choice != "3" && choice != "4" && choice != "5" && choice != "6" && choice != "7")
            cout << "Invalid choice . Please enter a valid choice : " << endl;
        else
            break;
        
    }

    switch(choice[0])
    {
        case '1':
            //Jacobi();
            break;
        case '2':
            //Gauss_Seidel();
            break;
        case '3':
            //Gauss_Elimination();
            break;
        case '4':
            //Gauss_Jordan();
            break;
        case '5':
            //LU_Factorization();
            break;
        case '6':
            return;
        case '7':
            exit(0);

    }

}

void Non_Linear()
{
    cout << endl;
    cout << endl;
    cout << "=>=>=>=>=>=>=>=>=> Non Linear Methods <=<=<=<=<=<=<=<="<< endl;   
    cout << "  1. Bisection Method      2. False Position Method" << endl;
    cout << "  3. Secant Method         4. Newton Raphson Method" << endl;
    cout << "  5. Go Back               6. Exit" << endl;
    cout << endl;

    string choice;

    while(true)
    {
        cout << "choice : ";
        cin >> choice;
        cout << endl;
        if(choice != "1" && choice != "2" && choice != "3" && choice != "4" && choice != "5" && choice != "6")
            cout << "Invalid choice . Please enter a valid choice! " << endl;
        else
            break;
        
    }

    switch(choice[0])
    {
        case '1':
            bisection();
            break;
        case '2':
            falsePosition();
            break;
        case '3':
            callSecant();
            break;
        case '4':
            callNewtonRaphson();
            break;
        case '5':
            return;
        case '6':
            exit(0);

    }
}

void Matrix()
{
    cout << endl;
    cout << endl;
    cout << "=>=>=>=>=>=>=>=>=> Matrix Operations <=<=<=<=<=<=<=<="<< endl;   
    cout << "  1. Inverse Matrix         2. Go Back       3. Exit  "<< endl;
    cout << endl;

    string choice;

    while(true)
    {
        cout << "choice : ";
        cin >> choice;
        cout << endl;
        if(choice != "1" && choice != "2" && choice != "3" )
            cout << "Invalid choice . Please enter a valid choice" << endl;
        else
            break;
        
    }

    switch(choice[0])
    {
        case '1':
            //Matrix_Inverse();
            break;
        case '2':
            return;
        case '3':
            exit(0);
    }

}

void Differential_Eqn()
{
    cout << endl;
    cout << endl;
    cout << "=>=>=>=>=>=>=>=> Differential Methods <=<=<=<=<=<=<=<=<="<< endl;   
    cout << "  1. Runge Kutta Method       2. Go Back       3. Exit  "<< endl;
    cout << endl;

    string choice;

    while(true)
    {
        cout << "choice : ";
        cin >> choice;
        cout << endl;
        if(choice != "1" && choice != "2" && choice != "3")
            cout << "Invalid choice . Please enter a valid choice" << endl;
        else
            break;
    }

    switch(choice[0])
    {
        case '1':
            //Runge_Kutta();
            break;
        case '2':
            return;
        case '3':
            exit(0);
    }

}

int main()
{
    cout << endl;
    cout << endl;
    cout << "=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>" << endl;
    cout << "Welcome To The Ultimate Console App for Numerical Methods" << endl;
    cout << "<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=<=" << endl;
    cout << endl;

    while(true)
    {
        cout << endl;
        cout << "=>=>=>=>=>=>=>=>=>=>=>=> Main Menu <=<=<=<=<=<=<=<=<=<=<=<="<< endl;
        cout << endl;
        cout << "  1. Linear Equations            2. Non Linear Equations" << endl;
        cout << "  3. Differential Equations      4. Matrix" << endl;
        cout << "  5. Exit" << endl;
        cout << endl;
        
        string choice;
        
        while(true)
        {
            cout << "choice : ";
            cin >> choice;
            cout << endl;

            if(choice != "1" && choice != "2" && choice != "3" && choice != "4" && choice != "5")
                cout << "Invalid choice . Please enter a valid choice !" << endl;
            else
                break;
            
        }

        switch(choice[0])
        {
            case '1':
                Linear();
                break;
            case '2':
                Non_Linear();
                break;
            case '3':
                Differential_Eqn();
                break;
            case '4':
                Matrix();
                break;
            case '5':
                exit(0);

        }
    }
    
    return 0;
}