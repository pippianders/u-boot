/**
 * Common SPI boot definitions for SpaceX Catson board configuration files.
 *
 * Assumes 128Mbyte SPI-NOR flash layout and 1GB of available DDR.
 * Must match Linux kernel layout & JTAG flashing scripts.
 */

#ifndef __SPACEX_CATSON_SPI_BOOT_H
#define __SPACEX_CATSON_SPI_BOOT_H

/*-----------------------------------------------------------------------
 * 128MByte Flash layout (see also linux device tree)
 *
 * +-----------------+ 0x0000_0000
 * | bootfip0 (1 MB) |
 * +-----------------+ 0x0010_0000
 * | bootfip1 (1 MB) |
 * +-----------------+ 0x0020_0000
 * | bootfip2 (1 MB) |
 * +-----------------+ 0x0030_0000
 * | bootfip3 (1 MB) |
 * +-----------------+ 0x0040_0000
 * | bootterm1(512k) |
 * +-----------------+ 0x0048_0000
 * | bootmask1 (512k)|
 * +-----------------+ 0x0050_0000
 * | bootterm2(512k) |
 * +-----------------+ 0x0058_0000
 * | bootmask2 (512k)|
 * +-----------------+ 0x0060_0000
 * | fip  a.0 (1 MB) |
 * +-----------------+ 0x0070_0000
 * | fip  b.0 (1 MB) |
 * +-----------------+ 0x0080_0000
 * | fip  a.1 (1 MB) |
 * +-----------------+ 0x0090_0000
 * | fip  b.1 (1 MB) |
 * +-----------------+ 0x00A0_0000
 * | fipterm1 (1 MB) |
 * +-----------------+ 0x00B0_0000
 * | fipterm2 (1 MB) |
 * +-----------------+ 0x00C0_0000
 * | unused          |
 * +-----------------+ 0x00F0_0000
 * | mtdoops         |
 * +-----------------+ 0x00F3_0000
 * | version a(128k) |
 * +-----------------+ 0x00F5_0000
 * | version b(128k) |
 * +-----------------+ 0x00F7_0000
 * | secrets a(128k) |
 * +-----------------+ 0x00F9_0000
 * | secrets b(128k) |
 * +-----------------+ 0x00FB_0000
 * | sxid     (320k) |
 * +-----------------+ 0x0100_0000
 * | linux a (32 MB) |
 * +-----------------+ 0x0300_0000
 * | linux b (32 MB) |
 * +-----------------+ 0x0500_0000
 * | sx a    (24 MB) |
 * +-----------------+ 0x0680_0000
 * | sx b    (24 MB) |
 * +-----------------+ 0x0800_0000
 */
#define CATS_FIP_SIZE 0x100000
#define CATS_BOOTMASK_SIZE (CATS_FIP_SIZE / 2)

#define CATS_BOOTFIP_0_OFFSET 0x00000000
#define CATS_BOOTFIP_0_SIZE CATS_FIP_SIZE
#define CATS_BOOTFIP_1_OFFSET 0x100000
#define CATS_BOOTFIP_1_SIZE CATS_FIP_SIZE
#define CATS_BOOTFIP_2_OFFSET 0x200000
#define CATS_BOOTFIP_2_SIZE CATS_FIP_SIZE
#define CATS_BOOTFIP_3_OFFSET 0x300000
#define CATS_BOOTFIP_3_SIZE CATS_FIP_SIZE
#define CATS_BOOTTERM1_OFFSET 0x400000
#define CATS_BOOTTERM1_SIZE 0x80000
#define CATS_BOOTMASK1_OFFSET 0x480000
#define CATS_BOOTMASK1_SIZE CATS_BOOTMASK_SIZE
#define CATS_BOOTTERM2_OFFSET 0x500000
#define CATS_BOOTTERM2_SIZE 0x80000
#define CATS_BOOTMASK2_OFFSET 0x580000
#define CATS_BOOTMASK2_SIZE CATS_BOOTMASK_SIZE
#define CATS_BOOT_A_0_OFFSET 0x600000
#define CATS_BOOT_A_0_SIZE CATS_FIP_SIZE
#define CATS_BOOT_B_0_OFFSET 0x700000
#define CATS_BOOT_B_0_SIZE CATS_FIP_SIZE
#define CATS_BOOT_A_1_OFFSET 0x800000
#define CATS_BOOT_A_1_SIZE CATS_FIP_SIZE
#define CATS_BOOT_B_1_OFFSET 0x900000
#define CATS_BOOT_B_1_SIZE CATS_FIP_SIZE
#define CATS_UBOOT_TERM1_OFFSET 0xA00000
#define CATS_UBOOT_TERM1_SIZE 0x100000
#define CATS_UBOOT_TERM2_OFFSET 0xB00000
#define CATS_UBOOT_TERM2_SIZE 0x100000
#define CATS_UNUSED_OFFSET 0xC00000
#define CATS_UNUSED_SIZE 0x300000
#define CATS_MTDOOPS_OFFSET 0xF00000
#define CATS_MTDOOPS_SIZE 0x30000
#define CATS_VERSION_INFO_A_OFFSET 0xF30000
#define CATS_VERSION_INFO_A_SIZE 0x20000
#define CATS_VERSION_INFO_B_OFFSET 0xF50000
#define CATS_VERSION_INFO_B_SIZE 0x20000
#define CATS_SECRETS_A_OFFSET 0xF70000
#define CATS_SECRETS_A_SIZE 0x20000
#define CATS_SECRETS_B_OFFSET 0xF90000
#define CATS_SECRETS_B_SIZE 0x20000
#define CATS_SXID_OFFSET 0xFB0000
#define CATS_SXID_SIZE 0x50000
#define CATS_KERNEL_A_OFFSET 0x1000000
#define CATS_KERNEL_A_SIZE 0x1800000
#define CATS_CONFIG_A_OFFSET 0x2800000
#define CATS_CONFIG_A_SIZE 0x800000
#define CATS_KERNEL_B_OFFSET 0x3000000
#define CATS_KERNEL_B_SIZE 0x1800000
#define CATS_CONFIG_B_OFFSET 0x4800000
#define CATS_CONFIG_B_SIZE 0x800000
#define CATS_SX_A_OFFSET 0x5000000
#define CATS_SX_A_SIZE 0x1800000
#define CATS_SX_B_OFFSET 0x6800000
#define CATS_SX_B_SIZE 0x1800000
#define CATS_EDR_OFFSET 0x8000000
#define CATS_EDR_SIZE 0x93D1C00
#define CATS_DISH_CONFIG_OFFSET 0x113D1C00
#define CATS_DISH_CONFIG_SIZE 0x2000000

