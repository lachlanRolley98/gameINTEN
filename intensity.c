// intensity.c
// Assignment 2, COMP1511 18s1: Intensity
//
// This program by lachlan rolley (z5162440) on 07/05/2018
//
// Version 1.0.1: Minor changes to wording of comments.
// Version 1.0.0: Assignment released.

#include <stdio.h>
#include <assert.h>

// SOME USEFUL #defines - YOU WILL NEED MORE

#define ACTION_PLAYER_NAME    0
#define ACTION_DISCARD        1
#define ACTION_PLAY_CARD      2
#define ACTION_UNIT_TESTS     3

#define N_CARDS              40
#define N_CARDS_INITIAL_HAND 10
#define N_PLAYERS             4
#define N_CARDS_DISCARDED     3

#define CARD_MIN             10
#define CARD_MAX             49


// ADD EXTRA #defines HERE

void print_player_name(void);
void choose_discards(void);
void choose_card_to_play(void);
void run_unit_tests(void);

#define true 1
#define false 0



// ADD PROTOTYPES FOR YOUR FUNCTIONS HERE

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///                                                                                                                 ///
///         Sorry for the tone of "if"s Alex, I couldnt figure out how to put arrays in functions :(                ///   
///                                                                                                                 /// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



// You should not need to change this main function

int main(void) {

    int which_action = 0;
    scanf("%d", &which_action);
    if (which_action == ACTION_PLAYER_NAME) {
        print_player_name();
    } else if (which_action == ACTION_DISCARD) {
        choose_discards();
    } else if (which_action == ACTION_PLAY_CARD) {
        choose_card_to_play();
    } else {
        run_unit_tests();
    }

    return 0;
}

void print_player_name(void) {
    // CHANGE THIS PRINTF TO YOUR DESIRED PLAYER NAME
    printf("GANON's assistant\n");

}

