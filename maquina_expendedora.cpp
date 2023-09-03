#include <iostream>
#include <string>

int menu1 () { //menu principal

        std::string seleccion;

        std::cout << "T para tipos de chocolates" << std::endl;
        std::cout << "R para tipos de refrescos" << std::endl;
        std::cout << "P para tipos de papas" << std::endl;
        std::cout << "C Salir" << std::endl;
        std::cin>>seleccion;


    if (seleccion == "T" || seleccion=="t") {
       return 1;

    } else if (seleccion == "R" || seleccion=="r"){
        return 2;

    } else if (seleccion == "P"||seleccion=="p"){
        return 3;

    }else if (seleccion == "C"|| seleccion == "c"){
        return 0;
    }
    else { return 4;}
}

int chocolates(int selecc2) { //menu de chocolates

    if (selecc2 == 1) { //KITKATS
        double kitkat;
        std::cout << "1.1 Kitkat clásico" << std::endl;
        std::cout << "1.2 Kitkat dark" << std::endl;
        std::cout << "1.3 Kitkat white" << std::endl;
        std::cout << "1.4 Kitkat chunky" << std::endl;
        std::cin >> kitkat;

        if (kitkat != 1.1 && kitkat != 1.2 && kitkat != 1.3 && kitkat != 1.4) {
            std::cout << "Inválido" << std::endl;
            return 0; //si no elige una opción válida
            }

        std::cout << "Despachando " << kitkat << "..." << std::endl;
        std::cout << "Listo. Gracias por su compra" << std::endl;

    } else if (selecc2 == 2) { //M&&M's
        double MyM;
        std::cout << "2.1 M&M's clásicos" << std::endl;
        std::cout << "2.2 M&M's cacahuate" << std::endl;
        std::cin >> MyM;

        if (MyM != 2.1 && MyM != 2.2) {
            std::cout << "Inválido" << std::endl;
            return 0; //si no elige una opción válida
            }

        std::cout << "Despachando " << MyM << "..." << std::endl;
        std::cout << "Listo. Gracias por su compra" << std::endl;

    } else if (selecc2 == 3) { //Hershey's
            double Hershey;
            std::cout << "3.1 Hershey obscuro" << std::endl;
            std::cout << "3.2 Hershey blanco" << std::endl;
            std::cin >> Hershey;

            if (Hershey != 3.1 && Hershey != 3.2) {
                std::cout << "Inválido" << std::endl;
                return 0; //si no elige una opción válida
            }

            std::cout << "Despachando " << Hershey << "..." << std::endl;
            std::cout << "Listo. Gracias por su compra" << std::endl;
        }
}


int refrescos(){ //menu de refrescos

    std::cout << "1 Coca cola light" << std::endl;
    std::cout << "2 Coca cola normal" << std::endl;
    std::cout << "3 Manzanita" << std::endl;
    std::cout << "4 Sprite" << std::endl;
    int refresco;
    std::cin >> refresco;

    if (refresco != 1 && refresco != 2 && refresco != 3 && refresco != 4){
        std::cout << "Inválido" << std::endl; return 0; //si no elige una opción válida
    }

    std::cout << "Despachando " << refresco << "..." <<std::endl;
    std::cout << "Listo. Gracias por su compra" << std::endl;

}

int main() {

    std::string in{"si"}; //Para que el user siga comprando, esto es extra

    while (in == "si"|| in == "Si" ||in =="SI") {

        int seleccion(menu1()); // Guarda lo que menu1 arroje en una variable

        if (seleccion == 1) { //Si elige chocolates
            int selecc2;
            std::cout << "1. Tipos de Kitkat" << std::endl;
            std::cout << "2. Tipos de M&M's" << std::endl;
            std::cout << "3. tipos de Hershey's" << std::endl;
            std::cin >> selecc2;

            if (selecc2 != 1 && selecc2 != 2 && selecc2 != 3){
                std::cout << "Inválido" << std::endl;
            }

            chocolates(selecc2);

        } else if (seleccion == 2) { //si elige refrescos

            refrescos();

        } else if (seleccion == 3) { //si elige papas
            std::cout << "Lo sentimos, no hay papas" << std::endl;

        } else if (seleccion ==0){ //si elige salir desde el inicio
            std::cout << "Hasta luego"<< std::endl;
            exit(0);

        } else { //si no elige un menu válido
            std::cout << "Inválido" << std::endl;
        }

        std::cout << "Quiere hacer otra elección?: Si, No"<< std::endl;
        std::cin >> in; //Esto se repite hasta que no elija si

    }

    std::cout << "Hasta luego"<< std::endl;
    return 0;
}