#if (CATS_BOOTFIP_0_OFFSET + CATS_BOOTFIP_0_SIZE != CATS_BOOTFIP_1_OFFSET)  || \
	(CATS_BOOTFIP_1_OFFSET + CATS_BOOTFIP_1_SIZE != CATS_BOOTFIP_2_OFFSET)  || \
	(CATS_BOOTFIP_2_OFFSET + CATS_BOOTFIP_2_SIZE != CATS_BOOTFIP_3_OFFSET)  || \
	(CATS_BOOTFIP_3_OFFSET + CATS_BOOTFIP_3_SIZE != CATS_BOOTTERM1_OFFSET)  || \
	(CATS_BOOTTERM1_OFFSET + CATS_BOOTTERM1_SIZE != CATS_BOOTMASK1_OFFSET)  || \
	(CATS_BOOTMASK1_OFFSET + CATS_BOOTMASK1_SIZE != CATS_BOOTTERM2_OFFSET)  || \
	(CATS_BOOTTERM2_OFFSET + CATS_BOOTTERM2_SIZE != CATS_BOOTMASK2_OFFSET)  || \
	(CATS_BOOTMASK2_OFFSET + CATS_BOOTMASK2_SIZE != CATS_BOOT_A_0_OFFSET)   || \
	(CATS_BOOT_A_0_OFFSET + CATS_BOOT_A_0_SIZE != CATS_BOOT_B_0_OFFSET)     || \
	(CATS_BOOT_B_0_OFFSET + CATS_BOOT_B_0_SIZE != CATS_BOOT_A_1_OFFSET)     || \
	(CATS_BOOT_A_1_OFFSET + CATS_BOOT_A_1_SIZE != CATS_BOOT_B_1_OFFSET)     || \
	(CATS_BOOT_B_1_OFFSET + CATS_BOOT_B_1_SIZE != CATS_UBOOT_TERM1_OFFSET)  || \
	(CATS_UBOOT_TERM1_OFFSET + CATS_UBOOT_TERM1_SIZE != \
		CATS_UBOOT_TERM2_OFFSET) || \
	(CATS_UBOOT_TERM2_OFFSET + CATS_UBOOT_TERM2_SIZE != CATS_UNUSED_OFFSET) || \
	(CATS_UNUSED_OFFSET + CATS_UNUSED_SIZE != CATS_MTDOOPS_OFFSET)          || \
	(CATS_MTDOOPS_OFFSET + CATS_MTDOOPS_SIZE != CATS_VERSION_INFO_A_OFFSET) || \
	(CATS_VERSION_INFO_A_OFFSET + CATS_VERSION_INFO_A_SIZE != \
		CATS_VERSION_INFO_B_OFFSET)   || \
	(CATS_VERSION_INFO_B_OFFSET + CATS_VERSION_INFO_B_SIZE != \
		CATS_SECRETS_A_OFFSET)   || \
	(CATS_SECRETS_A_OFFSET + CATS_SECRETS_A_SIZE != CATS_SECRETS_B_OFFSET)  || \
	(CATS_SECRETS_B_OFFSET + CATS_SECRETS_B_SIZE != CATS_SXID_OFFSET)    || \
	(CATS_SXID_OFFSET + CATS_SXID_SIZE != CATS_KERNEL_A_OFFSET)             || \
	(CATS_KERNEL_A_OFFSET + CATS_KERNEL_A_SIZE != CATS_CONFIG_A_OFFSET)     || \
	(CATS_CONFIG_A_OFFSET + CATS_CONFIG_A_SIZE != CATS_KERNEL_B_OFFSET)     || \
	(CATS_KERNEL_B_OFFSET + CATS_KERNEL_B_SIZE != CATS_CONFIG_B_OFFSET)     || \
	(CATS_CONFIG_B_OFFSET + CATS_CONFIG_B_SIZE != CATS_SX_A_OFFSET)         || \
	(CATS_SX_A_OFFSET + CATS_SX_A_SIZE != CATS_SX_B_OFFSET)                 || \
	(CATS_SX_B_OFFSET + CATS_SX_B_SIZE != CATS_EDR_OFFSET)                  || \
	(CATS_EDR_OFFSET + CATS_EDR_SIZE != CATS_DISH_CONFIG_OFFSET)        || \
	(CATS_DISH_CONFIG_OFFSET + CATS_DISH_CONFIG_SIZE != 0x133D1C00)
