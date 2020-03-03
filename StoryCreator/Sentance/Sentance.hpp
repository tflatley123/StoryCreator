//  Created by Tom Flatley on 3/2/20.
#ifndef Sentance_hpp
#define Sentance_hpp

#include <stdio.h>
#include "Word.hpp"

enum SentanceType
{                   // Example
    Declarative,    // The dog barks.
    Interogative,   // Did the dog bark?
    Imperitive,     // The dog is barking!
    Exclamatory     // Please tell the dog to stop barking.
};

enum SentanceStructure
{                       // Example:
    Simple,             // The dog barks. (1 indepentdent)
    Compound,           // The dog barks, while the bird chirps. (2 + independent)
    Complex,            // Because the bird chirps, the dog barks. ( 1 independent, 1+ dependent)
    CompoundComplex,    // Although it is raining, the bird flys, while the dog barks. (2+ independent, 1+ dependent)
    
};


class Sentance
{
public:
    Sentance();                                // an empty constructor
    Sentance(SentanceType, SentanceStructure); // a constructor taking the sentance type and structure
    
    SentanceType type;
    SentanceStructure structure;
    
private:
    
    Word* _words;
    
};


#endif /* Sentance_hpp */
