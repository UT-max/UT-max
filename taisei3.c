int main()
{
    int k,l;
    printf("英語の点数は？");
    scanf("%d",&k);
    printf("社会の点数は？");
    scanf("%d" ,&l);
    if (k+l >= 200)
    {
        printf("天才");
    }
    else if (k+l >=120)
    {
        printf("普通");
    }
    
    else
    {
        printf("ダメ");
    }
    
    

    return 0;
}