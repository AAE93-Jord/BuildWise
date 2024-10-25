#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string userId;
    std::string name;
    std::string role;  // Either "ProjectManager" or "TeamMember"
    std::string contactInfo;

public:
    User(std::string id, std::string n, std::string r, std::string contact);

    // Getters
    std::string getName();
    std::string getRole();
    std::string getContactInfo();

    // Methods
    void sendMessage(std::string message, User& recipient);
    void receiveNotification(std::string notification);
};

#endif // USER_H

