/*
 * Copyright (C) 2015 by Freescale Semiconductor
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __DT_BINDINGS_S32V234_PINCTRL_H__
#define __DT_BINDINGS_S32V234_PINCTRL_H__

/*
 * Use to set PAD control
 */
#define PAD_CTL_DCYLE_TRIM_OFS      (22)
#define PAD_CTL_DCYLE_TRIM_NONE     (0 << PAD_CTL_DCYLE_TRIM_OFS)
#define PAD_CTL_DCYLE_TRIM_LEFT     (1 << PAD_CTL_DCYLE_TRIM_OFS)
#define PAD_CTL_DCYLE_TRIM_RIGHT    (2 << PAD_CTL_DCYLE_TRIM_OFS)

#define PAD_CTL_OBE         (1 << 21)
#define PAD_CTL_ODE         (1 << 20)
#define PAD_CTL_IBE         (1 << 19)
#define PAD_CTL_HYS         (1 << 18)
#define PAD_CTL_INV         (1 << 17)
#define PAD_CTL_PKE         (1 << 16)

#define PAD_CTL_SRE_OFS             (14)
#define PAD_CTL_SRE_LOW_50HZ        (0 << PAD_CTL_SRE_OFS)
#define PAD_CTL_SRE_LOW_100MHZ      (1 << PAD_CTL_SRE_OFS)
/* The manual reports the same value for SRE = 01 and SRE = 10 */
#define PAD_CTL_SRE_HIGH_100MHZ     (2 << PAD_CTL_SRE_OFS)
#define PAD_CTL_SRE_HIGH_200MHZ     (3 << PAD_CTL_SRE_OFS)

#define PAD_CTL_PUE             (1 << 13)

#define PAD_CTL_PUS_OFS         (11)
#define PAD_CTL_PUS_100K_DOWN   (0 << PAD_CTL_PUS_OFS)
#define PAD_CTL_PUS_50K_UP      (1 << PAD_CTL_PUS_OFS)
#define PAD_CTL_PUS_100K_UP     (2 << PAD_CTL_PUS_OFS)
#define PAD_CTL_PUS_33K_UP      (3 << PAD_CTL_PUS_OFS)

#define PAD_CTL_DSE_OFS         (8)
#define PAD_CTL_DSE_OUT_DISABLE (0 << PAD_CTL_DSE_OFS)
#define PAD_CTL_DSE_240         (1 << PAD_CTL_DSE_OFS)
#define PAD_CTL_DSE_120         (2 << PAD_CTL_DSE_OFS)
#define PAD_CTL_DSE_80          (3 << PAD_CTL_DSE_OFS)
#define PAD_CTL_DSE_60          (4 << PAD_CTL_DSE_OFS)
#define PAD_CTL_DSE_48          (5 << PAD_CTL_DSE_OFS)
#define PAD_CTL_DSE_40          (6 << PAD_CTL_DSE_OFS)
#define PAD_CTL_DSE_34          (7 << PAD_CTL_DSE_OFS)

#define PAD_CTL_CRPOINT_TRIM    (3 << 6)

#define PAD_CTL_SMC             (1 << 5)

#define PAD_CTL_MUX_MODE_ALT0   (0)
#define PAD_CTL_MUX_MODE_ALT1   (1)
#define PAD_CTL_MUX_MODE_ALT2   (2)
#define PAD_CTL_MUX_MODE_ALT3   (3)
#define PAD_CTL_MUX_MODE_ALT4   (4)
#define PAD_CTL_MUX_MODE_ALT5   (5)
#define PAD_CTL_MUX_MODE_ALT6   (6)
#define PAD_CTL_MUX_MODE_ALT7   (7)


/* UART configuration */
#define PAD_CTL_UART_TX         (PAD_CTL_OBE | PAD_CTL_PUS_100K_UP | PAD_CTL_DSE_60 |\
                                PAD_CTL_SRE_LOW_100MHZ | PAD_CTL_MUX_MODE_ALT1)
#define PAD_CTL_UART_RX_MSCR    (PAD_CTL_PUE | PAD_CTL_IBE | PAD_CTL_DCYLE_TRIM_RIGHT)
#define PAD_CTL_UART_RX_IMCR    (PAD_CTL_MUX_MODE_ALT2)

/* CAN0 configuration */
#define PAD_CTL_CAN_FD0_TX      (PAD_CTL_OBE | PAD_CTL_PUS_50K_UP | PAD_CTL_PUE |\
								PAD_CTL_DSE_34 | PAD_CTL_MUX_MODE_ALT1)
