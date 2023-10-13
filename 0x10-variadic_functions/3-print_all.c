	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sp, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(all, double));
					break;
				case 's':
					s_all = va_arg(all, char *);
					if (!s_all)
						s_all = "(nil)";
					printf("%s%s", sp, s_all);
					break;
				default:
					x++;
					continue;
			}
			sp = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(all);
}
