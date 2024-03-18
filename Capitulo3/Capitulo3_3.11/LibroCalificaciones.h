#include <string>

class LibroCalificaciones
{
public:
    // Constructor modificado para incluir el nombre del instructor
    LibroCalificaciones(std::string nombreCurso, std::string nombreCatedratico);

    void establecerNombreCurso(std::string nombre);
    std::string obtenerNombreCurso() const;

    // Nueva función para establecer el nombre del instructor
    void establecernombreCatedratico(std::string nombre);
    // Nueva función para obtener el nombre del instructor
    std::string obtenernombreCatedratico() const;

    // Función modificada para mostrar el mensaje
    void mostrarMensaje() const;

private:
    std::string nombreCurso;
    // Nuevo miembro de datos para el nombre del instructor
    std::string nombreCatedratico;
};
