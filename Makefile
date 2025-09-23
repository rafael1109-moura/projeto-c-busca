# Variáveis
CC = gcc
CFLAGS = -I include_c

# Diretórios
SRC_DIR = src_c
TEST_DIR = test_c

# Arquivos
# Corrigido para listar apenas os arquivos necessários
SRC_FILES = $(SRC_DIR)/Bubblesort.c $(SRC_DIR)/busca_seq_ordenada.c $(SRC_DIR)/recursao.c $(SRC_DIR)/primeira_versao_defeituosa.c $(SRC_DIR)/conta_especialidades.c $(SRC_DIR)/recursao_contagem_caracteres.c
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