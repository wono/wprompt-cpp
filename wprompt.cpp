/** 
 *  wprompt++ - c++ version of input/validation handler
 *  author: Wonho Lim 
 */

#include "wprompt.h"

namespace wprompt {

    int GetInt( 
        const std::string promptMessage, 
        const int min, const int max        )
    {
        std::cout << promptMessage << ": ";
        
        int input;
        char error;
        std::string line;
        std::getline( std::cin, line );
        std::stringstream linestream( line );

        return (( linestream >> input ) 
            && !( linestream >> error )
            && min <= input 
            && input <= max )
        ? input
        : GetInt( promptMessage, min, max );
    }
    

    std::string GetString(
        const std::string promptMessage, 
        size_t minLength, size_t maxLength )
    {
        std::cout << promptMessage << ": ";
        
        std::string line;
        std::getline( std::cin, line );
        size_t length = line.length();
        
        return  minLength <= length
            &&  length <= maxLength
            &&  std::isalpha(line[0])
        ?   line
        :   GetString( promptMessage, minLength, maxLength );
    }
    
}