#error "Bad flash layout"
#endif

#if (CATS_KERNEL_A_SIZE != CATS_KERNEL_B_SIZE)
#error "Kernel size mismatch"
#endif

#if (CATS_BOOT_A_0_SIZE != CATS_BOOT_B_0_SIZE) || \
		(CATS_BOOT_B_0_SIZE != CATS_BOOT_A_1_SIZE) || \
		(CATS_BOOT_A_1_SIZE != CATS_BOOT_B_1_SIZE)
#error "Boot size mismatch"
#endif

/**
 * Memory addresses.
 */
#define CATS_FIP_LOAD_ADDR 0x80000000
#define CATS_FIP_REF_ADDR 0x8000000c
#define CATS_BOOTFIP_LOAD_ADDR 0x80100000
/* Address for per bootfip ref ctr.  Must be unique among bootfips */
#define CATS_TERM_LOAD_ADDR 0x81000000
#define CATS_TERM_TOC_SER_ADDR 0x81000004
#define CATS_TERM_SCRATCH_ADDR 0x82000000
#define CATS_TERM_TOC_SER_VAL 0xA1048824 /* Defined in ATF */
#define CATS_KERNEL_LOAD_ADDR 0xA0000000
#define CATS_KERNEL_BOOT_ADDR 0xA2000000
#define CATS_TFTP_ADDR (CATS_KERNEL_LOAD_ADDR + CATS_KERNEL_A_SIZE)
#define CATS_SX_LOAD_ADDR (CATS_TFTP_ADDR + CATS_KERNEL_A_SIZE)
/* Needs to be an actual number for stringify */
#define CATS_SXID_LOAD_ADDR 0xA5000000

#define SPACEX_CATSON_COMMON_BOOT_SETTINGS \
	"kernel_boot_addr=" __stringify(CATS_KERNEL_BOOT_ADDR) "\0" \
	"kernel_load_addr=" __stringify(CATS_KERNEL_LOAD_ADDR) "\0" \
	"kernel_offset_a=" __stringify(CATS_KERNEL_A_OFFSET) "\0" \
	"kernel_offset_b=" __stringify(CATS_KERNEL_B_OFFSET) "\0" \
	"kernel_size=" __stringify(CATS_KERNEL_A_SIZE) "\0" \
	"setup_burn_memory=mw.q " __stringify(CATS_TERM_SCRATCH_ADDR) " 0x12345678aa640001 && " \
		"mw.l " __stringify(CATS_TERM_LOAD_ADDR) " 0xffffffff " __stringify(CATS_BOOTTERM1_SIZE) " && " \
		"mw.l " __stringify(CATS_TERM_TOC_SER_ADDR) " " __stringify(CATS_TERM_TOC_SER_VAL) "\0" \
	"startkernel=unecc $kernel_load_addr $kernel_boot_addr " __stringify(CATS_KERNEL_A_SIZE) " && "\
		"bootm $kernel_boot_addr${boot_type}\0" \
	"stdin=nulldev\0"

/* Needed for emmc but undefined by spacex_common.h */
#ifdef CONFIG_CATSON_EMMC_ENABLED
#define CONFIG_PARTITIONS 1
#endif

