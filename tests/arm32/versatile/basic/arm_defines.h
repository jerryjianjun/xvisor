/**
 * Copyright (c) 2012 Jean-Christophe Dubois.
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * @file arm_defines.h
 * @author Jean-Christophe Dubois (jcd@tribudubois.net)
 * @brief  register related macros & defines for ARM test code
 */
#ifndef __ARM_DEFINES_H__
#define __ARM_DEFINES_H__

/* CPSR related macros & defines */
#define CPSR_MODE_MASK					0x0000001f
#define CPSR_MODE_USER					0x00000010
#define CPSR_MODE_FIQ					0x00000011
#define CPSR_MODE_IRQ					0x00000012
#define CPSR_MODE_SUPERVISOR				0x00000013
#define CPSR_MODE_ABORT					0x00000017
#define CPSR_MODE_UNDEFINED				0x0000001b
#define CPSR_MODE_SYSTEM				0x0000001f

#define CPSR_THUMB_ENABLED				(1 << 5)
#define CPSR_FIQ_DISABLED				(1 << 6)
#define CPSR_IRQ_DISABLED				(1 << 7)
#define CPSR_ASYNC_ABORT_DISABLED			(1 << 8)
#define CPSR_BE_ENABLED					(1 << 9)

#define CPSR_COND_OVERFLOW				(1 << 28)
#define CPSR_COND_CARRY					(1 << 29)
#define CPSR_COND_ZERO					(1 << 30)
#define CPSR_COND_NEGATIVE				(1 << 31)

/* SCTLR related macros & defines */
#define SCTLR_TE_MASK					0x40000000
#define SCTLR_AFE_MASK					0x20000000
#define SCTLR_TRE_MASK					0x10000000
#define SCTLR_NFI_MASK					0x08000000
#define SCTLR_EE_MASK					0x02000000
#define SCTLR_VE_MASK					0x01000000
#define SCTLR_U_MASK					0x00400000
#define SCTLR_FI_MASK					0x00200000
#define SCTLR_HA_MASK					0x00020000
#define SCTLR_RR_MASK					0x00004000
#define SCTLR_V_MASK					0x00002000
#define SCTLR_I_MASK					0x00001000
#define SCTLR_Z_MASK					0x00000800
#define SCTLR_SW_MASK					0x00000400
#define SCTLR_B_MASK					0x00000080
#define SCTLR_C_MASK					0x00000004
#define SCTLR_A_MASK					0x00000002
#define SCTLR_M_MASK					0x00000001

/* Translation table related macors & defines */
#define TTBL_MIN_SIZE					0x1000
#define TTBL_MIN_PAGE_SIZE				0x1000
#define TTBL_MAX_SIZE					0x4000
#define TTBL_MAX_PAGE_SIZE				0x1000000
#define TTBL_AP_S_U					0x0
#define TTBL_AP_SRW_U					0x1
#define TTBL_AP_SRW_UR					0x2
#define TTBL_AP_SRW_URW					0x3
#define TTBL_DOM_MANAGER				0x3
#define TTBL_DOM_RESERVED				0x2
#define TTBL_DOM_CLIENT					0x1
#define TTBL_DOM_NOACCESS				0x0
#define TTBL_L1TBL_SIZE					0x4000
#define TTBL_L1TBL_SECTION_PAGE_SIZE			0x100000
#define TTBL_L1TBL_SUPSECTION_PAGE_SIZE			0x1000000
#define TTBL_L1TBL_TTE_OFFSET_MASK			0xFFF00000
#define TTBL_L1TBL_TTE_OFFSET_SHIFT			20
#define TTBL_L1TBL_TTE_BASE24_MASK			0xFF000000
#define TTBL_L1TBL_TTE_BASE24_SHIFT			24
#define TTBL_L1TBL_TTE_BASE20_MASK			0xFFF00000
#define TTBL_L1TBL_TTE_BASE20_SHIFT			20
#define TTBL_L1TBL_TTE_BASE10_MASK			0xFFFFFC00
#define TTBL_L1TBL_TTE_BASE10_SHIFT			10
#define TTBL_L1TBL_TTE_AP_MASK				0x00000C00
#define TTBL_L1TBL_TTE_AP_SHIFT				10
#define TTBL_L1TBL_TTE_DOM_MASK				0x000001E0
#define TTBL_L1TBL_TTE_DOM_SHIFT			5
#define TTBL_L1TBL_TTE_DOM_CHECKAP			0
#define TTBL_L1TBL_TTE_DOM_BYPASSAP			1
#define TTBL_L1TBL_TTE_DOM_NOACCESS			2
#define TTBL_L1TBL_TTE_C_MASK				0x00000008
#define TTBL_L1TBL_TTE_C_SHIFT				3
#define TTBL_L1TBL_TTE_B_MASK				0x00000004
#define TTBL_L1TBL_TTE_B_SHIFT				2
#define TTBL_L1TBL_TTE_TYPE_MASK			0x00000003
#define TTBL_L1TBL_TTE_TYPE_SHIFT			0
#define TTBL_L1TBL_TTE_TYPE_FAULT			0x0
#define TTBL_L1TBL_TTE_TYPE_L2TBL			0x1
#define TTBL_L1TBL_TTE_TYPE_SECTION			0x2
#define TTBL_L1TBL_TTE_TYPE_RESERVED			0x3
#define TTBL_L2TBL_SIZE					0x400
#define TTBL_L2TBL_LARGE_PAGE_SIZE			0x10000
#define TTBL_L2TBL_SMALL_PAGE_SIZE			0x1000
#define TTBL_L2TBL_TTE_OFFSET_MASK			0x000FF000
#define TTBL_L2TBL_TTE_OFFSET_SHIFT			12
#define TTBL_L2TBL_TTE_BASE16_MASK			0xFFFF0000
#define TTBL_L2TBL_TTE_BASE16_SHIFT			16
#define TTBL_L2TBL_TTE_BASE12_MASK			0xFFFFF000
#define TTBL_L2TBL_TTE_BASE12_SHIFT			12
#define TTBL_L2TBL_TTE_AP0_MASK				0x00000030
#define TTBL_L2TBL_TTE_AP0_SHIFT			4
#define TTBL_L2TBL_TTE_AP1_MASK				0x000000C0
#define TTBL_L2TBL_TTE_AP1_SHIFT			6
#define TTBL_L2TBL_TTE_AP2_MASK				0x00000300
#define TTBL_L2TBL_TTE_AP2_SHIFT			8
#define TTBL_L2TBL_TTE_AP3_MASK				0x0000C000
#define TTBL_L2TBL_TTE_AP3_SHIFT			10
#define TTBL_L2TBL_TTE_C_MASK				0x00000008
#define TTBL_L2TBL_TTE_C_SHIFT				3
#define TTBL_L2TBL_TTE_B_MASK				0x00000004
#define TTBL_L2TBL_TTE_B_SHIFT				2
#define TTBL_L2TBL_TTE_TYPE_MASK			0x00000003
#define TTBL_L2TBL_TTE_TYPE_SHIFT			0
#define TTBL_L2TBL_TTE_TYPE_FAULT			0x0
#define TTBL_L2TBL_TTE_TYPE_LARGE			0x1
#define TTBL_L2TBL_TTE_TYPE_SMALL_X			0x2
#define TTBL_L2TBL_TTE_TYPE_SMALL_XN			0x3

