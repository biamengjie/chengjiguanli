#include <stdio.h>
struct Student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};
int main()
{
    struct Student www[1000];
    int index = 0;
    printf("xueshengchengjiguanlixitong:\n");
    while (1)
    {
        printf("1---tianjiaxueshengchengji\n");
        printf("2---shanchuxueshengchengji:\n");
        printf("3---xianshisouyouxueshengchengji:\n");
        printf("4---yewu1:suoyouzongfenbujigerdexueshneng:\n");
        printf("5---yuwu2:meiyikedoubujigedexuesheng:\n");
        printf("6---yuwu3:xianshizongfenzuigaodexuesheng:\n");
        printf("7---xianshipingjiunfenzuigao,qiemeiyoubujigekemudexuesheng:\n");
        printf("qingshuruxiangyingdegongnengbianhao:\n");
        int r;
        scanf("%d", &r);
        if (r == 1)
        {
            printf("1---qingshuruxueshengxingming:\n");
            scanf("%s", www[index].name);
            printf("qingshuruxueshengyuwenchengji:\n");
            int yuwen;
            scanf("%d", &yuwen);
            www[index].yuwen = yuwen;
            int shuxue;
            scanf("%d", &shuxue);
            www[index].shuxue = shuxue;
            int yingyu;
            scanf("%d", &yingyu);
            www[index].yingyu = yingyu;
            index++;
            printf("tianjiachengong,dianjihuichejixu:\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (r == 2)
        {
            if (index > 0)
            {
                index--;
                printf("shanchuchengong,dianjihuichejixu:\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                printf("shanchushibai,dianjihuichejixu:\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
            if (r == 3)
            {
                printf("xianshisouyouxueshengchengji:\n");
                for (int i = 0; i < index; i++)
                {
                    printf("%d%s%d%d%d\n", i + 1, www[i].name, www[i].yuwen, www[i].shuxue, www[i].yingyu);
                }
                printf("dianjihuichejixu;\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            if (r == 4)
            {
            }
            if (r == 5)
            {
            }
            if (r == 6)
            {
            }
            if (r == 7)
            {
            }
    }

        return 0;
}