#define SPACEX_CATSON_EMMC_BURN_SETTINGS \
	"burn_kernels_emmc=mmc dev " __stringify(CATS_MMC_BOOT_DEV) " " __stringify(CATS_MMC_BOOT_PART) " && " \
		"mmc write8 $kernel_load_addr $kernel_offset_a $kernel_size && " \
		"mmc write8 $kernel_load_addr $kernel_offset_b $kernel_size\0" \
	"burn_boot_emmc=run setup_burn_memory && " \
		"cmp.q " __stringify(CATS_BOOTFIP_LOAD_ADDR) " " __stringify(CATS_TERM_SCRATCH_ADDR) " 1 && " \
		"mmc dev " __stringify(CATS_MMC_BOOT_DEV) " " __stringify(CATS_MMC_BOOT_PART) " && " \
		"mmc partconf 0 1 7 0 && " \
		"mmc bootbus 0 2 1 0 && " \
		"mmc erase8 0 " __stringify(CATS_BOOT_A_0_OFFSET) " && " \
		"mmc write8 " __stringify(CATS_TERM_LOAD_ADDR) " " __stringify(CATS_BOOTTERM1_OFFSET) " " __stringify(CATS_BOOTTERM1_SIZE) " && " \
		"mmc write8 " __stringify(CATS_TERM_LOAD_ADDR) " " __stringify(CATS_BOOTTERM2_OFFSET) " " __stringify(CATS_BOOTTERM1_SIZE) " && " \
		"mmc write8 " __stringify(CATS_BOOTFIP_LOAD_ADDR) " " __stringify(CATS_BOOTFIP_0_OFFSET) " " __stringify(CATS_BOOTFIP_0_SIZE) " && " \
		"mmc write8 " __stringify(CATS_BOOTFIP_LOAD_ADDR) " " __stringify(CATS_BOOTFIP_1_OFFSET) " " __stringify(CATS_BOOTFIP_1_SIZE) " && " \
		"mmc write8 " __stringify(CATS_BOOTFIP_LOAD_ADDR) " " __stringify(CATS_BOOTFIP_2_OFFSET) " " __stringify(CATS_BOOTFIP_2_SIZE) " && " \
		"mmc write8 " __stringify(CATS_BOOTFIP_LOAD_ADDR) " " __stringify(CATS_BOOTFIP_3_OFFSET) " " __stringify(CATS_BOOTFIP_3_SIZE) "\0" \
	"burn_fips_emmc=run setup_burn_memory && " \
		"cmp.q " __stringify(CATS_FIP_LOAD_ADDR) " " __stringify(CATS_TERM_SCRATCH_ADDR) " 1 && " \
		"mmc dev " __stringify(CATS_MMC_BOOT_DEV) " " __stringify(CATS_MMC_BOOT_PART) " && " \
		"mmc write8 " __stringify(CATS_TERM_LOAD_ADDR) " " __stringify(CATS_UBOOT_TERM1_OFFSET) " " __stringify(CATS_UBOOT_TERM1_SIZE) " && " \
		"mmc write8 " __stringify(CATS_TERM_LOAD_ADDR) " " __stringify(CATS_UBOOT_TERM2_OFFSET) " " __stringify(CATS_UBOOT_TERM2_SIZE) " && " \
		"mmc write8 " __stringify(CATS_FIP_LOAD_ADDR) " " __stringify(CATS_BOOT_A_0_OFFSET) " " __stringify(CATS_BOOT_A_0_SIZE) " && " \
		"mmc write8 " __stringify(CATS_FIP_LOAD_ADDR) " " __stringify(CATS_BOOT_A_1_OFFSET) " " __stringify(CATS_BOOT_A_1_SIZE) " && " \
		"mmc write8 " __stringify(CATS_FIP_LOAD_ADDR) " " __stringify(CATS_BOOT_B_0_OFFSET) " " __stringify(CATS_BOOT_B_0_SIZE) " && " \
		"mmc write8 " __stringify(CATS_FIP_LOAD_ADDR) " " __stringify(CATS_BOOT_B_1_OFFSET) " " __stringify(CATS_BOOT_B_1_SIZE) "\0" \
	"burn_all_emmc=run burn_fips_emmc && run burn_boot_emmc && run burn_kernels_emmc\0"