#define PAD_CTL_CAN_FD0_RX_MSCR (PAD_CTL_PUE | PAD_CTL_IBE | PAD_CTL_PUS_50K_UP)
#define PAD_CTL_CAN_FD0_RX_IMCR (PAD_CTL_MUX_MODE_ALT2)

/* CAN1 configuration */
#define PAD_CTL_CAN_FD1_TX      (PAD_CTL_OBE | PAD_CTL_PUS_50K_UP | PAD_CTL_PUE |\
								PAD_CTL_DSE_34 | PAD_CTL_MUX_MODE_ALT1)
#define PAD_CTL_CAN_FD1_RX_MSCR (PAD_CTL_PUE | PAD_CTL_IBE | PAD_CTL_PUS_50K_UP)
#define PAD_CTL_CAN_FD1_RX_IMCR (PAD_CTL_MUX_MODE_ALT3)

/* USDHC configuration  */
#define PAD_CTL_USDHC_BASE      (PAD_CTL_SRE_HIGH_200MHZ | PAD_CTL_OBE | \
                                PAD_CTL_DSE_34 | PAD_CTL_PKE |  \
                                PAD_CTL_IBE | PAD_CTL_PUS_100K_UP | PAD_CTL_PUE)
#define PAD_CTL_USDHC_CMD       (PAD_CTL_USDHC_BASE | PAD_CTL_MUX_MODE_ALT1)
#define PAD_CTL_USDHC_CLK       (PAD_CTL_USDHC_BASE | PAD_CTL_MUX_MODE_ALT2)
#define PAD_CTL_USDHC_DAT0_3    (PAD_CTL_USDHC_BASE | PAD_CTL_MUX_MODE_ALT2)
#define PAD_CTL_USDHC_DAT4_7    (PAD_CTL_USDHC_BASE | PAD_CTL_MUX_MODE_ALT3)


/* I2C0 - Serial Data Input */
#define PAD_CTL_I2C0_MSCR_SDA   (PAD_CTL_MUX_MODE_ALT2 | PAD_CTL_OBE | PAD_CTL_IBE | \
                                PAD_CTL_ODE | PAD_CTL_DSE_34)
#define PAD_CTL_I2C0_IMCR_SDA   (PAD_CTL_MUX_MODE_ALT3)

/* I2C0 - Serial Clock Input */
#define  PAD_CTL_I2C0_MSCR_SCLK (PAD_CTL_MUX_MODE_ALT2 | PAD_CTL_OBE | PAD_CTL_IBE | \
                                PAD_CTL_ODE | PAD_CTL_DSE_34)
#define PAD_CTL_I2C0_IMCR_SCLK  (PAD_CTL_MUX_MODE_ALT3)

/* I2C1 - Serial Data Input */
#define  PAD_CTL_I2C1_MSCR_SDA  (PAD_CTL_MUX_MODE_ALT2 | PAD_CTL_OBE | PAD_CTL_IBE | \
                                PAD_CTL_ODE | PAD_CTL_DSE_34)
#define PAD_CTL_I2C1_IMCR_SDA   (PAD_CTL_MUX_MODE_ALT3)

/* I2C1 - Serial Clock Input */
#define  PAD_CTL_I2C1_MSCR_SCLK (PAD_CTL_MUX_MODE_ALT2 | PAD_CTL_OBE | PAD_CTL_IBE | \
                                PAD_CTL_ODE | PAD_CTL_DSE_34)
#define PAD_CTL_I2C1_IMCR_SCLK  (PAD_CTL_MUX_MODE_ALT3)

/* I2C2 - Serial Data Input */
#define  PAD_CTL_I2C2_MSCR_SDA  (PAD_CTL_MUX_MODE_ALT1 | PAD_CTL_OBE | PAD_CTL_IBE | \
                                PAD_CTL_ODE | PAD_CTL_DSE_34)
#define PAD_CTL_I2C2_IMCR_SDA   (PAD_CTL_MUX_MODE_ALT2)

/* I2C2 - Serial Clock Input */
#define  PAD_CTL_I2C2_MSCR_SCLK (PAD_CTL_MUX_MODE_ALT1 | PAD_CTL_OBE | PAD_CTL_IBE | \
                                PAD_CTL_ODE | PAD_CTL_DSE_34)
