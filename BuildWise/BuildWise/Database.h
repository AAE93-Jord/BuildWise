#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include "User.h"

class Database {
private:
    std::vector<User> users;  // Stores a list of users
    std::vector<std::string> notifications;  // Stores system-wide notifications

public:
    // Methods
    void addUser(User user);
    void getUserInfo(std::string userId);
    void storeNotification(std::string notification);
    void showNotifications();
};

#endif // DATABASE_H
