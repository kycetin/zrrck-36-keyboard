SRC = $(shell find keyboards -type f)

COPIED = $(addprefix ../qmk_firmware/,$(SRC))

DIRS = $(sort $(foreach file,$(COPIED),$(dir $(file))))


zrrck_36_default.hex: ../qmk_firmware/zrrck_36_default.hex
	cp $< $@

../qmk_firmware/zrrck_36_default.hex: $(COPIED)
	make -C ../qmk_firmware zrrck_36:default

$(DIRS):
	mkdir -p $@

define make-goal
../qmk_firmware/$1: $1 | ../qmk_firmware/$2
	cp $$< $$@
endef

$(foreach file,$(SRC),$(eval $(call make-goal,$(file),$(dir $(file)))))