/* IFSR related macros & defines */
#define IFSR_FS_MASK					0x0000000F
#define IFSR_FS_SHIFT					0
#define IFSR_FS_TTBL_WALK_SYNC_EXT_ABORT_1		12
#define IFSR_FS_TTBL_WALK_SYNC_EXT_ABORT_2		14
#define IFSR_FS_TTBL_WALK_SYNC_PARITY_ERROR_1		28
#define IFSR_FS_TTBL_WALK_SYNC_PARITY_ERROR_2		30
#define IFSR_FS_TRANS_FAULT_SECTION			5
#define IFSR_FS_TRANS_FAULT_PAGE			7
#define IFSR_FS_ACCESS_FAULT_SECTION			3
#define IFSR_FS_ACCESS_FAULT_PAGE			6
#define IFSR_FS_DOMAIN_FAULT_SECTION			9
#define IFSR_FS_DOMAIN_FAULT_PAGE			11
#define IFSR_FS_PERM_FAULT_SECTION			13
#define IFSR_FS_PERM_FAULT_PAGE				15
#define IFSR_FS_DEBUG_EVENT				2
#define IFSR_FS_SYNC_EXT_ABORT				8
#define IFSR_FS_IMP_VALID_LOCKDOWN			20
#define IFSR_FS_IMP_VALID_COPROC_ABORT			26
#define IFSR_FS_MEM_ACCESS_SYNC_PARITY_ERROR		25

/* DFSR related macros & defines */
#define DFSR_DOM_MASK					0x000000F0
#define DFSR_DOM_SHIFT					4
#define DFSR_FS_MASK					0x0000000F
#define DFSR_FS_SHIFT					0
#define DFSR_FS_ALIGN_FAULT				1
#define DFSR_FS_ICACHE_MAINT_FAULT			4
#define DFSR_FS_TTBL_WALK_SYNC_EXT_ABORT_1		12
#define DFSR_FS_TTBL_WALK_SYNC_EXT_ABORT_2		14
#define DFSR_FS_TTBL_WALK_SYNC_PARITY_ERROR_1		28
#define DFSR_FS_TTBL_WALK_SYNC_PARITY_ERROR_2		30
#define DFSR_FS_TRANS_FAULT_SECTION			5
#define DFSR_FS_TRANS_FAULT_PAGE			7
#define DFSR_FS_ACCESS_FAULT_SECTION			3
#define DFSR_FS_ACCESS_FAULT_PAGE			6
#define DFSR_FS_DOMAIN_FAULT_SECTION			9
#define DFSR_FS_DOMAIN_FAULT_PAGE			11
#define DFSR_FS_PERM_FAULT_SECTION			13
#define DFSR_FS_PERM_FAULT_PAGE				15
#define DFSR_FS_DEBUG_EVENT				2
#define DFSR_FS_SYNC_EXT_ABORT				8
#define DFSR_FS_IMP_VALID_LOCKDOWN			20
#define DFSR_FS_IMP_VALID_COPROC_ABORT			26
#define DFSR_FS_MEM_ACCESS_SYNC_PARITY_ERROR		25
#define DFSR_FS_ASYNC_EXT_ABORT				22
#define DFSR_FS_MEM_ACCESS_ASYNC_PARITY_ERROR		24

#endif
