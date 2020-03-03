//  Created by Tom Flatley on 3/2/20.

/*
  Each sentence will have a subject, a structure, a type. It should be related to the last sentence.
 */
#ifndef Sentence_hpp
#define Sentence_hpp

#include <stdio.h>
#include "Word.hpp"

enum SentenceType
{                   // Example
    Declarative,    // The dog barks.
    Interogative,   // Did the dog bark?
    Imperitive,     // The dog is barking!
    Exclamatory     // Please tell the dog to stop barking.
};

enum SentenceStructure
{                       // Example:
    Simple,             // The dog barks. (1 indepentdent)
    Compound,           // The dog barks, while the bird chirps. (2 + independent)
    Complex,            // Because the bird chirps, the dog barks. ( 1 independent, 1+ dependent)
    CompoundComplex,    // Although it is raining, the bird flys, while the dog barks. (2+ independent, 1+ dependent)
    
};


class Sentence
{
public:
    Sentence(); // an empty constructor
    Sentence(SentenceType type, SentenceStructure structure, Word subject); // a constructor taking the sentence type and structure
    Word subject;
    SentenceType type;
    SentenceStructure structure;
    
    void print();
    
private:
    void generate();
    
    Word* _words;
    
};


#endif /* Sentence_hpp */
