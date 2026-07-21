#include <iostream>

int main()
{
    //definindo as struct's "Square" e "Map"
    struct Square
    {
        int x, y;
    };

    //mapa de 50x50
    struct Map
    {
        int x = 50;
        int y = 50;
    };

    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            std::cout << ".";
        }
        std::cout << "\n";
    }

    //criando instancias do tipo Square
    Square start;
    Square end;

    //recebendo os valores para as instancias 'start' e 'end'
    std::cout << "Enter the coordinates of the starting point\n (x): ";
    std::cin >> start.x;
    std::cout << " (y): ";
    std::cin >> start.y;

    std::cout << "Enter the coordinates of the ending point\n (x): ";
    std::cin >> end.x;
    std::cout << " (y): ";
    std::cin >> end.y;

    //validando impressão dos valores recebidos
	std::cout << "\n\nStart values:\n X: " << start.x << ", Y: " << start.y;
    std::cout << ";\n End values:\n X: " << end.x << ", Y: " << end.y << ";" << std::endl;
	return 0;
} 