#include <stdio.h>
char arr[1024];
int index = 0;

int main()
{

    printf("敏感字符管理系统\n");

    while (1)
    {
        printf("1---添加敏感字符\n");
        printf("2---删除敏感字符（最后一个）\n");
        printf("3---查看敏感字符\n");
        printf("4---替换敏感字符\n");
        printf("5---退出\n");

        printf("请输入相应的功能编号\n");

        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入要添加的敏感字符\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);

            arr[index] = m;
            index++;

            printf("添加成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("删除最后一个敏感字符\n");
            if (index == 0)
            {
                printf("删除失败,点击回车继续\n");
            }
            else
            {
                index--;
                printf("删除成功，点击回车继续\n");
            }
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {
            printf("你的敏感字符为：\n");
            for (int i = 0; i < index; i++)
            {
                printf("你的第%d个敏感字符为%c\n", i + 1, arr[i]);
            }

            printf("点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("请输入一段英文\n");
            char str[1024];
            scanf("%s", str);
            for (int i = 0; str[i] != '\0'; i++)
            {
                char a = str[i];
                int flag = 0;
                for (int j = 0; j < index; j++)
                {
                    if (a == arr[j])
                    {
                        flag = 1;
                    }
                }
                if (flag != 0)
                {
                    str[i] = '*';
                }
            }
            printf("%s\n", str);
            printf("点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {
            printf("程序结束\n");
            break;
        }
    }

    return 0;
}