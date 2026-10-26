/* Firmware entry: 0x48183382 */

int FUN_ram_48183382(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x400 < param_3) {
    return -0x36;
  }
  if (0x100 < param_5) {
    return -0x38;
  }
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  if (((int)param_1[4] < (int)param_1[7]) && (param_1[5] == 0)) {
    if ((param_5 != 0) &&
       ((iVar4 = FUN_ram_48182db0(&local_70,param_4), iVar4 != 0 ||
        (iVar4 = FUN_ram_48183038(param_1,&local_70), iVar4 != 0)))) goto LAB_ram_481834ee;
  }
  else {
    iVar4 = FUN_ram_48183198(param_1,param_4,param_5,0);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  for (; param_3 != 0; param_3 = param_3 - uVar3) {
    iVar4 = __bswapsi2(param_1[3]);
    uVar5 = __bswapsi2(iVar4 + 1);
    *(char *)(param_1 + 3) = (char)uVar5;
    *(char *)((int)param_1 + 0xd) = (char)((uint)uVar5 >> 8);
    *(char *)((int)param_1 + 0xe) = (char)((uint)uVar5 >> 0x10);
    *(char *)((int)param_1 + 0xf) = (char)((uint)uVar5 >> 0x18);
    puVar2 = param_1 + 2;
    if (iVar4 + 1 == 0) {
      do {
        iVar4 = __bswapsi2(*puVar2);
        uVar5 = __bswapsi2(iVar4 + 1);
        *(char *)puVar2 = (char)uVar5;
        *(char *)((int)puVar2 + 1) = (char)((uint)uVar5 >> 8);
        *(char *)((int)puVar2 + 2) = (char)((uint)uVar5 >> 0x10);
        *(char *)((int)puVar2 + 3) = (char)((uint)uVar5 >> 0x18);
        if (iVar4 + 1 != 0) break;
        bVar1 = param_1 != puVar2;
        puVar2 = puVar2 + -1;
      } while (bVar1);
    }
    iVar4 = FUN_ram_4817b620(param_1 + 8,1,param_1,auStack_40);
    if (iVar4 != 0) goto LAB_ram_481834ee;
    uVar3 = param_3;
    if (0x10 < param_3) {
      uVar3 = 0x10;
    }
    FUN_ram_4ff45158(param_2,auStack_40,uVar3);
    param_2 = param_2 + uVar3;
  }
  iVar4 = FUN_ram_48183038(param_1,&local_70);
  if (iVar4 == 0) {
    param_1[4] = param_1[4] + 1;
  }
LAB_ram_481834ee:
  FUN_ram_48178af2(&local_70,0x40);
  return iVar4;
}


