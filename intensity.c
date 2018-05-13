// intensity.c
// Assignment 2, COMP1511 18s1: Intensity
//
// This program by YOUR-NAME-HERE (z5555555) on INSERT-DATE-HERE
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
    printf("THE ROLLENATOR\n");

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
    
      
    while (n < 10 ){
        int fsafe = 0 ;
        if ((initial_ten[n] / 10 )> 4.6 && (initial_ten[n] / 10) < 5 && fsafe == 0){ // fsafe stops the same initial_ten[n] from being used multiple times
            throw_away[i] = initial_ten[n]; 
            fsafe = 1 ;
            initial_ten[n] = - 1 ;
            i ++ ;
        }    
        if ((initial_ten[n] / 10) > 3.8 && (initial_ten[n] / 10) < 4 && fsafe == 0){
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
    if (throw_away[0] == 0 || throw_away[1] == 0 || throw_away[2] == 0){
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
    if (throw_away[0] == 0 || throw_away[1] == 0 || throw_away[2] == 0){
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
    if (throw_away[0] == 0 || throw_away[1] == 0 || throw_away[2] == 0){
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
    if (N_cards != 10){                                // stops code f'ing_up if nothings been played so array goes made 
        int N_prev_played = (10 - N_cards)*4 ;
        int cards_prev_played [N_prev_played];
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
    // THEN ADD YOUR CODE HERE TO CHOOSE AND PRINT THE CARD YOU WISH TO PLAY
    int a = current_played[0] % 10 ;
    int b = current_played[0] - a  ;   // b is just the range, eg 10 20 30 40
    int legal_plays[10] = {0} ;
    int lowest_legal = 0 ;
    n = 0 ;
    while(n < 10 && b !=0){
        if ((current_hand[n] - b)>0 && (current_hand[n] - b)<10){
            legal_plays[n] = current_hand[n] ;
            
        } 
        n++ ;    
    }
    n = 0 ;
    while(n < 10){
        if (legal_plays[n] != 0 ){
        lowest_legal = legal_plays[n]; //lowest will be the last legal it finds
        }
        n++ ;
    }
    if(lowest_legal != 0){
        printf("%d\n", lowest_legal);
    }
    if(lowest_legal == 0){
        printf("%d\n", current_hand[0]);
        }        
     
      
    // NOTE: THE PROVIDED CODE DOES NOT MAKE A LEGAL MOVE. YOU MUST CHANGE IT TO
    // PLAY A CARD FROM YOUR HAND.
    

}


// ADD A COMMENT HERE EXPLAINING YOUR OVERALL TESTING STRATEGY

void run_unit_tests(void) {
    // PUT YOUR UNIT TESTS HERE
}


// ADD YOUR FUNCTIONS HERE

