/**
 *  wprompt++ - c++ version of input/validation handler
 *  author: Wonho Lim
 */

#ifndef _WPROMPT_H_
#define _WPROMPT_H_

#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
   
namespace wprompt {

    int GetInt( 
        const std::string promptMessage,
        const int min, 
        const int max 
    );
    
    std::string GetString( 
        const std::string promptMessage,
        size_t minLength,
        size_t maxLength
    );

}

#endif
