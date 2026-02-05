#include <stdio.h>
#include <stdlib.h>

/* arian shams collegian number:404149048 */



int main(int argc, char *argv[]) {
	int account,pin,order,balance=0,amount,t[10]={0},i=0,j,flag=0,new,incorrect=0,num,Q=0,ID,correctid,a; 
	char name[100],lastname[100];
	while(1){
		
			printf("\n enter 1 for enter account or enter 2 for create account=");
	scanf("%d",&account);
	switch(account){
			case 1:
			if(flag==1){
				
					printf("enter your pin=");        
			scanf("%d",&num);
			if(num != pin){
				incorrect++;
				printf("pin is wrong\n");        
				if(incorrect==3){
					printf("too many wrong tries");
					return 0;
					
				}
				break;
				
			}
			else
			incorrect=0;
			printf("enter 1 to deposit or enter 2 to Withdraw or enter 3 to check bank balance or enter 5 to delete account or enter 6 to exit enter 7 to change pin : ");
			scanf("%d",&order);
			switch(order){           
				case 1:
				printf("enter amount of money that you want to ad to your card=");
				scanf("%d",&amount);
				if(amount>0){
					balance+=amount;
					if(i>9){
						i=0;            
					}
					t[i]=+amount;
					i++;
				}
				break;
				case 2:
				printf("enter amount of money that you want to Withdraw from  your card=");
								scanf("%d",&amount);
				if(amount>0 && amount<=balance){
					balance-=amount;
					if(i>9){
						i=0;            
					}
					t[i]=-amount;
					i++;
				}
				else
				printf("you entered invalid number or your balance is not enough");
				break;
				case 3:
					printf("enter your bank ID");
					scanf("%d",&correctid);
					if(correctid==ID){
						printf("%s",name);
						printf("\n%s",lastname);
							printf("\nbalance=%d",balance);      
					for(j=0;j<10;j++){
						printf("\nbank statement=%d",t[j]);
					}
					}
					else{
						printf("ID that you entered is incorrect");
					}
			
					break;
					case 5:
					flag=0;
					balance=0;
					pin=(-1);            
						for(j=0;j<10;j++){
						t[j]=0;
					}
					printf("account deleted");
					break;
					case 6:
					return 0;
					case 7:
				printf("enter new pin");
				scanf("%d",&a);
				pin=a;
				printf("your pin changed");
					break;
	
			}
		
			}
				else{
					printf("you dont have any account");
			
				}
				break;
			
			case 2:
				if(flag==1){
					printf("you have already account");
					break;
				}
				else{
						printf("enter name=");
				scanf("%s",name);
				printf("enter last name=");
				scanf("%s",lastname);
				printf("enter new pin=");
				scanf("%d",&pin);
				if(pin==(-1)){
					printf("account has been deleted");
				}
				ID=13215673+Q;
				Q++;
				printf("your bank ID is=%d",ID);
				
				printf("enter amount of money that you want to ad to your card=");
					scanf("%d",&amount);
				if(amount>0){
					balance+=amount;
					t[i]=+amount;
					i++;
					flag=1;     
				
				
	}
				}
			
	break;
	}

	
}
return 0;}
