#ifndef NOTIFICATIONMODULE_H
#define NOTIFICATIONMODULE_H

#include <string>
#include <vector>
#include "User.h"

class NotificationModule {
private:
    std::vector<std::string> notificationLog;

public:
    // Methods
    void sendNotification(User& user, std::string message);
    void viewNotifications();
};

#endif // NOTIFICATIONMODULE_H
