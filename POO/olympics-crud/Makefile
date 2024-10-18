# Nome do executável
TARGET = programa.exe

# Diretórios
SRC_DIR = src
OBJ_DIR = obj
INCLUDE_DIR = include

# Compilador e flags
CC = gcc
CFLAGS = -Wall -I$(INCLUDE_DIR)

# Lista de arquivos fonte
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)

# Arquivos objeto
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC_FILES))

# Regra padrão
all: $(TARGET)

# Regra para criar o executável
$(TARGET): $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $@

# Regra para criar arquivos objeto
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@if not exist $(OBJ_DIR) cmd /C "mkdir $(OBJ_DIR)"
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para limpar os arquivos compilados
clean:
	@if exist $(OBJ_DIR) cmd /C "rmdir /s /q $(OBJ_DIR)"
	@if exist $(TARGET) cmd /C "del $(TARGET)"

# Regra para instalar (exemplo: copiar para o diretório bin do MinGW)
install: $(TARGET)
	@echo Instalando o programa em $(PROGRAM_DIR)...
	@if not exist $(PROGRAM_DIR) cmd /C "mkdir $(PROGRAM_DIR)"
	copy $(TARGET) $(PROGRAM_DIR)

# Regra para desinstalar
uninstall:
	@if exist $(PROGRAM_DIR)\$(TARGET) cmd /C "del $(PROGRAM_DIR)\$(TARGET)"

# Declaração de dependências
-include $(OBJ_FILES:.o=.d)

# Regras para gerar arquivos de dependências
$(OBJ_DIR)/%.d: $(SRC_DIR)/%.cpp
	@if not exist $(OBJ_DIR) cmd /C "mkdir $(OBJ_DIR)"
	$(CC) $(CFLAGS) $< -MM -MT $(@:.d=.o) > $@
