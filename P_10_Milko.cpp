// 2023_04_24_010_LoginVideojuego.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí. 
 // 

#include <iostream> 
#include <locale.h> 
#include <string>  

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int Opc = 0;
    std::string Password = "test";
    std::string PasswordU;
    std::string Name = "Leon";
    std::string NameU;
    bool Continue = true;
    do {
        std::cout << "Hola usuario! Bienvenido de nuevo!!" << std::endl;
        std::cout << "Selecciona 1)Iniciar sesion 2) Registrarme " << std::endl;
        std::cin >> Opc;
        switch (Opc)
        {
        case 1:
            std::cout << "Ingresa tu nombre de usuario " << std::endl;
            std::cin >> NameU;
            if (Name == NameU)
            {
                std::cout << "Ingresa tu contraseña " << std::endl;
                std::cin >> PasswordU;
                if (Password == PasswordU)
                {
                    std::cout << "Usuario y contraseña correcta, BIENVENIDO!" << std::endl;
                }
                else {
                    std::cout << "Contraseña no encontrada" << std::endl;
                }
            }
            else
            {
                std::cout << "No se encontro el nombre de usuario, porfavor registrate " << std::endl;
            }
            break;
        case 2:
            std::cout << "Bienvenido al registro, inserta tu nuevo nombre de usuario" << std::endl;
            std::cin >> Name;
            std::cout << "Ingresa tu nueva contraseña" << std::endl;
            std::cin >> Password;
            std::cout << "Se ha registrado correctamente" << std::endl;
            break;
        default:
            std::cout << "Porfavor inserte una opcion valida" << std::endl;
        }
        std::cout << "Deseas continuar? 0) No 1) Si" << std::endl;
        std::cin >> Continue;
        std::cout << "camara mi buen " << std::endl;
    } while (Continue);
}