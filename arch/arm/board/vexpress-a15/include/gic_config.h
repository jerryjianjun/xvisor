/**
 * Copyright (c) 2012 Anup Patel.
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
 * @file gic_config.h
 * @author Anup Patel (anup@brainfault.org)
 * @brief GIC Configuration Header
 */
#ifndef __GIC_CONFIG_H__
#define __GIC_CONFIG_H__

#include <ca15x4_board.h>

#if !defined(GIC_NR_IRQS) || (GIC_NR_IRQS < NR_IRQS_CA15X4)
#undef GIC_NR_IRQS
#define GIC_NR_IRQS		NR_IRQS_CA15X4
#endif

#if !defined(GIC_MAX_NR) || (GIC_MAX_NR < NR_GIC_CA15X4)
#undef GIC_MAX_NR
#define GIC_MAX_NR		NR_GIC_CA15X4
#endif

#endif /* __GIC_CONFIG_H__ */
