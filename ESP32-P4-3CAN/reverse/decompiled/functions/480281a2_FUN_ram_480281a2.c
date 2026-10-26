/* Firmware entry: 0x480281a2 */

uint FUN_ram_480281a2(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (5 < param_1) {
    uVar15 = FUN_ram_4ff21a0a();
    uVar10 = FUN_ram_48025e50(
                             "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                             );
    uVar11 = __udivdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Serial number is invalid, please use number from 0 to %u\r\n"
                     ,uVar11,uVar10,0x201,"uartSetPins",5);
    return 0;
  }
  iVar5 = *(int *)(&DAT_ram_4ff4870c + param_1 * 0x24);
  if (iVar5 != 0) {
    while (iVar5 = FUN_ram_4ff3b5f0(iVar5,0xffffffff), iVar5 != 1) {
      iVar5 = *(int *)(&DAT_ram_4ff4870c + param_1 * 0x24);
    }
  }
  iVar5 = FUN_ram_48026aba(2);
  iVar6 = FUN_ram_48026aba(3);
  iVar7 = FUN_ram_48026aba(4);
  iVar8 = FUN_ram_48026aba(5);
  FUN_ram_48026a16(2);
  FUN_ram_48026a16(3);
  FUN_ram_48026a16(4);
  FUN_ram_48026a16(5);
  if (param_2 < 0) {
    bVar3 = false;
    uVar14 = 1;
    bVar2 = bVar3;
    if (-1 < param_3) {
LAB_ram_480282f6:
      iVar13 = param_1 * 0x24;
      iVar12 = (int)(char)(&DAT_ram_4ff48719)[iVar13];
      if (iVar12 == param_3) {
        if (param_4 < 0) {
          if ((-1 < param_5) && (param_5 != (char)(&DAT_ram_4ff4871b)[iVar13])) {
            uVar9 = FUN_ram_4802754c(param_1,0xffffffff,0xffffffff);
            uVar14 = uVar9 & uVar14 & 0xff;
            if (bVar2) {
              uVar9 = FUN_ram_48027d50(param_1,param_2,0xffffffff,0xffffffff);
              uVar14 = uVar9 & uVar14;
            }
            goto LAB_ram_480284e8;
          }
        }
        else {
          bVar3 = bVar2;
          if (param_4 != (char)(&DAT_ram_4ff4871a)[iVar13]) goto LAB_ram_4802850a;
          if (-1 < param_5) {
            if (param_5 == (char)(&DAT_ram_4ff4871b)[iVar13]) {
              if (!bVar2) goto LAB_ram_48028282;
              bVar1 = false;
              goto LAB_ram_48028324;
            }
            bVar1 = false;
            bVar3 = false;
            goto LAB_ram_480284ac;
          }
        }
        if (!bVar2) goto LAB_ram_48028282;
LAB_ram_48028546:
        uVar9 = FUN_ram_48027d50(param_1,param_2,0xffffffff,0xffffffff);
        uVar14 = uVar14 & uVar9 & 0xff;
        goto LAB_ram_48028282;
      }
LAB_ram_48028340:
      uVar9 = FUN_ram_4802754c(param_1,0xffffffff,iVar12,0xffffffff);
      uVar14 = uVar9 & uVar14 & 0xff;
      if (param_4 < 0) {
        if (param_5 < 0) {
          if (bVar2) {
            uVar9 = FUN_ram_48027d50(param_1,param_2,0xffffffff,0xffffffff);
            uVar14 = uVar14 & uVar9;
            bVar2 = false;
            bVar4 = false;
            goto LAB_ram_48028378;
          }
        }
        else {
          if (param_5 != (char)(&DAT_ram_4ff4871b)[param_1 * 0x24]) {
            bVar1 = true;
            goto LAB_ram_480284aa;
          }
          bVar1 = bVar2;
          if (bVar2) goto LAB_ram_48028324;
        }
      }
      else {
        if (param_4 != (char)(&DAT_ram_4ff4871a)[param_1 * 0x24]) {
          bVar4 = true;
          goto LAB_ram_4802850c;
        }
        bVar1 = true;
        if (-1 < param_5) goto LAB_ram_48028268;
        bVar1 = bVar2;
        if (bVar2) goto LAB_ram_480283cc;
      }
      bVar4 = false;
LAB_ram_48028378:
      bVar1 = bVar4;
      uVar9 = FUN_ram_48027d50(param_1,0xffffffff,param_3,0xffffffff);
      uVar14 = uVar9 & uVar14 & 0xff;
      if (bVar2) goto LAB_ram_480285be;
      goto LAB_ram_48028394;
    }
    if (param_4 < 0) {
      if ((param_5 < 0) || (param_5 == (char)(&DAT_ram_4ff4871b)[param_1 * 0x24]))
      goto LAB_ram_48028282;
      bVar1 = false;
      bVar2 = false;
    }
    else {
      if ((char)(&DAT_ram_4ff4871a)[param_1 * 0x24] != param_4) {
LAB_ram_4802850a:
        bVar4 = false;
        bVar2 = bVar3;
        goto LAB_ram_4802850c;
      }
      bVar1 = false;
      bVar2 = false;
      if (param_5 < 0) goto LAB_ram_48028282;
LAB_ram_48028268:
      if (param_5 == (char)(&DAT_ram_4ff4871b)[param_1 * 0x24]) {
        if (bVar2) goto LAB_ram_48028324;
        goto joined_r0x480283e4;
      }
LAB_ram_480284aa:
      bVar3 = false;
    }
LAB_ram_480284ac:
    uVar9 = FUN_ram_4802754c(param_1,0xffffffff,0xffffffff);
    uVar14 = uVar9 & uVar14 & 0xff;
    if (bVar2) {
      uVar9 = FUN_ram_48027d50(param_1,param_2,0xffffffff,0xffffffff);
      uVar14 = uVar9 & uVar14;
    }
    bVar2 = bVar3;
    bVar4 = true;
    if (bVar1) goto LAB_ram_48028378;
    bVar1 = true;
    if (bVar3) goto LAB_ram_480285be;
  }
  else {
    iVar13 = param_1 * 0x24;
    if ((char)(&DAT_ram_4ff48718)[iVar13] != param_2) {
      uVar14 = FUN_ram_4802754c(param_1,(int)(char)(&DAT_ram_4ff48718)[iVar13],0xffffffff,0xffffffff
                               );
      bVar2 = true;
      if (-1 < param_3) goto LAB_ram_480282f6;
      if (param_4 < 0) {
        if (param_5 < 0) goto LAB_ram_48028546;
        bVar1 = false;
        if (param_5 != (char)(&DAT_ram_4ff4871b)[iVar13]) {
          bVar3 = false;
          bVar2 = true;
          goto LAB_ram_480284ac;
        }
LAB_ram_48028324:
        uVar9 = FUN_ram_48027d50(param_1,param_2,0xffffffff,0xffffffff);
        uVar14 = uVar9 & uVar14 & 0xff;
      }
      else {
        bVar3 = true;
        if (param_4 != (char)(&DAT_ram_4ff4871a)[iVar13]) goto LAB_ram_4802850a;
        bVar1 = false;
        bVar2 = true;
        if (-1 < param_5) goto LAB_ram_48028268;
        bVar1 = false;
LAB_ram_480283cc:
        uVar9 = FUN_ram_48027d50(param_1,param_2,0xffffffff,0xffffffff);
        uVar14 = uVar14 & uVar9 & 0xff;
      }
joined_r0x480283e4:
      if (!bVar1) goto LAB_ram_48028282;
      bVar2 = false;
      bVar4 = false;
      goto LAB_ram_48028378;
    }
    if (param_3 < 0) {
      if ((param_4 < 0) || (param_4 == (char)(&DAT_ram_4ff4871a)[iVar13])) {
LAB_ram_48028474:
        if ((param_5 < 0) || (param_5 == (char)(&DAT_ram_4ff4871b)[iVar13])) {
LAB_ram_48028480:
          uVar14 = 1;
          goto LAB_ram_48028282;
        }
        uVar14 = FUN_ram_4802754c(param_1,0xffffffff,0xffffffff);
        goto LAB_ram_480284e8;
      }
      uVar14 = FUN_ram_4802754c(param_1,0xffffffff,0xffffffff);
      if (param_5 < 0) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
        if (param_5 != (char)(&DAT_ram_4ff4871b)[iVar13]) {
          bVar3 = true;
          bVar2 = false;
          goto LAB_ram_480284ac;
        }
      }
    }
    else {
      iVar12 = (int)(char)(&DAT_ram_4ff48719)[iVar13];
      if (param_3 != iVar12) {
        bVar2 = false;
        uVar14 = 1;
        goto LAB_ram_48028340;
      }
      if (param_4 < 0) goto LAB_ram_48028474;
      if (param_4 == (char)(&DAT_ram_4ff4871a)[iVar13]) {
        if (-1 < param_5) {
          bVar2 = false;
          uVar14 = 1;
          bVar1 = false;
          goto LAB_ram_48028268;
        }
        goto LAB_ram_48028480;
      }
      uVar14 = 1;
      bVar4 = false;
      bVar2 = false;
LAB_ram_4802850c:
      uVar9 = FUN_ram_4802754c(param_1,0xffffffff,0xffffffff);
      uVar14 = uVar9 & uVar14 & 0xff;
      if ((-1 < param_5) && (param_5 != (char)(&DAT_ram_4ff4871b)[param_1 * 0x24])) {
        bVar3 = true;
        bVar1 = bVar4;
        goto LAB_ram_480284ac;
      }
      if (bVar2) {
        uVar9 = FUN_ram_48027d50(param_1,param_2,0xffffffff,0xffffffff);
        uVar14 = uVar14 & uVar9;
      }
      bVar1 = false;
      if (bVar4) {
        bVar2 = true;
        bVar4 = false;
        goto LAB_ram_48028378;
      }
    }
LAB_ram_480285be:
    uVar9 = FUN_ram_48027d50((&DAT_ram_4ff48710)[param_1 * 0x24],0xffffffff,0xffffffff,param_4);
    uVar14 = uVar9 & uVar14 & 0xff;
LAB_ram_48028394:
    if (!bVar1) goto LAB_ram_48028282;
  }
