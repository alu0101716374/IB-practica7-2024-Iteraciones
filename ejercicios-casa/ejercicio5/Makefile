# Universidad de La Laguna 
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Kye Brandon Rogers
# @date 27/10/24
# @brief a simple Makefile that creates and/or runs our file

# variable 
file := leap_year

# crea y ejecuta 
all: create run

# crea el archivo ejecutable 
create: $(file).cc
	@echo "creando archivo ejectubale"
	g++ -o $(file) $(file).cc

# ejecuta el archivo
run: $(file)
	@echo "Ejecutando el archivo"
	./$(file)

# borra el archivo ejecutable del directorio
clean: $(file)
	@echo "Borrando el archivo ejecutable"
	rm -f $(file)

