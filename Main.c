#include <stdio.h>
#include "Contact.h"




int main() {
    int choice;
    do {
        printf("\nSystème de Gestion de Contacts\n");
        printf("1. Ajouter un Contact\n");
        printf("2. Modifier un Contact\n");
        printf("3. Supprimer un Contact\n");
        printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contact\n");
        printf("6. Quittez\n");
        printf("Entrer votre choix: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                modifyContact();
                break;
            case 3:
                deleteContact();
                break;
            case 4:
                displayContacts();
                break;
            case 5:
                searchContact();
                break;
            case 6:
                printf("Au Revoir ! \n");
                break;
            default:
                printf("Choix invalide! Essayer encore une fois.\n");
        }
    } while (choice != 6);

    return 0;
}
