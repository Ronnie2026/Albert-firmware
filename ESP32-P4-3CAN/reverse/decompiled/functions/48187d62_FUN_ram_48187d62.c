/* Firmware entry: 0x48187d62 */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_48187d62(uint param_1,int param_2,uint param_3,int param_4,uint param_5,
                    undefined4 param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar6 = 0x40;
  if (2 < param_1) {
    uVar6 = (uint)(param_1 - 3 < 5) << 7;
  }
  if (uVar6 < param_5) {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-sha",
                     "E (%lu) %s: SHA DMA buf_len cannot exceed max size for a single block\n",uVar5
                     ,"esp-sha");
    return -1;
  }
  cVar2 = thunk_FUN_ram_4ff21be8(param_2);
  iVar4 = param_4;
  if (cVar2 == '\0' && 0xbffff < param_2 + 0xb0100000U) {
    if (param_3 != 0) {
      if (param_1 < 3) {
        param_3 = param_3 >> 6;
        iVar4 = 0x40;
        if (param_5 == 0) goto LAB_ram_48187f3e;
        uVar5 = 0x10;
        iVar3 = 0x40;
      }
      else {
        if (4 < param_1 - 3) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("sha.c",0x89,"esp_sha_block_mode_fallback","blk_len != 0");
        }
        param_3 = param_3 >> 7;
        iVar4 = 0x80;
        iVar3 = 0x80;
        uVar5 = 0x20;
        if (param_5 == 0) goto LAB_ram_48187f3e;
      }
      FUN_ram_4818b650(param_1,param_4,uVar5,param_6);
      param_6 = 0;
      iVar4 = iVar3;
LAB_ram_48187f3e:
      if (param_3 == 0) {
        return 0;
      }
      uVar6 = 0;
      while( true ) {
        uVar6 = uVar6 + 1;
        FUN_ram_4818b650(param_1,param_2,((param_1 - 3 < 5) - 1 & 0xffffffc0) + 0x80 >> 2,param_6);
        param_2 = param_2 + iVar4;
        if (uVar6 == param_3) break;
        param_6 = 0;
      }
      return 0;
    }
    iVar3 = thunk_FUN_ram_4ff21be8(param_4);
    if (((param_4 + 0xb0100000U < 0xc0000) || (iVar3 != 0)) || (param_5 == 0))
    goto LAB_ram_48187e46;
LAB_ram_48187de8:
    iVar4 = FUN_ram_4ff206d8(param_5,0x80c);
    if (iVar4 == 0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-sha","E (%lu) %s: Failed to allocate buf memory\n",uVar5,"esp-sha");
      return -1;
    }
    FUN_ram_4ff45158(iVar4,param_4,param_5);
    iVar8 = iVar4;
    uVar6 = param_5;
    if (param_3 == 0) {
LAB_ram_48187e4c:
      iVar3 = 1;
    }
    else {
      iVar3 = (int)((ulonglong)(param_3 + 0xf7f >> 7) * 0x8421088 >> 0x20);
      iVar7 = 0;
      if (param_3 + 0xf7f < 0xf80) goto LAB_ram_48187e88;
    }
  }
  else {
    iVar3 = thunk_FUN_ram_4ff21be8(param_4);
    if ((0xbffff < param_4 + 0xb0100000U) && (iVar3 == 0)) {
      if (param_5 != 0) goto LAB_ram_48187de8;
      if (param_3 != 0) {
        iVar3 = (int)((ulonglong)(param_3 + 0xf7f >> 7) * 0x8421088 >> 0x20);
        goto joined_r0x48187f28;
      }
LAB_ram_48187e46:
      iVar8 = 0;
      uVar6 = 0;
      goto LAB_ram_48187e4c;
    }
    if (param_3 == 0) goto LAB_ram_48187e46;
    iVar3 = (int)((ulonglong)(param_3 + 0xf7f >> 7) * 0x8421088 >> 0x20);
joined_r0x48187f28:
    iVar8 = 0;
    uVar6 = 0;
    if (param_3 + 0xf7f < 0xf80) {
      return 0;
    }
  }
  iVar9 = 0;
  do {
    uVar1 = param_3;
    if (0xf80 < param_3) {
      uVar1 = 0xf80;
    }
    iVar7 = FUN_ram_48187818(param_1,param_2,uVar1,iVar4,param_5,param_6);
    if (iVar7 != 0) break;
    iVar9 = iVar9 + 1;
    param_3 = param_3 - uVar1;
    param_2 = param_2 + uVar1;
    param_5 = 0;
    param_6 = 0;
  } while (iVar3 != iVar9);
  if (iVar8 == 0) {
    return iVar7;
  }
LAB_ram_48187e88:
  FUN_ram_48178af2(iVar8,uVar6);
  thunk_FUN_ram_4ff209c6(iVar8);
  return iVar7;
}


