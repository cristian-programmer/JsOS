static unsigned char Ssdt1Code[] =
{
/* 0000 */ 0x53, 0x53, 0x44, 0x54, 0x4f, 0x06, 0x00, 0x00, 0x01, 0x72, 0x53, 0x61, 0x74, 0x61, 0x52, 0x65, /* SSDTO....rSataRe */
/* 0010 */ 0x53, 0x61, 0x74, 0x61, 0x50, 0x72, 0x69, 0x00, 0x00, 0x10, 0x00, 0x00, 0x49, 0x4e, 0x54, 0x4c, /* SataPri.....INTL */
/* 0020 */ 0x24, 0x06, 0x05, 0x20, 0x10, 0x4a, 0x62, 0x5c, 0x2f, 0x03, 0x5f, 0x53, 0x42, 0x5f, 0x50, 0x43, /* $.. .Jb\/._SB_PC */
/* 0030 */ 0x49, 0x30, 0x53, 0x41, 0x54, 0x41, 0x5b, 0x82, 0x47, 0x61, 0x50, 0x52, 0x49, 0x44, 0x08, 0x5f, /* I0SATA[.GaPRID._ */
/* 0040 */ 0x41, 0x44, 0x52, 0x0a, 0x00, 0x14, 0x49, 0x14, 0x5f, 0x47, 0x54, 0x4d, 0x00, 0x08, 0x50, 0x42, /* ADR...I._GTM..PB */
/* 0050 */ 0x55, 0x46, 0x11, 0x17, 0x0a, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* UF.............. */
/* 0060 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8a, 0x50, 0x42, 0x55, 0x46, 0x0a, /* ...........PBUF. */
/* 0070 */ 0x00, 0x50, 0x49, 0x4f, 0x30, 0x8a, 0x50, 0x42, 0x55, 0x46, 0x0a, 0x04, 0x44, 0x4d, 0x41, 0x30, /* .PIO0.PBUF..DMA0 */
/* 0080 */ 0x8a, 0x50, 0x42, 0x55, 0x46, 0x0a, 0x08, 0x50, 0x49, 0x4f, 0x31, 0x8a, 0x50, 0x42, 0x55, 0x46, /* .PBUF..PIO1.PBUF */
/* 0090 */ 0x0a, 0x0c, 0x44, 0x4d, 0x41, 0x31, 0x8a, 0x50, 0x42, 0x55, 0x46, 0x0a, 0x10, 0x46, 0x4c, 0x41, /* ..DMA1.PBUF..FLA */
/* 00a0 */ 0x47, 0x70, 0x47, 0x45, 0x54, 0x50, 0x50, 0x52, 0x49, 0x54, 0x50, 0x49, 0x4f, 0x30, 0x70, 0x47, /* GpGETPPRITPIO0pG */
/* 00b0 */ 0x44, 0x4d, 0x41, 0x7b, 0x53, 0x59, 0x4e, 0x43, 0x0a, 0x01, 0x00, 0x7b, 0x49, 0x43, 0x52, 0x33, /* DMA{SYNC...{ICR3 */
/* 00c0 */ 0x0a, 0x01, 0x00, 0x7b, 0x49, 0x43, 0x52, 0x30, 0x0a, 0x01, 0x00, 0x53, 0x44, 0x54, 0x30, 0x7b, /* ...{ICR0...SDT0{ */
/* 00d0 */ 0x49, 0x43, 0x52, 0x31, 0x0a, 0x01, 0x00, 0x44, 0x4d, 0x41, 0x30, 0xa0, 0x14, 0x93, 0x44, 0x4d, /* ICR1...DMA0...DM */
/* 00e0 */ 0x41, 0x30, 0x0c, 0xff, 0xff, 0xff, 0xff, 0x70, 0x50, 0x49, 0x4f, 0x30, 0x44, 0x4d, 0x41, 0x30, /* A0.....pPIO0DMA0 */
/* 00f0 */ 0xa0, 0x2e, 0x7b, 0x50, 0x52, 0x49, 0x54, 0x0b, 0x00, 0x40, 0x00, 0xa0, 0x14, 0x93, 0x7b, 0x50, /* ..{PRIT..@....{P */
/* 0100 */ 0x52, 0x49, 0x54, 0x0a, 0x90, 0x00, 0x0a, 0x80, 0x70, 0x0b, 0x84, 0x03, 0x50, 0x49, 0x4f, 0x31, /* RIT.....p...PIO1 */
/* 0110 */ 0xa1, 0x0e, 0x70, 0x47, 0x45, 0x54, 0x54, 0x50, 0x53, 0x49, 0x54, 0x50, 0x49, 0x4f, 0x31, 0xa1, /* ..pGETTPSITPIO1. */
/* 0120 */ 0x0b, 0x70, 0x0c, 0xff, 0xff, 0xff, 0xff, 0x50, 0x49, 0x4f, 0x31, 0x70, 0x47, 0x44, 0x4d, 0x41, /* .p.....PIO1pGDMA */
/* 0130 */ 0x7b, 0x53, 0x59, 0x4e, 0x43, 0x0a, 0x02, 0x00, 0x7b, 0x49, 0x43, 0x52, 0x33, 0x0a, 0x02, 0x00, /* {SYNC...{ICR3... */
/* 0140 */ 0x7b, 0x49, 0x43, 0x52, 0x30, 0x0a, 0x02, 0x00, 0x53, 0x44, 0x54, 0x31, 0x7b, 0x49, 0x43, 0x52, /* {ICR0...SDT1{ICR */
/* 0150 */ 0x31, 0x0a, 0x02, 0x00, 0x44, 0x4d, 0x41, 0x31, 0xa0, 0x14, 0x93, 0x44, 0x4d, 0x41, 0x31, 0x0c, /* 1...DMA1...DMA1. */
/* 0160 */ 0xff, 0xff, 0xff, 0xff, 0x70, 0x50, 0x49, 0x4f, 0x31, 0x44, 0x4d, 0x41, 0x31, 0x70, 0x47, 0x45, /* ....pPIO1DMA1pGE */
/* 0170 */ 0x54, 0x46, 0x7b, 0x53, 0x59, 0x4e, 0x43, 0x0a, 0x01, 0x00, 0x7b, 0x53, 0x59, 0x4e, 0x43, 0x0a, /* TF{SYNC...{SYNC. */
/* 0180 */ 0x02, 0x00, 0x50, 0x52, 0x49, 0x54, 0x46, 0x4c, 0x41, 0x47, 0xa4, 0x50, 0x42, 0x55, 0x46, 0x14, /* ..PRITFLAG.PBUF. */
/* 0190 */ 0x44, 0x2a, 0x5f, 0x53, 0x54, 0x4d, 0x03, 0x8a, 0x68, 0x0a, 0x00, 0x50, 0x49, 0x4f, 0x30, 0x8a, /* D*_STM..h..PIO0. */
/* 01a0 */ 0x68, 0x0a, 0x04, 0x44, 0x4d, 0x41, 0x30, 0x8a, 0x68, 0x0a, 0x08, 0x50, 0x49, 0x4f, 0x31, 0x8a, /* h..DMA0.h..PIO1. */
/* 01b0 */ 0x68, 0x0a, 0x0c, 0x44, 0x4d, 0x41, 0x31, 0x8a, 0x68, 0x0a, 0x10, 0x46, 0x4c, 0x41, 0x47, 0xa0, /* h..DMA1.h..FLAG. */
/* 01c0 */ 0x4c, 0x11, 0x93, 0x87, 0x69, 0x0b, 0x00, 0x02, 0x7b, 0x50, 0x52, 0x49, 0x54, 0x0b, 0xf0, 0x40, /* L...i...{PRIT..@ */
/* 01d0 */ 0x50, 0x52, 0x49, 0x54, 0x7b, 0x53, 0x59, 0x4e, 0x43, 0x0a, 0x0e, 0x53, 0x59, 0x4e, 0x43, 0x70, /* PRIT{SYNC..SYNCp */
/* 01e0 */ 0x0a, 0x00, 0x53, 0x44, 0x54, 0x30, 0x7b, 0x49, 0x43, 0x52, 0x30, 0x0a, 0x0e, 0x49, 0x43, 0x52, /* ..SDT0{ICR0..ICR */
/* 01f0 */ 0x30, 0x7b, 0x49, 0x43, 0x52, 0x31, 0x0a, 0x0e, 0x49, 0x43, 0x52, 0x31, 0x7b, 0x49, 0x43, 0x52, /* 0{ICR1..ICR1{ICR */
/* 0200 */ 0x33, 0x0a, 0x0e, 0x49, 0x43, 0x52, 0x33, 0x7b, 0x49, 0x43, 0x52, 0x35, 0x0a, 0x0e, 0x49, 0x43, /* 3..ICR3{ICR5..IC */
/* 0210 */ 0x52, 0x35, 0x8b, 0x69, 0x0a, 0x62, 0x57, 0x34, 0x39, 0x30, 0x8b, 0x69, 0x0a, 0x6a, 0x57, 0x35, /* R5.i.bW490.i.jW5 */
/* 0220 */ 0x33, 0x30, 0x8b, 0x69, 0x0a, 0x7e, 0x57, 0x36, 0x33, 0x30, 0x8b, 0x69, 0x0a, 0x80, 0x57, 0x36, /* 30.i.~W630.i..W6 */
/* 0230 */ 0x34, 0x30, 0x8b, 0x69, 0x0a, 0xb0, 0x57, 0x38, 0x38, 0x30, 0x8b, 0x69, 0x0a, 0xba, 0x57, 0x39, /* 40.i..W880.i..W9 */
/* 0240 */ 0x33, 0x30, 0x7d, 0x50, 0x52, 0x49, 0x54, 0x0b, 0x04, 0x80, 0x50, 0x52, 0x49, 0x54, 0xa0, 0x1e, /* 30}PRIT...PRIT.. */
/* 0250 */ 0x90, 0x7b, 0x46, 0x4c, 0x41, 0x47, 0x0a, 0x02, 0x00, 0x7b, 0x57, 0x34, 0x39, 0x30, 0x0b, 0x00, /* .{FLAG...{W490.. */
/* 0260 */ 0x08, 0x00, 0x7d, 0x50, 0x52, 0x49, 0x54, 0x0a, 0x02, 0x50, 0x52, 0x49, 0x54, 0x7d, 0x50, 0x52, /* ..}PRIT..PRIT}PR */
/* 0270 */ 0x49, 0x54, 0x53, 0x45, 0x54, 0x50, 0x50, 0x49, 0x4f, 0x30, 0x57, 0x35, 0x33, 0x30, 0x57, 0x36, /* ITSETPPIO0W530W6 */
/* 0280 */ 0x34, 0x30, 0x50, 0x52, 0x49, 0x54, 0xa0, 0x45, 0x05, 0x7b, 0x46, 0x4c, 0x41, 0x47, 0x0a, 0x01, /* 40PRIT.E.{FLAG.. */
/* 0290 */ 0x00, 0x7d, 0x53, 0x59, 0x4e, 0x43, 0x0a, 0x01, 0x53, 0x59, 0x4e, 0x43, 0x70, 0x53, 0x44, 0x4d, /* .}SYNC..SYNCpSDM */
/* 02a0 */ 0x41, 0x44, 0x4d, 0x41, 0x30, 0x53, 0x44, 0x54, 0x30, 0xa0, 0x13, 0x95, 0x44, 0x4d, 0x41, 0x30, /* ADMA0SDT0...DMA0 */
/* 02b0 */ 0x0a, 0x1e, 0x7d, 0x49, 0x43, 0x52, 0x33, 0x0a, 0x01, 0x49, 0x43, 0x52, 0x33, 0xa0, 0x13, 0x95, /* ..}ICR3..ICR3... */
/* 02c0 */ 0x44, 0x4d, 0x41, 0x30, 0x0a, 0x3c, 0x7d, 0x49, 0x43, 0x52, 0x30, 0x0a, 0x01, 0x49, 0x43, 0x52, /* DMA0.<}ICR0..ICR */
/* 02d0 */ 0x30, 0x7d, 0x49, 0x43, 0x52, 0x31, 0x0a, 0x01, 0x49, 0x43, 0x52, 0x31, 0xa0, 0x47, 0x15, 0x93, /* 0}ICR1..ICR1.G.. */
/* 02e0 */ 0x87, 0x6a, 0x0b, 0x00, 0x02, 0x7b, 0x50, 0x52, 0x49, 0x54, 0x0b, 0x0f, 0x3f, 0x50, 0x52, 0x49, /* .j...{PRIT..?PRI */
/* 02f0 */ 0x54, 0x70, 0x0a, 0x00, 0x50, 0x53, 0x49, 0x54, 0x7b, 0x53, 0x59, 0x4e, 0x43, 0x0a, 0x0d, 0x53, /* Tp..PSIT{SYNC..S */
/* 0300 */ 0x59, 0x4e, 0x43, 0x70, 0x0a, 0x00, 0x53, 0x44, 0x54, 0x31, 0x7b, 0x49, 0x43, 0x52, 0x30, 0x0a, /* YNCp..SDT1{ICR0. */
/* 0310 */ 0x0d, 0x49, 0x43, 0x52, 0x30, 0x7b, 0x49, 0x43, 0x52, 0x31, 0x0a, 0x0d, 0x49, 0x43, 0x52, 0x31, /* .ICR0{ICR1..ICR1 */
/* 0320 */ 0x7b, 0x49, 0x43, 0x52, 0x33, 0x0a, 0x0d, 0x49, 0x43, 0x52, 0x33, 0x7b, 0x49, 0x43, 0x52, 0x35, /* {ICR3..ICR3{ICR5 */
/* 0330 */ 0x0a, 0x0d, 0x49, 0x43, 0x52, 0x35, 0x8b, 0x6a, 0x0a, 0x62, 0x57, 0x34, 0x39, 0x31, 0x8b, 0x6a, /* ..ICR5.j.bW491.j */
/* 0340 */ 0x0a, 0x6a, 0x57, 0x35, 0x33, 0x31, 0x8b, 0x6a, 0x0a, 0x7e, 0x57, 0x36, 0x33, 0x31, 0x8b, 0x6a, /* .jW531.j.~W631.j */
/* 0350 */ 0x0a, 0x80, 0x57, 0x36, 0x34, 0x31, 0x8b, 0x6a, 0x0a, 0xb0, 0x57, 0x38, 0x38, 0x31, 0x8b, 0x6a, /* ..W641.j..W881.j */
/* 0360 */ 0x0a, 0xba, 0x57, 0x39, 0x33, 0x31, 0x7d, 0x50, 0x52, 0x49, 0x54, 0x0b, 0x40, 0x80, 0x50, 0x52, /* ..W931}PRIT.@.PR */
/* 0370 */ 0x49, 0x54, 0xa0, 0x1e, 0x90, 0x7b, 0x46, 0x4c, 0x41, 0x47, 0x0a, 0x08, 0x00, 0x7b, 0x57, 0x34, /* IT...{FLAG...{W4 */
/* 0380 */ 0x39, 0x31, 0x0b, 0x00, 0x08, 0x00, 0x7d, 0x50, 0x52, 0x49, 0x54, 0x0a, 0x20, 0x50, 0x52, 0x49, /* 91....}PRIT. PRI */
/* 0390 */ 0x54, 0xa0, 0x4c, 0x04, 0x7b, 0x46, 0x4c, 0x41, 0x47, 0x0a, 0x10, 0x00, 0x7d, 0x50, 0x52, 0x49, /* T.L.{FLAG...}PRI */
/* 03a0 */ 0x54, 0x0b, 0x00, 0x40, 0x50, 0x52, 0x49, 0x54, 0xa0, 0x13, 0x94, 0x50, 0x49, 0x4f, 0x31, 0x0a, /* T..@PRIT...PIO1. */
/* 03b0 */ 0xf0, 0x7d, 0x50, 0x52, 0x49, 0x54, 0x0a, 0x80, 0x50, 0x52, 0x49, 0x54, 0xa1, 0x21, 0x7d, 0x50, /* .}PRIT..PRIT.!}P */
/* 03c0 */ 0x52, 0x49, 0x54, 0x0a, 0x10, 0x50, 0x52, 0x49, 0x54, 0x70, 0x53, 0x45, 0x54, 0x54, 0x50, 0x49, /* RIT..PRITpSETTPI */
/* 03d0 */ 0x4f, 0x31, 0x57, 0x35, 0x33, 0x31, 0x57, 0x36, 0x34, 0x31, 0x50, 0x53, 0x49, 0x54, 0xa0, 0x45, /* O1W531W641PSIT.E */
/* 03e0 */ 0x05, 0x7b, 0x46, 0x4c, 0x41, 0x47, 0x0a, 0x04, 0x00, 0x7d, 0x53, 0x59, 0x4e, 0x43, 0x0a, 0x02, /* .{FLAG...}SYNC.. */
/* 03f0 */ 0x53, 0x59, 0x4e, 0x43, 0x70, 0x53, 0x44, 0x4d, 0x41, 0x44, 0x4d, 0x41, 0x31, 0x53, 0x44, 0x54, /* SYNCpSDMADMA1SDT */
/* 0400 */ 0x31, 0xa0, 0x13, 0x95, 0x44, 0x4d, 0x41, 0x31, 0x0a, 0x1e, 0x7d, 0x49, 0x43, 0x52, 0x33, 0x0a, /* 1...DMA1..}ICR3. */
/* 0410 */ 0x02, 0x49, 0x43, 0x52, 0x33, 0xa0, 0x13, 0x95, 0x44, 0x4d, 0x41, 0x31, 0x0a, 0x3c, 0x7d, 0x49, /* .ICR3...DMA1.<}I */
/* 0420 */ 0x43, 0x52, 0x30, 0x0a, 0x02, 0x49, 0x43, 0x52, 0x30, 0x7d, 0x49, 0x43, 0x52, 0x31, 0x0a, 0x02, /* CR0..ICR0}ICR1.. */
/* 0430 */ 0x49, 0x43, 0x52, 0x31, 0x5b, 0x82, 0x4e, 0x10, 0x50, 0x5f, 0x44, 0x30, 0x08, 0x5f, 0x41, 0x44, /* ICR1[.N.P_D0._AD */
/* 0440 */ 0x52, 0x0a, 0x00, 0x14, 0x40, 0x10, 0x5f, 0x47, 0x54, 0x46, 0x00, 0x08, 0x50, 0x49, 0x42, 0x30, /* R...@._GTF..PIB0 */
/* 0450 */ 0x11, 0x11, 0x0a, 0x0e, 0x03, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xef, 0x03, 0x00, 0x00, 0x00, 0x00, /* ................ */
/* 0460 */ 0xa0, 0xef, 0x8c, 0x50, 0x49, 0x42, 0x30, 0x0a, 0x01, 0x50, 0x4d, 0x44, 0x30, 0x8c, 0x50, 0x49, /* ...PIB0..PMD0.PI */
/* 0470 */ 0x42, 0x30, 0x0a, 0x08, 0x44, 0x4d, 0x44, 0x30, 0xa0, 0x40, 0x06, 0x7b, 0x50, 0x52, 0x49, 0x54, /* B0..DMD0.@.{PRIT */
/* 0480 */ 0x0a, 0x02, 0x00, 0xa0, 0x13, 0x93, 0x7b, 0x50, 0x52, 0x49, 0x54, 0x0a, 0x09, 0x00, 0x0a, 0x08, /* ......{PRIT..... */
/* 0490 */ 0x70, 0x0a, 0x08, 0x50, 0x4d, 0x44, 0x30, 0xa1, 0x41, 0x04, 0x70, 0x0a, 0x0a, 0x50, 0x4d, 0x44, /* p..PMD0.A.p..PMD */
/* 04a0 */ 0x30, 0x7a, 0x7b, 0x50, 0x52, 0x49, 0x54, 0x0b, 0x00, 0x03, 0x00, 0x0a, 0x08, 0x60, 0x7a, 0x7b, /* 0z{PRIT......`z{ */
/* 04b0 */ 0x50, 0x52, 0x49, 0x54, 0x0b, 0x00, 0x30, 0x00, 0x0a, 0x0c, 0x61, 0x72, 0x60, 0x61, 0x62, 0xa0, /* PRIT..0...ar`ab. */
/* 04c0 */ 0x0c, 0x93, 0x0a, 0x03, 0x62, 0x70, 0x0a, 0x0b, 0x50, 0x4d, 0x44, 0x30, 0xa0, 0x0c, 0x93, 0x0a, /* ....bp..PMD0.... */
/* 04d0 */ 0x05, 0x62, 0x70, 0x0a, 0x0c, 0x50, 0x4d, 0x44, 0x30, 0xa1, 0x08, 0x70, 0x0a, 0x01, 0x50, 0x4d, /* .bp..PMD0..p..PM */
/* 04e0 */ 0x44, 0x30, 0xa0, 0x47, 0x04, 0x7b, 0x53, 0x59, 0x4e, 0x43, 0x0a, 0x01, 0x00, 0x70, 0x7d, 0x53, /* D0.G.{SYNC...p}S */
/* 04f0 */ 0x44, 0x54, 0x30, 0x0a, 0x40, 0x00, 0x44, 0x4d, 0x44, 0x30, 0xa0, 0x2f, 0x7b, 0x49, 0x43, 0x52, /* DT0.@.DMD0./{ICR */
/* 0500 */ 0x31, 0x0a, 0x01, 0x00, 0xa0, 0x14, 0x7b, 0x49, 0x43, 0x52, 0x30, 0x0a, 0x01, 0x00, 0x72, 0x44, /* 1.....{ICR0...rD */
/* 0510 */ 0x4d, 0x44, 0x30, 0x0a, 0x02, 0x44, 0x4d, 0x44, 0x30, 0xa0, 0x10, 0x7b, 0x49, 0x43, 0x52, 0x33, /* MD0..DMD0..{ICR3 */
/* 0520 */ 0x0a, 0x01, 0x00, 0x70, 0x0a, 0x45, 0x44, 0x4d, 0x44, 0x30, 0xa1, 0x14, 0x7d, 0x74, 0x7b, 0x50, /* ...p.EDMD0..}t{P */
/* 0530 */ 0x4d, 0x44, 0x30, 0x0a, 0x07, 0x00, 0x0a, 0x02, 0x00, 0x0a, 0x20, 0x44, 0x4d, 0x44, 0x30, 0xa4, /* MD0....... DMD0. */
/* 0540 */ 0x50, 0x49, 0x42, 0x30, 0x5b, 0x82, 0x49, 0x10, 0x50, 0x5f, 0x44, 0x31, 0x08, 0x5f, 0x41, 0x44, /* PIB0[.I.P_D1._AD */
/* 0550 */ 0x52, 0x0a, 0x01, 0x14, 0x4b, 0x0f, 0x5f, 0x47, 0x54, 0x46, 0x00, 0x08, 0x50, 0x49, 0x42, 0x31, /* R...K._GTF..PIB1 */
/* 0560 */ 0x11, 0x11, 0x0a, 0x0e, 0x03, 0x00, 0x00, 0x00, 0x00, 0xb0, 0xef, 0x03, 0x00, 0x00, 0x00, 0x00, /* ................ */
/* 0570 */ 0xb0, 0xef, 0x8c, 0x50, 0x49, 0x42, 0x31, 0x0a, 0x01, 0x50, 0x4d, 0x44, 0x31, 0x8c, 0x50, 0x49, /* ...PIB1..PMD1.PI */
/* 0580 */ 0x42, 0x31, 0x0a, 0x08, 0x44, 0x4d, 0x44, 0x31, 0xa0, 0x4b, 0x05, 0x7b, 0x50, 0x52, 0x49, 0x54, /* B1..DMD1.K.{PRIT */
/* 0590 */ 0x0a, 0x20, 0x00, 0xa0, 0x13, 0x93, 0x7b, 0x50, 0x52, 0x49, 0x54, 0x0a, 0x90, 0x00, 0x0a, 0x80, /* . ....{PRIT..... */
/* 05a0 */ 0x70, 0x0a, 0x08, 0x50, 0x4d, 0x44, 0x31, 0xa1, 0x3c, 0x72, 0x7b, 0x50, 0x53, 0x49, 0x54, 0x0a, /* p..PMD1.<r{PSIT. */
/* 05b0 */ 0x03, 0x00, 0x7a, 0x7b, 0x50, 0x53, 0x49, 0x54, 0x0a, 0x0c, 0x00, 0x0a, 0x02, 0x00, 0x60, 0xa0, /* ..z{PSIT......`. */
/* 05c0 */ 0x0c, 0x93, 0x0a, 0x05, 0x60, 0x70, 0x0a, 0x0c, 0x50, 0x4d, 0x44, 0x31, 0xa1, 0x17, 0xa0, 0x0c, /* ....`p..PMD1.... */
/* 05d0 */ 0x93, 0x0a, 0x03, 0x60, 0x70, 0x0a, 0x0b, 0x50, 0x4d, 0x44, 0x31, 0xa1, 0x08, 0x70, 0x0a, 0x0a, /* ...`p..PMD1..p.. */
/* 05e0 */ 0x50, 0x4d, 0x44, 0x31, 0xa1, 0x08, 0x70, 0x0a, 0x01, 0x50, 0x4d, 0x44, 0x31, 0xa0, 0x47, 0x04, /* PMD1..p..PMD1.G. */
/* 05f0 */ 0x7b, 0x53, 0x59, 0x4e, 0x43, 0x0a, 0x02, 0x00, 0x70, 0x7d, 0x53, 0x44, 0x54, 0x31, 0x0a, 0x40, /* {SYNC...p}SDT1.@ */
/* 0600 */ 0x00, 0x44, 0x4d, 0x44, 0x31, 0xa0, 0x2f, 0x7b, 0x49, 0x43, 0x52, 0x31, 0x0a, 0x02, 0x00, 0xa0, /* .DMD1./{ICR1.... */
/* 0610 */ 0x14, 0x7b, 0x49, 0x43, 0x52, 0x30, 0x0a, 0x02, 0x00, 0x72, 0x44, 0x4d, 0x44, 0x31, 0x0a, 0x02, /* .{ICR0...rDMD1.. */
/* 0620 */ 0x44, 0x4d, 0x44, 0x31, 0xa0, 0x10, 0x7b, 0x49, 0x43, 0x52, 0x33, 0x0a, 0x02, 0x00, 0x70, 0x0a, /* DMD1..{ICR3...p. */
/* 0630 */ 0x45, 0x44, 0x4d, 0x44, 0x31, 0xa1, 0x14, 0x7d, 0x74, 0x7b, 0x50, 0x4d, 0x44, 0x31, 0x0a, 0x07, /* EDMD1..}t{PMD1.. */
/* 0640 */ 0x00, 0x0a, 0x02, 0x00, 0x0a, 0x20, 0x44, 0x4d, 0x44, 0x31, 0xa4, 0x50, 0x49, 0x42, 0x31      , /*  ..... DMD1.PIB1 */
};