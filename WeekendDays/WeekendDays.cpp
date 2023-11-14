// EJEMPLO DE UNA ESTRUCTURA "SWITCH" MEDIANTE ENTEROS.

#include <iostream> // LIBRERÍA POR DEFECTO EN ESTE PAQUETE.

using namespace std; // NO OLVIDAR, IMPORTANTE!!!!!!!!!!!!!!!

int main()
{
    // VAMOS A CREAR UN MENÚ PARA DESPLEGAR TODOS LOS DÍAS DE LA SEMANA EN C++.

    int days = 0; // LOS DÍAS DE LA SEMANA SE INICIALIZA EN 0.
    cout << "**********¡¡¡¡¡BIENVENIDO A LA SECCION DE LOS DIAS DE LA SEMANA!!!!!**********" << endl; // DESPLIEGA EL MENÚ DESDE ESTA LÍNEA HASTA LA OPCIÓN FINAL.
    cout << "PARA COMENZAR, ELIGE UNA OPCION!: " << endl;
    cout << "================================" << endl;
    cout << "1.- LUNES, COMO LA LUNA BLANCA" << endl;
    cout << "2.- MARTES, COMO EL PLANETA ROJO" << endl;
    cout << "3.- MIERCOLES, COMO EL MERCURIO" << endl;
    cout << "4.- JUEVES, COMO JUPITER GIGANTE" << endl;
    cout << "5.- VIERNES, COMO VENUS DE MILO" << endl;
    cout << "================================" << endl; // FINAL DEL MENÚ EN ESTA SECCIÓN.
    cin >> days; // DESDE LA VARIABLE YA DECLARADA, LE PREGUNTA AL USUARIO MEDIANTE UN "CONSOLE-IN" PARA INGRESAR UN DÍA CUALQUIERA DE ESTAS OPCIONES MENCIONADAS ANTERIORMENTE.

    // CREAREMOS UNA ESTRUCTURA DEL SWITCH PARA VISUALIZAR UNA RESPUESTA DEPENDIENDO DE LA DECISIÓN QUE INGRESA EL USUARIO DESDE EL MISMO "CONSOLE-IN".

    switch (days)
    {
    case 1: // SI LA OPCIÓN INGRESADA ES EL NÚMERO 1.
        cout << "LUNES" << endl; // ES UN DÍA LUNES.
        break;

    case 2: // SI LA OPCIÓN INGRESADA ES EL NÚMERO 2.
        cout << "MARTES" << endl; // ES UN DÍA MARTES.
        break;

    case 3: // SI LA OPCIÓN INGRESADA ES EL NÚMERO 3.
        cout << "MIÉRCOLES" << endl; // ES UN DÍA MIÉRCOLES.
        break;

    case 4: // SI LA OPCIÓN INGRESADA ES EL NÚMERO 4.
        cout << "JUEVES" << endl; // ES UN DÍA JUEVES.
        break;

    case 5: // SI LA OPCIÓN INGRESADA ES EL NÚMERO 5.
        cout << "VIERNES" << endl; // ES UN DÍA VIERNES.
        break;

    default:
        cout << "ES FIN DE SEMANA O NO EXISTE UNA OPCIÓN INGRESADA, TRY AGAIN!!!!!" << endl;
    }
    return 0;
}


