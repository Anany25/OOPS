#include<string>
using namespace std;
class Login
{
public:
    string username;
    string password;
    string enteredPassword;
        void setUsername(string inputUsername)
        {
            username=inputUsername;
        }
        void setPassword(string inputPassword)
        {
            password=inputPassword;
        }
        string getUsername()
        {
            return username;
        }
        string getPassword()
        {
            return password;
        }
        string verifyPassword(string enteredPassword)
        {
            if(enteredPassword==password)
            return "Logged In!";
            else
            return "Wrong Password!";
        }

};
