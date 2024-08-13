#include "../loadPlayer/LoadPlayerView.h"

Player loadPlayerView() {
    std::string name;
    int trainerGender;

    std::cout << "Introduce tu nombre: ";
    std::cin >> name;

    bool exit = false;
    do
    {
        std::cout << "--- Genero ---: " << std::endl;
        std::cout << "0 - Mujer" << std::endl;
        std::cout << "1 - Hombre" << std::endl;
        std::cout << "Introduce tu genero: " << std::endl;
        std::cin >> trainerGender;

        if ((TrainerGenderEnum)trainerGender == Mujer || (TrainerGenderEnum)trainerGender == Hombre) {
            exit = true;
        }
        else {
            std::cout << "El genero ingresado no es valido. Vuelva a intentarlo" << std::endl;
        }


    } while (!exit);



    Player player(name, (TrainerGenderEnum)trainerGender);

    return player;
}

void showPlayerData(Player& player) {
    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "------------------------ Tus datos -------------------------" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;


    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    std::cout << "Nombre: " << player.getName() << std::endl;
    std::cout << "Genero: " << player.getGender() << std::endl;

}