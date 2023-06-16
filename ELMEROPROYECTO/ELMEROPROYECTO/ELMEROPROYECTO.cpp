// ELMEROPROYECTO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    
    int ans1, ans2;
    bool b = false;

    cout << "BIENVENDIOS A MI HISTORIA NARRADA" << endl;
    cout << "Selecciona el número de opcion para seguir la historia" << endl;
    system("pause");
    system("cls");

    cout << "Un día te quedaste con tus abuelos debido a que tus padres salieron de la ciudad por cuestiones de trabajo." << endl;
    cout << "Te despiertas porque te da frío por lo que te acercas a la ventana a cerrarla pero ves que el porton esta abierto, " << endl;
    cout << "asi que bajas las escaleras para ir a revisar pero te das cuenta que tu abuela esta en el suelo sin vida y por ningun lado esta tu abuelo." << endl;
    cout << "Buscas el telefono de casa en la cocina y te das cuenta que no tienen señal, no entran ni salen llamadas." << endl;
    cout << "Vas al cuarto de tus abuelos porque recuerdas que tu abuelo tiene su arma de servicio en en una cajonera pero cuando llegas te das cuenta que no esta el arma." << endl;
    cout << "Corres de nuevo a donde el cadaver de tu abuela para darte cuenta que tambien desaparecio" << endl;
    cout << "No consigues entrar en razon por todo lo que pasaste en cuestion de minutos cuando escuchas que algo cae en el sotano." << endl;
    do {
        cout << "Volteas a donde la puerta del sotano... Que decides hacer? " << endl;
        cout << "1. Abrirla. 2. Regresar a tu cuarto. " << endl;
        b = false;
        cin >> ans1;
        cout << "" << endl;
        switch (ans1)
        {
        case 1:
            cout << "Por mas que intentas abrir la puerta te das cuenta que esta trabada." << endl;
            b = true;
            break;
        case 2:
            cout << "Corres a tu cuarto para buscar una forma de poder comunicarte con alguien" << endl;
            cout << "Por mas que buscas tu celular no recuerdas que no hay linea telefonica pero sigues en la busqueda." << endl;
            cout << "Logras encontrar el celular para darte cuenta que tampoco tienes señal y no te queda mucha bateria por lo que decides conectarlo." << endl;
            cout << "Bajas a la cocina por un cuchillo en caso de que necesites defenderte pero al hacerlo te das cuenta que ahi esta tu abuela preparando bocadillos como si nada" << endl;
            cout << "Te acercas por su espalda y al tocar su hombro se gira para darte cuenta que no tiene ojos, y que su lengua fue reemplazada por una serpiente" << endl;
            cout << "Corres al otro lado de la cocina y tomas el primer cuchillo a tu alcance para regresar al cuarto y ver que tal va la bateria de tu celular" << endl;
            cout << "Tu celular tiene bateria suficiente para realizar una llamada pero tienes que ir a un lugar con cobertura, por lo que decides a salir por la ventana de tu caurto y bajar por las ramas de un arbol" << endl;
            cout << "Bajas el arbol con tanta velocidad que..." << endl;
            cout << "1. Te caes y te lastimas una pierna. 2. Te quedas atorado entre las ramas." << endl;
            cin >> ans1;
            switch (ans1)
            {
            case 1:
                cout << "Por la adrenalina consigues levantarte de inmediato pero te das cuenta que con la caida la pantalla del celular a quedado estrellada pero aun se puede leer un poco." << endl;
                cout << "Conforme avanzas unos metros te das cuenta que los autos de todo el vecindario no tienen ventanas ni parabrisas ya que han sido rotos." << endl;
                cout << "Con caminar unas cuadras mas te das cuenta que no hay luz, los transformadores han reventado y hay hasta postes en llamas." << endl;
                cout << "Escuchas un grito ahogado pidiendo ayuda por lo cual corres en esa direccion sin saber que vas a encontrar." << endl;
                cout << "Conforme te acercas sacas el cuchillo en caso de que tengas que defenderte pero te das cuenta que es un chico indefenso debajo de un poste que ha caido por la explosion de un transformador" << endl;
                cout << "Te acercas para ayudarle y sacarle de ahi abajo, pero te das cuenta que uno de los cables de alta tension le ha atravesadp el muslo por completo, solo es cuestion de momentos para que muera desangrado en caso de que haga un mal movimiento o quieran reitrar el cable." << endl;
                cout << "Buscas la forma de poder hacerle un torniquete, cortas parte de tu camiseta y se la atas por encima de la herida en la pierna para que así corte algo la circulacion de la sangre y evite perder mas tan rapido." << endl;
                cout << "Te pregunta si sabes que ha pasado y no sabes que contestarle, asi que solo le dices que hay que salir de ahi para poder hacer una llamada para que les busquen." << endl;
                cout << "Te pregunta si estas solo a lo que contestas que si, pero es ahi cuando intenta quitarte el cuchillo, forcejean hasta que " << endl;
                cout << "1. El se queda el cuchillo 2. Tu te quedas con el cuchillo" << endl; 
                cin >> ans1;
                switch (ans1)
                {
                case 1:
                    cout << "Ves que el tiene el cuchillo para comenzar a sentir como se humedece tu camiseta, te ha apuñalado" << endl;
                    cout << "Quedas tendido en el suelo y te desangras hasta morir. Te despiertas agitado y te das cuenta que todo fue una pesadilla." << endl;
                    break; 
                case 2:
                    cout << "Te quedas con el cuchillo y lo ves lleno de sangre y luego ves tendido a aquel chico." << endl;
                    cout << "Te acercas para darte cuenta que se le clavo el cuchillo directamente en el abdomen y ya no tienes nada que hacer ahi, se va a desangrar" << endl;
                    cout << "Sigues tu camino en busca de una zona donde tengas cobertura para realizar una llamada cuando entre todo un vecindarion sin luz te das cuenta que de una casa se ve que tiene luz por las ventanas que estan abiertas" << endl;
                    cout << "Que haces en ese caso?" << endl;
                    cout << "1. Vas a la casa 2. Te da tanto miedo que tenga luz que sigues tu camino." << endl;
                    cin >> ans1;
                    switch (ans1)
                    {
                    case 1:
                        cout << "Entraste en una casa con trampas que no pudiste esquivar" << endl;
                        cout << "Mueres por golpes y hemorragias internas. Te despiertas y te das cuenta que todo fue una pesadilla" << endl; 
                        break;
                    case 2:
                        cout << "Sigues tu camino para darte cuenta que con solo unos metros mas ya tienes cobertura para hacer una llamada" << endl;
                        cout << "Llamas a tu madre para darte cuenta que no contesta, las llamadas van directamente a buzon de voz, pero a lo lejos logras divisar un camion que va en direccion a ti." << endl;
                        cout << "Te atropella y te despiertas de golpe para darte cuenta que todo fue un sueño" << endl; 
                        break;
                    default:
                        break;
                    }
                default:
                    break;
                }
                break;
            case 2:
                cout << "Buscas la forma de bajar y solo consigues raspones y lesiones por las ramas" << endl;
                cout << "Cada vez mas cerca de conseguir liberarte de las ramas" << endl;
                cout << "Caes de una altura tan alta que te rompes una cantidad de huesos inimaginable" << endl;
                cout << "Ves como llegan tus abuelos a verte morir" << endl;
                cout << "Despiertas empapado en sudor y te das cuenta que todo fue un sueño." << endl; 
                break;
            default:
                break;
            }
        
        }
    } while (b);
} 