#define SPACEX_CATSON_NOR_BURN_SETTINGS \
	"burn_kernels_nor=sf probe 0:0 && " \
		"sf update $kernel_load_addr $kernel_offset_a $kernel_size && " \
		"sf update $kernel_load_addr $kernel_offset_b $kernel_size\0" \
	"burn_boot_nor=run setup_burn_memory && " \
		"cmp.q " __stringify(CATS_BOOTFIP_LOAD_ADDR) " " __stringify(CATS_TERM_SCRATCH_ADDR) " 1 && " \
		"sf probe 0:0 && " \
		"sf erase 0 " __stringify(CATS_BOOT_A_0_OFFSET) " && " \
		"sf write " __stringify(CATS_TERM_LOAD_ADDR) " " __stringify(CATS_BOOTTERM1_OFFSET) " " __stringify(CATS_BOOTTERM1_SIZE) " && " \
		"sf write " __stringify(CATS_TERM_LOAD_ADDR) " " __stringify(CATS_BOOTTERM2_OFFSET) " " __stringify(CATS_BOOTTERM1_SIZE) " && " \
		"sf write " __stringify(CATS_BOOTFIP_LOAD_ADDR) " " __stringify(CATS_BOOTFIP_0_OFFSET) " " __stringify(CATS_BOOTFIP_0_SIZE) " && " \
		"sf write " __stringify(CATS_BOOTFIP_LOAD_ADDR) " " __stringify(CATS_BOOTFIP_1_OFFSET) " " __stringify(CATS_BOOTFIP_1_SIZE) " && " \
		"sf write " __stringify(CATS_BOOTFIP_LOAD_ADDR) " " __stringify(CATS_BOOTFIP_2_OFFSET) " " __stringify(CATS_BOOTFIP_2_SIZE) " && " \
		"sf write " __stringify(CATS_BOOTFIP_LOAD_ADDR) " " __stringify(CATS_BOOTFIP_3_OFFSET) " " __stringify(CATS_BOOTFIP_3_SIZE) "\0" \
	"burn_fips_nor=run setup_burn_memory && " \
		"cmp.q " __stringify(CATS_FIP_LOAD_ADDR) " " __stringify(CATS_TERM_SCRATCH_ADDR) " 1 && " \
		"sf probe 0:0 && " \
		"sf update " __stringify(CATS_TERM_LOAD_ADDR) " " __stringify(CATS_UBOOT_TERM1_OFFSET) " " __stringify(CATS_UBOOT_TERM1_SIZE) " && " \
		"sf update " __stringify(CATS_TERM_LOAD_ADDR) " " __stringify(CATS_UBOOT_TERM2_OFFSET) " " __stringify(CATS_UBOOT_TERM2_SIZE) " && " \
		"sf update " __stringify(CATS_FIP_LOAD_ADDR) " " __stringify(CATS_BOOT_A_0_OFFSET) " " __stringify(CATS_BOOT_A_0_SIZE) " && " \
		"sf update " __stringify(CATS_FIP_LOAD_ADDR) " " __stringify(CATS_BOOT_A_1_OFFSET) " " __stringify(CATS_BOOT_A_1_SIZE) " && " \
		"sf update " __stringify(CATS_FIP_LOAD_ADDR) " " __stringify(CATS_BOOT_B_0_OFFSET) " " __stringify(CATS_BOOT_B_0_SIZE) " && " \
		"sf update " __stringify(CATS_FIP_LOAD_ADDR) " " __stringify(CATS_BOOT_B_1_OFFSET) " " __stringify(CATS_BOOT_B_1_SIZE) "\0" \
	"burn_all_nor=run burn_fips_nor && run burn_boot_nor && run burn_kernels_nor\0"

#ifdef CONFIG_CATSON_EMMC_BOOT
#undef CONFIG_BOOTARGS
#define CONFIG_BOOTARGS CATSON_BOOTARGS CATSON_EMMC_HWPART

#define MAKE_BLKDEV(__part) __stringify(CATS_##__part##_SIZE) "@" __stringify(CATS_##__part##_OFFSET) "(" #__part ")"

#define CATSON_EMMC_HWPART "blkdevparts=mmcblk0:" MAKE_BLKDEV(BOOTFIP_0) "," \
	MAKE_BLKDEV(BOOTFIP_1) "," \
	MAKE_BLKDEV(BOOTFIP_2) "," \
	MAKE_BLKDEV(BOOTFIP_3) "," \
	MAKE_BLKDEV(BOOTTERM1) "," \
	MAKE_BLKDEV(BOOTTERM2) "," \
	MAKE_BLKDEV(BOOT_A_0) "," \
	MAKE_BLKDEV(BOOT_B_0) "," \
	MAKE_BLKDEV(BOOT_A_1) "," \
	MAKE_BLKDEV(BOOT_B_1) "," \
	MAKE_BLKDEV(UBOOT_TERM1) "," \
	MAKE_BLKDEV(UBOOT_TERM2) "," \
	MAKE_BLKDEV(SXID) "," \
	MAKE_BLKDEV(KERNEL_A) "," \
	MAKE_BLKDEV(CONFIG_A) "," \
	MAKE_BLKDEV(KERNEL_B) "," \
	MAKE_BLKDEV(CONFIG_B) "," \
	MAKE_BLKDEV(SX_A) "," \
	MAKE_BLKDEV(SX_B) "," \
	MAKE_BLKDEV(VERSION_INFO_A) "," \
	MAKE_BLKDEV(VERSION_INFO_B) "," \
	MAKE_BLKDEV(SECRETS_A) "," \
	MAKE_BLKDEV(SECRETS_B) "," \
	MAKE_BLKDEV(MTDOOPS) "," \
	MAKE_BLKDEV(EDR) "," \
	MAKE_BLKDEV(DISH_CONFIG) " "

#define SPACEX_CATSON_BOOT_SETTINGS \
	SPACEX_CATSON_COMMON_BOOT_SETTINGS \
	"_emmcboot=mmc dev " __stringify(CATS_MMC_BOOT_DEV) " " __stringify(CATS_MMC_BOOT_PART) " && " \
		"mmc read8 $kernel_load_addr ${_kernel_offset} $kernel_size && " \
		"run startkernel\0" \
	"emmcboot_a=setenv _kernel_offset $kernel_offset_a && run _emmcboot\0" \
	"emmcboot_b=setenv _kernel_offset $kernel_offset_b && run _emmcboot\0"

#else /* CONFIG_CATSON_EMMC_BOOT */

