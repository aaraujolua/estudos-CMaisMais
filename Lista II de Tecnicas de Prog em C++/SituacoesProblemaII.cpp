#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Contacts {
    string name;
    long long int phone;
    string email;
};

void AddContact(vector<Contacts>& contacts) {
    Contacts contact;

    cout << "Enter contact name: ";
    cin >> contact.name;
    cout << "Enter contact phone: ";
    cin >> contact.phone;
    cout << "Enter contact email: ";
    cin >> contact.email;
    cout << endl << "Contact saved successfully" << endl << endl;

    contacts.push_back(contact);
}

void ViewContacts(vector<Contacts>& contacts) {
    cout << "Contacts List:" << endl << endl;
    for (const Contacts& contact : contacts) {
        cout << "Name: " << contact.name << endl;
        cout << "Phone: " << contact.phone << endl;
        cout << "Email: " << contact.email << endl << endl;
    }
}

void SearchContact(vector<Contacts>& contacts) {
    string searchName;
    bool contactFound = false;

    cout << "Enter the contact name that you want to find: ";
    cin >> searchName;
    cout << endl;

    for (const Contacts& contact : contacts) {
        if (searchName == contact.name) {
            cout << "Name: " << contact.name << endl;
            cout << "Phone: " << contact.phone << endl;
            cout << "Email: " << contact.email << endl << endl;
            contactFound = true;
        }
    }
    if (!contactFound) {
        cout << "Sorry, this contact doesn't exist in the system." << endl << endl;
    }
}

int main() {

/*Situação Problema 6
Criar um algoritmo que gerencie uma agenda de contatos. Cada contato possui nome, telefone e
e-mail. O programa deve permitir adicionar contatos, listar todos os contatos, e buscar um
contato pelo nome.
Requisitos:
• Usar uma struct para armazenar os dados do contato.
• Implementar funções para adicionar, listar e buscar contatos.
• Utilizar estruturas de repetição e decisão para implementar as funcionalidades.
• Utilizar comando de entrada para receber ações do usuário e comando de saída para
mostrar os resultados.*/
    vector <Contacts> contacts;
    int option = 0;

    while (true) {
        cout << "CONTACTS LIST" << endl << endl;
        cout << "1) Add contact." << endl << "2) View contacts." << endl << "3) Search contact." << endl;
        cout << "Choose an option: ";
        cin >> option;
        cout << "\n";
    
        switch (option) {
        case 1:
            AddContact(contacts);
            break;

        case 2:
            if (contacts.empty()) {
                cout << "The contacts list is empty." << endl << endl;
            }
            else {
                ViewContacts(contacts);
                break;
            }
        case 3:
            SearchContact(contacts);
            break;
        }

    }

    return 0;
}
