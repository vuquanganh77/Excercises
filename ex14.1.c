#include<stdio.h>

struct Date{
	int day;
	int month;
	int year;
};

void day_input(struct Date day){
	printf("Nhap ngay:\n");
	scanf("%d",&day.day);
	printf("Nhap thang:\n");
	scanf("%d",&day.month);
	printf("Nhap nam:\n");
	scanf("%d",&day.year);
	
	if(day.month == 1 || day.month == 3 || day.month ==5 || day.month ==7 || day.month ==8 || day.month ==10 || day.month ==12){
		if(day.day<1 || day.day>31){
			printf("Khong co ngay nay!\n");
		}
	}
	
	if(day.month == 4 || day.month == 6 || day.month ==9 || day.month ==11){
		if(day.day<1 || day.day>30){
			printf("Khong co ngay nay!\n");
		}
	}
	
	if(day.month == 2){
		if (((day.year % 4 == 0) && (day.year % 100!= 0)) || (day.year%400 == 0)){
			if(day.day<1 || day.day>29){
			printf("Khong co ngay nay!\n");
			}
		}else{if(day.day<1 || day.day>28){
			printf("Khong co ngay nay!\n");
			}
			
		}
	}
}

void datecmp(struct Date day1, struct Date day2){
	if(day1.year < day2.year){
		printf("%d/%d/%d is before %d/%d/%d", day1.day, day1.month, day1.year, day2.day, day2.month, day2.year);
	}
	if(day1.year > day2.year){
		printf("%d/%d/%d is after %d/%d/%d", day1.day, day1.month, day1.year, day2.day, day2.month, day2.year);
	}
	if(day1.year == day2.year){
		if(day1.month < day2.month){
		printf("%d/%d/%d is before %d/%d/%d", day1.day, day1.month, day1.year, day2.day, day2.month, day2.year);
		}
		if(day1.month > day2.month){
		printf("%d/%d/%d is after %d/%d/%d", day1.day, day1.month, day1.year, day2.day, day2.month, day2.year);
		}
		if(day1.month == day2.month){
			if(day1.day < day2.day){
			printf("%d/%d/%d is before %d/%d/%d", day1.day, day1.month, day1.year, day2.day, day2.month, day2.year);
			}
			if(day1.day > day2.day){
			printf("%d/%d/%d is after %d/%d/%d", day1.day, day1.month, day1.year, day2.day, day2.month, day2.year);
			}
			if(day1.day == day2.day){
			printf("%d/%d/%d is equal to %d/%d/%d", day1.day, day1.month, day1.year, day2.day, day2.month, day2.year);
			}
		}
	}
}

int main(){
	struct Date day1;
	struct Date day2;
	day_input(day1);
	day_input(day2);
	datecmp(day1,day2);
	
	return 0;
}




























