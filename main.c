/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwinfred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 20:00:45 by vwinfred          #+#    #+#             */
/*   Updated: 2021/03/19 20:00:47 by vwinfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <errno.h>
#include <sys/errno.h>


#define sh_strlen printf("\n      🐞 🍄 🦋 +-+-+-+-+-+-+-+-+-+ 🐞 ✨ 🧡\n"); printf("    🍄  🐡  🥒 |f t _ s t r l e n| 🐝  🌕  🍄\n"); printf("      🐝 ✨ 🐡 +-+-+-+-+-+-+-+-+-+ 🌕 🧡 🐡\n\n");
#define sh_write printf("\n      🥰 🥎 🦋 +-+-+-+-+-+-+-+-+ 🥒 ✨ 🌹\n");	printf("    🌹  🦋  😘 |f t _ w r i t e| 🦄  🦋  🥎\n"); printf("      🥎 ✨ 🦋 +-+-+-+-+-+-+-+-+ 🦋 🌸 🥰\n\n");
#define sh_read printf("\n      🥰 💘 🦋 +-+-+-+-+-+-+-+ 🥒 ✨ 🌹\n"); printf("    🌹  🦋  😘 |f t _ r e a d| 💘  🦋  🥎\n"); printf("      💘 ✨ 🦋 +-+-+-+-+-+-+-+ 🦋 🌸 💘\n\n");
#define sh_strcpy printf("\n      🦋 🌸 🦋 +-+-+-+-+-+-+-+-+-+ 🦋 ✨ 🦋\n"); printf("    🦄  🦋  🦋 |f t _ s t r c p y| 🦄  🦋  🔥\n"); printf("      🦋 ✨ 🦋 +-+-+-+-+-+-+-+-+-+ 🦋 🌸 🦋\n\n");
#define sh_strcmp printf("\n      🦋 🥎 🦋 +-+-+-+-+-+-+-+-+-+ 🥒 ✨ 🦋\n"); printf("    🦄  🦋  🥒 |f t _ s t r c m p| 🦄  🦋  🥎\n"); printf("      🥎 ✨ 🦋 +-+-+-+-+-+-+-+-+-+ 🦋 🌸 🦋\n\n");
#define sh_strdup printf("\n      🐞 🧡 🦋 +-+-+-+-+-+-+-+-+-+ 🐞 ✨ 🧡\n"); printf("    🧡  🦋  🥒 |f t _ s t r d u p| 🐝  🦋  🐝\n"); printf("      🐝 ✨ 🦋 +-+-+-+-+-+-+-+-+-+ 🦋 🧡 🐞\n\n");

char		*empty = "";
char		*alpha = "abcdefghijklmnopqrstuvwxyz";
char		*numbers = "0123456789";
char		*hello_world = "Hello world !";
char 		*s1 = "Hello";
char 		*s2 = "Hello!";
char		*lol = "Lol kek\n";
char 		*str1;
char 		*str2;
char 		buf[42];
int 		fd;

void 		clear_buffer(char *buffer, int size)
{
	int i = 0;
	while (i < size)
		buffer[i++] = 0;
}

void 		test_strlen()
{
    sh_strlen
    
    printf("\n🧡 First test:\n");
	printf("original			: %zu\n", strlen(empty));	
	printf("my				: %zu\n", ft_strlen(empty));	
    
    printf("\n🧡 Two test:\n");
	printf("original			: %zu\n", strlen(over_char));	
	printf("my				: %zu\n", ft_strlen(over_char));	
    
    printf("\n🧡 Three test:\n");
	printf("original			: %zu\n", strlen(numbers));	
	printf("my				: %zu\n", ft_strlen(numbers));	
    
    printf("\n🧡 Four test:\n");
	printf("original			: %zu\n", strlen(empty));	
	printf("my				: %zu\n", ft_strlen(empty));	
}


void 	test_strcpy()
{
	sh_strcpy
	
    printf("\n🦋 First test:\n");
	printf("original			: %s\n", strcpy(buf, empty));
	clear_buffer(buf, 42);	
	printf("my				: %s\n", ft_strcpy(buf, empty));
	clear_buffer(buf, 42);

    printf("\n🦋 Two test:\n");
	printf("original			: %s\n", strcpy(buf, hello_world));
	clear_buffer(buf, 42);	
	printf("my				: %s\n", ft_strcpy(buf, hello_world));
	clear_buffer(buf, 42);

    printf("\n🦋 Three test:\n");
	printf("original			: %s\n", strcpy(buf, alpha));
	clear_buffer(buf, 42);	
	printf("my				: %s\n", ft_strcpy(buf, alpha));
	clear_buffer(buf, 42);
	printf("\n");

}

void	 test_strcmp()
{	
	sh_strcmp
    printf("\n🌼 First test:\n");
	printf("original			: %d\n", ft_strcmp(over_char, over_char));
	printf("my				: %d\n\n", strcmp(over_char, over_char));
    printf("\n🌼 Two test:\n");
	printf("original			: %d\n", ft_strcmp(s1, s2));
	printf("my				: %d\n\n", strcmp(s1, s2));
    printf("\n🌼 Three test:\n");
	printf("original			: %d\n", ft_strcmp(empty, empty));
	printf("my				: %d\n\n", strcmp(empty, empty));
	printf("\n🌼 Four test:\n");
	printf("original			: %d\n", ft_strcmp(empty, s2));
	printf("my				: %d\n\n", strcmp(empty, s2));
	printf("\n🌼 Five test:\n");
	printf("original			: %d\n", ft_strcmp(s1, empty));
	printf("my				: %d\n\n", strcmp(s1, empty));
	printf("\n🌼 Six test:\n");
	printf("original			: %d\n", ft_strcmp(over_char, empty));
	printf("my				: %d\n\n", strcmp(over_char, empty));
}

void	 test_write()
{
	sh_write
    printf("\n🌹 First test:\n");
	printf("	< original			: %zu\n", write(1, lol, 7));
	printf("	< my				: %zu\n", write(1, lol, 7));

	printf("\n🌹 Two test:\n");
	printf("original				: %zu\n", write(1, empty, 0));
	printf("my					: %zu\n", ft_write(1, empty, 0));

	printf("\n🌹 Three test:\n");
	printf("original				: %zu\n", write(-7, NULL, 21));
	printf("my					: %zu\n", ft_write(-7, NULL, 21));
	printf("\n");
	
}

void 	test_read()
{   
	sh_read

    printf("\n🥝 First test:\n");
	fd = open("Makefile", O_RDONLY);
	char 		read_buf[1221];
	int ret = 1;
	printf("🌹 Makifile test\noriginal:\n");
	ret = read(fd, read_buf, 1220);
	read_buf[ret] = 0;
	printf("🐝 return: [%d]\n", ret);
	printf("|%s|\n\n", read_buf);
	close(fd);

	fd = open("Makefile", O_RDONLY);
	clear_buffer(read_buf, 1221);
	printf("🌹 Makifile test\nmy:\n");
	ret = ft_read(fd, read_buf, 1220);
	read_buf[ret] = 0;
	printf("🐝 return: [%d]\n", ret);
	printf("|%s|\n\n", read_buf);
	clear_buffer(read_buf, 1221);
	close(fd);

    printf("\n🥝 Two test:\n");
	fd = open("test_my_libasm", O_RDONLY);
	printf("✨ Binary file test ✨, lol\noriginal:\n");
	ret = read(fd, read_buf, 1220);
	read_buf[ret] = 0;
	printf("🐝 return: [%d]\n", ret);
	printf("|%s|\n\n", read_buf);
	close(fd);

	fd = open("test_my_libasm", O_RDONLY);
	clear_buffer(read_buf, 1221);
	printf("✨ Binary file test ✨, lol\nmy:\n");
	ret = ft_read(fd, read_buf, 1220);
	read_buf[ret] = 0;
	printf("🐝 return: [%d]\n", ret);
	printf("|%s|\n\n", read_buf);
	clear_buffer(read_buf, 1221);
	close(fd);

    printf("\n🥝 Three test:\n");
	fd = open("wrong", O_RDONLY);
	printf("🐞 Wrong file 🐞\noriginal:\n");
	ret = read(fd, read_buf, 1220);
	read_buf[ret] = 0;
	printf("🐝 return: [%d]\n", ret);
	printf("|%s|\n\n", read_buf);
	close(fd);

	fd = open("wrong", O_RDONLY);
	clear_buffer(read_buf, 1221);
	printf("🐞 Wrong file 🐞\nmy:\n");
	ret = ft_read(fd, read_buf, 1220);
	read_buf[ret] = 0;
	printf("🐝 return: [%d]\n", ret);
	printf("|%s|\n\n", read_buf);
	clear_buffer(buf, 1221);
	close(fd);
}

void 	test_strdup()
{
	sh_strdup

    printf("\n💕 First test:\n");
	str1 = strdup(hello_world);
	printf("original		: %s\n", str1);
	free(str1);
	str1 = NULL;
	str2 = ft_strdup(hello_world);
	printf("my			: %s\n", str2);
	free(str2);
	str2 = NULL;
	printf("\n");

    printf("\n💕 Two test:\n");
	str1 = strdup(empty);
	printf("original		: %s\n", str1);
	free(str1);
	str1 = NULL;
	str2 = ft_strdup(empty);
	printf("my			: %s\n", str2);
	free(str2);
	str2 = NULL;
	printf("\n");

	printf("\n💕 Three test:\n");
	str1 = strdup(lol);
	printf("original		: %s$\n", str1);
	free(str1);
	str1 = NULL;
	str2 = ft_strdup(lol);
	printf("my			: %s$\n", str2);
	free(str2);
	str2 = NULL;
	printf("\n");
}

int main()
{
	test_strlen();
	test_strcpy();
	test_strcmp();
	test_write();
	test_read();
	test_strdup();
	// test_atoibase();
}