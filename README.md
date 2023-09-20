Libft 📘
Libft es tu biblioteca C personalizada. Una implementación desde cero de funciones esenciales que cada programador necesita.

🚀 Inicio Rápido
Clona este repositorio.
En tu terminal, usa make all para compilar y obtener libft.a.
¡Listo! Ahora puedes vincular libft.a en tus proyectos.
🎨 Estructura
plaintext
Copy code
.
├── Makefile
├── libft.h
└── src
    ├── ft_atoi.c
    ├── ft_strjoin.c
    ├── ft_substr.c
    ├── ...
    └── ft_putnbr_fd.c
🛠️ Utilizar Makefile
sh
Copy code
make all        # Compilar
make clean      # Eliminar archivos objeto
make fclean     # Eliminar todo menos el código fuente
make re         # Recompilar desde cero
🔍 ¿Qué hay dentro?
Memoria: Funciones como ft_bzero y ft_memcpy para gestionar la memoria.
Strings: Manipula cadenas con funciones como ft_strlen y ft_strchr.
Listas Enlazadas: Herramientas para listas, desde ft_lstnew hasta ft_lstadd_front.
