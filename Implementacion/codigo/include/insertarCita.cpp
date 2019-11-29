// Habría que hacer una clase "citas" que se defina como una lista de citas
// Estaría bien que comprobasemos si se ha insertado (la func. pasaría a bool)

void insertarCita(cita nuevaCita) {
    // Creo iterador y lo posiciono al final
    std::list<int> iterator it;
    it = citas_.end();

    // Inserto el objeto cita al final de la lista
    citas_.insert(it, cita);
    return true;
}