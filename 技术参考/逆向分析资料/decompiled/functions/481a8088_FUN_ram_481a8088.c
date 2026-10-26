/* Firmware entry: 0x481a8088 */

void FUN_ram_481a8088(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auStack_60 [8];
  uint local_58;
  uint local_54;
  undefined1 auStack_50 [40];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = param_4[1];
  iVar2 = -(uVar3 * 4 + 0xf & 0xfffffff0);
  uVar8 = *param_4;
  FUN_ram_4819492c(uVar3,param_4[2],8,auStack_60 + iVar2,auStack_50);
  param_2 = param_2 * 0x28;
  iVar5 = *param_1 + param_2;
  if (param_3 == 1) {
    *(undefined4 *)(iVar5 + 0x334) = uVar8;
    if (0x20 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/ahb_dma_ll.h",0x2e2,
                       &DAT_ram_481e0b40,"width <= 32");
    }
    *(uint *)(iVar5 + 0x338) = *(uint *)(iVar5 + 0x338) & 0xfffffffc | uVar3 - 1 >> 3 & 3;
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        uVar4 = FUN_ram_481949aa(auStack_50,8,uVar7);
        uVar8 = FUN_ram_481949d6(auStack_60 + iVar2,uVar3,uVar7);
        iVar5 = *param_1;
        cVar1 = *(char *)(param_4 + 3);
        iVar6 = iVar5 + param_2;
        *(uint *)(iVar6 + 0x348) = uVar7;
        *(undefined4 *)(iVar6 + 0x344) = uVar8;
        *(uint *)(iVar6 + 0x350) = uVar7;
        local_58 = uVar4 & 0xff;
        if (cVar1 != '\0') {
          uVar4 = local_58 >> 4 | uVar4 << 4;
          uVar4 = uVar4 >> 2 & 0x33 | ((int)(char)uVar4 & 0x3ffffff3U) << 2;
          local_58 = (uVar4 & 0x55) << 1 | uVar4 >> 1 & 0x55;
        }
        iVar5 = iVar5 + param_2;
        uVar7 = uVar7 + 1;
        local_58 = local_58 | *(uint *)(iVar5 + 0x34c) & 0xffffff00;
        *(uint *)(iVar5 + 0x34c) = local_58;
        *(uint *)(iVar5 + 0x338) = *(uint *)(iVar5 + 0x338) | 4;
        *(uint *)(iVar5 + 0x338) = *(uint *)(iVar5 + 0x338) & 0xfffffffb;
      } while (uVar3 != uVar7);
    }
  }
  else {
    *(undefined4 *)(iVar5 + 700) = uVar8;
    if (0x20 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/ahb_dma_ll.h",0x2a5,
                       &DAT_ram_481e0b40,"width <= 32");
    }
    *(uint *)(iVar5 + 0x2c0) = *(uint *)(iVar5 + 0x2c0) & 0xfffffffc | uVar3 - 1 >> 3 & 3;
    if (uVar3 != 0) {
      uVar7 = 0;
      do {
        uVar4 = FUN_ram_481949aa(auStack_50,8,uVar7);
        uVar8 = FUN_ram_481949d6(auStack_60 + iVar2,uVar3,uVar7);
        iVar5 = *param_1;
        cVar1 = *(char *)(param_4 + 3);
        iVar6 = iVar5 + param_2;
        *(uint *)(iVar6 + 0x2d0) = uVar7;
        *(undefined4 *)(iVar6 + 0x2cc) = uVar8;
        *(uint *)(iVar6 + 0x2d8) = uVar7;
        local_54 = uVar4 & 0xff;
        if (cVar1 != '\0') {
          uVar4 = local_54 >> 4 | uVar4 << 4;
          uVar4 = uVar4 >> 2 & 0x33 | ((int)(char)uVar4 & 0x3ffffff3U) << 2;
          local_54 = (uVar4 & 0x55) << 1 | uVar4 >> 1 & 0x55;
        }
        iVar5 = iVar5 + param_2;
        uVar7 = uVar7 + 1;
        local_54 = local_54 | *(uint *)(iVar5 + 0x2d4) & 0xffffff00;
        *(uint *)(iVar5 + 0x2d4) = local_54;
        *(uint *)(iVar5 + 0x2c0) = *(uint *)(iVar5 + 0x2c0) | 4;
        *(uint *)(iVar5 + 0x2c0) = *(uint *)(iVar5 + 0x2c0) & 0xfffffffb;
      } while (uVar3 != uVar7);
    }
  }
  return;
}


