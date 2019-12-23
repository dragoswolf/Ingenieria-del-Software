void insertarCita(cita nuevaCita) {
    // Creo iterador y lo posiciono al final
    std::list<Cita> iterator it;
    it = citas_.end();

    // Inserto el objeto cita al final de la lista
    citas_.insert(it, cita);
    return true;
}