/*
CSE Project: Batch-5
Task: Program to create an "Election Voting System"

Group Members:

AP22110010668 - Poojan Patel
AP22110010669 - Sneha Battula
AP22110010670 - Kruthi Ippili
*/

#include<stdio.h>

int main()
{
    //Declaration of variables
    int ID, Pass, v, i=0; 
    int votes[4] = {0};
    char voter_vote;
    FILE *vcp;
    
    //Login Credentials
    printf("\nUse the following Login Credentials to vote: \nVoter ID: 36963 \nPassword: 369369\n");

    //Reading the credentials from the voter
    printf("\nVoter ID: ");
    scanf("%d", &ID);

    printf("Password: ");
    scanf("%d", &Pass);
    
    //Authenticate the credentials
    if (ID == 36963 && Pass == 369369)
    {
        //Greeting the voter
        printf("\nWelcome to the 18th Lok Sabha Elections!\n");

        //Listing the candidates
        printf("\nCandidates: \nParty A \nParty B \nParty C \nParty D\n");    

        //Collecting the vote
        printf("\nWhom will you vote? (A/B/C/D): ");
        scanf(" %c", &voter_vote);  //A space before %c to avoid buffer overflow 

        //Storing the previous votes of the parties from our file
		vcp = fopen("S:\\Votes.txt", "r");
        
        while (fscanf(vcp, "%d", &votes[i]) == 1)
            i++;		

        //Updating votes in our local variables using ternary operators
		v = (voter_vote == 'A') ? (0) : ((voter_vote == 'B') ? (1) : ((voter_vote == 'C') ? (2) : (3)));
        votes[v]++;
        
        fclose(vcp);

        //Updating the votes in our file
        vcp = fopen("S:\\Votes.txt", "w");
		
		for (i=0; i<4; i++)
			fprintf(vcp, "%d ", votes[i]);
    
        fclose(vcp);

        //Thanking the voter to vote
        printf("\nThank You for voting. You vote is precious to us. Have a nice day!\n");

		//Displaying current voting results
		printf("\nLive Results:");
		for (i=0; i<4; i++)
			printf("\nParty %c: %d votes", (65+i), votes[i]);		
    }
    else
        printf("\nInvalid Voter ID / Password");

    return 0;
}