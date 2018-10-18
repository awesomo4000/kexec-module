#define CONFIG_KEXEC 1
#include <linux/kexec.h>
#undef  VMCOREINFO_SYMBOL
#define VMCOREINFO_SYMBOL(_) do {} while (0)

MODULE_INFO(vermagic, "3.18.48LE.UM.1.2-29600-9x07-136-g7f63904 preempt mod_unload ARMv7 p2v8 ");
MODULE_LICENSE("GPL");
