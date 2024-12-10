#include <stdio.h>
#include <stdlib.h>

#define MAX_PLAYERS 50

struct cricket {
    char country[20];
    char player[30];
    char playing_type[30];
    int matches_played;
    float salary;
};

int main() {
    struct cricket players[MAX_PLAYERS];
    int num_players, i;
    
    printf("Enter the number of players: ");
    scanf("%d", &num_players);
    
    // Input the data for each player
    for(i=0; i<num_players; i++) {
        printf("\nEnter the details of player %d:\n", i+1);
        printf("Country: ");
        scanf("%s", players[i].country);
        printf("Player name: ");
        scanf("%s", players[i].player);
        printf("Playing type: ");
        scanf("%s", players[i].playing_type);
        printf("Number of matches played: ");
        scanf("%d", &players[i].matches_played);
        printf("Salary: ");
        scanf("%f", &players[i].salary);
    }
    
    // Save the data in a file named "cricket.txt"
    FILE *fp;
    fp = fopen("cricket.txt", "w");
    if(fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    fprintf(fp, "Country\tPlayer\tPlaying Type\tMatches Played\tSalary\n");
    for(i=0; i<num_players; i++) {
        fprintf(fp, "%s\t%s\t%s\t%d\t%.2f\n", players[i].country, players[i].player,
                players[i].playing_type, players[i].matches_played, players[i].salary);
    }
    fclose(fp);
    
    // Display the information of players who had played more than 10 matches
    printf("\n\nPlayers who had played more than 10 matches:\n");
    fp = fopen("cricket.txt", "r");
    if(fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    char header[100];
    fscanf(fp, "%[^\n]\n", header); // read the header line
    printf("%s\n", header);
    while(!feof(fp)) {
        char country[20], player[30], playing_type[30];
        int matches_played;
        float salary;
        fscanf(fp, "%s %s %s %d %f\n", country, player, playing_type, &matches_played, &salary);
        if(matches_played > 10) {
            printf("%s\t%s\t%s\t%d\t%.2f\n", country, player, playing_type, matches_played, salary);
        }
    }
    fclose(fp);
    
    return 0;
}