#define PAD_CTL_I2C2_IMCR_SCLK  (PAD_CTL_MUX_MODE_ALT2)

/* ENET CFG1 = 0x203701 */
#define PAD_CTL_ENET_CFG1       (PAD_CTL_DSE_34 | PAD_CTL_PUS_100K_UP | PAD_CTL_PUE | \
                                PAD_CTL_OBE | PAD_CTL_MUX_MODE_ALT1)

/* ENET CFG2 = 0x20c701 */
#define PAD_CTL_ENET_CFG2       (PAD_CTL_DSE_34 | PAD_CTL_SRE_HIGH_200MHZ | \
                                PAD_CTL_OBE | PAD_CTL_MUX_MODE_ALT1)

/* ENET CFG3 = 0x28c701 */
#define PAD_CTL_ENET_CFG3       (PAD_CTL_DSE_34 | PAD_CTL_SRE_HIGH_200MHZ | \
                                PAD_CTL_OBE | PAD_CTL_IBE | PAD_CTL_MUX_MODE_ALT1)

/* ENET CFG7 = 0x8c700 */
#define PAD_CTL_ENET_CFG4       (PAD_CTL_DSE_34 | PAD_CTL_SRE_HIGH_200MHZ | PAD_CTL_IBE)

/* DCU CFG = 0x20C101 */
#define PAD_CTL_DCU_CFG			(PAD_CTL_DSE_240 | PAD_CTL_SRE_HIGH_200MHZ | \
                                PAD_CTL_OBE | PAD_CTL_IBE | PAD_CTL_MUX_MODE_ALT1)

/* Format of pins: MSCR_IDX PAD_CONFIGURATION If you know the IMCR_IDX
 * instead of MSCR_IDX, add 512 to it as the Reference Manual states.
 */

/* UART configuration */
#define S32V234_PAD_PA12__UART0_TXD         12  PAD_CTL_UART_TX
#define S32V234_PAD_PA11__UART0_RXD_OUT     11  PAD_CTL_UART_RX_MSCR
#define S32V234_PAD_PA11__UART0_RXD_IN      712 PAD_CTL_UART_RX_IMCR

#define S32V234_PAD_PA14__UART1_TXD         14  PAD_CTL_UART_TX
#define S32V234_PAD_PA13__UART1_RXD_OUT     13  PAD_CTL_UART_RX_MSCR
#define S32V234_PAD_PA13__UART1_RXD_IN      714 PAD_CTL_UART_RX_IMCR

/* CAN0 configuration */
#define S32V234_PAD_PA2__CAN_FD0_TXD        2   PAD_CTL_CAN_FD0_TX
#define S32V234_PAD_PA3__CAN_FD0_RXD_OUT    3   PAD_CTL_CAN_FD0_RX_MSCR
#define S32V234_PAD_PA3__CAN_FD0_RXD_IN     700 PAD_CTL_CAN_FD0_RX_IMCR

/* CAN1 configuration */
#define S32V234_PAD_PC10__CAN_FD1_TXD        42  PAD_CTL_CAN_FD1_TX
#define S32V234_PAD_PC11__CAN_FD1_RXD_OUT    43  PAD_CTL_CAN_FD1_RX_MSCR
#define S32V234_PAD_PC11__CAN_FD1_RXD_IN     701 PAD_CTL_CAN_FD1_RX_IMCR

/* uSDHC configuration */
#define S32V234_PAD_PK6__USDHC_CLK_OUT      150 PAD_CTL_USDHC_CLK
#define S32V234_PAD_PK6__USDHC_CLK_IN       902 PAD_CTL_MUX_MODE_ALT3

#define S32V234_PAD_PK7__USDHC_CMD_OUT      151 PAD_CTL_USDHC_CMD
#define S32V234_PAD_PK7__USDHC_CMD_IN       901 PAD_CTL_MUX_MODE_ALT3

#define S32V234_PAD_PK8__USDHC_DAT0_OUT     152 PAD_CTL_USDHC_DAT0_3
#define S32V234_PAD_PK8__USDHC_DAT0_IN      903 PAD_CTL_MUX_MODE_ALT3

#define S32V234_PAD_PK9__USDHC_DAT1_OUT     153 PAD_CTL_USDHC_DAT0_3
#define S32V234_PAD_PK9__USDHC_DAT1_IN      904 PAD_CTL_MUX_MODE_ALT3