#define MAKE_MTDPART(__part, __name) __stringify(CATS_##__part##_SIZE) "@" __stringify(CATS_##__part##_OFFSET) "(" #__name ")"

#define CATSON_TFTP_MTDPARTS \
	"mtdparts=1e302000.spisfc:" \
	MAKE_MTDPART(BOOTFIP_0, bootfip0) "," \
	MAKE_MTDPART(BOOTFIP_1, bootfip1) "," \
	MAKE_MTDPART(BOOTFIP_2, bootfip2) "," \
	MAKE_MTDPART(BOOTFIP_3, bootfip3) "," \
	MAKE_MTDPART(BOOTTERM1, bfipterm1) "ro," \
	MAKE_MTDPART(BOOTTERM2, bfipterm2) "ro," \
	MAKE_MTDPART(BOOT_A_0, boot.0) "ro," \
	MAKE_MTDPART(BOOT_B_0, boot.1) "," \
	MAKE_MTDPART(BOOT_A_1, boot.2) "," \
	MAKE_MTDPART(UBOOT_TERM1, bootterm1) "ro," \
	MAKE_MTDPART(UBOOT_TERM2, bootterm2) "ro," \
	MAKE_MTDPART(SXID, sxid) "," \
	MAKE_MTDPART(KERNEL_A, kernel) "," \
	MAKE_MTDPART(CONFIG_A, calibrations) "," \
	MAKE_MTDPART(SX_A, sx) "," \
	MAKE_MTDPART(VERSION_INFO_A, version_info) "," \
	MAKE_MTDPART(SECRETS_A, secrets) "," \
	MAKE_MTDPART(MTDOOPS, mtdoops) " "

#define CATSON_AB_MTDPARTS_A \
	"mtdparts=1e302000.spisfc:" \
	MAKE_MTDPART(BOOTFIP_0, bootfip0) "," \
	MAKE_MTDPART(BOOTFIP_1, bootfip1) "," \
	MAKE_MTDPART(BOOTFIP_2, bootfip2) "," \
	MAKE_MTDPART(BOOTFIP_3, bootfip3) "," \
	MAKE_MTDPART(BOOTTERM1, bfipterm1) "ro," \
	MAKE_MTDPART(BOOTTERM2, bfipterm2) "ro," \
	MAKE_MTDPART(BOOT_A_0, current/boot.0) "ro," \
	MAKE_MTDPART(BOOT_B_0, other/boot.0) "," \
	MAKE_MTDPART(BOOT_A_1, current/boot.1) "ro," \
	MAKE_MTDPART(BOOT_B_1, other/boot.1) "," \
	MAKE_MTDPART(UBOOT_TERM1, bootterm1) "ro," \
	MAKE_MTDPART(UBOOT_TERM2, bootterm2) "ro," \
	MAKE_MTDPART(SXID, sxid) "," \
	MAKE_MTDPART(KERNEL_A, current/kernel) "ro," \
	MAKE_MTDPART(CONFIG_A, current/calibrations) "ro," \
	MAKE_MTDPART(KERNEL_B, other/kernel) "," \
	MAKE_MTDPART(CONFIG_B, other/calibrations) "," \
	MAKE_MTDPART(SX_A, current/sx) "ro," \
	MAKE_MTDPART(SX_B, other/sx) "," \
	MAKE_MTDPART(VERSION_INFO_A, current/version_info) "ro," \
	MAKE_MTDPART(VERSION_INFO_B, other/version_info) "," \
	MAKE_MTDPART(SECRETS_A, current/secrets) "ro," \
	MAKE_MTDPART(SECRETS_B, other/secrets) "," \
	MAKE_MTDPART(MTDOOPS, mtdoops) " "

#define CATSON_AB_MTDPARTS_B \
	"mtdparts=1e302000.spisfc:" \
	MAKE_MTDPART(BOOTFIP_0, bootfip0) "," \
	MAKE_MTDPART(BOOTFIP_1, bootfip1) "," \
	MAKE_MTDPART(BOOTFIP_2, bootfip2) "," \
	MAKE_MTDPART(BOOTFIP_3, bootfip3) "," \
	MAKE_MTDPART(BOOTTERM1, bfipterm1) "ro," \
	MAKE_MTDPART(BOOTTERM2, bfipterm2) "ro," \
	MAKE_MTDPART(BOOT_A_0, other/boot.0) "," \
	MAKE_MTDPART(BOOT_B_0, current/boot.0) "ro," \
	MAKE_MTDPART(BOOT_A_1, other/boot.1) "," \
	MAKE_MTDPART(BOOT_B_1, current/boot.1) "ro," \
	MAKE_MTDPART(UBOOT_TERM1, bootterm1) "," \
	MAKE_MTDPART(UBOOT_TERM2, bootterm2) "," \
	MAKE_MTDPART(SXID, sxid) "," \
	MAKE_MTDPART(KERNEL_A, other/kernel) "," \
	MAKE_MTDPART(CONFIG_A, other/calibrations) "," \
	MAKE_MTDPART(KERNEL_B, current/kernel) "ro," \
	MAKE_MTDPART(CONFIG_B, current/calibrations) "ro," \
	MAKE_MTDPART(SX_A, other/sx) "," \
	MAKE_MTDPART(SX_B, current/sx) "ro," \
	MAKE_MTDPART(VERSION_INFO_A, other/version_info) "," \
	MAKE_MTDPART(VERSION_INFO_B, current/version_info) "ro," \
	MAKE_MTDPART(SECRETS_A, other/secrets) "," \
	MAKE_MTDPART(SECRETS_B, current/secrets) "ro," \
	MAKE_MTDPART(MTDOOPS, mtdoops) " "

