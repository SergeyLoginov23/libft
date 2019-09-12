
#include "libft.h"

int countwords(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((i == 0) && (s[i] != c))
		{
			count++;
			i++;	
		}
		else if ((s[i] != c) && (s[i-1] == c))
		{
			count++;
			i++;
		}	
		else
			i++;
	}
	return (count);
}

int nextword(char *s, int i, char c)
	{
		while (s[i] != '\0' && (s[i] != c))	
		{
			i++;
		}
	return (i);
	}	
char *wordcpy(char *s, int i, char c)
{	
	int j;	
	char *word;
	int k;
	
	k = nextword (s,i,c);
	j = 0;
	word = malloc(sizeof(char)*(k - i + 1));
	while (s[i] != '\0' && (s[i] != c))
	{
		word[j] = s[i];
		j++;
		i++;
	}
	word[j] = '\0';
	return(word);
}
char    **ft_strsplit(char const *s, char c)
{
	int i;
	char **strnew;
	int j;
		
	j = 0;
	i = 0;
	if  (!(strnew = malloc(sizeof(char*)*(countwords((char*)s,c) + 1))))
        return (NULL);
	while (s[i] != '\0')
	{
		if ((i == 0) && (s[i] != c))
		{
				strnew[j] = wordcpy((char*)s, i, c);
				j++;
		}
		else if ((s[i] != c) && (s[i-1] == c))
		{
			strnew[j] = wordcpy((char*)s, i, c);
			j++;
		}
    i++;
	}
  	return (strnew);
}
