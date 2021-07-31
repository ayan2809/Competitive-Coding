#include<bits/stdc++.h>
using namespace std;

char a[3][3];

bool winnerchecker(char symbol) {
    if (a[0][0] == symbol && a[0][0] == a[1][1] && a[1][1] == a[2][2])
        return 1;

    	if (a[0][2] == symbol && a[0][2] == a[1][1] && a[1][1] == a[2][0])
        return 1;

    	for (int i = 0; i < 3; i++) {
        if (a[i][0] == symbol && a[i][0] == a[i][1] && a[i][1] == a[i][2])
            return 1;
        if (a[0][i] == symbol && a[0][i] == a[1][i] && a[1][i] == a[2][i])
            return 1;
    	}

    return 0;
}


int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		
		int countofx=0,countofO=0,countofspace=0;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='X')
					countofx++;
				else if(a[i][j]=='O')
					countofO++;
			}
		}
		countofspace=9-(countofx+countofO);


		bool winofx=false,winofO=false;
		int result=0;
		while(1!=0)
		{
			if (countofx < countofO) {
				result=3;
				break;
			}
    		if (countofx > countofO + 1) {
    			result=3;
    			break;}

       		//checking if x will win or not
       		winofx=winnerchecker('X');
       		winofO=winnerchecker('O');

       		if (winofx && winofO)  {
       			result=3;break;
       		}

    		if (winofx && countofx == countofO) {
    			result=3;break;
    		}

    		if (winofO && countofx > countofO) {
    			result=3;break;
    		}

    		if (winofx || winofO)  {
    			result=1;break;
    		}

    		if (countofspace == 0) {
    			result=1;
    			break;
    		}

   	 		result=2;
   	 		break;
		}
		





       cout<<result<<endl;

	}

}