/*
 Tower of hanoi 
 Rules 1 only one disk is transfer in one step
 2 smaller disks are always kept on top of larger disks
*/

# include <stdio.h>

void towerOfHanoi(int n, char source[], char helper[], char destination[])
{
    if (n == 1)
    {
        printf("Transfer disk %d from %s to %s\n",n,source,destination);
        return;
    }
    
    towerOfHanoi(n-1,source,destination,helper);
    printf("Transfer disks %d from %s to %s\n",n,source,destination);
    towerOfHanoi(n-1,helper,source,destination);
}

void main()
{
    int number;

    printf("Enter number of disks : ");
    scanf("%d",&number);

    towerOfHanoi(number,"S","H","D");
}