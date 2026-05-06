#include <iostream> 
#include <string>

class Temperature{

    private:
    char Symbol;
    double  tempCel, tempFar;

    public:
    Temperature()
    {
     tempCel = 0;
        tempFar = 32;
    }
    
    Temperature(char S, float temp){

        Symbol = S;


    }
    
    void getCels();
    void getFar();

};

// Driver program  
