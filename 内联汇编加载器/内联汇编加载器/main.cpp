#pragma comment(linker, "/section:.data,RWE") // ��data�ε��ڴ����óɿɶ���д��ִ��
#include <Windows.h>

// ��msf���ɵ�Shellcode
unsigned char buf[] = "";


void main() {
	__asm {
		lea eax, buf    // ��buf�ĵ�ַ���ص�eax�Ĵ���
		call eax  // ʹ��callָ����ת��eax�Ĵ���ָ��ĵ�ַ����buf������ʼִ��shellcode
	}
}