#define SPACEX_CATSON_BOOT_SETTINGS \
	SPACEX_CATSON_COMMON_BOOT_SETTINGS \
	"_qspiboot=sf probe 0:0 && " \
		"sf read $kernel_load_addr ${_kernel_offset} $kernel_size && " \
		"run startkernel\0" \
	"qspiboot_a=setenv _kernel_offset $kernel_offset_a && run _qspiboot\0" \
	"qspiboot_b=setenv _kernel_offset $kernel_offset_b && run _qspiboot\0"

#define CATSON_BOOTARGS_TFTP CATSON_BOOTARGS CATSON_TFTP_MTDPARTS
#define CATSON_BOOTARGS_A CATSON_BOOTARGS CATSON_AB_MTDPARTS_A
#define CATSON_BOOTARGS_B CATSON_BOOTARGS CATSON_AB_MTDPARTS_B

#endif /* !CONFIG_CATSON_EMMC_BOOT */

/* Function prototypes for boot methods. */
#ifndef __ASSEMBLY__

#include <linux/types.h>
#include <compiler.h>

/* TFTP API */
void spacex_soft_reboot(void);
long spacex_get_soft_reboot_count(void);
int spacex_read_curr_boot_slot(void);
void catson_disable_swdt(void);
bool catson_booted_from_emmc(void);
int is_prod_hw(void);

/*
 * Register definitions.
 *
 * Base address and offsets defined here:
 *     https://stash/projects/FSWPLAT/repos/st-arm-trusted-firmware/browse/plat/stm/board/gllcff/include/platform_def.h?until=f37c9e9bdff6008f8d468243053e2f6648a471bd&untilPath=plat%2Fstm%2Fboard%2Fgllcff%2Finclude%2Fplatform_def.h#394,419
 */
#define BSECX_BASE 0x22400000
#define SECURITY_BSEC_DEVICEID0 BSECX_BASE + 0x10
#define SECURITY_BSEC_DEVICEID1 BSECX_BASE + 0x14
#define SECURITY_BSEC_DEVICEID2 BSECX_BASE + 0x18
#define SECURITY_BSEC_PROD_FUSE BSECX_BASE + 0x34

#define BSEC_AVS_CODES BSECX_BASE + 0x01C

#define MAX_IBI_CLIENTS     12
/**
 * Structure defining characteristics of a single client.
 *
 * @max_burst_size_bytes:  The maximum burst size of the client.
 * @svc:                   The system virtual channel mapping.
 * @outsanding_packets:    The number of outstanding packets (0 to 512).
 * @dpreg_size:            Total dpreg size for this client.
 */
struct ibi_client {
	unsigned int max_burst_size_bytes;
	unsigned int svc;
	unsigned int outstanding_packets;
	unsigned int dpreg_size;
};

/**
 * Structure defining interconnect configuration.
 *
 * @memory_page_size:     Total memory page size.
 * @bus_size_bits:        The size of the bus in bits.
 * @dpreg_total_size:     The total size allowed across all clients.
 * @clients:              The individual client configuration.
 */
struct ibi_config {
	unsigned int memory_page_size;
	unsigned int bus_size_bits;
	unsigned int dpreg_total_size;

	struct ibi_client clients[MAX_IBI_CLIENTS];
};

#define BOOT_START_SLOT     (CATS_BOOT_A_0_OFFSET / CATS_FIP_SIZE)
#define BOOT_END_SLOT       ((CATS_UBOOT_TERM1_OFFSET / CATS_FIP_SIZE) - 1)

/**
 * SCP mapping configuration.
 *
 * 0 = (PIO20[2], for scp-lite)
 * 1 = (PIO32[2], for scp-lite)
 * 2 = (LVDS_IO, for normal-scp)
 */
enum {
	scp_lite_pio20_2 = 0,
	scp_lite_pio32_2 = 1,
	scp_lvds_io = 2,
};

int catson_apply_ibi(unsigned long addr, struct ibi_config *config);
void catson_late_init(void);
void catson_populate_fdt_chosen(void *fdt);
void configure_sysconf(int enable_tx, int enable_rx, int scp_mapping,
		       int enable_xphy, int enable_l3_cfe, int use_modem_rx_pll);

#define CATSON_VERSION_CUT4 0x3
unsigned int catson_get_version(void);
unsigned int catson_get_minor_version(void);
int catson_get_board_type_fuse(void);

/*
 * Device Specific initialization.
 */

