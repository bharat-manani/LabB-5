#include <stdio.h>
int main() {
  int device_type, symptom_code;
  
  printf(" Enter device type: ");
  printf(" 1-laptop, 2-smartphone, 3-router ");
  scanf("%d",&device_type);
  
  if (device_type == 1) {
  	printf("Enter symptom code: \n");
  	printf("10 for will not run \n");
  	printf("11 for Overheating \n");
  	printf("12 for slow performance \n");
  	scanf("%d",&symptom_code);
  		switch(symptom_code) {
  			case 10 : printf("check power adapter and battery connections");
  			break;
  			case 11 : printf("clean fans and ensure proper vantilation");
  			break;
  			case 12 : printf("run system diagnostics and check resource system");
  			break;
  		
		  }
  } else ("invaild code");
  
  if (device_type == 2) {
  	printf("Enter symptom code: \n");
  	printf("20 for  batery drains fast \n");
  	printf("21 for No signal \n");
  	printf("22 for Touch screen unresponsive \n");
  	scanf("%d",&symptom_code);
  	
  	switch(symptom_code) {
  			case 20 : printf("Run battery calibration tool and check backgroud apps");
  			break;
  			case 21 : printf("check sim card and network settings");
  			break;
  			case 22 : printf("erform screen calibration test");
  			break;
  		
}
   }else {
   
  	printf("Invaild code");
  }
  
  
   if (device_type == 3) {
  	printf("Enter symptom code: \n ");
  	printf("30 for No internet connection \n");
  	printf("31 for wifi signal weak \n");
  	printf("32 for Device can not connect \n");
  	scanf("%d",&symptom_code);
  	
  	switch(symptom_code) {
  			case 30 :printf("check ISP status");
  			break;
  			case 31 :printf("reposition router and check antena connections");
  			break;
  			case 32 : printf("check MAC filtering and DHP settings");
  			break;
  			
}
  		
  } else ("invaild code");
  
  return 0;
  
  
  
  
  
  
}
