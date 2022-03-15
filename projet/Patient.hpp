#ifndef PATIENT_HPP
#define PATIENT_HPP

class Patient:public Personne
{

public:
    Patient();
    Patient(std::string idSecu, std::string nom, std::string prenom);
    Patient(const Personne &pa);
    ~Patient();
};
#endif