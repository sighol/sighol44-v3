QMK_HOME = ${HOME}/workspace/keyboards/qmk_firmware
KEYBOARD = sighol/sighol44

BUILD = $(QMK_HOME)/.build/sighol_sighol44_default.uf2
TARGET = /mnt/RPI-RP2

build:
	QMK_HOME=$(QMK_HOME) qmk compile -km default -kb $(KEYBOARD)

flash: build
	bash -c 'while [[ ! -f $(TARGET)/INDEX.HTM ]]; do printf "Waiting...\n"; sleep 1; done; printf "Mounted...\n"; sleep 2'
	cp $(BUILD) $(TARGET)

.PHONY: build flash
