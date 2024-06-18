#include <stdio.h>
int main(){
	int language,service;
	printf("press 1 for English\n");
	printf("press 2 for Hindi\n");
	printf("press 3 for Gujarati\n");
	printf("Enter your choice:");
	scanf("%d",&language);
	
	switch(language){
//		English language
		case 1:
			printf("Press 1 for Internet Recharge\n");
			printf("Press 2 for Top-up Recharge\n");
			printf("Press 3 for Special Recharge\n");
			printf("Enter your choice:");
			scanf("%d",&service);
			
//			nasted switch case
			switch(service){
				case 1:printf("You have successfully done a Internet Recharge.\n");
				break;
				case 2:printf("You have successfully done a Top-up Recharge.\n");
				break;
				case 3:printf("You have successfully done a Special Recharge.\n");
				break;
				default:printf("Invalid choice for service.\n");
				break;
			}
		break;
//			Hindi language
		case 2:
		
			printf("Internet Recharge ke liye 1 dabaiye\n");
			printf("Top-up Recharge ke liye 2 dabaiye\n");
			printf("Special Recharge ke liye 3 dabaiye\n");
			scanf("%d",&service);
			
//			nasted switch case
			switch(service){
				case 1:printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
				break;
				case 2:printf("Aapne safaltapurvak Top-up Recharge kar liya he.\n");
				break;
				case 3:printf("Aapne safaltapurvak Special Recharge kar liya he.\n");
				break;
				default:printf("Invalid choice for service.\n");
				break;
			}
		break;
		 
//		 Gujarati language
		 
		case 3:
		
			printf("Internet Recharge mate 1 dabavo\n");
			printf("Top-up Recharge mate 2 dabavo");
			printf("Special Recharge mate 3 dabavo");
			scanf("%d",&service);
			
//			nasted switch case			
			switch(service){
				case 1:printf("Tame safaltapurvak Internet Recharge karyu chhe.\n");
				break;
				case 2:printf("Tame safaltapurvak Top-up Recharge karyu chhe.\n");
				break;
				case 3:printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
				break;
				default:printf("Invalid choice for service.\n");
				break;
			}
		break;
		default:printf("Invalid choice for language.\n");
		break;	
	}
	
	return 0;
}
