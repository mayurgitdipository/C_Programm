#include<stdio.h>
#include<stdlib.h>

bool CheckPallindrome(int iNo)
{
	int iDigit = 0, iRev = 0;
	int iTemp = iNo;

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10 ) + iDigit;
		iNo = iNo / 10;
	}
	if(iRev == iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
}



int main()
{
	int iValue = 0;
	bool bRet = false;
	


	printf("Please enter number :\n");
	scanf("%d",&iValue);


	bRet = CheckPallindrome(iValue);

	if(bRet == true)
	{
		printf("%d is a pallindrome number \n",iValue);
	}
	else
	{
		printf("%d is not a pallindrome number \n",iValue);
	}
	
	reuturn 0;
}


	

	return 0;
}