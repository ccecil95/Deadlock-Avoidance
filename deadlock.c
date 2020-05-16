
//Hello everyone! I used the Bankers algorithm to make an example of Deadlock avoidance 
#include <stdio.h>
int main()
{
	//P0, P1, P2, P3, P4 would be the name of the Processses
	int a, b, c, d, e;
	a = 5; // Number of processes
	b = 3; //N umber of resourcse
	
	int alloc[5][3] ={	{ 0, 1, 0 }, // P0 	// Allocation matrix
				{ 2, 0, 0 }, // P1
				{ 3, 0, 2 }, // P2
				{ 2, 1, 1 }, // P3
				{ 0, 0, 2 } }; //P4
				
	int max[5][3] = {	{ 7, 5, 3 }, // P0	// Maximum need matrix
				{ 3, 2, 2 }, // P1
				{ 9, 0, 2 }, // P2
				{ 2, 2, 2 }, // P3
				{ 4, 3, 3 } }; //P4
				
	int avail[3] = { 3, 3, 2 }; // Available Resources
	
	int f[a], ans[a], ind = 0;
	for (e = 0; e < a; e++) {
		f[e] = 0;
	}
	
	int need[a][b]; 
    for (c = 0; c < a; c++) { 
        for (c = 0; c < b; c++) 
            need[c][d] = max[c][d] - alloc[c][d]; 
    } 
    int y = 0; 
    for (e = 0; e < 5; e++) { 
        for (c = 0; c < a; c++) { 
            if (f[c] == 0) { 
  
                int flag = 0; 
                for (d = 0; d < b; d++) { 
                    if (need[c][d] > avail[d]){ 
                        flag = 1; 
                         break; 
                    } 
                } 
  
                if (flag == 0) { 
                    ans[ind++] = c; 
                    for (y = 0; y < b; y++) 
                        avail[y] += alloc[c][y]; 
                    f[c] = 1; 
                } 
            } 
        } 
    } 
  
    printf("Following is the SAFE Sequence"); 
    for (c = 0; c < a - 1; c++) 
        printf(" P%d ->", ans[c]); 
    printf(" P%d", ans[a - 1]); 
  
    return (0); 
  
    // Reference for the code:  Deep Baldha (CandyZack) from geeksforgeeks.org
   } 

