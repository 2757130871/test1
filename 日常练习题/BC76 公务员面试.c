#include <stdio.h>


//记录最大值和最小值 最后减去就好了
int main()
{
    int score=0;
    int max = -1;
    int min = 101;
    int i;
    
    for(i=0;i<7;i++)
    {
        int tmp;
        scanf("%d",&tmp);
        score+=tmp;
        if(max<tmp)
            max = tmp;
        if(min>tmp)
            min = tmp;
    }
    printf("%.2lf",(score -min-max)/5.0);//%后面加.2（保留两位有效数字）
    
  
    return 0;
}
