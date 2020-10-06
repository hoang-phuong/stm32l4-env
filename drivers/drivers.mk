# Target
DRIVERS_AR      := $(LIBOUT_DIR)/drivers.a

LINKERSCRIPT    := $(DRIVERS_DIR)/$(TARGET_PLATFORM)/Linker.ld

# Build directories
DRIVERS_SRC_DIR := $(DRIVERS_DIR)/$(TARGET_PLATFORM)/src
DRIVERS_INC_DIR := $(DRIVERS_DIR)/$(TARGET_PLATFORM)/inc
DRIVERS_OBJ_DIR := $(OBJOUT_DIR)/drivers

DRIVERS_SRC     := $(wildcard $(DRIVERS_SRC_DIR)/*.c)
DRIVERS_OBJ     := $(patsubst $(DRIVERS_SRC_DIR)/%.c,$(DRIVERS_OBJ_DIR)/%.o,$(DRIVERS_SRC))

CMSIS_INC_DIR   := $(DRIVERS_DIR)/cmsis/inc

INCLUDES += -I$(DRIVERS_INC_DIR) -I$(CMSIS_INC_DIR)

$(DRIVERS_AR): $(DRIVERS_OBJ)
	@echo "--------------------------------------------------------------------------------"
	@echo ">>> Archiving device drivers..."
	@$(AR) -r $@ $(DRIVERS_OBJ)
	@echo ">>> Created $@"

$(DRIVERS_OBJ_DIR)/%.o: $(DRIVERS_SRC_DIR)/%.c | $(DRIVERS_OBJ_DIR)
	@echo "--------------------------------------------------------------------------------"
	@echo ">>> Compiling $*.c ..."
	@$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^
	@echo ">>> Created $@"

$(DRIVERS_OBJ_DIR):
	@echo "--------------------------------------------------------------------------------"
	@echo ">>> Creating subdirectory for driver objects..."
	@$(MKDIR) $@
	@echo ">>> Created $@"
