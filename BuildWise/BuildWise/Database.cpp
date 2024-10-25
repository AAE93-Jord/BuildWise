#include "Database.h"
#include <iostream>

void Database::addUser(User user) {
    users.push_back(user);
    std::cout << "User added: " << user.getName() << std::endl;
}

void Database::getUserInfo(std::string userId) {
    for (const auto& user : users) {
        if (userId == user.getName()) {  // Assuming userId is the name for simplicity here
            std::cout << "User Info: " << user.getName() << ", Role: " << user.getRole() << std::endl;
        }
    }
}

void Database::storeNotification(std::string notification) {
    notifications.push_back(notification);
}

void Database::showNotifications() {
    std::cout << "All Notifications:\n";
    for (const auto& notification : notifications) {
        std::cout << notification << std::endl;
    }
}
