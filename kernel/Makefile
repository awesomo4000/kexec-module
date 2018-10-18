KDIR  ?= ~/src/linux-3.18-msm
CROSS ?= armv7-unknown-linux-gnueabihf-
ARCH  ?= arm

default: orig
	$(MAKE) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS) -C $(KDIR) M=$(PWD)
	echo
	-ls -la kexec-mod.ko
	echo
	modinfo kexec-mod.ko
	echo

orig:
	-mkdir $@
	-cp -a $(KDIR)/arch/$(ARCH)/kernel/relocate_kernel.S $(PWD)
	-cp -a $(KDIR)/arch/$(ARCH)/kernel/machine_kexec.c $@/
	-cp -a $(KDIR)/kernel/kexec.c $@/

clean:
	-rm *.o
	-rm .*.cmd
	-rm relocate_kernel.S
	-rm -rf ./orig
	-rm -rf ./.tmp_versions
	-rm modules.order
	-rm Module.symvers
	-rm kexec-mod.mod.c

distclean: clean
	-rm *.ko