LAB_ram_480284e8:
  uVar9 = FUN_ram_48027d50((&DAT_ram_4ff48710)[param_1 * 0x24],0xffffffff,0xffffffff,0xffffffff,
                           param_5);
  uVar14 = uVar9 & uVar14 & 0xff;
LAB_ram_48028282:
  if (iVar5 != 0) {
    FUN_ram_4802691a(2,iVar5);
  }
  if (iVar6 != 0) {
    FUN_ram_4802691a(3,iVar6);
  }
  if (iVar7 != 0) {
    FUN_ram_4802691a(4,iVar7);
  }
  if (iVar8 != 0) {
    FUN_ram_4802691a(5,iVar8);
  }
  if (*(int *)(&DAT_ram_4ff4870c + param_1 * 0x24) != 0) {
    FUN_ram_4ff3afa2(*(int *)(&DAT_ram_4ff4870c + param_1 * 0x24),0,0,0);
  }
  if (uVar14 == 0) {
    uVar15 = FUN_ram_4ff21a0a();
    uVar10 = FUN_ram_48025e50(
                             "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                             );
    uVar11 = __udivdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART%d set pins failed.\r\n",uVar11,uVar10,0x24f,
                     "uartSetPins",param_1);
    return 0;
  }
  return uVar14;
}


