			#include<stdio.h>
			#include<string.h>
			typedef struct player 
			{
			     char player [20];
				 int runs, wc, no_matches, jersey_no;
			} player ;
			   void store_player (player*,int); // declaration
			   void display_player(player*,int);
			   void search_player(player*,int);
			   void search_player_name(player*,int);
			   void search_player_runs(player*,int);
			   void updaterun(player*,int);
			   void updatewicket(player*,int);
			   void deleteplayer(player*,int);
			   void sorting (player*,int);
			   int n=5;
			  void main ()
			  {
			 	player arr [n];
			 	int ch,exit=0;
			 	store_player (arr,n); // called 
			 	
			  	while(exit==0)
			 	{
			           printf("\n---------------------------------");
				       printf("\n          MENU                   ");
			           printf("\n---------------------------------");
			           printf("\n1 display player");
			           printf("\n2 search jersey number");
			           printf("\n3 search player name");
			           printf("\n4 search player runs");
			           printf("\n5 update run");
			           printf("\n6 update wicket");
			           printf("\n7 delete player");
			           printf("\n8 sort player");
			           printf("\n0 exit\n");
					   printf("Enter:");
			           scanf("%d",&ch);
			        switch(ch)
			 	   {
			            case 1:
							display_player (arr,n);
			            break;
			            case 2:search_player (arr,n);
			            break;
			 	        case 3:search_player_name (arr,n);
			 	        break;
			    	    case 4 :search_player_runs(arr,n);
			     	    break;
			     	    case 5:updaterun(arr,n);
			     	    break;
			 	        case 6:updatewicket(arr,n);
			 	        break;
			 	        case 7:deleteplayer(arr,n);
			 	        break;
			 	        case 8:sorting(arr,n);
			 	        break;
			 	        default:
			 	        	printf("Invalid choice\n");
			 	        	break;
			    	}
			 	    printf("\nEnter 0 for menu and 1 for exit");
					scanf("%d",&exit);    
			   }
			}
			
			     void store_player(player* arr,int n ) //defination
			  {
			  	int i;
			  	for (i=0; i<n;i++)
			  	 {
			  		 printf("enter player name\n");
			  		 scanf("%s",&arr[i].player);
			  		 printf("enter jersey no\n");
			  		 scanf("%d",&arr[i].jersey_no);
			  		 printf("enter player runs\n");
			  		 scanf("%d",&arr[i].runs);
			  		 printf("enter player wicket\n");
			  		 scanf("%d",&arr[i].wc);
			  		 printf("enter matches\n");
			  		 scanf("%d",&arr[i].no_matches);
			  		 
				 }
			  }
			void display_player (player* arr,int n)
			     {
			     	int i;
			     	for (i=0;i<n;i++)
			     	{
			     		printf("**********************************************************************************************************************\n");
			     		printf("\n the player details are\n name: %s \n  jersey: %d \n runs: %d\n wicket: %d \n matches: %d \n",arr[i].player,arr[i].jersey_no,arr[i].runs,arr[i].wc,arr[i].no_matches);
					 }
				 }
			void search_player (player* arr,int n)
				    {
				       int i,num;
				       int flag=0;
				       printf("enter jersey no of player\n");
				       scanf("%d",&num);
				       for (i=0;i<n;i++)
				       {
				       	   if (arr[i].jersey_no==num)
				        	{
				            	printf("*********************************************************************************************************************\n");
				       	       	printf("enter player name is: %s \n",arr[i].player);
			  		             printf("enter jersey no :%d\n",arr[i].jersey_no);
			  		             printf("enter player runs :%d\n",arr[i].runs);
			  	            	 printf("enter player wicket :%d\n",arr[i].wc);
			  	             	 printf("enter matches: %d\n",arr[i].no_matches);
			  	               	printf("**********************************************************************************************************************\n");
			  	        	     flag++;
						   }
					   }
					            if (flag==0)
						        printf("jersey no not found\n");
			      	}
			void search_player_name(player* arr,int n)
			          {
			          	     char name [20];
							 printf("enetr player name\n");
							 scanf("%s",&name);
							 int i,flag=0;
							 for (i=0;i<n;i++)
							 {
							 	if(strcmp(arr[i].player,name)==0)
							 	{
							    	printf("************************************************************************************************************************\n");
							 		printf("player name is :%s \n",arr[i].player);
							 		printf("jersey no is :%d\n",arr[i].jersey_no);
							 		printf("run makes by player is: %d\n",arr[i].runs);
							 		printf("number of wicket takes by player :%d\n",arr[i].wc);
							 		printf("number of matches played by player: %d\n",arr[i].no_matches);
							 		printf("************************************************************************************************************************\n");
							 		flag++;
							    }
							 }
							 if(flag==0)
						    
							 printf(" entered name not found \n");
						}
			void search_player_runs(player* arr,int n)
			        {
			            	int i,num,flag=0;
				            printf("enter runs of player");
				            scanf("%d",&num);
				           for (i=0;i<n;i++)
				       {
				       	   if (arr[i].jersey_no==num)
				       	{
				       		printf("************************************************************************************************************************\n");
				       		printf(" player name is: %s \n",arr[i].player);
			  		         printf(" jersey no : %d\n",arr[i].jersey_no);
			  		          printf(" player runs: %d\n",arr[i].runs);
			  	         	 printf("player wicket :%d\n",arr[i].wc);
			  	        	 printf("matches :%d\n",arr[i].no_matches);
			  	        	 printf("************************************************************************************************************************\n");
			  	        	 flag++;
						 }
						     if(flag==0)
						     printf(" entered runs not found \n");	
						}
					}
			void updaterun(player* arr,int n)
			   {
				         int i,num;
				         printf("enter the jersy number of player for update runs\n");
				         scanf("%d",&num);
				         for (i=0;i<n;i++)
				   {
				         	if (arr[i].jersey_no==num)
				       	{
				       	
				         	printf("\n the player name is: %s\n",arr[i].player);
				         	printf("\n enter the runs to be updated\n");
				         	scanf("%d",&arr[i].runs);
				         	printf("************************************************************************************************************************\n");
				         	printf("name of the player is: %s \n",arr[i].player);
				         	printf("jersy number of the player is: %d \n",arr[i].jersey_no);
				         	printf("run makes by player is: %d\n",arr[i].runs);
				         	printf("number of wicket take by player is: %d\n",arr[i].wc);
				         	printf("number of matches played by player is: %d \n",arr[i].no_matches);
				         	printf("************************************************************************************************************************\n");
						     
					   }
			        } 
			   }
			void updatewicket(player* arr,int n)
			   {
			   	            int i,num;
			   	            printf("enter the jersy number of player for update wicket\n");
			   	            scanf("%d",&num);
			   	            for (i=0;i<n;i++)
			   	          {
			   	          	    if (arr[i].jersey_no==num)
			   	          	    {
			   	          	    
			   	          	    	printf("\n the player name is: %s\n",arr[i].player);
			   	          	    	printf("\n enter the wicket to be updated\n");
			   	          	    	scanf("%d",&arr[i].wc);
			   	          	    	printf("************************************************************************************************************************\n");
			   	          	    	printf("name of the player is: %s\n",arr[i].player);
			   	          	    	printf("jersy number of the player is: %d\n",arr[i].jersey_no);
			   	          	    	printf("run makes by player is: %d\n",arr[i].runs);
			   	          	    	printf("number of wicket take by player is :%d \n",arr[i].wc);
			   	          	    	printf("number of matches played by player is: %d\n",arr[i].no_matches);
			   	          	    	printf("************************************************************************************************************************\n");
						        }   	
			   		      }  
			   }
			void deleteplayer(player* arr,int size)
			  {
				            int i,num,index=-1,flag=0;
				            printf("enter the jersy number of player for delete data\n");
				            scanf("%d",&num);
				            for (i=0;i<size;i++)
				            {
				            	 if (arr[i].jersey_no==num)
				            	 {
				            	 	 index=i;
				            	 	 flag++;
				            	 	 break;
								 }
							}
			                 if(flag==0)
			                 {
			                 	 printf("entered jersy number not found");
							 }
							 else 
							 {
							 	  if (index!=-1)
							 	  {
							 	  	    for (i=index;i<n;i++)
							 	  	   {
							 	  	 	  arr[i]=arr[i+1];
								   	   }
								   	    n--;
								   	    printf("jersy no %d data is deleted",num);
								   }
							 
							 }
			    }
			    void sorting(player*arr,int n)
			    {
			    	int i,j;
			    	player temp;
			    	for (i=0;i<n;i++)
			    	{
			    		for (j=0;j<n;j++)
			    		{
			    			if(arr[i].runs >arr[j].runs)
			    			{
			    				temp=arr[i];
			    				arr[i]=arr[j];
			    				arr[j]=temp;
			    				
							}
						}
					}
					       printf("\ntop players by run\n");
					    for (i=0;i<3;i++)
					    {
					    	printf("************************************************************************************************************************\n");
					    	printf("name of the player is :%s\n",arr[i].player);
					    	printf("jersy number of the player is :%d \n",arr[i].jersey_no);
					    	printf("runs makes by player is :%d \n",arr[i].runs);
					    	printf("number of wicket take by player is: %d\n",arr[i].wc);
					    	printf("number of matches played by player is :%d \n",arr[i]. no_matches);
					    	printf("***********************************************************************************************************************\n");
						}
			}
			   
			   
			
					         