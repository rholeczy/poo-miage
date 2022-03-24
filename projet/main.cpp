#include <iostream>
#include <map>
#include "Personne.hpp"
#include "Registre.hpp"

using namespace std;

void afficherOptionsBase();
void charger(Registre &r);
void enregistrerPersonne(Registre &registre, string id);
bool estInt(const string &s);
bool getBool(string yesno);
Personne::etatVaccinal getEtatVaccin(string nbDose);
Personne::typeVaccin getVaccin(string vaccin);

int main(int argc, char **argv)
{
     Registre *registreVaccin = new Registre();
     string c = "";
     bool valide = false;
     while (c != "q")
     {
          afficherOptionsBase();
          cout << ">";
          cin >> c;

          if (c == "1")
          {
               cout << "\x1B[2J\x1B[H";
               registreVaccin->affiche();
               cout << "Tapez un caractère pour retourner au menu." << endl;
               cout << ">";
               cin >> c;
          }

          else if (c == "2")
          {
               cout << "\x1B[2J\x1B[H";
               cout << "Numéro de Sécurité Sociale : ";
               cin >> c;

               while (!estInt(c))
               {
                    cout << "Il faut un numéro ! ";
                    cout << ">";
                    cin >> c;
               }

               registreVaccin->verifierId(c);
               if (!registreVaccin->verifierId(c))
               {
                    enregistrerPersonne(*registreVaccin, c);
               }
               else
               {
                    cout << "\nNuméro de sécurité déjà dans la liste." << endl;
               }
               cout << "Tapez un caractère pour retourner au menu." << endl;
               cout << ">";
               cin >> c;
          }
          else if (c == "3")
          {
               cout << "\x1B[2J\x1B[H";
               cout << "À contacter pour une première dose :" << endl;
               registreVaccin->afficherPremiereDoseContact();
               cout << "Tapez un caractère pour retourner au menu." << endl;
               cout << ">";
               cin >> c;
          }

          else if (c == "4")
          {
               cout << "\x1B[2J\x1B[H";
               cout << "À contacter pour une deuxième dose :" << endl;
               registreVaccin->afficherDeuxiemeDoseContact();
               cout << "Tapez un caractère pour retourner au menu." << endl;
               cout << ">";
               cin >> c;
          }
          else if (c == "5")
          {
               cout << "\x1B[2J\x1B[H";
               cout << "Liste des personnes non contactées :" << endl;
               registreVaccin->afficherNoContact();
               cout << "Tapez un caractère pour retourner au menu." << endl;
               cout << ">";
               cin >> c;
          }
          else if (c == "6")
          {
               cout << "\x1B[2J\x1B[H";
               cout << "Liste des personnes en attente d'un rdv :" << endl;
               registreVaccin->afficherEnAttente();
               cout << "Tapez un caractère pour retourner au menu." << endl;
               cout << ">";
               cin >> c;
          }

          else if (c == "7")
          {
               cout << "\x1B[2J\x1B[H";
               cout << "Numéro de Sécurité Sociale : ";
               cin >> c;

               while (!estInt(c))
               {
                    cout << "Il faut un numéro ! ";
                    cout << ">";
                    cin >> c;
               }

               registreVaccin->verifierId(c);
               if (registreVaccin->verifierId(c))
               {
                    Personne p = registreVaccin->getPersonne(c);
                    registreVaccin->changerPrio(p);
               }
               else
               {
                    cout << "\nNuméro de sécurité pas dans la liste." << endl;
               }
               cout << "Tapez un caractère pour retourner au menu." << endl;
               cout << ">";
               cin >> c;
          }

          else if (c == "8")
          {
               cout << "\x1B[2J\x1B[H";
               charger(*registreVaccin);
               cout << "Les exemples ont été ajoutés au registre." << endl;
               cout << "Tapez un caractère pour retourner au menu." << endl;
               cout << ">";
               cin >> c;
          }

          else if (c == "9")
          {
               cout << "\x1B[2J\x1B[H";
               charger(*registreVaccin);
               cout << "Les exemples ont été ajoutés au registre." << endl;
               cout << "Tapez un caractère pour retourner au menu." << endl;
               cout << ">";
               cin >> c;
          }
          else
          {
               cout << "\x1B[2J\x1B[H";
          }
     }

     /*
     registreVaccin->changerPrio(*sidonieMarty);
     registreVaccin->affiche();*/
}

void afficherOptionsBase()
{
     cout << "\x1B[2J\x1B[H";
     cout << "Actions disponibles : (taper chiffre) \n"
          << endl;
     cout << "1. Afficher Contenu du Registre." << endl;
     cout << "2. Création d'une personne dans le registre." << endl;
     cout << "3. Afficher les personnes à contacter pour une première dose." << endl;
     cout << "4. Afficher les personnes à contacter pour une deuxième dose." << endl;
     cout << "5. Afficher les personnes non contactés." << endl;
     cout << "6. Afficher les personnes en attente d'un rdv." << endl;
     cout << "7. Changer priorité d'un patient." << endl;
     cout << "8. Ajouter des personnes d'exemples." << endl;
}

