// C++ code to validate a password  
#include<bits/stdc++.h> 
using namespace std; 

bool validatePassword(string password)  
{  
  
    //Checking if password containts minimum 8 string
    if (!((password.length() >= 8))) 
        return false;  
  
    // Checking if the password contains space   
    if (password.find(" ") != 
        std::string::npos) 
        return false;  
  
    if (true) 
    {  
        int count = 0;  
  
        // Check if the password contaions a digit 
        for(int i = 0; i <= 9; i++) 
        {  
              
            // To convert int to string  
            string str1 = to_string(i);  
  
            if (password.find(str1) !=  
                std::string::npos)  
                count = 1;  
        }  
        if (count ==0)  
            return false;  
    }  
  
    // Checking for special characters
    if    (((password.find("@") != std::string::npos) || 
          (password.find("#") != std::string::npos) || 
          (password.find("!") != std::string::npos) || 
          (password.find("~") != std::string::npos) || 
          (password.find("$") != std::string::npos) || 
          (password.find("%") != std::string::npos) || 
          (password.find("^") != std::string::npos) || 
          (password.find("&") != std::string::npos) || 
          (password.find("*") != std::string::npos) || 
          (password.find("(") != std::string::npos) || 
          (password.find(")") != std::string::npos) || 
          (password.find("-") != std::string::npos) || 
          (password.find("+") != std::string::npos) || 
          (password.find("/") != std::string::npos) || 
          (password.find(":") != std::string::npos) || 
          (password.find(".") != std::string::npos) || 
          (password.find(",") != std::string::npos) || 
          (password.find("<") != std::string::npos) || 
          (password.find(">") != std::string::npos) || 
          (password.find("?") != std::string::npos) || 
          (password.find("|") != std::string::npos))) 
        return false; 
      
   else
    // If all conditions fails  
    return true;  
}  
  
 
int main()  
{  
    string password = "Testpass42";  
      
    if (validatePassword(password))  
        cout << "Valid Password" << endl;  
    else
        cout << "Invalid Password" << endl; 
}
  
