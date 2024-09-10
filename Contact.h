#ifndef CONTACT_H
#define CONTACT_H

#define max_contacts 100

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

// Declare functions
void addContact();
void modifyContact();
void deleteContact();
void displayContacts();
void searchContact();




#endif // CONTACT_H
