#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"


int main(){
    printf("Creating empty list: ");
    struct node* linkedList = NULL;
    printf("[ ");
    print_list(linkedList);
    printf("Adding numbers 0-9 to list...\n");
    int i;
    for (i = 0; i < 10; i++){
        linkedList = insert_front(linkedList, i);
    }
    printf("[ ");
    print_list(linkedList);
    for (i = 0; i < 10; i++){
        printf("Removing %d\n", i );
        linkedList = remove_node(linkedList, i);
        printf("[ ");
        print_list(linkedList);
    }
    printf("Free list\n");
    linkedList = free_list(linkedList);
    printf("Back to empty list:\n" );
    printf("[ ");
    print_list(linkedList);



}













// struct pokedex {char* pokemonName; int individualValue;};
// void describePokemon(struct pokedex some);// Check your Pokemon's stats
// struct pokedex catchPokemon(char* pokemonName); //Catch a pokemon, their IVs are random
// void cheatEngine(struct pokedex* pokemon, int desiredValue); //Change your pokemon's IVs
// void nameChange(struct pokedex* pokemon, char* newName); //Change your Pokemon's name
// int main(){
//     struct pokedex pokemon0 = catchPokemon("Bulbasaur");
//     describePokemon(pokemon0);
//     struct pokedex pokemon1 = catchPokemon("Pikachu");
//     describePokemon(pokemon1);
//     cheatEngine(&pokemon0, 183);
//     describePokemon(pokemon0);
//     nameChange(&pokemon1, "Charmander");
//     describePokemon(pokemon1);
// }

// void describePokemon(struct pokedex some ){
//     srand(time(NULL));
//     printf("Your %s has an IV of %d, that's %f%% \n", some.pokemonName,
//                                                       some.individualValue,
//                                                      (some.individualValue / 183.0)* 100);
// }
//
// struct pokedex catchPokemon(char* pokemonName){
//     struct pokedex newPokemon;
//     int rando = rand();
//     strcpy(newPokemon.pokemonName, pokemonName);
//     newPokemon.individualValue = rando % 186;
//     return newPokemon;
// }
//
// void cheatEngine(struct pokedex* pokemon, int desiredValue){
//     pokemon->individualValue = desiredValue;
//     printf("Gratz, you cheated and got a %s with an IV of %d, that's %f%% \n", &pokemon->pokemonName,
//                                                                           pokemon->individualValue,
//                                                                           (desiredValue/ 183.0)* 100);
// }
// void nameChange(struct pokedex* pokemon, char* newName){
//     printf("You changed your %s's name to %s \n", pokemon->pokemonName, newName);
//     pokemon->pokemonName = newName;
// }
