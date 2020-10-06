# Target
APP_HEX := $(BINOUT_DIR)/$(APP).hex
APP_ELF := $(BINOUT_DIR)/$(APP).elf
APP_MAP := $(BINOUT_DIR)/$(APP).map

APP_OBJ_DIR := $(OBJOUT_DIR)/$(APP)
APP_SRC_DIR := $(APP_DIR)/src
APP_INC_DIR := $(APP_DIR)/inc
APP_SRC     := $(wildcard $(APP_SRC_DIR)/*.c)
APP_OBJ     := $(patsubst $(APP_SRC_DIR)/%.c,$(APP_OBJ_DIR)/%.o,$(APP_SRC))

COMMON_SRC_DIR := $(COMMON_DIR)/src
COMMON_INC_DIR := $(COMMON_DIR)/inc
COMMON_OBJ_DIR := $(OBJOUT_DIR)/common
COMMON_SRC     := $(wildcard $(COMMON_SRC_DIR)/*.c)
COMMON_OBJ     := $(patsubst $(COMMON_SRC_DIR)/%.c,$(COMMON_OBJ_DIR)/%.o,$(COMMON_SRC))

INCLUDES += -I$(APP_INC_DIR) -I$(COMMON_INC_DIR)

$(APP_HEX): $(APP_ELF)
	@echo "--------------------------------------------------------------------------------"
	@echo ">>> Creating HEX file from ELF format..."
	@$(OBJCOPY) -O ihex $(APP_ELF) $(APP_HEX)
	@echo ">>> Created $@"

$(APP_ELF): $(DRIVERS_AR) $(APP_OBJ) $(COMMON_OBJ)
	@echo $(APP_SRC_DIR)
	@echo "--------------------------------------------------------------------------------"
	@echo ">>> Linking objects and libraries..."
	@$(LD) $(LDFLAGS) -T $(LINKERSCRIPT) -Map=$(APP_MAP) -o $@ $^
	@echo ">>> Created $@"

$(APP_OBJ_DIR)/%.o: $(APP_SRC_DIR)/%.c | $(APP_OBJ_DIR)
	@echo "--------------------------------------------------------------------------------"
	@echo ">>> Compiling $*.c ..."
	@$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^
	@echo ">>> Created $@"

$(COMMON_OBJ_DIR)/%.o: $(COMMON_SRC_DIR)/%.c | $(COMMON_OBJ_DIR)
	@echo "--------------------------------------------------------------------------------"
	@echo ">>> Compiling $*.c ..."
	@$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^
	@echo ">>> Created $@"

$(APP_OBJ_DIR):
	@echo "--------------------------------------------------------------------------------"
	@echo ">>> Creating directory for application objects..."
	@$(MKDIR) $@
	@echo ">>> Created $@"

$(COMMON_OBJ_DIR):
	@echo "--------------------------------------------------------------------------------"
	@echo ">>> Creating directory for common objects..."
	@$(MKDIR) $@
	@echo ">>> Created $@"
