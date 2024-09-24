#include <stdio.h>
#include <string.h>
#include <stdint.h>
#define MAX_CANDIDATE 100
static uint8_t max_candidate = 0;
int voter_count = 0;
unsigned long Candidatecount;
char symbol[];
char symbolTaken[];

typedef struct 
{
    char symbol;
    unsigned long votes;
    char name[40];
}Candidate;
Candidate allCandidate[3];

int fillCandidate()
{

    printf("Name of the candidate:");
    scanf("%s",allCandidate[max_candidate].name);
    printf("symbol of the candidate:");
    scanf(" %c",&(allCandidate[max_candidate].symbol));
    // printf("symbol of the candidate:%d %c \n",max_candidate, allCandidate[max_candidate].symbol);
    max_candidate++;
    printf("Max: %d", max_candidate);
    return max_candidate;
}

void displayAllCandidates(int avail_can)
{

    for(int i = 0; i < avail_can; i++)
    {
        printf("Name & symbol the candidate:%s %c\n",allCandidate[i].name, allCandidate[i].symbol);

    }
}

void getVotes(int voter_count)
{
    displayAllCandidates(max_candidate);
    char sy;
    printf("Voter id: %d ", voter_count);
    scanf(" %c", &sy);
    for(int i = 0; i <max_candidate; i++)
    {
        if(allCandidate[i].symbol == sy)
        {
            allCandidate[i].votes++;
        }
    }

}

void getResults()
{
    int winner = 0;
    int j = 0;
    printf("Name of the candidate:");
    for(int i = 0; i <max_candidate-1; i++)
    {
        j = i+1;
        if(allCandidate[i].votes > allCandidate[j].votes)
        {
            winner = i;
        }
        else
        {
            winner = j;
        }
    }
    printf("The winner is : %s ", allCandidate[winner].name);

}

int main()
{
    printf("Hello world\r\n");
    int max;
    fillCandidate();
    fillCandidate();
    fillCandidate();
    displayAllCandidates(max_candidate);
    for(int i = 1; i <= 3; i++)
    {
        getVotes(i);
    }
    getResults();
    return 0;
}