void choose_discards() {
    // ADD CODE TO READ THE CARDS OF YOUR HAND INTO AN ARRAY USING SCANF
    
    int n = 0;
    int i = 0;
    double initial_ten[N_CARDS_INITIAL_HAND] = {0};
    while (n < 10 ){
        scanf("%d", &i);
        initial_ten[n] = i ;
        n ++ ;
    }  
    n = 0 ;
    i = 0 ;  
    // THEN ADD YOUR CODE HERE TO CHOOSE AND PRINT THE CARDS YOU WISH TO DISCARD 
    int throw_away[10] = {0};   
    
                                                                                     //basically fills up an array of 3 with the highest possible cards
    while (n < 10 ){                                                                 // goes down by one untill 3 spots are filled
        int fsafe = 0 ;                                                              // always wana throw away cards higher than buffalo first
        if ((initial_ten[n] / 10 )> 4.6 && (initial_ten[n] / 10) < 5 && fsafe == 0){ // fsafe stops the same initial_ten[n] from being used multiple times
            throw_away[i] = initial_ten[n];                                          
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10) > 3.8 && (initial_ten[n] / 10) < 4 && fsafe == 0){ // throw away  19 , 29 , 39 
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }        
        if ((initial_ten[n] / 10 )> 2.8 && (initial_ten[n] / 10) < 3 && fsafe == 0){ 
            throw_away[i] = initial_ten[n];                                          
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10 )> 1.8 && (initial_ten[n] / 10) < 2 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        n++; 
    } 
    if (throw_away[0] == 0 || throw_away[1] == 0 || throw_away[2] == 0){                // throw away  18 , 28 , 38
        n = 0 ;
        while (n < 10 ){
        int fsafe = 0 ;
        
        if ((initial_ten[n] / 10) > 3.7 && (initial_ten[n] / 10) < 4 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }        
        if ((initial_ten[n] / 10 )> 2.7 && (initial_ten[n] / 10) < 3 && fsafe == 0){ 
            throw_away[i] = initial_ten[n];                                          
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10 )> 1.7 && (initial_ten[n] / 10) < 2 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        n++; 
        } 
    }
    if (throw_away[0] == 0 || throw_away[1] == 0 || throw_away[2] == 0){                 // throw away  17 , 27 , 37
        n = 0 ;       
        while (n < 10 ){
        int fsafe = 0 ;
        
        if ((initial_ten[n] / 10) > 3.6 && (initial_ten[n] / 10) < 4 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }        
        if ((initial_ten[n] / 10 )> 2.6 && (initial_ten[n] / 10) < 3 && fsafe == 0){ 
            throw_away[i] = initial_ten[n];                                          
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10 )> 1.6 && (initial_ten[n] / 10) < 2 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        n++; 
        } 
    }
    if (throw_away[0] == 0 || throw_away[1] == 0 || throw_away[2] == 0){
        n = 0 ;
        while (n < 10 ){
        int fsafe = 0 ;
        
        if ((initial_ten[n] / 10) > 3.5 && (initial_ten[n] / 10) < 4 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }        
        if ((initial_ten[n] / 10 )> 2.5 && (initial_ten[n] / 10) < 3 && fsafe == 0){ 
            throw_away[i] = initial_ten[n];                                          
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10 )> 1.5 && (initial_ten[n] / 10) < 2 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        n++; 
        } 
    }
    if (throw_away[0] == 0 || throw_away[1] == 0 || throw_away[2] == 0){
        n = 0 ;
        while (n < 10 ){
        int fsafe = 0 ;
        
        if ((initial_ten[n] / 10) > 4.4 && (initial_ten[n] / 10) < 5 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10) > 3.4 && (initial_ten[n] / 10) < 4 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }        
        if ((initial_ten[n] / 10 )> 2.4 && (initial_ten[n] / 10) < 3 && fsafe == 0){ 
            throw_away[i] = initial_ten[n];                                          
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10 )> 1.4 && (initial_ten[n] / 10) < 2 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        n++; 
        } 
    }    
    if (throw_away[0] == 0 || throw_away[1] == 0 || throw_away[2] == 0){
        n = 0 ;
        while (n < 10 ){
        int fsafe = 0 ;
        
        if ((initial_ten[n] / 10) > 4.3 && (initial_ten[n] / 10) < 5 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10) > 3.3 && (initial_ten[n] / 10) < 4 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }        
        if ((initial_ten[n] / 10 )> 2.3 && (initial_ten[n] / 10) < 3 && fsafe == 0){ 
            throw_away[i] = initial_ten[n];                                          
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10 )> 1.3 && (initial_ten[n] / 10) < 2 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        n++; 
        } 
    }
    if (throw_away[0] == 0 || throw_away[1] == 0 || throw_away[2] == 0){
        n = 0 ;
        while (n < 10 ){
        int fsafe = 0 ;
        
        if ((initial_ten[n] / 10) > 4.2 && (initial_ten[n] / 10) < 5 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10) > 3.2 && (initial_ten[n] / 10) < 4 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }        
        if ((initial_ten[n] / 10 )> 2.2 && (initial_ten[n] / 10) < 3 && fsafe == 0){ 
            throw_away[i] = initial_ten[n];                                          
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10 )> 1.2 && (initial_ten[n] / 10) < 2 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        n++; 
        } 
    }
    if (throw_away[0] == 0 || throw_away[1] == 0 || throw_away[2] == 0){
        n = 0 ;
        while (n < 10 ){
        int fsafe = 0 ;
        
        if ((initial_ten[n] / 10) > 4.1 && (initial_ten[n] / 10) < 5 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10) > 3.1 && (initial_ten[n] / 10) < 4 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }        
        if ((initial_ten[n] / 10 )> 2.1 && (initial_ten[n] / 10) < 3 && fsafe == 0){ 
            throw_away[i] = initial_ten[n];                                          
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10 )> 1.1 && (initial_ten[n] / 10) < 2 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        n++; 
        } 
    }
    if (throw_away[0] == 0 || throw_away[1] == 0 || throw_away[2] == 0){                // list goes all the way down to ensure never get error :)
        n = 0 ;
        while (n < 10 ){
        int fsafe = 0 ;
        if ((initial_ten[n] / 10) > 4.0 && (initial_ten[n] / 10) < 5 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }                
        if ((initial_ten[n] / 10) > 3.0 && (initial_ten[n] / 10) < 4 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }        
        if ((initial_ten[n] / 10 )> 2.0 && (initial_ten[n] / 10) < 3 && fsafe == 0){ 
            throw_away[i] = initial_ten[n];                                          
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10 )> 1.0 && (initial_ten[n] / 10) < 2 && fsafe == 0){
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        n++; 
        } 
    }
    int j = 0 ;
    while (j < 3){
        printf("%d ",throw_away[j]);
        j++;  
    }  
    printf("\n");  
}
/*void choose_discards() {                                                   //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // ADD CODE TO READ THE CARDS OF YOUR HAND INTO AN ARRAY USING SCANF     //   discard cards with while loop for better style but performs less well cos doesnt use above stratgy, just lowest card sellects highest  //
                                                                             //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int n = 0;
    int i = 0;
    int initial_ten[N_CARDS_INITIAL_HAND] = {0};
    while (n < 10 ){
        scanf("%d", &i);
        initial_ten[n] = i ;
        n ++ ;
    }  
    i = 0 ;  
    // THEN ADD YOUR CODE HERE TO CHOOSE AND PRINT THE CARDS YOU WISH TO DISCARD 
    int throw_away[10] = {0};                                                                                        //basically fills up an array of 3 with the highest possible cards   
    int wabbawabba = 2 ;
    n = 0 ;
    while (wabbawabba < 11){
        n = 0 ; 
        int wabbababba = 0 ;        
        while(n<10){
            int fsafe = 0 ;  
            
            if (initial_ten[n] > (50-wabbawabba) && initial_ten[n] < 50 && fsafe == 0){  
                throw_away[i] = initial_ten[n]; 
                fsafe = 1 ;
                initial_ten[n] = - 1 ;
                i ++ ;
            } 
            if (initial_ten[n] > (40-wabbawabba) && initial_ten[n] < 40 && fsafe == 0){ 
                throw_away[i] = initial_ten[n]; 
                fsafe = 1 ;
                initial_ten[n] = - 1 ;
                i ++ ;
            }        
            if (initial_ten[n] > (30-wabbawabba) && initial_ten[n] < 30 && fsafe == 0){ 
                throw_away[i] = initial_ten[n];                                          
                fsafe = 1 ;
                initial_ten[n] = - 1 ;
                i ++ ;
            }    
            if (initial_ten[n] > (20-wabbawabba) && initial_ten[n] < 20 && fsafe == 0){
                throw_away[i] = initial_ten[n]; 
                fsafe = 1 ;
                initial_ten[n] = - 1 ;
                i ++ ;
            }
            
            
            if(i > 0)
                fprintf(stderr, "Last discarded: %d at %d\n", throw_away[i-1], wabbawabba);
            n++; 
        }
        wabbawabba ++ ;   
    } 
    int j = 0 ;
    while (j < 3){
        printf("%d ",throw_away[j]);
        j++;  
    }  
    printf("\n");  
}
*/
void choose_card_to_play(void) {
    // ADD CODE TO READ THE FIRST THREE NUMBERS (NUMBER OF CARDS IN YOUR HAND,NUMBER OF CARDS PLAYED THIS ROUND, TABLE POSITION)
    int n = 0 ;
    int i = 0 ;
    int N_cards = 0;
    int N_played = 0;
    int poss = 0 ;
    int first_scan[3] = {0} ;
    while (n < 3){
        scanf("%d", & i );
        first_scan[n] = i ;
        n++ ;   
    }
    N_cards = first_scan[0];
    N_played = first_scan[1];
    poss = first_scan[2];
    n = 0 ;
    i = 0 ;
    // ADD CODE TO READ THE CARDS OF YOUR HAND INTO AN ARRAY USING SCANF
    int current_hand[10] = {0};
    while (n < N_cards ){
        scanf("%d", &i);
        current_hand[n] = i ;
        n ++ ;
    }   
    n = 0 ;
    i = 0 ;        
    // ADD CODE TO READ THE CARDS PREVIOUSLY PLAYED THIS ROUND INTO AN ARRAY USING SCANF
    int current_played[4] = {0} ;
    if (N_played != 0){                               // stops code f'ing_up if nothings been played so array goes made                      
        while (n < N_played ){
            scanf("%d", &i);
            current_played[n] = i ;
            n ++ ;
        } 
    }      
    n = 0 ;
    i = 0 ; 
    // ADD CODE TO READ THE CARDS PLAYED IN THE HISTORY OF THE GAME INTO AN ARRAY USING SCANF     
    int N_prev_played = (10 - N_cards)*4 ;
    int cards_prev_played [40]={0} ;
    if (N_cards != 10){                                // stops code f'ing_up if nothings been played so array goes made         
        while (n < N_prev_played ){
            scanf("%d", &i);
            cards_prev_played[n] = i ;
            n ++ ;
        } 
    }      
    n = 0 ;
    i = 0 ;     
    // ADD CODE TO READ THE CARDS YOU DISCARDED AT THE START INTO AN ARRAY USING SCANF
    int discards[3];
    while (n < 3 ){
        scanf("%d", &i);
        discards[n] = i ;
        n ++ ;
    }   
    n = 0 ;
    i = 0 ; 
    // ADD CODE TO READ THE CARDS YOU RECEIVED AT THE START INTO AN ARRAY USING SCANF
    int recieved[3];
    while (n < 3 ){
        scanf("%d", &i);
        recieved[n] = i ;
        n ++ ;
    }   
    n = 0 ;
    i = 0 ; 
    //check if calf has been played previous rounds
    //
    int calf_played = false ; 
    while(n < N_prev_played && calf_played == false){
        if((cards_prev_played[n]-30) >= 0 && (cards_prev_played[n]-30) < 10){
            calf_played = true ;     
        }
        n++;      
    }
    // put all legal plays into an array (inc calves even if not playable)
    //
    int a = current_played[0] % 10 ;
    int b = current_played[0] - a  ;   // b is just the range, eg 10 20 30 40
    int legal_plays[10] = {0} ;
    int legal_plays_mirror[10] = {50,50,50,50,50,50,50,50,50,50} ;
    int lowest_legal = 0 ;
    n = 0 ;
    while(n < 10 && b !=0 ){
        if ((current_hand[n] - b)>=0 && (current_hand[n] - b)<10){
            legal_plays[n] = current_hand[n] ;            
        } 
        n++ ;    
    }
    // find best legal to play
    //
    n = 0 ;
    while(n < 10){
        if (legal_plays[n] != 0 ){
        legal_plays_mirror[n] = legal_plays[n]; // puts only legals into array
        lowest_legal = legal_plays[n];
        }
        n++ ;
    }
    n = 0 ;
    while(n < 10){
        if(legal_plays_mirror[n] < lowest_legal){ // selects the lowest legal
        lowest_legal = legal_plays_mirror[n] ;
        }
        n++;
    }    
    
    // print statments: opption 1 (somones played a card && you have legals), 2  (no cards been played && calf been played), 3 (no cards played && no calf)         
    
    if(lowest_legal != 0){                // only prints lowest legal cards, if calf hasn't been played, it wont play one either
        printf("%d\n", lowest_legal);
    }
        
    ///////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////
    
    int current_hand_mirror[10] = {0};            // calves been played
    if(lowest_legal == 0 && calf_played == true){ // if cards played = 0 choose lowcard  // if round > 0 make sure to choose 47 -> high
        if(N_played == 0){
            int stopper = 0 ;
            int v = 0 ;
            while(v < 10 && stopper == 0){
                current_hand_mirror[v] = current_hand[v];
                if(current_hand[v] == 10 || current_hand[v] == 20 || current_hand[v] == 30 || current_hand[v] == 40){ // strait prints the lowest card
                    printf("%d\n", current_hand[v]) ;
                    stopper = 1;
                }
                v++;             
            }
            int p = 0 ;
            while (p < 4 && stopper == 0){                                  //finds all the last didgests of the cards and puts in array 
                int n = 0 ;
                while(n < 10){
                    if (current_hand_mirror[n] > 10 ){
                        current_hand_mirror[n] = current_hand_mirror[n] - 10 ;
                    }
                    n++;
                }
                p++;
            }              
        n = 0 ;
        int we_play = 50 ;
        while(n < 10){
            if(current_hand_mirror[n] < we_play && current_hand_mirror[n] != 0){ // selects the lowest legal card from the array - > prints corrisponding real card
                we_play = current_hand[n] ;
                }
                n++;
        }   
        printf("%d\n", we_play);
        }
        ///////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////
        if(N_played != 0){                                                    // if cards played > 0   we cannot loose since no corresponding suit in hand
           int  n = 0 ;
           int  v = 0 ;
           int  p = 0 ;
           int  topper = 0 ;
            while(n < 10){
                if (current_hand[n] == 47 ){                            // since cant loose round (no matching suits) dump buffalo if can
                    printf("47\n");
                    topper = 1 ;
                }
                n++;            
            }
            while(v < 10 && topper == 0){
                current_hand_mirror[v] = current_hand[v];
                v++ ;
            }    
            while (p < 4 && topper == 0){                                  //finds all the last didgests of the cards and puts in array
                int n = 0 ;
                while(n < 10){
                    if (current_hand_mirror[n] > 10 ){
                        current_hand_mirror[n] = current_hand_mirror[n] - 10 ;
                    }
                    n++;
                }
                p++ ;
            }            
            n = 0 ;
        int we_play = 0;
        while(n < 10 && topper == 0){
            if(current_hand_mirror[n] > we_play && current_hand_mirror[n] != 0){ // selects the highest legal card since cant loose
                we_play = current_hand[n] ;
            }
                n++;
        }   
        if(topper == 0){
        printf("%d\n", we_play);
        }
        }
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
    //                 if no calves played
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int current_hand_mirrorxxx[10] = {0};
    int abc = 0 ;
    if(lowest_legal == 0 && calf_played == false){ // if cards played = 0 choose lower than %4 // if round > 0 make sure to choose 47 -> high (no calves)
        if(N_played == 0){
            int stopper = 0 ;
            int v = 0 ;
            while(v < 10 && stopper == 0){
                if (current_hand[v] > 29 && current_hand[v] < 40 ){
                   int waffle = 1 ;
                }
                else {
                current_hand_mirrorxxx[v] = current_hand[v];
                }
                if(current_hand[v] == 10 || current_hand[v] == 20 || current_hand[v] == 40){ // stait prints the lowest card (no calves
                    printf("%d\n", current_hand[v]) ;
                    stopper = 1;
                }
                v++;             
            }
            int p = 0 ;
            while (p < 4 && stopper == 0){                                  //finds all the last didgests of the cards and puts in array 
                int n = 0 ;
                while(n < 10){
                    if (current_hand_mirrorxxx[n] > 10 ){
                        current_hand_mirrorxxx[n] = current_hand_mirrorxxx[n] - 10 ;
                    }
                    n++;
                }
                p++;
            }              
        n = 0 ;
        int we_play = 50 ;
        while(n < 10){
            if(current_hand_mirrorxxx[n] < we_play && current_hand_mirrorxxx[n] != 0){ // selects the lowest legal card from the arrar - > prints corrisponding
                we_play = current_hand[n] ;
                }
                n++;
        }   
        if(stopper == 0 && we_play == 0){
            printf("%d\n", current_hand[0]);
            abc = 1 ;
        }
        if (stopper == 0 && abc == 0){
        printf("%d\n", we_play);
        }
        }
        //////////////////////////////////////////////
        //////////////////////////////////////////////
        if(N_played != 0){         // if cards played > 0         we cannot loose since no corresponding suit in hand
           int  n = 0 ;
           int  v = 0 ;
           int  p = 0 ;
           int  abc = 0 ;
           int  topper = 0 ;
            while(n < 10){
                if (current_hand[n] == 47 ){                            // since cant loose round (no matching suits) dump buffalo if can
                    printf("47\n");
                    topper = 1 ;
                }
                n++;            
            }
            while(v < 10 && topper == 0){
                if (current_hand[v] > 29 && current_hand[v] < 40 ){
                    int waffle = 1 ;
                }
                else {
                current_hand_mirrorxxx[v] = current_hand[v];
                }
                v++ ;
            }    
            while (p < 4 && topper == 0){                                  //finds all the last didgests of the cards and puts in array
                int n = 0 ;
                while(n < 10){
                    if (current_hand_mirrorxxx[n] > 10 ){
                        current_hand_mirrorxxx[n] = current_hand_mirrorxxx[n] - 10 ;
                    }
                    n++;
                }
                p++ ;
            }            
            n = 0 ;
        int we_play = 0;
        while(n < 10 && topper == 0){
            if(current_hand_mirrorxxx[n] > we_play && current_hand_mirrorxxx[n] != 0){ // selects the highest legal card since cant loose
                we_play = current_hand[n] ;
            }
                n++;
        }   
        if(topper == 0 && we_play == 0){
            printf("%d\n", current_hand[0]);
            abc = 1 ;
        }
        if (topper == 0 && abc == 0){
        printf("%d\n", we_play);
        }
        }
    }
}
// ADD A COMMENT HERE EXPLAINING YOUR OVERALL TESTING STRATEGY

void run_unit_tests(void) {
    // PUT YOUR UNIT TESTS HERE

    //assert(get_local_time(TOWN_SYDNEY, 3, 31, 1600) == 200); wot

    // sorry for not using functions :/










}
