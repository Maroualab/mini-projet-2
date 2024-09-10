#include <stdio.h>
#include <string.h>
#include "Contact.h"

struct Contact contacts[max_contacts];
int contact_count = 0;


void addContact() {
    if (contact_count <= max_contacts) {
        printf("Enter name: ");
        scanf("%s", contacts[contact_count].name);
        printf("Enter phone number: ");
        scanf("%s", contacts[contact_count].phone);
        printf("Enter email: ");
        scanf("%s", contacts[contact_count].email);
        contact_count++;
        printf("Contact added successfully.\n");
    } else {
        printf("Contact list is full.\n");
    }
}

void modifyContact() {

    if  (contact_count == 0){
        printf("\nNo contact to modify \n");
        return;
        }

    char search_name[50];
    printf("\nEnter the name of the contact to modify: ");
    scanf("%s", search_name);

    for (int i = 0; i < contact_count; i++) {
        if (strcasecmp(contacts[i].name, search_name) == 0) {
            printf("Enter new contact name: ");
            scanf("%s", contacts[i].name);
            printf("Enter new phone number: ");
            scanf("%s", contacts[i].phone);
            printf("Enter new email: ");
            scanf("%s", contacts[i].email);
            printf("\nContact modified successfully.\n");
            return;
        }
    }
printf("Contact not found.\n");
}

void deleteContact(){

    if (contact_count == 0){
        printf("\nNo contact to modify \n");
    return;
    }

    char delete_name[50];
    printf("\nEnter the name of the contact to delete: ");
    scanf("%s", delete_name);

    for (int i = 0; i < contact_count; i++) {
        if (strcasecmp(contacts[i].name, delete_name) == 0) {
            for (int j = i; j < contact_count - 1; j++) {
                strcpy(contacts[j].name, contacts[j + 1].name);
                strcpy(contacts[j].phone, contacts[j + 1].phone);
                strcpy(contacts[j].email, contacts[j + 1].email);
        }
            contact_count--;
            printf("\nContact deleted successfully.\n");
            }else{
            printf("Contact not found.\n");
    }

    }
}

void displayContacts() {
    if (contact_count == 0) {
        printf("No contacts to display.\n");
    } else {
        for (int i = 0; i < contact_count; i++) {
            printf("\nName: %s, Phone: %s, Email: %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
        }
    }
}

void searchContact() {
    char search_name[50];
    printf("\nEnter the name to search: ");
    scanf("%s", search_name);

    for (int i = 0; i < contact_count; i++) {
        if (strcmp(contacts[i].name, search_name) == 0) {
            printf("Name: %s, Phone: %s, Email: %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
            return;
        }
    }
    printf("Contact not found.\n");
}

