#include <stdio.h>
int main()
{
	struct cricket{
		char team[10];
		int won;
		int lose;
		int tie;
		int point;
	};

	struct cricket n[8],temp;
	int i,j,mx,ps,choice=1;

	while(1){
		if(choice == 0) break;
	printf("PLease Enter Team Name, Number of Won, Lose and Tied Match with spaces.\n");
	for(i=0;i<8;i++){
		scanf("%s%d%d%d",n[i].team,&n[i].won,&n[i].lose,&n[i].tie);

		n[i].point = (n[i].won * 2) + (n[i].tie * 1);
	}

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

	 printf("No\tTeam\tPlayed\tWon\tLose\tTie\tPoint\n");
	 for(i=0;i<8;i++){
	 	printf("%d\t%s\t7\t%d\t%d\t%d\t%d\n",i+1,n[i].team,n[i].won,n[i].lose,n[i].tie,n[i].point);
	 }
	 printf("Please Enter 1 to continue or Enter 0 to abort.\n");
	 scanf("%d",&choice);
	}
	printf("Thanks For using.\n");
	 return 0;
}
