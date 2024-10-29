

void delay_ms(unsigned int x)  // 延时函数
{
    unsigned int i,j;
    if(x==1000)
    {
        for(i=0;i<19601;i++)//延时1s
        {
            for(j=5;j>0;j--);
        }
    }
    else while(x--)for(j=115;j>0;j--);
}

// tips: 原理图当中led为低电平点亮，比如点亮LED2,代码为： P0 = 0xFE (1111 1110)


int main(void)
{
    """
    在下方编写你的代码
    """
    while (1)
    {
        for (i = 0; i < 8; i++)  // 从左到右依次点亮
        {
            P0 = led_code[i];  // 输出控制码点亮相应的灯
            delay_ms(500);  // 延时 500ms
        }
    }

 

    return 0;
}

