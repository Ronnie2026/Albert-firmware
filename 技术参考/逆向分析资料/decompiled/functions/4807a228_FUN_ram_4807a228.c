/* Firmware entry: 0x4807a228 */

uint FUN_ram_4807a228(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  size_t sVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar2 = param_1[0x933d];
  if (bVar2 != 0) {
    pbVar3 = param_1 + 0x933d;
    sVar4 = strlen((char *)pbVar3);
    if (0x40 < sVar4) {
      return 0;
    }
    do {
      pbVar3 = pbVar3 + 1;
      if ((((0x19 < (byte)((bVar2 & 0xdf) + 0xbf)) && (9 < (byte)(bVar2 - 0x30))) &&
          (1 < (byte)(bVar2 - 0x2d))) && (bVar2 != 0x5f)) {
        return 0;
      }
      bVar2 = *pbVar3;
    } while (bVar2 != 0);
  }
  if ((3 < param_1[0x9396]) || ((param_1[0x9397] & ~param_1[0x9396]) != 0)) {
    return 0;
  }
  pbVar3 = param_1;
  do {
    if (pbVar3[0x4c] != 0) {
      bVar2 = *pbVar3;
      if (bVar2 == 0) {
        return 0;
      }
      sVar4 = strlen((char *)pbVar3);
      pbVar6 = pbVar3;
      if (0x40 < sVar4) {
        return 0;
      }
      do {
        if (((0x19 < (byte)((bVar2 & 0xdf) + 0xbf)) && (9 < (byte)(bVar2 - 0x30))) &&
           ((1 < (byte)(bVar2 - 0x2d) && (bVar2 != 0x5f)))) {
          return 0;
        }
        bVar2 = pbVar6[1];
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
      if (*(int *)(pbVar3 + 0x44) == 0) {
        return 0;
      }
      if (*(int *)(pbVar3 + 0x48) == 0) {
        return 0;
      }
    }
    pbVar3 = pbVar3 + 0x50;
  } while (pbVar3 != param_1 + 0x280);
  if (param_1[0x280] == 0) {
    if (param_1[0x281] == 0) goto LAB_ram_4807a510;
    if (param_1[0x282] == 0) {
      return 0;
    }
    sVar4 = strlen((char *)(param_1 + 0x282));
    if (0x40 < sVar4) {
      return 0;
    }
  }
  else {
    bVar2 = param_1[0x282];
    if (bVar2 == 0) {
      return 0;
    }
    pbVar3 = param_1 + 0x282;
    sVar4 = strlen((char *)pbVar3);
    if (0x40 < sVar4) {
      return 0;
    }
    do {
      pbVar3 = pbVar3 + 1;
      if ((((0x19 < (byte)((bVar2 & 0xdf) + 0xbf)) && (9 < (byte)(bVar2 - 0x30))) &&
          (1 < (byte)(bVar2 - 0x2d))) && (bVar2 != 0x5f)) {
        return 0;
      }
      bVar2 = *pbVar3;
    } while (bVar2 != 0);
    pbVar3 = param_1 + 0x2c3;
    sVar4 = strlen((char *)pbVar3);
    if (sVar4 != 0x40) {
      return 0;
    }
    do {
      bVar2 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      if ((9 < (byte)(bVar2 - 0x30)) && (5 < (byte)(bVar2 + 0x9f))) {
        return 0;
      }
    } while (pbVar3 != param_1 + 0x303);
    pbVar3 = param_1 + 0x830c;
    bVar2 = 0;
    if (pbVar3 == param_1 + 0x831c) {
      return 0;
    }
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      bVar2 = bVar2 | bVar1;
    } while (param_1 + 0x831c != pbVar3);
    if (bVar2 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x831c) == 0) {
      return 0;
    }
    if (param_1[0x281] == 0) goto LAB_ram_4807a510;
  }
  pbVar3 = param_1 + 0x282;
  bVar2 = *pbVar3;
  while (bVar2 != 0) {
    pbVar3 = pbVar3 + 1;
    if (((0x19 < (byte)((bVar2 & 0xdf) + 0xbf)) && (9 < (byte)(bVar2 - 0x30))) &&
       ((1 < (byte)(bVar2 - 0x2d) && (bVar2 != 0x5f)))) {
      return 0;
    }
    bVar2 = *pbVar3;
  }
  pbVar3 = param_1 + 0x2c3;
  sVar4 = strlen((char *)pbVar3);
  if (sVar4 != 0x40) {
    return 0;
  }
  do {
    bVar2 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    if ((9 < (byte)(bVar2 - 0x30)) && (5 < (byte)(bVar2 + 0x9f))) {
      return 0;
    }
  } while (param_1 + 0x303 != pbVar3);
  if (499 < *(int *)(param_1 + 0x8308) - 100U) {
    return 0;
  }
