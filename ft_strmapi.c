/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:56:45 by hemottu           #+#    #+#             */
/*   Updated: 2022/11/23 16:20:07 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * s : la chaine de caracteres sur laquelle iterer. (repeter)
 * f : La fonction a appliquer a chaque caractere.
 *
 * Applique la fonction 'f' a chaque caracteres passe en argument pour 
 * creer une nouvelle chaine de caracteres (avec malloc) resultant des 
 * applications successives de 'f'.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	ptr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s || !f || !ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	( )

}*/
