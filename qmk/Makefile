QMK_HOME = ${HOME}/workspace/keyboards/qmk_firmware
KEYBOARD = sighol/sighol44

BUILD = $(QMK_HOME)/.build/sighol_sighol44_default.uf2
TARGET = /mnt/RPI-RP2

build:
	rm -f $(BUILD)
	QMK_HOME=$(QMK_HOME) qmk compile -km default -kb $(KEYBOARD)
	@[[ -f "$(BUILD)" ]] || bash -c "echo build did not produce build target; exit 1"

flash: build
	bash -c 'while [[ ! -f $(TARGET)/INDEX.HTM ]]; do printf "Waiting...\n"; sleep 1; done; printf "Mounted...\n"; sleep 2'
	cp $(BUILD) $(TARGET)

.PHONY: build flash
