# Variáveis
CC = gcc
CFLAGS = -I include_c

# Diretórios
SRC_DIR = src_c
TEST_DIR = test_c

# Arquivos
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
TEST_FILE = $(TEST_DIR)/test_algorithms.c
EXECUTABLE = a.exe

# Regra principal para compilar e testar
test_c: $(EXECUTABLE)
	./$(EXECUTABLE)

$(EXECUTABLE): $(SRC_FILES) $(TEST_FILE)
	$(CC) $(CFLAGS) $(SRC_FILES) $(TEST_FILE) -o $(EXECUTABLE)

# Limpeza
clean:
	rm -f $(EXECUTABLE)