void charger(Registre &r)
{

     // Darnis : est contacté , et rendez-vous prévu, et il a une dose.
     Personne *romainDarnis = new Personne("1010746033569", "DARNIS", "Romain", "0633384933", "0633384933", 38, "cours du Général de Gaulle", "Gradignan", 33170, true, true, Personne::une_dose, Personne::Presksur);
     // Holeczy : est pas contacté et pas de rendez-vous prévu, et il a deux doses.
     Personne *romainHoleczy = new Personne("1010518036729", "HOLECZY", "Romain", "0661345502", "0661345502", 50, "cours du Général de Gaulle", "Gradignan", 33170, false, false, Personne::deux_doses, Personne::Suretcertin);
     // Billaud : est contacté et a un rendez-vous prévu, et non-vacciné.
     Personne *michelBillaud = new Personne("1560891223027", "BILLAUD", "Michel", "0663389665", "0663389665", 10, "rue Johann Strauss", "Pessac", 33600, true, true, Personne::non_vaccine, Personne::Fotvoir);
     // Mery : est pas contacté et a pas de rendez-vous prévu, et une dose.
     Personne *brunoMery = new Personne("1991116710840", "MERY", "Bruno", "0667251637", "0667251637", 9, "rue Michel Montaigne", "Arcachon", 33120, false, false, Personne::une_dose, Personne::Fotvoir);
     // Marty : est pas contacté et a pas de rendez-vous prévu, et 0 dose.
     Personne *sidonieMarty = new Personne("10106133074829", "MARTY", "Sidonie", "0663389665", "0663389665", 65, "allée Montparnasse", "Biganos", 33380, false, false, Personne::non_vaccine, Personne::Suretcertin);

     r.ajout(*romainDarnis);
     r.ajout(*romainHoleczy);
     r.ajout(*michelBillaud);
     r.ajout(*sidonieMarty);
     r.ajout(*brunoMery);
}

void enregistrerPersonne(Registre &registre, string id)
{
     string nom;
     string prenom;
     string portable;
     string tel;
     string rue;
     string ville;
     string numeroR;
     int numero;
     string codeP;
     int cp;
     string Scontact;
     bool contact;
     string Srdv;
     bool rdv;
     string nbDoses;
     string typeVaccin;

     cout << "Nom : ";
     cin >> nom;
     cout << "Prenom : ";
     cin >> prenom;
     cout << "Portable : ";
     cin >> portable;
     cout << "Telephone : ";
     cin >> tel;
     cout << "Numéro de Rue : ";
     cin >> numeroR;
     while (!estInt(numeroR))
     {
          cout << "Il faut un numéro ! ";
          cout << ">";
          cin >> numeroR;
     }
     numero = stoi(numeroR);
     cout << "Rue : ";
     cin >> rue;
     cout << "Ville : ";
     cin >> ville;
     cout << "Code Postal : ";
     cin >> codeP;
     while (!estInt(codeP))
     {
          cout << "Il faut un numéro ! ";
          cout << ">";
          cin >> codeP;
     }
     cp = stoi(codeP);

     cout << "Personne contacté (y/n): ";
     cin >> Scontact;
     while ((Scontact != "y") && (Scontact != "n"))
     {
          cout << "Erreur ! (y/n)";
          cout << ">";
          cin >> Scontact;
     }

     contact = getBool(Scontact);

     cout << "En attente d'un rdv (y/n): ";
     cin >> Srdv;
     while ((Srdv != "y") && (Srdv != "n"))
     {
          cout << "Erreur ! (y/n)";
          cout << ">";
          cin >> Srdv;
     }

     rdv = getBool(Srdv);

     cout << "0. 0 Dose" << endl;
     cout << "1. 1 Dose" << endl;
     cout << "2. 2 Doses" << endl;
     cout << "Nombre de doses : ";
     cin >> nbDoses;
     while ((nbDoses != "0") && (nbDoses != "1") && (nbDoses != "2"))
     {
          cout << "Erreur ! ";
          cout << ">";
          cin >> nbDoses;
     }
     Personne::etatVaccinal etat = getEtatVaccin(nbDoses);

     cout << "1. Suretcertain" << endl;
     cout << "2. Presksur" << endl;
     cout << "3. Fotvoir" << endl;
     cout << "Vaccin choisi : ";
     cin >> typeVaccin;
     while ((typeVaccin != "1") && (typeVaccin != "2") && (typeVaccin != "3"))
     {
          cout << "Erreur ! ";
          cout << ">";
          cin >> typeVaccin;
     }
     Personne::typeVaccin vaccin = getVaccin(typeVaccin);

     Personne *personne = new Personne(id, nom, prenom, tel, portable, numero, rue, ville, 33380, contact, rdv, etat, vaccin);
     registre.ajout(*personne);
     delete personne;
}

bool estInt(const string &s)
{
     string::const_iterator it = s.begin();
     while (it != s.end() && std::isdigit(*it))
          ++it;
     return !s.empty() && it == s.end();
}

Personne::etatVaccinal getEtatVaccin(string nbDose)
{
     if (nbDose == "0")
     {
          return Personne::non_vaccine;
     }
     else if (nbDose == "1")
     {
          return Personne::une_dose;
     }
     else
     {
          return Personne::deux_doses;
     }
}

Personne::typeVaccin getVaccin(string vaccin)
{
     if (vaccin == "1")
     {
          return Personne::Suretcertin;
     }
     else if (vaccin == "2")
     {
          return Personne::Presksur;
     }
     else
     {
          return Personne::Fotvoir;
     }
}

bool getBool(string yesno)
{
     if (yesno == "y")
     {
          return true;
     }
     else
     {
          return false;
     }
}