#include "User.h"
#include <iostream>

User::User(std::string id, std::string n, std::string r, std::string contact)
    : userId(id), name(n), role(r), contactInfo(contact) {}

std::string User::getName() {
    return name;
}

std::string User::getRole() {
    return role;
}

std::string User::getContactInfo() {
    return contactInfo;
}

void User::sendMessage(std::string message, User& recipient) {
    std::cout << name << " sends message to " << recipient.getName() << ": " << message << std::endl;
}

void User::receiveNotification(std::string notification) {
    std::cout << "Notification for " << name << ": " << notification << std::endl;
}
