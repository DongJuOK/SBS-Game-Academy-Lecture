#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define SIZE 10

int main()
{

#pragma region 포인터 배열
	//  const char * dialog[SIZE];
	//  
	//  dialog[0] = "안녕하세요?";
	//  dialog[1] = "누구신가요?";
	//  dialog[2] = "탐정입니다.";
	//  dialog[3] = "아, 반갑습니다.";
	//  dialog[4] = "무슨 사건이 있었나요?";
	//  dialog[5] = "집에서 물건이 사라졌어요.";
	//  dialog[6] = "제가 집을 살펴봐도 될까요?";
	//  dialog[7] = "물론이죠.";
	//  dialog[8] = "결과는 내일 말씀드리겠습니다.";
	//  dialog[9] = "네, 알겠습니다.";
	//  
	//  // 탐정   [5] 대사
	//  // 의뢰인 [5] 대사
	//  
	//  // 스페이스  
	//  
	//  int count = 0;
	//  
	//  while (count < SIZE)
	//  {
	//  	// 0x0000 : 이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태
	//  	
	//  	// 0x0001 : 이전에 누른 적이 있고 호출 시점에는 눌려있지 않은 상태
	//  
	//  	// 0x8000 : 이전에 누른 적이 없고 호출 시점에는 눌려있는 상태
	//  
	//  	// 0x8001 : 이전에 누른 적이 있고 호출 시점에도 눌려있는 상태
	//  
	//  	//                     0x20    & 0x0001
	//  	if (GetAsyncKeyState(VK_SPACE) & 0x0001)
	//  	{
	//  		if (count % 2 == 0)
	//  		{
	//  			printf("탐정: %s\n", dialog[count]);
	//  		}
	//  		else
	//  		{
	//  			printf("의뢰인: %s\n", dialog[count]);
	//  		}
	//  
	//  		count++;
	//  	}
	//  }
	//  
	//  Sleep(2000);
	//  
	//  printf("\n대화가 종료되었습니다.\n");

#pragma endregion

	return 0;
}