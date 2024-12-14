# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -g -I include/

# Directories
SRC_DIR = src
OBJ_DIR = output/obj
BIN_DIR = output/bin

# Source files and object files
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))
TARGET = $(BIN_DIR)/my_program

# Default target
all: $(TARGET)

# Linking the executable
$(TARGET): $(OBJ_FILES)
	@mkdir -p $(BIN_DIR)
	$(CXX) -o $@ $^

# Compiling object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run target to execute the program
.PHONY: run
run: $(TARGET)
	@echo "Running the program..."
	@$(TARGET)

# Clean up build artifacts
.PHONY: clean
clean:
	rm -rf $(OBJ_DIR)/*.o $(TARGET)