#include<iostream> //para entrada y salida de terminal
//#include<conio> 
using namespace std; //para usar el dominio de la salida standar

int suman(int n){
    int result=0,aux=0,i=0;
    //clrscr();
    while (i < n )
    {
        cout << "ingrese el " << (i + 1) << "-esimo numero \n";
        cin >> aux;
        result = result + (int) aux;
        i = i + 1;
    }
    //getch();
    return result;
}

int restan(int n){
    int result=0,aux=0,i=0;
    while (i < n )
    {
        cout << "ingrese el " << (i + 1) << "-esimo numero \n";
        cin >> aux;
        result = result - (int) aux;
        i = i + 1;
    }
    return result;
}

int multiplican(int n){
    int result=0,aux=0,i=0;
    while (i < n )
    {
        cout << "ingrese el " << (i + 1)  << "-esimo numero \n";
        cin >> aux;
        result = result * (int)aux;
        i = i + 1;
    }
    return result;
}

float dividi2(int x,int y){
    return x/y;
}

float dividi3(int x,int y,int z){
    return (x/y)/z;
}

int factorialIterativo(int n){
    int i = 1;
    int result = 1;
    while (i <= n)
    {
        result = result * i;
        i = i + 1;
    }
    return result;
}

int factorialRecursivo(int n){
    if (n == 1)
    {
        return 1;
    }
    return (n * factorialRecursivo(n-1));
}

int fibonacciIterativo(int n){
    int i = 2;
    int pp = 0;
    int result = 1;
    int aux;
    while (i <= n)
    {
        aux = result;
        result = result + pp;
        pp = aux;
        i = i + 1;
    }
    return result;
}

int fibonacciRecursivo(int n){
    if (n <= 1)
    {
        return n;
    }
    return (fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2));
}

//es lo que se ejecuta tras compilar 
int main() {
    cout << "Calculadora de C++ \n";
    int choice,n,x,y,z,aux;
    while (true)
    {
        cout << "Elija una operacion : \n";
        cout << "[1] sumar n numeros \n";
        cout << "[2] restar n numeros \n";
        cout << "[3] multiplicar n numeros \n";
        cout << "[4] dividir 2 numeros \n";
        cout << "[5] dividir 3 numeros \n";
        cout << "[6] Factorial de un numero iterativo \n";
        cout << "[7] Factorial de un numero recursivo \n";
        cout << "[8] El n-esimo numero de Fibonacci iterativo \n";
        cout << "[9] El n-esimo numero de Fibonacci recursivo \n";
        cin >> aux;
        //hice esto para evitar que iterara en bucle loco cuando recibe algo que no sea un numero pero no funciono :'(
        choice = (int) aux;
        switch(choice){
            case 1:
                //implementar
                cout << "ingrese la cantidad de enteros que quiere sumar\n";
                cin >> aux;
                n = (int) aux;
                cout << suman(n) << endl;
                break;
            case 2:
                //implementar
                cout << "ingrese la cantidad de enteros que quiere restar\n";
                cin >> aux;
                n = (int) aux;
                cout << restan(n)<< endl;
                break;
            case 3:
                //implementar
                cout << "ingrese la cantidad de enteros que quiere multiplicar\n";
                cin >> aux;
                n = (int) aux;
                cout << multiplican(n)<< endl;
                break;
            case 4:
                //implementar
                cout << "ingrese el primer numero para dividir\n";
                cin >> aux;
                x = (int) aux;
                cout << "ingrese el segundo numero para dividir\n";
                cin >> aux;
                y = (int) aux;
                cout << dividi2(x,y)<< endl;
                break;
            case 5:
                //implementar
                cout << "ingrese el primer numero para dividir\n";
                cin >> aux;
                x = (int) aux;
                cout << "ingrese el segundo numero para dividir\n";
                cin >> aux;
                y = (int) aux;
                cout << "ingrese el tercero numero para dividir\n";
                cin >> aux;
                z = (int) aux;
                cout << dividi3(x,y,z)<< endl;
                break;
            case 6:
                //implementar
                cout << "ingrese el numero a calcular\n";
                cin >> aux;
                n = (int) aux;
                cout << factorialIterativo(n)<< endl;
                break;
            case 7:
                //implementar
                cout << "ingrese el numero a calcular\n";
                cin >> aux;
                n = (int) aux;
                cout << factorialRecursivo(n)<< endl;
                break;
            case 8:
                //implementar
                cout << "ingrese el numero a calcular\n";
                cin >> aux;
                n = (int) aux;
                cout << fibonacciIterativo(n)<< endl;
                break;
            case 9:
                //implementar
                cout << "ingrese el numero a calcular\n";
                cin >> aux;
                n = (int) aux;
                cout << fibonacciRecursivo(n)<< endl;
                break;
            default:
                cout << "Valor incorrecto ingrese de nuevo\n";
                //n = 0;
        }
    }
    





    
    return 1;
}