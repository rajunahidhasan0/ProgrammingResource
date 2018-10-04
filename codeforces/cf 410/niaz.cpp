#include <stdio.h>
struct cricket{
	char team[10];
	int won;
	int lose;
	int tie;
	int point;
};
int mx,ps;
void sortdata( struct cricket *n)
{
    int i,j;
    struct cricket temp;
    for(i=0;i<8;i++){
	 	mx = n[i].point;
	 	ps = i;
	 	for(j=i+1;j<5;j++){
	 		if(n[j].point > mx){
	 			mx = n[j].point;
	 			ps = j;
	 		}
	 	}
	 	temp = n[i];
	 	n[i] = n[ps];
	 	n[ps] = temp;
	 }
}
int main()
{

	int i,j,choice=1;
	FILE *fpd;
	fpd=fopen("Ranking.txt","w");
    struct cricket n[8];
	while(1){
		if(choice == 0) break;
	printf("PLease Enter Team Name, Number of Won, Lose and Tied Match with spaces.\n");
	for(i=0;i<8;i++){
		scanf("%s%d%d%d",n[i].team,&n[i].won,&n[i].lose,&n[i].tie);

		n[i].point = (n[i].won * 2) + (n[i].tie * 1);
	}
    sortdata(n);

	 fprintf(fpd,"No\tTeam\tPlayed\tWon\tLose\tTie\tPoint\n");
	 for(i=0;i<8;i++){
	 	fprintf(fpd,"%d\t%s\t7\t%d\t%d\t%d\t%d\n",i+1,n[i].team,n[i].won,n[i].lose,n[i].tie,n[i].point);
	 }
	 printf("Operation Successful.\n\n");
	 fclose(fpd);
	 printf("Please Enter 1 to continue or Enter 0 to abort.\n");
	 scanf("%d",&choice);
	}
	printf("Thanks For using.\n");
	 return 0;
}