void configure_modem_v3(int enable_tx, int enable_rx);
void configure_scp_v3(int scp_mapping);
int read_vtsens_temperature(int *temp);
int starlink_catson_seed_kaslr(u64 *seed);

#ifdef CONFIG_SPACEX_CATSON_MODEMLINK
typedef enum mdml_freq {
	mdml_6gbps,
	mdml_8gbps,
	mdml_9p96gbps,
	mdml_10p3125gbps,
	/*
	 * Automatically choose the KA modemlink frequency based on version/.
	 * mdml_9p96gbps will be set for cut3 and mdml_10p3125gbps for cut4.
	 */
	mdml_KA
} mdml_freq_t;

#define MIPHY_SWAP_NONE     0
#define MIPHY_SWAP_UPRX     BIT(0)
#define MIPHY_SWAP_UPTX     BIT(1)
#define MIPHY_SWAP_UPBOTH   (MIPHY_SWAP_UPRX | MIPHY_SWAP_UPTX)
#define MIPHY_SWAP_DWNRX    BIT(2)
#define MIPHY_SWAP_DWNTX    BIT(3)

#define RETIMER_MAX_CHANNEL     4

typedef enum retimer_loopback {
	retimer_loopback_none,
	retimer_loopback_a_to_b,
	retimer_loopback_b_to_a,
} retimer_loopback_t;

struct retimer_config {
	u16 chip_id;
	u8 modemlink_channels;
	mdml_freq_t freq;
	retimer_loopback_t loopback;
};

/*
 * Look-up table entry to map strapping to configuration.
 *
 * @id:                  The 12-bit hardware strapping.
 * @ipaddr:              The IP address of this node.
 * @hostname:            The name associated with this node.
 * @enable_rx:           Whether the RX modem block should be enabled.
 * @boot_type:           The device tree entry to boot with.
 * @linkid:              The modemlink linkid.
 * @freq:                The modemlink frequency.
 * @last_in_chain:       Whether this is the last Catson in its chain.
 * @eut_mode:            Whether to configure in EUT or UT mode.
 * @use_net:             Whether to boot from net instead of fc.
 * @flow_control         Whether to enable CFE flow control.
 * @mdml_polarity_swap:  Bit mask of upstream and downstream polarity swaps.
 * @retimers:            NULL terminated list of retimer configurations.
 */
struct panel_entry {
	u16 id;
	char *ipaddr;
	char *hostname;
	bool enable_rx;
	char *boot_type;

	u16 linkid;
	mdml_freq_t freq;
	bool last_in_chain;
	bool eut_mode;
	bool flow_control;
	bool use_net;
	u8 mdml_polarity_swap;

	const struct retimer_config *retimers;
};

extern const struct panel_entry *catson_entry;
const struct panel_entry *get_this_panel_entry(void);

const struct panel_entry *panel_entry_lookup_by_id(u32 board_id);
const struct panel_entry *panel_entry_lookup_by_ip(u32 ipv4);
const struct panel_entry *dev_panel_lookup(u8 modemlink_depth, u8 fsw_instance, mdml_freq_t mdml_speed);
const struct panel_entry *kutx_aperture_panel_lookup(u8 modemlink_depth, u8 modemlink_chain, u8 fsw_instance);
const struct panel_entry *kutx_tile_lookup(u8 modemlink_depth, u8 modemlink_chain, u8 tile_type);
const struct panel_entry *kurx_aperture_panel_lookup(u8 modemlink_depth, u8 modemlink_chain, u8 fsw_instance);
const struct panel_entry *kurx_tile_lookup(u8 modemlink_depth, u8 modemlink_chain, u8 tile_type);
const struct panel_entry *kae_panel_lookup(u8 modemlink_depth,
					   u8 modemlink_chain,
					   u8 fsw_instance,
					   bool is_sat);

#define MIPHY_UPSTREAM_TIMEOUT_BASE_MSEC		20000
#define MIPHY_UPSTREAM_TIMEOUT_PER_LINK_MSEC	80000
#define MIPHY_DOWNSTREAM_TIMEOUT_MSEC	2000
int wait_for_modemlink(bool upstream, unsigned long timeout_ms,
				  bool reset);
/*
 * High and low bytes of the mac
 */
#define CATSON_MAC_HIGH_BYTE 0xCA
#define CATSON_MAC_LOW_BYTE 0xFF
void panel_env_setup(const struct panel_entry *entry);

#define CATSON_CFE_SCP_PULL_ADDR    0x0c217000
#define CATSON_CFE_SCP_PUSH_ADDR    0x0c212000
int pushpull_eth_initialize(uintptr_t push_regs_addr, uintptr_t pull_regs_addr,
							const char *iface_name);

int modemlink_upstream_enable(void);
int modemlink_downstream_enable(void);
int modemlink_check_status_reset(void);
#endif /* CONFIG_SPACEX_CATSON_MODEMLINK */

#endif /* __ASSEMBLY__ */

#endif /* __SPACEX_CATSON_SPI_BOOT_H */