LAB_ram_4807a510:
  if (param_1[0x8320] != 0) {
    iVar5 = FUN_ram_48075cde(param_1 + 0x8321);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = FUN_ram_48075cde(param_1 + 0x8362);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = FUN_ram_48075b92(param_1 + 0x83b4);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = FUN_ram_4ff453ae(param_1 + 0x83a3,"keep_device");
    if ((iVar5 != 0) && (iVar5 = FUN_ram_4ff453ae(param_1 + 0x83a3,"apply_cloud"), iVar5 != 0)) {
      return 0;
    }
  }
  if (param_1[0x85a8] != 0) {
    iVar5 = FUN_ram_48075cde(param_1 + 0x85aa);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar3 = param_1 + 0x85eb;
    sVar4 = strlen((char *)pbVar3);
    if (sVar4 != 0x18) {
      return 0;
    }
    do {
      bVar2 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      if ((9 < (byte)(bVar2 - 0x30)) && (5 < (byte)(bVar2 + 0x9f))) {
        return 0;
      }
    } while (param_1 + 0x8603 != pbVar3);
    if (param_1[0x85a9] != 0) {
      iVar5 = FUN_ram_4807927c(param_1 + 0x8604,0x18);
      if (iVar5 == 0) {
        return 0;
      }
      if ((*(uint *)(param_1 + 0x862c) <= *(uint *)(param_1 + 0x8624)) &&
         ((*(uint *)(param_1 + 0x862c) != *(uint *)(param_1 + 0x8624) ||
          (*(uint *)(param_1 + 0x8628) <= *(uint *)(param_1 + 0x8620))))) {
        return 0;
      }
    }
  }
  if (param_1[0x8630] != 0) {
    iVar5 = FUN_ram_48075cde(param_1 + 0x8631);
    if (iVar5 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x8678) == 0 && *(int *)(param_1 + 0x867c) == 0) {
      return 0;
    }
    iVar5 = FUN_ram_48075b92(param_1 + 0x8680);
    if (iVar5 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x8690) != -1) {
      return 0;
    }
    if (*(int *)(param_1 + 0x86a4) != 1) {
      return 0;
    }
    iVar5 = FUN_ram_48075b92(param_1 + 0x8694);
    if (iVar5 == 0) {
      return 0;
    }
  }
  if (param_1[0x92f0] != 0) {
    pbVar3 = param_1 + 0x92f0;
    iVar5 = FUN_ram_4ff453ae(pbVar3,"applied");
    if (((iVar5 != 0) && (iVar5 = FUN_ram_4ff453ae(pbVar3,"partial"), iVar5 != 0)) &&
       (iVar5 = FUN_ram_4ff453ae(pbVar3,"failed"), iVar5 != 0)) {
      return 0;
    }
  }
  bVar2 = param_1[0x86a8];
  uVar7 = 0;
  if (((((bVar2 < 7) && (bVar1 = param_1[0x86a9], bVar1 < 4)) &&
       (((param_1[0x86aa] & ~bVar1) == 0 && ((uVar7 = 1, bVar2 != 0 && (uVar7 = 0, bVar1 != 0))))))
      && (uVar7 = FUN_ram_48075b92(param_1 + 0x87e8), uVar7 != 0)) && (bVar2 != 1)) {
    iVar5 = FUN_ram_48075cde(param_1 + 0x86c4);
    uVar7 = 0;
    if ((iVar5 != 0) &&
       (uVar7 = 0, *(int *)(param_1 + 0x87c8) != 0 || *(int *)(param_1 + 0x87cc) != 0)) {
      uVar7 = (uint)(*(int *)(param_1 + 0x87e0) != 0);
    }
  }
  return uVar7;
}