#define S32V234_PAD_PK10__USDHC_DAT2_OUT    154 PAD_CTL_USDHC_DAT0_3
#define S32V234_PAD_PK10__USDHC_DAT2_IN     905 PAD_CTL_MUX_MODE_ALT3

#define S32V234_PAD_PK11__USDHC_DAT3_OUT    155 PAD_CTL_USDHC_DAT0_3
#define S32V234_PAD_PK11__USDHC_DAT3_IN     906 PAD_CTL_MUX_MODE_ALT3

#define S32V234_PAD_PK15__USDHC_DAT4_OUT    159 PAD_CTL_USDHC_DAT4_7
#define S32V234_PAD_PK15__USDHC_DAT4_IN     907 PAD_CTL_MUX_MODE_ALT3

#define S32V234_PAD_PL0__USDHC_DAT5_OUT     160 PAD_CTL_USDHC_DAT4_7
#define S32V234_PAD_PL0__USDHC_DAT5_IN      908 PAD_CTL_MUX_MODE_ALT3

#define S32V234_PAD_PL1__USDHC_DAT6_OUT     161 PAD_CTL_USDHC_DAT4_7
#define S32V234_PAD_PL1__USDHC_DAT6_IN      909 PAD_CTL_MUX_MODE_ALT3

#define S32V234_PAD_PL2__USDHC_DAT7_OUT     162 PAD_CTL_USDHC_DAT4_7
#define S32V234_PAD_PL2__USDHC_DAT7_IN      910 PAD_CTL_MUX_MODE_ALT3

/* I2C configuration */
#define S32V234_PAD_PG3__I2C0_DATA_OUT      99  PAD_CTL_I2C0_MSCR_SDA
#define S32V234_PAD_PG3__I2C0_DATA_IN       781 PAD_CTL_I2C0_IMCR_SDA

#define S32V234_PAD_PG4__I2C0_SCLK_OUT      100 PAD_CTL_I2C0_MSCR_SCLK
#define S32V234_PAD_PG4__I2C0_SCLK_IN       780 PAD_CTL_I2C0_IMCR_SCLK

#define S32V234_PAD_PG5__I2C1_DATA_OUT      101 PAD_CTL_I2C1_MSCR_SDA
#define S32V234_PAD_PG5__I2C1_DATA_IN       783 PAD_CTL_I2C1_IMCR_SDA

#define S32V234_PAD_PG6__I2C1_SCLK_OUT      102 PAD_CTL_I2C1_MSCR_SCLK
#define S32V234_PAD_PG6__I2C1_SCLK_IN       782 PAD_CTL_I2C1_IMCR_SCLK

#define S32V234_PAD_PB3__I2C2_DATA_OUT      19  PAD_CTL_I2C2_MSCR_SDA
#define S32V234_PAD_PB3__I2C2_DATA_IN       785 PAD_CTL_I2C2_IMCR_SDA

#define S32V234_PAD_PB4__I2C2_SCLK_OUT      20  PAD_CTL_I2C2_MSCR_SCLK
#define S32V234_PAD_PB5__I2C2_SCLK_IN       784 PAD_CTL_I2C2_IMCR_SCLK

/* ENET configuration */
#define S32V234_PAD_PC13__MDC               45  PAD_CTL_ENET_CFG2

#define S32V234_PAD_PC14__MDIO_OUT          46  PAD_CTL_ENET_CFG3
#define S32v234_PAD_PC14__MDIO_IN           981 PAD_CTL_MUX_MODE_ALT2

#define S32V234_PAD_PC15__TXCLK_OUT         47  PAD_CTL_ENET_CFG1
#define S32V234_PAD_PC15__TXCLK_IN          978 PAD_CTL_MUX_MODE_ALT2

#define S32V234_PAD_PD0__RXCLK_OUT          48  PAD_CTL_ENET_CFG4
#define S32V234_PAD_PD0__RXCLK_IN           979 PAD_CTL_MUX_MODE_ALT2

#define S32V234_PAD_PD1__RX_D0_OUT          49  PAD_CTL_ENET_CFG4
#define S32V234_PAD_PD1__RX_D0_IN           974 PAD_CTL_MUX_MODE_ALT2

#define S32V234_PAD_PD2__RX_D1_OUT          50  PAD_CTL_ENET_CFG4
#define S32V234_PAD_PD2__RX_D1_IN           975 PAD_CTL_MUX_MODE_ALT2

