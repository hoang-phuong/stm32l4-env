# Application
APP := blinky

# Target platform
TARGET_PLATFORM := stm32l4
OPEN_OCD_CFG    := board/stm32l4discovery.cfg

# Ultilities
RM    := rm -rf
MKDIR := mkdir -p

# OpenOCD settings
OPEN_OCD_BIN :=

# Toolchain settings
TOOLCHAIN_PREFIX := arm-none-eabi
CC      := $(TOOLCHAIN_PREFIX)-gcc
AS      := $(TOOLCHAIN_PREFIX)-as
LD      := $(TOOLCHAIN_PREFIX)-ld
AR      := $(TOOLCHAIN_PREFIX)-ar
SIZE    := $(TOOLCHAIN_PREFIX)-size
GDB     := $(TOOLCHAIN_PREFIX)-gdb
OBJCOPY := $(TOOLCHAIN_PREFIX)-objcopy
OBJDUMP := $(TOOLCHAIN_PREFIX)-objdump

# Toolchain options
OPT_OPTS   := -O0
DEBUG_OPTS := -g
STD_OPTS   := -std=c99
MCU_OPTS   := -mcpu=cortex-m4 -mthumb -mlittle-endian
WARN_OPTS  := -Wall \
			  -Wextra \
			  -Wfloat-equal \
			  -Wundef \
			  -Wshadow \
			  -Wpointer-arith \
			  -Wcast-align \
			  -Wstrict-prototypes \
			  -Wcast-qual \
			  -Wswitch-default \
			  -Wswitch-enum \
			  -Wconversion \
			  -Wunreachable-code \
			  -Wno-unused-function

CFLAGS := -c $(OPT_OPTS) $(DEBUG_OPTS) $(STD_OPTS) $(MCU_OPTS) $(WARN_OPTS) \
			-mno-unaligned-access \
			-fno-builtin \
			-ffunction-sections \
			-fdata-sections \
			-fno-common \
			-ffreestanding

LDFLAGS := --gc-sections

# Build directories
APP_DIR     := app/$(APP)
TOOLS_DIR   := tools
GDB_CMD_DIR := $(TOOLS_DIR)/gdb
OUTPUT_DIR  := out
LIBOUT_DIR  := $(OUTPUT_DIR)/lib
BINOUT_DIR  := $(OUTPUT_DIR)/bin
OBJOUT_DIR  := $(OUTPUT_DIR)/obj
DRIVERS_DIR := drivers
COMMON_DIR  := common

INCLUDES :=

include $(DRIVERS_DIR)/drivers.mk
include $(APP_DIR)/$(APP).mk

.PHONY: build-app build-drivers flash clean help

build-app: create-output-dir $(APP_HEX)
build-drivers: create-output-dir $(DRIVERS_AR)

flash: build-app
	@openocd -f $(OPEN_OCD_CFG) -c "program $(BINOUT_DIR)/$(APP).elf verify reset exit"

debug:
	@start openocd -f $(OPEN_OCD_CFG)
	@start $(GDB) -q ./$(BINOUT_DIR)/$(APP).elf -x $(GDB_CMD_DIR)/attach-on-openocd

create-output-dir:
	@echo "--------------------------------------------------------------------------------"
	@echo ">>> Creating output directories..."
	@$(MKDIR) $(OUTPUT_DIR)/bin
	@$(MKDIR) $(OUTPUT_DIR)/obj
	@$(MKDIR) $(OUTPUT_DIR)/lib
	@echo ">>> Done."

clean:
	@echo "--------------------------------------------------------------------------------"
	@echo ">>> Removing output..."
	@$(RM) $(OUTPUT_DIR)
	@echo ">>> Done."

help:
	@echo ">>> Please make sure to configure target architecture and toolchain in Makefile"
	@echo ">>> Build system consists of the following build commands:"
	@echo "    make help:          print this"
	@echo "    make build-app:     build necessary libraries and application"
	@echo "    make build-drivers: build device drivers as static library"
