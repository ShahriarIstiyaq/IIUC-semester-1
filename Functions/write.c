void write()
{
    FILE *fp;
    fp = fopen("score.txt", "w");
    if (fp == 0)
    {
        printf("Error");
        return;
    }

    fprintf(fp, "%d", highScore);
    fclose(fp);
}