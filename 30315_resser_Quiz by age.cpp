#include <stdio.h>
#include <cstring>
char teenq[3][100]={"테슬라의 CEO?(띄어쓰기X)","네이버에서 출시한 메타버스?(띄어쓰기X)","디지털예술작품을 사고파는데 쓰는 토큰?(대문자)(띄어쓰기X)"};
char teena[3][20]={"일론머스크","제페토","NFT"};
char adultq[3][50]={"미국의 OTT로 유명한 것은?(띄어쓰기X)","ㄹ으로 시작하는 명품시계?(띄어쓰기X)","초록색 음악플랫폼?(띄어쓰기X)"};
char adulta[3][10]={"넷플릭스","롤렉스","멜론"};
char seniorq[3][100]={"G마켓 옥션 SSG등에서 가입가능한 멤버쉽?(띄어쓰기X)","한국의 대표 언론사로 조선미디어그룹의 언론은?(띄어쓰기X)","대부분이 사용하는 노란색 메신저?(띄어쓰기X)"};
char seniora[3][20]={"스마일클럽","조선일보","카카오톡"};
char p[]={};


main()
{
	int a,i;
	start:printf("나이를 입력하세요:");
	scanf("%d",&a);
	if(a==0)
	{
		printf("다시 입력하세요\n");
		goto start;
	}
	else if(1<=a and a<=29)
	{
		for(i=0;i<=2;i++){
			printf("%s\n",teenq+i);
			scanf("%s",&p);
			if(!strcmp(p,*(teena+i)))
			{
				printf("정답\n");
			}
			else printf("오답\n");
		}
	}
	else if(30<=a and a<=49)
	{
		for(i=0;i<=2;i++){
			printf("%s\n",adultq+i);
			scanf("%s",&p);
			if(!strcmp(p,*(adulta+i)))
			{
				printf("정답\n");
			}
			else printf("오답\n");
		}
	}
	else
	{
		for(i=0;i<=2;i++){
			printf("%s\n",seniorq+i);
			scanf("%s",&p);
			if(!strcmp(p,*(seniora+i)))
			{
				printf("정답\n");
			}
			else printf("오답\n");
		}
	}

}