#define S32V234_PAD_PD3__RX_D2_OUT          51  PAD_CTL_ENET_CFG4
#define S32V234_PAD_PD3__RX_D2_IN           976 PAD_CTL_MUX_MODE_ALT2

#define S32V234_PAD_PD4__RX_D3_OUT          52  PAD_CTL_ENET_CFG4
#define S32V234_PAD_PD4__RX_D3_IN           977 PAD_CTL_MUX_MODE_ALT2

#define S32V234_PAD_PD4__RX_DV_OUT          53  PAD_CTL_ENET_CFG4
#define S32V234_PAD_PD4__RX_DV_IN           973 PAD_CTL_MUX_MODE_ALT2

#define S32V234_PAD_PD7__TX_D0_OUT          55  PAD_CTL_ENET_CFG2
#define S32V234_PAD_PD8__TX_D1_OUT          56  PAD_CTL_ENET_CFG2
#define S32V234_PAD_PD9__TX_D2_OUT          57  PAD_CTL_ENET_CFG2
#define S32V234_PAD_PD10__TX_D3_OUT         58  PAD_CTL_ENET_CFG2
#define S32V234_PAD_PD11__TX_EN_OUT         59  PAD_CTL_ENET_CFG2

/* 2D ACE DCU */

#define S32V234_PAD_PH8__DCU_HSYNC_C1		120	PAD_CTL_DCU_CFG
#define S32V234_PAD_PH9__DCU_VSYNC_C2		121	PAD_CTL_DCU_CFG
#define S32V234_PAD_PH10__DCU_DE_C3			122	PAD_CTL_DCU_CFG
#define S32V234_PAD_PH10__DCU_PCLK_D1		124	PAD_CTL_DCU_CFG

#define S32V234_PAD_PH13__DCU_R0_D2			125	PAD_CTL_DCU_CFG
#define S32V234_PAD_PH14__DCU_R1_D3			126	PAD_CTL_DCU_CFG
#define S32V234_PAD_PH15__DCU_R2_D4			127	PAD_CTL_DCU_CFG
#define S32V234_PAD_PJ0__DCU_R3_D5			128	PAD_CTL_DCU_CFG
#define S32V234_PAD_PJ1__DCU_R4_D6			129	PAD_CTL_DCU_CFG
#define S32V234_PAD_PJ2__DCU_R5_D7			130	PAD_CTL_DCU_CFG
#define S32V234_PAD_PJ3__DCU_R6_D8			131	PAD_CTL_DCU_CFG
#define S32V234_PAD_PJ4__DCU_R7_D9			132	PAD_CTL_DCU_CFG

#define S32V234_PAD_PJ5__DCU_G0_D10			133	PAD_CTL_DCU_CFG
#define S32V234_PAD_PJ6__DCU_G1_D11			134	PAD_CTL_DCU_CFG
#define S32V234_PAD_PJ7__DCU_G2_D12			135	PAD_CTL_DCU_CFG
#define S32V234_PAD_PJ8__DCU_G3_D13			136	PAD_CTL_DCU_CFG
#define S32V234_PAD_PJ9__DCU_G4_D14			137	PAD_CTL_DCU_CFG
#define S32V234_PAD_PJ10__DCU_G5_D15		138	PAD_CTL_DCU_CFG
#define S32V234_PAD_PJ11__DCU_G6_D16		139	PAD_CTL_DCU_CFG
#define S32V234_PAD_PJ12__DCU_G7_D17		140	PAD_CTL_DCU_CFG

#define S32V234_PAD_PJ13__DCU_B0_D18		141	PAD_CTL_DCU_CFG
#define S32V234_PAD_PJ14__DCU_B1_D19		142	PAD_CTL_DCU_CFG
#define S32V234_PAD_PJ15__DCU_B2_D20		143	PAD_CTL_DCU_CFG
#define S32V234_PAD_PK0__DCU_B3_D21			144	PAD_CTL_DCU_CFG
#define S32V234_PAD_PK1__DCU_B4_D22			145	PAD_CTL_DCU_CFG
#define S32V234_PAD_PK2__DCU_B5_D23			146	PAD_CTL_DCU_CFG
#define S32V234_PAD_PK3__DCU_B6_D24			147	PAD_CTL_DCU_CFG
#define S32V234_PAD_PK4__DCU_B7_D25			148	PAD_CTL_DCU_CFG

#endif /* __DT_BINDINGS_S32V234_PINCTRL_H__ */
