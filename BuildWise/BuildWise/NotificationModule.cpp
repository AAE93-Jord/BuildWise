#include "NotificationModule.h"
#include <iostream>

void NotificationModule::sendNotification(User& user, std::string message) {
    std::string notification = "Notification for " + user.getName() + ": " + message;
    notificationLog.push_back(notification);
    user.receiveNotification(message);  // Sends the notification to the user
}

void NotificationModule::viewNotifications() {
    std::cout << "All Notifications:\n";
    for (const auto& notification : notificationLog) {
        std::cout << notification << std::endl;
    }
}
