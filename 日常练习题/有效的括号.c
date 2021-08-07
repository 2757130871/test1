//这题考察对栈的理解
//思路:遇到左括号就入栈，遇到右括号就与栈顶的左括号对比，如果匹配就弹栈
//当然，需要考虑多种情况 ： 
// 1."}" 只有右括号的情况 
// 2 "{{]}"括号不匹配的情况
//3 遍历结束，当栈为空才说明是有效的
//此题未free

#define INCREMENT 2 

typedef char DataType;

typedef struct Stack
{
	DataType* s;
	int top;
	int capacity;
}stack;


//初始化栈
void StackInit(stack* stk)
{
	assert(stk);
	stk->s = (stack*)malloc(4 * sizeof(DataType));
	if (!stk->s)
	{
		printf("malloc fail");
		return;
	}

	stk->top = -1;
	stk->capacity = 4;
}

//压栈
void StackPush(stack* stk, DataType val)
{
	assert(stk);

	if (stk->top == stk->capacity - 1)
	{
		//扩容
		DataType* tmp = (DataType*)realloc(stk->s, sizeof(DataType) * stk->capacity * INCREMENT);
		if (!tmp)
		{
			printf("realloc fail");
			exit(-1);
		}
		stk->s = tmp;
		stk->capacity *= INCREMENT;
	}
	stk->top++;
	stk->s[stk->top] = val;
}
//弹栈
DataType StackPop(stack* stk)
{
	assert(stk);

	if (stk->top < 0)
	{
		printf("栈为空!\n");
		return;
	}
	
	return stk->s[stk->top--];
}


//栈为空返回true
bool StackIsEmpty(stack* stk)
{
	assert(stk);
	return stk->top == -1;
}

//从栈底开始打印元素
void StackPrint(stack* stk)
{
	assert(stk);
	if (stk->top == -1)
	{
		printf("stack is null");
		return;
	}
	int i;
	for (i = 0; i <= stk->top; i++)
	{
		printf("%d ", stk->s[i]);
	}

}

//返回栈内元素个数
int StackSize(stack* stk)
{
	assert(stk);
	return stk->top + 1;
}

//返回栈顶元素
DataType StackTop(stack* stk)
{
	assert(stk);
	if (StackIsEmpty(stk))
		return -1;
	return stk->s[stk->top];
	
}
char convert(char c)
{
    if(c == '}')    return '{';
    if(c == ')')    return '(';
    if(c == ']')    return '[';
    return '\0';
}


//思路:遇到左括号就入栈，遇到右括号就与栈顶元素比较，不相等就返回


bool isValid(char* s) {

	if (!s)  return false;

	stack stk;
	StackInit(&stk);

	while (*s)
	{
		if (*s == '{'
			|| *s == '('
			|| *s == '[')
		{
			StackPush(&stk, *s);
			s++;
		}
		else
		{
			if (*s != '}'
				&& *s != ']'
				&& *s != ')')
			{
				return false;
			}
			else
			{
                //当输入:s="}" 只有右括号的情况
                if(StackIsEmpty(&stk))
                    return false;

                if(convert(*s) == StackTop(&stk))
                {
                    StackPop(&stk);
                    s++;
                }
                else
                {
                    return false;
                }
			}

		}

	}

    if(StackIsEmpty(&stk))
        return true;
    
    return false;
}
