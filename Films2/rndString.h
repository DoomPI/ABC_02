#ifndef __rndString__
#define __rndString__

#include <stdlib.h>
#include <ctime>   // для функции time()
#include <string>
using namespace std;

//------------------------------------------------------------------------------
// rndString.h - содержит генератор случайных слов
//------------------------------------------------------------------------------

class RandomString {
public:
    RandomString(string t) {
        type = t;
    }
    // Генерация случайных слов
    string Get() {
        if (type == "film name") {
            return film_names[rand() % 10];
        } else {
            return director_names[rand() % 10];
        }
    }
private:
    string type;
    string film_names[10] = {
        "Star wars",
        "The Godfather",
        "Harry Potter",
        "Rear Window",
        "Vertigo",
        "Moonlight",
        "Pinocchio",
        "Hoop Dreams",
        "Psycho",
        "Forest Gump"
    };
    string director_names[10] = {
        "Steven Spielberg",
        "Alfred Hitchcock",
        "Stanley Kubrick",
        "Quentin Tarantino",
        "Akira Kurosawa",
        "John Ford",
        "Billy Wilder",
        "Charles Chaplin",
        "Peter Jackson",
        "Federico Fellini"
    };
};


#endif //__rndString__
