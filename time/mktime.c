#include<stdio.h>
#include<time.h>

int main() {
	time_t t = time(NULL);
	struct tm *loct = localtime(&t);
	loct->tm_year += 1;
	time_t t2 = mktime(loct);
	printf("time is %ld\n",t2);
	return 0;
}
