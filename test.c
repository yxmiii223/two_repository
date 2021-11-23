// 打印字符函数
void printf(unsigned char* Str)
{
	while(*Str != '/0')
	{
		USART_Send(*Str++);
	}
}
// 主函数
void main()
{
	printf("hello word");
}
