#include <iostream>
#include <string>

class Paciente {
private:
    std::string nombre;
    std::string apellidos;

public:
    void setPaciente(const std::string& nombre, const std::string& apellidos) {
        this->nombre = nombre;
        this->apellidos = apellidos;
    }

    std::string getNombreCompleto() const {
        return this->nombre + " " + this->apellidos;
    }
};

int main() {
    std::string nombre;
    std::string apellidos;

    Paciente pacientes[3];

    for (int i = 0; i < 3; i++) {
        std::cout << "Paciente nº " << i + 1 << "\n";

        std::cout << "Introducir nombre: ";
        std::getline(std::cin, nombre);

        std::cout << "Introducir apellidos: ";
        std::getline(std::cin, apellidos);

        pacientes[i].setPaciente(nombre, apellidos);
    }

    std::cout << "\nListado de Pacientes:\n";

    for (int i = 0; i < 3; i++) {
        std::cout << i + 1 << ".- "
                  << pacientes[i].getNombreCompleto()
                  << "\n";
    }

    return 0;
}
