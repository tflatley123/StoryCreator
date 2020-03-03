//  Created by Tom Flatley on 3/2/20.
/*
 Every word has letters which make it up, and a type to describe it.
 */
#ifndef Word_hpp
#define Word_hpp

#include <stdio.h>
// each word has a word type
enum WordType
{
    Noun,
    ProperNoun,
    ProNoun,
    Verb,
    Adjective,
    Adverb,
    Prepositions,
    Article,
    Conjunction
};

struct Word
{
    const char* letters;
    WordType type;
};

#endif /* Word_hpp */
