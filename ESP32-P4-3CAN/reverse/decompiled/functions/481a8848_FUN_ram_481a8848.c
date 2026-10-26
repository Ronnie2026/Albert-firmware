/* Firmware entry: 0x481a8848 */

void FUN_ram_481a8848(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 auStack_60 [8];
  uint local_58;
  uint local_54;
  undefined1 auStack_50 [40];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar6 = param_4[1];
  iVar2 = -(uVar6 * 4 + 0xf & 0xfffffff0);
  uVar7 = *param_4;
  FUN_ram_4819492c(uVar6,param_4[2],8,auStack_60 + iVar2,auStack_50);
  if (param_3 == 1) {
    param_2 = param_2 * 0x68;
    iVar4 = *param_1 + param_2;
    *(undefined4 *)(iVar4 + 0x48) = uVar7;
    if (0x10 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/axi_dma_ll.h",0x2a3,
                       &DAT_ram_481e0b40,"width <= 16");
    }
    *(uint *)(iVar4 + 0x4c) = *(uint *)(iVar4 + 0x4c) & 0xfffffffc | uVar6 - 1 >> 3 & 3;
    uVar8 = 0;
    if (uVar6 != 0) {
      do {
        uVar3 = FUN_ram_481949aa(auStack_50,8,uVar8);
        uVar7 = FUN_ram_481949d6(auStack_60 + iVar2,uVar6,uVar8);
        iVar5 = *param_1;
        cVar1 = *(char *)(param_4 + 3);
        iVar4 = iVar5 + param_2;
        *(uint *)(iVar4 + 0x5c) = uVar8;
        *(undefined4 *)(iVar4 + 0x58) = uVar7;
        *(uint *)(iVar4 + 100) = uVar8;
        if (cVar1 != '\0') {
          uVar3 = (uVar3 & 0xff) >> 4 | uVar3 << 4;
          uVar3 = uVar3 >> 2 & 0x33 | ((int)(char)uVar3 & 0x3ffffff3U) << 2;
          uVar3 = uVar3 >> 1 & 0x55 | (uVar3 & 0x55) << 1;
        }
        iVar5 = iVar5 + param_2;
        uVar8 = uVar8 + 1;
        local_58 = *(uint *)(iVar5 + 0x60) & 0xffff0000 | uVar3 & 0xffff;
        *(uint *)(iVar5 + 0x60) = local_58;
        *(uint *)(iVar5 + 0x4c) = *(uint *)(iVar5 + 0x4c) | 4;
        *(uint *)(iVar5 + 0x4c) = *(uint *)(iVar5 + 0x4c) & 0xfffffffb;
      } while (uVar6 != uVar8);
    }
  }
  else {
    param_2 = param_2 * 0x68;
    iVar4 = *param_1 + param_2;
    *(undefined4 *)(iVar4 + 0x180) = uVar7;
    if (0x10 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/axi_dma_ll.h",0x266,
                       &DAT_ram_481e0b40,"width <= 16");
    }
    *(uint *)(iVar4 + 0x184) = *(uint *)(iVar4 + 0x184) & 0xfffffffc | uVar6 - 1 >> 3 & 3;
    if (uVar6 != 0) {
      uVar8 = 0;
      do {
        uVar3 = FUN_ram_481949aa(auStack_50,8,uVar8);
        uVar7 = FUN_ram_481949d6(auStack_60 + iVar2,uVar6,uVar8);
        iVar5 = *param_1;
        cVar1 = *(char *)(param_4 + 3);
        iVar4 = iVar5 + param_2;
        *(uint *)(iVar4 + 0x194) = uVar8;
        *(undefined4 *)(iVar4 + 400) = uVar7;
        *(uint *)(iVar4 + 0x19c) = uVar8;
        if (cVar1 != '\0') {
          uVar3 = (uVar3 & 0xff) >> 4 | uVar3 << 4;
          uVar3 = uVar3 >> 2 & 0x33 | ((int)(char)uVar3 & 0x3ffffff3U) << 2;
          uVar3 = uVar3 >> 1 & 0x55 | (uVar3 & 0x55) << 1;
        }
        iVar5 = iVar5 + param_2;
        uVar8 = uVar8 + 1;
        local_54 = *(uint *)(iVar5 + 0x198) & 0xffff0000 | uVar3 & 0xffff;
        *(uint *)(iVar5 + 0x198) = local_54;
        *(uint *)(iVar5 + 0x184) = *(uint *)(iVar5 + 0x184) | 4;
        *(uint *)(iVar5 + 0x184) = *(uint *)(iVar5 + 0x184) & 0xfffffffb;
      } while (uVar6 != uVar8);
    }
  }
  return;
}


