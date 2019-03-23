#include <iostream>
using namespace std;
int main() {
	int height,weight,bmi;
	printf("請輸入你的身高: ");
	scanf("%d",&height);
	printf("請輸入你的體重: ");
	scanf("%d", &weight);

	bmi= weight / ((height / 100.0) * (height / 100.0)); 
	printf ("your BMI is: %d",bmi);
	system("pause");
	return 0;

}
