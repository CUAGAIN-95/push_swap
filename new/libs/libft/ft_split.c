/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 02:25:26 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/07 00:26:49 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int		count_word(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			i++;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			i++;
	}
	return (count);
}

int		count_chr(const char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	**ft_free(char **s, int size)
{
	int		i;

	i = 0;
	while (i <= size)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

char	**ft_getsubs(char const *s, char c, char **tab, int nb_word)
{
	int		i;
	int		p;
	int		nb_chr;

	i = 0;
	p = 0;
	while (p < nb_word)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		nb_chr = count_chr(&s[i], c);
		if (!(tab[p] = ft_substr(s, (unsigned int)(i), nb_chr)))
		{
			ft_free(tab, p);
			return (0);
		}
		i += nb_chr;
		p++;
	}
	tab[p] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		nb_word;
	char	**result;

	if (s)
	{
		nb_word = count_word(s, c);
		result = (char **)malloc(sizeof(char *) * (nb_word + 1));
		if (result)
			return (ft_getsubs(s, c, result, nb_word));
	}
	return (0);
}
