/*
Description
小张的英语不太好，今天他又要面临英语作文的困扰了。
终于他在ddl的前一秒完成了他的作文，但是由于太过匆忙，很多单词的大小写出现了问题。
请你在一秒之内帮他改完英语作文吧！
Input
给出若干行字符串表示小张的作文，以EOF结束。
保证文章总长度不超过1000000个字符。
整篇文章只有大小写英文字母，空格，'.'，','，'?'，'!'。
并且保证每个标点符号都紧跟前面的单词，单词之间恰好一个空格。
Output
输出修改后的作文，要求每一句第一个单词的首字母大写，其他单词所有字母小写。
'.'，'?'，'!'表示每一句的结束。
*/
#include <stdio.h>
int main(){
	char c;
	int uppAndLow=1;
	while((c=getchar())!=EOF){
		if(c>='A'&&c<='Z')
			c=c+('a'-'A');
		if(c>='a'&&c<='z'&&uppAndLow==1){
			c=c+('A'-'a');
			uppAndLow=0;
		}else if(c>='A'&&c<='Z'&&uppAndLow==0){
			c=c+('a'-'A');
		}else if(c=='\n'||c=='.'||c=='?'||c=='!'){
			uppAndLow=1;
		}
		printf("%c",c);
	}
}
