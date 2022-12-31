\n");
    scanf("%d", &d);

    y = (d / 365);
    d = d - (y * 365);

    printf("\n%d Year, and %d Days\n", y, d);

    return 0;
}