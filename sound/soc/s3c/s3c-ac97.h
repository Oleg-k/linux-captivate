/* linux/arch/arm/plat-s3c/include/plat/regs-ac97.h
 *
 * Copyright (c) 2006 Simtec Electronics <linux@simtec.co.uk>
 *		http://www.simtec.co.uk/products/SWLINUX/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * S3C2440 AC97 Controller
*/

#ifndef __S3C_AC97_H
#define __S3C_AC97_H __FILE__

#define S3C_AC97_GLBCTRL				(0x00)

#define S3C_AC97_GLBCTRL_CODECREADYIE			(1<<22)
#define S3C_AC97_GLBCTRL_PCMOUTURIE			(1<<21)
#define S3C_AC97_GLBCTRL_PCMINORIE			(1<<20)
#define S3C_AC97_GLBCTRL_MICINORIE			(1<<19)
#define S3C_AC97_GLBCTRL_PCMOUTTIE			(1<<18)
#define S3C_AC97_GLBCTRL_PCMINTIE			(1<<17)
#define S3C_AC97_GLBCTRL_MICINTIE			(1<<16)
#define S3C_AC97_GLBCTRL_PCMOUTTM_OFF			(0<<12)
#define S3C_AC97_GLBCTRL_PCMOUTTM_PIO			(1<<12)
#define S3C_AC97_GLBCTRL_PCMOUTTM_DMA			(2<<12)
#define S3C_AC97_GLBCTRL_PCMOUTTM_MASK			(3<<12)
#define S3C_AC97_GLBCTRL_PCMINTM_OFF			(0<<10)
#define S3C_AC97_GLBCTRL_PCMINTM_PIO			(1<<10)
#define S3C_AC97_GLBCTRL_PCMINTM_DMA			(2<<10)
#define S3C_AC97_GLBCTRL_PCMINTM_MASK			(3<<10)
#define S3C_AC97_GLBCTRL_MICINTM_OFF			(0<<8)
#define S3C_AC97_GLBCTRL_MICINTM_PIO			(1<<8)
#define S3C_AC97_GLBCTRL_MICINTM_DMA			(2<<8)
#define S3C_AC97_GLBCTRL_MICINTM_MASK			(3<<8)
#define S3C_AC97_GLBCTRL_TRANSFERDATAENABLE		(1<<3)
#define S3C_AC97_GLBCTRL_ACLINKON			(1<<2)
#define S3C_AC97_GLBCTRL_WARMRESET			(1<<1)
#define S3C_AC97_GLBCTRL_COLDRESET			(1<<0)

#define S3C_AC97_GLBSTAT				(0x04)

#define S3C_AC97_GLBSTAT_CODECREADY			(1<<22)
#define S3C_AC97_GLBSTAT_PCMOUTUR			(1<<21)
#define S3C_AC97_GLBSTAT_PCMINORI			(1<<20)
#define S3C_AC97_GLBSTAT_MICINORI			(1<<19)
#define S3C_AC97_GLBSTAT_PCMOUTTI			(1<<18)
#define S3C_AC97_GLBSTAT_PCMINTI			(1<<17)
#define S3C_AC97_GLBSTAT_MICINTI			(1<<16)
#define S3C_AC97_GLBSTAT_MAINSTATE_IDLE			(0<<0)
#define S3C_AC97_GLBSTAT_MAINSTATE_INIT			(1<<0)
#define S3C_AC97_GLBSTAT_MAINSTATE_READY		(2<<0)
#define S3C_AC97_GLBSTAT_MAINSTATE_ACTIVE		(3<<0)
#define S3C_AC97_GLBSTAT_MAINSTATE_LP			(4<<0)
#define S3C_AC97_GLBSTAT_MAINSTATE_WARM			(5<<0)

#define S3C_AC97_CODEC_CMD				(0x08)

#define S3C_AC97_CODEC_CMD_READ				(1<<23)

#define S3C_AC97_STAT					(0x0c)
#define S3C_AC97_PCM_ADDR				(0x10)
#define S3C_AC97_PCM_DATA				(0x18)
#define S3C_AC97_MIC_DATA				(0x1C)

#define AC_CMD_ADDR(x) (x << 16)
#define AC_CMD_DATA(x) (x & 0xffff)

#if defined(CONFIG_CPU_S3C6410)
#define S3C_PA_AC97   S3C64XX_PA_AC97
#define S3C_GPDPUD    S3C64XX_GPDPUD
#define S3C_GPDCON    S3C64XX_GPDCON
#elif defined(CONFIG_CPU_S5PC100)
#define S3C_PA_AC97   S5PC1XX_PA_AC97
#define S3C_GPCPUD    S5PC1XX_GPCPUD
#define S3C_GPCCON    S5PC1XX_GPCCON
#endif

extern struct snd_soc_dai s3c_ac97_dai[];

#endif /* __S3C_AC97_H */
