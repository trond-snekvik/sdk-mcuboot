/* Manual version of auto-generated version. */

#ifndef __SYSFLASH_H__
#define __SYSFLASH_H__

#if USE_PARTITION_MANAGER
#include <pm_config.h>

#define FLASH_AREA_IMAGE_PRIMARY    PM_MCUBOOT_PRIMARY_ID
#define FLASH_AREA_IMAGE_SECONDARY  PM_MCUBOOT_SECONDARY_ID
#define FLASH_AREA_IMAGE_SCRATCH    PM_MCUBOOT_SCRATCH_ID

#else

#include <generated_dts_board.h>

#define FLASH_AREA_IMAGE_PRIMARY    DT_FLASH_AREA_IMAGE_0_ID
#define FLASH_AREA_IMAGE_SECONDARY  DT_FLASH_AREA_IMAGE_1_ID
#define FLASH_AREA_IMAGE_SCRATCH    DT_FLASH_AREA_IMAGE_SCRATCH_ID
#endif /* USE_PARTITION_MANAGER */


#endif /* __SYSFLASH_H__ */
