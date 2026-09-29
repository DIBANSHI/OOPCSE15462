#include<iostream>
using namespace std;
class Notification
{
    public:
    void sendAlert(long phoneNumber,int otp)
    {
        cout<<"Sending OTP "<<otp<<" to phone number "<<phoneNumber<<endl;
    }
    void sendAlert(string email,string subject,string boby)
    {
        cout<<"Sending email to "<<email<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Body: "<<boby<<endl;
    }
    void sendAlert(string devicetoken,string title,string payload,int priority)
    {
        cout<<"Sending push notification to device token "<<devicetoken<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Payload: "<<payload<<endl;
        cout<<"Priority: "<<priority<<endl;
    }
};
int main()
{
    Notification notify;
    notify.sendAlert(1234567890, 123456);
    notify.sendAlert("user@example.com", "Test Subject", "Test Body");
    notify.sendAlert("device_token_123", "Test Title", "Test Payload", 1);
    return 0;
}