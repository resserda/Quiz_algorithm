#include <stdio.h>
#include <cstring>
char teenq[3][100]={"�׽����� CEO?(����X)","���̹����� ����� ��Ÿ����?(����X)","�����п�����ǰ�� ����Ĵµ� ���� ��ū?(�빮��)(����X)"};
char teena[3][20]={"�Ϸиӽ�ũ","������","NFT"};
char adultq[3][50]={"�̱��� OTT�� ������ ����?(����X)","������ �����ϴ� ��ǰ�ð�?(����X)","�ʷϻ� �����÷���?(����X)"};
char adulta[3][10]={"���ø���","�ѷ���","���"};
char seniorq[3][100]={"G���� ���� SSG��� ���԰����� �����?(����X)","�ѱ��� ��ǥ ��л�� �����̵��׷��� �����?(����X)","��κ��� ����ϴ� ����� �޽���?(����X)"};
char seniora[3][20]={"������Ŭ��","�����Ϻ�","īī����"};
char p[]={};


main()
{
	int a,i;
	start:printf("���̸� �Է��ϼ���:");
	scanf("%d",&a);
	if(a==0)
	{
		printf("�ٽ� �Է��ϼ���\n");
		goto start;
	}
	else if(1<=a and a<=29)
	{
		for(i=0;i<=2;i++){
			printf("%s\n",teenq+i);
			scanf("%s",&p);
			if(!strcmp(p,*(teena+i)))
			{
				printf("����\n");
			}
			else printf("����\n");
		}
	}
	else if(30<=a and a<=49)
	{
		for(i=0;i<=2;i++){
			printf("%s\n",adultq+i);
			scanf("%s",&p);
			if(!strcmp(p,*(adulta+i)))
			{
				printf("����\n");
			}
			else printf("����\n");
		}
	}
	else
	{
		for(i=0;i<=2;i++){
			printf("%s\n",seniorq+i);
			scanf("%s",&p);
			if(!strcmp(p,*(seniora+i)))
			{
				printf("����\n");
			}
			else printf("����\n");
		}
	}

}
